"""
Ultron Disassembler — Advanced SSA & Structured Decompiler Engine
Supports SSA Versioning, Phi-Nodes, Constant Folding, ABI Signature Type Inference,
Struct Offset Resolution, Objective-C Runtime Rewriting, and Control-Flow Structuring.
"""

from __future__ import annotations
from dataclasses import dataclass, field
import re
from typing import Dict, List, Optional, Set, Tuple, Any

from .types import (
    Architecture,
    CallType,
    UltronBasicBlock,
    UltronDisassembledFile,
    UltronInstruction,
    UltronProcedure,
)
from .neural_and_emu import SymbolDemangler


COND_MAP_ARM64 = {
    "eq": "==",
    "ne": "!=",
    "cs": ">=",
    "hs": ">=",
    "cc": "<",
    "lo": "<",
    "mi": "< 0",
    "pl": ">= 0",
    "gt": ">",
    "ge": ">=",
    "lt": "<",
    "le": "<=",
    "hi": ">",
    "ls": "<=",
}

COND_MAP_X86 = {
    "je": "==",
    "jz": "==",
    "jne": "!=",
    "jnz": "!=",
    "jg": ">",
    "jge": ">=",
    "jl": "<",
    "jle": "<=",
    "ja": ">",
    "jae": ">=",
    "jb": "<",
    "jbe": "<=",
    "js": "< 0",
    "jns": ">= 0",
}

API_SIGNATURES: Dict[str, Tuple[str, List[str]]] = {
    "printf": ("int", ["const char *fmt", "..."]),
    "fprintf": ("int", ["FILE *stream", "const char *fmt", "..."]),
    "snprintf": ("int", ["char *buf", "size_t size", "const char *fmt"]),
    "sprintf": ("int", ["char *buf", "const char *fmt"]),
    "puts": ("int", ["const char *s"]),
    "malloc": ("void *", ["size_t size"]),
    "calloc": ("void *", ["size_t count", "size_t size"]),
    "realloc": ("void *", ["void *ptr", "size_t size"]),
    "free": ("void", ["void *ptr"]),
    "memcpy": ("void *", ["void *dst", "const void *src", "size_t n"]),
    "memmove": ("void *", ["void *dst", "const void *src", "size_t n"]),
    "memset": ("void *", ["void *b", "int c", "size_t len"]),
    "memcmp": ("int", ["const void *s1", "const void *s2", "size_t n"]),
    "strlen": ("size_t", ["const char *s"]),
    "strcmp": ("int", ["const char *s1", "const char *s2"]),
    "strncmp": ("int", ["const char *s1", "const char *s2", "size_t n"]),
    "strcpy": ("char *", ["char *dst", "const char *src"]),
    "strncpy": ("char *", ["char *dst", "const char *src", "size_t n"]),
    "open": ("int", ["const char *path", "int oflag"]),
    "read": ("ssize_t", ["int fd", "void *buf", "size_t nbyte"]),
    "write": ("ssize_t", ["int fd", "const void *buf", "size_t nbyte"]),
    "close": ("int", ["int fd"]),
    "system": ("int", ["const char *command"]),
    "getenv": ("char *", ["const char *name"]),
    "exit": ("void", ["int status"]),
    "NSLog": ("void", ["NSString *format", "..."]),
}

STACK_ACCESS_RE = re.compile(r"\[(?:sp|x29|fp|rbp|rsp)(?:\s*,\s*#?(-?0x[0-9a-fA-F]+|-?\d+))?\](?:!)?")
REG_OFFSET_RE = re.compile(r"\[\s*([a-zA-Z0-9]+)\s*,\s*#?(-?0x[0-9a-fA-F]+|-?\d+)\s*\]")


@dataclass
class DecompilerOptions:
    """Configuration options for structured & SSA decompilation."""
    remove_nops: bool = True
    remove_prologue_epilogue: bool = True
    rewrite_objc_messages: bool = True
    inline_strings: bool = True
    structure_control_flow: bool = True
    ssa_form: bool = False
    constant_folding: bool = True


class UltronDecompiler:
    """Structured + SSA Decompiler pipeline: DU-chains, Constant Folding, Struct Field Resolution, ObjC Rewrite."""

    @classmethod
    def _norm_reg(cls, reg: str, proc: UltronProcedure) -> str:
        r = reg.strip()
        if r.startswith("x") and r[1:].isdigit():
            idx = int(r[1:])
            override = proc.register_renames.get((2, idx))
            return override or f"r{idx}"
        if r.startswith("w") and r[1:].isdigit():
            idx = int(r[1:])
            override = proc.register_renames.get((2, idx))
            return override or f"r{idx}"
        return r

    @classmethod
    def _resolve_struct_field(cls, doc: UltronDisassembledFile, base_expr: str, offset: int) -> Optional[str]:
        """Resolves [reg, #offset] against known struct types in doc.types."""
        for tdesc in doc.types.values():
            if tdesc.kind == "struct":
                for f in tdesc.fields:
                    if f.offset == offset:
                        return f"(({tdesc.name} *){base_expr})->{f.name}"
        return None

    @classmethod
    def _try_parse_int(cls, s: str) -> Optional[int]:
        st = s.strip().lstrip("#$")
        if st.startswith(("0x", "0X", "-0x", "-0X")):
            try:
                return int(st, 16)
            except ValueError:
                return None
        if st.lstrip("-").isdigit():
            try:
                return int(st, 10)
            except ValueError:
                return None
        return None

    @classmethod
    def _format_stack_or_op(
        cls,
        op: str,
        doc: UltronDisassembledFile,
        proc: UltronProcedure,
        reg_vals: Dict[str, str],
        inline_strings: bool,
        ssa_versions: Optional[Dict[str, int]] = None,
    ) -> str:
        op_s = op.strip()
        sm = STACK_ACCESS_RE.search(op_s)
        if sm:
            disp_s = sm.group(1)
            if not disp_s:
                return "*sp"
            disp = int(disp_s, 0)
            # Check if procedure has a named local variable at this displacement
            for lv in proc.local_variables:
                if abs(lv.displacement) == abs(disp):
                    return lv.name
            suffix = f"m{abs(disp):X}" if disp < 0 else f"{disp:X}"
            return f"var_{suffix}"

        # Check register + offset struct access [x0, #0x18]
        rm = REG_OFFSET_RE.search(op_s)
        if rm:
            base_r = cls._norm_reg(rm.group(1), proc)
            off_val = int(rm.group(2), 0)
            struct_expr = cls._resolve_struct_field(doc, base_r, off_val)
            if struct_expr:
                return struct_expr
            return f"*({base_r} + 0x{off_val:x})" if off_val >= 0 else f"*({base_r} - 0x{abs(off_val):x})"

        if op_s.startswith("#"):
            return op_s[1:]
        norm = cls._norm_reg(op_s, proc)
        if inline_strings and norm in reg_vals and (reg_vals[norm].startswith('@"') or reg_vals[norm].startswith("@selector(")):
            return reg_vals[norm]
        if ssa_versions is not None and norm in ssa_versions and ssa_versions[norm] > 0:
            return f"{norm}_{ssa_versions[norm]}"
        return norm

    @classmethod
    def _bump_ssa(cls, base_var: str, ssa_versions: Optional[Dict[str, int]]) -> str:
        if ssa_versions is None:
            return base_var
        ver = ssa_versions.get(base_var, 0) + 1
        ssa_versions[base_var] = ver
        return f"{base_var}_{ver}"

    @classmethod
    def decompile_procedure(
        cls,
        doc: UltronDisassembledFile,
        proc: UltronProcedure,
        options: Optional[DecompilerOptions] = None,
    ) -> Dict[str, Any]:
        opts = options or DecompilerOptions()
        is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64

        lines: List[str] = []
        demangled = SymbolDemangler.demangle(proc.name)
        sig = proc.signature_override or f"int64_t {proc.name}(int64_t arg0, int64_t arg1)"
        mode_tag = "SSA-Form + Constant-Folding" if opts.ssa_form else "Structured High-Level AST"
        lines.append(f"/* Procedure: {proc.name} @ 0x{proc.entry_point:x} ({proc.segment_name},{proc.section_name}) | Engine: {mode_tag} */")
        if demangled != proc.name:
            lines.append(f"/* Demangled: {demangled} */")
        lines.append(f"{sig} {{")

        if proc.local_variables:
            var_names = ", ".join(v.name for v in proc.local_variables[:12])
            lines.append(f"    int64_t {var_names};")
            lines.append("")

        retreating_targets: Set[int] = set()
        for bb in proc.basic_blocks:
            for succ in bb.successors:
                if succ <= bb.start_address:
                    retreating_targets.add(succ)

        reg_vals: Dict[str, str] = {}
        const_vals: Dict[str, int] = {}
        ssa_versions: Optional[Dict[str, int]] = {"r0": 0, "r1": 0} if opts.ssa_form else None
        last_cmp: Tuple[str, str] = ("r0", "0x0")

        for b_idx, bb in enumerate(proc.basic_blocks):
            is_loop_head = bb.start_address in retreating_targets
            indent = "    "
            if b_idx > 0 or bb.start_address in proc.local_labels or is_loop_head:
                lbl = proc.local_labels.get(bb.start_address, f"loc_{bb.start_address:x}")
                if b_idx > 0:
                    lines.append("")
                if opts.structure_control_flow and is_loop_head:
                    lines.append(f"    /* ─── Natural Loop Header ({lbl}) ─── */")
                    lines.append(f"    while (1) {{ // {lbl}:")
                    indent = "        "
                else:
                    lines.append(f"{lbl}:")

            # Emit SSA Phi nodes at control-flow merge points (>1 predecessor)
            if opts.ssa_form and ssa_versions is not None and len(bb.predecessors) > 1:
                pred_str = ", ".join(f"BB_0x{p:x}" for p in bb.predecessors[:3])
                for r_phi in ("r0", "r1"):
                    if ssa_versions.get(r_phi, 0) > 0:
                        prev_v = f"{r_phi}_{ssa_versions[r_phi]}"
                        new_v = cls._bump_ssa(r_phi, ssa_versions)
                        lines.append(f"{indent}{new_v} = φ({prev_v} /* from {pred_str} */);")

            insns = bb.instructions
            for ins in insns:
                m = ins.mnemonic.lower()
                args = ins.raw_args

                if ins.address in doc.comments:
                    for c_line in doc.comments[ins.address].splitlines():
                        lines.append(f"{indent}// {c_line}")

                if opts.remove_nops and ins.is_nop:
                    continue

                if opts.remove_prologue_epilogue:
                    if m in ("pacibsp", "paciasp", "autibsp", "autiasp", "endbr64", "leave"):
                        continue
                    if m in ("stp", "ldp") and any(r in ins.op_str for r in ("x29, x30", "x20, x19", "x22, x21", "x24, x23", "x26, x25", "x28, x27")):
                        continue
                    if m in ("push", "pushq", "pop", "popq") and any(r in ins.op_str for r in ("rbp", "rbx", "r12", "r13", "r14", "r15")):
                        continue
                    if m in ("mov", "movq") and ins.op_str in ("x29, sp", "rbp, rsp", "%rsp, %rbp"):
                        continue
                    if m in ("sub", "add", "subq", "addq") and (ins.op_str.startswith("sp, sp,") or ins.op_str.startswith("rsp,")):
                        continue

                if ins.referenced_address is not None and args:
                    base_dst = cls._norm_reg(args[0], proc)
                    dst = cls._bump_ssa(base_dst, ssa_versions)
                    ref = ins.referenced_address
                    if ref in doc.objc_selectors:
                        sel_val = f'@selector({doc.objc_selectors[ref]})'
                        reg_vals[base_dst] = sel_val
                        if not opts.inline_strings:
                            lines.append(f"{indent}{dst} = {sel_val};")
                        continue
                    elif ref in doc.strings_by_addr:
                        s_lit = doc.strings_by_addr[ref].value.replace('"', '\\"').replace("\n", "\\n")
                        str_expr = f'@"{s_lit}"'
                        reg_vals[base_dst] = str_expr
                        lines.append(f"{indent}{dst} = {str_expr};")
                        continue
                    elif ref in doc.names:
                        sym = SymbolDemangler.demangle(doc.names[ref])
                        reg_vals[base_dst] = sym
                        lines.append(f"{indent}{dst} = *{sym};")
                        continue

                if is_arm64 and m == "adrp":
                    continue

                if m in ("cmp", "cmn", "tst", "cmpq", "cmpl", "test", "testq", "testl") and len(args) >= 2:
                    lhs = cls._format_stack_or_op(args[0], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    rhs = cls._format_stack_or_op(args[1], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    if m.startswith("tst") or m.startswith("test"):
                        last_cmp = (lhs, "0x0") if lhs == rhs else (f"({lhs} & {rhs})", "0x0")
                    else:
                        last_cmp = (lhs, rhs)
                    continue

                if ins.is_call:
                    tname = doc.names.get(ins.call_target, ins.formatted_args[0] if ins.formatted_args else f"sub_{ins.call_target:x}" if ins.call_target else ins.op_str)
                    clean_tname = tname.replace("imp___stubs__", "").replace("imp___stubs_", "")
                    base_ret = "r0" if is_arm64 else "rax"
                    ret_reg = cls._bump_ssa(base_ret, ssa_versions)

                    if opts.rewrite_objc_messages and "objc_msgSend" in clean_tname:
                        recv = reg_vals.get("r0" if is_arm64 else "rdi", "r0" if is_arm64 else "rdi")
                        sel = reg_vals.get("r1" if is_arm64 else "rsi", "selector")
                        if sel.startswith("@selector(") and sel.endswith(")"):
                            sel = sel[10:-1]
                        elif sel.startswith('@"') and sel.endswith('"'):
                            sel = sel[2:-1]
                        colon_count = sel.count(":")
                        if colon_count == 0:
                            msg_expr = f"[{recv} {sel}]"
                        else:
                            parts = [p for p in sel.split(":") if p]
                            arg_regs = ["r2", "r3", "r4", "r5"] if is_arm64 else ["rdx", "rcx", "r8", "r9"]
                            paired = []
                            for p_i, part in enumerate(parts):
                                areg = arg_regs[p_i] if p_i < len(arg_regs) else f"arg{p_i+2}"
                                aval = reg_vals.get(areg, areg)
                                paired.append(f"{part}:{aval}")
                            msg_expr = f"[{recv} {' '.join(paired)}]"
                        reg_vals[base_ret] = msg_expr
                        lines.append(f"{indent}{ret_reg} = {msg_expr};")
                        continue

                    if clean_tname in ("_objc_retain", "_objc_retainAutoreleasedReturnValue"):
                        arg0 = reg_vals.get(base_ret, base_ret)
                        lines.append(f"{indent}{ret_reg} = [{arg0} retain];")
                        continue
                    if clean_tname == "_objc_release":
                        arg0 = reg_vals.get(base_ret, base_ret)
                        lines.append(f"{indent}[{arg0} release];")
                        continue
                    if clean_tname == "_objc_autoreleasePoolPush":
                        lines.append(f"{indent}{ret_reg} = objc_autoreleasePoolPush();")
                        continue
                    if clean_tname == "_objc_autoreleasePoolPop":
                        arg0 = reg_vals.get(base_ret, base_ret)
                        lines.append(f"{indent}objc_autoreleasePoolPop({arg0});")
                        continue

                    fn_key = clean_tname.lstrip("_")
                    dem_fn = SymbolDemangler.demangle(fn_key)
                    arg_regs = ["r0", "r1", "r2", "r3"] if is_arm64 else ["rdi", "rsi", "rdx", "rcx"]
                    call_args = []
                    sig_info = API_SIGNATURES.get(fn_key)
                    max_args = len(sig_info[1]) if sig_info else 3
                    for idx_a, ar in enumerate(arg_regs[:max_args]):
                        if ar in reg_vals:
                            val_a = reg_vals[ar]
                            if sig_info and idx_a < len(sig_info[1]) and sig_info[1][idx_a] != "...":
                                p_name = sig_info[1][idx_a].split()[-1].lstrip("*")
                                call_args.append(f"/* {p_name}= */ {val_a}")
                            else:
                                call_args.append(val_a)
                        elif idx_a == 0:
                            call_args.append(ar)
                    call_str = f"{dem_fn}({', '.join(call_args)})"
                    reg_vals[base_ret] = call_str
                    if sig_info and sig_info[0] == "void":
                        lines.append(f"{indent}{call_str};")
                    else:
                        lines.append(f"{indent}{ret_reg} = {call_str};")
                    continue

                if ins.is_ret:
                    ret_reg = cls._format_stack_or_op("x0" if is_arm64 else "rax", doc, proc, reg_vals, False, ssa_versions)
                    lines.append(f"{indent}return {ret_reg};")
                    continue

                if ins.is_conditional_jump:
                    target_lbl = proc.local_labels.get(ins.branch_target, f"loc_{ins.branch_target:x}") if ins.branch_target else "unknown"
                    cond_expr = f"{last_cmp[0]} != {last_cmp[1]}"
                    if is_arm64:
                        if m in ("cbz", "cbnz") and len(args) >= 2:
                            r_op = cls._format_stack_or_op(args[0], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                            op_sym = "==" if m == "cbz" else "!="
                            cond_expr = f"{r_op} {op_sym} 0x0"
                        elif m in ("tbz", "tbnz") and len(args) >= 3:
                            r_op = cls._format_stack_or_op(args[0], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                            bit = args[1].lstrip("#")
                            op_sym = "==" if m == "tbz" else "!="
                            cond_expr = f"(({r_op} >> {bit}) & 1) {op_sym} 0x0"
                        elif m.startswith("b."):
                            cc = m[2:]
                            op_sym = COND_MAP_ARM64.get(cc, "==")
                            cond_expr = f"{last_cmp[0]} {op_sym} {last_cmp[1]}"
                    else:
                        op_sym = COND_MAP_X86.get(m, "==")
                        cond_expr = f"{last_cmp[0]} {op_sym} {last_cmp[1]}"

                    if opts.structure_control_flow and ins.branch_target is not None and ins.branch_target <= bb.start_address:
                        lines.append(f"{indent}if ({cond_expr}) continue; /* loop back-edge -> {target_lbl} */")
                    elif opts.structure_control_flow and is_loop_head:
                        lines.append(f"{indent}if ({cond_expr}) break; /* exit loop -> {target_lbl} */")
                    else:
                        lines.append(f"{indent}if ({cond_expr}) goto {target_lbl};")
                    continue

                if ins.is_unconditional_jump:
                    if ins.branch_target in doc.procedures_by_entry and ins.branch_target != proc.entry_point:
                        tname = doc.names.get(ins.branch_target, f"sub_{ins.branch_target:x}").replace("imp___stubs__", "")
                        lines.append(f"{indent}return {tname.lstrip('_')}();")
                    elif ins.branch_target is not None:
                        target_lbl = proc.local_labels.get(ins.branch_target, f"loc_{ins.branch_target:x}")
                        if opts.structure_control_flow and ins.branch_target == bb.start_address:
                            lines.append(f"{indent}continue;")
                        else:
                            lines.append(f"{indent}goto {target_lbl};")
                    else:
                        lines.append(f"{indent}goto *{ins.op_str};")
                    continue

                if m in ("mov", "movz", "movn", "movk", "movq", "movl", "movabs", "lea", "leaq") and len(args) >= 2:
                    base_dst = cls._format_stack_or_op(args[0], doc, proc, reg_vals, False, None)
                    src = cls._format_stack_or_op(args[1], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    dst = cls._bump_ssa(base_dst, ssa_versions)
                    c_int = cls._try_parse_int(src)
                    if c_int is not None:
                        const_vals[base_dst] = c_int
                    else:
                        const_vals.pop(base_dst, None)
                    reg_vals[base_dst] = src
                    lines.append(f"{indent}{dst} = {src};")
                elif m in ("ldr", "ldrb", "ldrh", "ldur", "ldrsw") and len(args) >= 2:
                    base_dst = cls._format_stack_or_op(args[0], doc, proc, reg_vals, False, None)
                    dst = cls._bump_ssa(base_dst, ssa_versions)
                    mem_arg = ", ".join(args[1:])
                    src = cls._format_stack_or_op(mem_arg, doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    const_vals.pop(base_dst, None)
                    reg_vals[base_dst] = src
                    lines.append(f"{indent}{dst} = {src};")
                elif m in ("str", "strb", "strh", "stur") and len(args) >= 2:
                    src = cls._format_stack_or_op(args[0], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    mem_arg = ", ".join(args[1:])
                    dst = cls._format_stack_or_op(mem_arg, doc, proc, reg_vals, False, None)
                    lines.append(f"{indent}{dst} = {src};")
                elif m in ("add", "adds", "sub", "subs", "and", "orr", "eor", "lsl", "lsr", "asr", "mul", "addq", "subq", "andq", "orq", "xorq", "shlq", "shrq") and len(args) >= 2:
                    op_map = {
                        "add": "+", "adds": "+", "addq": "+",
                        "sub": "-", "subs": "-", "subq": "-",
                        "and": "&", "andq": "&",
                        "orr": "|", "orq": "|",
                        "eor": "^", "xorq": "^",
                        "lsl": "<<", "shlq": "<<",
                        "lsr": ">>", "shrq": ">>",
                        "asr": ">>",
                        "mul": "*",
                    }
                    sym_op = op_map.get(m, "+")
                    base_dst = cls._format_stack_or_op(args[0], doc, proc, reg_vals, False, None)
                    if len(args) == 3:
                        raw_op1 = cls._format_stack_or_op(args[1], doc, proc, reg_vals, False, None)
                        op1 = cls._format_stack_or_op(args[1], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                        op2 = cls._format_stack_or_op(args[2], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                    else:
                        raw_op1 = base_dst
                        op1 = cls._format_stack_or_op(args[0], doc, proc, reg_vals, opts.inline_strings, ssa_versions)
                        op2 = cls._format_stack_or_op(args[1], doc, proc, reg_vals, opts.inline_strings, ssa_versions)

                    dst = cls._bump_ssa(base_dst, ssa_versions)
                    if m in ("eor", "xorq") and op1 == op2:
                        const_vals[base_dst] = 0
                        reg_vals[base_dst] = "0x0"
                        lines.append(f"{indent}{dst} = 0x0;")
                    else:
                        # Constant folding check!
                        v1_c = const_vals.get(raw_op1) if raw_op1 in const_vals else cls._try_parse_int(op1)
                        v2_c = cls._try_parse_int(op2)
                        folded_note = ""
                        if opts.constant_folding and v1_c is not None and v2_c is not None:
                            try:
                                if sym_op == "+":
                                    f_val = v1_c + v2_c
                                elif sym_op == "-":
                                    f_val = v1_c - v2_c
                                elif sym_op == "&":
                                    f_val = v1_c & v2_c
                                elif sym_op == "|":
                                    f_val = v1_c | v2_c
                                elif sym_op == "^":
                                    f_val = v1_c ^ v2_c
                                elif sym_op == "<<":
                                    f_val = v1_c << (v2_c & 63)
                                elif sym_op == ">>":
                                    f_val = v1_c >> (v2_c & 63)
                                elif sym_op == "*":
                                    f_val = v1_c * v2_c
                                else:
                                    f_val = None
                                if f_val is not None:
                                    const_vals[base_dst] = f_val
                                    folded_note = f" /* const = 0x{f_val:x} ({f_val}) */"
                            except Exception:
                                pass
                        expr = f"{op1} {sym_op} {op2}"
                        reg_vals[base_dst] = expr
                        lines.append(f"{indent}{dst} = {expr};{folded_note}")
                else:
                    comment_sfx = f" // {ins.auto_comment}" if ins.auto_comment else ""
                    lines.append(f"{indent}/* 0x{ins.address:x}: {ins.mnemonic} {ins.op_str} */{comment_sfx}")

            if opts.structure_control_flow and is_loop_head:
                lines.append("        break;")
                lines.append("    }")

        lines.append("}")
        pseudocode = "\n".join(lines)
        return {
            "procedure": proc.name,
            "entry_point": f"0x{proc.entry_point:x}",
            "signature": sig,
            "pseudocode": pseudocode,
            "line_count": len(lines),
            "retreating_edges": [f"0x{a:x}" for a in sorted(retreating_targets)],
        }
