use crate::types::{
    StackVar, UltronBasicBlock, UltronDisassembledFile, UltronInstruction, UltronProcedure,
};
use capstone::prelude::*;
use std::collections::{BTreeMap, BTreeSet};

pub struct UltronDisassemblerEngine;

impl UltronDisassemblerEngine {
    pub fn analyze(doc: &mut UltronDisassembledFile) {
        let cs = if doc.cpu_subfamily == "x86_64" {
            Capstone::new()
                .x86()
                .mode(arch::x86::ArchMode::Mode64)
                .syntax(arch::x86::ArchSyntax::Intel)
                .detail(false)
                .build()
                .expect("Failed to init x86_64 Capstone")
        } else {
            Capstone::new()
                .arm64()
                .mode(arch::arm64::ArchMode::Arm)
                .detail(false)
                .build()
                .expect("Failed to init ARM64 Capstone")
        };

        let mut func_starts = BTreeSet::new();
        if doc.entry_point != 0 {
            func_starts.insert(doc.entry_point);
        }
        for &addr in doc.labels.keys() {
            if let Some(sec) = doc.get_section_at(addr) {
                if sec.is_code {
                    func_starts.insert(addr);
                }
            }
        }

        // Disassemble all executable sections
        let mut code_sections = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.is_code && !sec.data.is_empty() {
                    code_sections.push((
                        seg.name.clone(),
                        sec.name.clone(),
                        sec.start_address,
                        sec.data.clone(),
                    ));
                }
            }
        }

        let mut adrp_pages: BTreeMap<String, u64> = BTreeMap::new();

        for (_seg_name, sec_name, start_addr, data) in &code_sections {
            if sec_name == "__text" && !func_starts.iter().any(|&a| a >= *start_addr && a < *start_addr + data.len() as u64) {
                func_starts.insert(*start_addr);
            }
            if let Ok(insns) = cs.disasm_all(data, *start_addr) {
                for i in insns.iter() {
                    let addr = i.address();
                    let mnem = i.mnemonic().unwrap_or("nop").to_string();
                    let op_str = i.op_str().unwrap_or("").to_string();
                    let bytes_hex = hex::encode(i.bytes());

                    let m_low = mnem.to_lowercase();
                    let is_ret = m_low == "ret" || m_low == "retq" || m_low == "retaa" || m_low == "retab";
                    let is_call = m_low == "bl" || m_low == "blr" || m_low == "call" || m_low == "callq";
                    let is_branch = m_low == "b"
                        || m_low.starts_with("b.")
                        || m_low == "cbz"
                        || m_low == "cbnz"
                        || m_low == "tbz"
                        || m_low == "tbnz"
                        || (m_low.starts_with('j') && !is_call);

                    let branch_target = if is_call || is_branch {
                        Self::parse_last_hex_addr(&op_str)
                    } else {
                        None
                    };

                    if is_call {
                        if let Some(target) = branch_target {
                            func_starts.insert(target);
                        }
                    }

                    // Track ARM64 ADRP + ADD/LDR page resolution for strings & symbols
                    let mut comment = String::new();
                    let mut string_ref = None;
                    let mut symbol_ref = None;

                    if m_low == "adrp" {
                        let parts: Vec<&str> = op_str.split(',').map(|s| s.trim()).collect();
                        if parts.len() == 2 {
                            if let Some(page) = Self::parse_last_hex_addr(parts[1]) {
                                adrp_pages.insert(parts[0].to_string(), page);
                            }
                        }
                    } else if m_low == "add" || m_low == "ldr" {
                        let parts: Vec<&str> = op_str.split(',').map(|s| s.trim()).collect();
                        if parts.len() >= 2 {
                            let base_reg = parts[1].trim_start_matches('[').trim_end_matches(']').trim();
                            if let Some(&page) = adrp_pages.get(base_reg) {
                                if let Some(off) = Self::parse_last_hex_addr(&op_str) {
                                    if off < 0x10000 {
                                        let full_addr = page + off;
                                        if let Some(s) = doc.strings_table.get(&full_addr) {
                                            comment = format!("\"{}\"", s);
                                            string_ref = Some(s.clone());
                                            doc.xrefs_to.entry(full_addr).or_default().push(addr);
                                            doc.xrefs_from.entry(addr).or_default().push(full_addr);
                                        } else if let Some(lbl) = doc.labels.get(&full_addr) {
                                            comment = lbl.clone();
                                            symbol_ref = Some(lbl.clone());
                                        }
                                    }
                                }
                            }
                        }
                    }

                    if let Some(target) = branch_target {
                        doc.xrefs_to.entry(target).or_default().push(addr);
                        doc.xrefs_from.entry(addr).or_default().push(target);
                        if let Some(lbl) = doc.labels.get(&target) {
                            symbol_ref = Some(lbl.clone());
                            if comment.is_empty() {
                                comment = lbl.clone();
                            }
                        }
                    }

                    // Detect ARM64 prologue boundary (`stp x29, x30, [sp, ...]` or `sub sp, sp, ...` after `ret`)
                    doc.instructions.insert(
                        addr,
                        UltronInstruction {
                            address: addr,
                            size: i.bytes().len(),
                            bytes_hex,
                            mnemonic: mnem,
                            op_str,
                            comment,
                            is_branch,
                            is_call,
                            is_return: is_ret,
                            branch_target,
                            string_ref,
                            symbol_ref,
                        },
                    );
                }
            }
        }

        // Discover additional functions following `ret` instructions in `__text`
        let all_addrs: Vec<u64> = doc.instructions.keys().copied().collect();
        for idx in 0..all_addrs.len().saturating_sub(1) {
            let a = all_addrs[idx];
            let next_a = all_addrs[idx + 1];
            if let Some(ins) = doc.instructions.get(&a) {
                if ins.is_return {
                    if let Some(sec) = doc.get_section_at(next_a) {
                        if sec.name == "__text" {
                            func_starts.insert(next_a);
                        }
                    }
                }
            }
        }

        // Populate string xrefs
        for entry in &mut doc.string_entries {
            if let Some(xrefs) = doc.xrefs_to.get(&entry.address) {
                entry.xrefs = xrefs.clone();
            }
        }

        // Build procedures and CFGs
        let sorted_starts: Vec<u64> = func_starts.into_iter().collect();
        for (idx, &entry) in sorted_starts.iter().enumerate() {
            let Some(sec) = doc.get_section_at(entry) else { continue };
            let seg_name = sec.segment_name.clone();
            let sec_name = sec.name.clone();
            let sec_end = sec.start_address + sec.length;
            let next_func = sorted_starts
                .get(idx + 1)
                .copied()
                .unwrap_or(sec_end)
                .min(sec_end);

            let proc_insns: Vec<UltronInstruction> = doc
                .instructions
                .range(entry..next_func)
                .map(|(_, ins)| ins.clone())
                .collect();
            if proc_insns.is_empty() {
                continue;
            }

            let end_addr = proc_insns
                .last()
                .map(|i| i.address + i.size as u64)
                .unwrap_or(entry + 4);

            let name = doc
                .labels
                .get(&entry)
                .cloned()
                .unwrap_or_else(|| format!("sub_{:x}", entry));
            doc.labels.entry(entry).or_insert_with(|| name.clone());

            let basic_blocks = Self::build_cfg(&proc_insns, entry, end_addr);
            let mut callees = Vec::new();
            let mut strings_ref = Vec::new();
            let mut stack_size = 0u64;
            let mut local_vars = BTreeMap::new();

            for ins in &proc_insns {
                if ins.is_call {
                    if let Some(t) = ins.branch_target {
                        if !callees.contains(&t) {
                            callees.push(t);
                        }
                    }
                }
                if let Some(ref s) = ins.string_ref {
                    if !strings_ref.contains(s) {
                        strings_ref.push(s.clone());
                    }
                }
                // Stack frame detection (`stp ..., [sp, #-0x20]!` or `sub sp, sp, #0x30`)
                if ins.op_str.contains("sp") && ins.op_str.contains('#') {
                    if let Some(off) = Self::parse_signed_imm(&ins.op_str) {
                        if off < 0 && (-off as u64) > stack_size && (-off as u64) <= 4096 {
                            stack_size = (-off) as u64;
                        }
                        local_vars.entry(off).or_insert_with(|| StackVar {
                            name: if off < 0 {
                                format!("var_m{:x}", -off)
                            } else {
                                format!("var_{:x}", off)
                            },
                            offset: off,
                            var_type: "int64_t".to_string(),
                        });
                    }
                }
            }

            let callers = doc.xrefs_to.get(&entry).cloned().unwrap_or_default();
            let signature = if name.starts_with("+[") || name.starts_with("-[") {
                format!("id {}", name)
            } else {
                format!("int64_t {}()", name)
            };

            doc.procedures.insert(
                entry,
                UltronProcedure {
                    name,
                    entry_point: entry,
                    end_address: end_addr,
                    segment_name: seg_name,
                    section_name: sec_name,
                    signature,
                    basic_blocks,
                    callers,
                    callees,
                    strings_referenced: strings_ref,
                    stack_frame_size: stack_size,
                    local_variables: local_vars,
                },
            );
        }
    }

    fn build_cfg(
        insns: &[UltronInstruction],
        entry: u64,
        end_addr: u64,
    ) -> Vec<UltronBasicBlock> {
        let mut leaders = BTreeSet::new();
        leaders.insert(entry);
        for (idx, ins) in insns.iter().enumerate() {
            if ins.is_branch || ins.is_return {
                if let Some(target) = ins.branch_target {
                    if target >= entry && target < end_addr {
                        leaders.insert(target);
                    }
                }
                if let Some(next_ins) = insns.get(idx + 1) {
                    leaders.insert(next_ins.address);
                }
            }
        }

        let leader_vec: Vec<u64> = leaders.into_iter().collect();
        let mut blocks = Vec::new();

        for (b_idx, &b_start) in leader_vec.iter().enumerate() {
            let b_limit = leader_vec.get(b_idx + 1).copied().unwrap_or(end_addr);
            let b_insns: Vec<UltronInstruction> = insns
                .iter()
                .filter(|i| i.address >= b_start && i.address < b_limit)
                .cloned()
                .collect();
            if b_insns.is_empty() {
                continue;
            }
            let last = b_insns.last().unwrap();
            let b_end = last.address + last.size as u64;
            let fallthrough = if b_end < end_addr { Some(b_end) } else { None };

            let mut outgoing = Vec::new();
            let mut branch_true = None;
            let mut branch_false = None;

            if last.is_return {
                // No outgoing edges
            } else if last.is_branch {
                let m = last.mnemonic.to_lowercase();
                let uncond = m == "b" || m == "jmp";
                if let Some(t) = last.branch_target {
                    if t >= entry && t < end_addr {
                        outgoing.push(t);
                        branch_true = Some(t);
                    }
                }
                if !uncond {
                    if let Some(ft) = fallthrough {
                        if !outgoing.contains(&ft) {
                            outgoing.push(ft);
                        }
                        branch_false = Some(ft);
                    }
                }
            } else if let Some(ft) = fallthrough {
                outgoing.push(ft);
            }

            blocks.push(UltronBasicBlock {
                start_address: b_start,
                end_address: b_end,
                instructions: b_insns,
                outgoing_edges: outgoing,
                incoming_edges: Vec::new(),
                branch_true,
                branch_false,
            });
        }

        // Populate incoming edges
        let edges: Vec<(u64, Vec<u64>)> = blocks
            .iter()
            .map(|b| (b.start_address, b.outgoing_edges.clone()))
            .collect();
        for (src, outs) in edges {
            for dst in outs {
                if let Some(target_bb) = blocks.iter_mut().find(|b| b.start_address == dst) {
                    if !target_bb.incoming_edges.contains(&src) {
                        target_bb.incoming_edges.push(src);
                    }
                }
            }
        }

        blocks
    }

    fn parse_last_hex_addr(op_str: &str) -> Option<u64> {
        for token in op_str.split(|c: char| c == ',' || c.is_whitespace() || c == '[' || c == ']')
            .rev()
        {
            let clean = token.trim().trim_start_matches('#');
            if let Some(h) = clean.strip_prefix("0x").or_else(|| clean.strip_prefix("0X")) {
                if let Ok(v) = u64::from_str_radix(h, 16) {
                    return Some(v);
                }
            }
        }
        None
    }

    fn parse_signed_imm(op_str: &str) -> Option<i64> {
        for token in op_str.split(|c: char| c == ',' || c.is_whitespace() || c == '[' || c == ']' || c == '!')
        {
            let clean = token.trim();
            if let Some(num_s) = clean.strip_prefix('#') {
                if let Some(hex_s) = num_s.strip_prefix("-0x") {
                    if let Ok(v) = i64::from_str_radix(hex_s, 16) {
                        return Some(-v);
                    }
                } else if let Some(hex_s) = num_s.strip_prefix("0x") {
                    if let Ok(v) = i64::from_str_radix(hex_s, 16) {
                        return Some(v);
                    }
                } else if let Ok(v) = num_s.parse::<i64>() {
                    return Some(v);
                }
            }
        }
        None
    }
}
