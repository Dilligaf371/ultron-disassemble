"""
Ultron Disassembler — Disassembly & CFG Analysis Engine
"""

from __future__ import annotations
import re
from typing import Dict, List, Optional, Set, Tuple
import capstone

from .types import (
    Architecture,
    ByteType,
    CallType,
    UltronBasicBlock,
    UltronCallReference,
    UltronDisassembledFile,
    UltronInstruction,
    UltronLocalVariable,
    UltronProcedure,
    UltronSection,
    UltronSegment,
)


HEX_IMM_RE = re.compile(r"#?(0x[0-9a-fA-F]+)")
RIP_REL_RE = re.compile(r"\[rip\s*([+-])\s*(0x[0-9a-fA-F]+|\d+)\]")
STACK_OFF_RE = re.compile(r"\[(?:sp|x29|fp|rbp|rsp)\s*,\s*#?(-?0x[0-9a-fA-F]+|-?\d+)\]")


class CapstoneDisassemblerEngine:
    """Multi-architecture CPU Disassembly & CFG builder over Capstone."""

    @classmethod
    def _create_cs(cls, doc: UltronDisassembledFile) -> capstone.Cs:
        if doc.arch_enum == Architecture.ARCHITECTURE_AARCH64:
            md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)
        else:
            mode = capstone.CS_MODE_64 if doc.address_space_bits == 64 else capstone.CS_MODE_32
            md = capstone.Cs(capstone.CS_ARCH_X86, mode)
            if doc.syntax_mode == "att":
                md.syntax = capstone.CS_OPT_SYNTAX_ATT
            else:
                md.syntax = capstone.CS_OPT_SYNTAX_INTEL
        md.detail = False
        return md

    @classmethod
    def classify_instruction(cls, mnem: str, op_str: str, addr: int, size: int, is_arm64: bool) -> Tuple[bool, bool, bool, bool, bool, Optional[int], Optional[int]]:
        """Return (is_cjmp, is_ijmp, is_call, is_ret, is_nop, branch_target, call_target)."""
        m = mnem.lower()
        is_cjmp = False
        is_ijmp = False
        is_call = False
        is_ret = False
        is_nop = m in ("nop", "fnop", "endbr64", "endbr32")
        branch_target: Optional[int] = None
        call_target: Optional[int] = None

        if is_arm64:
            if m in ("ret", "retaa", "retab"):
                is_ret = True
            elif m in ("bl", "blr", "blraa", "blrab"):
                is_call = True
                hm = HEX_IMM_RE.search(op_str)
                if hm and m == "bl":
                    call_target = int(hm.group(1), 16)
            elif m == "b":
                is_ijmp = True
                hm = HEX_IMM_RE.search(op_str)
                if hm:
                    branch_target = int(hm.group(1), 16)
            elif m == "br":
                is_ijmp = True
            elif m.startswith("b.") or m in ("cbz", "cbnz", "tbz", "tbnz"):
                is_cjmp = True
                parts = [p.strip() for p in op_str.split(",")]
                if parts:
                    hm = HEX_IMM_RE.search(parts[-1])
                    if hm:
                        branch_target = int(hm.group(1), 16)
        else:
            if m in ("ret", "retq", "retn", "leave"):
                is_ret = m.startswith("ret")
            elif m in ("call", "callq"):
                is_call = True
                hm = HEX_IMM_RE.search(op_str)
                if hm and not ("[" in op_str or "*" in op_str):
                    call_target = int(hm.group(1), 16)
            elif m in ("jmp", "jmpq"):
                is_ijmp = True
                hm = HEX_IMM_RE.search(op_str)
                if hm and not ("[" in op_str or "*" in op_str):
                    branch_target = int(hm.group(1), 16)
            elif m.startswith("j") and m not in ("jmp", "jmpq"):
                is_cjmp = True
                hm = HEX_IMM_RE.search(op_str)
                if hm:
                    branch_target = int(hm.group(1), 16)

        return is_cjmp, is_ijmp, is_call, is_ret, is_nop, branch_target, call_target

    @classmethod
    def analyze_document(cls, doc: UltronDisassembledFile, seed_procedures: Optional[List[int]] = None, max_instructions: int = 120000) -> None:
        """
        Multi-pass binary analysis:
        1. Disassemble executable sections, mark byte_types (TYPE_CODE / TYPE_NEXT).
        2. Resolve ADRP+ADD/LDR (ARM64) and RIP-relative (x86_64) data/string/selector references & XREFs.
        3. Discover procedures from seeds, call targets, and prologue patterns.
        4. Build UltronProcedure & UltronBasicBlock Control Flow Graphs, local variables, callers & callees.
        """
        md = cls._create_cs(doc)
        is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64

        doc.instructions_by_addr.clear()
        doc.procedures.clear()
        doc.procedures_by_entry.clear()
        doc.xrefs_to.clear()
        doc.xrefs_from.clear()

        discovered_call_targets: Set[int] = set(seed_procedures or [doc.entry_point])
        code_ranges: List[Tuple[UltronSegment, UltronSection]] = []

        for seg in doc.segments:
            for sec in seg.sections:
                if sec.is_code or (seg.executable and not sec.name.startswith("__objc_") and sec.name != "__cstring"):
                    code_ranges.append((seg, sec))

        if not code_ranges:
            for seg in doc.segments:
                if seg.executable and seg.length > 0:
                    dummy_sec = UltronSection(0, "__text", seg.name, seg.start_address, len(seg.mapped_data), seg.file_offset, is_code=True)
                    code_ranges.append((seg, dummy_sec))

        total_insns = 0
        for seg, sec in code_ranges:
            raw = seg.read_bytes(sec.start_address, sec.length)
            if not raw:
                continue

            adrp_Window: Dict[str, int] = {}
            last_selector: Optional[str] = None

            for cs_ins in md.disasm(raw, sec.start_address):
                addr = cs_ins.address
                sz = cs_ins.size
                mnem = cs_ins.mnemonic
                op_str = cs_ins.op_str
                rbytes = bytes(cs_ins.bytes)

                is_cjmp, is_ijmp, is_call, is_ret, is_nop, b_target, c_target = cls.classify_instruction(
                    mnem, op_str, addr, sz, is_arm64
                )

                raw_args = [a.strip() for a in op_str.split(",")] if op_str else []
                fmt_args = list(raw_args)
                auto_comment: Optional[str] = None
                ref_addr: Optional[int] = None
                call_type = CallType.CALL_NONE

                if is_arm64:
                    m_low = mnem.lower()
                    if m_low in ("adrp", "adr") and len(raw_args) == 2:
                        hm = HEX_IMM_RE.search(raw_args[1])
                        if hm:
                            page_val = int(hm.group(1), 16)
                            adrp_Window[raw_args[0]] = page_val
                            if m_low == "adr" and page_val in doc.strings_by_addr:
                                ref_addr = page_val
                    elif m_low in ("add", "ldr") and len(raw_args) >= 2:
                        # Check ADRP + ADD/LDR pair: add x0, x0, #0x123 or ldr x1, [x1, #0x123]
                        for reg_k, base_page in list(adrp_Window.items()):
                            if reg_k in op_str:
                                hm = HEX_IMM_RE.search(raw_args[-1])
                                off_val = int(hm.group(1), 16) if hm else 0
                                candidate = base_page + off_val
                                if (
                                    candidate in doc.strings_by_addr
                                    or candidate in doc.objc_selectors
                                    or candidate in doc.names
                                ):
                                    ref_addr = candidate
                                    adrp_Window.pop(reg_k, None)
                                    break
                else:
                    # x86_64 RIP-relative addressing: [rip + 0x1234]
                    rm = RIP_REL_RE.search(op_str)
                    if rm:
                        sign = -1 if rm.group(1) == "-" else 1
                        disp = int(rm.group(2), 0) * sign
                        cand = addr + sz + disp
                        ref_addr = cand

                # Annotate referenced data/strings/selectors
                if ref_addr is not None:
                    doc.add_xref(addr, ref_addr)
                    if ref_addr in doc.objc_selectors:
                        sel_name = doc.objc_selectors[ref_addr]
                        last_selector = sel_name
                        auto_comment = f'@selector({sel_name})'
                    elif ref_addr in doc.strings_by_addr:
                        s_val = doc.strings_by_addr[ref_addr].value
                        if ref_addr in doc.names and doc.names[ref_addr].startswith("aSel_"):
                            last_selector = s_val
                        preview = s_val.replace("\n", "\\n")[:64]
                        auto_comment = f'@"{preview}"'
                    elif ref_addr in doc.names:
                        auto_comment = doc.names[ref_addr]

                # Annotate call / branch targets
                if is_call:
                    if c_target is not None:
                        call_type = CallType.CALL_DIRECT
                        discovered_call_targets.add(c_target)
                        doc.add_xref(addr, c_target)
                        tname = doc.names.get(c_target)
                        if tname:
                            fmt_args = [tname]
                            if "objc_msgSend" in tname:
                                call_type = CallType.CALL_OBJC
                                if last_selector:
                                    auto_comment = f"-[... {last_selector}]"
                    else:
                        call_type = CallType.CALL_UNKNOWN
                    last_selector = None
                elif (is_ijmp or is_cjmp) and b_target is not None:
                    doc.add_xref(addr, b_target)
                    # Tail-call to stub
                    sec_t = doc.get_section_at(b_target)
                    if is_ijmp and sec_t and sec_t.name in ("__stubs", "__auth_stubs"):
                        tname = doc.names.get(b_target)
                        if tname:
                            fmt_args = [tname]
                            auto_comment = f"tailcall {tname}"

                hp_ins = UltronInstruction(
                    address=addr,
                    size=sz,
                    mnemonic=mnem,
                    op_str=op_str,
                    raw_bytes=rbytes,
                    arch=doc.arch_enum,
                    raw_args=raw_args,
                    formatted_args=fmt_args,
                    is_conditional_jump=is_cjmp,
                    is_unconditional_jump=is_ijmp,
                    is_call=is_call,
                    is_ret=is_ret,
                    is_nop=is_nop,
                    branch_target=b_target,
                    call_target=c_target,
                    call_type=call_type,
                    referenced_address=ref_addr,
                    auto_comment=auto_comment,
                )
                doc.instructions_by_addr[addr] = hp_ins
                seg.set_type_at(addr, sz, ByteType.TYPE_CODE)

                # Prologue heuristic discovery (models CPUContext hasProcedurePrologAt:)
                if is_arm64:
                    if mnem in ("pacibsp", "paciasp") or (
                        mnem == "stp" and ("x29, x30, [sp" in op_str or "fp, lr, [sp" in op_str)
                    ):
                        prev = doc.instructions_by_addr.get(addr - 4)
                        if not prev or prev.is_ret or prev.is_unconditional_jump or prev.mnemonic in ("udf", "brk"):
                            discovered_call_targets.add(addr)
                else:
                    if mnem == "endbr64" or (mnem in ("push", "pushq") and op_str in ("rbp", "%rbp")):
                        discovered_call_targets.add(addr)

                total_insns += 1
                if total_insns >= max_instructions:
                    break
            if total_insns >= max_instructions:
                break

        # Filter valid procedure entrypoints within disassembled instructions
        valid_entries = sorted(a for a in discovered_call_targets if a in doc.instructions_by_addr)
        if not valid_entries and doc.instructions_by_addr:
            valid_entries = [min(doc.instructions_by_addr.keys())]

        # Build UltronProcedure and UltronBasicBlock CFG for each procedure
        entry_set = set(valid_entries)
        for idx, entry_addr in enumerate(valid_entries):
            next_proc_entry = valid_entries[idx + 1] if idx + 1 < len(valid_entries) else (entry_addr + 0x4000)
            seg = doc.get_segment_at(entry_addr)
            sec = doc.get_section_at(entry_addr)
            seg_name = seg.name if seg else "__TEXT"
            sec_name = sec.name if sec else "__text"

            if entry_addr not in doc.names:
                doc.names[entry_addr] = f"sub_{entry_addr:x}"
            proc_name = doc.names[entry_addr]

            if seg:
                ins0 = doc.instructions_by_addr[entry_addr]
                seg.set_type_at(entry_addr, ins0.size, ByteType.TYPE_PROCEDURE)

            proc = cls._build_procedure_cfg(
                doc=doc,
                proc_index=idx,
                entry_addr=entry_addr,
                max_end_addr=min(next_proc_entry, entry_addr + 0x8000),
                proc_name=proc_name,
                seg_name=seg_name,
                sec_name=sec_name,
                all_proc_entries=entry_set,
            )
            doc.procedures.append(proc)
            doc.procedures_by_entry[entry_addr] = proc

        # Populate cross-procedure callers & callees (UltronCallReference)
        for proc in doc.procedures:
            seen_callees: Set[Tuple[int, int]] = set()
            for bb in proc.basic_blocks:
                for ins in bb.instructions:
                    target = ins.call_target
                    if target is None and ins.is_unconditional_jump and ins.branch_target in entry_set:
                        if not (proc.entry_point <= ins.branch_target < proc.end_address):
                            target = ins.branch_target
                    if target is not None:
                        key = (ins.address, target)
                        if key not in seen_callees:
                            seen_callees.add(key)
                            tname = doc.names.get(target, f"0x{target:x}")
                            cref = UltronCallReference(
                                call_type=ins.call_type if ins.is_call else CallType.CALL_DIRECT,
                                from_address=ins.address,
                                to_address=target,
                                target_name=tname,
                            )
                            proc.callees.append(cref)
                        callee_proc = doc.procedures_by_entry.get(target)
                        if callee_proc:
                            caller_ref = UltronCallReference(
                                call_type=ins.call_type if ins.is_call else CallType.CALL_DIRECT,
                                from_address=ins.address,
                                to_address=proc.entry_point,
                                target_name=proc.name,
                            )
                            callee_proc.callers.append(caller_ref)

    @classmethod
    def _build_procedure_cfg(
        cls,
        doc: UltronDisassembledFile,
        proc_index: int,
        entry_addr: int,
        max_end_addr: int,
        proc_name: str,
        seg_name: str,
        sec_name: str,
        all_proc_entries: Set[int],
    ) -> UltronProcedure:
        """Partition a procedure's instructions into UltronBasicBlocks and wire CFG edges."""
        proc_insns: List[UltronInstruction] = []
        curr = entry_addr
        while curr < max_end_addr and curr in doc.instructions_by_addr:
            if curr != entry_addr and curr in all_proc_entries:
                break
            ins = doc.instructions_by_addr[curr]
            proc_insns.append(ins)
            curr += ins.size
            # Stop linear sweep on return or tail jump if no internal branch jumps past curr
            if ins.is_ret or (ins.is_unconditional_jump and (ins.branch_target is None or ins.branch_target in all_proc_entries or ins.branch_target < entry_addr)):
                has_forward_target = any(
                    i.branch_target is not None and curr <= i.branch_target < max_end_addr and i.branch_target not in all_proc_entries
                    for i in proc_insns
                )
                if not has_forward_target:
                    break

        if not proc_insns:
            return UltronProcedure(
                index=proc_index,
                entry_point=entry_addr,
                end_address=entry_addr + 4,
                name=proc_name,
                segment_name=seg_name,
                section_name=sec_name,
            )

        end_addr = proc_insns[-1].address + proc_insns[-1].size
        insn_addrs = {i.address for i in proc_insns}

        # Identify BasicBlock leaders
        leaders: Set[int] = {entry_addr}
        for i, ins in enumerate(proc_insns):
            if ins.is_conditional_jump or ins.is_unconditional_jump or ins.is_ret:
                if ins.branch_target in insn_addrs:
                    leaders.add(ins.branch_target)
                if i + 1 < len(proc_insns):
                    leaders.add(proc_insns[i + 1].address)

        sorted_leaders = sorted(leaders)
        blocks: List[UltronBasicBlock] = []
        block_by_start: Dict[int, UltronBasicBlock] = {}

        for b_idx, b_start in enumerate(sorted_leaders):
            b_limit = sorted_leaders[b_idx + 1] if b_idx + 1 < len(sorted_leaders) else end_addr
            b_insns = [ins for ins in proc_insns if b_start <= ins.address < b_limit]
            if not b_insns:
                continue
            b_end = b_insns[-1].address + b_insns[-1].size
            bb = UltronBasicBlock(
                index=len(blocks),
                start_address=b_start,
                end_address=b_end,
                instructions=b_insns,
            )
            blocks.append(bb)
            block_by_start[b_start] = bb

        # Wire CFG successors and predecessors
        local_labels: Dict[int, str] = {}
        for bb in blocks:
            last = bb.instructions[-1]
            fallthrough = last.address + last.size
            if last.is_ret:
                pass
            elif last.is_unconditional_jump:
                if last.branch_target in block_by_start:
                    bb.successors.append(last.branch_target)
                    local_labels[last.branch_target] = f"loc_{last.branch_target:x}"
            elif last.is_conditional_jump:
                if last.branch_target in block_by_start:
                    bb.then_successor = last.branch_target
                    bb.successors.append(last.branch_target)
                    local_labels[last.branch_target] = f"loc_{last.branch_target:x}"
                if fallthrough in block_by_start:
                    bb.else_successor = fallthrough
                    if fallthrough not in bb.successors:
                        bb.successors.append(fallthrough)
            else:
                if fallthrough in block_by_start:
                    bb.successors.append(fallthrough)

            for succ_addr in bb.successors:
                succ_bb = block_by_start.get(succ_addr)
                if succ_bb and bb.start_address not in succ_bb.predecessors:
                    succ_bb.predecessors.append(bb.start_address)

        # Recover stack frame local variables (ProcedureVariable)
        local_vars: Dict[int, UltronLocalVariable] = {}
        frame_size = 0
        for ins in proc_insns:
            if ins.mnemonic in ("sub", "subq") and ("sp, sp," in ins.op_str or "rsp," in ins.op_str):
                hm = HEX_IMM_RE.search(ins.op_str)
                if hm:
                    frame_size = max(frame_size, int(hm.group(1), 16))
            for sm in STACK_OFF_RE.finditer(ins.op_str):
                disp = int(sm.group(1), 0)
                if disp != 0 and abs(disp) <= 0x2000 and disp not in local_vars:
                    suffix = f"m{abs(disp):X}" if disp < 0 else f"{disp:X}"
                    local_vars[disp] = UltronLocalVariable(
                        name=f"var_{suffix}",
                        displacement=disp,
                        var_type="int64_t",
                    )

        return UltronProcedure(
            index=proc_index,
            entry_point=entry_addr,
            end_address=end_addr,
            name=proc_name,
            segment_name=seg_name,
            section_name=sec_name,
            basic_blocks=blocks,
            local_variables=sorted(local_vars.values(), key=lambda v: v.displacement),
            local_labels=local_labels,
            frame_size=frame_size,
        )
