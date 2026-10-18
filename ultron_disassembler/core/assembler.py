"""
Ultron Disassembler — Assembler & Binary Patching Service
"""

from __future__ import annotations
import ctypes
import os
import subprocess
import tempfile
from typing import Dict, Any, Optional

from .types import Architecture, UltronDisassembledFile
from .disassembler import CapstoneDisassemblerEngine


ULTRON_LLVM_DYLIB = os.path.join(os.path.dirname(os.path.dirname(__file__)), "lib", "libLLVMServices.dylib")

ARM64_INVERT_MAP = {
    "b.eq": "b.ne", "b.ne": "b.eq",
    "b.cs": "b.cc", "b.hs": "b.lo", "b.cc": "b.cs", "b.lo": "b.hs",
    "b.mi": "b.pl", "b.pl": "b.mi",
    "b.vs": "b.vc", "b.vc": "b.vs",
    "b.hi": "b.ls", "b.ls": "b.hi",
    "b.ge": "b.lt", "b.lt": "b.ge",
    "b.gt": "b.le", "b.le": "b.gt",
    "cbz": "cbnz", "cbnz": "cbz",
    "tbz": "tbnz", "tbnz": "tbz",
}

X86_INVERT_MAP = {
    "je": "jne", "jne": "je", "jz": "jnz", "jnz": "jz",
    "jg": "jle", "jle": "jg", "jge": "jl", "jl": "jge",
    "ja": "jbe", "jbe": "ja", "jae": "jb", "jb": "jae",
    "js": "jns", "jns": "js", "jo": "jno", "jno": "jo",
}


class AssemblerService:
    """In-memory LLVM Assembler & Binary Patcher with clang fallback."""

    _llvm_lib: Optional[ctypes.CDLL] = None

    @classmethod
    def _get_llvm_fn(cls):
        if cls._llvm_lib is None and os.path.isfile(ULTRON_LLVM_DYLIB):
            try:
                lib = ctypes.CDLL(ULTRON_LLVM_DYLIB)
                fn = lib.LLVMService_assemble_unchecked
                fn.argtypes = [
                    ctypes.c_char_p,                 # triple
                    ctypes.c_char_p,                 # cpu
                    ctypes.c_char_p,                 # features
                    ctypes.c_char_p,                 # instruction
                    ctypes.c_bool,                   # intel_syntax
                    ctypes.c_char_p,                 # out_bytes (128)
                    ctypes.POINTER(ctypes.c_uint32), # out_len
                    ctypes.c_char_p,                 # out_diag_errors (4096)
                ]
                fn.restype = ctypes.c_bool
                cls._llvm_lib = lib
                return fn
            except Exception:
                return None
        elif cls._llvm_lib is not None:
            return cls._llvm_lib.LLVMService_assemble_unchecked
        return None

    @classmethod
    def assemble(
        cls,
        instruction: str,
        arch: str = "arm64",
        intel_syntax: bool = True,
        cpu: str = "",
        features: str = "",
    ) -> Dict[str, Any]:
        is_arm64 = arch.lower() in ("arm64", "aarch64")
        triple = "arm64-apple-macosx" if is_arm64 else "x86_64-apple-macosx"

        fn = cls._get_llvm_fn()
        if fn is not None:
            out_buf = ctypes.create_string_buffer(128)
            out_len = ctypes.c_uint32(0)
            err_buf = ctypes.create_string_buffer(4096)
            ok = fn(
                triple.encode("utf-8"),
                cpu.encode("utf-8"),
                features.encode("utf-8"),
                instruction.encode("utf-8"),
                False if is_arm64 else bool(intel_syntax),
                out_buf,
                ctypes.byref(out_len),
                err_buf,
            )
            raw_bytes = out_buf.raw[: out_len.value] if ok else b""
            diag = err_buf.value.decode("utf-8", errors="replace").strip()
            return {
                "success": bool(ok and out_len.value > 0),
                "bytes": raw_bytes.hex(),
                "length": out_len.value,
                "diag_errors": diag,
                "triple": triple,
                "engine": "libLLVMServices.dylib (LLVMService_assemble_unchecked)",
            }

        # Fallback: assemble via system clang
        with tempfile.NamedTemporaryFile(suffix=".o", delete=False) as tmp_obj:
            obj_path = tmp_obj.name
        try:
            asm_src = ("" if is_arm64 or not intel_syntax else ".intel_syntax noprefix\n") + instruction + "\n"
            proc = subprocess.run(
                ["/usr/bin/clang", "-target", triple, "-x", "assembler", "-c", "-", "-o", obj_path],
                input=asm_src.encode("utf-8"),
                capture_output=True,
                timeout=5.0,
            )
            if proc.returncode != 0:
                return {
                    "success": False,
                    "bytes": "",
                    "length": 0,
                    "diag_errors": proc.stderr.decode("utf-8", errors="replace"),
                    "triple": triple,
                    "engine": "clang-assembler",
                }
            from .loaders import MachOLoader
            with open(obj_path, "rb") as f:
                obj_data = f.read()
            tmp_doc, _ = MachOLoader.load(obj_path, obj_data, preferred_arch="arm64" if is_arm64 else "x86_64")
            raw_out = b""
            for seg in tmp_doc.segments:
                for sec in seg.sections:
                    if sec.name == "__text":
                        raw_out = seg.read_bytes(sec.start_address, sec.length) or b""
                        break
            return {
                "success": len(raw_out) > 0,
                "bytes": raw_out.hex(),
                "length": len(raw_out),
                "diag_errors": "",
                "triple": triple,
                "engine": "clang-assembler",
            }
        finally:
            if os.path.exists(obj_path):
                os.unlink(obj_path)

    @classmethod
    def patch_instruction_at(
        cls,
        doc: UltronDisassembledFile,
        address: int,
        instruction_asm: str,
    ) -> Dict[str, Any]:
        is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64
        res = cls.assemble(
            instruction=instruction_asm,
            arch="arm64" if is_arm64 else "x86_64",
            intel_syntax=(doc.syntax_mode == "intel"),
        )
        if not res["success"]:
            return res
        new_bytes = bytes.fromhex(res["bytes"])
        old_ins = doc.instructions_by_addr.get(address)
        if old_ins and len(new_bytes) < old_ins.size and not is_arm64:
            # Pad with x86 NOPs (0x90) if shorter than original instruction
            new_bytes += b"\x90" * (old_ins.size - len(new_bytes))

        ok = doc.write_bytes(address, new_bytes, record_undo=True)
        if ok:
            CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
        res["patched_address"] = f"0x{address:x}"
        res["patched_bytes"] = new_bytes.hex()
        return res

    @classmethod
    def nop_instruction_at(cls, doc: UltronDisassembledFile, address: int) -> Dict[str, Any]:
        ins = doc.instructions_by_addr.get(address)
        if not ins:
            return {"success": False, "error": f"No instruction at 0x{address:x}"}
        is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64
        nop_bytes = b"\x1f\x20\x03\xd5" * (ins.size // 4) if is_arm64 else (b"\x90" * ins.size)
        ok = doc.write_bytes(address, nop_bytes, record_undo=True)
        if ok:
            CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
        return {
            "success": ok,
            "address": f"0x{address:x}",
            "old_mnemonic": f"{ins.mnemonic} {ins.op_str}",
            "new_bytes": nop_bytes.hex(),
        }

    @classmethod
    def invert_jump_at(cls, doc: UltronDisassembledFile, address: int) -> Dict[str, Any]:
        """Inverts conditional branch instructions for both ARM64 and x86_64."""
        ins = doc.instructions_by_addr.get(address)
        if not ins or not ins.is_conditional_jump:
            return {"success": False, "error": f"Instruction at 0x{address:x} is not a conditional branch"}

        is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64
        m_low = ins.mnemonic.lower()

        if is_arm64:
            raw_val = int.from_bytes(ins.raw_bytes, "little")
            if m_low.startswith("b."):
                # ARM64 B.cond: condition code is in bits [3:0]; flipping bit 0 inverts the condition!
                inverted_val = raw_val ^ 0x1
                new_bytes = inverted_val.to_bytes(4, "little")
                new_mnem = ARM64_INVERT_MAP.get(m_low, m_low)
            elif m_low in ("cbz", "cbnz", "tbz", "tbnz"):
                # Bit 24 toggles CBZ <-> CBNZ and TBZ <-> TBNZ
                inverted_val = raw_val ^ (1 << 24)
                new_bytes = inverted_val.to_bytes(4, "little")
                new_mnem = ARM64_INVERT_MAP.get(m_low, m_low)
            else:
                return {"success": False, "error": f"Unsupported ARM64 conditional branch: {ins.mnemonic}"}
        else:
            b = bytearray(ins.raw_bytes)
            if len(b) >= 2 and 0x70 <= b[0] <= 0x7F:
                b[0] ^= 0x01
                new_bytes = bytes(b)
            elif len(b) >= 6 and b[0] == 0x0F and 0x80 <= b[1] <= 0x8F:
                b[1] ^= 0x01
                new_bytes = bytes(b)
            else:
                return {"success": False, "error": f"Unsupported x86 branch encoding: {ins.raw_bytes.hex()}"}
            new_mnem = X86_INVERT_MAP.get(m_low, m_low)

        ok = doc.write_bytes(address, new_bytes, record_undo=True)
        if ok:
            CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
        return {
            "success": ok,
            "address": f"0x{address:x}",
            "old_instruction": f"{ins.mnemonic} {ins.op_str}",
            "new_mnemonic": new_mnem,
            "new_bytes": new_bytes.hex(),
        }

    @classmethod
    def export_patched_binary(
        cls,
        doc: UltronDisassembledFile,
        output_path: Optional[str] = None,
        resign_macho: bool = True,
    ) -> Dict[str, Any]:
        """
        Reconstructs and exports the patched binary executable to disk by writing
        modified segment mapped_data back at their file offsets, setting +x permissions,
        and ad-hoc codesigning Mach-O binaries on macOS.
        """
        if not os.path.isfile(doc.file_path):
            return {"success": False, "error": f"Source binary not found: {doc.file_path}"}

        if not output_path:
            base, ext = os.path.splitext(doc.file_path)
            output_path = f"{base}.ultron_patched{ext}"
        else:
            output_path = os.path.abspath(os.path.expanduser(output_path))

        try:
            with open(doc.file_path, "rb") as f:
                raw_file = bytearray(f.read())

            patched_segments = 0
            for seg in doc.segments:
                if seg.file_length > 0 and seg.mapped_data and seg.name != "__PAGEZERO":
                    write_len = min(seg.file_length, len(seg.mapped_data))
                    if seg.file_offset + write_len <= len(raw_file):
                        raw_file[seg.file_offset : seg.file_offset + write_len] = seg.mapped_data[:write_len]
                        patched_segments += 1

            with open(output_path, "wb") as f:
                f.write(raw_file)

            os.chmod(output_path, 0o755)

            codesign_status = "skipped"
            if resign_macho and "Mach-O" in doc.format_name:
                proc = subprocess.run(
                    ["/usr/bin/codesign", "-f", "-s", "-", output_path],
                    capture_output=True,
                    text=True,
                    timeout=5.0,
                )
                codesign_status = "signed (ad-hoc)" if proc.returncode == 0 else f"warning: {proc.stderr.strip()}"

            return {
                "success": True,
                "output_path": output_path,
                "size_bytes": len(raw_file),
                "patched_segments": patched_segments,
                "codesign": codesign_status,
            }
        except Exception as exc:
            return {"success": False, "error": str(exc)}

