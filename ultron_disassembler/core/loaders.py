"""
Ultron Disassembler — Binary Format Loaders (Mach-O Universal/arm64/x86_64, ELF, PE/COFF, Raw Binary)
"""

from __future__ import annotations
import os
import re
import struct
import subprocess
from io import BytesIO
from typing import Dict, List, Optional, Tuple, Any

from .types import (
    Architecture,
    ByteType,
    UltronDisassembledFile,
    UltronSection,
    UltronSegment,
    UltronStringEntry,
    UltronTypeDesc,
    UltronTypeField,
)


def _decode_uleb128_function_starts(data: bytes, base_addr: int) -> List[int]:
    """Decode Mach-O LC_FUNCTION_STARTS ULEB128 delta-encoded function addresses."""
    addrs: List[int] = []
    addr = base_addr
    i = 0
    n = len(data)
    while i < n:
        delta = 0
        shift = 0
        while i < n:
            b = data[i]
            i += 1
            delta |= (b & 0x7F) << shift
            shift += 7
            if (b & 0x80) == 0:
                break
        if delta == 0:
            break
        addr += delta
        addrs.append(addr)
    return addrs


def _extract_ascii_strings_from_section(
    doc: UltronDisassembledFile,
    seg: UltronSegment,
    sec: UltronSection,
    min_len: int = 4,
) -> None:
    """Scan a section for null-terminated printable ASCII/UTF-8 strings and mark byte types."""
    raw = seg.read_bytes(sec.start_address, sec.length)
    if not raw:
        return
    pattern = re.compile(rb"[\x20-\x7e\t\r\n]{" + str(min_len).encode() + rb",}\x00")
    for m in pattern.finditer(raw):
        s_bytes = m.group(0)[:-1]
        try:
            s_val = s_bytes.decode("utf-8", errors="replace")
        except Exception:
            continue
        addr = sec.start_address + m.start()
        length = len(s_bytes) + 1
        entry = UltronStringEntry(
            address=addr,
            value=s_val,
            length=length,
            section_name=f"{seg.name},{sec.name}",
            encoding="utf-8",
        )
        if addr not in doc.strings_by_addr:
            doc.strings.append(entry)
            doc.strings_by_addr[addr] = entry
        seg.set_type_at(addr, length, ByteType.TYPE_ASCII)
        if addr not in doc.names:
            clean = re.sub(r"[^a-zA-Z0-9_]", "_", s_val[:24]).strip("_") or "str"
            doc.names[addr] = f"a{clean}_{addr:x}"


class MachOLoader:
    """Mach-O 64/32 and Universal (FAT) loader with LC_FUNCTION_STARTS, symbol stubs, and ObjC metadata."""

    FAT_MAGIC = 0xCAFEBABE
    FAT_CIGAM = 0xBEBAFECA
    MH_MAGIC_64 = 0xFEEDFACF
    MH_CIGAM_64 = 0xCFFAEDFE
    MH_MAGIC = 0xFEEDFACE

    CPU_TYPE_X86_64 = 0x01000007
    CPU_TYPE_ARM64 = 0x0100000C
    CPU_TYPE_I386 = 0x00000007
    CPU_TYPE_ARM = 0x0000000C

    LC_SEGMENT = 0x1
    LC_SYMTAB = 0x2
    LC_UNIXTHREAD = 0x5
    LC_DYSYMTAB = 0xB
    LC_SEGMENT_64 = 0x19
    LC_UUID = 0x1B
    LC_FUNCTION_STARTS = 0x26
    LC_MAIN = 0x80000028

    @classmethod
    def list_slices(cls, data: bytes) -> List[Dict[str, Any]]:
        if len(data) < 8:
            return []
        magic = struct.unpack(">I", data[:4])[0]
        if magic == cls.FAT_MAGIC:
            nfat = struct.unpack(">I", data[4:8])[0]
            slices = []
            for i in range(min(nfat, 16)):
                off = 8 + i * 20
                cputype, cpusubtype, f_off, f_size, align = struct.unpack(">IIIII", data[off : off + 20])
                arch_name = "arm64" if cputype == cls.CPU_TYPE_ARM64 else ("x86_64" if cputype == cls.CPU_TYPE_X86_64 else f"cpu_{cputype:x}")
                slices.append({"arch": arch_name, "cputype": cputype, "offset": f_off, "size": f_size})
            return slices
        magic_le = struct.unpack("<I", data[:4])[0]
        if magic_le in (cls.MH_MAGIC_64, cls.MH_MAGIC):
            cputype = struct.unpack("<I", data[4:8])[0]
            arch_name = "arm64" if cputype == cls.CPU_TYPE_ARM64 else ("x86_64" if cputype == cls.CPU_TYPE_X86_64 else "macho")
            return [{"arch": arch_name, "cputype": cputype, "offset": 0, "size": len(data)}]
        return []

    @classmethod
    def load(cls, file_path: str, data: bytes, preferred_arch: Optional[str] = "arm64") -> Tuple[UltronDisassembledFile, List[int]]:
        slices = cls.list_slices(data)
        slice_data = data
        chosen_arch = "arm64"
        if slices:
            selected = slices[0]
            if preferred_arch:
                for s in slices:
                    if s["arch"] == preferred_arch:
                        selected = s
                        break
            else:
                # Default to arm64 if present
                for s in slices:
                    if s["arch"] == "arm64":
                        selected = s
                        break
            slice_data = data[selected["offset"] : selected["offset"] + selected["size"]]
            chosen_arch = selected["arch"]

        magic, cputype, cpusubtype, filetype, ncmds, sizeofcmds, flags, _reserved = struct.unpack(
            "<IIIIIIII", slice_data[:32]
        )
        is_arm64 = cputype == cls.CPU_TYPE_ARM64
        doc = UltronDisassembledFile(
            file_path=file_path,
            format_name="Mach-O 64-bit",
            cpu_family="aarch64" if is_arm64 else "x86_64",
            cpu_subfamily="arm64" if is_arm64 else "x86_64",
            arch_enum=Architecture.ARCHITECTURE_AARCH64 if is_arm64 else Architecture.ARCHITECTURE_X86_64,
            address_space_bits=64,
            endianness="little",
            available_slices=[s["arch"] for s in slices] or [chosen_arch],
        )

        cmd_offset = 32
        symtab_cmd = None
        dysymtab_cmd = None
        func_starts_cmd = None
        main_entry_off = None
        unixthread_entry = None
        section_headers: List[Tuple[UltronSegment, UltronSection, int, int, int]] = []  # (seg, sec, flags, reserved1, reserved2)

        seg_idx = 0
        sec_global_idx = 0
        text_vmaddr = 0x100000000

        for _ in range(ncmds):
            if cmd_offset + 8 > len(slice_data):
                break
            cmd, cmdsize = struct.unpack("<II", slice_data[cmd_offset : cmd_offset + 8])
            if cmdsize < 8:
                break
            body = slice_data[cmd_offset : cmd_offset + cmdsize]

            if cmd == cls.LC_SEGMENT_64 and len(body) >= 72:
                segname_raw, vmaddr, vmsize, fileoff, filesize, maxprot, initprot, nsects, segflags = struct.unpack(
                    "<16sQQQQIIII", body[8:72]
                )
                segname = segname_raw.split(b"\x00", 1)[0].decode("utf-8", errors="replace")
                if segname == "__TEXT":
                    text_vmaddr = vmaddr
                    doc.base_address = vmaddr

                mapped = bytearray()
                if filesize > 0 and fileoff < len(slice_data):
                    mapped = bytearray(slice_data[fileoff : fileoff + filesize])
                    if vmsize > len(mapped) and vmsize - len(mapped) <= 4 * 1024 * 1024 and segname != "__PAGEZERO":
                        mapped.extend(b"\x00" * (vmsize - len(mapped)))

                seg = UltronSegment(
                    index=seg_idx,
                    name=segname,
                    start_address=vmaddr,
                    length=vmsize,
                    file_offset=fileoff,
                    file_length=filesize,
                    readable=bool(initprot & 1),
                    writable=bool(initprot & 2),
                    executable=bool(initprot & 4),
                    mapped_data=mapped,
                )
                seg_idx += 1

                sect_off = 72
                for _s in range(nsects):
                    if sect_off + 80 > len(body):
                        break
                    (
                        sectname_raw,
                        segname_s_raw,
                        s_addr,
                        s_size,
                        s_offset,
                        s_align,
                        s_reloff,
                        s_nreloc,
                        s_flags,
                        s_res1,
                        s_res2,
                        s_res3,
                    ) = struct.unpack("<16s16sQQIIIIIIII", body[sect_off : sect_off + 80])
                    sectname = sectname_raw.split(b"\x00", 1)[0].decode("utf-8", errors="replace")
                    is_code = bool(s_flags & 0x80000000) or sectname in ("__text", "__stubs", "__auth_stubs")
                    sec = UltronSection(
                        index=sec_global_idx,
                        name=sectname,
                        segment_name=segname,
                        start_address=s_addr,
                        length=s_size,
                        file_offset=s_offset,
                        flags=s_flags,
                        is_code=is_code,
                    )
                    sec_global_idx += 1
                    seg.sections.append(sec)
                    section_headers.append((seg, sec, s_flags, s_res1, s_res2))
                    sect_off += 80

                doc.segments.append(seg)

            elif cmd == cls.LC_MAIN and len(body) >= 24:
                entryoff, _stacksize = struct.unpack("<QQ", body[8:24])
                main_entry_off = entryoff

            elif cmd == cls.LC_UNIXTHREAD and len(body) >= 24:
                # Extract PC from thread state (last register or x86_64 RIP / arm64 PC)
                qwords = struct.unpack(f"<{(len(body) - 16) // 8}Q", body[16 : 16 + ((len(body) - 16) // 8) * 8])
                for q in reversed(qwords):
                    if q >= 0x100000000:
                        unixthread_entry = q
                        break

            elif cmd == cls.LC_SYMTAB and len(body) >= 24:
                symoff, nsyms, stroff, strsize = struct.unpack("<IIII", body[8:24])
                symtab_cmd = (symoff, nsyms, stroff, strsize)

            elif cmd == cls.LC_DYSYMTAB and len(body) >= 80:
                dysymtab_cmd = struct.unpack("<18I", body[8:80])

            elif cmd == cls.LC_FUNCTION_STARTS and len(body) >= 16:
                dataoff, datasize = struct.unpack("<II", body[8:16])
                func_starts_cmd = (dataoff, datasize)

            cmd_offset += cmdsize

        if main_entry_off is not None:
            doc.entry_point = text_vmaddr + main_entry_off
        elif unixthread_entry is not None:
            doc.entry_point = unixthread_entry
        else:
            doc.entry_point = text_vmaddr

        doc.current_address = doc.entry_point
        potential_procedures: List[int] = [doc.entry_point]
        doc.names[doc.entry_point] = "EntryPoint"

        # Parse LC_SYMTAB & LC_DYSYMTAB
        sym_names_by_index: List[str] = []
        if symtab_cmd:
            symoff, nsyms, stroff, strsize = symtab_cmd
            strtab = slice_data[stroff : stroff + strsize]
            for i in range(nsyms):
                off = symoff + i * 16
                if off + 16 > len(slice_data):
                    break
                n_strx, n_type, n_sect, n_desc, n_value = struct.unpack("<IBBHQ", slice_data[off : off + 16])
                end_str = strtab.find(b"\x00", n_strx)
                sym_name = (
                    strtab[n_strx:end_str].decode("utf-8", errors="replace")
                    if end_str != -1
                    else f"sym_{i}"
                )
                sym_names_by_index.append(sym_name)

                if n_value > 0 and sym_name and not sym_name.startswith("radr://"):
                    doc.names[n_value] = sym_name
                    sec_at = doc.get_section_at(n_value)
                    if sec_at and sec_at.is_code:
                        potential_procedures.append(n_value)
                    if n_type & 0x01:  # N_EXT
                        doc.exports.append({"name": sym_name, "address": f"0x{n_value:x}", "address_int": n_value})
                elif n_value == 0 and sym_name:
                    doc.imports.append({"name": sym_name, "ordinal": i})

        # Resolve indirect symbol stubs (__stubs, __auth_stubs, __got, __la_symbol_ptr)
        if dysymtab_cmd and sym_names_by_index:
            indirectsymoff = dysymtab_cmd[12]
            nindirectsyms = dysymtab_cmd[13]
            if indirectsymoff > 0 and nindirectsyms > 0 and indirectsymoff + nindirectsyms * 4 <= len(slice_data):
                indirect_indices = struct.unpack(
                    f"<{nindirectsyms}I",
                    slice_data[indirectsymoff : indirectsymoff + nindirectsyms * 4],
                )
                for seg, sec, s_flags, s_res1, s_res2 in section_headers:
                    sect_type = s_flags & 0xFF
                    # S_SYMBOL_STUBS = 0x8, S_LAZY_SYMBOL_POINTERS = 0x7, S_NON_LAZY_SYMBOL_POINTERS = 0x6
                    if sect_type in (0x6, 0x7, 0x8):
                        stride = s_res2 if sect_type == 0x8 and s_res2 > 0 else 8
                        count = sec.length // stride if stride > 0 else 0
                        for idx in range(count):
                            ind_pos = s_res1 + idx
                            if 0 <= ind_pos < len(indirect_indices):
                                sym_idx = indirect_indices[ind_pos]
                                if 0 <= sym_idx < len(sym_names_by_index):
                                    sname = sym_names_by_index[sym_idx]
                                    entry_addr = sec.start_address + idx * stride
                                    if sect_type == 0x8:
                                        stub_label = f"imp___stubs_{sname}"
                                        doc.names[entry_addr] = stub_label
                                        potential_procedures.append(entry_addr)
                                        for imp in doc.imports:
                                            if imp["name"] == sname and "address" not in imp:
                                                imp["address"] = f"0x{entry_addr:x}"
                                                imp["address_int"] = entry_addr
                                    else:
                                        ptr_label = f"ptr_{sname}"
                                        doc.names[entry_addr] = ptr_label
                                        seg.set_type_at(entry_addr, 8, ByteType.TYPE_INT64)

        # Decode LC_FUNCTION_STARTS
        if func_starts_cmd:
            dataoff, datasize = func_starts_cmd
            if dataoff + datasize <= len(slice_data):
                fn_addrs = _decode_uleb128_function_starts(slice_data[dataoff : dataoff + datasize], text_vmaddr)
                for fa in fn_addrs:
                    potential_procedures.append(fa)

        # Extract Strings & Objective-C Selector / Class metadata
        objc_methnames: Dict[int, str] = {}
        for seg in doc.segments:
            for sec in seg.sections:
                if sec.name in ("__cstring", "__objc_methname", "__objc_classname", "__rodata"):
                    min_l = 2
                    raw = seg.read_bytes(sec.start_address, sec.length) or b""
                    pos = 0
                    while pos < len(raw):
                        end = raw.find(b"\x00", pos)
                        if end == -1:
                            break
                        s_bytes = raw[pos:end]
                        addr = sec.start_address + pos
                        if len(s_bytes) >= min_l:
                            try:
                                s_str = s_bytes.decode("utf-8")
                                if s_str.isprintable():
                                    if sec.name == "__objc_methname":
                                        objc_methnames[addr] = s_str
                                        doc.names[addr] = f"aSel_{re.sub(r'[^a-zA-Z0-9_]', '_', s_str)}"
                                    elif sec.name == "__objc_classname":
                                        doc.names[addr] = f"aClass_{s_str}"
                                        doc.objc_classes.append({"name": s_str, "address": f"0x{addr:x}"})
                                    entry = UltronStringEntry(
                                        address=addr,
                                        value=s_str,
                                        length=len(s_bytes) + 1,
                                        section_name=f"{seg.name},{sec.name}",
                                    )
                                    doc.strings.append(entry)
                                    doc.strings_by_addr[addr] = entry
                                    seg.set_type_at(addr, len(s_bytes) + 1, ByteType.TYPE_ASCII)
                            except UnicodeDecodeError:
                                pass
                        pos = end + 1

        # Resolve __objc_selrefs pointers (handling both raw pointers and dyld chained fixups)
        for seg in doc.segments:
            for sec in seg.sections:
                if sec.name == "__objc_selrefs":
                    raw = seg.read_bytes(sec.start_address, sec.length) or b""
                    for off in range(0, len(raw) - 7, 8):
                        val = struct.unpack("<Q", raw[off : off + 8])[0]
                        sel_addr = sec.start_address + off
                        # Chained fixups often store 36-bit target offset in low bits
                        candidates = [val, text_vmaddr + (val & 0xFFFFFFFFF), val & 0xFFFFFFFFFFFF]
                        for cand in candidates:
                            if cand in objc_methnames:
                                sel_str = objc_methnames[cand]
                                doc.objc_selectors[sel_addr] = sel_str
                                doc.names[sel_addr] = f"@selector({sel_str})"
                                seg.set_type_at(sel_addr, 8, ByteType.TYPE_INT64)
                                break

        # Also harvest Objective-C method implementations via `otool -ov` if on macOS for 100% symbol fidelity
        try:
            proc = subprocess.run(
                ["otool", "-arch", chosen_arch, "-ov", file_path],
                capture_output=True,
                text=True,
                timeout=3.0,
            )
            if proc.returncode == 0 and proc.stdout:
                current_cls = None
                is_meta = False
                last_sel = None
                for line in proc.stdout.splitlines():
                    sline = line.strip()
                    if sline == "Meta Class":
                        is_meta = True
                    elif sline.startswith("Contents of ("):
                        current_cls = None
                        is_meta = False
                    elif sline.startswith("name ") and "0x" in sline:
                        # Either direct symbol name or relative offset `name 0xb308 (0x100024310)`
                        paren_m = re.search(r"\(0x([0-9a-fA-F]+)\)", sline)
                        if paren_m:
                            sel_ref_addr = int(paren_m.group(1), 16)
                            last_sel = doc.objc_selectors.get(sel_ref_addr) or objc_methnames.get(sel_ref_addr)
                        else:
                            parts = sline.split(None, 2)
                            if len(parts) == 3:
                                token = parts[2].strip()
                                if ":" in token or last_sel is None and current_cls is not None and not token[0].isupper():
                                    last_sel = token
                                else:
                                    current_cls = token
                    elif sline.startswith("imp ") and "0x" in sline and current_cls and last_sel:
                        all_hex = re.findall(r"0x([0-9a-fA-F]+)", sline)
                        if all_hex:
                            imp_addr = int(all_hex[-1], 16)
                            if imp_addr >= text_vmaddr:
                                prefix = "+" if is_meta else "-"
                                meth_full = f"{prefix}[{current_cls} {last_sel}]"
                                doc.names[imp_addr] = meth_full
                                potential_procedures.append(imp_addr)
                        last_sel = None
        except Exception:
            pass

        # Seed default standard types
        doc.types["objc_object"] = UltronTypeDesc(
            name="objc_object",
            kind="struct",
            size=8,
            fields=[UltronTypeField(name="isa", field_type="Class", offset=0, size=8, comment="Objective-C class pointer")],
        )
        doc.types["mach_header_64"] = UltronTypeDesc(
            name="mach_header_64",
            kind="struct",
            size=32,
            fields=[
                UltronTypeField("magic", "uint32_t", 0, 4),
                UltronTypeField("cputype", "int32_t", 4, 4),
                UltronTypeField("cpusubtype", "int32_t", 8, 4),
                UltronTypeField("filetype", "uint32_t", 12, 4),
                UltronTypeField("ncmds", "uint32_t", 16, 4),
                UltronTypeField("sizeofcmds", "uint32_t", 20, 4),
                UltronTypeField("flags", "uint32_t", 24, 4),
                UltronTypeField("reserved", "uint32_t", 28, 4),
            ],
        )

        # Deduplicate potential procedures while preserving order
        seen = set()
        ordered_procs = []
        for p in potential_procedures:
            if p not in seen:
                seen.add(p)
                ordered_procs.append(p)

        return doc, ordered_procs


class ELFLoader:
    """ELF 32/64-bit loader powered by pyelftools."""

    @classmethod
    def load(cls, file_path: str, data: bytes) -> Tuple[UltronDisassembledFile, List[int]]:
        from elftools.elf.elffile import ELFFile
        from elftools.elf.sections import SymbolTableSection

        elf = ELFFile(BytesIO(data))
        machine = elf.header["e_machine"]
        is_arm64 = machine == "EM_AARCH64"
        is_x86_64 = machine == "EM_X86_64"

        doc = UltronDisassembledFile(
            file_path=file_path,
            format_name=f"ELF {elf.elfclass}-bit",
            cpu_family="aarch64" if is_arm64 else "x86_64",
            cpu_subfamily="arm64" if is_arm64 else ("x86_64" if is_x86_64 else str(machine)),
            arch_enum=Architecture.ARCHITECTURE_AARCH64 if is_arm64 else Architecture.ARCHITECTURE_X86_64,
            address_space_bits=elf.elfclass,
            endianness="little" if elf.little_endian else "big",
            entry_point=elf.header["e_entry"],
            current_address=elf.header["e_entry"],
        )

        potential_procedures: List[int] = []
        if doc.entry_point:
            potential_procedures.append(doc.entry_point)
            doc.names[doc.entry_point] = "_start"

        seg_idx = 0
        for seg_hdr in elf.iter_segments():
            if seg_hdr["p_type"] != "PT_LOAD":
                continue
            vaddr = seg_hdr["p_vaddr"]
            memsz = seg_hdr["p_memsz"]
            filesz = seg_hdr["p_filesz"]
            offset = seg_hdr["p_offset"]
            flags = seg_hdr["p_flags"]
            mapped = bytearray(data[offset : offset + filesz])
            if memsz > len(mapped) and memsz - len(mapped) <= 4 * 1024 * 1024:
                mapped.extend(b"\x00" * (memsz - len(mapped)))
            seg = UltronSegment(
                index=seg_idx,
                name=f"LOAD_{seg_idx}",
                start_address=vaddr,
                length=max(memsz, len(mapped)),
                file_offset=offset,
                file_length=filesz,
                readable=bool(flags & 4),
                writable=bool(flags & 2),
                executable=bool(flags & 1),
                mapped_data=mapped,
            )
            seg_idx += 1
            doc.segments.append(seg)

        sec_idx = 0
        for sec in elf.iter_sections():
            s_addr = sec["sh_addr"]
            s_size = sec["sh_size"]
            if s_addr > 0 and s_size > 0:
                seg = doc.get_segment_at(s_addr)
                if seg:
                    is_code = bool(sec["sh_flags"] & 0x4)
                    hp_sec = UltronSection(
                        index=sec_idx,
                        name=sec.name,
                        segment_name=seg.name,
                        start_address=s_addr,
                        length=s_size,
                        file_offset=sec["sh_offset"],
                        flags=sec["sh_flags"],
                        is_code=is_code,
                    )
                    sec_idx += 1
                    seg.sections.append(hp_sec)
                    if sec.name in (".rodata", ".dynstr", ".data"):
                        _extract_ascii_strings_from_section(doc, seg, hp_sec)

            if isinstance(sec, SymbolTableSection):
                for sym in sec.iter_symbols():
                    val = sym["st_value"]
                    if val > 0 and sym.name:
                        doc.names[val] = sym.name
                        if sym["st_info"]["type"] == "STT_FUNC":
                            potential_procedures.append(val)
                            doc.exports.append({"name": sym.name, "address": f"0x{val:x}", "address_int": val})
                    elif val == 0 and sym.name:
                        doc.imports.append({"name": sym.name})

        return doc, potential_procedures


class PELoader:
    """PE32 / PE32+ Windows executable loader powered by pefile."""

    @classmethod
    def load(cls, file_path: str, data: bytes) -> Tuple[UltronDisassembledFile, List[int]]:
        import pefile

        pe = pefile.PE(data=data)
        image_base = pe.OPTIONAL_HEADER.ImageBase
        entry_rva = pe.OPTIONAL_HEADER.AddressOfEntryPoint
        entry_va = image_base + entry_rva
        machine = pe.FILE_HEADER.Machine
        is_arm64 = machine == 0xAA64
        is_64 = pe.FILE_HEADER.Machine in (0x8664, 0xAA64)

        doc = UltronDisassembledFile(
            file_path=file_path,
            format_name="PE32+" if is_64 else "PE32",
            cpu_family="aarch64" if is_arm64 else "x86_64",
            cpu_subfamily="arm64" if is_arm64 else ("x86_64" if is_64 else "i386"),
            arch_enum=Architecture.ARCHITECTURE_AARCH64 if is_arm64 else Architecture.ARCHITECTURE_X86_64,
            address_space_bits=64 if is_64 else 32,
            base_address=image_base,
            entry_point=entry_va,
            current_address=entry_va,
        )

        potential_procedures = [entry_va]
        doc.names[entry_va] = "EntryPoint"

        for idx, section in enumerate(pe.sections):
            sec_name = section.Name.split(b"\x00", 1)[0].decode("utf-8", errors="replace")
            vaddr = image_base + section.VirtualAddress
            vsize = max(section.Misc_VirtualSize, section.SizeOfRawData)
            raw_bytes = bytearray(section.get_data()[:vsize])
            if vsize > len(raw_bytes):
                raw_bytes.extend(b"\x00" * (vsize - len(raw_bytes)))
            is_exec = bool(section.Characteristics & 0x20000000)
            seg = UltronSegment(
                index=idx,
                name=sec_name,
                start_address=vaddr,
                length=vsize,
                file_offset=section.PointerToRawData,
                file_length=section.SizeOfRawData,
                readable=bool(section.Characteristics & 0x40000000),
                writable=bool(section.Characteristics & 0x80000000),
                executable=is_exec,
                mapped_data=raw_bytes,
            )
            hp_sec = UltronSection(
                index=idx,
                name=sec_name,
                segment_name=sec_name,
                start_address=vaddr,
                length=vsize,
                file_offset=section.PointerToRawData,
                flags=section.Characteristics,
                is_code=is_exec,
            )
            seg.sections.append(hp_sec)
            doc.segments.append(seg)
            if not is_exec:
                _extract_ascii_strings_from_section(doc, seg, hp_sec)

        if hasattr(pe, "DIRECTORY_ENTRY_IMPORT"):
            for entry in pe.DIRECTORY_ENTRY_IMPORT:
                dll_name = entry.dll.decode("utf-8", errors="replace") if entry.dll else "dll"
                for imp in entry.imports:
                    iname = imp.name.decode("utf-8", errors="replace") if imp.name else f"ord_{imp.ordinal}"
                    if imp.address:
                        doc.names[imp.address] = f"imp_{dll_name}!{iname}"
                    doc.imports.append({"name": f"{dll_name}!{iname}", "address": f"0x{imp.address:x}" if imp.address else None})

        if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
            for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                ename = exp.name.decode("utf-8", errors="replace") if exp.name else f"ord_{exp.ordinal}"
                eva = image_base + exp.address
                doc.names[eva] = ename
                potential_procedures.append(eva)
                doc.exports.append({"name": ename, "address": f"0x{eva:x}", "address_int": eva})

        return doc, potential_procedures


class RawBinaryLoader:
    """Raw Binary Loader for firmware and shellcode images."""

    @classmethod
    def load(
        cls,
        file_path: str,
        data: bytes,
        base_address: int = 0x100000000,
        arch: str = "arm64",
    ) -> Tuple[UltronDisassembledFile, List[int]]:
        is_arm64 = arch in ("arm64", "aarch64")
        doc = UltronDisassembledFile(
            file_path=file_path,
            format_name="Raw Binary",
            cpu_family="aarch64" if is_arm64 else "x86_64",
            cpu_subfamily="arm64" if is_arm64 else "x86_64",
            arch_enum=Architecture.ARCHITECTURE_AARCH64 if is_arm64 else Architecture.ARCHITECTURE_X86_64,
            base_address=base_address,
            entry_point=base_address,
            current_address=base_address,
        )
        seg = UltronSegment(
            index=0,
            name="ROM",
            start_address=base_address,
            length=len(data),
            file_offset=0,
            file_length=len(data),
            readable=True,
            writable=True,
            executable=True,
            mapped_data=bytearray(data),
        )
        sec = UltronSection(
            index=0,
            name="__text",
            segment_name="ROM",
            start_address=base_address,
            length=len(data),
            file_offset=0,
            is_code=True,
        )
        seg.sections.append(sec)
        doc.segments.append(seg)
        _extract_ascii_strings_from_section(doc, seg, sec)
        doc.names[base_address] = "EntryPoint"
        return doc, [base_address]


def load_binary_file(
    file_path: str,
    preferred_arch: Optional[str] = "arm64",
) -> Tuple[UltronDisassembledFile, List[int]]:
    """Auto-detect file format (Mach-O, Universal FAT, ELF, PE, or Raw Binary) and load into UltronDisassembledFile."""
    if os.path.isdir(file_path) and file_path.endswith(".app"):
        # Resolve macOS .app bundle executable
        macos_dir = os.path.join(file_path, "Contents", "MacOS")
        if os.path.isdir(macos_dir):
            app_name = os.path.basename(file_path)[:-4]
            cand = os.path.join(macos_dir, app_name)
            if os.path.isfile(cand):
                file_path = cand
            else:
                files = [os.path.join(macos_dir, f) for f in os.listdir(macos_dir) if os.path.isfile(os.path.join(macos_dir, f))]
                if files:
                    file_path = files[0]

    with open(file_path, "rb") as f:
        data = f.read()

    if len(data) >= 4:
        magic_be = struct.unpack(">I", data[:4])[0]
        magic_le = struct.unpack("<I", data[:4])[0]
        if magic_be in (MachOLoader.FAT_MAGIC, MachOLoader.FAT_CIGAM) or magic_le in (
            MachOLoader.MH_MAGIC_64,
            MachOLoader.MH_CIGAM_64,
            MachOLoader.MH_MAGIC,
        ):
            return MachOLoader.load(file_path, data, preferred_arch=preferred_arch)
        if data[:4] == b"\x7fELF":
            return ELFLoader.load(file_path, data)
        if data[:2] == b"MZ":
            return PELoader.load(file_path, data)

    return RawBinaryLoader.load(file_path, data, arch=preferred_arch or "arm64")
