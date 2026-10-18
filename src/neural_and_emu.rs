use crate::types::{UltronDisassembledFile, UltronProcedure};
use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use std::collections::{BTreeMap, HashSet};

pub struct SymbolDemangler;

impl SymbolDemangler {
    pub fn demangle(sym: &str) -> String {
        let s = sym.trim();
        if s.starts_with("+[") || s.starts_with("-[") {
            return s.to_string();
        }
        let clean = s.strip_prefix('_').unwrap_or(s);
        // C++ Itanium ABI (_Z...)
        if let Some(rest) = clean.strip_prefix('Z') {
            return Self::demangle_itanium(rest).unwrap_or_else(|| s.to_string());
        }
        // Swift ABI ($s... or _$s...)
        if clean.starts_with("$s") || s.starts_with("_$s") {
            let sw = s.trim_start_matches('_').trim_start_matches("$s");
            return Self::demangle_length_encoded(sw, "swift::").unwrap_or_else(|| s.to_string());
        }
        // Rust v0 (_R...)
        if let Some(rest) = clean.strip_prefix('R') {
            return Self::demangle_length_encoded(rest, "rust::").unwrap_or_else(|| s.to_string());
        }
        s.to_string()
    }

    fn demangle_itanium(mut rest: &str) -> Option<String> {
        let is_nested = rest.starts_with('N');
        if is_nested {
            rest = &rest[1..];
        }
        let mut parts = Vec::new();
        while !rest.is_empty() && !rest.starts_with('E') {
            let num_end = rest.find(|c: char| !c.is_ascii_digit()).unwrap_or(0);
            if num_end == 0 {
                break;
            }
            let len: usize = rest[..num_end].parse().ok()?;
            rest = &rest[num_end..];
            if rest.len() < len {
                break;
            }
            parts.push(rest[..len].to_string());
            rest = &rest[len..];
            if !is_nested {
                break;
            }
        }
        if parts.is_empty() {
            return None;
        }
        if rest.starts_with('E') {
            rest = &rest[1..];
        }
        let mut params = Vec::new();
        for ch in rest.chars() {
            match ch {
                'v' => {}
                'i' => params.push("int"),
                'l' => params.push("long"),
                'm' => params.push("uint64_t"),
                'c' => params.push("char"),
                'b' => params.push("bool"),
                'f' => params.push("float"),
                'd' => params.push("double"),
                _ => {}
            }
        }
        Some(format!("{}({})", parts.join("::"), params.join(", ")))
    }

    fn demangle_length_encoded(mut rest: &str, prefix: &str) -> Option<String> {
        let mut parts = Vec::new();
        while !rest.is_empty() {
            if let Some(idx) = rest.find(|c: char| c.is_ascii_digit()) {
                rest = &rest[idx..];
                let num_end = rest.find(|c: char| !c.is_ascii_digit()).unwrap_or(rest.len());
                let len: usize = rest[..num_end].parse().ok()?;
                rest = &rest[num_end..];
                if len > 0 && rest.len() >= len {
                    parts.push(rest[..len].to_string());
                    rest = &rest[len..];
                } else {
                    break;
                }
            } else {
                break;
            }
        }
        if parts.is_empty() {
            None
        } else {
            Some(format!("{}{}()", prefix, parts.join("::")))
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct HalsteadMetrics {
    pub n1_distinct_operators: usize,
    pub n2_distinct_operands: usize,
    pub total_operators: usize,
    pub total_operands: usize,
    pub vocabulary: usize,
    pub length: usize,
    pub volume: f64,
    pub difficulty: f64,
    pub effort: f64,
    pub estimated_bugs: f64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ProcedureAuditSummary {
    pub name: String,
    pub entry_point: String,
    pub cyclomatic_complexity: usize,
    pub loop_nesting_count: usize,
    pub ai_decompilation_confidence: f64,
    pub halstead_volume: f64,
    pub stack_frame_size: u64,
}

pub struct UltronSecurityAuditor;

impl UltronSecurityAuditor {
    pub fn audit_document(doc: &UltronDisassembledFile) -> Value {
        // 1. Dangerous C / POSIX / Objective-C Sinks
        let sinks: &[(&str, &str, &str, &str)] = &[
            ("strcpy", "CRITICAL", "CWE-120", "Unbounded string copy into destination buffer (Classic Buffer Overflow sink)"),
            ("strcat", "HIGH", "CWE-120", "Unbounded string concatenation without destination size verification"),
            ("sprintf", "HIGH", "CWE-134", "Unbounded formatted string write to buffer (prefer snprintf)"),
            ("vsprintf", "HIGH", "CWE-134", "Unbounded variadic formatted string write"),
            ("gets", "CRITICAL", "CWE-242", "Use of inherently unsafe function gets() — unbounded stdin read"),
            ("scanf", "HIGH", "CWE-120", "Formatted input parsing without field width bounds verification"),
            ("system", "CRITICAL", "CWE-78", "OS Command Injection sink via shell invocation"),
            ("popen", "HIGH", "CWE-78", "Subprocess command pipe execution sink"),
            ("execve", "HIGH", "CWE-78", "Direct process image execution sink (execve)"),
            ("alloca", "MEDIUM", "CWE-770", "Dynamic stack allocation without bounds guard (Stack Clash risk)"),
            ("memcpy", "MEDIUM", "CWE-120", "Raw memory block copy — verify length operand bounds"),
            ("nskeyedunarchiver", "HIGH", "CWE-502", "Insecure Objective-C object deserialization (prefer NSSecureCoding)"),
            ("dlopen", "LOW", "CWE-426", "Dynamic shared library loading — verify library path trust"),
            ("ptrace", "MEDIUM", "CWE-693", "Process trace / anti-debugging tamper protection call (PT_DENY_ATTACH)"),
            ("sysctl", "MEDIUM", "CWE-693", "Kernel MIB inspection / P_TRACED anti-debugging tamper check"),
        ];

        let mut vulnerabilities = Vec::new();
        let mut seen_vulns = HashSet::new();

        for proc in doc.procedures.values() {
            let proc_addr_str = format!("0x{:x}", proc.entry_point);
            let mut max_sub_sp: u64 = proc.stack_frame_size;
            let mut has_copy_or_read_loop = false;
            let mut has_mem_rw_in_loop = false;
            let mut stack_alloc_addr = proc.entry_point;
            let mut has_shell_string = proc.strings_referenced.iter().any(|s| {
                let sl = s.to_lowercase();
                sl.contains("/bin/sh")
                    || sl.contains("/bin/bash")
                    || sl.contains("sh -c")
                    || sl.contains("cmd.exe")
            });

            for bb in &proc.basic_blocks {
                let is_loop_bb = bb
                    .outgoing_edges
                    .iter()
                    .any(|&target| target <= bb.start_address);

                for (idx, ins) in bb.instructions.iter().enumerate() {
                    let mnem = ins.mnemonic.to_lowercase();
                    let op_lower = ins.op_str.to_lowercase();
                    let target_text = format!(
                        "{} {} {}",
                        ins.op_str,
                        ins.comment,
                        ins.symbol_ref.as_deref().unwrap_or("")
                    )
                    .to_lowercase();

                    if let Some(ref sref) = ins.string_ref {
                        let sl = sref.to_lowercase();
                        if sl.contains("/bin/sh") || sl.contains("/bin/bash") || sl.contains("sh -c") {
                            has_shell_string = true;
                        }
                    }

                    // Track explicit stack frame allocation: `sub sp, sp, #imm` or `sub rsp, #imm`
                    if mnem == "sub" && (op_lower.starts_with("sp, sp,") || op_lower.starts_with("rsp,")) {
                        if let Some(imm) = Self::parse_last_immediate(&op_lower) {
                            if imm > max_sub_sp {
                                max_sub_sp = imm;
                                stack_alloc_addr = ins.address;
                            }
                        }
                    }

                    // Check memory read/write inside loop basic blocks
                    if is_loop_bb
                        && (mnem.starts_with("ldrb")
                            || mnem.starts_with("strb")
                            || mnem.starts_with("ldr")
                            || mnem.starts_with("str")
                            || mnem.starts_with("ldp")
                            || mnem.starts_with("stp")
                            || mnem.starts_with("movs"))
                    {
                        has_mem_rw_in_loop = true;
                        has_copy_or_read_loop = true;
                    }

                    // Anti-debugging inline syscall / debug register inspection
                    if (mnem == "svc" && op_lower.contains("0x80"))
                        || (mnem == "mrs" && op_lower.contains("mdscr"))
                    {
                        let key = (ins.address, "anti_debug_insn".to_string());
                        if seen_vulns.insert(key) {
                            let addr_hex = format!("0x{:x}", ins.address);
                            vulnerabilities.push(json!({
                                "address": addr_hex,
                                "call_address": addr_hex,
                                "procedure": proc.name,
                                "procedure_address": proc_addr_str,
                                "sink": mnem,
                                "severity": "MEDIUM",
                                "cwe": "CWE-693",
                                "description": "Low-level supervisor call / debug status register tamper check",
                            }));
                        }
                    }

                    if ins.is_call {
                        // Direct dangerous C/POSIX/ObjC sink matching
                        for (sink_name, sev, cwe, desc) in sinks {
                            if Self::matches_sink(&target_text, sink_name) {
                                if *sink_name == "memcpy"
                                    || *sink_name == "strcpy"
                                    || *sink_name == "strcat"
                                    || *sink_name == "gets"
                                    || *sink_name == "scanf"
                                    || *sink_name == "sprintf"
                                {
                                    has_copy_or_read_loop = true;
                                }

                                let effective_sev = if (*sink_name == "system"
                                    || *sink_name == "popen"
                                    || *sink_name == "execve")
                                    && has_shell_string
                                {
                                    "CRITICAL"
                                } else {
                                    *sev
                                };

                                let effective_desc = if (*sink_name == "system"
                                    || *sink_name == "popen"
                                    || *sink_name == "execve")
                                    && has_shell_string
                                {
                                    format!("{} (Tainted shell command string detected in procedure)", desc)
                                } else {
                                    desc.to_string()
                                };

                                let key = (ins.address, sink_name.to_string());
                                if seen_vulns.insert(key) {
                                    let addr_hex = format!("0x{:x}", ins.address);
                                    vulnerabilities.push(json!({
                                        "address": addr_hex,
                                        "call_address": addr_hex,
                                        "procedure": proc.name,
                                        "procedure_address": proc_addr_str,
                                        "sink": sink_name,
                                        "severity": effective_sev,
                                        "cwe": cwe,
                                        "description": effective_desc,
                                    }));
                                }
                            }
                        }

                        // Format String Taint Heuristic (CWE-134):
                        // Detect printf / syslog / NSLog called without a static format string
                        for fmt_func in ["printf", "syslog", "nslog"] {
                            if Self::matches_fmt_sink(&target_text, fmt_func) {
                                let has_static_fmt = Self::has_static_format_string(doc, bb, idx);
                                if !has_static_fmt {
                                    let key = (ins.address, format!("fmt_taint_{}", fmt_func));
                                    if seen_vulns.insert(key) {
                                        let addr_hex = format!("0x{:x}", ins.address);
                                        vulnerabilities.push(json!({
                                            "address": addr_hex,
                                            "call_address": addr_hex,
                                            "procedure": proc.name,
                                            "procedure_address": proc_addr_str,
                                            "sink": fmt_func,
                                            "severity": "HIGH",
                                            "cwe": "CWE-134",
                                            "description": format!(
                                                "Format String Vulnerability heuristic: {}() invoked without a resolved static format literal",
                                                fmt_func
                                            ),
                                        }));
                                    }
                                }
                            }
                        }
                    }
                }
            }

            // Stack Buffer Allocation Risk (CWE-121):
            // Large stack frame (> 256 bytes) combined with memory copy/read loop or unbounded sink
            if max_sub_sp > 256 && (has_copy_or_read_loop || has_mem_rw_in_loop) {
                let key = (stack_alloc_addr, "stack_buffer_risk".to_string());
                if seen_vulns.insert(key) {
                    let addr_hex = format!("0x{:x}", stack_alloc_addr);
                    vulnerabilities.push(json!({
                        "address": addr_hex,
                        "call_address": addr_hex,
                        "procedure": proc.name,
                        "procedure_address": proc_addr_str,
                        "sink": "sub_sp_frame",
                        "severity": "HIGH",
                        "cwe": "CWE-121",
                        "description": format!(
                            "Stack-based Buffer Overflow risk: large stack frame allocation ({} bytes > 256B threshold) coupled with memory copy/read loop",
                            max_sub_sp
                        ),
                    }));
                }
            }
        }

        // 2. Cryptographic & Constant Signature Detection
        let crypto_findings = Self::scan_crypto_signatures(doc);

        // 3. Per-section Shannon Entropy
        let mut entropy_map = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                let ent = Self::shannon_entropy(&sec.data);
                let ent_rounded = (ent * 100.0).round() / 100.0;
                let ent_pct = ((ent / 8.0) * 100.0).round().clamp(0.0, 100.0);
                let status = if ent > 7.2 {
                    "PACKED / ENCRYPTED"
                } else if ent > 5.8 {
                    "COMPRESSED / HIGH-DENSITY CODE"
                } else {
                    "NORMAL NATIVE SECTION"
                };
                let start_hex = format!("0x{:x}", sec.start_address);
                entropy_map.push(json!({
                    "segment": seg.name,
                    "section": sec.name,
                    "address": start_hex,
                    "start": start_hex,
                    "size": sec.length,
                    "entropy": ent_rounded,
                    "entropy_bits": ent_rounded,
                    "entropy_pct": ent_pct,
                    "status": status,
                }));
            }
        }

        // 4. Binary Hardening & Mitigations + Interesting Strings
        let has_canary = doc.imports.values().any(|s| s.contains("stack_chk"))
            || doc.labels.values().any(|s| s.contains("stack_chk"));
        let has_arc = doc.imports.values().any(|s| s.contains("objc_retain") || s.contains("objc_storeStrong"))
            || doc.labels.values().any(|s| s.contains("objc_autorelease") || s.contains("objc_alloc"));
        let has_nx = doc.segments.iter().all(|s| !(s.writable && s.executable));
        let has_pie = doc.entry_point >= 0x100000000 || doc.segments.iter().any(|s| s.start_address >= 0x100000000);

        let mitigations = json!({
            "PIE / ASLR": has_pie,
            "W^X / NX Pages": has_nx,
            "Stack Canary": has_canary,
            "Objective-C ARC": has_arc,
        });

        let mut interesting_strings = Vec::new();
        for s in &doc.string_entries {
            let val = s.value.trim();
            if val.len() < 4 {
                continue;
            }
            let lower = val.to_lowercase();
            let category = if lower.starts_with("http://") || lower.starts_with("https://") || lower.contains("://") {
                Some("URI / ENDPOINT")
            } else if lower.contains("ultron") || lower.contains("secret") || lower.contains("token") || lower.contains("key") || lower.contains("auth") || lower.contains("verify") {
                Some("AUTH / PROTOCOL")
            } else if lower.starts_with('/') && (lower.contains("/bin/") || lower.contains("/usr/") || lower.contains("/etc/") || lower.contains("/library/")) {
                Some("FILESYSTEM PATH")
            } else if val.contains("%s") || val.contains("%x") || val.contains("%@") {
                Some("FORMAT SPECIFIER")
            } else {
                None
            };
            if let Some(cat) = category {
                interesting_strings.push(json!({
                    "category": cat,
                    "address": format!("0x{:x}", s.address),
                    "value": val,
                }));
            }
        }

        // 5. Neural Audit Procedure Complexity Summary across all procedures
        let mut procedure_summaries = Vec::new();
        let mut total_cyclomatic = 0usize;
        let mut max_loop_depth = 0usize;
        let mut avg_confidence_accum = 0.0f64;

        for proc in doc.procedures.values() {
            let (cc, loop_depth) = UltronNeuralAnalyzer::compute_cfg_complexity(proc);
            let halstead = UltronNeuralAnalyzer::compute_halstead_metrics(proc);
            let conf = UltronNeuralAnalyzer::compute_decompilation_confidence(doc, proc, cc, loop_depth);
            total_cyclomatic += cc;
            if loop_depth > max_loop_depth {
                max_loop_depth = loop_depth;
            }
            avg_confidence_accum += conf;
            procedure_summaries.push(ProcedureAuditSummary {
                name: proc.name.clone(),
                entry_point: format!("0x{:x}", proc.entry_point),
                cyclomatic_complexity: cc,
                loop_nesting_count: loop_depth,
                ai_decompilation_confidence: conf,
                halstead_volume: halstead.volume,
                stack_frame_size: proc.stack_frame_size,
            });
        }

        let proc_count = doc.procedures.len().max(1);
        let avg_confidence = ((avg_confidence_accum / proc_count as f64) * 10.0).round() / 10.0;

        let risk_score = (vulnerabilities.len() * 18 + crypto_findings.len() * 10).min(98);
        let security_score = 100usize.saturating_sub(vulnerabilities.len() * 12).max(15);

        json!({
            "risk_score": risk_score,
            "security_score": security_score,
            "vulnerability_count": vulnerabilities.len(),
            "vulnerabilities": vulnerabilities,
            "findings": vulnerabilities,
            "crypto_findings": crypto_findings,
            "crypto_constants": crypto_findings,
            "entropy_map": entropy_map,
            "section_entropy": entropy_map,
            "mitigations": mitigations,
            "interesting_strings": interesting_strings,
            "neural_audit_summary": {
                "procedure_count": doc.procedures.len(),
                "total_cyclomatic_complexity": total_cyclomatic,
                "max_loop_nesting_count": max_loop_depth,
                "average_decompilation_confidence": format!("{:.1}%", avg_confidence),
                "average_decompilation_confidence_score": avg_confidence,
                "procedures": procedure_summaries,
            }
        })
    }

    fn matches_sink(target_text: &str, sink: &str) -> bool {
        if sink == "scanf" {
            return target_text.contains("scanf");
        }
        if sink == "execve" {
            return target_text.contains("execve")
                || target_text.contains("execl")
                || target_text.contains("execvp")
                || target_text.contains("posix_spawn");
        }
        if sink == "nskeyedunarchiver" {
            return target_text.contains("nskeyedunarchiver")
                || target_text.contains("unarchiveobject");
        }
        target_text.contains(sink)
    }

    fn matches_fmt_sink(target_text: &str, fmt_func: &str) -> bool {
        if fmt_func == "printf" {
            // Match _printf / printf / fprintf, but exclude sprintf/snprintf/vsprintf which are checked separately
            if target_text.contains("sprintf") || target_text.contains("snprintf") {
                return false;
            }
            return target_text.contains("printf");
        }
        target_text.contains(fmt_func)
    }

    fn has_static_format_string(
        doc: &UltronDisassembledFile,
        bb: &crate::types::UltronBasicBlock,
        call_idx: usize,
    ) -> bool {
        let start_idx = call_idx.saturating_sub(6);
        let mut x0_tainted_by_var = false;
        let mut x0_has_static_ref = false;

        for ins in &bb.instructions[start_idx..=call_idx] {
            if ins.string_ref.is_some() {
                x0_has_static_ref = true;
            }
            if ins.comment.contains('"') || ins.comment.contains("@\"") {
                x0_has_static_ref = true;
            }
            let mnem = ins.mnemonic.to_lowercase();
            let op = ins.op_str.to_lowercase();
            // Check if format register x0/rdi is loaded via adrp/add/lea from a static address in strings_table
            if (mnem == "adrp" || mnem == "add" || mnem == "lea")
                && (op.starts_with("x0,") || op.starts_with("rdi,"))
            {
                if let Some(imm) = Self::parse_last_immediate(&op) {
                    if doc.strings_table.contains_key(&imm) || doc.get_section_at(imm).is_some() {
                        x0_has_static_ref = true;
                    }
                }
            }
            // If x0/rdi is loaded from stack or another general-purpose variable register right before the call
            if (mnem == "ldr" || mnem == "mov")
                && (op.starts_with("x0,") || op.starts_with("rdi,"))
                && !op.contains("#0x")
            {
                if op.contains("[sp") || op.contains("[x29") || op.contains("[rbp") || op.contains("x19") || op.contains("x20") {
                    x0_tainted_by_var = true;
                }
            }
        }

        if x0_tainted_by_var && !x0_has_static_ref {
            false
        } else {
            x0_has_static_ref
        }
    }

    fn parse_last_immediate(op_str: &str) -> Option<u64> {
        let last_part = op_str.rsplit(',').next()?.trim();
        let cleaned = last_part
            .trim_start_matches('#')
            .trim_start_matches('$')
            .trim_end_matches(']');
        if let Some(hex) = cleaned.strip_prefix("0x").or_else(|| cleaned.strip_prefix("0X")) {
            u64::from_str_radix(hex, 16).ok()
        } else {
            cleaned.parse::<u64>().ok()
        }
    }

    fn scan_crypto_signatures(doc: &UltronDisassembledFile) -> Vec<Value> {
        let mut findings = Vec::new();
        let mut seen_addrs = HashSet::new();

        struct CryptoSig<'a> {
            name: &'a str,
            category: &'a str,
            pattern: &'a [u8],
            confidence: &'a str,
        }

        let signatures: &[CryptoSig] = &[
            // AES Rijndael Forward S-Box (63 7c 77 7b f2 6b 6f c5)
            CryptoSig {
                name: "AES Rijndael S-Box",
                category: "Block Cipher S-Box",
                pattern: &[0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5],
                confidence: "99%",
            },
            // AES Rijndael Inverse S-Box (52 09 6a d5 30 36 a5 38)
            CryptoSig {
                name: "AES Rijndael Inverse S-Box",
                category: "Block Cipher Inverse S-Box",
                pattern: &[0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38],
                confidence: "99%",
            },
            // SHA-256 K Constants (0x428a2f98, 0x71374491) — Little-Endian & Big-Endian
            CryptoSig {
                name: "SHA-256 Round Constants (K0=0x428a2f98, K1=0x71374491)",
                category: "SHA-256 K Constants",
                pattern: &[0x98, 0x2f, 0x8a, 0x42, 0x91, 0x44, 0x37, 0x71],
                confidence: "99%",
            },
            CryptoSig {
                name: "SHA-256 Round Constant K0 (0x428a2f98)",
                category: "SHA-256 K Constants",
                pattern: &[0x98, 0x2f, 0x8a, 0x42],
                confidence: "95%",
            },
            CryptoSig {
                name: "SHA-256 Round Constant K1 (0x71374491)",
                category: "SHA-256 K Constants",
                pattern: &[0x91, 0x44, 0x37, 0x71],
                confidence: "95%",
            },
            CryptoSig {
                name: "SHA-256 Round Constants (BE: 0x428a2f98, 0x71374491)",
                category: "SHA-256 K Constants",
                pattern: &[0x42, 0x8a, 0x2f, 0x98, 0x71, 0x37, 0x44, 0x91],
                confidence: "99%",
            },
            // SHA-1 / MD5 Initialization Vectors (0x67452301, 0xefcdab89) — LE & BE
            CryptoSig {
                name: "SHA-1 / MD5 Initialization Vectors (0x67452301, 0xefcdab89)",
                category: "Hash Initialization Vector",
                pattern: &[0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef],
                confidence: "98%",
            },
            CryptoSig {
                name: "SHA-1 / MD5 IV H0 (0x67452301)",
                category: "Hash Initialization Vector",
                pattern: &[0x01, 0x23, 0x45, 0x67],
                confidence: "92%",
            },
            CryptoSig {
                name: "SHA-1 / MD5 IV H1 (0xefcdab89)",
                category: "Hash Initialization Vector",
                pattern: &[0x89, 0xab, 0xcd, 0xef],
                confidence: "92%",
            },
            // ChaCha20 / Salsa20 Sigma ("expand 32-byte k")
            CryptoSig {
                name: "ChaCha20 / Salsa20 Sigma (\"expand 32-byte k\")",
                category: "Stream Cipher Sigma",
                pattern: b"expand 32-byte k",
                confidence: "99%",
            },
            // CRC32 IEEE 802.3 Polynomial (0xedb88320) — LE & BE
            CryptoSig {
                name: "CRC32 IEEE Polynomial (0xedb88320)",
                category: "Checksum Polynomial",
                pattern: &[0x20, 0x83, 0xb8, 0xed],
                confidence: "96%",
            },
            CryptoSig {
                name: "CRC32 IEEE Polynomial BE (0xedb88320)",
                category: "Checksum Polynomial",
                pattern: &[0xed, 0xb8, 0x83, 0x20],
                confidence: "96%",
            },
            // TEA / XTEA Golden Ratio Delta (0x9e3779b9) — LE & BE
            CryptoSig {
                name: "TEA / XTEA Delta Constant (0x9e3779b9)",
                category: "Feistel Cipher Delta",
                pattern: &[0xb9, 0x79, 0x37, 0x9e],
                confidence: "95%",
            },
            CryptoSig {
                name: "TEA / XTEA Delta Constant BE (0x9e3779b9)",
                category: "Feistel Cipher Delta",
                pattern: &[0x9e, 0x37, 0x79, 0xb9],
                confidence: "95%",
            },
        ];

        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.data.is_empty() {
                    continue;
                }
                for sig in signatures {
                    let plen = sig.pattern.len();
                    if sec.data.len() < plen {
                        continue;
                    }
                    if let Some(pos) = sec.data.windows(plen).position(|w| w == sig.pattern) {
                        let found_addr = sec.start_address + pos as u64;
                        if seen_addrs.insert((found_addr, sig.category)) {
                            findings.push(json!({
                                "algorithm": sig.name,
                                "name": sig.name,
                                "category": sig.category,
                                "segment": seg.name,
                                "section": format!("{},{}", seg.name, sec.name),
                                "address": format!("0x{:x}", found_addr),
                                "confidence": sig.confidence,
                            }));
                        }
                    }
                }
            }
        }

        // Also scan instruction operands/comments for immediate cryptographic constants
        let imm_constants: &[(&str, &str, &str)] = &[
            ("edb88320", "CRC32 IEEE Polynomial (0xedb88320)", "Checksum Polynomial"),
            ("9e3779b9", "TEA / XTEA Delta (0x9e3779b9)", "Feistel Cipher Delta"),
            ("428a2f98", "SHA-256 K0 Constant (0x428a2f98)", "SHA-256 K Constants"),
            ("71374491", "SHA-256 K1 Constant (0x71374491)", "SHA-256 K Constants"),
            ("67452301", "SHA-1 / MD5 IV H0 (0x67452301)", "Hash Initialization Vector"),
            ("efcdab89", "SHA-1 / MD5 IV H1 (0xefcdab89)", "Hash Initialization Vector"),
        ];

        for ins in doc.instructions.values() {
            let text = format!("{} {}", ins.op_str, ins.comment).to_lowercase();
            for (hex_pat, name, category) in imm_constants {
                if text.contains(hex_pat) && seen_addrs.insert((ins.address, *category)) {
                    let seg_name = doc
                        .get_segment_at(ins.address)
                        .map(|s| s.name.clone())
                        .unwrap_or_else(|| "__TEXT".to_string());
                    let sec_name = doc
                        .get_section_at(ins.address)
                        .map(|s| s.name.clone())
                        .unwrap_or_else(|| "__text".to_string());
                    findings.push(json!({
                        "algorithm": name,
                        "name": name,
                        "category": category,
                        "segment": seg_name,
                        "section": format!("{},{}", seg_name, sec_name),
                        "address": format!("0x{:x}", ins.address),
                        "confidence": "94%",
                    }));
                }
            }
        }

        findings
    }

    fn shannon_entropy(data: &[u8]) -> f64 {
        if data.is_empty() {
            return 0.0;
        }
        let mut counts = [0usize; 256];
        for &b in data {
            counts[b as usize] += 1;
        }
        let len = data.len() as f64;
        let mut entropy = 0.0;
        for &c in &counts {
            if c > 0 {
                let p = (c as f64) / len;
                entropy -= p * p.log2();
            }
        }
        entropy
    }
}

pub struct UltronNeuralAnalyzer;

impl UltronNeuralAnalyzer {
    /// Computes McCabe's Cyclomatic Complexity $M = E - N + 2P$ and Loop Nesting Count
    pub fn compute_cfg_complexity(proc: &UltronProcedure) -> (usize, usize) {
        let n = proc.basic_blocks.len();
        if n == 0 {
            return (1, 0);
        }
        let e: usize = proc.basic_blocks.iter().map(|bb| bb.outgoing_edges.len()).sum();
        let p: isize = 1;
        // M = E - N + 2P
        let m_raw = (e as isize) - (n as isize) + 2 * p;
        let cyclomatic = m_raw.max(1) as usize;

        // Detect back-edges (target_address <= bb.start_address) and compute loop nesting count
        let mut back_edge_intervals: Vec<(u64, u64)> = Vec::new();
        for bb in &proc.basic_blocks {
            for &target in &bb.outgoing_edges {
                if target <= bb.start_address && target >= proc.entry_point {
                    back_edge_intervals.push((target, bb.end_address.max(bb.start_address)));
                }
            }
        }

        if back_edge_intervals.is_empty() {
            return (cyclomatic, 0);
        }

        // Compute maximum nesting depth of natural loop intervals
        let mut max_nesting = 1usize;
        for (i, &(start_a, end_a)) in back_edge_intervals.iter().enumerate() {
            let mut depth = 1usize;
            for (j, &(start_b, end_b)) in back_edge_intervals.iter().enumerate() {
                if i != j && start_b <= start_a && end_b >= end_a {
                    depth += 1;
                }
            }
            if depth > max_nesting {
                max_nesting = depth;
            }
        }

        let loop_count = back_edge_intervals.len().max(max_nesting);
        (cyclomatic, loop_count)
    }

    /// Computes Halstead Complexity Metrics across all instructions in a procedure
    pub fn compute_halstead_metrics(proc: &UltronProcedure) -> HalsteadMetrics {
        let mut distinct_operators = HashSet::new();
        let mut distinct_operands = HashSet::new();
        let mut total_operators = 0usize;
        let mut total_operands = 0usize;

        for bb in &proc.basic_blocks {
            for ins in &bb.instructions {
                let mnem = ins.mnemonic.to_lowercase();
                distinct_operators.insert(mnem);
                total_operators += 1;

                for op in ins.op_str.split(',') {
                    let tok = op.trim();
                    if !tok.is_empty() {
                        distinct_operands.insert(tok.to_lowercase());
                        total_operands += 1;
                    }
                }
            }
        }

        let n1 = distinct_operators.len();
        let n2 = distinct_operands.len();
        let vocabulary = n1 + n2;
        let length = total_operators + total_operands;

        let volume = if vocabulary > 0 {
            (length as f64) * (vocabulary as f64).log2()
        } else {
            0.0
        };
        let difficulty = if n2 > 0 {
            ((n1 as f64) / 2.0) * ((total_operands as f64) / (n2 as f64))
        } else {
            0.0
        };
        let effort = difficulty * volume;
        let estimated_bugs = volume / 3000.0;

        HalsteadMetrics {
            n1_distinct_operators: n1,
            n2_distinct_operands: n2,
            total_operators,
            total_operands,
            vocabulary,
            length,
            volume: (volume * 100.0).round() / 100.0,
            difficulty: (difficulty * 100.0).round() / 100.0,
            effort: (effort * 100.0).round() / 100.0,
            estimated_bugs: (estimated_bugs * 1000.0).round() / 1000.0,
        }
    }

    /// Computes AI Decompilation Confidence Score (0.0 - 99.5)
    pub fn compute_decompilation_confidence(
        doc: &UltronDisassembledFile,
        proc: &UltronProcedure,
        cyclomatic_complexity: usize,
        loop_nesting_count: usize,
    ) -> f64 {
        let mut score: f64 = 88.0;

        // Named symbol or Objective-C selector increases confidence
        if !proc.name.starts_with("sub_") {
            score += 5.5;
        }
        if proc.name.starts_with("+[") || proc.name.starts_with("-[") {
            score += 3.5;
        }
        // Rich string or symbol cross-references improve semantic recovery
        if !proc.strings_referenced.is_empty() {
            score += 2.0;
        }
        if !doc.objc_classes.is_empty() {
            score += 1.0;
        }

        // Penalize deeply nested loops or very high cyclomatic complexity
        if cyclomatic_complexity > 15 {
            score -= ((cyclomatic_complexity - 15) as f64 * 0.8).min(12.0);
        }
        if loop_nesting_count > 2 {
            score -= ((loop_nesting_count - 2) as f64 * 1.5).min(8.0);
        }

        // Check for unresolved indirect branches (`br x16` outside stub)
        let mut indirect_jumps = 0usize;
        for bb in &proc.basic_blocks {
            for ins in &bb.instructions {
                if ins.mnemonic == "br" && !proc.section_name.contains("stubs") {
                    indirect_jumps += 1;
                }
            }
        }
        if indirect_jumps > 0 {
            score -= (indirect_jumps as f64 * 3.0).min(10.0);
        }

        ((score.clamp(65.0, 99.4)) * 10.0).round() / 10.0
    }

    pub fn analyze_procedure(doc: &UltronDisassembledFile, proc: &UltronProcedure) -> Value {
        let mut xor_eor_count = 0;
        let mut shift_count = 0;
        let mut mul_add_count = 0;
        let mut objc_calls = 0;
        let mut total_ins = 0;

        for bb in &proc.basic_blocks {
            for ins in &bb.instructions {
                total_ins += 1;
                let m = ins.mnemonic.to_lowercase();
                if m == "eor" || m == "xor" {
                    xor_eor_count += 1;
                }
                if m.starts_with("lsl")
                    || m.starts_with("lsr")
                    || m.starts_with("ror")
                    || m == "shl"
                    || m == "shr"
                {
                    shift_count += 1;
                }
                if m == "add" || m == "mul" || m == "madd" {
                    mul_add_count += 1;
                }
                if ins.op_str.contains("objc_") || ins.comment.contains("objc_") {
                    objc_calls += 1;
                }
            }
        }

        let (cyclomatic_complexity, loop_nesting_count) = Self::compute_cfg_complexity(proc);
        let halstead = Self::compute_halstead_metrics(proc);
        let ai_confidence_score = Self::compute_decompilation_confidence(
            doc,
            proc,
            cyclomatic_complexity,
            loop_nesting_count,
        );
        let confidence_str = format!("{:.0}%", ai_confidence_score.round());

        let (classification, suggested_name, suggested_signature, summary) = if xor_eor_count >= 1
            && (shift_count >= 1 || mul_add_count >= 2)
        {
            let sname = format!("ultron_crypto_checksum_{:x}", proc.entry_point & 0xffff);
            (
                "CRYPTO / HASHING / CHECKSUM KERNEL",
                sname.clone(),
                format!("uint32_t {}(const uint8_t *buf, size_t len, uint32_t seed)", sname),
                "Contains an arithmetic/bitwise loop (EOR/XOR + shifts + accumulation) characteristic of a digest, CRC, or stream cipher routine.",
            )
        } else if proc.name.contains("sharedEngine")
            || (objc_calls >= 1 && proc.basic_blocks.len() >= 2 && proc.name.starts_with("+["))
        {
            let sname = "ultron_objc_singleton_sharedInstance".to_string();
            (
                "OBJECTIVE-C SINGLETON FACTORY",
                sname.clone(),
                "id +[UltronCoreEngine sharedEngine](Class self, SEL _cmd)".to_string(),
                "Implements the Objective-C Singleton pattern: checks static pointer in memory (__DATA) and allocates instance via objc_alloc_init if null.",
            )
        } else if proc.name.contains("verify")
            || proc.strings_referenced.iter().any(|s| s.contains("ULTRON"))
        {
            let sname = "ultron_verify_protocol_signature".to_string();
            (
                "SIGNATURE / LICENSE VERIFIER",
                sname.clone(),
                "BOOL -[UltronCoreEngine verifyProtocolSignature:](id self, SEL _cmd, NSString *token)".to_string(),
                "Validates Objective-C input string prefix and length before computing a verification digest.",
            )
        } else if proc.name == "_main" || proc.name == "main" {
            let sname = "ultron_main_orchestrator".to_string();
            (
                "BINARY ENTRY DISPATCHER (MAIN)",
                sname.clone(),
                "int main(int argc, const char **argv)".to_string(),
                "Primary Mach-O entry point: initializes @autoreleasepool context, instantiates core engine, and outputs telemetry status.",
            )
        } else {
            let sname = format!("ultron_subroutine_{:x}", proc.entry_point & 0xffff);
            (
                "GENERAL SUBROUTINE / DISPATCHER",
                sname.clone(),
                format!("int64_t {}(int64_t arg0, int64_t arg1)", sname),
                "Native subroutine analyzed by the Control Flow Graph (CFG) and SSA lifting engine.",
            )
        };

        let behaviors = vec![
            format!(
                "Cyclomatic Complexity: M = {} (E - N + 2P across {} basic blocks)",
                cyclomatic_complexity,
                proc.basic_blocks.len()
            ),
            format!(
                "Loop Nesting Count: {} natural loop(s) | Stack Frame: {} bytes",
                loop_nesting_count, proc.stack_frame_size
            ),
            format!(
                "Halstead Volume: {:.1} bits | Difficulty: {:.1} | Est. Bugs: {:.3}",
                halstead.volume, halstead.difficulty, halstead.estimated_bugs
            ),
            format!(
                "AI Decompilation Confidence: {:.1}% | Bitwise XOR: {} | Shifts: {} | ObjC Calls: {}",
                ai_confidence_score, xor_eor_count, shift_count, objc_calls
            ),
        ];

        let addr_hex = format!("0x{:x}", proc.entry_point);
        json!({
            "entry_point": addr_hex,
            "address": addr_hex,
            "current_name": proc.name,
            "procedure": proc.name,
            "suggested_name": suggested_name,
            "suggested_signature": suggested_signature,
            "classification": classification,
            "category": classification,
            "confidence": confidence_str,
            "ai_decompilation_confidence": format!("{:.1}%", ai_confidence_score),
            "ai_decompilation_confidence_score": ai_confidence_score,
            "cyclomatic_complexity": cyclomatic_complexity,
            "loop_nesting_count": loop_nesting_count,
            "instruction_count": total_ins,
            "basic_blocks": proc.basic_blocks.len(),
            "halstead": halstead,
            "behaviors": behaviors,
            "metrics": {
                "cyclomatic_complexity": cyclomatic_complexity,
                "loop_nesting_count": loop_nesting_count,
                "ai_decompilation_confidence": ai_confidence_score,
                "halstead_volume": halstead.volume,
                "halstead_difficulty": halstead.difficulty,
                "halstead_effort": halstead.effort,
                "bitwise_xor_ops": xor_eor_count,
                "bit_shifts": shift_count,
                "arithmetic_ops": mul_add_count,
                "objc_runtime_calls": objc_calls,
            },
            "executive_summary": summary,
        })
    }
}

const VIRTUAL_STACK_BASE: u64 = 0x7fff_0000_0000;
const VIRTUAL_STACK_SIZE: usize = 65536; // 64KB virtual stack

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronMicroEmulator {
    pub arch: String,
    pub regs: BTreeMap<String, u64>,
    pub flags: BTreeMap<String, u8>,
    pub stack: BTreeMap<u64, u64>,
    #[serde(skip, default = "default_virtual_stack")]
    pub virtual_stack: Vec<u8>,
    #[serde(skip)]
    pub wasm_stack: Vec<u64>,
    pub pc: u64,
    pub step_count: usize,
    pub trace_log: Vec<String>,
    pub halted: bool,
}

fn default_virtual_stack() -> Vec<u8> {
    vec![0u8; VIRTUAL_STACK_SIZE]
}

impl UltronMicroEmulator {
    pub fn new(arch: &str, entry_point: u64) -> Self {
        let mut regs = BTreeMap::new();
        let stack_base = VIRTUAL_STACK_BASE + 0x8000; // Midpoint of 64KB virtual stack (0x7fff_0000_8000)
        match arch {
            "x86_64" => {
                for r in [
                    "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12",
                ] {
                    regs.insert(r.to_string(), 0);
                }
                regs.insert("rdi".to_string(), 0x1000_0000_0f00);
                regs.insert("rsi".to_string(), 0x0000_0000_0010);
                regs.insert("rsp".to_string(), stack_base);
                regs.insert("rbp".to_string(), stack_base);
            }
            "x86" | "i386" => {
                for r in ["eax", "ebx", "ecx", "edx", "esi", "edi"] {
                    regs.insert(r.to_string(), 0);
                }
                regs.insert("edi".to_string(), 0x1000_0f00);
                regs.insert("esi".to_string(), 0x0000_0010);
                regs.insert("esp".to_string(), stack_base);
                regs.insert("ebp".to_string(), stack_base);
            }
            "arm32" | "arm" => {
                for i in 0..=12 {
                    regs.insert(format!("r{}", i), 0);
                }
                regs.insert("r0".to_string(), 0x1000_0f00);
                regs.insert("r1".to_string(), 0x0000_0010);
                regs.insert("fp".to_string(), stack_base);
                regs.insert("sp".to_string(), stack_base);
                regs.insert("lr".to_string(), 0xdead_beef);
            }
            "wasm32" => {
                for i in 0..=7 {
                    regs.insert(format!("local{}", i), if i == 0 { 0x10 } else { 0 });
                }
                for i in 0..=3 {
                    regs.insert(format!("global{}", i), 0);
                }
                regs.insert("tos".to_string(), 0);
                regs.insert("sp".to_string(), stack_base);
            }
            _ => {
                for i in 0..=10 {
                    regs.insert(format!("x{}", i), 0);
                }
                regs.insert("x0".to_string(), 0x1000_0000_0f00);
                regs.insert("x1".to_string(), 0x0000_0000_0010);
                regs.insert("x19".to_string(), 0);
                regs.insert("x20".to_string(), 0);
                regs.insert("x29".to_string(), stack_base);
                regs.insert("x30".to_string(), 0xdead_beef_0000);
                regs.insert("sp".to_string(), stack_base);
            }
        }
        let mut flags = BTreeMap::new();
        flags.insert("N".to_string(), 0);
        flags.insert("Z".to_string(), 0);
        flags.insert("C".to_string(), 0);
        flags.insert("V".to_string(), 0);

        let mut emu = Self {
            arch: arch.to_string(),
            regs,
            flags,
            stack: BTreeMap::new(),
            virtual_stack: vec![0u8; VIRTUAL_STACK_SIZE],
            wasm_stack: Vec::new(),
            pc: entry_point,
            step_count: 0,
            trace_log: vec![format!(
                "[INIT] Quantum CPU Micro-Emulator ({}) initialized at PC=0x{:x} | 64KB Stack @ 0x{:x}",
                arch, entry_point, stack_base
            )],
            halted: false,
        };
        // Seed return sentinel on the stack for x86 / x86_64
        if arch == "x86_64" || arch == "x86" || arch == "i386" {
            emu.mem_write(stack_base, 0xdead_beef_0000, 8);
        }
        emu
    }

    fn is_32bit(&self) -> bool {
        matches!(self.arch.as_str(), "x86" | "i386" | "arm32" | "arm" | "wasm32")
    }

    fn update_flags_logic(&mut self, res: u64) {
        let sign_bit = if self.is_32bit() {
            (res >> 31) & 1
        } else {
            (res >> 63) & 1
        };
        let masked = if self.is_32bit() { res & 0xffff_ffff } else { res };
        self.flags.insert("N".to_string(), sign_bit as u8);
        self.flags.insert("Z".to_string(), if masked == 0 { 1 } else { 0 });
        self.flags.insert("C".to_string(), 0);
        self.flags.insert("V".to_string(), 0);
    }

    fn update_flags_add(&mut self, a: u64, b: u64) -> u64 {
        if self.is_32bit() {
            let a32 = a as u32;
            let b32 = b as u32;
            let (res32, carry) = a32.overflowing_add(b32);
            let (_, overflow) = (a32 as i32).overflowing_add(b32 as i32);
            self.flags.insert("N".to_string(), ((res32 >> 31) & 1) as u8);
            self.flags.insert("Z".to_string(), if res32 == 0 { 1 } else { 0 });
            self.flags.insert("C".to_string(), if carry { 1 } else { 0 });
            self.flags.insert("V".to_string(), if overflow { 1 } else { 0 });
            res32 as u64
        } else {
            let (res, carry) = a.overflowing_add(b);
            let (_, overflow) = (a as i64).overflowing_add(b as i64);
            self.flags.insert("N".to_string(), ((res >> 63) & 1) as u8);
            self.flags.insert("Z".to_string(), if res == 0 { 1 } else { 0 });
            self.flags.insert("C".to_string(), if carry { 1 } else { 0 });
            self.flags.insert("V".to_string(), if overflow { 1 } else { 0 });
            res
        }
    }

    fn update_flags_sub(&mut self, a: u64, b: u64) -> u64 {
        if self.is_32bit() {
            let a32 = a as u32;
            let b32 = b as u32;
            let (res32, borrow) = a32.overflowing_sub(b32);
            let (_, overflow) = (a32 as i32).overflowing_sub(b32 as i32);
            self.flags.insert("N".to_string(), ((res32 >> 31) & 1) as u8);
            self.flags.insert("Z".to_string(), if res32 == 0 { 1 } else { 0 });
            self.flags.insert("C".to_string(), if !borrow { 1 } else { 0 });
            self.flags.insert("V".to_string(), if overflow { 1 } else { 0 });
            res32 as u64
        } else {
            let (res, borrow) = a.overflowing_sub(b);
            let (_, overflow) = (a as i64).overflowing_sub(b as i64);
            self.flags.insert("N".to_string(), ((res >> 63) & 1) as u8);
            self.flags.insert("Z".to_string(), if res == 0 { 1 } else { 0 });
            self.flags.insert("C".to_string(), if !borrow { 1 } else { 0 });
            self.flags.insert("V".to_string(), if overflow { 1 } else { 0 });
            res
        }
    }

    fn mem_write(&mut self, addr: u64, val: u64, size: usize) {
        if self.virtual_stack.len() != VIRTUAL_STACK_SIZE {
            self.virtual_stack.resize(VIRTUAL_STACK_SIZE, 0);
        }
        let n = size.clamp(1, 8);
        let bytes = val.to_le_bytes();
        if addr >= VIRTUAL_STACK_BASE
            && (addr + n as u64) <= VIRTUAL_STACK_BASE + VIRTUAL_STACK_SIZE as u64
        {
            let off = (addr - VIRTUAL_STACK_BASE) as usize;
            self.virtual_stack[off..off + n].copy_from_slice(&bytes[..n]);
            let aligned = addr & !7u64;
            let aligned_off = (aligned - VIRTUAL_STACK_BASE) as usize;
            if aligned_off + 8 <= VIRTUAL_STACK_SIZE {
                let slot_val = u64::from_le_bytes(
                    self.virtual_stack[aligned_off..aligned_off + 8]
                        .try_into()
                        .unwrap_or([0; 8]),
                );
                self.stack.insert(aligned, slot_val);
            }
        } else {
            self.stack.insert(addr & !7u64, val);
        }
    }

    fn mem_read(&self, doc: &UltronDisassembledFile, addr: u64, size: usize) -> u64 {
        let n = size.clamp(1, 8);
        if self.virtual_stack.len() == VIRTUAL_STACK_SIZE
            && addr >= VIRTUAL_STACK_BASE
            && (addr + n as u64) <= VIRTUAL_STACK_BASE + VIRTUAL_STACK_SIZE as u64
        {
            let off = (addr - VIRTUAL_STACK_BASE) as usize;
            let mut buf = [0u8; 8];
            buf[..n].copy_from_slice(&self.virtual_stack[off..off + n]);
            return u64::from_le_bytes(buf);
        }
        if let Some(&v) = self.stack.get(&(addr & !7u64)) {
            return v;
        }
        let doc_bytes = doc.read_bytes(addr, n);
        if !doc_bytes.is_empty() {
            let mut buf = [0u8; 8];
            let copy_len = doc_bytes.len().min(n);
            buf[..copy_len].copy_from_slice(&doc_bytes[..copy_len]);
            return u64::from_le_bytes(buf);
        }
        0
    }

    pub fn step(&mut self, doc: &UltronDisassembledFile) {
        if self.halted {
            return;
        }
        let Some(ins) = doc.instructions.get(&self.pc).cloned() else {
            self.trace_log.push(format!(
                "[HALT] No instruction mapped at PC=0x{:x}",
                self.pc
            ));
            self.halted = true;
            return;
        };

        self.step_count += 1;
        let mnem = ins.mnemonic.to_lowercase();
        let next_pc = ins.address + ins.size as u64;

        // Dispatch WebAssembly instructions when arch == wasm32 or mnemonic is a WASM opcode
        if self.arch == "wasm32" || mnem.contains('.') || mnem == "br_if" || mnem == "end" {
            self.step_wasm(doc, &ins, &mnem, next_pc);
            return;
        }

        let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();

        // 1. Return instructions
        if mnem == "ret"
            || mnem == "retq"
            || mnem == "retaa"
            || mnem == "retab"
            || (mnem == "bx" && ins.op_str.trim().eq_ignore_ascii_case("lr"))
        {
            let (ret_addr, ret_val) = match self.arch.as_str() {
                "x86_64" => {
                    let rsp = self.get_sp();
                    let ra = self.mem_read(doc, rsp, 8);
                    self.set_sp(rsp.wrapping_add(8));
                    (ra, self.regs.get("rax").copied().unwrap_or(0))
                }
                "x86" | "i386" => {
                    let esp = self.get_sp();
                    let ra = self.mem_read(doc, esp, 4);
                    self.set_sp(esp.wrapping_add(4));
                    (ra, self.regs.get("eax").copied().unwrap_or(0))
                }
                "arm32" | "arm" => (
                    self.regs.get("lr").copied().unwrap_or(0),
                    self.regs.get("r0").copied().unwrap_or(0),
                ),
                _ => (
                    self.regs.get("x30").copied().unwrap_or(0),
                    self.regs.get("x0").copied().unwrap_or(0),
                ),
            };
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} -> Sub-routine returned (ret_val=0x{:x})",
                self.step_count, ins.address, mnem, ret_val
            ));
            self.pc = ret_addr;
            self.halted = true;
            return;
        }

        // 2. Stack Push / Pop (x86 / x86_64 / ARM32)
        if mnem == "push" && !ops.is_empty() {
            let val = self.eval_operand(ops[0]);
            let word_sz = if self.is_32bit() { 4u64 } else { 8u64 };
            let new_sp = self.get_sp().wrapping_sub(word_sz);
            self.set_sp(new_sp);
            self.mem_write(new_sp, val, word_sz as usize);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: push {} -> [0x{:x}] = 0x{:x}",
                self.step_count, ins.address, ops[0], new_sp, val
            ));
            self.pc = next_pc;
            return;
        }
        if mnem == "pop" && !ops.is_empty() {
            let dst = Self::norm_reg(ops[0]);
            let word_sz = if self.is_32bit() { 4u64 } else { 8u64 };
            let sp = self.get_sp();
            let val = self.mem_read(doc, sp, word_sz as usize);
            self.set_sp(sp.wrapping_add(word_sz));
            self.regs.insert(dst.clone(), val);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: pop {} -> {} = 0x{:x}",
                self.step_count, ins.address, dst, dst, val
            ));
            self.pc = next_pc;
            return;
        }

        // 3. ARM64 Pair Store/Load: STP / LDP
        if mnem == "stp" && ops.len() >= 3 {
            let v1 = self.eval_operand(ops[0]);
            let v2 = self.eval_operand(ops[1]);
            let mem_str = ops[2..].join(", ");
            let addr = self.eval_mem_address_with_writeback(&mem_str);
            self.mem_write(addr, v1, 8);
            self.mem_write(addr.wrapping_add(8), v2, 8);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: stp {}, {} -> [0x{:x}] = (0x{:x}, 0x{:x})",
                self.step_count, ins.address, ops[0], ops[1], addr, v1, v2
            ));
            self.pc = next_pc;
            return;
        }
        if mnem == "ldp" && ops.len() >= 3 {
            let r1 = Self::norm_reg(ops[0]);
            let r2 = Self::norm_reg(ops[1]);
            let mem_str = ops[2..].join(", ");
            let addr = self.eval_mem_address_with_writeback(&mem_str);
            let v1 = self.mem_read(doc, addr, 8);
            let v2 = self.mem_read(doc, addr.wrapping_add(8), 8);
            self.regs.insert(r1.clone(), v1);
            self.regs.insert(r2.clone(), v2);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: ldp {}, {} <- [0x{:x}] = (0x{:x}, 0x{:x})",
                self.step_count, ins.address, r1, r2, addr, v1, v2
            ));
            self.pc = next_pc;
            return;
        }

        // 4. Memory Load / Store (STR, STUR, STRB, STRH, LDR, LDUR, LDRB, LDRH, LDRSW)
        if matches!(mnem.as_str(), "str" | "stur" | "strb" | "strh" | "strw") && ops.len() >= 2 {
            let val = self.eval_operand(ops[0]);
            let mem_str = ops[1..].join(", ");
            let addr = self.eval_mem_address_with_writeback(&mem_str);
            let sz = match mnem.as_str() {
                "strb" => 1,
                "strh" => 2,
                "strw" => 4,
                _ => {
                    if ops[0].trim().starts_with('w') || self.is_32bit() {
                        4
                    } else {
                        8
                    }
                }
            };
            self.mem_write(addr, val, sz);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> [0x{:x}] = 0x{:x}",
                self.step_count, ins.address, mnem, ins.op_str, addr, val
            ));
            self.pc = next_pc;
            return;
        }
        if matches!(mnem.as_str(), "ldr" | "ldur" | "ldrb" | "ldrh" | "ldrsw") && ops.len() >= 2 {
            let dst = Self::norm_reg(ops[0]);
            let mem_str = ops[1..].join(", ");
            let addr = self.eval_mem_address_with_writeback(&mem_str);
            let sz = match mnem.as_str() {
                "ldrb" => 1,
                "ldrh" => 2,
                "ldrsw" => 4,
                _ => {
                    if ops[0].trim().starts_with('w') || self.is_32bit() {
                        4
                    } else {
                        8
                    }
                }
            };
            let mut val = self.mem_read(doc, addr, sz);
            if mnem == "ldrsw" {
                val = (val as u32 as i32 as i64) as u64;
            }
            self.regs.insert(dst.clone(), val);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> {} = 0x{:x} (from 0x{:x})",
                self.step_count, ins.address, mnem, ins.op_str, dst, val, addr
            ));
            self.pc = next_pc;
            return;
        }

        // 5. Data movement: MOV, MOVZ, MOVK, MOVN, MVN, LEA, ADR, ADRP
        if matches!(
            mnem.as_str(),
            "mov" | "movz" | "movk" | "movn" | "mvn" | "movzx" | "movsx" | "movsxd" | "lea" | "adr" | "adrp"
        ) && ops.len() >= 2
        {
            if ops[0].contains('[') {
                // x86 memory store: mov [rbp - 8], rax
                let addr = self.eval_mem_address_with_writeback(ops[0]);
                let val = self.eval_operand(ops[1]);
                let sz = if self.is_32bit() { 4 } else { 8 };
                self.mem_write(addr, val, sz);
                self.trace_log.push(format!(
                    "[STEP {:02}] 0x{:x}: {} {} -> [0x{:x}] = 0x{:x}",
                    self.step_count, ins.address, mnem, ins.op_str, addr, val
                ));
            } else {
                let dst = Self::norm_reg(ops[0]);
                let val = if mnem == "lea" && ops[1].contains('[') {
                    self.eval_mem_address_with_writeback(ops[1])
                } else if ops[1].contains('[') {
                    let addr = self.eval_mem_address_with_writeback(ops[1]);
                    let sz = if self.is_32bit() { 4 } else { 8 };
                    self.mem_read(doc, addr, sz)
                } else {
                    let mut imm = self.eval_operand(ops[1]);
                    if ops.len() >= 3 {
                        imm = self.apply_barrel_shift(imm, ops[2]);
                    }
                    if mnem == "movk" {
                        let shift = Self::parse_shift_amount(ops.get(2).copied().unwrap_or(""));
                        let mask = !(0xffffu64 << shift);
                        let prev = self.regs.get(&dst).copied().unwrap_or(0);
                        (prev & mask) | ((self.eval_operand(ops[1]) & 0xffff) << shift)
                    } else if mnem == "movn" || mnem == "mvn" {
                        !imm
                    } else {
                        imm
                    }
                };
                self.regs.insert(dst.clone(), val);
                self.trace_log.push(format!(
                    "[STEP {:02}] 0x{:x}: {} {} -> {} = 0x{:x}",
                    self.step_count, ins.address, mnem, ins.op_str, dst, val
                ));
            }
            self.pc = next_pc;
            return;
        }

        // 6. Arithmetic & Bitwise Operations (ADD, SUB, MUL, MADD, AND, ORR/OR, EOR/XOR, BIC, LSL/SHL, LSR/SHR, ASR/SAR, ROR)
        if matches!(
            mnem.as_str(),
            "add"
                | "adds"
                | "sub"
                | "subs"
                | "mul"
                | "imul"
                | "madd"
                | "and"
                | "ands"
                | "orr"
                | "or"
                | "eor"
                | "xor"
                | "bic"
                | "lsl"
                | "shl"
                | "lsr"
                | "shr"
                | "asr"
                | "sar"
                | "ror"
                | "inc"
                | "dec"
                | "neg"
                | "not"
        ) && !ops.is_empty()
        {
            let dst = Self::norm_reg(ops[0]);
            let res = if mnem == "inc" {
                let a = self.eval_operand(ops[0]);
                self.update_flags_add(a, 1)
            } else if mnem == "dec" {
                let a = self.eval_operand(ops[0]);
                self.update_flags_sub(a, 1)
            } else if mnem == "neg" {
                let a = self.eval_operand(ops.get(1).copied().unwrap_or(ops[0]));
                self.update_flags_sub(0, a)
            } else if mnem == "not" {
                let a = self.eval_operand(ops.get(1).copied().unwrap_or(ops[0]));
                let v = !a;
                self.update_flags_logic(v);
                v
            } else if mnem == "madd" && ops.len() >= 4 {
                let m1 = self.eval_operand(ops[1]);
                let m2 = self.eval_operand(ops[2]);
                let acc = self.eval_operand(ops[3]);
                let v = m1.wrapping_mul(m2).wrapping_add(acc);
                self.update_flags_logic(v);
                v
            } else if ops.len() >= 2 {
                let src1 = if ops.len() >= 3 {
                    self.eval_operand(ops[1])
                } else {
                    self.eval_operand(ops[0])
                };
                let mut src2 = if ops.len() >= 3 {
                    self.eval_operand(ops[2])
                } else {
                    self.eval_operand(ops[1])
                };
                if ops.len() >= 4 {
                    src2 = self.apply_barrel_shift(src2, ops[3]);
                }
                match mnem.as_str() {
                    "add" | "adds" => self.update_flags_add(src1, src2),
                    "sub" | "subs" => self.update_flags_sub(src1, src2),
                    "mul" | "imul" => {
                        let v = src1.wrapping_mul(src2);
                        self.update_flags_logic(v);
                        v
                    }
                    "and" | "ands" => {
                        let v = src1 & src2;
                        self.update_flags_logic(v);
                        v
                    }
                    "orr" | "or" => {
                        let v = src1 | src2;
                        self.update_flags_logic(v);
                        v
                    }
                    "eor" | "xor" => {
                        let v = src1 ^ src2;
                        self.update_flags_logic(v);
                        v
                    }
                    "bic" => {
                        let v = src1 & !src2;
                        self.update_flags_logic(v);
                        v
                    }
                    "lsl" | "shl" => {
                        let sh = (src2 & 63) as u32;
                        let v = src1.wrapping_shl(sh);
                        self.update_flags_logic(v);
                        v
                    }
                    "lsr" | "shr" => {
                        let sh = (src2 & 63) as u32;
                        let v = src1.wrapping_shr(sh);
                        self.update_flags_logic(v);
                        v
                    }
                    "asr" | "sar" => {
                        let sh = (src2 & 63) as u32;
                        let v = ((src1 as i64).wrapping_shr(sh)) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "ror" => {
                        let sh = (src2 & 63) as u32;
                        let v = src1.rotate_right(sh);
                        self.update_flags_logic(v);
                        v
                    }
                    _ => src1,
                }
            } else {
                0
            };

            self.regs.insert(dst.clone(), res);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> {} = 0x{:x} (N={} Z={} C={} V={})",
                self.step_count,
                ins.address,
                mnem,
                ins.op_str,
                dst,
                res,
                self.flags["N"],
                self.flags["Z"],
                self.flags["C"],
                self.flags["V"]
            ));
            self.pc = next_pc;
            return;
        }

        // 7. Comparisons & Bit Tests (CMP, CMN, TST, TEST)
        if matches!(mnem.as_str(), "cmp" | "cmn" | "tst" | "test") && ops.len() >= 2 {
            let a = self.eval_operand(ops[0]);
            let b = self.eval_operand(ops[1]);
            match mnem.as_str() {
                "cmp" => {
                    self.update_flags_sub(a, b);
                }
                "cmn" => {
                    self.update_flags_add(a, b);
                }
                _ => {
                    self.update_flags_logic(a & b);
                }
            }
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> N={} Z={} C={} V={}",
                self.step_count,
                ins.address,
                mnem,
                ins.op_str,
                self.flags["N"],
                self.flags["Z"],
                self.flags["C"],
                self.flags["V"]
            ));
            self.pc = next_pc;
            return;
        }

        // 8. Conditional and Unconditional Branches
        if ins.is_branch {
            let target = ins.branch_target.unwrap_or(next_pc);
            let taken = match mnem.as_str() {
                "b" | "jmp" => true,
                "b.eq" | "beq" | "je" | "jz" => self.flags["Z"] == 1,
                "b.ne" | "bne" | "jne" | "jnz" => self.flags["Z"] == 0,
                "b.lt" | "blt" | "jl" | "jnge" => self.flags["N"] != self.flags["V"],
                "b.ge" | "bge" | "jge" | "jnl" => self.flags["N"] == self.flags["V"],
                "b.gt" | "bgt" | "jg" | "jnle" => {
                    self.flags["Z"] == 0 && (self.flags["N"] == self.flags["V"])
                }
                "b.le" | "ble" | "jle" | "jng" => {
                    self.flags["Z"] == 1 || (self.flags["N"] != self.flags["V"])
                }
                "b.hi" | "bhi" | "ja" => self.flags["C"] == 1 && self.flags["Z"] == 0,
                "b.lo" | "blo" | "b.cc" | "jb" => self.flags["C"] == 0,
                "b.hs" | "bhs" | "b.cs" | "jae" => self.flags["C"] == 1,
                "b.ls" | "bls" | "jbe" => self.flags["C"] == 0 || self.flags["Z"] == 1,
                "cbz" => {
                    let v = ops.first().map(|o| self.eval_operand(o)).unwrap_or(0);
                    v == 0
                }
                "cbnz" => {
                    let v = ops.first().map(|o| self.eval_operand(o)).unwrap_or(0);
                    v != 0
                }
                _ => false,
            };
            self.pc = if taken { target } else { next_pc };
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> branch {} (PC=0x{:x})",
                self.step_count,
                ins.address,
                mnem,
                ins.op_str,
                if taken { "TAKEN" } else { "NOT TAKEN" },
                self.pc
            ));
            return;
        }

        // 9. Call simulation
        if ins.is_call {
            let ret_reg = match self.arch.as_str() {
                "x86_64" => "rax",
                "x86" | "i386" => "eax",
                "arm32" | "arm" => "r0",
                _ => "x0",
            };
            let cur_ret = self.regs.get(ret_reg).copied().unwrap_or(0);
            let call_desc = format!("{} {}", ins.op_str, ins.comment);
            let new_ret = if call_desc.contains("alloc") || call_desc.contains("sharedEngine") {
                0x6000_0001_4000
            } else if call_desc.contains("length") {
                19
            } else {
                cur_ret.wrapping_add(1)
            };
            self.regs.insert(ret_reg.to_string(), new_ret);
            self.trace_log.push(format!(
                "[STEP {:02}] 0x{:x}: {} {} -> simulated return {}=0x{:x}",
                self.step_count, ins.address, mnem, ins.op_str, ret_reg, new_ret
            ));
            self.pc = next_pc;
            return;
        }

        self.trace_log.push(format!(
            "[STEP {:02}] 0x{:x}: {} {}",
            self.step_count, ins.address, ins.mnemonic, ins.op_str
        ));
        self.pc = next_pc;
    }

    fn step_wasm(
        &mut self,
        doc: &UltronDisassembledFile,
        ins: &crate::types::UltronInstruction,
        mnem: &str,
        next_pc: u64,
    ) {
        let op = ins.op_str.trim();
        match mnem {
            "nop" | "block" | "loop" => {
                self.pc = next_pc;
            }
            "end" | "return" | "unreachable" => {
                if ins.is_return {
                    let ret_val = self.wasm_stack.last().copied().unwrap_or(0);
                    self.regs.insert("tos".to_string(), ret_val);
                    self.trace_log.push(format!(
                        "[STEP {:02}] 0x{:x}: {} -> WASM return (tos=0x{:x})",
                        self.step_count, ins.address, mnem, ret_val
                    ));
                    self.halted = true;
                    return;
                }
                self.pc = next_pc;
            }
            "i32.const" | "i64.const" => {
                let val = op.parse::<i64>().unwrap_or(0) as u64;
                self.wasm_stack.push(val);
                self.regs.insert("tos".to_string(), val);
                self.pc = next_pc;
            }
            "local.get" => {
                let idx = op
                    .trim_start_matches("$local_")
                    .trim_start_matches("$var")
                    .parse::<usize>()
                    .unwrap_or(0);
                let key = format!("local{}", idx);
                let val = self.regs.get(&key).copied().unwrap_or(0);
                self.wasm_stack.push(val);
                self.regs.insert("tos".to_string(), val);
                self.pc = next_pc;
            }
            "local.set" => {
                let idx = op
                    .trim_start_matches("$local_")
                    .trim_start_matches("$var")
                    .parse::<usize>()
                    .unwrap_or(0);
                let val = self.wasm_stack.pop().unwrap_or(0);
                self.regs.insert(format!("local{}", idx), val);
                self.regs.insert(
                    "tos".to_string(),
                    self.wasm_stack.last().copied().unwrap_or(0),
                );
                self.pc = next_pc;
            }
            "local.tee" => {
                let idx = op
                    .trim_start_matches("$local_")
                    .trim_start_matches("$var")
                    .parse::<usize>()
                    .unwrap_or(0);
                let val = self.wasm_stack.last().copied().unwrap_or(0);
                self.regs.insert(format!("local{}", idx), val);
                self.regs.insert("tos".to_string(), val);
                self.pc = next_pc;
            }
            "global.get" => {
                let idx = op
                    .trim_start_matches("$global_")
                    .trim_start_matches("$global")
                    .parse::<usize>()
                    .unwrap_or(0);
                let val = self.regs.get(&format!("global{}", idx)).copied().unwrap_or(0);
                self.wasm_stack.push(val);
                self.regs.insert("tos".to_string(), val);
                self.pc = next_pc;
            }
            "global.set" => {
                let idx = op
                    .trim_start_matches("$global_")
                    .trim_start_matches("$global")
                    .parse::<usize>()
                    .unwrap_or(0);
                let val = self.wasm_stack.pop().unwrap_or(0);
                self.regs.insert(format!("global{}", idx), val);
                self.regs.insert(
                    "tos".to_string(),
                    self.wasm_stack.last().copied().unwrap_or(0),
                );
                self.pc = next_pc;
            }
            "i32.load" => {
                let base = self.wasm_stack.pop().unwrap_or(0);
                let addr = VIRTUAL_STACK_BASE + (base & 0xffff);
                let val = self.mem_read(doc, addr, 4);
                self.wasm_stack.push(val);
                self.regs.insert("tos".to_string(), val);
                self.pc = next_pc;
            }
            "i32.store" => {
                let val = self.wasm_stack.pop().unwrap_or(0);
                let base = self.wasm_stack.pop().unwrap_or(0);
                let addr = VIRTUAL_STACK_BASE + (base & 0xffff);
                self.mem_write(addr, val, 4);
                self.regs.insert(
                    "tos".to_string(),
                    self.wasm_stack.last().copied().unwrap_or(0),
                );
                self.pc = next_pc;
            }
            "i32.eqz" => {
                let a = self.wasm_stack.pop().unwrap_or(0) as u32;
                let res = if a == 0 { 1u64 } else { 0u64 };
                self.update_flags_logic(res);
                self.wasm_stack.push(res);
                self.regs.insert("tos".to_string(), res);
                self.pc = next_pc;
            }
            "i32.eq" | "i32.ne" | "i32.lt_s" | "i32.lt_u" | "i32.gt_s" | "i32.gt_u"
            | "i32.le_s" | "i32.le_u" | "i32.ge_s" | "i32.ge_u" => {
                let b = self.wasm_stack.pop().unwrap_or(0) as u32;
                let a = self.wasm_stack.pop().unwrap_or(0) as u32;
                self.update_flags_sub(a as u64, b as u64);
                let cond = match mnem {
                    "i32.eq" => a == b,
                    "i32.ne" => a != b,
                    "i32.lt_s" => (a as i32) < (b as i32),
                    "i32.lt_u" => a < b,
                    "i32.gt_s" => (a as i32) > (b as i32),
                    "i32.gt_u" => a > b,
                    "i32.le_s" => (a as i32) <= (b as i32),
                    "i32.le_u" => a <= b,
                    "i32.ge_s" => (a as i32) >= (b as i32),
                    _ => a >= b,
                };
                let res = if cond { 1u64 } else { 0u64 };
                self.wasm_stack.push(res);
                self.regs.insert("tos".to_string(), res);
                self.pc = next_pc;
            }
            "i32.add" | "i32.sub" | "i32.mul" | "i32.div_s" | "i32.div_u" | "i32.and"
            | "i32.or" | "i32.xor" | "i32.shl" | "i32.shr_s" | "i32.shr_u" => {
                let b = self.wasm_stack.pop().unwrap_or(0) as u32;
                let a = self.wasm_stack.pop().unwrap_or(0) as u32;
                let res = match mnem {
                    "i32.add" => self.update_flags_add(a as u64, b as u64),
                    "i32.sub" => self.update_flags_sub(a as u64, b as u64),
                    "i32.mul" => {
                        let v = a.wrapping_mul(b) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.div_s" => {
                        let v = if b != 0 {
                            ((a as i32).wrapping_div(b as i32)) as u32 as u64
                        } else {
                            0
                        };
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.div_u" => {
                        let v = if b != 0 { (a / b) as u64 } else { 0 };
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.and" => {
                        let v = (a & b) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.or" => {
                        let v = (a | b) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.xor" => {
                        let v = (a ^ b) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.shl" => {
                        let v = a.wrapping_shl(b & 31) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    "i32.shr_s" => {
                        let v = ((a as i32).wrapping_shr(b & 31)) as u32 as u64;
                        self.update_flags_logic(v);
                        v
                    }
                    _ => {
                        let v = a.wrapping_shr(b & 31) as u64;
                        self.update_flags_logic(v);
                        v
                    }
                };
                self.wasm_stack.push(res);
                self.regs.insert("tos".to_string(), res);
                self.pc = next_pc;
            }
            "br" => {
                self.pc = ins.branch_target.unwrap_or(next_pc);
            }
            "br_if" => {
                let cond = self.wasm_stack.pop().unwrap_or(0);
                self.pc = if cond != 0 {
                    ins.branch_target.unwrap_or(next_pc)
                } else {
                    next_pc
                };
            }
            "if" => {
                let cond = self.wasm_stack.pop().unwrap_or(0);
                self.pc = if cond == 0 {
                    ins.branch_target.unwrap_or(next_pc)
                } else {
                    next_pc
                };
            }
            "else" => {
                self.pc = ins.branch_target.unwrap_or(next_pc);
            }
            _ => {
                self.pc = next_pc;
            }
        }
        self.trace_log.push(format!(
            "[STEP {:02}] 0x{:x}: {} {} -> tos=0x{:x} (depth={})",
            self.step_count,
            ins.address,
            ins.mnemonic,
            ins.op_str,
            self.regs.get("tos").copied().unwrap_or(0),
            self.wasm_stack.len()
        ));
    }

    fn get_sp(&self) -> u64 {
        self.regs
            .get("sp")
            .or_else(|| self.regs.get("rsp"))
            .or_else(|| self.regs.get("esp"))
            .copied()
            .unwrap_or(VIRTUAL_STACK_BASE + 0x8000)
    }

    fn set_sp(&mut self, val: u64) {
        if self.regs.contains_key("rsp") {
            self.regs.insert("rsp".to_string(), val);
        } else if self.regs.contains_key("esp") {
            self.regs.insert("esp".to_string(), val);
        } else {
            self.regs.insert("sp".to_string(), val);
        }
    }

    fn eval_mem_address_with_writeback(&mut self, mem_expr: &str) -> u64 {
        let trimmed = mem_expr.trim();
        let is_pre_index = trimmed.ends_with('!');

        if let Some(open_idx) = trimmed.find('[') {
            if let Some(close_idx) = trimmed.find(']') {
                let inside = &trimmed[open_idx + 1..close_idx];
                let after = trimmed[close_idx + 1..].trim().trim_start_matches(',').trim();

                let mut base_reg = String::new();
                let mut offset: i64 = 0;

                if inside.contains(',') {
                    let parts: Vec<&str> = inside.split(',').map(|s| s.trim()).collect();
                    base_reg = Self::norm_reg(parts[0]);
                    if parts.len() >= 2 {
                        offset = self.eval_signed_token(parts[1]);
                    }
                } else {
                    // x86 style: [rbp - 0x10] or [rsp + 0x8]
                    let mut sign = 1i64;
                    for tok in inside.split_whitespace() {
                        if tok == "+" {
                            sign = 1;
                        } else if tok == "-" {
                            sign = -1;
                        } else if base_reg.is_empty()
                            && tok.chars().next().map(|c| c.is_ascii_alphabetic()).unwrap_or(false)
                        {
                            base_reg = Self::norm_reg(tok);
                        } else {
                            offset += sign * self.eval_signed_token(tok);
                        }
                    }
                }

                let base_val = self.regs.get(&base_reg).copied().unwrap_or(0);
                let eff_addr = (base_val as i64).wrapping_add(offset) as u64;

                if is_pre_index && !base_reg.is_empty() {
                    self.regs.insert(base_reg, eff_addr);
                } else if !after.is_empty() && !after.starts_with('!') && !base_reg.is_empty() {
                    // Post-index writeback: [sp], #0x20
                    let post_off = self.eval_signed_token(after);
                    let new_base = (base_val as i64).wrapping_add(post_off) as u64;
                    self.regs.insert(base_reg, new_base);
                    return base_val;
                }

                return eff_addr;
            }
        }
        self.eval_operand(trimmed)
    }

    fn eval_signed_token(&self, tok: &str) -> i64 {
        let clean = tok.trim().trim_start_matches('#');
        if let Some(hex_s) = clean.strip_prefix("-0x").or_else(|| clean.strip_prefix("-0X")) {
            return i64::from_str_radix(hex_s, 16).map(|v| -v).unwrap_or(0);
        }
        if let Some(hex_s) = clean.strip_prefix("0x").or_else(|| clean.strip_prefix("0X")) {
            return i64::from_str_radix(hex_s, 16).unwrap_or(0);
        }
        if let Ok(v) = clean.parse::<i64>() {
            return v;
        }
        let r = Self::norm_reg(clean);
        self.regs.get(&r).copied().unwrap_or(0) as i64
    }

    fn parse_shift_amount(shift_op: &str) -> u32 {
        for tok in shift_op.split_whitespace().rev() {
            let clean = tok.trim_start_matches('#');
            if let Some(h) = clean.strip_prefix("0x") {
                if let Ok(v) = u32::from_str_radix(h, 16) {
                    return v & 63;
                }
            }
            if let Ok(v) = clean.parse::<u32>() {
                return v & 63;
            }
        }
        0
    }

    fn apply_barrel_shift(&self, val: u64, shift_op: &str) -> u64 {
        let low = shift_op.trim().to_lowercase();
        let sh = Self::parse_shift_amount(&low);
        if low.starts_with("lsl") || low.starts_with("shl") {
            val.wrapping_shl(sh)
        } else if low.starts_with("lsr") || low.starts_with("shr") {
            val.wrapping_shr(sh)
        } else if low.starts_with("asr") || low.starts_with("sar") {
            ((val as i64).wrapping_shr(sh)) as u64
        } else if low.starts_with("ror") {
            val.rotate_right(sh)
        } else {
            val
        }
    }

    fn norm_reg(r: &str) -> String {
        let t = r
            .trim()
            .trim_start_matches('[')
            .trim_end_matches(']')
            .to_lowercase();
        if let Some(num) = t.strip_prefix('w') {
            if num.chars().all(|c| c.is_ascii_digit()) {
                return format!("x{}", num);
            }
        }
        if t == "fp" {
            return "x29".to_string();
        }
        if t == "lr" {
            return "x30".to_string();
        }
        t
    }

    fn eval_operand(&self, op: &str) -> u64 {
        let clean = op.trim().trim_start_matches('#');
        if clean == "xzr" || clean == "wzr" {
            return 0;
        }
        if let Some(hex_s) = clean.strip_prefix("-0x").or_else(|| clean.strip_prefix("-0X")) {
            if let Ok(v) = i64::from_str_radix(hex_s, 16) {
                return (-v) as u64;
            }
        }
        if let Some(hex_s) = clean.strip_prefix("0x").or_else(|| clean.strip_prefix("0X")) {
            if let Ok(v) = u64::from_str_radix(hex_s, 16) {
                return v;
            }
        }
        if let Ok(v) = clean.parse::<i64>() {
            return v as u64;
        }
        let r = Self::norm_reg(clean);
        if let Some(&v) = self.regs.get(&r) {
            return v;
        }
        // Check x86 32-bit sub-registers on x86_64
        if let Some(rest) = r.strip_prefix('e') {
            let r64 = format!("r{}", rest);
            if let Some(&v) = self.regs.get(&r64) {
                return v & 0xffff_ffff;
            }
        }
        0
    }

    pub fn to_json(&self) -> Value {
        let mut regs_hex = BTreeMap::new();
        for (k, v) in &self.regs {
            regs_hex.insert(k.clone(), format!("0x{:016x}", v));
        }
        let mut stack_list = Vec::new();
        let sp = self.get_sp();
        for i in 0..8 {
            let addr = sp.wrapping_add(i * 8);
            let val = if self.virtual_stack.len() == VIRTUAL_STACK_SIZE
                && addr >= VIRTUAL_STACK_BASE
                && (addr + 8) <= VIRTUAL_STACK_BASE + VIRTUAL_STACK_SIZE as u64
            {
                let off = (addr - VIRTUAL_STACK_BASE) as usize;
                u64::from_le_bytes(
                    self.virtual_stack[off..off + 8]
                        .try_into()
                        .unwrap_or([0; 8]),
                )
            } else {
                self.stack.get(&addr).copied().unwrap_or(0)
            };
            stack_list.push(json!({
                "offset": format!("sp+0x{:02x}", i * 8),
                "address": format!("0x{:x}", addr),
                "value": format!("0x{:016x}", val),
            }));
        }
        json!({
            "arch": self.arch,
            "pc": format!("0x{:x}", self.pc),
            "step_count": self.step_count,
            "halted": self.halted,
            "registers": regs_hex,
            "flags": self.flags,
            "stack": stack_list,
            "virtual_stack_size": VIRTUAL_STACK_SIZE,
            "trace_log": self.trace_log,
        })
    }
}

