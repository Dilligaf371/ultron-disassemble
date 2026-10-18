use crate::neural_and_emu::SymbolDemangler;
use crate::types::{UltronDisassembledFile, UltronInstruction, UltronProcedure};
use std::collections::BTreeMap;

#[derive(Debug, Clone)]
pub struct DecompileOptions {
    pub ssa_form: bool,
    pub rewrite_objc: bool,
    pub inline_strings: bool,
    pub structure_control_flow: bool,
    pub remove_stack_prologue: bool,
}

impl Default for DecompileOptions {
    fn default() -> Self {
        Self {
            ssa_form: false,
            rewrite_objc: true,
            inline_strings: true,
            structure_control_flow: true,
            remove_stack_prologue: true,
        }
    }
}

pub struct UltronDecompiler;

impl UltronDecompiler {
    pub fn decompile(
        doc: &UltronDisassembledFile,
        proc: &UltronProcedure,
        opts: &DecompileOptions,
    ) -> String {
        let mut out = Vec::new();
        let demangled = SymbolDemangler::demangle(&proc.name);
        out.push(format!(
            "// ─── ULTRON RUST SSA DECOMPILER & AST ENGINE // {} ───",
            demangled
        ));
        if proc.stack_frame_size > 0 {
            out.push(format!(
                "// Stack Frame: {} bytes | Basic Blocks: {} | Callers: {}",
                proc.stack_frame_size,
                proc.basic_blocks.len(),
                proc.callers.len()
            ));
        }

        let sig = if proc.name.starts_with("+[") || proc.name.starts_with("-[") {
            format!("id {} {{", proc.name)
        } else {
            format!("int64_t {}(int64_t arg0, int64_t arg1) {{", demangled.trim_end_matches("()"))
        };
        out.push(sig);

        let mut ssa_ver: BTreeMap<String, usize> = BTreeMap::new();
        let mut last_cmp = "cond_flags".to_string();

        for (bb_idx, bb) in proc.basic_blocks.iter().enumerate() {
            if bb_idx > 0 || proc.basic_blocks.len() > 1 {
                out.push(format!("loc_{:x}:", bb.start_address));
            }
            // Insert SSA Phi (φ) nodes at multi-predecessor basic block joins
            if opts.ssa_form && bb.incoming_edges.len() >= 2 {
                let preds: Vec<String> = bb
                    .incoming_edges
                    .iter()
                    .map(|p| format!("loc_{:x}", p))
                    .collect();
                for r in ["r0", "r8", "r19", "r20"] {
                    let v = ssa_ver.entry(r.to_string()).or_insert(0);
                    let prev_v = *v;
                    *v += 1;
                    out.push(format!(
                        "    {}_{} = φ({}_{}, {}); // join from [{}]",
                        r,
                        *v,
                        r,
                        prev_v,
                        r,
                        preds.join(", ")
                    ));
                }
            }

            for ins in &bb.instructions {
                if opts.remove_stack_prologue && Self::is_prologue_or_epilogue(ins) {
                    continue;
                }
                if let Some(stmt) =
                    Self::lift_instruction(doc, ins, opts, &mut ssa_ver, &mut last_cmp)
                {
                    out.push(format!("    {}", stmt));
                }
            }
        }

        out.push("}".to_string());
        out.join("\n")
    }

    fn is_prologue_or_epilogue(ins: &UltronInstruction) -> bool {
        let m = ins.mnemonic.to_lowercase();
        let op = ins.op_str.to_lowercase();
        if (m == "stp" || m == "ldp") && (op.contains("x29, x30") || op.contains("x20, x19")) {
            return true;
        }
        if m == "add" && op.starts_with("x29, sp") {
            return true;
        }
        if (m == "push" || m == "pop") && op.contains("rbp") {
            return true;
        }
        false
    }

    fn map_reg(raw: &str, ssa_form: bool, ssa_ver: &mut BTreeMap<String, usize>, is_def: bool) -> String {
        let t = raw.trim().trim_start_matches('[').trim_end_matches(']').to_lowercase();
        let base = if let Some(n) = t.strip_prefix('x').or_else(|| t.strip_prefix('w')) {
            if n.chars().all(|c| c.is_ascii_digit()) {
                format!("r{}", n)
            } else {
                t
            }
        } else {
            match t.as_str() {
                "rax" | "eax" => "r0".to_string(),
                "rdi" | "edi" => "r0".to_string(),
                "rsi" | "esi" => "r1".to_string(),
                "rdx" | "edx" => "r2".to_string(),
                "rcx" | "ecx" => "r3".to_string(),
                _ => t,
            }
        };
        if !ssa_form || !base.starts_with('r') {
            return base;
        }
        let v = ssa_ver.entry(base.clone()).or_insert(0);
        if is_def {
            *v += 1;
        }
        if *v == 0 {
            base
        } else {
            format!("{}_{}", base, *v)
        }
    }

    fn lift_instruction(
        doc: &UltronDisassembledFile,
        ins: &UltronInstruction,
        opts: &DecompileOptions,
        ssa_ver: &mut BTreeMap<String, usize>,
        last_cmp: &mut String,
    ) -> Option<String> {
        let m = ins.mnemonic.to_lowercase();
        let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();

        if m == "nop" {
            return None;
        }
        if ins.is_return {
            let ret_r = Self::map_reg("x0", opts.ssa_form, ssa_ver, false);
            return Some(format!("return {};", ret_r));
        }

        if m == "mov" || m == "movz" {
            if ops.len() >= 2 {
                let src = if let Some(ref s) = ins.string_ref {
                    if opts.inline_strings {
                        format!("\"{}\"", s)
                    } else {
                        ops[1].trim_start_matches('#').to_string()
                    }
                } else {
                    Self::map_reg(ops[1].trim_start_matches('#'), opts.ssa_form, ssa_ver, false)
                };
                let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                return Some(format!("{} = {};", dst, src));
            }
        }

        if m == "adrp" && ops.len() >= 2 {
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let page = ops[1].trim_start_matches('#');
            return Some(format!("{} = {}; // page base", dst, page));
        }

        if (m == "add" || m == "sub" || m == "eor" || m == "xor" || m == "and" || m == "orr") && ops.len() >= 2 {
            if let Some(ref s) = ins.string_ref {
                if opts.inline_strings {
                    let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                    return Some(format!("{} = \"{}\";", dst, s));
                }
            }
            let src1 = if ops.len() >= 3 {
                Self::map_reg(ops[1], opts.ssa_form, ssa_ver, false)
            } else {
                Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false)
            };
            let src2 = if ops.len() >= 3 {
                ops[2].trim_start_matches('#').to_string()
            } else {
                ops[1].trim_start_matches('#').to_string()
            };
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let sym_op = match m.as_str() {
                "add" => "+",
                "sub" => "-",
                "eor" | "xor" => "^",
                "and" => "&",
                _ => "|",
            };
            return Some(format!("{} = {} {} {};", dst, src1, sym_op, src2));
        }

        if (m == "ldr" || m == "ldrb" || m == "str" || m == "strb") && ops.len() >= 2 {
            let is_load = m.starts_with("ldr");
            let mem_expr = ops[1..].join(", ");
            let base_reg = ops[1].trim_start_matches('[').trim_end_matches(']').trim();
            let base_mapped = Self::map_reg(base_reg, opts.ssa_form, ssa_ver, false);

            // Check C struct field resolution
            let mut resolved_access = format!("*({})", mem_expr);
            if let Some(off_pos) = mem_expr.find('#') {
                let off_s = mem_expr[off_pos + 1..].trim_end_matches(']').trim();
                let parsed_off = if let Some(h) = off_s.strip_prefix("0x") {
                    u64::from_str_radix(h, 16).ok()
                } else {
                    off_s.parse::<u64>().ok()
                };
                if let Some(off_val) = parsed_off {
                    if let Some((st_name, f_name, _f_type)) = doc.resolve_struct_field(off_val) {
                        resolved_access = format!("(({} *){})->{}", st_name, base_mapped, f_name);
                    }
                }
            }

            if is_load {
                let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                let cmt = if !ins.comment.is_empty() {
                    format!(" // {}", ins.comment)
                } else {
                    String::new()
                };
                return Some(format!("{} = {};{}", dst, resolved_access, cmt));
            } else {
                let src = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
                return Some(format!("{} = {};", resolved_access, src));
            }
        }

        if m == "cmp" && ops.len() >= 2 {
            let a = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
            let b = ops[1].trim_start_matches('#');
            *last_cmp = format!("{} == {}", a, b);
            return None;
        }

        if ins.is_call {
            let raw_target = ins
                .symbol_ref
                .clone()
                .unwrap_or_else(|| ins.op_str.trim().to_string());
            let r0_in = Self::map_reg("x0", opts.ssa_form, ssa_ver, false);
            let r1_in = Self::map_reg("x1", opts.ssa_form, ssa_ver, false);
            let r2_in = Self::map_reg("x2", opts.ssa_form, ssa_ver, false);
            let r0_out = Self::map_reg("x0", opts.ssa_form, ssa_ver, true);

            if opts.rewrite_objc && raw_target.contains("objc_msgSend$") {
                let sel = raw_target.split("objc_msgSend$").nth(1).unwrap_or("perform");
                if sel.ends_with(':') {
                    return Some(format!("{} = [{} {}{}];", r0_out, r0_in, sel, r2_in));
                } else {
                    return Some(format!("{} = [{} {}];", r0_out, r0_in, sel));
                }
            }
            if opts.rewrite_objc && raw_target.contains("objc_alloc_init") {
                return Some(format!("{} = [[{} alloc] init];", r0_out, r0_in));
            }
            if raw_target.contains("autoreleasePoolPush") {
                return Some("void *pool_ctx = objc_autoreleasePoolPush(); // @autoreleasepool {".to_string());
            }
            if raw_target.contains("autoreleasePoolPop") {
                return Some(format!("objc_autoreleasePoolPop({}); // }}", r0_in));
            }
            if raw_target.contains("printf") {
                return Some(format!("{} = printf(format={}, {});", r0_out, r0_in, r1_in));
            }
            return Some(format!("{} = {}({}, {});", r0_out, raw_target, r0_in, r1_in));
        }

        if ins.is_branch {
            let target_lbl = ins
                .branch_target
                .map(|t| format!("loc_{:x}", t))
                .unwrap_or_else(|| ins.op_str.clone());
            if !opts.structure_control_flow {
                return Some(format!("goto {}; // raw branch: {} {}", target_lbl, m, ins.op_str));
            }
            if m == "cbz" && ops.len() >= 2 {
                let reg = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
                return Some(format!("if ({} == 0) {{ goto {}; }}", reg, target_lbl));
            }
            if m == "cbnz" && ops.len() >= 2 {
                let reg = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
                return Some(format!("if ({} != 0) {{ goto {}; }}", reg, target_lbl));
            }
            if m == "b" || m == "jmp" {
                return Some(format!("goto {};", target_lbl));
            }
            return Some(format!("if ({}) {{ goto {}; }} // {}", last_cmp, target_lbl, m));
        }

        Some(format!("/* 0x{:x}: {} {} */", ins.address, ins.mnemonic, ins.op_str))
    }
}
