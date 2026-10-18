use crate::neural_and_emu::SymbolDemangler;
use crate::types::{UltronBasicBlock, UltronDisassembledFile, UltronInstruction, UltronProcedure};
use anyhow::{ anyhow, Result };
use serde::{Deserialize, Serialize};
use std::collections::{BTreeMap, BTreeSet};

pub type BinaryDocument = UltronDisassembledFile;

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct DecompileResponse {
    pub procedure_name: String,
    pub entry_point: String,
    pub pseudocode: String,
    pub basic_block_count: usize,
    pub natural_loop_count: usize,
}

pub fn decompile_procedure(doc: &BinaryDocument, proc_addr: u64) -> Result<DecompileResponse> {
    let proc = doc
        .procedures
        .get(&proc_addr)
        .or_else(|| {
            doc.procedures
                .values()
                .find(|p| proc_addr >= p.entry_point && proc_addr < p.end_address)
        })
        .ok_or_else(|| anyhow!("Procedure not found at 0x{:x}", proc_addr))?;

    let opts = DecompileOptions::default();
    let doms = UltronDecompiler::compute_dominators(&proc.basic_blocks);
    let loops = UltronDecompiler::detect_natural_loops(&proc.basic_blocks, &doms);
    let pseudocode = UltronDecompiler::decompile(doc, proc, &opts);

    Ok(DecompileResponse {
        procedure_name: proc.name.clone(),
        entry_point: format!("0x{:x}", proc.entry_point),
        pseudocode,
        basic_block_count: proc.basic_blocks.len(),
        natural_loop_count: loops.len(),
    })
}

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

#[derive(Debug, Clone)]
pub struct NaturalLoop {
    pub header: u64,
    pub latch: u64,
    pub body: BTreeSet<u64>,
    pub is_pre_tested: bool,
    pub exit_target: Option<u64>,
}

#[derive(Debug, Clone)]
enum OpenRegion {
    IfThen {
        merge_addr: u64,
        else_addr: Option<u64>,
    },
    IfElse {
        merge_addr: u64,
    },
    PreTestedLoop {
        header: u64,
        latch: u64,
        exit_target: Option<u64>,
    },
}

#[derive(Debug, Clone)]
pub struct SwitchDispatchInfo {
    pub header_block: u64,
    pub dispatch_reg: String,
    pub is_jump_table: bool,
    pub max_cases: Option<u64>,
    pub default_target: Option<u64>,
    pub case_targets: Vec<(u64, u64)>, // (case_value, target_addr)
}

#[derive(Debug, Clone)]
pub struct StackBufferDecl {
    pub name: String,
    pub offset: u64,
    pub is_fp_relative: bool,
    pub estimated_size: u64,
}

/// Resolves standard C / POSIX / macOS / Objective-C / C++ SDK function signatures.
/// Returns `Some((return_type, &[(param_name, param_type)]))`.
pub fn resolve_sdk_call_signature(
    callee_name: &str,
) -> Option<(&'static str, &'static [(&'static str, &'static str)])> {
    let clean = UltronDecompiler::normalize_callee_name(callee_name);
    match clean.as_str() {
        // Memory allocation & management
        "malloc" => Some(("void*", &[("size", "size_t")])),
        "calloc" => Some(("void*", &[("count", "size_t"), ("size", "size_t")])),
        "realloc" => Some(("void*", &[("ptr", "void*"), ("size", "size_t")])),
        "valloc" => Some(("void*", &[("size", "size_t")])),
        "posix_memalign" => Some((
            "int",
            &[
                ("memptr", "void**"),
                ("alignment", "size_t"),
                ("size", "size_t"),
            ],
        )),
        "free" => Some(("void", &[("ptr", "void*")])),
        // Memory operations
        "memcpy" | "__memcpy_chk" => Some((
            "void*",
            &[("dst", "void*"), ("src", "const void*"), ("n", "size_t")],
        )),
        "memmove" | "__memmove_chk" => Some((
            "void*",
            &[("dst", "void*"), ("src", "const void*"), ("len", "size_t")],
        )),
        "memset" | "__memset_chk" => {
            Some(("void*", &[("b", "void*"), ("c", "int"), ("len", "size_t")]))
        }
        "memcmp" => Some((
            "int",
            &[
                ("s1", "const void*"),
                ("s2", "const void*"),
                ("n", "size_t"),
            ],
        )),
        "memchr" => Some((
            "void*",
            &[("s", "const void*"), ("c", "int"), ("n", "size_t")],
        )),
        "bzero" => Some(("void", &[("s", "void*"), ("n", "size_t")])),
        // String operations
        "strlen" => Some(("size_t", &[("s", "const char*")])),
        "strnlen" => Some(("size_t", &[("s", "const char*"), ("maxlen", "size_t")])),
        "strcmp" => Some(("int", &[("s1", "const char*"), ("s2", "const char*")])),
        "strncmp" => Some((
            "int",
            &[
                ("s1", "const char*"),
                ("s2", "const char*"),
                ("n", "size_t"),
            ],
        )),
        "strcasecmp" => Some(("int", &[("s1", "const char*"), ("s2", "const char*")])),
        "strcpy" | "__strcpy_chk" => {
            Some(("char*", &[("dst", "char*"), ("src", "const char*")]))
        }
        "strncpy" | "__strncpy_chk" => Some((
            "char*",
            &[("dst", "char*"), ("src", "const char*"), ("len", "size_t")],
        )),
        "strcat" | "__strcat_chk" => {
            Some(("char*", &[("s1", "char*"), ("s2", "const char*")]))
        }
        "strdup" => Some(("char*", &[("s1", "const char*")])),
        "strchr" | "strrchr" => Some(("char*", &[("s", "const char*"), ("c", "int")])),
        "strstr" => Some((
            "char*",
            &[("haystack", "const char*"), ("needle", "const char*")],
        )),
        "strtol" | "strtoul" => Some((
            "long",
            &[
                ("str", "const char*"),
                ("endptr", "char**"),
                ("base", "int"),
            ],
        )),
        "atoi" => Some(("int", &[("str", "const char*")])),
        // Formatted I/O & stdio
        "printf" => Some(("int", &[("fmt", "const char*"), ("...", "va_list")])),
        "fprintf" => Some((
            "int",
            &[
                ("stream", "FILE*"),
                ("fmt", "const char*"),
                ("...", "va_list"),
            ],
        )),
        "sprintf" | "__sprintf_chk" => Some((
            "int",
            &[("str", "char*"), ("fmt", "const char*"), ("...", "va_list")],
        )),
        "snprintf" | "__snprintf_chk" => Some((
            "int",
            &[
                ("str", "char*"),
                ("size", "size_t"),
                ("fmt", "const char*"),
                ("...", "va_list"),
            ],
        )),
        "puts" => Some(("int", &[("s", "const char*")])),
        "fputs" => Some(("int", &[("s", "const char*"), ("stream", "FILE*")])),
        "fopen" => Some((
            "FILE*",
            &[("path", "const char*"), ("mode", "const char*")],
        )),
        "fread" => Some((
            "size_t",
            &[
                ("ptr", "void*"),
                ("size", "size_t"),
                ("nitems", "size_t"),
                ("stream", "FILE*"),
            ],
        )),
        "fwrite" => Some((
            "size_t",
            &[
                ("ptr", "const void*"),
                ("size", "size_t"),
                ("nitems", "size_t"),
                ("stream", "FILE*"),
            ],
        )),
        "fclose" => Some(("int", &[("stream", "FILE*")])),
        "fseek" => Some((
            "int",
            &[("stream", "FILE*"), ("offset", "long"), ("whence", "int")],
        )),
        "ftell" => Some(("long", &[("stream", "FILE*")])),
        "fflush" => Some(("int", &[("stream", "FILE*")])),
        // POSIX file descriptors & VM
        "open" => Some((
            "int",
            &[("path", "const char*"), ("oflag", "int"), ("mode", "mode_t")],
        )),
        "read" => Some((
            "ssize_t",
            &[("fd", "int"), ("buf", "void*"), ("nbyte", "size_t")],
        )),
        "write" => Some((
            "ssize_t",
            &[("fd", "int"), ("buf", "const void*"), ("nbyte", "size_t")],
        )),
        "close" => Some(("int", &[("fd", "int")])),
        "lseek" => Some((
            "off_t",
            &[("fd", "int"), ("offset", "off_t"), ("whence", "int")],
        )),
        "stat" | "lstat" => Some(("int", &[("path", "const char*"), ("buf", "struct stat*")])),
        "fstat" => Some(("int", &[("fd", "int"), ("buf", "struct stat*")])),
        "mmap" => Some((
            "void*",
            &[
                ("addr", "void*"),
                ("len", "size_t"),
                ("prot", "int"),
                ("flags", "int"),
            ],
        )),
        "munmap" => Some(("int", &[("addr", "void*"), ("len", "size_t")])),
        "mprotect" => Some((
            "int",
            &[("addr", "void*"), ("len", "size_t"), ("prot", "int")],
        )),
        // Dynamic linker, Darwin & anti-debug / system calls
        "dlopen" => Some(("void*", &[("path", "const char*"), ("mode", "int")])),
        "dlsym" => Some(("void*", &[("handle", "void*"), ("symbol", "const char*")])),
        "dlclose" => Some(("int", &[("handle", "void*")])),
        "sysctl" => Some((
            "int",
            &[
                ("name", "int*"),
                ("namelen", "u_int"),
                ("oldp", "void*"),
                ("oldlenp", "size_t*"),
            ],
        )),
        "sysctlbyname" => Some((
            "int",
            &[
                ("name", "const char*"),
                ("oldp", "void*"),
                ("oldlenp", "size_t*"),
                ("newp", "void*"),
            ],
        )),
        "ptrace" => Some((
            "int",
            &[
                ("request", "int"),
                ("pid", "pid_t"),
                ("addr", "caddr_t"),
                ("data", "int"),
            ],
        )),
        "getenv" => Some(("char*", &[("name", "const char*")])),
        "getpid" => Some(("pid_t", &[])),
        "getppid" => Some(("pid_t", &[])),
        "getuid" => Some(("uid_t", &[])),
        "isatty" => Some(("int", &[("fd", "int")])),
        "sleep" => Some(("unsigned int", &[("seconds", "unsigned int")])),
        "usleep" => Some(("int", &[("useconds", "useconds_t")])),
        "exit" | "_exit" => Some(("void", &[("status", "int")])),
        "abort" | "__stack_chk_fail" => Some(("void", &[])),
        // Objective-C Runtime & Foundation
        "objc_alloc_init" => Some(("id", &[("cls", "Class")])),
        "objc_alloc" => Some(("id", &[("cls", "Class")])),
        "objc_retain" | "objc_retainAutoreleasedReturnValue" | "objc_retainAutorelease" => {
            Some(("id", &[("obj", "id")]))
        }
        "objc_release" => Some(("void", &[("obj", "id")])),
        "objc_autorelease" | "objc_autoreleaseReturnValue" => Some(("id", &[("obj", "id")])),
        "objc_autoreleasePoolPush" => Some(("void*", &[])),
        "objc_autoreleasePoolPop" => Some(("void", &[("pool", "void*")])),
        "objc_storeStrong" => Some(("void", &[("location", "id*"), ("obj", "id")])),
        "objc_enumerationMutation" => Some(("void", &[("obj", "id")])),
        "NSLog" => Some(("void", &[("format", "NSString*"), ("...", "va_list")])),
        "dispatch_async" | "dispatch_sync" => Some((
            "void",
            &[("queue", "dispatch_queue_t"), ("block", "dispatch_block_t")],
        )),
        // C++ operator new / delete
        "_Znwm" | "_Znam" => Some(("void*", &[("size", "size_t")])),
        "_ZdlPv" | "_ZdaPv" => Some(("void", &[("ptr", "void*")])),
        _ => None,
    }
}

pub struct UltronDecompiler;

impl UltronDecompiler {
    pub fn resolve_sdk_call_signature(
        callee_name: &str,
    ) -> Option<(&'static str, &'static [(&'static str, &'static str)])> {
        resolve_sdk_call_signature(callee_name)
    }

    pub fn normalize_callee_name(callee_name: &str) -> String {
        let mut s = callee_name.trim();
        for prefix in [
            "imp___stubs__",
            "sym.imp.",
            "j__",
            "j_",
            "__stubs::",
            "stubs::",
        ] {
            if let Some(rest) = s.strip_prefix(prefix) {
                s = rest;
            }
        }
        if let Some(idx) = s.find("@plt") {
            s = &s[..idx];
        }
        // Preserve C++ mangled `_Z...` and `__stack_chk_fail`, strip single leading Mach-O `_` otherwise
        if s.starts_with("_Z") || s.starts_with("__") {
            s.to_string()
        } else if let Some(rest) = s.strip_prefix('_') {
            rest.to_string()
        } else {
            s.to_string()
        }
    }

    /// Scans basic blocks to synthesize stack frame buffers (`sub xN, x29, #off` or `add xN, sp, #off`)
    pub fn detect_stack_buffers(blocks: &[UltronBasicBlock], frame_size: u64) -> Vec<StackBufferDecl> {
        let mut fp_offsets = BTreeSet::new();
        let mut sp_offsets = BTreeSet::new();

        for bb in blocks {
            for ins in &bb.instructions {
                if Self::is_prologue_or_epilogue(ins) {
                    continue;
                }
                let m = ins.mnemonic.to_lowercase();
                let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();
                if (m == "sub" || m == "add") && ops.len() >= 3 {
                    let base = ops[1].to_lowercase();
                    if let Some(off) = Self::parse_imm_u64(ops[2]) {
                        if off > 0 && off <= 0x4000 {
                            if m == "sub" && (base == "x29" || base == "fp" || base == "rbp") {
                                fp_offsets.insert(off);
                            } else if m == "add" && (base == "sp" || base == "rsp") {
                                sp_offsets.insert(off);
                            }
                        }
                    }
                }
            }
        }

        let mut decls = Vec::new();
        let fp_vec: Vec<u64> = fp_offsets.into_iter().collect();
        for (i, &off) in fp_vec.iter().enumerate() {
            let prev_off = if i > 0 { fp_vec[i - 1] } else { 0 };
            let est_size = off.saturating_sub(prev_off).clamp(8, 256);
            decls.push(StackBufferDecl {
                name: format!("stack_buf_{:x}", off),
                offset: off,
                is_fp_relative: true,
                estimated_size: est_size,
            });
        }

        let sp_vec: Vec<u64> = sp_offsets.into_iter().collect();
        for (i, &off) in sp_vec.iter().enumerate() {
            let next_off = sp_vec
                .get(i + 1)
                .copied()
                .unwrap_or_else(|| frame_size.max(off + 16));
            let est_size = next_off.saturating_sub(off).clamp(8, 256);
            decls.push(StackBufferDecl {
                name: format!("stack_buf_{:x}", off),
                offset: off,
                is_fp_relative: false,
                estimated_size: est_size,
            });
        }
        decls
    }

    /// Detects ARM64 and x86_64 Switch / Jump-Table dispatches (Pattern A: computed jump, Pattern B: comparison cascade)
    pub fn detect_switch_dispatches(
        blocks: &[UltronBasicBlock],
        ssa_form: bool,
    ) -> BTreeMap<u64, SwitchDispatchInfo> {
        let mut switches = BTreeMap::new();
        let mut dummy_ssa = BTreeMap::new();

        // Pattern A: Table-branch / computed jump (`adr` + `ldrb`/`ldrh`/`ldrsw` + `add` + `br xN`, or `jmp rax`)
        for (idx, bb) in blocks.iter().enumerate() {
            if let Some(last_ins) = bb.instructions.last() {
                let m = last_ins.mnemonic.to_lowercase();
                let op = last_ins.op_str.trim().to_lowercase();
                let is_indirect_br = (m == "br" && (op.starts_with('x') || op.starts_with('r')))
                    || (m == "jmp"
                        && matches!(
                            op.as_str(),
                            "rax" | "rcx" | "rdx" | "rbx" | "rsi" | "rdi" | "r8" | "r9" | "r10"
                        ));

                if is_indirect_br {
                    let mut dispatch_reg = Self::map_reg(&op, ssa_form, &mut dummy_ssa, false);
                    let mut max_cases = None;
                    let mut default_target = None;

                    // Check current or preceding basic block for bounds check (`cmp wN, #max` + `b.hi`/`b.hs`/`ja` default_label)
                    let search_start = idx.saturating_sub(1);
                    for check_bb in &blocks[search_start..=idx] {
                        for ins in &check_bb.instructions {
                            let cm = ins.mnemonic.to_lowercase();
                            let cops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();
                            if cm == "cmp" && cops.len() >= 2 {
                                if let Some(imm) = Self::parse_imm_u64(cops[1]) {
                                    dispatch_reg =
                                        Self::map_reg(cops[0], ssa_form, &mut dummy_ssa, false);
                                    max_cases = Some(imm + 1);
                                }
                            }
                            if matches!(
                                cm.as_str(),
                                "b.hi" | "b.hs" | "b.gt" | "b.ge" | "ja" | "jae" | "jg"
                            ) {
                                default_target = ins.branch_target;
                            }
                        }
                    }

                    switches.insert(
                        bb.start_address,
                        SwitchDispatchInfo {
                            header_block: bb.start_address,
                            dispatch_reg,
                            is_jump_table: true,
                            max_cases,
                            default_target,
                            case_targets: Vec::new(),
                        },
                    );
                }
            }
        }

        // Pattern B: Chained comparison cascade (`cmp reg, #imm1` / `b.eq`, `cmp reg, #imm2` / `b.eq`, or `tst`/`ands` + `csel`)
        let mut reg_cases: BTreeMap<String, (u64, Vec<(u64, u64)>, Option<u64>)> = BTreeMap::new();
        for bb in blocks {
            let mut bb_cmp_reg: Option<String> = None;
            let mut bb_cmp_imm: Option<u64> = None;
            for ins in &bb.instructions {
                let m = ins.mnemonic.to_lowercase();
                let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();
                if (m == "cmp" || m == "tst" || m == "ands") && ops.len() >= 2 {
                    let r = Self::map_reg(ops[0], false, &mut dummy_ssa, false);
                    let imm_str = if m == "ands" && ops.len() >= 3 {
                        ops[2]
                    } else {
                        ops[1]
                    };
                    if let Some(imm) = Self::parse_imm_u64(imm_str) {
                        bb_cmp_reg = Some(r);
                        bb_cmp_imm = Some(imm);
                    }
                } else if m == "csel" && ops.len() >= 4 {
                    if let (Some(ref r), Some(imm)) = (&bb_cmp_reg, bb_cmp_imm) {
                        let entry =
                            reg_cases
                                .entry(r.clone())
                                .or_insert((bb.start_address, Vec::new(), None));
                        entry.1.push((imm, ins.address));
                    }
                } else if ins.is_branch {
                    if let (Some(ref r), Some(imm)) = (&bb_cmp_reg, bb_cmp_imm) {
                        if matches!(m.as_str(), "b.eq" | "je" | "jz" | "b.ne" | "jne" | "jnz") {
                            if let Some(target) = ins.branch_target {
                                let entry = reg_cases.entry(r.clone()).or_insert((
                                    bb.start_address,
                                    Vec::new(),
                                    None,
                                ));
                                if !entry.1.iter().any(|(c, _)| *c == imm) {
                                    entry.1.push((imm, target));
                                }
                            }
                        } else if matches!(
                            m.as_str(),
                            "b.gt" | "b.hi" | "b.le" | "b.lt" | "jg" | "ja" | "jl"
                        ) {
                            if let Some( entry) = reg_cases.get_mut(r) {
                                entry.2 = ins.branch_target;
                            }
                        }
                    }
                }
            }
        }

        for (reg, (hdr_addr, cases, def_target)) in reg_cases {
            if cases.len() >= 2 && !switches.contains_key(&hdr_addr) {
                switches.insert(
                    hdr_addr,
                    SwitchDispatchInfo {
                        header_block: hdr_addr,
                        dispatch_reg: reg,
                        is_jump_table: false,
                        max_cases: Some(cases.len() as u64),
                        default_target: def_target,
                        case_targets: cases,
                    },
                );
            }
        }

        switches
    }

    pub fn decompile(
        doc: &UltronDisassembledFile,
        proc: &UltronProcedure,
        opts: &DecompileOptions,
    ) -> String {
        let mut out = Vec::new();
        let demangled = SymbolDemangler::demangle(&proc.name);
        out.push(format!(
            "// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // {} ───",
            demangled
        ));

        // 1. Compute Dominator Tree, Post-Dominator Tree, Natural Loops, Switch Dispatches & Stack Buffers
        let doms = Self::compute_dominators(&proc.basic_blocks);
        let pdoms = Self::compute_post_dominators(&proc.basic_blocks);
        let loops = Self::detect_natural_loops(&proc.basic_blocks, &doms);
        let switch_dispatches = Self::detect_switch_dispatches(&proc.basic_blocks, opts.ssa_form);
        let stack_buffers =
            Self::detect_stack_buffers(&proc.basic_blocks, proc.stack_frame_size);

        if proc.stack_frame_size > 0 || !loops.is_empty() || proc.basic_blocks.len() > 1 {
            out.push(format!(
                "// Stack Frame: {}B | Basic Blocks: {} | Natural Loops: {} | Post-Dom Nodes: {} | Callers: {}",
                proc.stack_frame_size,
                proc.basic_blocks.len(),
                loops.len(),
                pdoms.len(),
                proc.callers.len()
            ));
        }

        // If this procedure belongs to a reconstructed Objective-C class, show its @interface summary
        if proc.name.starts_with("+[") || proc.name.starts_with("-[") {
            let cls_name = proc.name[2..]
                .split_whitespace()
                .next()
                .unwrap_or("")
                .trim();
            if let Some(cls) = doc.objc_classes.iter().find(|c| c.name == cls_name) {
                for line in cls.header_preview.lines() {
                    out.push(format!("// {}", line));
                }
            }
        }

        let sig = if proc.name.starts_with("+[") || proc.name.starts_with("-[") {
            format!("id {} {{", proc.name)
        } else {
            format!(
                "int64_t {}(int64_t arg0, int64_t arg1) {{",
                demangled.trim_end_matches("()")
            )
        };
        out.push(sig);

        // Emit synthesized local stack buffer array declarations at the top of the function
        for buf in &stack_buffers {
            let rel_str = if buf.is_fp_relative {
                format!("fp - 0x{:x}", buf.offset)
            } else {
                format!("sp + 0x{:x}", buf.offset)
            };
            out.push(format!(
                "    uint8_t {}[{}]; // [{}]",
                buf.name, buf.estimated_size, rel_str
            ));
        }

        let mut ssa_ver: BTreeMap<String, usize> = BTreeMap::new();
        let mut last_cmp_lhs = "r0".to_string();
        let mut last_cmp_rhs = "0".to_string();
        let mut const_prop: BTreeMap<String, String> = BTreeMap::new();
        let mut adrp_pages: BTreeMap<String, u64> = BTreeMap::new();
        let mut reg_ints: BTreeMap<String, u64> = BTreeMap::new();

        // Map loop headers and latches for arbitrary nested loop structuring
        let mut header_loops: BTreeMap<u64, Vec<NaturalLoop>> = BTreeMap::new();
        let mut latch_loops: BTreeMap<u64, Vec<NaturalLoop>> = BTreeMap::new();
        if opts.structure_control_flow {
            for lp in &loops {
                header_loops.entry(lp.header).or_default().push(lp.clone());
                latch_loops.entry(lp.latch).or_default().push(lp.clone());
            }
        }

        let mut indent_level: usize = 1;
        let mut open_regions: Vec<OpenRegion> = Vec::new();
        let mut active_loop_depth: usize = 0;

        for (bb_idx, bb) in proc.basic_blocks.iter().enumerate() {
            // Close any structured `if` / `else` regions that merge at `bb.start_address`
            if opts.structure_control_flow {
                let mut idx = open_regions.len();
                while idx > 0 {
                    idx -= 1;
                    match open_regions[idx].clone() {
                        OpenRegion::IfThen {
                            merge_addr,
                            else_addr: Some(e_addr),
                        } if bb.start_address == e_addr => {
                            let close_pad = "    ".repeat(indent_level.saturating_sub(1).max(1));
                            out.push(format!("{}}} else {{", close_pad));
                            open_regions[idx] = OpenRegion::IfElse { merge_addr };
                        }
                        OpenRegion::IfThen {
                            merge_addr,
                            else_addr: None,
                        }
                        | OpenRegion::IfElse { merge_addr }
                            if bb.start_address == merge_addr =>
                        {
                            open_regions.remove(idx);
                            indent_level = indent_level.saturating_sub(1).max(1);
                            let close_pad = "    ".repeat(indent_level);
                            out.push(format!("{}}}", close_pad));
                        }
                        _ => {}
                    }
                }
            }

            let starting_loops = header_loops
                .get(&bb.start_address)
                .cloned()
                .unwrap_or_default();

            let mut pre_tested_header_loop: Option<NaturalLoop> = None;

            if opts.structure_control_flow && !starting_loops.is_empty() {
                for lp in &starting_loops {
                    active_loop_depth += 1;
                    let pad = "    ".repeat(indent_level);
                    if lp.is_pre_tested {
                        out.push(format!(
                            "{}// [NATURAL WHILE-LOOP HEADER @ 0x{:x} (Nesting #{})]",
                            pad, bb.start_address, active_loop_depth
                        ));
                        pre_tested_header_loop = Some(lp.clone());
                    } else {
                        out.push(format!(
                            "{}// [NATURAL LOOP HEADER @ 0x{:x} (Nesting #{})]",
                            pad, bb.start_address, active_loop_depth
                        ));
                        out.push(format!("{}do {{", pad));
                        indent_level += 1;
                    }
                }
            } else if bb_idx > 0 {
                // Only emit label if not hidden inside a structured single-entry region
                let is_structured_target = opts.structure_control_flow
                    && bb.incoming_edges.len() <= 2
                    && !bb.incoming_edges.iter().any(|&p| p >= bb.start_address);
                if !is_structured_target || !opts.structure_control_flow {
                    out.push(format!("loc_{:x}:", bb.start_address));
                } else {
                    let pad = "    ".repeat(indent_level);
                    let ipdom_str = Self::immediate_post_dominator(bb.start_address, &pdoms)
                        .map(|a| format!("0x{:x}", a))
                        .unwrap_or_else(|| "exit".to_string());
                    out.push(format!(
                        "{}// [Block 0x{:x} | PostDom: {}]",
                        pad, bb.start_address, ipdom_str
                    ));
                }
            }

            // Emit Switch / Jump-Table header reconstruction if this basic block begins a switch dispatch
            if let Some(sw) = switch_dispatches.get(&bb.start_address) {
                let pad = "    ".repeat(indent_level);
                if sw.is_jump_table {
                    let def_str = sw
                        .default_target
                        .map(|d| format!("loc_{:x}", d))
                        .unwrap_or_else(|| "default".to_string());
                    let max_str = sw
                        .max_cases
                        .map(|m| format!("{} cases", m))
                        .unwrap_or_else(|| "computed table".to_string());
                    out.push(format!(
                        "{}// [SWITCH DISPATCH DETECTED @ 0x{:x}: Jump-Table on {} ({}, default -> {})]",
                        pad, sw.header_block, sw.dispatch_reg, max_str, def_str
                    ));
                } else {
                    let case_summary: Vec<String> = sw
                        .case_targets
                        .iter()
                        .map(|(val, tgt)| format!("case 0x{:x}: goto loc_{:x};", val, tgt))
                        .collect();
                    out.push(format!(
                        "{}// [SWITCH DISPATCH DETECTED @ 0x{:x}: Multi-Way Cascade on {} ({} cases)]",
                        pad,
                        sw.header_block,
                        sw.dispatch_reg,
                        sw.case_targets.len()
                    ));
                    out.push(format!(
                        "{}switch ({}) {{ {} }}",
                        pad,
                        sw.dispatch_reg,
                        case_summary.join(" ")
                    ));
                }
            }

            // Insert SSA Phi (φ) nodes at multi-predecessor basic block joins
            if opts.ssa_form && bb.incoming_edges.len() >= 2 {
                let pad = "    ".repeat(indent_level);
                let preds: Vec<String> = bb
                    .incoming_edges
                    .iter()
                    .map(|p| format!("loc_{:x}", p))
                    .collect();
                for r in ["r0", "r8", "r9", "r19"] {
                    let v = ssa_ver.entry(r.to_string()).or_insert(0);
                    let prev_v = *v;
                    *v += 1;
                    out.push(format!(
                        "{}{}_{} = φ({}_{}, {}); // join from [{}]",
                        pad,
                        r,
                        *v,
                        r,
                        prev_v,
                        r,
                        preds.join(", ")
                    ));
                }
            }

            let is_latch_block = latch_loops.contains_key(&bb.start_address);
            let ins_len = bb.instructions.len();

            for (i_idx, ins) in bb.instructions.iter().enumerate() {
                if opts.remove_stack_prologue && Self::is_prologue_or_epilogue(ins) {
                    continue;
                }
                let is_last_ins = i_idx + 1 == ins_len;
                let pad = "    ".repeat(indent_level);

                // 1. Handle Pre-Tested `while (cond) {` header branch
                if opts.structure_control_flow && is_last_ins && ins.is_branch {
                    if let Some(ref lp) = pre_tested_header_loop {
                        let raw_cond = Self::format_branch_condition(
                            ins,
                            opts.ssa_form,
                            &mut ssa_ver,
                            &last_cmp_lhs,
                            &last_cmp_rhs,
                        );
                        // If the branch jumps to exit_target, the loop continues while `!raw_cond`
                        let stay_cond = if ins.branch_target == lp.exit_target {
                            Self::invert_condition(&raw_cond)
                        } else {
                            raw_cond
                        };
                        out.push(format!("{}while ({}) {{", pad, stay_cond));
                        indent_level += 1;
                        open_regions.push(OpenRegion::PreTestedLoop {
                            header: lp.header,
                            latch: lp.latch,
                            exit_target: lp.exit_target,
                        });
                        continue;
                    }
                }

                // 2. Handle Latch block closing back-edge for Natural Loops
                if opts.structure_control_flow && is_latch_block && is_last_ins && ins.is_branch {
                    if let Some(lps) = latch_loops.get(&bb.start_address) {
                        let cond_str = Self::format_branch_condition(
                            ins,
                            opts.ssa_form,
                            &mut ssa_ver,
                            &last_cmp_lhs,
                            &last_cmp_rhs,
                        );
                        for lp in lps {
                            indent_level = indent_level.saturating_sub(1).max(1);
                            active_loop_depth = active_loop_depth.saturating_sub(1);
                            let close_pad = "    ".repeat(indent_level);
                            if lp.is_pre_tested {
                                out.push(format!(
                                    "{}}} // end while-loop -> 0x{:x}",
                                    close_pad, lp.header
                                ));
                            } else {
                                out.push(format!(
                                    "{}}} while ({}); // back-edge -> 0x{:x}",
                                    close_pad, cond_str, lp.header
                                ));
                            }
                        }
                        continue;
                    }
                }

                // 3. Handle Structured If / Else regions using Post-Dominator & CFG lookahead
                if opts.structure_control_flow
                    && is_last_ins
                    && ins.is_branch
                    && !Self::is_unconditional_branch(&ins.mnemonic)
                {
                    if let Some(target_addr) = ins.branch_target {
                        if let Some(next_bb) = proc.basic_blocks.get(bb_idx + 1) {
                            // Forward branch jumping over `next_bb`
                            if target_addr > next_bb.start_address {
                                let raw_cond = Self::format_branch_condition(
                                    ins,
                                    opts.ssa_form,
                                    &mut ssa_ver,
                                    &last_cmp_lhs,
                                    &last_cmp_rhs,
                                );
                                let then_cond = Self::invert_condition(&raw_cond);

                                // Check if `next_bb` is a single-block `then` clause that merges at `target_addr`
                                // or jumps over an `else` block at `target_addr`
                                let after_next_addr = proc
                                    .basic_blocks
                                    .get(bb_idx + 2)
                                    .map(|b| b.start_address);
                                let ipdom = Self::immediate_post_dominator(bb.start_address, &pdoms);

                                if after_next_addr == Some(target_addr) || ipdom == Some(target_addr)
                                {
                                    // Check for if/else diamond where `next_bb` ends in unconditional jump to `merge_addr`
                                    let mut else_info: Option<(u64, u64)> = None;
                                    if let Some(last_then_ins) = next_bb.instructions.last() {
                                        if last_then_ins.is_branch
                                            && Self::is_unconditional_branch(&last_then_ins.mnemonic)
                                        {
                                            if let Some(merge_addr) = last_then_ins.branch_target {
                                                if merge_addr > target_addr {
                                                    else_info = Some((target_addr, merge_addr));
                                                }
                                            }
                                        }
                                    }

                                    out.push(format!("{}if ({}) {{", pad, then_cond));
                                    indent_level += 1;
                                    if let Some((e_addr, m_addr)) = else_info {
                                        open_regions.push(OpenRegion::IfThen {
                                            merge_addr: m_addr,
                                            else_addr: Some(e_addr),
                                        });
                                    } else {
                                        open_regions.push(OpenRegion::IfThen {
                                            merge_addr: target_addr,
                                            else_addr: None,
                                        });
                                    }
                                    continue;
                                }
                            }
                        }
                    }
                }

                // Suppress unconditional branch at the end of a `then` block in an `if / else` diamond
                if opts.structure_control_flow
                    && is_last_ins
                    && ins.is_branch
                    && Self::is_unconditional_branch(&ins.mnemonic)
                {
                    if let Some(target_addr) = ins.branch_target {
                        let is_diamond_jump = open_regions.iter().any(|r| match r {
                            OpenRegion::IfThen {
                                merge_addr,
                                else_addr: Some(_),
                            } => *merge_addr == target_addr,
                            _ => false,
                        });
                        if is_diamond_jump {
                            continue;
                        }
                    }
                }

                if let Some(stmt) = Self::lift_instruction(
                    doc,
                    proc,
                    ins,
                    opts,
                    &mut ssa_ver,
                    &mut last_cmp_lhs,
                    &mut last_cmp_rhs,
                    &mut const_prop,
                    &mut adrp_pages,
                    &mut reg_ints,
                ) {
                    out.push(format!("{}{}", pad, stmt));
                }
            }

            // If a latch block ended without a conditional branch (unconditional back-edge or fallthrough)
            if opts.structure_control_flow && is_latch_block {
                let ended_with_branch = bb
                    .instructions
                    .last()
                    .map(|i| i.is_branch)
                    .unwrap_or(false);
                if !ended_with_branch {
                    if let Some(lps) = latch_loops.get(&bb.start_address) {
                        for lp in lps {
                            indent_level = indent_level.saturating_sub(1).max(1);
                            active_loop_depth = active_loop_depth.saturating_sub(1);
                            let close_pad = "    ".repeat(indent_level);
                            if lp.is_pre_tested {
                                out.push(format!(
                                    "{}}} // end while-loop -> 0x{:x}",
                                    close_pad, lp.header
                                ));
                            } else {
                                out.push(format!(
                                    "{}}} while (1); // loop -> 0x{:x}",
                                    close_pad, lp.header
                                ));
                            }
                        }
                    }
                }
            }
        }

        // Close any remaining open structured regions at function exit
        while let Some(region) = open_regions.pop() {
            match region {
                OpenRegion::IfThen { .. } | OpenRegion::IfElse { .. } => {
                    indent_level = indent_level.saturating_sub(1).max(1);
                    let close_pad = "    ".repeat(indent_level);
                    out.push(format!("{}}}", close_pad));
                }
                OpenRegion::PreTestedLoop { .. } => {}
            }
        }

        out.push("}".to_string());
        out.join("\n")
    }

    /// Iterative Dominator Tree Solver: Dom[n] = {n} U (intersect Dom[p] for p in pred(n))
    pub fn compute_dominators(blocks: &[UltronBasicBlock]) -> BTreeMap<u64, BTreeSet<u64>> {
        let mut doms: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
        if blocks.is_empty() {
            return doms;
        }
        let all_nodes: BTreeSet<u64> = blocks.iter().map(|b| b.start_address).collect();
        let entry = blocks[0].start_address;

        for &n in &all_nodes {
            if n == entry {
                let mut s = BTreeSet::new();
                s.insert(entry);
                doms.insert(n, s);
            } else {
                doms.insert(n, all_nodes.clone());
            }
        }

        let mut changed = true;
        while changed {
            changed = false;
            for b in blocks.iter().skip(1) {
                let n = b.start_address;
                let mut new_dom: Option<BTreeSet<u64>> = None;
                for &p in &b.incoming_edges {
                    if let Some(p_dom) = doms.get(&p) {
                        new_dom = Some(match new_dom {
                            None => p_dom.clone(),
                            Some(cur) => cur.intersection(p_dom).copied().collect(),
                        });
                    }
                }
                let mut final_set = new_dom.unwrap_or_default();
                final_set.insert(n);
                if doms.get(&n) != Some(&final_set) {
                    doms.insert(n, final_set);
                    changed = true;
                }
            }
        }
        doms
    }

    /// Iterative Post-Dominator Tree Solver: PostDom[n] = {n} U (intersect PostDom[s] for s in succ(n))
    pub fn compute_post_dominators(blocks: &[UltronBasicBlock]) -> BTreeMap<u64, BTreeSet<u64>> {
        let mut pdoms: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
        if blocks.is_empty() {
            return pdoms;
        }
        let all_nodes: BTreeSet<u64> = blocks.iter().map(|b| b.start_address).collect();

        // Identify exit blocks (blocks with no in-procedure outgoing edges or ending with return)
        let mut exit_nodes = BTreeSet::new();
        for b in blocks {
            let has_in_proc_succ = b.outgoing_edges.iter().any(|e| all_nodes.contains(e));
            let is_ret = b
                .instructions
                .last()
                .map(|i| i.is_return)
                .unwrap_or(false);
            if !has_in_proc_succ || is_ret {
                exit_nodes.insert(b.start_address);
            }
        }
        if exit_nodes.is_empty() {
            if let Some(last) = blocks.last() {
                exit_nodes.insert(last.start_address);
            }
        }

        for &n in &all_nodes {
            if exit_nodes.contains(&n) {
                let mut s = BTreeSet::new();
                s.insert(n);
                pdoms.insert(n, s);
            } else {
                pdoms.insert(n, all_nodes.clone());
            }
        }

        let mut changed = true;
        while changed {
            changed = false;
            for b in blocks.iter().rev() {
                let n = b.start_address;
                if exit_nodes.contains(&n) {
                    continue;
                }
                let mut new_pdom: Option<BTreeSet<u64>> = None;
                for &succ in &b.outgoing_edges {
                    // Ignore back-edges to self/earlier blocks when computing forward merge post-dominators
                    if succ <= n {
                        continue;
                    }
                    if let Some(s_pdom) = pdoms.get(&succ) {
                        new_pdom = Some(match new_pdom {
                            None => s_pdom.clone(),
                            Some(cur) => cur.intersection(s_pdom).copied().collect(),
                        });
                    }
                }
                let mut final_set = new_pdom.unwrap_or_default();
                final_set.insert(n);
                if pdoms.get(&n) != Some(&final_set) {
                    pdoms.insert(n, final_set);
                    changed = true;
                }
            }
        }
        pdoms
    }

    /// Finds the immediate post-dominator (closest merge point) of `node`
    pub fn immediate_post_dominator(
        node: u64,
        pdoms: &BTreeMap<u64, BTreeSet<u64>>,
    ) -> Option<u64> {
        let set = pdoms.get(&node)?;
        let candidates: Vec<u64> = set.iter().copied().filter(|&m| m != node).collect();
        candidates.into_iter().min()
    }

    /// Natural Loop & Nested Loop Detector via Back-Edges (u -> h where h dominates u)
    pub fn detect_natural_loops(
        blocks: &[UltronBasicBlock],
        doms: &BTreeMap<u64, BTreeSet<u64>>,
    ) -> Vec<NaturalLoop> {
        let mut loops = Vec::new();
        let block_map: BTreeMap<u64, &UltronBasicBlock> =
            blocks.iter().map(|b| (b.start_address, b)).collect();

        for b in blocks {
            let u = b.start_address;
            for &h in &b.outgoing_edges {
                let is_back_edge = doms.get(&u).map(|d| d.contains(&h)).unwrap_or(false) || h <= u;
                if is_back_edge && block_map.contains_key(&h) {
                    // Reverse DFS from latch `u` to header `h` to collect natural loop body
                    let mut body = BTreeSet::new();
                    body.insert(h);
                    body.insert(u);
                    let mut stack = vec![u];
                    while let Some(curr) = stack.pop() {
                        if curr == h {
                            continue;
                        }
                        if let Some(curr_bb) = block_map.get(&curr) {
                            for &pred in &curr_bb.incoming_edges {
                                if pred >= h && body.insert(pred) {
                                    stack.push(pred);
                                }
                            }
                        }
                    }

                    // Determine if this natural loop is pre-tested (`while (cond)`) or post-tested (`do { ... } while (cond)`)
                    let mut is_pre_tested = false;
                    let mut exit_target = None;
                    if h != u {
                        if let Some(hdr_bb) = block_map.get(&h) {
                            if let Some(last_ins) = hdr_bb.instructions.last() {
                                if last_ins.is_branch
                                    && !Self::is_unconditional_branch(&last_ins.mnemonic)
                                {
                                    for &succ in &hdr_bb.outgoing_edges {
                                        if !body.contains(&succ) {
                                            is_pre_tested = true;
                                            exit_target = Some(succ);
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }

                    loops.push(NaturalLoop {
                        header: h,
                        latch: u,
                        body,
                        is_pre_tested,
                        exit_target,
                    });
                }
            }
        }
        // Sort outer loops first, inner nested loops second
        loops.sort_by(|a, b| {
            a.header
                .cmp(&b.header)
                .then_with(|| b.body.len().cmp(&a.body.len()))
        });
        loops
    }

    fn is_unconditional_branch(mnemonic: &str) -> bool {
        matches!(mnemonic.to_lowercase().as_str(), "b" | "jmp" | "br")
    }

    fn format_branch_condition(
        ins: &UltronInstruction,
        ssa_form: bool,
        ssa_ver: &mut BTreeMap<String, usize>,
        last_lhs: &str,
        last_rhs: &str,
    ) -> String {
        let m = ins.mnemonic.to_lowercase();
        let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();
        if m == "cbz" && !ops.is_empty() {
            let r = Self::map_reg(ops[0], ssa_form, ssa_ver, false);
            return format!("{} == 0", r);
        }
        if m == "cbnz" && !ops.is_empty() {
            let r = Self::map_reg(ops[0], ssa_form, ssa_ver, false);
            return format!("{} != 0", r);
        }
        if (m == "tbz" || m == "tbnz") && ops.len() >= 2 {
            let r = Self::map_reg(ops[0], ssa_form, ssa_ver, false);
            let bit = ops[1].trim_start_matches('#');
            let cmp = if m == "tbz" { "== 0" } else { "!= 0" };
            return format!("({} & (1 << {})) {}", r, bit, cmp);
        }
        let op_cmp = match m.as_str() {
            "b.eq" | "je" | "jz" => "==",
            "b.ne" | "jne" | "jnz" => "!=",
            "b.lt" | "b.lo" | "b.mi" | "jl" | "jb" => "<",
            "b.le" | "b.ls" | "jle" | "jbe" => "<=",
            "b.gt" | "b.hi" | "jg" | "ja" => ">",
            "b.ge" | "b.hs" | "b.pl" | "jge" | "jae" => ">=",
            _ => "!=",
        };
        format!("{} {} {}", last_lhs, op_cmp, last_rhs)
    }

    fn invert_condition(cond: &str) -> String {
        if let Some((lhs, rhs)) = cond.split_once(" == ") {
            return format!("{} != {}", lhs, rhs);
        }
        if let Some((lhs, rhs)) = cond.split_once(" != ") {
            return format!("{} == {}", lhs, rhs);
        }
        if let Some((lhs, rhs)) = cond.split_once(" < ") {
            return format!("{} >= {}", lhs, rhs);
        }
        if let Some((lhs, rhs)) = cond.split_once(" >= ") {
            return format!("{} < {}", lhs, rhs);
        }
        if let Some((lhs, rhs)) = cond.split_once(" <= ") {
            return format!("{} > {}", lhs, rhs);
        }
        if let Some((lhs, rhs)) = cond.split_once(" > ") {
            return format!("{} <= {}", lhs, rhs);
        }
        format!("!({})", cond)
    }

    fn is_prologue_or_epilogue(ins: &UltronInstruction) -> bool {
        let m = ins.mnemonic.to_lowercase();
        let op = ins.op_str.to_lowercase();
        if (m == "stp" || m == "ldp")
            && (op.contains("x29, x30") || op.contains("x20, x19") || op.contains("x22, x21"))
        {
            return true;
        }
        if m == "add" && op.starts_with("x29, sp") {
            return true;
        }
        if (m == "sub" || m == "add") && op.starts_with("sp, sp, #") {
            return true;
        }
        if (m == "push" || m == "pop") && op.contains("rbp") {
            return true;
        }
        false
    }

    fn map_reg(
        raw: &str,
        ssa_form: bool,
        ssa_ver: &mut BTreeMap<String, usize>,
        is_def: bool,
    ) -> String {
        let t = raw
            .trim()
            .trim_start_matches('[')
            .trim_end_matches(']')
            .to_lowercase();
        let base = if t == "xzr" || t == "wzr" {
            "0".to_string()
        } else if let Some(n) = t.strip_prefix('x').or_else(|| t.strip_prefix('w')) {
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

    fn base_reg_name(reg: &str) -> String {
        reg.split('_').next().unwrap_or(reg).to_string()
    }

    fn parse_imm_u64(raw: &str) -> Option<u64> {
        let clean = raw
            .trim()
            .trim_start_matches('#')
            .trim_end_matches(']')
            .trim();
        let clean = clean.split_whitespace().next().unwrap_or(clean);
        if let Some(h) = clean.strip_prefix("0x").or_else(|| clean.strip_prefix("0X")) {
            u64::from_str_radix(h, 16).ok()
        } else {
            clean.parse::<u64>().ok()
        }
    }

    /// Resolves an address in the binary to a high-level C/Objective-C symbol, CFString, selector, or class reference
    fn resolve_address_symbol(doc: &UltronDisassembledFile, addr: u64) -> Option<String> {
        // 1. Direct C-string table match
        if let Some(s) = doc.strings_table.get(&addr) {
            let escaped = s.replace('\n', "\\n").replace('\r', "\\r");
            return Some(format!("\"{}\"", escaped));
        }

        // 2. Check if `addr` points inside `__cfstring` (32-byte CFConstantString struct)
        if let Some(sec) = doc.get_section_at(addr) {
            if sec.name == "__cfstring" {
                if let Some(cstr_ptr) = doc.read_u64_le(addr + 0x10) {
                    if let Some(s) = doc.read_cstring(cstr_ptr) {
                        let escaped = s.replace('\n', "\\n").replace('\r', "\\r");
                        return Some(format!("@\"{}\"", escaped));
                    }
                }
            }
            if sec.name == "__objc_selrefs" {
                if let Some(sel_ptr) = doc.read_u64_le(addr) {
                    if let Some(s) = doc.read_cstring(sel_ptr) {
                        return Some(format!("@selector({})", s));
                    }
                }
            }
            if sec.name == "__objc_classrefs" || sec.name == "__objc_classlist" {
                if let Some(cls_ptr) = doc.read_u64_le(addr) {
                    let norm = doc.normalize_ptr(cls_ptr);
                    if let Some(cls) = doc.objc_classes.iter().find(|c| c.address == norm) {
                        return Some(cls.name.clone());
                    }
                }
            }
        }

        // 3. Direct Objective-C Class match
        if let Some(cls) = doc.objc_classes.iter().find(|c| c.address == addr) {
            return Some(cls.name.clone());
        }

        // 4. Labels / Exports / Imports
        if let Some(lbl) = doc.labels.get(&addr) {
            if let Some(cls_name) = lbl.strip_prefix("_OBJC_CLASS_$_") {
                return Some(cls_name.to_string());
            }
            return Some(lbl.clone());
        }

        None
    }

    #[allow(clippy::too_many_arguments)]
    fn lift_instruction(
        doc: &UltronDisassembledFile,
        proc: &UltronProcedure,
        ins: &UltronInstruction,
        opts: &DecompileOptions,
        ssa_ver: &mut BTreeMap<String, usize>,
        last_cmp_lhs: &mut String,
        last_cmp_rhs: &mut String,
        const_prop: &mut BTreeMap<String, String>,
        adrp_pages: &mut BTreeMap<String, u64>,
        reg_ints: &mut BTreeMap<String, u64>,
    ) -> Option<String> {
        let m = ins.mnemonic.to_lowercase();
        let ops: Vec<&str> = ins.op_str.split(',').map(|s| s.trim()).collect();

        if m == "nop" || m == "brk" {
            return None;
        }
        if ins.is_return {
            let ret_r = Self::map_reg("x0", opts.ssa_form, ssa_ver, false);
            return Some(format!("return {};", ret_r));
        }

        if m == "adr" && ops.len() >= 2 {
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let dst_base = Self::base_reg_name(&dst);
            let target_str = ops[1].trim_start_matches('#');
            if let Some(addr) = Self::parse_imm_u64(target_str) {
                if let Some(sym) = Self::resolve_address_symbol(doc, addr) {
                    const_prop.insert(dst_base, sym.clone());
                    return Some(format!("{} = {}; // adr 0x{:x}", dst, sym, addr));
                }
            }
            const_prop.insert(dst_base, target_str.to_string());
            return Some(format!("{} = {}; // jump-table / adr base", dst, target_str));
        }

        if m == "mov" || m == "movz" {
            if ops.len() >= 2 {
                let raw_rhs = ops[1].trim_start_matches('#');
                let src = if let Some(ref s) = ins.string_ref {
                    if opts.inline_strings {
                        format!("\"{}\"", s.replace('\n', "\\n"))
                    } else {
                        raw_rhs.to_string()
                    }
                } else {
                    Self::map_reg(raw_rhs, opts.ssa_form, ssa_ver, false)
                };
                let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                let dst_base = Self::base_reg_name(&dst);
                let src_base = Self::base_reg_name(&src);

                if let Some(imm) = Self::parse_imm_u64(raw_rhs) {
                    reg_ints.insert(dst_base.clone(), imm);
                } else if let Some(&v) = reg_ints.get(&src_base) {
                    reg_ints.insert(dst_base.clone(), v);
                } else {
                    reg_ints.remove(&dst_base);
                }
                adrp_pages.remove(&dst_base);

                let propagated = const_prop.get(&src_base).cloned().unwrap_or(src.clone());
                const_prop.insert(dst_base, propagated.clone());
                if propagated.starts_with("&stack_buf_") {
                    return Some(format!("{} = {};", dst, propagated));
                }
                return Some(format!("{} = {};", dst, src));
            }
        }

        if m == "movk" && ops.len() >= 2 {
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let dst_base = Self::base_reg_name(&dst);
            let imm_val = Self::parse_imm_u64(ops[1]).unwrap_or(0);
            let shift = if ops.len() >= 3 {
                ops[2]
                    .split('#')
                    .nth(1)
                    .and_then(|s| s.trim().parse::<u32>().ok())
                    .unwrap_or(0)
            } else {
                0
            };
            let prev = reg_ints.get(&dst_base).copied().unwrap_or(0);
            let combined = (prev & !(0xffffu64 << shift)) | (imm_val << shift);
            reg_ints.insert(dst_base.clone(), combined);
            let hex_s = format!("0x{:x}", combined);
            const_prop.insert(dst_base, hex_s.clone());
            return Some(format!("{} = {}; // movk lsl #{}", dst, hex_s, shift));
        }

        if m == "adrp" && ops.len() >= 2 {
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let dst_base = Self::base_reg_name(&dst);
            let page_str = ops[1].trim_start_matches('#');
            if let Some(page_addr) = Self::parse_imm_u64(page_str) {
                adrp_pages.insert(dst_base.clone(), page_addr);
            }
            const_prop.insert(dst_base, page_str.to_string());
            return None;
        }

        if m == "csel" && ops.len() >= 4 {
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let t_reg = Self::map_reg(ops[1], opts.ssa_form, ssa_ver, false);
            let f_reg = Self::map_reg(ops[2], opts.ssa_form, ssa_ver, false);
            let cond_code = ops[3].to_lowercase();
            let cmp_op = match cond_code.as_str() {
                "eq" => "==",
                "ne" => "!=",
                "lt" | "lo" | "mi" => "<",
                "le" | "ls" => "<=",
                "gt" | "hi" => ">",
                "ge" | "hs" | "pl" => ">=",
                _ => "==",
            };
            return Some(format!(
                "{} = ({} {} {}) ? {} : {};",
                dst, last_cmp_lhs, cmp_op, last_cmp_rhs, t_reg, f_reg
            ));
        }

        if (m == "add"
            || m == "sub"
            || m == "subs"
            || m == "eor"
            || m == "xor"
            || m == "and"
            || m == "ands"
            || m == "orr")
            && ops.len() >= 2
        {
            if let Some(ref s) = ins.string_ref {
                if opts.inline_strings {
                    let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                    let dst_base = Self::base_reg_name(&dst);
                    let lit = format!("\"{}\"", s.replace('\n', "\\n"));
                    const_prop.insert(dst_base.clone(), lit.clone());
                    adrp_pages.remove(&dst_base);
                    return Some(format!("{} = {};", dst, lit));
                }
            }

            // Stack Frame Buffer synthesis for `sub xN, x29, #offset` or `add xN, sp, #offset`
            if ops.len() >= 3 {
                let raw_base = ops[1].trim().to_lowercase();
                if let Some(off) = Self::parse_imm_u64(ops[2]) {
                    if off > 0 && off <= 0x4000 {
                        if m == "sub" && (raw_base == "x29" || raw_base == "fp" || raw_base == "rbp") {
                            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                            let dst_base = Self::base_reg_name(&dst);
                            let buf_ref = format!("&stack_buf_{:x}", off);
                            const_prop.insert(dst_base.clone(), buf_ref.clone());
                            adrp_pages.remove(&dst_base);
                            return Some(format!("{} = {}; // [fp - 0x{:x}]", dst, buf_ref, off));
                        }
                        if m == "add" && (raw_base == "sp" || raw_base == "rsp") {
                            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                            let dst_base = Self::base_reg_name(&dst);
                            let buf_ref = format!("&stack_buf_{:x}", off);
                            const_prop.insert(dst_base.clone(), buf_ref.clone());
                            adrp_pages.remove(&dst_base);
                            return Some(format!("{} = {}; // [sp + 0x{:x}]", dst, buf_ref, off));
                        }
                    }
                }
            }

            let src1 = if ops.len() >= 3 {
                Self::map_reg(ops[1], opts.ssa_form, ssa_ver, false)
            } else {
                Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false)
            };
            let src2_raw = if ops.len() >= 3 {
                ops[2].trim_start_matches('#')
            } else {
                ops[1].trim_start_matches('#')
            };
            let src2 = Self::map_reg(src2_raw, opts.ssa_form, ssa_ver, false);
            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
            let dst_base = Self::base_reg_name(&dst);
            let src1_base = Self::base_reg_name(&src1);

            // Check ADRP + ADD page-offset resolution (strings, CFStrings, ObjC classes, selectors)
            if m == "add" {
                if let Some(&page) = adrp_pages.get(&src1_base) {
                    if let Some(off) = Self::parse_imm_u64(src2_raw) {
                        let full_addr = page + off;
                        adrp_pages.remove(&dst_base);
                        if let Some(sym) = Self::resolve_address_symbol(doc, full_addr) {
                            const_prop.insert(dst_base, sym.clone());
                            return Some(format!("{} = {}; // 0x{:x}", dst, sym, full_addr));
                        } else {
                            let hex_addr = format!("0x{:x}", full_addr);
                            const_prop.insert(dst_base, hex_addr.clone());
                            return Some(format!("{} = {};", dst, hex_addr));
                        }
                    }
                }
            }

            let sym_op = match m.as_str() {
                "add" => "+",
                "sub" | "subs" => "-",
                "eor" | "xor" => "^",
                "and" | "ands" => "&",
                _ => "|",
            };
            if m == "subs" || m == "ands" {
                *last_cmp_lhs = dst.clone();
                *last_cmp_rhs = "0".to_string();
            }

            // Expression Simplification: `x + 0` -> `x`, `r8 = r8 + 1` -> `r8++`, `r9 = r9 - 1` -> `r9--`
            if (m == "add" || m == "sub" || m == "orr" || m == "eor" || m == "xor")
                && (src2 == "0" || src2 == "0x0")
            {
                return Some(format!("{} = {};", dst, src1));
            }
            if !opts.ssa_form && dst == src1 && (src2 == "1" || src2 == "0x1") {
                if m == "add" {
                    return Some(format!("{}++;", dst));
                }
                if m == "sub" || m == "subs" {
                    return Some(format!("{}--;", dst));
                }
            }

            return Some(format!("{} = {} {} {};", dst, src1, sym_op, src2));
        }

        if (m == "ldr"
            || m == "ldrb"
            || m == "ldrh"
            || m == "ldrsw"
            || m == "ldur"
            || m == "str"
            || m == "strb"
            || m == "strh"
            || m == "stur")
            && ops.len() >= 2
        {
            let is_load = m.starts_with("ldr") || m.starts_with("ldur");
            let mem_expr = ops[1..].join(", ");
            let base_reg = ops[1].trim_start_matches('[').trim_end_matches(']').trim();
            let base_mapped = Self::map_reg(base_reg, opts.ssa_form, ssa_ver, false);
            let base_clean = Self::base_reg_name(&base_mapped);

            let parsed_off = if let Some(off_pos) = mem_expr.find('#') {
                let off_s = mem_expr[off_pos + 1..].trim_end_matches(']').trim();
                Self::parse_imm_u64(off_s)
            } else {
                Some(0)
            };

            // Check ADRP + LDR/STR page-offset resolution
            if let Some(&page) = adrp_pages.get(&base_clean) {
                if let Some(off_val) = parsed_off {
                    let full_addr = page + off_val;
                    if let Some(sym) = Self::resolve_address_symbol(doc, full_addr) {
                        if is_load {
                            let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                            let dst_base = Self::base_reg_name(&dst);
                            const_prop.insert(dst_base, sym.clone());
                            return Some(format!("{} = {}; // [0x{:x}]", dst, sym, full_addr));
                        } else {
                            let src = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
                            return Some(format!("{} = {}; // [0x{:x}]", sym, src, full_addr));
                        }
                    }
                }
            }

            let mut resolved_access = format!("*({})", mem_expr);
            if let Some(prop_ptr) = const_prop.get(&base_clean) {
                if let Some(buf_name) = prop_ptr.strip_prefix('&') {
                    if buf_name.starts_with("stack_buf_") {
                        let idx_off = parsed_off.unwrap_or(0);
                        resolved_access = format!("{}[0x{:x}]", buf_name, idx_off);
                    }
                }
            }
            if resolved_access.starts_with("*(") {
                if let Some(off_val) = parsed_off {
                    if off_val > 0 {
                        if let Some((st_name, f_name, _f_type)) = doc.resolve_struct_field(off_val)
                        {
                            resolved_access =
                                format!("(({} *){})->{}", st_name, base_mapped, f_name);
                        } else if proc.name.starts_with("-[") && base_reg == "x0" {
                            resolved_access = format!("self->ivar_0x{:x}", off_val);
                        }
                    }
                }
            }

            if is_load {
                let dst = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, true);
                let dst_base = Self::base_reg_name(&dst);
                if !ins.comment.is_empty() {
                    const_prop.insert(dst_base, ins.comment.clone());
                }
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

        if (m == "cmp" || m == "tst") && ops.len() >= 2 {
            let lhs = Self::map_reg(ops[0], opts.ssa_form, ssa_ver, false);
            let rhs_raw = ops[1].trim_start_matches('#');
            if m == "tst" {
                *last_cmp_lhs = format!("({} & {})", lhs, rhs_raw);
                *last_cmp_rhs = "0".to_string();
            } else {
                *last_cmp_lhs = lhs;
                *last_cmp_rhs = rhs_raw.to_string();
            }
            return None;
        }

        if ins.is_call {
            let raw_target = ins
                .symbol_ref
                .clone()
                .or_else(|| ins.branch_target.and_then(|t| doc.labels.get(&t).cloned()))
                .or_else(|| ins.branch_target.map(|t| format!("sub_{:x}", t)))
                .unwrap_or_else(|| ins.op_str.trim().trim_start_matches('#').to_string());

            let r0_in = Self::map_reg("x0", opts.ssa_form, ssa_ver, false);
            let r1_in = Self::map_reg("x1", opts.ssa_form, ssa_ver, false);
            let r2_in = Self::map_reg("x2", opts.ssa_form, ssa_ver, false);
            let r3_in = Self::map_reg("x3", opts.ssa_form, ssa_ver, false);
            let r0_out = Self::map_reg("x0", opts.ssa_form, ssa_ver, true);

            let arg0_expr = const_prop
                .get("r0")
                .cloned()
                .unwrap_or_else(|| r0_in.clone());
            let arg1_expr = const_prop
                .get("r1")
                .cloned()
                .unwrap_or_else(|| r1_in.clone());
            let arg2_expr = const_prop
                .get("r2")
                .cloned()
                .unwrap_or_else(|| r2_in.clone());
            let arg3_expr = const_prop
                .get("r3")
                .cloned()
                .unwrap_or_else(|| r3_in.clone());

            // Synthesize Objective-C message send for both `objc_msgSend$sel` stubs and standard `_objc_msgSend`
            if opts.rewrite_objc
                && (raw_target.contains("objc_msgSend")
                    || const_prop
                        .get("r1")
                        .map(|s| s.starts_with("@selector("))
                        .unwrap_or(false))
            {
                let sel = if let Some(stub_sel) = raw_target.split("objc_msgSend$").nth(1) {
                    stub_sel.to_string()
                } else if let Some(s) = const_prop.get("r1") {
                    s.trim_start_matches("@selector(")
                        .trim_end_matches(')')
                        .trim_matches('"')
                        .to_string()
                } else {
                    "performSelector".to_string()
                };

                let colon_count = sel.matches(':').count();
                let msg_expr = if colon_count == 0 {
                    format!("[{} {}]", arg0_expr, sel)
                } else if colon_count == 1 {
                    format!("[{} {}{}]", arg0_expr, sel, arg2_expr)
                } else {
                    let parts: Vec<&str> = sel.split(':').filter(|p| !p.is_empty()).collect();
                    let args = [&arg2_expr, &arg3_expr];
                    let mut segs = Vec::new();
                    for (idx, part) in parts.iter().enumerate() {
                        let a = args.get(idx).map(|s| s.as_str()).unwrap_or("...");
                        segs.push(format!("{}:{}", part, a));
                    }
                    format!("[{} {}]", arg0_expr, segs.join(" "))
                };

                const_prop.remove("r0");
                return Some(format!(
                    "{} = {}; // @selector({})",
                    r0_out, msg_expr, sel
                ));
            }
            if opts.rewrite_objc && raw_target.contains("objc_alloc_init") {
                const_prop.remove("r0");
                return Some(format!(
                    "{} = [[{} alloc] init]; // -> id",
                    r0_out, arg0_expr
                ));
            }
            if raw_target.contains("autoreleasePoolPush") {
                return Some(
                    "void *pool_ctx = objc_autoreleasePoolPush(); // -> void* (@autoreleasepool {)"
                        .to_string(),
                );
            }
            if raw_target.contains("autoreleasePoolPop") {
                return Some(format!(
                    "objc_autoreleasePoolPop(/* pool: void* */ {}); // -> void (}})",
                    arg0_expr
                ));
            }

            // Inter-Procedural SDK Type Propagation & Annotated Function Calls
            if let Some((ret_ty, params)) = Self::resolve_sdk_call_signature(&raw_target) {
                let clean_fn = Self::normalize_callee_name(&raw_target);
                let arg_exprs = [&arg0_expr, &arg1_expr, &arg2_expr, &arg3_expr];
                let mut annotated_args = Vec::new();
                for (i, (p_name, p_ty)) in params.iter().enumerate() {
                    let val = arg_exprs.get(i).map(|s| s.as_str()).unwrap_or("...");
                    if *p_name == "..." {
                        annotated_args.push(format!("/* ... */ {}", val));
                    } else {
                        annotated_args.push(format!("/* {}: {} */ {}", p_name, p_ty, val));
                    }
                }
                const_prop.remove("r0");
                if ret_ty == "void" {
                    return Some(format!(
                        "{}({}); // -> void",
                        clean_fn,
                        annotated_args.join(", ")
                    ));
                } else {
                    return Some(format!(
                        "{} = {}({}); // -> {}",
                        r0_out,
                        clean_fn,
                        annotated_args.join(", "),
                        ret_ty
                    ));
                }
            }

            const_prop.remove("r0");
            return Some(format!(
                "{} = {}({}, {});",
                r0_out, raw_target, arg0_expr, arg1_expr
            ));
        }

        if ins.is_branch {
            let op_lower = ins.op_str.trim().to_lowercase();
            // Computed Jump / Switch Table dispatch (`br x8`, `jmp rax`, etc.)
            if (m == "br" && (op_lower.starts_with('x') || op_lower.starts_with('r')))
                || (m == "jmp"
                    && matches!(
                        op_lower.as_str(),
                        "rax" | "rcx" | "rdx" | "rbx" | "rsi" | "rdi" | "r8" | "r9" | "r10"
                    ))
            {
                let target_reg = Self::map_reg(&op_lower, opts.ssa_form, ssa_ver, false);
                return Some(format!(
                    "switch ({}) {{ /* computed jump table via {} */ default: break; }}",
                    last_cmp_lhs, target_reg
                ));
            }

            let target_lbl = ins
                .branch_target
                .map(|t| format!("loc_{:x}", t))
                .unwrap_or_else(|| ins.op_str.clone());
            if !opts.structure_control_flow {
                return Some(format!(
                    "goto {}; // raw branch: {} {}",
                    target_lbl, m, ins.op_str
                ));
            }
            if m == "b" || m == "jmp" {
                if let Some(t) = ins.branch_target {
                    if let Some(lbl) = doc.labels.get(&t) {
                        if lbl.contains("objc_msgSend$") {
                            let sel = lbl.split("objc_msgSend$").nth(1).unwrap_or("perform");
                            let recv = const_prop
                                .get("r0")
                                .cloned()
                                .unwrap_or_else(|| "r0".to_string());
                            let arg2 = const_prop
                                .get("r2")
                                .cloned()
                                .unwrap_or_else(|| "r2".to_string());
                            if sel.ends_with(':') {
                                return Some(format!(
                                    "return [{} {}{}]; // tailcall @selector({})",
                                    recv, sel, arg2, sel
                                ));
                            } else {
                                return Some(format!(
                                    "return [{} {}]; // tailcall @selector({})",
                                    recv, sel, sel
                                ));
                            }
                        }
                    }
                }
                return Some(format!("goto {};", target_lbl));
            }
            let cond = Self::format_branch_condition(
                ins,
                opts.ssa_form,
                ssa_ver,
                last_cmp_lhs,
                last_cmp_rhs,
            );
            return Some(format!("if ({}) {{ goto {}; }}", cond, target_lbl));
        }

        Some(format!(
            "/* 0x{:x}: {} {} */",
            ins.address, ins.mnemonic, ins.op_str
        ))
    }
}

