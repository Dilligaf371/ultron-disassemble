"""
Ultron Disassembler — Neural Core, Security Auditor, Crypto Scanner, Symbol Demangler & CPU Micro-Emulator
"""

from __future__ import annotations
import math
import os
import re
import struct
import subprocess
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Tuple, Any

from .types import Architecture, UltronDisassembledFile, UltronProcedure, UltronInstruction, UltronTypeDesc, UltronTypeField


# ============================================================================
# 1. UNIVERSAL SYMBOL DEMANGLER (C++ Itanium, Swift, Rust)
# ============================================================================

class SymbolDemangler:
    """Demangles C++ (_Z / __Z), Swift ($s / _$s / _T), and Rust (_R / _ZN) symbols."""

    _cache: Dict[str, str] = {}

    SWIFT_STD_TYPES = {
        "Si": "Int",
        "Su": "UInt",
        "SS": "String",
        "Sb": "Bool",
        "Sf": "Float",
        "Sd": "Double",
        "yt": "Void",
        "yp": "Any",
        "yXl": "AnyObject",
    }

    @classmethod
    def demangle(cls, name: str) -> str:
        if not name:
            return name
        if name in cls._cache:
            return cls._cache[name]

        clean = name.strip()
        res = clean

        # Swift mangled symbol
        if clean.startswith(("_$s", "$s", "_$S", "$S", "_T0", "__T0")):
            res = cls._demangle_swift(clean)
        # Rust v0 or legacy mangled symbol
        elif clean.startswith(("_RNv", "RNv")) or ("17h" in clean and clean.endswith("E")):
            res = cls._demangle_rust(clean)
        # C++ Itanium ABI mangled symbol
        elif clean.startswith(("__Z", "_Z")):
            res = cls._demangle_cpp(clean)

        cls._cache[name] = res
        return res

    @classmethod
    def _demangle_cpp(cls, sym: str) -> str:
        try:
            # Normalize leading underscore on macOS Mach-O
            query = sym[1:] if sym.startswith("__Z") else sym
            proc = subprocess.run(
                ["/usr/bin/c++filt", "-n", query],
                capture_output=True,
                text=True,
                timeout=1.5,
            )
            if proc.returncode == 0 and proc.stdout.strip() and proc.stdout.strip() != query:
                return proc.stdout.strip()
        except Exception:
            pass
        # Built-in fallback for common Itanium _ZN<len><name>...E patterns
        parts: List[str] = []
        s = sym.lstrip("_")
        if s.startswith("ZN"):
            idx = 2
            while idx < len(s) and s[idx].isdigit():
                n_str = ""
                while idx < len(s) and s[idx].isdigit():
                    n_str += s[idx]
                    idx += 1
                n = int(n_str)
                if idx + n <= len(s):
                    parts.append(s[idx : idx + n])
                    idx += n
                else:
                    break
            if parts:
                return "::".join(parts) + "()"
        return sym

    @classmethod
    def _demangle_swift(cls, sym: str) -> str:
        try:
            proc = subprocess.run(
                ["/usr/bin/xcrun", "swift-demangle", "--compact", sym],
                capture_output=True,
                text=True,
                timeout=1.5,
            )
            if proc.returncode == 0 and proc.stdout.strip():
                return proc.stdout.strip()
        except Exception:
            pass
        # Fallback length-prefixed parser for Swift $s<len><mod><len><name>
        s = re.sub(r"^_?\$[sS]", "", sym)
        parts: List[str] = []
        idx = 0
        while idx < len(s):
            m = re.match(r"^(\d+)", s[idx:])
            if not m:
                break
            n = int(m.group(1))
            idx += len(m.group(1))
            if idx + n <= len(s):
                parts.append(s[idx : idx + n])
                idx += n
            else:
                break
        if parts:
            return ".".join(parts) + "()"
        return sym

    @classmethod
    def _demangle_rust(cls, sym: str) -> str:
        # Handle _ZN...17h<hex>E
        s = sym.lstrip("_")
        if s.startswith("ZN"):
            parts: List[str] = []
            idx = 2
            while idx < len(s) and s[idx].isdigit():
                n_str = ""
                while idx < len(s) and s[idx].isdigit():
                    n_str += s[idx]
                    idx += 1
                n = int(n_str)
                if idx + n <= len(s):
                    seg = s[idx : idx + n]
                    if not re.match(r"^h[0-9a-fA-F]{16}$", seg):
                        parts.append(seg.replace("$LT$", "<").replace("$GT$", ">").replace("$u20$", " "))
                    idx += n
                else:
                    break
            if parts:
                return "::".join(parts)
        return sym

    @classmethod
    def demangle_document(cls, doc: UltronDisassembledFile) -> Dict[str, Any]:
        count = 0
        renamed: List[Dict[str, str]] = []
        for addr, name in list(doc.names.items()):
            dem = cls.demangle(name)
            if dem != name:
                doc.inline_comments[addr] = f"Demangled: {dem}"
                count += 1
                renamed.append({"address": f"0x{addr:x}", "mangled": name, "demangled": dem})
        for proc in doc.procedures:
            dem = cls.demangle(proc.name)
            if dem != proc.name:
                proc.signature_override = dem
        return {"demangled_count": count, "items": renamed[:100]}


# ============================================================================
# 2. CRYPTOGRAPHIC CONSTANTS & ENTROPY SCANNER
# ============================================================================

CRYPTO_SIGNATURES = [
    {
        "name": "AES Rijndael S-Box",
        "category": "Symmetric Cipher (AES)",
        "severity": "HIGH",
        "pattern": bytes.fromhex("637c777bf26b6fc53001672bfed7ab76"),
    },
    {
        "name": "AES Inverse S-Box",
        "category": "Symmetric Cipher (AES)",
        "severity": "HIGH",
        "pattern": bytes.fromhex("52096ad53036a538bf40a39e81f3d7fb"),
    },
    {
        "name": "SHA-256 K Constants (0x428a2f98...)",
        "category": "Cryptographic Hash (SHA-256)",
        "severity": "MEDIUM",
        "pattern": bytes.fromhex("982f8a4291443771cf0fb5b5dba5dbef"),
    },
    {
        "name": "SHA-256 Initial State (Big-Endian)",
        "category": "Cryptographic Hash (SHA-256)",
        "severity": "MEDIUM",
        "pattern": bytes.fromhex("6a09e667bb67ae853c6ef372a54ff53a"),
    },
    {
        "name": "ChaCha20 / Salsa20 Sigma Constant",
        "category": "Stream Cipher (ChaCha20)",
        "severity": "HIGH",
        "pattern": b"expand 32-byte k",
    },
    {
        "name": "MD5 / SHA-1 Initialization Vector (0x67452301)",
        "category": "Cryptographic Hash (MD5/SHA1)",
        "severity": "MEDIUM",
        "pattern": bytes.fromhex("0123456789abcdef"),
    },
    {
        "name": "CRC32 Standard Polynomial (0xedb88320)",
        "category": "Checksum (CRC32)",
        "severity": "LOW",
        "pattern": bytes.fromhex("2083b8ed"),
    },
    {
        "name": "Base64 Standard Lookup Table",
        "category": "Encoding (Base64)",
        "severity": "LOW",
        "pattern": b"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
    },
]


# ============================================================================
# 3. SECURITY AUDITOR & VULNERABILITY SCANNER
# ============================================================================

DANGEROUS_SINKS = {
    "strcpy": ("CRITICAL", "CWE-120", "Unbounded string copy (Buffer Overflow risk); prefer strlcpy/snprintf."),
    "strcat": ("HIGH", "CWE-120", "Unbounded string concatenation; verify destination buffer bounds."),
    "sprintf": ("HIGH", "CWE-120", "Unbounded formatted string write; prefer snprintf."),
    "vsprintf": ("HIGH", "CWE-120", "Unbounded varargs formatted write; prefer vsnprintf."),
    "gets": ("CRITICAL", "CWE-242", "Inherently unsafe stdin read; guaranteed stack overflow vector."),
    "system": ("CRITICAL", "CWE-78", "OS shell command execution; audit argument for command injection."),
    "popen": ("HIGH", "CWE-78", "Process pipe execution via shell; audit command string construction."),
    "execve": ("MEDIUM", "CWE-78", "Direct process execution; check privilege boundary and arguments."),
    "posix_spawn": ("MEDIUM", "CWE-78", "Process creation API; inspect spawned binary path and environment."),
    "scanf": ("MEDIUM", "CWE-120", "Formatted input parsing; check field width specifiers."),
    "sscanf": ("MEDIUM", "CWE-120", "Formatted buffer parsing; check string width bounds."),
    "memcpy": ("LOW", "CWE-120", "Raw memory copy; verify size register (x2/rdx) cannot be attacker-controlled or negative."),
    "memmove": ("LOW", "CWE-120", "Raw memory move; verify length bounds."),
    "printf": ("MEDIUM", "CWE-134", "Format output; verify format string (x0/rdi) is a constant literal."),
    "syslog": ("MEDIUM", "CWE-134", "System log call; check for non-constant format string."),
    "NSLog": ("LOW", "CWE-134", "Objective-C diagnostic log; check format string & sensitive data exposure."),
    "rand": ("LOW", "CWE-338", "Weak PRNG (rand); unsuitable for cryptographic keys or nonces."),
    "random": ("LOW", "CWE-338", "Non-cryptographic PRNG; use SecRandomCopyBytes or arc4random_buf."),
    "CC_MD5": ("MEDIUM", "CWE-328", "Deprecated weak hash (MD5); collision attacks are trivial."),
    "CC_SHA1": ("MEDIUM", "CWE-328", "Deprecated hash (SHA-1); migrate to SHA-256/SHA-512."),
}


class UltronSecurityAuditor:
    """Comprehensive Binary Security, Hardening, Entropy & Cryptographic Auditor."""

    @classmethod
    def audit_document(cls, doc: UltronDisassembledFile) -> Dict[str, Any]:
        # 1. Check Binary Mitigations / Hardening
        all_sym_names = set(doc.names.values()) | {imp.get("name", "") for imp in doc.imports}
        all_mnemonics = {ins.mnemonic.lower() for ins in doc.instructions_by_addr.values()}

        has_stack_canary = any("stack_chk" in s for s in all_sym_names)
        has_arc = any("objc_release" in s or "objc_retain" in s or "objc_storeStrong" in s for s in all_sym_names)
        has_pac = bool({"pacibsp", "paciasp", "autibsp", "autiasp", "blraa", "braa"} & all_mnemonics)
        has_fortify = any("_chk" in s for s in all_sym_names)
        has_nx = not any(seg.writable and seg.executable for seg in doc.segments)
        has_pie = doc.base_address >= 0x100000000 or doc.format_name in ("Mach-O", "ELF")

        mitigations = {
            "PIE (ASLR)": has_pie,
            "NX (Non-Executable Heap/Stack)": has_nx,
            "Stack Canary (___stack_chk_guard)": has_stack_canary,
            "ARM64 PAC (Pointer Auth)": has_pac,
            "Objective-C ARC": has_arc,
            "FORTIFY_SOURCE (*_chk)": has_fortify,
        }

        # 2. Scan for Dangerous Sinks & Call Sites
        findings: List[Dict[str, Any]] = []
        for proc in doc.procedures:
            for ins in proc.all_instructions():
                if not ins.is_call:
                    continue
                target_name = ""
                if ins.call_target and ins.call_target in doc.names:
                    target_name = doc.names[ins.call_target]
                elif ins.formatted_args:
                    target_name = ins.formatted_args[0]
                clean_sym = target_name.replace("imp___stubs__", "").replace("imp___stubs_", "").lstrip("_")

                if clean_sym in DANGEROUS_SINKS:
                    sev, cwe, desc = DANGEROUS_SINKS[clean_sym]
                    findings.append({
                        "severity": sev,
                        "cwe": cwe,
                        "sink": clean_sym,
                        "procedure": proc.name,
                        "procedure_address": f"0x{proc.entry_point:x}",
                        "call_address": f"0x{ins.address:x}",
                        "description": desc,
                    })

        # Also check imports even if not direct-called via stub
        seen_sinks = {f["sink"] for f in findings}
        for imp in doc.imports:
            clean_imp = imp.get("name", "").lstrip("_")
            if clean_imp in DANGEROUS_SINKS and clean_imp not in seen_sinks:
                sev, cwe, desc = DANGEROUS_SINKS[clean_imp]
                findings.append({
                    "severity": sev,
                    "cwe": cwe,
                    "sink": clean_imp,
                    "procedure": "Import Table",
                    "procedure_address": imp.get("address", "0x0"),
                    "call_address": imp.get("address", "0x0"),
                    "description": f"Imported symbol: {desc}",
                })

        # 3. Scan for Cryptographic Constants
        crypto_hits: List[Dict[str, Any]] = []
        for seg in doc.segments:
            if not seg.mapped_data:
                continue
            data_bytes = bytes(seg.mapped_data)
            for sig in CRYPTO_SIGNATURES:
                pat = sig["pattern"]
                idx = data_bytes.find(pat)
                while idx != -1:
                    hit_addr = seg.start_address + idx
                    sec = doc.get_section_at(hit_addr)
                    crypto_hits.append({
                        "name": sig["name"],
                        "category": sig["category"],
                        "severity": sig["severity"],
                        "address": f"0x{hit_addr:x}",
                        "segment": seg.name,
                        "section": sec.name if sec else seg.name,
                        "preview": data_bytes[idx : idx + 16].hex(),
                    })
                    idx = data_bytes.find(pat, idx + len(pat))

        # 4. Compute Per-Section Shannon Entropy (0.0 - 8.0 bits/byte)
        section_entropy: List[Dict[str, Any]] = []
        for seg in doc.segments:
            for sec in seg.sections:
                raw = seg.read_bytes(sec.start_address, sec.length) or b""
                ent = cls._shannon_entropy(raw)
                status = "PACKED / ENCRYPTED" if ent > 7.1 else ("COMPRESSED / DENSE" if ent > 6.2 else "NORMAL CODE/DATA")
                section_entropy.append({
                    "segment": seg.name,
                    "section": sec.name,
                    "start": f"0x{sec.start_address:x}",
                    "size": sec.length,
                    "entropy_bits": round(ent, 3),
                    "entropy_pct": round((ent / 8.0) * 100, 1),
                    "status": status,
                })

        # 5. Classify Sensitive Strings (URLs, paths, keys, SQL, shell commands)
        interesting_strings: List[Dict[str, str]] = []
        for s in doc.strings:
            val = s.value
            tag = None
            if re.search(r"https?://|wss?://", val, re.I):
                tag = "URL / Endpoint"
            elif re.search(r"(password|secret|apikey|token|private_key|bearer|aes|hmac|auth)", val, re.I):
                tag = "Credential / Crypto Keyword"
            elif re.search(r"(/bin/sh|/bin/bash|/usr/bin/|/etc/|/Library/|/System/)", val):
                tag = "System File Path"
            elif re.search(r"(SELECT\s+.+\s+FROM|INSERT\s+INTO|CREATE\s+TABLE)", val, re.I):
                tag = "SQL Query"
            if tag:
                interesting_strings.append({
                    "address": f"0x{s.address:x}",
                    "category": tag,
                    "value": val[:120],
                })

        # Compute overall security score (100 = hardened, lower = more risk)
        score = 85
        for m_ok in mitigations.values():
            if not m_ok:
                score -= 5
        for f in findings:
            if f["severity"] == "CRITICAL":
                score -= 14
            elif f["severity"] == "HIGH":
                score -= 8
            elif f["severity"] == "MEDIUM":
                score -= 4
        score = max(10, min(99, score))

        return {
            "security_score": score,
            "mitigations": mitigations,
            "findings": findings[:100],
            "crypto_constants": crypto_hits[:50],
            "section_entropy": section_entropy,
            "interesting_strings": interesting_strings[:60],
        }

    @staticmethod
    def _shannon_entropy(data: bytes) -> float:
        if not data:
            return 0.0
        counts = [0] * 256
        for b in data:
            counts[b] += 1
        n = len(data)
        ent = 0.0
        for c in counts:
            if c > 0:
                p = c / n
                ent -= p * math.log2(p)
        return ent


# ============================================================================
# 4. ULTRON NEURAL FUNCTION ANALYZER & AUTO-RENAMER
# ============================================================================

class UltronNeuralAnalyzer:
    """
    Semantic AST + CFG + Call-Graph Neural Analyzer for binary procedures.
    Synthesizes algorithmic intent, suggests meaningful function & variable names,
    infers parameter types, and auto-renames symbols on request.
    """

    @classmethod
    def analyze_procedure(cls, doc: UltronDisassembledFile, proc: UltronProcedure, apply_rename: bool = False) -> Dict[str, Any]:
        insns = proc.all_instructions()
        mnemonics = [i.mnemonic.lower() for i in insns]
        callees: List[str] = []
        ref_strings: List[str] = []
        objc_sels: List[str] = []

        for ins in insns:
            if ins.is_call:
                tname = doc.names.get(ins.call_target, ins.formatted_args[0] if ins.formatted_args else "")
                clean = tname.replace("imp___stubs__", "").replace("imp___stubs_", "").lstrip("_")
                if clean and clean not in callees:
                    callees.append(clean)
            if ins.referenced_address is not None:
                ref = ins.referenced_address
                if ref in doc.strings_by_addr:
                    sv = doc.strings_by_addr[ref].value
                    if sv not in ref_strings:
                        ref_strings.append(sv)
                if ref in doc.objc_selectors:
                    sel = doc.objc_selectors[ref]
                    if sel not in objc_sels:
                        objc_sels.append(sel)

        # Count bitwise / arithmetic / memory / branch operations
        xor_count = sum(1 for m in mnemonics if m in ("eor", "xor", "xorq", "xorl", "pxor"))
        shift_count = sum(1 for m in mnemonics if m in ("lsl", "lsr", "asr", "ror", "shl", "shr", "sar", "rol"))
        mul_div_count = sum(1 for m in mnemonics if m in ("mul", "madd", "msub", "udiv", "sdiv", "imul", "idiv"))
        simd_count = sum(1 for m in mnemonics if m.startswith(("ld1", "st1", "dup", "fmla", "fadd", "movups", "movaps")))
        loop_edges = sum(1 for bb in proc.basic_blocks for s in bb.successors if s <= bb.start_address)
        complexity = max(1, sum(len(bb.successors) for bb in proc.basic_blocks) - len(proc.basic_blocks) + 2)

        # Synthesize semantic classification & suggested name
        category = "General Computation / Logic"
        suggested_name = proc.name
        suggested_sig = f"int64_t {proc.name}(int64_t arg0, int64_t arg1)"
        behaviors: List[str] = []

        addr_hex = f"{proc.entry_point & 0xffff:04x}"

        if objc_sels or any("objc_" in c for c in callees):
            category = "Objective-C Runtime / Messaging Routine"
            primary_sel = objc_sels[0].replace(":", "_") if objc_sels else "dispatch"
            suggested_name = f"ultron_objc_{primary_sel}_{addr_hex}"
            suggested_sig = f"id {suggested_name}(id self, SEL _cmd)"
            behaviors.append(f"Invokes Objective-C runtime with selectors: {', '.join(objc_sels[:4]) or 'objc_msgSend'}")
        elif xor_count + shift_count >= 3 and loop_edges >= 1:
            category = "Cryptographic / Bitwise Stream Transform"
            suggested_name = f"ultron_crypto_transform_{addr_hex}"
            suggested_sig = f"uint64_t {suggested_name}(uint8_t *buf, size_t len, uint64_t key)"
            behaviors.append(f"High density of bitwise XOR ({xor_count}) and bit-shifts ({shift_count}) inside {loop_edges} loop(s).")
        elif any(c in ("printf", "puts", "fprintf", "snprintf", "sprintf", "syslog", "NSLog") for c in callees):
            category = "Formatted Telemetry / Diagnostic Output"
            suggested_name = f"ultron_telemetry_log_{addr_hex}"
            suggested_sig = f"int {suggested_name}(const char *fmt, ...)"
            behaviors.append("Formats and outputs diagnostic strings via standard I/O or system logging.")
        elif any(c in ("malloc", "calloc", "realloc", "free", "mmap") for c in callees):
            category = "Heap Memory Allocator / Buffer Manager"
            suggested_name = f"ultron_heap_manager_{addr_hex}"
            suggested_sig = f"void *{suggested_name}(size_t size, uint32_t flags)"
            behaviors.append("Allocates or releases dynamic heap structures.")
        elif any(c in ("socket", "connect", "send", "recv", "bind", "listen", "accept") for c in callees):
            category = "Network Socket I/O Handler"
            suggested_name = f"ultron_net_socket_{addr_hex}"
            suggested_sig = f"ssize_t {suggested_name}(int sockfd, void *buffer, size_t length)"
            behaviors.append("Performs network socket communication.")
        elif any(c in ("open", "read", "write", "close", "fopen", "fread", "fwrite", "stat") for c in callees):
            category = "Filesystem I/O Controller"
            suggested_name = f"ultron_fs_io_{addr_hex}"
            suggested_sig = f"int {suggested_name}(const char *path, int flags)"
            behaviors.append("Interacts with host filesystem descriptors.")
        elif any(c in ("strcmp", "strncmp", "memcmp", "strlen", "strchr", "strstr") for c in callees):
            category = "String / Token Validation Routine"
            suggested_name = f"ultron_verify_token_{addr_hex}"
            suggested_sig = f"bool {suggested_name}(const char *input, const char *expected)"
            behaviors.append("Compares and validates input string buffers.")
        elif len(insns) <= 3 and any(i.is_unconditional_jump for i in insns):
            category = "Dynamic Linker Stub / Trampoline"
            target = callees[0] if callees else f"stub_{addr_hex}"
            suggested_name = f"stub_{target}"
            suggested_sig = f"void *{suggested_name}(void)"
            behaviors.append("PLT/GOT indirect jump stub to external imported symbol.")
        elif loop_edges >= 1:
            category = "Iterative Data Processing Loop"
            suggested_name = f"ultron_process_loop_{addr_hex}"
            suggested_sig = f"int64_t {suggested_name}(void *ctx, size_t count)"
            behaviors.append(f"Contains {loop_edges} natural back-edge loop(s) with cyclomatic complexity M={complexity}.")
        else:
            if proc.name.startswith("sub_"):
                suggested_name = f"ultron_fn_{addr_hex}"
                suggested_sig = f"int64_t {suggested_name}(int64_t arg0, int64_t arg1)"
            behaviors.append(f"Straight-line control flow ({len(proc.basic_blocks)} basic block(s), {len(insns)} instructions).")

        if ref_strings:
            behaviors.append(f"References {len(ref_strings)} literal string(s): " + ", ".join(f'"{s[:32]}"' for s in ref_strings[:3]))
        if callees:
            behaviors.append(f"Calls {len(callees)} downstream routine(s): " + ", ".join(callees[:5]))

        # Variable rename suggestions
        var_renames: List[Dict[str, str]] = []
        for idx, lv in enumerate(proc.local_variables):
            if lv.name.startswith("var_"):
                new_vn = f"local_ctx_{idx}" if idx == 0 else (f"saved_ptr_{idx}" if idx == 1 else f"acc_val_{idx}")
                var_renames.append({"old": lv.name, "new": new_vn, "displacement": f"0x{abs(lv.displacement):x}"})
                if apply_rename:
                    lv.name = new_vn

        applied = False
        if apply_rename:
            # Rename procedure if it's generic or user requested neural rename
            final_name = suggested_name if proc.name.startswith("sub_") else proc.name
            doc.set_name(proc.entry_point, final_name)
            proc.signature_override = suggested_sig.replace(suggested_name, final_name)
            doc.set_comment(
                proc.entry_point,
                f"[ULTRON NEURAL CORE] Category: {category} | Complexity M={complexity}",
                inline=False,
            )
            applied = True

        return {
            "procedure": proc.name,
            "address": f"0x{proc.entry_point:x}",
            "category": category,
            "cyclomatic_complexity": complexity,
            "instruction_count": len(insns),
            "loop_count": loop_edges,
            "suggested_name": suggested_name,
            "suggested_signature": suggested_sig,
            "callees": callees,
            "referenced_strings": ref_strings[:10],
            "objc_selectors": objc_sels[:10],
            "behaviors": behaviors,
            "variable_suggestions": var_renames,
            "applied": applied,
        }


# ============================================================================
# 5. CLEAN-ROOM CPU MICRO-EMULATOR (ARM64 & x86_64)
# ============================================================================

class UltronMicroEmulator:
    """
    Deterministic Clean-Room Instruction-Level CPU Micro-Emulator for ARM64 & x86_64.
    Supports interactive single-stepping (Step Into), full function execution,
    virtual stack frame read/write, NZCV/RFLAGS condition flags, and external call hooks.
    """

    STACK_BASE = 0x7FFEE00000
    STACK_SIZE = 0x10000  # 64 KB virtual stack

    def __init__(self, doc: UltronDisassembledFile, proc: UltronProcedure, init_regs: Optional[Dict[str, int]] = None) -> None:
        self.doc = doc
        self.proc = proc
        self.is_arm64 = doc.arch_enum == Architecture.ARCHITECTURE_AARCH64
        self.regs: Dict[str, int] = {}
        self.flags: Dict[str, int] = {"N": 0, "Z": 0, "C": 0, "V": 0}
        self.stack = bytearray(self.STACK_SIZE)
        self.mem_overrides: Dict[int, int] = {}
        self.trace: List[Dict[str, Any]] = []
        self.call_log: List[str] = []
        self.halted: bool = False
        self.halt_reason: str = "READY"
        self.step_count: int = 0
        self.modified_regs: List[str] = []
        self.reset(init_regs)

    def reset(self, init_regs: Optional[Dict[str, int]] = None) -> None:
        self.regs.clear()
        if self.is_arm64:
            for i in range(31):
                self.regs[f"x{i}"] = 0
            # Seed default realistic arguments
            self.regs["x0"] = 0x100008000
            self.regs["x1"] = 0x2A
            self.regs["x2"] = 0x10
            self.regs["x29"] = self.STACK_BASE + 0x8000
            self.regs["x30"] = 0xDEAD00000000  # Magic return sentinel
            self.regs["sp"] = self.STACK_BASE + 0x8000
            self.regs["pc"] = self.proc.entry_point
        else:
            for r in ("rax", "rbx", "rcx", "rdx", "rsi", "rdi", "rbp", "rsp", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15"):
                self.regs[r] = 0
            self.regs["rdi"] = 0x100008000
            self.regs["rsi"] = 0x2A
            self.regs["rdx"] = 0x10
            self.regs["rbp"] = self.STACK_BASE + 0x8000
            self.regs["rsp"] = self.STACK_BASE + 0x8000
            self.regs["rip"] = self.proc.entry_point

        if init_regs:
            for k, v in init_regs.items():
                rk = k.lower().strip()
                if rk in self.regs:
                    self.regs[rk] = v & 0xFFFFFFFFFFFFFFFF

        self.flags = {"N": 0, "Z": 0, "C": 0, "V": 0}
        self.stack = bytearray(self.STACK_SIZE)
        self.trace.clear()
        self.call_log.clear()
        self.halted = False
        self.halt_reason = "READY"
        self.step_count = 0
        self.modified_regs = []

    def _pc_key(self) -> str:
        return "pc" if self.is_arm64 else "rip"

    def _get_reg(self, name: str) -> int:
        r = name.strip().lower().lstrip("%")
        if r in ("xzr", "wzr"):
            return 0
        if r == "fp":
            return self.regs.get("x29", 0)
        if r == "lr":
            return self.regs.get("x30", 0)
        if r.startswith("w") and r[1:].isdigit():
            return self.regs.get(f"x{r[1:]}", 0) & 0xFFFFFFFF
        if r.startswith("e") and len(r) == 3 and "r" + r[1:] in self.regs:
            return self.regs["r" + r[1:]] & 0xFFFFFFFF
        return self.regs.get(r, 0)

    def _set_reg(self, name: str, val: int) -> None:
        r = name.strip().lower().lstrip("%")
        if r in ("xzr", "wzr"):
            return
        if r == "fp":
            r = "x29"
        elif r == "lr":
            r = "x30"
        elif r.startswith("w") and r[1:].isdigit():
            r = f"x{r[1:]}"
            val = val & 0xFFFFFFFF
        elif r.startswith("e") and len(r) == 3 and "r" + r[1:] in self.regs:
            r = "r" + r[1:]
            val = val & 0xFFFFFFFF
        val &= 0xFFFFFFFFFFFFFFFF
        if r in self.regs:
            if self.regs[r] != val and r not in self.modified_regs:
                self.modified_regs.append(r)
            self.regs[r] = val

    def _eval_operand(self, op: str) -> int:
        s = op.strip().lstrip("#$")
        if not s:
            return 0
        if s.startswith(("0x", "0X", "-0x", "-0X")):
            try:
                return int(s, 16) & 0xFFFFFFFFFFFFFFFF
            except ValueError:
                pass
        if s.lstrip("-").isdigit():
            return int(s) & 0xFFFFFFFFFFFFFFFF
        return self._get_reg(s)

    def _read_mem64(self, addr: int) -> int:
        if self.STACK_BASE <= addr < self.STACK_BASE + self.STACK_SIZE - 8:
            off = addr - self.STACK_BASE
            return struct.unpack("<Q", self.stack[off : off + 8])[0]
        raw = self.doc.read_bytes(addr, 8)
        if raw and len(raw) == 8:
            return struct.unpack("<Q", raw)[0]
        return self.mem_overrides.get(addr, 0)

    def _write_mem64(self, addr: int, val: int) -> None:
        val &= 0xFFFFFFFFFFFFFFFF
        if self.STACK_BASE <= addr < self.STACK_BASE + self.STACK_SIZE - 8:
            off = addr - self.STACK_BASE
            self.stack[off : off + 8] = struct.pack("<Q", val)
        else:
            self.mem_overrides[addr] = val

    def _parse_arm64_mem_addr(self, mem_str: str) -> Tuple[int, Optional[Tuple[str, int]]]:
        """Parses [base, #imm] or [base, #imm]! and returns (effective_address, optional_writeback)."""
        m = re.search(r"\[\s*([a-zA-Z0-9]+)(?:\s*,\s*#?(-?0x[0-9a-fA-F]+|-?\d+))?\s*\](\!)?", mem_str)
        if not m:
            return (0, None)
        base_reg = m.group(1)
        disp_str = m.group(2)
        pre_index = bool(m.group(3))
        base_val = self._get_reg(base_reg)
        disp = int(disp_str, 0) if disp_str else 0
        eff = (base_val + disp) & 0xFFFFFFFFFFFFFFFF
        wb = (base_reg, eff) if pre_index else None
        return (eff, wb)

    def _update_flags(self, res: int, op1: int = 0, op2: int = 0, is_sub: bool = True) -> None:
        res64 = res & 0xFFFFFFFFFFFFFFFF
        self.flags["Z"] = 1 if res64 == 0 else 0
        self.flags["N"] = 1 if (res64 & (1 << 63)) != 0 else 0
        if is_sub:
            self.flags["C"] = 1 if (op1 & 0xFFFFFFFFFFFFFFFF) >= (op2 & 0xFFFFFFFFFFFFFFFF) else 0
        else:
            self.flags["C"] = 1 if res > 0xFFFFFFFFFFFFFFFF else 0

    def _check_cond_arm64(self, cc: str) -> bool:
        z, n, c, v = self.flags["Z"], self.flags["N"], self.flags["C"], self.flags["V"]
        cc = cc.lower()
        if cc == "eq":
            return z == 1
        if cc == "ne":
            return z == 0
        if cc in ("cs", "hs"):
            return c == 1
        if cc in ("cc", "lo"):
            return c == 0
        if cc == "mi":
            return n == 1
        if cc == "pl":
            return n == 0
        if cc == "gt":
            return z == 0 and n == v
        if cc == "ge":
            return n == v
        if cc == "lt":
            return n != v
        if cc == "le":
            return z == 1 or n != v
        if cc == "hi":
            return c == 1 and z == 0
        if cc == "ls":
            return c == 0 or z == 1
        return False

    def step(self) -> Dict[str, Any]:
        if self.halted:
            return self.state_dict()

        self.modified_regs = []
        pc_k = self._pc_key()
        pc = self.regs[pc_k]

        if pc == 0xDEAD00000000 or self.step_count >= 256:
            self.halted = True
            self.halt_reason = "RETURNED TO CALLER" if pc == 0xDEAD00000000 else "MAX STEPS REACHED (256)"
            return self.state_dict()

        ins = self.doc.instructions_by_addr.get(pc)
        if not ins:
            self.halted = True
            self.halt_reason = f"UNMAPPED INSTRUCTION @ 0x{pc:x}"
            return self.state_dict()

        m = ins.mnemonic.lower()
        args = ins.raw_args
        next_pc = pc + ins.size
        note = ""

        if self.is_arm64:
            if m in ("nop", "pacibsp", "paciasp", "autibsp", "autiasp", "bti"):
                note = "No-op / PAC"
            elif m == "adrp" and len(args) >= 2:
                self._set_reg(args[0], self._eval_operand(args[1]))
            elif m in ("mov", "movz") and len(args) >= 2:
                self._set_reg(args[0], self._eval_operand(args[1]))
            elif m == "movk" and len(args) >= 2:
                cur = self._get_reg(args[0])
                imm = self._eval_operand(args[1])
                shift = 0
                if len(args) >= 3 and "lsl" in args[2].lower():
                    sm = re.search(r"#?(\d+)", args[2])
                    if sm:
                        shift = int(sm.group(1))
                mask = ~(0xFFFF << shift) & 0xFFFFFFFFFFFFFFFF
                self._set_reg(args[0], (cur & mask) | ((imm & 0xFFFF) << shift))
            elif m in ("add", "adds", "sub", "subs", "and", "ands", "orr", "eor", "lsl", "lsr", "asr", "mul") and len(args) >= 3:
                dst = args[0]
                v1 = self._eval_operand(args[1])
                v2 = self._eval_operand(args[2])
                if m.startswith("add"):
                    res = v1 + v2
                elif m.startswith("sub"):
                    res = v1 - v2
                elif m.startswith("and"):
                    res = v1 & v2
                elif m == "orr":
                    res = v1 | v2
                elif m == "eor":
                    res = v1 ^ v2
                elif m == "lsl":
                    res = v1 << (v2 & 63)
                elif m in ("lsr", "asr"):
                    res = v1 >> (v2 & 63)
                elif m == "mul":
                    res = v1 * v2
                else:
                    res = v1
                if m.endswith("s"):
                    self._update_flags(res, v1, v2, is_sub=m.startswith("sub"))
                self._set_reg(dst, res)
            elif m in ("cmp", "cmn", "tst") and len(args) >= 2:
                v1 = self._eval_operand(args[0])
                v2 = self._eval_operand(args[1])
                if m == "cmp":
                    self._update_flags(v1 - v2, v1, v2, is_sub=True)
                elif m == "cmn":
                    self._update_flags(v1 + v2, v1, v2, is_sub=False)
                elif m == "tst":
                    self._update_flags(v1 & v2, v1, v2, is_sub=False)
            elif m == "stp" and len(args) >= 3:
                mem_part = ", ".join(args[2:])
                eff, wb = self._parse_arm64_mem_addr(mem_part)
                if wb:
                    self._set_reg(wb[0], wb[1])
                if eff:
                    self._write_mem64(eff, self._get_reg(args[0]))
                    self._write_mem64(eff + 8, self._get_reg(args[1]))
            elif m == "ldp" and len(args) >= 3:
                mem_part = ", ".join(args[2:])
                eff, wb = self._parse_arm64_mem_addr(mem_part)
                if eff:
                    self._set_reg(args[0], self._read_mem64(eff))
                    self._set_reg(args[1], self._read_mem64(eff + 8))
                # Handle post-index [sp], #0x20
                pm = re.search(r"\]\s*,\s*#?(-?0x[0-9a-fA-F]+|-?\d+)", mem_part)
                if pm:
                    base_m = re.search(r"\[\s*([a-zA-Z0-9]+)", mem_part)
                    if base_m:
                        b_reg = base_m.group(1)
                        self._set_reg(b_reg, self._get_reg(b_reg) + int(pm.group(1), 0))
            elif m in ("str", "stur", "strb", "strh") and len(args) >= 2:
                mem_part = ", ".join(args[1:])
                eff, wb = self._parse_arm64_mem_addr(mem_part)
                if wb:
                    self._set_reg(wb[0], wb[1])
                if eff:
                    self._write_mem64(eff, self._get_reg(args[0]))
            elif m in ("ldr", "ldur", "ldrb", "ldrh", "ldrsw") and len(args) >= 2:
                mem_part = ", ".join(args[1:])
                eff, wb = self._parse_arm64_mem_addr(mem_part)
                if wb:
                    self._set_reg(wb[0], wb[1])
                if eff:
                    val = self._read_mem64(eff)
                    if m == "ldrb":
                        val &= 0xFF
                    elif m == "ldrh":
                        val &= 0xFFFF
                    self._set_reg(args[0], val)
            elif m in ("cbz", "cbnz") and len(args) >= 2:
                rv = self._get_reg(args[0])
                take = (rv == 0) if m == "cbz" else (rv != 0)
                if take and ins.branch_target is not None:
                    next_pc = ins.branch_target
                    note = f"Branch TAKEN -> 0x{next_pc:x}"
                else:
                    note = "Branch NOT taken"
            elif m.startswith("b.") and ins.branch_target is not None:
                cc = m[2:]
                if self._check_cond_arm64(cc):
                    next_pc = ins.branch_target
                    note = f"B.{cc.upper()} TAKEN -> 0x{next_pc:x}"
                else:
                    note = f"B.{cc.upper()} NOT taken"
            elif m == "b" and ins.branch_target is not None:
                next_pc = ins.branch_target
            elif ins.is_call:
                tname = self.doc.names.get(ins.call_target, f"sub_{ins.call_target:x}" if ins.call_target else ins.op_str)
                clean = tname.replace("imp___stubs__", "").replace("imp___stubs_", "").lstrip("_")
                arg0 = self._get_reg("x0")
                arg1 = self._get_reg("x1")
                # Resolve string if arg0 points to string table
                arg0_str = self.doc.strings_by_addr[arg0].value if arg0 in self.doc.strings_by_addr else f"0x{arg0:x}"
                if "objc_msgSend" in clean:
                    sel_str = self.doc.objc_selectors.get(arg1, f"sel_0x{arg1:x}")
                    log_entry = f"objc_msgSend(self=0x{arg0:x}, _cmd=@selector({sel_str})) -> 0x100090000"
                    self._set_reg("x0", 0x100090000)
                elif clean in ("strlen",):
                    slen = len(arg0_str) if arg0 in self.doc.strings_by_addr else 12
                    log_entry = f'strlen("{arg0_str}") -> {slen}'
                    self._set_reg("x0", slen)
                else:
                    log_entry = f'{clean}({arg0_str}, 0x{arg1:x}) -> 0x1'
                    self._set_reg("x0", 1)
                self.call_log.append(log_entry)
                note = f"Simulated Call: {log_entry}"
            elif ins.is_ret:
                next_pc = self._get_reg("x30")
                self.halted = True
                self.halt_reason = f"RET (Return Value X0 = 0x{self._get_reg('x0'):x})"
        else:
            # x86_64 micro-execution
            if m in ("mov", "movq", "movl", "movabs", "lea", "leaq") and len(args) >= 2:
                self._set_reg(args[0], self._eval_operand(args[1]))
            elif m in ("xor", "xorq", "xorl") and len(args) >= 2:
                v1 = self._eval_operand(args[0])
                v2 = self._eval_operand(args[1])
                self._set_reg(args[0], v1 ^ v2)
            elif m in ("add", "addq", "sub", "subq") and len(args) >= 2:
                v1 = self._eval_operand(args[0])
                v2 = self._eval_operand(args[1])
                res = (v1 + v2) if m.startswith("add") else (v1 - v2)
                self._update_flags(res, v1, v2, is_sub=m.startswith("sub"))
                self._set_reg(args[0], res)
            elif ins.is_call:
                tname = self.doc.names.get(ins.call_target, ins.op_str)
                self._set_reg("rax", 1)
                self.call_log.append(f"{tname}(0x{self._get_reg('rdi'):x}) -> 0x1")
            elif ins.is_ret:
                self.halted = True
                self.halt_reason = f"RET (RAX = 0x{self._get_reg('rax'):x})"

        self.step_count += 1
        self.trace.append({
            "step": self.step_count,
            "address": f"0x{pc:x}",
            "mnemonic": ins.mnemonic,
            "op_str": ", ".join(ins.formatted_args) if ins.formatted_args else ins.op_str,
            "modified_regs": list(self.modified_regs),
            "note": note,
        })
        self.regs[pc_k] = next_pc
        return self.state_dict()

    def run_to_return(self, max_steps: int = 64) -> Dict[str, Any]:
        for _ in range(max_steps):
            if self.halted:
                break
            self.step()
        return self.state_dict()

    def state_dict(self) -> Dict[str, Any]:
        pc_k = self._pc_key()
        cur_pc = self.regs.get(pc_k, 0)
        sp_val = self.regs.get("sp" if self.is_arm64 else "rsp", self.STACK_BASE + 0x8000)

        # Format top 8 stack slots around SP
        stack_slots: List[Dict[str, str]] = []
        for i in range(8):
            s_addr = sp_val + (i * 8)
            val = self._read_mem64(s_addr)
            stack_slots.append({
                "offset": f"SP+0x{i*8:02x}",
                "address": f"0x{s_addr:x}",
                "value": f"0x{val:016x}",
            })

        # Format registers with string/symbol resolution hints
        reg_list: List[Dict[str, Any]] = []
        primary_regs = (
            [f"x{i}" for i in range(16)] + ["x29", "x30", "sp", "pc"]
            if self.is_arm64
            else ["rax", "rbx", "rcx", "rdx", "rsi", "rdi", "rbp", "rsp", "r8", "r9", "r10", "r11", "rip"]
        )
        for rk in primary_regs:
            rv = self.regs.get(rk, 0)
            hint = ""
            if rv in self.doc.strings_by_addr:
                hint = f'"{self.doc.strings_by_addr[rv].value[:28]}"'
            elif rv in self.doc.objc_selectors:
                hint = f"@selector({self.doc.objc_selectors[rv]})"
            elif rv in self.doc.names:
                hint = self.doc.names[rv]
            reg_list.append({
                "name": rk.upper(),
                "value": f"0x{rv:016x}",
                "decimal": rv,
                "modified": rk in self.modified_regs,
                "hint": hint,
            })

        return {
            "procedure": self.proc.name,
            "arch": "ARM64" if self.is_arm64 else "x86_64",
            "pc": f"0x{cur_pc:x}",
            "step_count": self.step_count,
            "halted": self.halted,
            "halt_reason": self.halt_reason,
            "flags": self.flags,
            "registers": reg_list,
            "stack": stack_slots,
            "call_log": self.call_log[-15:],
            "trace": self.trace[-30:],
        }
