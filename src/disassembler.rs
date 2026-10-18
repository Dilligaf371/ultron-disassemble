use crate::types::{
    StackVar, UltronBasicBlock, UltronDisassembledFile, UltronInstruction, UltronProcedure,
};
use capstone::prelude::*;
use std::collections::{BTreeMap, BTreeSet};

pub struct UltronDisassemblerEngine;

impl UltronDisassemblerEngine {
    pub fn analyze(doc: &mut UltronDisassembledFile) {
        Self::populate_objc_maps(doc);

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

        let is_wasm = doc.cpu_subfamily == "wasm32"
            || doc.format_name.to_uppercase().contains("WASM")
            || doc.format_name.contains("WebAssembly");

        if is_wasm {
            Self::disassemble_wasm_code(doc, &mut func_starts);
        } else {
            Self::disassemble_native_code(doc, &mut func_starts);
        }

        // Discover additional functions following `ret` instructions in `__text` (or `.wasm_code`)
        let all_addrs: Vec<u64> = doc.instructions.keys().copied().collect();
        for idx in 0..all_addrs.len().saturating_sub(1) {
            let a = all_addrs[idx];
            let next_a = all_addrs[idx + 1];
            if let Some(ins) = doc.instructions.get(&a) {
                if ins.is_return {
                    if let Some(sec) = doc.get_section_at(next_a) {
                        if sec.name == "__text" || sec.name == ".wasm_code" || sec.name == "code" {
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
                } else if is_wasm && ins.mnemonic.starts_with("local.") {
                    if let Some(num_s) = ins.op_str.trim().strip_prefix("$var") {
                        if let Ok(local_idx) = num_s.parse::<i64>() {
                            local_vars.entry(local_idx).or_insert_with(|| StackVar {
                                name: format!("var_{}", local_idx),
                                offset: local_idx * 4,
                                var_type: "i32".to_string(),
                            });
                        }
                    }
                }
            }

            let callers = doc.xrefs_to.get(&entry).cloned().unwrap_or_default();
            let signature = if name.starts_with("+[") || name.starts_with("-[") {
                format!("id {}", name)
            } else if is_wasm {
                format!("i32 {}()", name)
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

    fn populate_objc_maps(doc: &mut UltronDisassembledFile) {
        // 1. Populate from existing labels and imports
        for (&addr, lbl) in &doc.labels {
            if let Some(inner) = lbl.strip_prefix("@selector(").and_then(|s| s.strip_suffix(')')) {
                doc.objc_selector_map
                    .entry(addr)
                    .or_insert_with(|| inner.to_string());
            } else if lbl.contains("_OBJC_CLASS_$_") {
                let cls = Self::clean_objc_class_name(lbl);
                if !cls.is_empty() {
                    doc.objc_classref_map.entry(addr).or_insert(cls);
                }
            }
        }
        for (&addr, imp) in &doc.imports {
            if imp.contains("_OBJC_CLASS_$_") {
                let cls = Self::clean_objc_class_name(imp);
                if !cls.is_empty() {
                    doc.objc_classref_map.entry(addr).or_insert(cls);
                }
            }
        }

        // 2. Populate from parsed Objective-C classes
        for cls in &doc.objc_classes {
            doc.objc_classref_map
                .entry(cls.address)
                .or_insert_with(|| cls.name.clone());
        }

        // 3. Scan __objc_selrefs, __objc_classrefs, __objc_superrefs, __objc_classlist sections
        let mut sel_entries = Vec::new();
        let mut cls_entries = Vec::new();

        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_selrefs" {
                    for (idx, chunk) in sec.data.chunks_exact(8).enumerate() {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let ptr = doc.normalize_ptr(raw_ptr);
                        let ref_addr = sec.start_address + (idx as u64) * 8;
                        if let Some(sel) = doc.read_cstring(ptr) {
                            sel_entries.push((ref_addr, sel.clone()));
                            sel_entries.push((ptr, sel));
                        }
                    }
                } else if matches!(
                    sec.name.as_str(),
                    "__objc_classrefs" | "__objc_superrefs" | "__objc_classlist"
                ) {
                    for (idx, chunk) in sec.data.chunks_exact(8).enumerate() {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let ptr = doc.normalize_ptr(raw_ptr);
                        let ref_addr = sec.start_address + (idx as u64) * 8;

                        let resolved_cls = doc
                            .objc_classes
                            .iter()
                            .find(|c| c.address == ptr)
                            .map(|c| c.name.clone())
                            .or_else(|| doc.objc_classref_map.get(&ref_addr).cloned())
                            .or_else(|| doc.objc_classref_map.get(&ptr).cloned())
                            .or_else(|| {
                                doc.labels
                                    .get(&ref_addr)
                                    .or_else(|| doc.imports.get(&ref_addr))
                                    .or_else(|| doc.labels.get(&ptr))
                                    .map(|s| Self::clean_objc_class_name(s))
                                    .filter(|s| !s.is_empty())
                            });

                        if let Some(cls_name) = resolved_cls {
                            cls_entries.push((ref_addr, cls_name.clone()));
                            if ptr != 0 {
                                cls_entries.push((ptr, cls_name));
                            }
                        }
                    }
                }
            }
        }

        for (addr, sel) in sel_entries {
            doc.objc_selector_map.entry(addr).or_insert(sel);
        }
        for (addr, cls) in cls_entries {
            doc.objc_classref_map.entry(addr).or_insert(cls);
        }
    }

    fn clean_objc_class_name(raw: &str) -> String {
        raw.trim()
            .trim_start_matches("ClassRef:")
            .trim()
            .trim_start_matches("imp_")
            .trim_start_matches("_OBJC_CLASS_$_")
            .trim_start_matches("OBJC_CLASS_$_")
            .trim_start_matches("_OBJC_METACLASS_$_")
            .trim()
            .to_string()
    }

    fn clean_selector_name(raw: &str) -> String {
        let trimmed = raw.trim();
        if let Some(inner) = trimmed
            .strip_prefix("@selector(")
            .and_then(|s| s.strip_suffix(')'))
        {
            inner.trim().to_string()
        } else {
            trimmed.to_string()
        }
    }

    /// Native WebAssembly (`.wasm`) bytecode disassembler with ULEB128/SLEB128 immediate decoding
    pub fn disassemble_wasm_code(
        doc: &mut UltronDisassembledFile,
        func_starts: &mut BTreeSet<u64>,
    ) {
        let mut code_sections = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.is_code && !sec.data.is_empty() {
                    code_sections.push((sec.start_address, sec.data.clone()));
                }
            }
        }

        let mut func_addr_by_index: BTreeMap<u32, u64> = BTreeMap::new();
        let mut export_names_by_index: BTreeMap<u32, String> = BTreeMap::new();

        for (start_addr, data) in &code_sections {
            if data.len() >= 8 && &data[0..4] == b"\0asm" {
                // Full WebAssembly module binary inside section: parse Export (7) and Code (10) sections
                let mut cursor = 8usize;
                let mut code_bodies: Vec<(u32, u64, usize, usize)> = Vec::new();

                while cursor < data.len() {
                    let sec_id = data[cursor];
                    cursor += 1;
                    let (sec_len, n_len) = Self::read_uleb128(&data[cursor..]);
                    cursor += n_len;
                    let sec_end = (cursor + sec_len as usize).min(data.len());
                    let sec_payload = &data[cursor..sec_end];

                    if sec_id == 7 {
                        // Export section
                        let (exp_count, mut p) = Self::read_uleb128(sec_payload);
                        for _ in 0..exp_count {
                            if p >= sec_payload.len() {
                                break;
                            }
                            let (name_len, n1) = Self::read_uleb128(&sec_payload[p..]);
                            p += n1;
                            let name_end = (p + name_len as usize).min(sec_payload.len());
                            let exp_name = String::from_utf8_lossy(&sec_payload[p..name_end]).to_string();
                            p = name_end;
                            if p >= sec_payload.len() {
                                break;
                            }
                            let kind = sec_payload[p];
                            p += 1;
                            let (idx, n2) = Self::read_uleb128(&sec_payload[p..]);
                            p += n2;
                            if kind == 0 {
                                export_names_by_index.insert(idx as u32, exp_name);
                            }
                        }
                    } else if sec_id == 10 {
                        // Code section
                        let (func_count, mut p) = Self::read_uleb128(sec_payload);
                        for f_idx in 0..func_count {
                            if p >= sec_payload.len() {
                                break;
                            }
                            let (body_size, n1) = Self::read_uleb128(&sec_payload[p..]);
                            p += n1;
                            let body_start_in_sec = p;
                            let body_end_in_sec = (p + body_size as usize).min(sec_payload.len());

                            // Parse local declarations header inside function body
                            let body_bytes = &sec_payload[body_start_in_sec..body_end_in_sec];
                            let (local_decl_count, mut lp) = Self::read_uleb128(body_bytes);
                            for _ in 0..local_decl_count {
                                if lp >= body_bytes.len() {
                                    break;
                                }
                                let (_cnt, ln) = Self::read_uleb128(&body_bytes[lp..]);
                                lp += ln;
                                if lp < body_bytes.len() {
                                    lp += 1; // valtype byte
                                }
                            }

                            let insn_off_in_module = cursor + body_start_in_sec + lp;
                            let insn_end_in_module = cursor + body_end_in_sec;
                            let func_vaddr = *start_addr + insn_off_in_module as u64;

                            func_addr_by_index.insert(f_idx as u32, func_vaddr);
                            code_bodies.push((
                                f_idx as u32,
                                func_vaddr,
                                insn_off_in_module,
                                insn_end_in_module,
                            ));

                            p = body_end_in_sec;
                        }
                    }

                    cursor = sec_end;
                }

                for (idx, (f_idx, func_vaddr, insn_start, insn_end)) in code_bodies.iter().enumerate() {
                    if idx == 0 && (doc.entry_point == 0 || doc.entry_point == *start_addr) {
                        doc.entry_point = *func_vaddr;
                    }
                    func_starts.insert(*func_vaddr);
                    let fn_name = export_names_by_index
                        .get(f_idx)
                        .cloned()
                        .unwrap_or_else(|| format!("wasm_func_{}", f_idx));
                    doc.labels.entry(*func_vaddr).or_insert(fn_name.clone());
                    if export_names_by_index.contains_key(f_idx) {
                        doc.exports.entry(*func_vaddr).or_insert(fn_name);
                    }
                    Self::disassemble_wasm_stream(
                        doc,
                        &data[*insn_start..*insn_end],
                        *func_vaddr,
                        &func_addr_by_index,
                    );
                }
            } else {
                func_starts.insert(*start_addr);
                doc.labels
                    .entry(*start_addr)
                    .or_insert_with(|| "wasm_func_0".to_string());
                Self::disassemble_wasm_stream(doc, data, *start_addr, &func_addr_by_index);
            }
        }
    }

    fn disassemble_wasm_stream(
        doc: &mut UltronDisassembledFile,
        bytes: &[u8],
        base_addr: u64,
        func_addr_by_index: &BTreeMap<u32, u64>,
    ) {
        #[derive(Clone, Debug)]
        struct CtrlFrame {
            kind: u8, // 0x02 block, 0x03 loop, 0x04 if
            start_addr: u64,
            branch_from_addrs: Vec<u64>,
            if_insn_addr: Option<u64>,
            else_insn_addr: Option<u64>,
        }

        let mut ctrl_stack: Vec<CtrlFrame> = Vec::new();
        let mut pc_off = 0usize;

        while pc_off < bytes.len() {
            let ins_start = pc_off;
            let addr = base_addr + ins_start as u64;
            let opcode = bytes[pc_off];
            pc_off += 1;

            let mnemonic: String;
            let mut op_str = String::new();
            let mut comment = String::new();
            let mut is_branch = false;
            let mut is_call = false;
            let mut is_return = false;
            let mut branch_target = None;
            let mut symbol_ref = None;

            match opcode {
                0x00 => {
                    mnemonic = "unreachable".to_string();
                    is_return = true;
                }
                0x01 => {
                    mnemonic = "nop".to_string();
                }
                0x02 | 0x03 | 0x04 => {
                    let btype = if pc_off < bytes.len() {
                        let b = bytes[pc_off];
                        pc_off += 1;
                        Self::wasm_blocktype_name(b)
                    } else {
                        "void"
                    };
                    mnemonic = match opcode {
                        0x02 => "block".to_string(),
                        0x03 => "loop".to_string(),
                        _ => "if".to_string(),
                    };
                    if btype != "void" {
                        op_str = btype.to_string();
                    }
                    let next_ins_addr = base_addr + pc_off as u64;
                    if opcode == 0x04 {
                        is_branch = true;
                    }
                    ctrl_stack.push(CtrlFrame {
                        kind: opcode,
                        start_addr: next_ins_addr,
                        branch_from_addrs: Vec::new(),
                        if_insn_addr: if opcode == 0x04 { Some(addr) } else { None },
                        else_insn_addr: None,
                    });
                }
                0x05 => {
                    mnemonic = "else".to_string();
                    is_branch = true;
                    let next_ins_addr = base_addr + pc_off as u64;
                    if let Some(top) = ctrl_stack.last_mut() {
                        if let Some(if_addr) = top.if_insn_addr {
                            if let Some(if_ins) = doc.instructions.get_mut(&if_addr) {
                                if_ins.branch_target = Some(next_ins_addr);
                            }
                        }
                        top.else_insn_addr = Some(addr);
                    }
                }
                0x0b => {
                    mnemonic = "end".to_string();
                    let next_ins_addr = base_addr + pc_off as u64;
                    if let Some(frame) = ctrl_stack.pop() {
                        for br_addr in frame.branch_from_addrs {
                            if let Some(br_ins) = doc.instructions.get_mut(&br_addr) {
                                br_ins.branch_target = Some(addr);
                            }
                        }
                        if let Some(else_addr) = frame.else_insn_addr {
                            if let Some(else_ins) = doc.instructions.get_mut(&else_addr) {
                                else_ins.branch_target = Some(addr);
                            }
                        } else if let Some(if_addr) = frame.if_insn_addr {
                            if let Some(if_ins) = doc.instructions.get_mut(&if_addr) {
                                if_ins.branch_target = Some(addr);
                            }
                        }
                        let _ = next_ins_addr;
                    } else {
                        is_return = true;
                    }
                    if pc_off >= bytes.len() {
                        is_return = true;
                    }
                }
                0x0c | 0x0d => {
                    let (depth, n) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n;
                    mnemonic = if opcode == 0x0c {
                        "br".to_string()
                    } else {
                        "br_if".to_string()
                    };
                    op_str = format!("{}", depth);
                    is_branch = true;

                    let depth_usize = depth as usize;
                    if depth_usize < ctrl_stack.len() {
                        let target_idx = ctrl_stack.len() - 1 - depth_usize;
                        if ctrl_stack[target_idx].kind == 0x03 {
                            // Loop: branch target is loop start!
                            let target = ctrl_stack[target_idx].start_addr;
                            branch_target = Some(target);
                            comment = format!("loop @ 0x{:x}", target);
                        } else {
                            ctrl_stack[target_idx].branch_from_addrs.push(addr);
                        }
                    }
                }
                0x0f => {
                    mnemonic = "return".to_string();
                    is_return = true;
                }
                0x10 => {
                    let (func_idx, n) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n;
                    mnemonic = "call".to_string();
                    is_call = true;
                    if let Some(&target_addr) = func_addr_by_index.get(&(func_idx as u32)) {
                        branch_target = Some(target_addr);
                        let lbl = doc
                            .labels
                            .get(&target_addr)
                            .cloned()
                            .unwrap_or_else(|| format!("wasm_func_{}", func_idx));
                        op_str = format!("${} (0x{:x})", lbl, target_addr);
                        comment = lbl.clone();
                        symbol_ref = Some(lbl);
                        doc.xrefs_to.entry(target_addr).or_default().push(addr);
                        doc.xrefs_from.entry(addr).or_default().push(target_addr);
                    } else {
                        op_str = format!("$func_{}", func_idx);
                    }
                }
                0x1a => {
                    mnemonic = "drop".to_string();
                }
                0x1b => {
                    mnemonic = "select".to_string();
                }
                0x20 | 0x21 | 0x22 => {
                    let (local_idx, n) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n;
                    mnemonic = match opcode {
                        0x20 => "local.get".to_string(),
                        0x21 => "local.set".to_string(),
                        _ => "local.tee".to_string(),
                    };
                    op_str = format!("$var{}", local_idx);
                }
                0x23 | 0x24 => {
                    let (global_idx, n) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n;
                    mnemonic = if opcode == 0x23 {
                        "global.get".to_string()
                    } else {
                        "global.set".to_string()
                    };
                    op_str = format!("$global{}", global_idx);
                }
                0x28 | 0x36 => {
                    let (align, n1) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n1;
                    let (offset, n2) = Self::read_uleb128(&bytes[pc_off..]);
                    pc_off += n2;
                    mnemonic = if opcode == 0x28 {
                        "i32.load".to_string()
                    } else {
                        "i32.store".to_string()
                    };
                    op_str = format!("offset={}, align={}", offset, 1u32 << (align.min(4) as u32));
                }
                0x41 => {
                    let (val, n) = Self::read_sleb128(&bytes[pc_off..]);
                    pc_off += n;
                    let v32 = val as i32;
                    mnemonic = "i32.const".to_string();
                    op_str = format!("{}", v32);
                    comment = format!("0x{:x}", v32 as u32);
                }
                0x42 => {
                    let (val, n) = Self::read_sleb128(&bytes[pc_off..]);
                    pc_off += n;
                    mnemonic = "i64.const".to_string();
                    op_str = format!("{}", val);
                    comment = format!("0x{:x}", val as u64);
                }
                0x45 => mnemonic = "i32.eqz".to_string(),
                0x46 => mnemonic = "i32.eq".to_string(),
                0x47 => mnemonic = "i32.ne".to_string(),
                0x48 => mnemonic = "i32.lt_s".to_string(),
                0x49 => mnemonic = "i32.lt_u".to_string(),
                0x4a => mnemonic = "i32.gt_s".to_string(),
                0x4b => mnemonic = "i32.gt_u".to_string(),
                0x4c => mnemonic = "i32.le_s".to_string(),
                0x4d => mnemonic = "i32.le_u".to_string(),
                0x4e => mnemonic = "i32.ge_s".to_string(),
                0x4f => mnemonic = "i32.ge_u".to_string(),
                0x6a => mnemonic = "i32.add".to_string(),
                0x6b => mnemonic = "i32.sub".to_string(),
                0x6c => mnemonic = "i32.mul".to_string(),
                0x6d => mnemonic = "i32.div_s".to_string(),
                0x6e => mnemonic = "i32.div_u".to_string(),
                0x71 => mnemonic = "i32.and".to_string(),
                0x72 => mnemonic = "i32.or".to_string(),
                0x73 => mnemonic = "i32.xor".to_string(),
                0x74 => mnemonic = "i32.shl".to_string(),
                0x75 => mnemonic = "i32.shr_s".to_string(),
                0x76 => mnemonic = "i32.shr_u".to_string(),
                other => {
                    mnemonic = format!("wasm.op_{:02x}", other);
                }
            }

            let ins_bytes = &bytes[ins_start..pc_off.min(bytes.len())];
            doc.instructions.insert(
                addr,
                UltronInstruction {
                    address: addr,
                    size: ins_bytes.len().max(1),
                    bytes_hex: hex::encode(ins_bytes),
                    mnemonic,
                    op_str,
                    comment,
                    is_branch,
                    is_call,
                    is_return,
                    branch_target,
                    string_ref: None,
                    symbol_ref,
                },
            );
        }
    }

    fn wasm_blocktype_name(b: u8) -> &'static str {
        match b {
            0x40 => "void",
            0x7f => "i32",
            0x7e => "i64",
            0x7d => "f32",
            0x7c => "f64",
            _ => "void",
        }
    }

    fn read_uleb128(slice: &[u8]) -> (u64, usize) {
        let mut result = 0u64;
        let mut shift = 0u32;
        let mut count = 0usize;
        for &byte in slice {
            count += 1;
            result |= ((byte & 0x7f) as u64) << shift;
            if (byte & 0x80) == 0 || shift >= 56 {
                break;
            }
            shift += 7;
        }
        (result, count.max(1))
    }

    fn read_sleb128(slice: &[u8]) -> (i64, usize) {
        let mut result = 0i64;
        let mut shift = 0u32;
        let mut count = 0usize;
        let mut last_byte = 0u8;
        for &byte in slice {
            count += 1;
            last_byte = byte;
            result |= ((byte & 0x7f) as i64) << shift;
            shift += 7;
            if (byte & 0x80) == 0 || shift >= 63 {
                break;
            }
        }
        if shift < 64 && (last_byte & 0x40) != 0 {
            result |= !0i64 << shift;
        }
        (result, count.max(1))
    }

    fn disassemble_native_code(
        doc: &mut UltronDisassembledFile,
        func_starts: &mut BTreeSet<u64>,
    ) {
        let cs = match doc.cpu_subfamily.as_str() {
            "x86_64" => Capstone::new()
                .x86()
                .mode(arch::x86::ArchMode::Mode64)
                .syntax(arch::x86::ArchSyntax::Intel)
                .detail(false)
                .build()
                .expect("Failed to init x86_64 Capstone"),
            "x86" | "i386" => Capstone::new()
                .x86()
                .mode(arch::x86::ArchMode::Mode32)
                .syntax(arch::x86::ArchSyntax::Intel)
                .detail(false)
                .build()
                .expect("Failed to init x86 32-bit Capstone"),
            "arm32" | "arm" => Capstone::new()
                .arm()
                .mode(arch::arm::ArchMode::Arm)
                .detail(false)
                .build()
                .expect("Failed to init ARM32 Capstone"),
            _ => Capstone::new()
                .arm64()
                .mode(arch::arm64::ArchMode::Arm)
                .detail(false)
                .build()
                .expect("Failed to init ARM64 Capstone"),
        };

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
        let mut reg_selectors: BTreeMap<String, String> = BTreeMap::new();
        let mut reg_classrefs: BTreeMap<String, String> = BTreeMap::new();
        let mut current_proc_class: Option<String> = None;

        for (_seg_name, sec_name, start_addr, data) in &code_sections {
            if sec_name == "__text"
                && !func_starts
                    .iter()
                    .any(|&a| a >= *start_addr && a < *start_addr + data.len() as u64)
            {
                func_starts.insert(*start_addr);
            }
            if let Ok(insns) = cs.disasm_all(data, *start_addr) {
                for i in insns.iter() {
                    let addr = i.address();
                    let mnem = i.mnemonic().unwrap_or("nop").to_string();
                    let op_str = i.op_str().unwrap_or("").to_string();
                    let bytes_hex = hex::encode(i.bytes());

                    // Reset per-procedure register state at procedure entry boundaries
                    if func_starts.contains(&addr) || doc.labels.contains_key(&addr) {
                        if let Some(lbl) = doc.labels.get(&addr) {
                            if lbl.starts_with("+[") || lbl.starts_with("-[") {
                                adrp_pages.clear();
                                reg_selectors.clear();
                                reg_classrefs.clear();
                                let inner = &lbl[2..];
                                current_proc_class =
                                    inner.split_whitespace().next().map(|s| s.to_string());
                            } else if func_starts.contains(&addr) {
                                adrp_pages.clear();
                                reg_selectors.clear();
                                reg_classrefs.clear();
                                current_proc_class = None;
                            }
                        }
                    }

                    let m_low = mnem.to_lowercase();
                    let is_ret = m_low == "ret"
                        || m_low == "retq"
                        || m_low == "retaa"
                        || m_low == "retab"
                        || (m_low == "bx" && op_str.trim() == "lr");
                    let is_call = m_low == "bl"
                        || m_low == "blr"
                        || m_low == "blx"
                        || m_low == "call"
                        || m_low == "callq";
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

                    // Track ARM64 ADRP + ADD/LDR and x86_64 RIP-relative resolution for strings, symbols, ObjC selectors & classrefs
                    let mut comment = String::new();
                    let mut string_ref = None;
                    let mut symbol_ref = None;

                    if m_low == "adrp" {
                        let parts: Vec<&str> = op_str.split(',').map(|s| s.trim()).collect();
                        if parts.len() == 2 {
                            let dst_reg = Self::norm_reg_name(parts[0]);
                            if let Some(page) = Self::parse_last_hex_addr(parts[1]) {
                                adrp_pages.insert(dst_reg, page);
                            }
                        }
                    } else if m_low == "add" || m_low == "ldr" || m_low == "mov" || m_low == "lea" {
                        let parts: Vec<&str> = op_str.split(',').map(|s| s.trim()).collect();
                        if parts.len() >= 2 {
                            let dst_reg = Self::norm_reg_name(parts[0]);
                            let src_reg = Self::norm_reg_name(parts[1]);

                            // Propagate ObjC selector/classref across register-to-register moves
                            if m_low == "mov" && parts.len() == 2 && !parts[1].contains('[') {
                                if let Some(sel) = reg_selectors.get(&src_reg).cloned() {
                                    reg_selectors.insert(dst_reg.clone(), sel);
                                }
                                if let Some(cls) = reg_classrefs.get(&src_reg).cloned() {
                                    reg_classrefs.insert(dst_reg.clone(), cls);
                                }
                            }

                            // Resolve target address via ARM64 ADRP page + offset OR x86_64 [rip + disp]
                            let mut resolved_addr: Option<u64> = None;
                            let base_reg = parts[1]
                                .trim_start_matches('[')
                                .trim_end_matches(']')
                                .split(|c: char| c == '+' || c == '-' || c.is_whitespace())
                                .next()
                                .unwrap_or("")
                                .trim()
                                .to_lowercase();

                            if let Some(&page) = adrp_pages.get(&base_reg) {
                                let off = Self::parse_last_hex_addr(&op_str).unwrap_or(0);
                                if off < 0x10000 {
                                    resolved_addr = Some(page + off);
                                }
                            } else if op_str.to_lowercase().contains("rip") {
                                if let Some(disp) = Self::parse_rip_disp(&op_str) {
                                    let next_ip = (addr + i.bytes().len() as u64) as i64;
                                    resolved_addr = Some((next_ip + disp) as u64);
                                }
                            }

                            if let Some(full_addr) = resolved_addr {
                                if let Some(sel_raw) = doc.objc_selector_map.get(&full_addr).cloned() {
                                    let sel_clean = Self::clean_selector_name(&sel_raw);
                                    let sel_annot = format!("@selector({})", sel_clean);
                                    comment = sel_annot.clone();
                                    symbol_ref = Some(sel_annot);
                                    reg_selectors.insert(dst_reg.clone(), sel_clean);
                                    doc.xrefs_to.entry(full_addr).or_default().push(addr);
                                    doc.xrefs_from.entry(addr).or_default().push(full_addr);
                                } else if let Some(cls_raw) =
                                    doc.objc_classref_map.get(&full_addr).cloned()
                                {
                                    let cls_clean = Self::clean_objc_class_name(&cls_raw);
                                    let cls_annot = format!("ClassRef: {}", cls_clean);
                                    comment = cls_annot;
                                    symbol_ref = Some(cls_clean.clone());
                                    reg_classrefs.insert(dst_reg.clone(), cls_clean);
                                    doc.xrefs_to.entry(full_addr).or_default().push(addr);
                                    doc.xrefs_from.entry(addr).or_default().push(full_addr);
                                } else if let Some(lbl) = doc.labels.get(&full_addr).cloned() {
                                    if lbl.starts_with("@selector(") {
                                        let sel_clean = Self::clean_selector_name(&lbl);
                                        comment = format!("@selector({})", sel_clean);
                                        symbol_ref = Some(comment.clone());
                                        reg_selectors.insert(dst_reg.clone(), sel_clean);
                                    } else if lbl.contains("_OBJC_CLASS_$_") {
                                        let cls_clean = Self::clean_objc_class_name(&lbl);
                                        comment = format!("ClassRef: {}", cls_clean);
                                        symbol_ref = Some(cls_clean.clone());
                                        reg_classrefs.insert(dst_reg.clone(), cls_clean);
                                    } else {
                                        comment = lbl.clone();
                                        symbol_ref = Some(lbl);
                                    }
                                    doc.xrefs_to.entry(full_addr).or_default().push(addr);
                                    doc.xrefs_from.entry(addr).or_default().push(full_addr);
                                } else if let Some(s) = doc.strings_table.get(&full_addr).cloned() {
                                    comment = format!("\"{}\"", s);
                                    string_ref = Some(s);
                                    doc.xrefs_to.entry(full_addr).or_default().push(addr);
                                    doc.xrefs_from.entry(addr).or_default().push(full_addr);
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

                    // Auto-annotate bl / call _objc_msgSend with resolved receiver & selector
                    if is_call {
                        let call_target_name = symbol_ref
                            .clone()
                            .or_else(|| {
                                if !comment.is_empty() {
                                    Some(comment.clone())
                                } else {
                                    None
                                }
                            })
                            .unwrap_or_else(|| op_str.clone());

                        let is_msg_send = call_target_name.contains("objc_msgSend");
                        if is_msg_send {
                            // Check if stub encodes selector directly (`_objc_msgSend$selectorName`)
                            let stub_sel = call_target_name
                                .split('$')
                                .nth(1)
                                .map(|s| s.trim().to_string())
                                .filter(|s| !s.is_empty());

                            let sel_opt = stub_sel
                                .or_else(|| reg_selectors.get("x1").cloned())
                                .or_else(|| reg_selectors.get("rsi").cloned())
                                .or_else(|| reg_selectors.values().last().cloned());

                            let receiver = reg_classrefs
                                .get("x0")
                                .or_else(|| reg_classrefs.get("rdi"))
                                .cloned()
                                .or_else(|| current_proc_class.clone())
                                .unwrap_or_else(|| "self".to_string());

                            if let Some(sel) = sel_opt {
                                comment = format!("objc_msgSend -> -[{} {}]", receiver, sel);
                                symbol_ref = Some(format!("-[{} {}]", receiver, sel));
                            }
                        } else if call_target_name.contains("objc_alloc")
                            || call_target_name.contains("objc_opt_new")
                        {
                            if let Some(cls) = reg_classrefs
                                .get("x0")
                                .or_else(|| reg_classrefs.get("rdi"))
                                .cloned()
                            {
                                comment = format!("{} -> -[{} alloc]", call_target_name, cls);
                                reg_classrefs.insert("x0".to_string(), cls.clone());
                                reg_classrefs.insert("rax".to_string(), cls);
                            }
                        }
                    }

                    if is_ret {
                        adrp_pages.clear();
                        reg_selectors.clear();
                        reg_classrefs.clear();
                    }

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
    }

    fn norm_reg_name(raw: &str) -> String {
        let clean = raw
            .trim()
            .trim_start_matches('[')
            .trim_end_matches(']')
            .to_lowercase();
        if let Some(num) = clean.strip_prefix('w') {
            if num.chars().all(|c| c.is_ascii_digit()) {
                return format!("x{}", num);
            }
        }
        clean
    }

    fn parse_rip_disp(op_str: &str) -> Option<i64> {
        let lower = op_str.to_lowercase();
        let rip_pos = lower.find("rip")?;
        let after = &lower[rip_pos + 3..];
        let end_bracket = after.find(']').unwrap_or(after.len());
        let expr = after[..end_bracket].trim();
        if let Some(rest) = expr.strip_prefix('+') {
            let t = rest.trim();
            if let Some(h) = t.strip_prefix("0x") {
                return i64::from_str_radix(h, 16).ok();
            }
            return t.parse::<i64>().ok();
        } else if let Some(rest) = expr.strip_prefix('-') {
            let t = rest.trim();
            if let Some(h) = t.strip_prefix("0x") {
                return i64::from_str_radix(h, 16).ok().map(|v| -v);
            }
            return t.parse::<i64>().ok().map(|v| -v);
        }
        Some(0)
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
                let uncond = m == "b" || m == "jmp" || m == "br" || m == "else";
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
        for token in op_str
            .split(|c: char| c == ',' || c.is_whitespace() || c == '[' || c == ']')
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
        for token in
            op_str.split(|c: char| c == ',' || c.is_whitespace() || c == '[' || c == ']' || c == '!')
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
