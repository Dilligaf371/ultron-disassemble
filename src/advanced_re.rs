use crate::types::*;
use serde::{Deserialize, Serialize};
use serde_json::json;
use std::collections::{HashMap, HashSet};
use std::fs;
use std::path::{Path, PathBuf};
use std::time::{SystemTime, UNIX_EPOCH};

pub const PROJECTS_DIR: &str =
    "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/projects";

// ============================================================================
// 1. ULTRON PROJECT FILE & PROJECT MANAGER (.ultron persistence)
// ============================================================================

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct UltronProjectFile {
    pub version: String,
    pub name: String,
    pub binary_path: String,
    pub arch: String,
    pub saved_at: String,
    pub renames: HashMap<u64, String>,
    pub comments: HashMap<u64, String>,
    pub custom_structs: Vec<UltronStructDef>,
    pub breakpoints: Vec<u64>,
}

pub struct UltronProjectManager;

impl UltronProjectManager {
    pub fn save_project(
        doc: &UltronDisassembledFile,
        name: &str,
        breakpoints: &[u64],
    ) -> Result<String, String> {
        save_project(doc, name, breakpoints)
    }

    pub fn load_project(
        doc: &mut UltronDisassembledFile,
        path_or_name: &str,
    ) -> Result<UltronProjectFile, String> {
        load_project(doc, path_or_name)
    }

    pub fn list_projects() -> Vec<serde_json::Value> {
        list_projects()
    }
}

fn format_timestamp_iso() -> String {
    let secs = SystemTime::now()
        .duration_since(UNIX_EPOCH)
        .map(|d| d.as_secs())
        .unwrap_or(0);
    // Calculate UTC calendar date-time from epoch seconds
    let days = secs / 86400;
    let rem = secs % 86400;
    let hours = rem / 3600;
    let minutes = (rem % 3600) / 60;
    let seconds = rem % 60;

    // Civil date from days since 1970-01-01 (Howard Hinnant algorithm)
    let z = days as i64 + 719468;
    let era = if z >= 0 { z } else { z - 146096 } / 146097;
    let doe = (z - era * 146097) as u64;
    let yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
    let y = yoe as i64 + era * 400;
    let doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
    let mp = (5 * doy + 2) / 153;
    let d = doy - (153 * mp + 2) / 5 + 1;
    let m = if mp < 10 { mp + 3 } else { mp - 9 };
    let year = if m <= 2 { y + 1 } else { y };

    format!(
        "{:04}-{:02}-{:02}T{:02}:{:02}:{:02}Z",
        year, m, d, hours, minutes, seconds
    )
}

fn sanitize_project_filename(name: &str) -> String {
    let trimmed = name.trim().trim_end_matches(".ultron");
    let clean: String = trimmed
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '-' || c == '_' || c == '.' {
                c
            } else {
                '_'
            }
        })
        .collect();
    if clean.is_empty() {
        "ultron_project".to_string()
    } else {
        clean
    }
}

pub fn save_project(
    doc: &UltronDisassembledFile,
    name: &str,
    breakpoints: &[u64],
) -> Result<String, String> {
    fs::create_dir_all(PROJECTS_DIR)
        .map_err(|e| format!("Failed to create projects directory: {}", e))?;

    let mut renames: HashMap<u64, String> = HashMap::new();
    for (&addr, label) in &doc.labels {
        renames.insert(addr, label.clone());
    }
    for (&addr, proc_def) in &doc.procedures {
        if !proc_def.name.is_empty() {
            renames.entry(addr).or_insert_with(|| proc_def.name.clone());
        }
    }

    let mut comments: HashMap<u64, String> = HashMap::new();
    for (&addr, comment) in &doc.comments {
        if !comment.is_empty() {
            comments.insert(addr, comment.clone());
        }
    }
    for (&addr, insn) in &doc.instructions {
        if !insn.comment.is_empty() {
            comments
                .entry(addr)
                .or_insert_with(|| insn.comment.clone());
        }
    }

    let custom_structs: Vec<UltronStructDef> = doc.structs.values().cloned().collect();

    let clean_name = sanitize_project_filename(name);
    let project = UltronProjectFile {
        version: "2.3.0".to_string(),
        name: if name.trim().is_empty() {
            clean_name.clone()
        } else {
            name.trim().to_string()
        },
        binary_path: doc.file_path.clone(),
        arch: doc.cpu_subfamily.clone(),
        saved_at: format_timestamp_iso(),
        renames,
        comments,
        custom_structs,
        breakpoints: breakpoints.to_vec(),
    };

    let file_path = Path::new(PROJECTS_DIR).join(format!("{}.ultron", clean_name));
    let serialized = serde_json::to_string_pretty(&project)
        .map_err(|e| format!("Failed to serialize project file: {}", e))?;

    fs::write(&file_path, serialized)
        .map_err(|e| format!("Failed to write project file {:?}: {}", file_path, e))?;

    Ok(file_path.to_string_lossy().to_string())
}

pub fn load_project(
    doc: &mut UltronDisassembledFile,
    path_or_name: &str,
) -> Result<UltronProjectFile, String> {
    let resolved_path: PathBuf = {
        let direct = PathBuf::from(path_or_name);
        if direct.exists() && direct.is_file() {
            direct
        } else {
            let clean = sanitize_project_filename(path_or_name);
            let candidate = Path::new(PROJECTS_DIR).join(format!("{}.ultron", clean));
            if candidate.exists() {
                candidate
            } else {
                let raw_candidate = Path::new(PROJECTS_DIR).join(path_or_name);
                if raw_candidate.exists() {
                    raw_candidate
                } else {
                    return Err(format!(
                        "Project '{}' not found in {}",
                        path_or_name, PROJECTS_DIR
                    ));
                }
            }
        }
    };

    let content = fs::read_to_string(&resolved_path)
        .map_err(|e| format!("Failed to read project file {:?}: {}", resolved_path, e))?;

    let project: UltronProjectFile = serde_json::from_str(&content)
        .map_err(|e| format!("Invalid .ultron project JSON {:?}: {}", resolved_path, e))?;

    // Apply symbol renames
    for (&addr, new_name) in &project.renames {
        doc.set_name_at(addr, new_name.clone());
    }

    // Apply comments to document and instructions
    for (&addr, text) in &project.comments {
        doc.comments.insert(addr, text.clone());
        if let Some(insn) = doc.instructions.get_mut(&addr) {
            insn.comment = text.clone();
        }
        for proc_def in doc.procedures.values_mut() {
            if addr >= proc_def.entry_point && addr <= proc_def.end_address.max(proc_def.entry_point + 256) {
                for bb in &mut proc_def.basic_blocks {
                    for insn in &mut bb.instructions {
                        if insn.address == addr {
                            insn.comment = text.clone();
                        }
                    }
                }
            }
        }
    }

    // Apply custom structs
    for st in &project.custom_structs {
        doc.structs.insert(st.name.clone(), st.clone());
    }

    Ok(project)
}

pub fn list_projects() -> Vec<serde_json::Value> {
    let mut results = Vec::new();
    let dir_path = Path::new(PROJECTS_DIR);
    if !dir_path.exists() {
        let _ = fs::create_dir_all(dir_path);
        return results;
    }

    if let Ok(entries) = fs::read_dir(dir_path) {
        let mut paths: Vec<PathBuf> = entries
            .flatten()
            .map(|e| e.path())
            .filter(|p| p.extension().and_then(|s| s.to_str()) == Some("ultron"))
            .collect();
        paths.sort();

        for path in paths {
            if let Ok(content) = fs::read_to_string(&path) {
                if let Ok(proj) = serde_json::from_str::<UltronProjectFile>(&content) {
                    results.push(json!({
                        "name": proj.name,
                        "file_name": path.file_name().and_then(|s| s.to_str()).unwrap_or(""),
                        "path": path.to_string_lossy().to_string(),
                        "version": proj.version,
                        "binary_path": proj.binary_path,
                        "arch": proj.arch,
                        "saved_at": proj.saved_at,
                        "renames_count": proj.renames.len(),
                        "comments_count": proj.comments.len(),
                        "structs_count": proj.custom_structs.len(),
                        "breakpoints_count": proj.breakpoints.len(),
                        "breakpoints": proj.breakpoints,
                    }));
                }
            }
        }
    }

    results
}

// ============================================================================
// 2. ULTRON FLIRT ENGINE (Static Library Function Signature Matcher)
// ============================================================================

pub struct UltronFlirtEngine;

impl UltronFlirtEngine {
    pub fn scan_and_apply_flirt(doc: &mut UltronDisassembledFile) -> Vec<serde_json::Value> {
        scan_and_apply_flirt(doc)
    }
}

struct FlirtSignatureRule {
    flirt_name: &'static str,
    library: &'static str,
    category: &'static str,
    base_confidence: u32,
    required_mnemonics: &'static [&'static str],
    any_mnemonics: &'static [&'static str],
    operand_tokens: &'static [&'static str],
    min_blocks: usize,
    description: &'static str,
}

const FLIRT_SIGNATURE_DB: &[FlirtSignatureRule] = &[
    // --- Memory & String Routines ---
    FlirtSignatureRule {
        flirt_name: "fast_memcpy_vec",
        library: "libsystem_platform.dylib",
        category: "Memory/SIMD",
        base_confidence: 96,
        required_mnemonics: &["ldp", "stp"],
        any_mnemonics: &["ld1", "st1", "ldr", "str", "subs", "b.hi", "b.ne"],
        operand_tokens: &["q0", "q1", "#16", "#32", "#64"],
        min_blocks: 1,
        description: "Vectorized 128-bit/256-bit block memory copy routine",
    },
    FlirtSignatureRule {
        flirt_name: "byte_memset_loop",
        library: "libsystem_c.dylib",
        category: "Memory/String",
        base_confidence: 93,
        required_mnemonics: &["strb"],
        any_mnemonics: &["subs", "add", "b.ne", "cbz", "dup"],
        operand_tokens: &["#1", "w1", "w2"],
        min_blocks: 2,
        description: "Byte-granularity memset initialization loop",
    },
    FlirtSignatureRule {
        flirt_name: "string_length_scan",
        library: "libsystem_c.dylib",
        category: "Memory/String",
        base_confidence: 94,
        required_mnemonics: &["ldrb"],
        any_mnemonics: &["cbnz", "cbz", "cmp", "sub", "add"],
        operand_tokens: &["#0", "#1"],
        min_blocks: 2,
        description: "Null-terminated C string length scanner (strlen)",
    },
    FlirtSignatureRule {
        flirt_name: "memcmp_constant_time",
        library: "libcorecrypto.dylib",
        category: "Memory/Crypto",
        base_confidence: 95,
        required_mnemonics: &["ldrb", "eor"],
        any_mnemonics: &["orr", "subs", "b.ne", "cset"],
        operand_tokens: &["#1", "w"],
        min_blocks: 2,
        description: "Constant-time byte buffer comparison (timingsafe_bcmp)",
    },
    FlirtSignatureRule {
        flirt_name: "strcpy_bounded_copy",
        library: "libsystem_c.dylib",
        category: "Memory/String",
        base_confidence: 91,
        required_mnemonics: &["ldrb", "strb"],
        any_mnemonics: &["cbz", "cbnz", "subs", "b.eq"],
        operand_tokens: &["#1"],
        min_blocks: 2,
        description: "Bounded null-terminated string copy routine (strlcpy/strncpy)",
    },
    FlirtSignatureRule {
        flirt_name: "bzero_page_clear",
        library: "libsystem_platform.dylib",
        category: "Memory/SIMD",
        base_confidence: 92,
        required_mnemonics: &["stp"],
        any_mnemonics: &["dc", "subs", "b.gt", "b.ne"],
        operand_tokens: &["xzr", "#16", "#32", "#64"],
        min_blocks: 1,
        description: "Zero-register bulk memory clearing routine (bzero)",
    },
    FlirtSignatureRule {
        flirt_name: "strchr_byte_search",
        library: "libsystem_c.dylib",
        category: "Memory/String",
        base_confidence: 90,
        required_mnemonics: &["ldrb", "cmp"],
        any_mnemonics: &["b.eq", "cbz", "csel", "add"],
        operand_tokens: &["#1"],
        min_blocks: 2,
        description: "Single-character scan in C string (strchr)",
    },
    FlirtSignatureRule {
        flirt_name: "memmove_overlap_safe",
        library: "libsystem_platform.dylib",
        category: "Memory/String",
        base_confidence: 91,
        required_mnemonics: &["cmp", "sub"],
        any_mnemonics: &["b.hs", "b.lo", "ldp", "stp", "ldrb", "strb"],
        operand_tokens: &["x0", "x1", "x2"],
        min_blocks: 3,
        description: "Overlap-aware directional memory move (memmove)",
    },

    // --- Crypto, Hashing & Math Kernels ---
    FlirtSignatureRule {
        flirt_name: "crc32_bitwise_update",
        library: "libz.1.dylib",
        category: "Crypto/Hash",
        base_confidence: 98,
        required_mnemonics: &["eor", "lsr"],
        any_mnemonics: &["crc32b", "crc32w", "and", "tst", "csel"],
        operand_tokens: &["0xedb88320", "0x82f63b78", "#1", "#8"],
        min_blocks: 1,
        description: "IEEE 802.3 / Castagnoli CRC-32 polynomial accumulator",
    },
    FlirtSignatureRule {
        flirt_name: "fnv1a_64_hash",
        library: "libultron_crypto.a",
        category: "Crypto/Hash",
        base_confidence: 99,
        required_mnemonics: &["eor", "mul"],
        any_mnemonics: &["mov", "movk", "ldrb", "add", "b.ne"],
        operand_tokens: &["0x1b3", "0xcbf2", "0x9ce4", "0x8422", "1099511628211"],
        min_blocks: 1,
        description: "64-bit Fowler-Noll-Vo (FNV-1a) non-cryptographic hash",
    },
    FlirtSignatureRule {
        flirt_name: "xor_stream_cipher",
        library: "libultron_crypto.a",
        category: "Crypto/Cipher",
        base_confidence: 96,
        required_mnemonics: &["eor"],
        any_mnemonics: &["ldrb", "strb", "ldr", "str", "add", "subs", "b.ne", "xor"],
        operand_tokens: &["0x5a", "0xa5", "0x3c", "0xff", "#1"],
        min_blocks: 2,
        description: "Symmetric XOR keystream buffer encryption/decryption loop",
    },
    FlirtSignatureRule {
        flirt_name: "rotl_mix_cipher",
        library: "libultron_crypto.a",
        category: "Crypto/Cipher",
        base_confidence: 97,
        required_mnemonics: &["eor"],
        any_mnemonics: &["ror", "rol", "lsl", "lsr", "extr", "add", "sub"],
        operand_tokens: &["#7", "#13", "#16", "#12", "#8", "#19", "#25"],
        min_blocks: 1,
        description: "ARX (Add-Rotate-XOR) block mixing cipher round function",
    },
    FlirtSignatureRule {
        flirt_name: "matrix_nested_solver_kernel",
        library: "Accelerate.framework (BLAS)",
        category: "Math/Kernel",
        base_confidence: 95,
        required_mnemonics: &["mul", "add"],
        any_mnemonics: &["madd", "msub", "fmadd", "fadd", "fmul", "cmp", "b.lt", "b.ne"],
        operand_tokens: &["#1", "x", "w"],
        min_blocks: 3,
        description: "Nested loop dense matrix multiplication / linear solver kernel",
    },
    FlirtSignatureRule {
        flirt_name: "sha256_compress_block",
        library: "libcorecrypto.dylib",
        category: "Crypto/Hash",
        base_confidence: 98,
        required_mnemonics: &["ror", "eor", "add"],
        any_mnemonics: &["sha256h", "sha256su0", "sha256su1", "lsr", "and", "bic"],
        operand_tokens: &["#2", "#13", "#22", "#6", "#11", "#25", "0x428a2f98"],
        min_blocks: 1,
        description: "FIPS 180-4 SHA-256 64-round message schedule & compression",
    },
    FlirtSignatureRule {
        flirt_name: "chacha20_quarter_round",
        library: "libcorecrypto.dylib",
        category: "Crypto/Cipher",
        base_confidence: 97,
        required_mnemonics: &["add", "eor"],
        any_mnemonics: &["ror", "lsl", "rev32"],
        operand_tokens: &["#16", "#12", "#8", "#7", "0x61707865", "0x3320646e"],
        min_blocks: 1,
        description: "RFC 8439 ChaCha20 ARX quarter-round state permutation",
    },
    FlirtSignatureRule {
        flirt_name: "aes_subbytes_shiftrows",
        library: "libcorecrypto.dylib",
        category: "Crypto/Cipher",
        base_confidence: 99,
        required_mnemonics: &["aese"],
        any_mnemonics: &["aesmc", "aesd", "aesimc", "eor"],
        operand_tokens: &["v0", "v1", ".16b"],
        min_blocks: 1,
        description: "Hardware ARMv8 Crypto Extension AES round transformation",
    },
    FlirtSignatureRule {
        flirt_name: "siphash24_round",
        library: "libsystem_c.dylib",
        category: "Crypto/Hash",
        base_confidence: 94,
        required_mnemonics: &["add", "eor"],
        any_mnemonics: &["ror", "lsl"],
        operand_tokens: &["#13", "#16", "#32", "#17", "#21", "0x736f6d65"],
        min_blocks: 1,
        description: "SipHash-2-4 pseudorandom keyed hash round function",
    },
    FlirtSignatureRule {
        flirt_name: "base64_encode_block",
        library: "Foundation.framework",
        category: "Encoding",
        base_confidence: 92,
        required_mnemonics: &["lsr", "and"],
        any_mnemonics: &["ubfx", "orr", "ldrb", "strb"],
        operand_tokens: &["#63", "0x3f", "#18", "#12", "#6", "0x3d"],
        min_blocks: 2,
        description: "RFC 4648 Base64 3-to-4 sextet stream encoder",
    },

    // --- Runtime / Allocator / ObjC / C++ / System Helpers ---
    FlirtSignatureRule {
        flirt_name: "objc_retain_release_thunk",
        library: "libobjc.A.dylib",
        category: "ObjC Runtime",
        base_confidence: 97,
        required_mnemonics: &["b"],
        any_mnemonics: &["bl", "adrp", "ldr", "br", "ret"],
        operand_tokens: &["objc_retain", "objc_release", "objc_autorelease", "objc_msgSend"],
        min_blocks: 1,
        description: "Objective-C ARC reference counting tail-call thunk",
    },
    FlirtSignatureRule {
        flirt_name: "stack_canary_check_guard",
        library: "libsystem_c.dylib",
        category: "Security/Runtime",
        base_confidence: 98,
        required_mnemonics: &["ldr", "sub"],
        any_mnemonics: &["eor", "cbnz", "b.ne", "bl"],
        operand_tokens: &["stack_chk_guard", "stack_chk_fail"],
        min_blocks: 2,
        description: "Compiler stack-smashing protector (__stack_chk_guard prologue/epilogue)",
    },
    FlirtSignatureRule {
        flirt_name: "cxx_global_var_init",
        library: "libc++.1.dylib",
        category: "C++ Runtime",
        base_confidence: 95,
        required_mnemonics: &["adrp", "bl"],
        any_mnemonics: &["add", "ldr", "ret"],
        operand_tokens: &["__cxa_atexit", "__dso_handle"],
        min_blocks: 1,
        description: "Itanium C++ ABI static global constructor & __cxa_atexit registration",
    },
    FlirtSignatureRule {
        flirt_name: "pthread_mutex_scoped_lock",
        library: "libsystem_pthread.dylib",
        category: "Concurrency",
        base_confidence: 95,
        required_mnemonics: &["bl"],
        any_mnemonics: &["mov", "add", "ldr", "ldxr", "stxr"],
        operand_tokens: &["pthread_mutex_lock", "pthread_mutex_unlock", "os_unfair_lock"],
        min_blocks: 1,
        description: "POSIX / os_unfair_lock critical section wrapper",
    },
    FlirtSignatureRule {
        flirt_name: "malloc_zone_alloc_helper",
        library: "libsystem_malloc.dylib",
        category: "Allocator",
        base_confidence: 94,
        required_mnemonics: &["bl"],
        any_mnemonics: &["cbz", "mov", "cmp", "b.eq"],
        operand_tokens: &["malloc", "calloc", "realloc", "malloc_zone"],
        min_blocks: 1,
        description: "Heap zone allocation & null-guard wrapper",
    },
    FlirtSignatureRule {
        flirt_name: "swift_bridge_object_retain",
        library: "libswiftCore.dylib",
        category: "Swift Runtime",
        base_confidence: 96,
        required_mnemonics: &["bl"],
        any_mnemonics: &["mov", "ldr", "and", "orr"],
        operand_tokens: &["swift_bridgeObject", "swift_retain", "swift_release", "swift_allocObject"],
        min_blocks: 1,
        description: "Swift runtime ARC bridge object reference manager",
    },
    FlirtSignatureRule {
        flirt_name: "cxx_exception_landing_pad",
        library: "libc++abi.dylib",
        category: "C++ Runtime",
        base_confidence: 97,
        required_mnemonics: &["bl"],
        any_mnemonics: &["mov", "ldr", "b"],
        operand_tokens: &["_Unwind_Resume", "__cxa_begin_catch", "__cxa_end_catch", "__gxx_personality"],
        min_blocks: 1,
        description: "DWARF Zero-Cost Exception Handling unwind landing pad",
    },
    FlirtSignatureRule {
        flirt_name: "dyld_stub_binder_trampoline",
        library: "libdyld.dylib",
        category: "Dynamic Linker",
        base_confidence: 98,
        required_mnemonics: &["adrp", "ldr", "br"],
        any_mnemonics: &["add", "nop"],
        operand_tokens: &["x16", "x17"],
        min_blocks: 1,
        description: "Mach-O lazy/non-lazy symbol pointer stub trampoline",
    },
    FlirtSignatureRule {
        flirt_name: "mach_msg_trap_wrapper",
        library: "libsystem_kernel.dylib",
        category: "XNU Syscall",
        base_confidence: 98,
        required_mnemonics: &["svc"],
        any_mnemonics: &["mov", "movn", "ret", "b.lo"],
        operand_tokens: &["#0x80", "#0x1f", "w16"],
        min_blocks: 1,
        description: "XNU Mach IPC trap / BSD syscall kernel transition stub",
    },
    FlirtSignatureRule {
        flirt_name: "security_audit_command_exec",
        library: "libsystem_c.dylib",
        category: "Process/Exec",
        base_confidence: 94,
        required_mnemonics: &["bl"],
        any_mnemonics: &["adrp", "add", "mov"],
        operand_tokens: &["system", "popen", "execve", "posix_spawn", "dlopen"],
        min_blocks: 1,
        description: "Subprocess command execution / dynamic loader invocation wrapper",
    },
];

pub fn scan_and_apply_flirt(doc: &mut UltronDisassembledFile) -> Vec<serde_json::Value> {
    let mut matches = Vec::new();
    let mut updates: Vec<(u64, String, String, u32, String, bool)> = Vec::new();

    for (&addr, proc_def) in &doc.procedures {
        let old_name = proc_def.name.clone();
        let is_stripped = old_name.starts_with("sub_") || old_name.starts_with("func_");

        let mut mnemonics: Vec<String> = Vec::new();
        let mut all_ops = String::new();
        let mut has_xor_imm = false;
        let mut has_shift_rot = false;
        let mut has_mul_add = false;
        let mut has_byte_load_store = false;
        let mut has_pair_load_store = false;
        let mut call_count = 0usize;
        let mut back_edges = 0usize;

        for bb in &proc_def.basic_blocks {
            for &edge in &bb.outgoing_edges {
                if edge <= bb.start_address {
                    back_edges += 1;
                }
            }
            for insn in &bb.instructions {
                let m = insn.mnemonic.to_lowercase();
                let op = insn.op_str.to_lowercase();
                if m == "eor" || m == "xor" {
                    if op.contains('#') || op.contains("0x") {
                        has_xor_imm = true;
                    }
                }
                if matches!(
                    m.as_str(),
                    "ror" | "rol" | "lsl" | "lsr" | "asr" | "extr" | "shl" | "shr"
                ) {
                    has_shift_rot = true;
                }
                if matches!(m.as_str(), "mul" | "madd" | "msub" | "fmadd" | "imul") {
                    has_mul_add = true;
                }
                if matches!(m.as_str(), "ldrb" | "strb" | "movzbl") {
                    has_byte_load_store = true;
                }
                if matches!(m.as_str(), "ldp" | "stp") {
                    has_pair_load_store = true;
                }
                if insn.is_call {
                    call_count += 1;
                }
                mnemonics.push(m);
                all_ops.push_str(&op);
                all_ops.push(' ');
                if let Some(sym) = &insn.symbol_ref {
                    all_ops.push_str(&sym.to_lowercase());
                    all_ops.push(' ');
                }
                if !insn.comment.is_empty() {
                    all_ops.push_str(&insn.comment.to_lowercase());
                    all_ops.push(' ');
                }
            }
        }

        if mnemonics.is_empty() {
            continue;
        }

        let mnem_set: HashSet<&str> = mnemonics.iter().map(|s| s.as_str()).collect();
        let block_count = proc_def.basic_blocks.len();

        let mut best_match: Option<(&FlirtSignatureRule, u32)> = None;

        // 1. Check direct name / symbol affinity first if unstripped or partially named
        let lower_name = old_name.to_lowercase();
        for rule in FLIRT_SIGNATURE_DB {
            let mut score: i32 = 0;

            if block_count >= rule.min_blocks {
                score += 12;
            } else {
                score -= 10;
            }

            let req_matched = rule
                .required_mnemonics
                .iter()
                .filter(|&&m| mnem_set.contains(m))
                .count();
            if req_matched == rule.required_mnemonics.len() {
                score += 40;
            } else if req_matched > 0 {
                score += 15;
            } else {
                continue;
            }

            let any_matched = rule
                .any_mnemonics
                .iter()
                .filter(|&&m| mnem_set.contains(m))
                .count();
            score += (any_matched as i32 * 8).min(24);

            let tok_matched = rule
                .operand_tokens
                .iter()
                .filter(|&&tok| all_ops.contains(&tok.to_lowercase()))
                .count();
            score += (tok_matched as i32 * 12).min(30);

            // Boost if function name or referenced symbols hint at the rule
            if lower_name.contains("crc") && rule.flirt_name.contains("crc")
                || lower_name.contains("fnv") && rule.flirt_name.contains("fnv")
                || (lower_name.contains("xor") || lower_name.contains("decrypt") || lower_name.contains("cipher"))
                    && rule.flirt_name.contains("xor")
                || (lower_name.contains("matrix") || lower_name.contains("solve"))
                    && rule.flirt_name.contains("matrix")
                || lower_name.contains("memcpy") && rule.flirt_name.contains("memcpy")
                || lower_name.contains("memset") && rule.flirt_name.contains("memset")
                || lower_name.contains("strlen") && rule.flirt_name.contains("string_length")
                || (lower_name.starts_with("-[") || lower_name.starts_with("+["))
                    && rule.flirt_name == "objc_retain_release_thunk"
            {
                score += 25;
            }

            if score >= 58 {
                let confidence = (rule.base_confidence as i32 + (score - 65) / 3)
                    .clamp(74, 99) as u32;
                if best_match.map_or(true, |(_, best_c)| confidence > best_c) {
                    best_match = Some((rule, confidence));
                }
            }
        }

        // 2. Structural heuristic fallback for stripped `sub_...` or recognizable micro-kernels
        if best_match.is_none() {
            if has_xor_imm && back_edges >= 1 {
                best_match = Some((&FLIRT_SIGNATURE_DB[10], 91)); // xor_stream_cipher
            } else if has_mul_add && back_edges >= 2 {
                best_match = Some((&FLIRT_SIGNATURE_DB[12], 89)); // matrix_nested_solver_kernel
            } else if has_shift_rot && mnem_set.contains("eor") {
                best_match = Some((&FLIRT_SIGNATURE_DB[11], 88)); // rotl_mix_cipher
            } else if has_byte_load_store && back_edges >= 1 && mnem_set.contains("strb") {
                best_match = Some((&FLIRT_SIGNATURE_DB[4], 85)); // strcpy_bounded_copy
            } else if has_byte_load_store && back_edges >= 1 {
                best_match = Some((&FLIRT_SIGNATURE_DB[2], 84)); // string_length_scan
            } else if is_stripped && mnemonics.len() <= 4 && (mnem_set.contains("br") || mnem_set.contains("b")) {
                best_match = Some((&FLIRT_SIGNATURE_DB[25], 92)); // dyld_stub_binder_trampoline
            } else if is_stripped && has_pair_load_store && call_count == 0 && mnemonics.len() >= 6 {
                best_match = Some((&FLIRT_SIGNATURE_DB[0], 83)); // fast_memcpy_vec
            } else if is_stripped && call_count >= 1 {
                best_match = Some((&FLIRT_SIGNATURE_DB[18], 78)); // objc_retain_release_thunk
            }
        }

        if let Some((rule, confidence)) = best_match {
            let flirt_sym = if is_stripped {
                format!("flirt_{}_{:x}", rule.flirt_name, addr & 0xffff)
            } else {
                rule.flirt_name.to_string()
            };

            matches.push(json!({
                "address": format!("0x{:x}", addr),
                "address_u64": addr,
                "old_name": old_name,
                "flirt_name": rule.flirt_name,
                "applied_symbol": flirt_sym,
                "confidence": confidence,
                "library": rule.library,
                "category": rule.category,
                "description": rule.description,
                "was_stripped": is_stripped,
            }));

            updates.push((
                addr,
                flirt_sym,
                rule.flirt_name.to_string(),
                confidence,
                rule.library.to_string(),
                is_stripped,
            ));
        }
    }

    for (addr, applied_sym, flirt_name, confidence, library, is_stripped) in updates {
        let note = format!(
            "[FLIRT] {} ({}) — {}% confidence",
            flirt_name, library, confidence
        );
        doc.comments.insert(addr, note.clone());
        if let Some(insn) = doc.instructions.get_mut(&addr) {
            if insn.comment.is_empty() {
                insn.comment = note.clone();
            } else if !insn.comment.contains("[FLIRT]") {
                insn.comment = format!("{} | {}", insn.comment, note);
            }
        }
        if is_stripped {
            doc.set_name_at(addr, applied_sym);
        }
    }

    matches
}

// ============================================================================
// 3. ULTRON BINDIFF ENGINE (Structural Binary Diffing — BinDiff style)
// ============================================================================

pub struct UltronBinDiffEngine;

impl UltronBinDiffEngine {
    pub fn diff_binaries(
        doc_a: &UltronDisassembledFile,
        doc_b: &UltronDisassembledFile,
    ) -> serde_json::Value {
        diff_binaries(doc_a, doc_b)
    }
}

#[derive(Clone, Debug)]
struct ProcFingerprint {
    addr: u64,
    name: String,
    normalized_name: String,
    is_auto_sub: bool,
    mnemonic_hash: u64,
    mnemonics: Vec<String>,
    block_count: usize,
    edge_count: usize,
    insn_count: usize,
    call_count: usize,
    branch_count: usize,
}

fn fnv1a_hash_mnemonics(mnemonics: &[String]) -> u64 {
    let mut hash: u64 = 0xcbf29ce484222325;
    for m in mnemonics {
        for b in m.as_bytes() {
            hash ^= *b as u64;
            hash = hash.wrapping_mul(0x100000001b3);
        }
        hash ^= 0xff;
        hash = hash.wrapping_mul(0x100000001b3);
    }
    hash
}

fn normalize_symbol_for_diff(name: &str) -> String {
    let trimmed = name.trim().trim_start_matches('_');
    trimmed.to_string()
}

fn build_proc_fingerprint(addr: u64, proc_def: &UltronProcedure) -> ProcFingerprint {
    let mut mnemonics = Vec::new();
    let mut edge_count = 0usize;
    let mut call_count = 0usize;
    let mut branch_count = 0usize;

    for bb in &proc_def.basic_blocks {
        edge_count += bb.outgoing_edges.len();
        for insn in &bb.instructions {
            mnemonics.push(insn.mnemonic.to_lowercase());
            if insn.is_call {
                call_count += 1;
            }
            if insn.is_branch {
                branch_count += 1;
            }
        }
    }

    let is_auto_sub = proc_def.name.starts_with("sub_")
        || proc_def.name.starts_with("func_")
        || proc_def.name.starts_with("flirt_");
    let mnemonic_hash = fnv1a_hash_mnemonics(&mnemonics);
    let insn_count = mnemonics.len();

    ProcFingerprint {
        addr,
        name: proc_def.name.clone(),
        normalized_name: normalize_symbol_for_diff(&proc_def.name),
        is_auto_sub,
        mnemonic_hash,
        mnemonics,
        block_count: proc_def.basic_blocks.len().max(1),
        edge_count,
        insn_count,
        call_count,
        branch_count,
    }
}

fn compute_cfg_halstead_similarity(a: &ProcFingerprint, b: &ProcFingerprint) -> f64 {
    if a.mnemonic_hash == b.mnemonic_hash && a.insn_count == b.insn_count {
        return 1.0;
    }

    let rel_dist = |x: usize, y: usize| -> f64 {
        let max_v = x.max(y).max(1) as f64;
        ((x as f64 - y as f64).abs()) / max_v
    };

    let d_blocks = rel_dist(a.block_count, b.block_count);
    let d_edges = rel_dist(a.edge_count, b.edge_count);
    let d_insns = rel_dist(a.insn_count, b.insn_count);
    let d_calls = rel_dist(a.call_count, b.call_count);
    let d_branches = rel_dist(a.branch_count, b.branch_count);

    let cfg_sim = (1.0 - (0.25 * d_blocks + 0.25 * d_edges + 0.30 * d_insns + 0.10 * d_calls + 0.10 * d_branches))
        .clamp(0.0, 1.0);

    // Mnemonic multiset overlap (Halstead operator similarity)
    let mut freq_a: HashMap<&str, usize> = HashMap::new();
    let mut freq_b: HashMap<&str, usize> = HashMap::new();
    for m in &a.mnemonics {
        *freq_a.entry(m.as_str()).or_insert(0) += 1;
    }
    for m in &b.mnemonics {
        *freq_b.entry(m.as_str()).or_insert(0) += 1;
    }

    let mut intersection = 0usize;
    let mut union = 0usize;
    let all_keys: HashSet<&str> = freq_a.keys().chain(freq_b.keys()).copied().collect();
    for k in all_keys {
        let ca = *freq_a.get(k).unwrap_or(&0);
        let cb = *freq_b.get(k).unwrap_or(&0);
        intersection += ca.min(cb);
        union += ca.max(cb);
    }

    let halstead_sim = if union > 0 {
        intersection as f64 / union as f64
    } else {
        1.0
    };

    (0.55 * cfg_sim + 0.45 * halstead_sim).clamp(0.0, 0.99)
}

pub fn diff_binaries(
    doc_a: &UltronDisassembledFile,
    doc_b: &UltronDisassembledFile,
) -> serde_json::Value {
    let fps_a: Vec<ProcFingerprint> = doc_a
        .procedures
        .iter()
        .map(|(&addr, p)| build_proc_fingerprint(addr, p))
        .collect();
    let fps_b: Vec<ProcFingerprint> = doc_b
        .procedures
        .iter()
        .map(|(&addr, p)| build_proc_fingerprint(addr, p))
        .collect();

    let mut matched_a: HashSet<usize> = HashSet::new();
    let mut matched_b: HashSet<usize> = HashSet::new();
    let mut pairs: Vec<(usize, usize, &'static str, f64)> = Vec::new();

    // Phase 1: Exact or demangled symbol name match
    for (ia, fa) in fps_a.iter().enumerate() {
        if fa.is_auto_sub {
            continue;
        }
        if let Some((ib, _)) = fps_b
            .iter()
            .enumerate()
            .find(|(ib, fb)| !matched_b.contains(ib) && !fb.is_auto_sub && fb.normalized_name == fa.normalized_name)
        {
            matched_a.insert(ia);
            matched_b.insert(ib);
            let sim = compute_cfg_halstead_similarity(fa, &fps_b[ib]);
            pairs.push((ia, ib, "SYMBOL_NAME", sim));
        }
    }

    // Phase 2: Normalized instruction mnemonic sequence FNV-1a hash match
    for (ia, fa) in fps_a.iter().enumerate() {
        if matched_a.contains(&ia) || fa.insn_count == 0 {
            continue;
        }
        if let Some((ib, _)) = fps_b.iter().enumerate().find(|(ib, fb)| {
            !matched_b.contains(ib)
                && fb.mnemonic_hash == fa.mnemonic_hash
                && fb.insn_count == fa.insn_count
        }) {
            matched_a.insert(ia);
            matched_b.insert(ib);
            pairs.push((ia, ib, "MNEMONIC_HASH_FNV1A", 1.0));
        }
    }

    // Phase 3: CFG Topological & Halstead similarity match (greedy best-pair >= 0.60)
    let mut candidate_scores: Vec<(usize, usize, f64)> = Vec::new();
    for (ia, fa) in fps_a.iter().enumerate() {
        if matched_a.contains(&ia) {
            continue;
        }
        for (ib, fb) in fps_b.iter().enumerate() {
            if matched_b.contains(&ib) {
                continue;
            }
            let sim = compute_cfg_halstead_similarity(fa, fb);
            if sim >= 0.60 {
                candidate_scores.push((ia, ib, sim));
            }
        }
    }
    candidate_scores.sort_by(|x, y| y.2.partial_cmp(&x.2).unwrap_or(std::cmp::Ordering::Equal));

    for (ia, ib, sim) in candidate_scores {
        if !matched_a.contains(&ia) && !matched_b.contains(&ib) {
            matched_a.insert(ia);
            matched_b.insert(ib);
            pairs.push((ia, ib, "CFG_TOPOLOGY_HALSTEAD", sim));
        }
    }

    let mut identical_count = 0usize;
    let mut modified_count = 0usize;
    let mut added_count = 0usize;
    let mut removed_count = 0usize;
    let mut entries = Vec::new();
    let mut similarity_sum = 0.0f64;

    for (ia, ib, match_phase, sim) in &pairs {
        let fa = &fps_a[*ia];
        let fb = &fps_b[*ib];
        let is_identical = fa.mnemonic_hash == fb.mnemonic_hash && fa.insn_count == fb.insn_count;
        let status = if is_identical {
            identical_count += 1;
            similarity_sum += 1.0;
            "IDENTICAL"
        } else {
            modified_count += 1;
            similarity_sum += *sim;
            "MODIFIED"
        };

        let sim_pct = ((if is_identical { 1.0 } else { *sim }) * 1000.0).round() / 10.0;
        entries.push(json!({
            "status": status,
            "match_phase": match_phase,
            "name_a": fa.name,
            "name_b": fb.name,
            "address_a": format!("0x{:x}", fa.addr),
            "address_b": format!("0x{:x}", fb.addr),
            "similarity": sim_pct,
            "similarity_ratio": if is_identical { 1.0 } else { *sim },
            "blocks_a": fa.block_count,
            "blocks_b": fb.block_count,
            "edges_a": fa.edge_count,
            "edges_b": fb.edge_count,
            "insns_a": fa.insn_count,
            "insns_b": fb.insn_count,
            "hash_a": format!("0x{:016x}", fa.mnemonic_hash),
            "hash_b": format!("0x{:016x}", fb.mnemonic_hash),
        }));
    }

    for (ia, fa) in fps_a.iter().enumerate() {
        if !matched_a.contains(&ia) {
            removed_count += 1;
            entries.push(json!({
                "status": "REMOVED",
                "match_phase": "UNMATCHED_A",
                "name_a": fa.name,
                "name_b": serde_json::Value::Null,
                "address_a": format!("0x{:x}", fa.addr),
                "address_b": serde_json::Value::Null,
                "similarity": 0.0,
                "similarity_ratio": 0.0,
                "blocks_a": fa.block_count,
                "blocks_b": 0,
                "edges_a": fa.edge_count,
                "edges_b": 0,
                "insns_a": fa.insn_count,
                "insns_b": 0,
                "hash_a": format!("0x{:016x}", fa.mnemonic_hash),
                "hash_b": serde_json::Value::Null,
            }));
        }
    }

    for (ib, fb) in fps_b.iter().enumerate() {
        if !matched_b.contains(&ib) {
            added_count += 1;
            entries.push(json!({
                "status": "ADDED",
                "match_phase": "UNMATCHED_B",
                "name_a": serde_json::Value::Null,
                "name_b": fb.name,
                "address_a": serde_json::Value::Null,
                "address_b": format!("0x{:x}", fb.addr),
                "similarity": 0.0,
                "similarity_ratio": 0.0,
                "blocks_a": 0,
                "blocks_b": fb.block_count,
                "edges_a": 0,
                "edges_b": fb.edge_count,
                "insns_a": 0,
                "insns_b": fb.insn_count,
                "hash_a": serde_json::Value::Null,
                "hash_b": format!("0x{:016x}", fb.mnemonic_hash),
            }));
        }
    }

    let total_union = (pairs.len() + removed_count + added_count).max(1);
    let overall_ratio = (similarity_sum / total_union as f64).clamp(0.0, 1.0);
    let overall_pct = (overall_ratio * 1000.0).round() / 10.0;

    json!({
        "file_a": doc_a.file_path,
        "file_b": doc_b.file_path,
        "arch_a": doc_a.cpu_subfamily,
        "arch_b": doc_b.cpu_subfamily,
        "overall_similarity": overall_pct,
        "overall_similarity_ratio": overall_ratio,
        "identical_count": identical_count,
        "modified_count": modified_count,
        "added_count": added_count,
        "removed_count": removed_count,
        "total_procedures_a": fps_a.len(),
        "total_procedures_b": fps_b.len(),
        "entries": entries,
    })
}

// ============================================================================
// 4. ULTRON DYNAMIC DEBUG BRIDGE (Frida & LLDB Script Generator + DWARF/C++ Helper)
// ============================================================================

pub struct UltronDynamicDebugBridge;

impl UltronDynamicDebugBridge {
    pub fn generate_debug_scripts(
        doc: &UltronDisassembledFile,
        addr: u64,
        breakpoints: &[u64],
    ) -> serde_json::Value {
        generate_debug_scripts(doc, addr, breakpoints)
    }
}

fn find_nearest_procedure(doc: &UltronDisassembledFile, addr: u64) -> Option<&UltronProcedure> {
    if let Some(p) = doc.procedures.get(&addr) {
        return Some(p);
    }
    for proc_def in doc.procedures.values() {
        if addr >= proc_def.entry_point && addr < proc_def.end_address.max(proc_def.entry_point + 4) {
            return Some(proc_def);
        }
    }
    doc.procedures
        .range(..=addr)
        .next_back()
        .map(|(_, p)| p)
        .or_else(|| doc.procedures.values().next())
}

fn parse_objc_method_name(name: &str) -> Option<(bool, String, String)> {
    let trimmed = name.trim();
    if (trimmed.starts_with("-[") || trimmed.starts_with("+[")) && trimmed.ends_with(']') {
        let is_class = trimmed.starts_with("+[");
        let inner = &trimmed[2..trimmed.len() - 1];
        if let Some((cls, sel)) = inner.split_once(' ') {
            return Some((is_class, cls.trim().to_string(), sel.trim().to_string()));
        }
    }
    None
}

pub fn generate_debug_scripts(
    doc: &UltronDisassembledFile,
    addr: u64,
    breakpoints: &[u64],
) -> serde_json::Value {
    let proc_opt = find_nearest_procedure(doc, addr);
    let target_addr = proc_opt
        .map(|p| p.entry_point)
        .unwrap_or(if addr != 0 { addr } else { doc.entry_point });
    let proc_name = proc_opt
        .map(|p| p.name.clone())
        .unwrap_or_else(|| doc.get_name_at(target_addr));
    let proc_sig = proc_opt
        .map(|p| p.signature.clone())
        .unwrap_or_else(|| format!("int64_t {}()", proc_name));

    let module_name = Path::new(&doc.file_path)
        .file_name()
        .and_then(|s| s.to_str())
        .unwrap_or("target_binary");

    let image_base: u64 = doc
        .segments
        .iter()
        .filter(|s| s.name == "__TEXT" || s.executable)
        .map(|s| s.start_address)
        .min()
        .unwrap_or(0x100000000);

    let relative_offset = target_addr.saturating_sub(image_base);

    let is_arm64 = doc.cpu_subfamily.contains("arm64") || doc.cpu_subfamily.contains("aarch64");
    let arg_regs = if is_arm64 {
        "x0, x1, x2, x3, x4, x5, x6, x7"
    } else {
        "rdi, rsi, rdx, rcx, r8, r9"
    };

    // Build extra breakpoint hooks for Frida
    let mut all_bps: Vec<u64> = Vec::new();
    all_bps.push(target_addr);
    for &bp in breakpoints {
        if bp != 0 && !all_bps.contains(&bp) {
            all_bps.push(bp);
        }
    }

    let frida_bp_hooks: String = all_bps
        .iter()
        .skip(1)
        .map(|&bp| {
            let bp_off = bp.saturating_sub(image_base);
            let bp_lbl = doc.get_name_at(bp);
            format!(
                r#"
// User Breakpoint @ 0x{:x} ({})
Interceptor.attach(baseAddr.add(ptr("0x{:x}")), {{
    onEnter(args) {{
        console.log("[ULTRON BP] Hit 0x{:x} ({}) | PC=" + this.context.pc + " SP=" + this.context.sp);
    }}
}});"#,
                bp, bp_lbl, bp_off, bp, bp_lbl
            )
        })
        .collect::<Vec<_>>()
        .join("\n");

    let frida_script = if let Some((is_class, cls_name, sel_name)) = parse_objc_method_name(&proc_name) {
        let prefix = if is_class { "+" } else { "-" };
        let arg_count = sel_name.chars().filter(|&c| c == ':').count();
        let mut arg_logs = Vec::new();
        for idx in 0..arg_count {
            arg_logs.push(format!(
                "            console.log('  arg[{}] =', new ObjC.Object(args[{}]).toString());",
                idx,
                idx + 2
            ));
        }
        let arg_log_block = if arg_logs.is_empty() {
            "            // No selector arguments beyond (self, _cmd)".to_string()
        } else {
            arg_logs.join("\n")
        };

        format!(
            r#"/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Objective-C Hook
 * Target Binary : {}
 * Target Method : {}[{} {}] @ 0x{:x} (offset +0x{:x})
 * Architecture  : {}
 */
'use strict';

const MODULE_NAME = "{}";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;

if (ObjC.available && ObjC.classes["{}"]) {{
    const targetClass = ObjC.classes["{}"];
    const methodKey = "{} {}";
    const method = targetClass[methodKey];

    if (method && method.implementation) {{
        console.log("[ULTRON] Hooking ObjC " + methodKey + " @ " + method.implementation);
        Interceptor.attach(method.implementation, {{
            onEnter(args) {{
                const receiver = new ObjC.Object(args[0]);
                const selector = ObjC.selectorAsString(args[1]);
                console.log("\n┌── [ULTRON ObjC ENTER] " + receiver.$className + " " + selector);
{}
                console.log("  Backtrace:\n  " + Thread.backtrace(this.context, Backtracer.ACCURATE)
                    .map(DebugSymbol.fromAddress).join("\n  "));
            }},
            onLeave(retval) {{
                console.log("└── [ULTRON ObjC LEAVE] {}[{} {}] => retval=" + retval);
            }}
        }});
    }}
}} else {{
    // Fallback to raw address hook if ObjC runtime metadata is stripped
    const targetPtr = baseAddr.add(ptr("0x{:x}"));
    Interceptor.attach(targetPtr, {{
        onEnter(args) {{
            console.log("[ULTRON RAW ENTER] {} @ " + targetPtr + " x0=" + args[0] + " x1=" + args[1]);
        }},
        onLeave(retval) {{
            console.log("[ULTRON RAW LEAVE] {} => " + retval);
        }}
    }});
}}
{}
"#,
            doc.file_path,
            prefix,
            cls_name,
            sel_name,
            target_addr,
            relative_offset,
            doc.cpu_family,
            module_name,
            cls_name,
            cls_name,
            prefix,
            sel_name,
            arg_log_block,
            prefix,
            cls_name,
            sel_name,
            relative_offset,
            proc_name,
            proc_name,
            frida_bp_hooks
        )
    } else {
        format!(
            r#"/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : {}
 * Procedure     : {} @ 0x{:x} (offset +0x{:x})
 * Signature     : {}
 * Architecture  : {} (ABI regs: {})
 */
'use strict';

const MODULE_NAME = "{}";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x{:x}");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to {} @ " + targetAddr + " (base=" + baseAddr + " + 0x{:x})");

Interceptor.attach(targetAddr, {{
    onEnter(args) {{
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] {} @ " + targetAddr);
        console.log("│   arg0 = " + args[0] + " | arg1 = " + args[1] + " | arg2 = " + args[2] + " | arg3 = " + args[3]);
        console.log("│   Registers: " + JSON.stringify(this.context));

        try {{
            if (!args[0].isNull() && args[0].compare(ptr("0x10000")) > 0) {{
                console.log("│   Hexdump(arg0, 64):\n" + hexdump(args[0], {{ offset: 0, length: 64, header: true, ansi: false }}));
            }}
        }} catch (_) {{}}

        console.log("│   Backtrace:\n│     " + Thread.backtrace(this.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join("\n│     "));
    }},
    onLeave(retval) {{
        console.log("└── [ULTRON LEAVE] {} => retval = " + retval + " (" + retval.toInt32() + ")");
    }}
}});
{}
"#,
            doc.file_path,
            proc_name,
            target_addr,
            relative_offset,
            proc_sig,
            doc.cpu_family,
            arg_regs,
            module_name,
            relative_offset,
            proc_name,
            relative_offset,
            proc_name,
            proc_name,
            frida_bp_hooks
        )
    };

    let lldb_bp_commands: String = all_bps
        .iter()
        .enumerate()
        .map(|(idx, &bp)| {
            let lbl = doc.get_name_at(bp);
            format!(
                "# Breakpoint #{}: {} @ 0x{:x}\nbreakpoint set -a 0x{:x}\nbreakpoint command add {}\nregister read\nx/8gx $sp\ndisassemble --pc -c 6\nbt 8\nDONE",
                idx + 1,
                lbl,
                bp,
                bp,
                idx + 1
            )
        })
        .collect::<Vec<_>>()
        .join("\n\n");

    let lldb_script = format!(
        r#"# ==============================================================================
# ULTRON DISASSEMBLE v2.3 — Auto-Generated LLDB Debugger & Python Hook Script
# Target Binary : {}
# Target Symbol : {} @ 0x{:x} (offset +0x{:x})
# Architecture  : {}
# ==============================================================================

target create "{}"
settings set target.disable-aslr true

# Python LLDB telemetry callback
script
import lldb

def ultron_bp_callback(frame, bp_loc, internal_dict):
    thread = frame.GetThread()
    process = thread.GetProcess()
    func_name = frame.GetFunctionName() or "{}"
    pc = frame.GetPC()
    sp = frame.GetSP()
    reg_x0 = frame.FindRegister("x0" if "arm64" in "{}" else "rdi")
    val_0 = reg_x0.GetValue() if reg_x0.IsValid() else "N/A"
    print(f"\n[ULTRON LLDB HOOK] Hit {{func_name}} @ 0x{{pc:x}} | SP=0x{{sp:x}} | arg0={{val_0}}")
    return False
quit

{}

# Attach Python hook to primary breakpoint #1
breakpoint command add -F ultron_bp_callback 1

# Useful interactive inspection commands:
#   register read --all
#   memory read -s1 -f x -c 64 $x0
#   image lookup -a 0x{:x} -v
"#,
        doc.file_path,
        proc_name,
        target_addr,
        relative_offset,
        doc.cpu_family,
        doc.file_path,
        proc_name,
        doc.cpu_subfamily,
        lldb_bp_commands,
        target_addr
    );

    json!({
        "target_address": format!("0x{:x}", target_addr),
        "target_address_u64": target_addr,
        "procedure_name": proc_name,
        "signature": proc_sig,
        "module_name": module_name,
        "image_base": format!("0x{:x}", image_base),
        "relative_offset": format!("0x{:x}", relative_offset),
        "arch": doc.cpu_subfamily,
        "calling_convention": if is_arm64 { "AAPCS64 (x0..x7, q0..q7 -> x0)" } else { "System V AMD64 ABI (rdi, rsi, rdx, rcx, r8, r9 -> rax)" },
        "breakpoints_count": all_bps.len(),
        "frida_script": frida_script,
        "lldb_script": lldb_script,
        "one_liner_frida": format!("frida -f \"{}\" -l ultron_hook_{:x}.js --no-pause", doc.file_path, target_addr),
        "one_liner_lldb": format!("lldb -s ultron_debug_{:x}.lldb \"{}\"", target_addr, doc.file_path),
    })
}

// ============================================================================
// 5. ULTRON SDK TYPE LIBRARY (Inter-Procedural C / POSIX / Apple SDK Signatures)
// ============================================================================

pub struct UltronSdkTypeLibrary;

impl UltronSdkTypeLibrary {
    pub fn lookup_sdk_signature(
        func_name: &str,
    ) -> Option<(&'static str, &'static str, &'static [(&'static str, &'static str)])> {
        lookup_sdk_signature(func_name)
    }
}

type SdkParamList = &'static [(&'static str, &'static str)];

struct SdkFuncEntry {
    name: &'static str,
    ret_type: &'static str,
    category: &'static str,
    params: SdkParamList,
}

const SDK_SIGNATURES: &[SdkFuncEntry] = &[
    // --- Heap & Memory Allocation ---
    SdkFuncEntry { name: "malloc", ret_type: "void *", category: "libc::alloc", params: &[("size", "size_t")] },
    SdkFuncEntry { name: "calloc", ret_type: "void *", category: "libc::alloc", params: &[("count", "size_t"), ("size", "size_t")] },
    SdkFuncEntry { name: "realloc", ret_type: "void *", category: "libc::alloc", params: &[("ptr", "void *"), ("new_size", "size_t")] },
    SdkFuncEntry { name: "valloc", ret_type: "void *", category: "libc::alloc", params: &[("size", "size_t")] },
    SdkFuncEntry { name: "posix_memalign", ret_type: "int", category: "libc::alloc", params: &[("memptr", "void **"), ("alignment", "size_t"), ("size", "size_t")] },
    SdkFuncEntry { name: "free", ret_type: "void", category: "libc::alloc", params: &[("ptr", "void *")] },
    SdkFuncEntry { name: "malloc_size", ret_type: "size_t", category: "libsystem_malloc", params: &[("ptr", "const void *")] },

    // --- Memory & String Manipulation ---
    SdkFuncEntry { name: "memcpy", ret_type: "void *", category: "libc::string", params: &[("dst", "void *"), ("src", "const void *"), ("n", "size_t")] },
    SdkFuncEntry { name: "memmove", ret_type: "void *", category: "libc::string", params: &[("dst", "void *"), ("src", "const void *"), ("len", "size_t")] },
    SdkFuncEntry { name: "memset", ret_type: "void *", category: "libc::string", params: &[("b", "void *"), ("c", "int"), ("len", "size_t")] },
    SdkFuncEntry { name: "memcmp", ret_type: "int", category: "libc::string", params: &[("s1", "const void *"), ("s2", "const void *"), ("n", "size_t")] },
    SdkFuncEntry { name: "memchr", ret_type: "void *", category: "libc::string", params: &[("s", "const void *"), ("c", "int"), ("n", "size_t")] },
    SdkFuncEntry { name: "bzero", ret_type: "void", category: "libc::string", params: &[("s", "void *"), ("n", "size_t")] },
    SdkFuncEntry { name: "strcpy", ret_type: "char *", category: "libc::string", params: &[("dst", "char *"), ("src", "const char *")] },
    SdkFuncEntry { name: "strncpy", ret_type: "char *", category: "libc::string", params: &[("dst", "char *"), ("src", "const char *"), ("len", "size_t")] },
    SdkFuncEntry { name: "strlcpy", ret_type: "size_t", category: "libc::string", params: &[("dst", "char *"), ("src", "const char *"), ("dstsize", "size_t")] },
    SdkFuncEntry { name: "strcat", ret_type: "char *", category: "libc::string", params: &[("s1", "char *"), ("s2", "const char *")] },
    SdkFuncEntry { name: "strncat", ret_type: "char *", category: "libc::string", params: &[("s1", "char *"), ("s2", "const char *"), ("n", "size_t")] },
    SdkFuncEntry { name: "strlcat", ret_type: "size_t", category: "libc::string", params: &[("dst", "char *"), ("src", "const char *"), ("dstsize", "size_t")] },
    SdkFuncEntry { name: "strcmp", ret_type: "int", category: "libc::string", params: &[("s1", "const char *"), ("s2", "const char *")] },
    SdkFuncEntry { name: "strncmp", ret_type: "int", category: "libc::string", params: &[("s1", "const char *"), ("s2", "const char *"), ("n", "size_t")] },
    SdkFuncEntry { name: "strcasecmp", ret_type: "int", category: "libc::string", params: &[("s1", "const char *"), ("s2", "const char *")] },
    SdkFuncEntry { name: "strlen", ret_type: "size_t", category: "libc::string", params: &[("s", "const char *")] },
    SdkFuncEntry { name: "strnlen", ret_type: "size_t", category: "libc::string", params: &[("s", "const char *"), ("maxlen", "size_t")] },
    SdkFuncEntry { name: "strchr", ret_type: "char *", category: "libc::string", params: &[("s", "const char *"), ("c", "int")] },
    SdkFuncEntry { name: "strrchr", ret_type: "char *", category: "libc::string", params: &[("s", "const char *"), ("c", "int")] },
    SdkFuncEntry { name: "strstr", ret_type: "char *", category: "libc::string", params: &[("haystack", "const char *"), ("needle", "const char *")] },
    SdkFuncEntry { name: "strdup", ret_type: "char *", category: "libc::string", params: &[("s1", "const char *")] },

    // --- Formatted I/O & Standard Streams ---
    SdkFuncEntry { name: "snprintf", ret_type: "int", category: "libc::stdio", params: &[("str", "char *"), ("size", "size_t"), ("format", "const char *"), ("...", "va_list")] },
    SdkFuncEntry { name: "sprintf", ret_type: "int", category: "libc::stdio", params: &[("str", "char *"), ("format", "const char *"), ("...", "va_list")] },
    SdkFuncEntry { name: "printf", ret_type: "int", category: "libc::stdio", params: &[("format", "const char *"), ("...", "va_list")] },
    SdkFuncEntry { name: "fprintf", ret_type: "int", category: "libc::stdio", params: &[("stream", "FILE *"), ("format", "const char *"), ("...", "va_list")] },
    SdkFuncEntry { name: "vsnprintf", ret_type: "int", category: "libc::stdio", params: &[("str", "char *"), ("size", "size_t"), ("format", "const char *"), ("ap", "va_list")] },
    SdkFuncEntry { name: "sscanf", ret_type: "int", category: "libc::stdio", params: &[("str", "const char *"), ("format", "const char *"), ("...", "va_list")] },
    SdkFuncEntry { name: "puts", ret_type: "int", category: "libc::stdio", params: &[("s", "const char *")] },
    SdkFuncEntry { name: "fputs", ret_type: "int", category: "libc::stdio", params: &[("s", "const char *"), ("stream", "FILE *")] },
    SdkFuncEntry { name: "fgets", ret_type: "char *", category: "libc::stdio", params: &[("str", "char *"), ("size", "int"), ("stream", "FILE *")] },
    SdkFuncEntry { name: "fopen", ret_type: "FILE *", category: "libc::stdio", params: &[("filename", "const char *"), ("mode", "const char *")] },
    SdkFuncEntry { name: "fread", ret_type: "size_t", category: "libc::stdio", params: &[("ptr", "void *"), ("size", "size_t"), ("nitems", "size_t"), ("stream", "FILE *")] },
    SdkFuncEntry { name: "fwrite", ret_type: "size_t", category: "libc::stdio", params: &[("ptr", "const void *"), ("size", "size_t"), ("nitems", "size_t"), ("stream", "FILE *")] },
    SdkFuncEntry { name: "fseek", ret_type: "int", category: "libc::stdio", params: &[("stream", "FILE *"), ("offset", "long"), ("whence", "int")] },
    SdkFuncEntry { name: "ftell", ret_type: "long", category: "libc::stdio", params: &[("stream", "FILE *")] },
    SdkFuncEntry { name: "fclose", ret_type: "int", category: "libc::stdio", params: &[("stream", "FILE *")] },

    // --- POSIX File Descriptors, Virtual Memory & Process Control ---
    SdkFuncEntry { name: "open", ret_type: "int", category: "posix::io", params: &[("path", "const char *"), ("oflag", "int"), ("mode", "mode_t")] },
    SdkFuncEntry { name: "read", ret_type: "ssize_t", category: "posix::io", params: &[("fd", "int"), ("buf", "void *"), ("nbyte", "size_t")] },
    SdkFuncEntry { name: "write", ret_type: "ssize_t", category: "posix::io", params: &[("fd", "int"), ("buf", "const void *"), ("nbyte", "size_t")] },
    SdkFuncEntry { name: "close", ret_type: "int", category: "posix::io", params: &[("fd", "int")] },
    SdkFuncEntry { name: "lseek", ret_type: "off_t", category: "posix::io", params: &[("fd", "int"), ("offset", "off_t"), ("whence", "int")] },
    SdkFuncEntry { name: "stat", ret_type: "int", category: "posix::fs", params: &[("path", "const char *"), ("buf", "struct stat *")] },
    SdkFuncEntry { name: "fstat", ret_type: "int", category: "posix::fs", params: &[("fd", "int"), ("buf", "struct stat *")] },
    SdkFuncEntry { name: "mmap", ret_type: "void *", category: "posix::vm", params: &[("addr", "void *"), ("len", "size_t"), ("prot", "int"), ("flags", "int"), ("fd", "int"), ("offset", "off_t")] },
    SdkFuncEntry { name: "munmap", ret_type: "int", category: "posix::vm", params: &[("addr", "void *"), ("len", "size_t")] },
    SdkFuncEntry { name: "mprotect", ret_type: "int", category: "posix::vm", params: &[("addr", "void *"), ("len", "size_t"), ("prot", "int")] },
    SdkFuncEntry { name: "dlopen", ret_type: "void *", category: "dyld::loader", params: &[("path", "const char *"), ("mode", "int")] },
    SdkFuncEntry { name: "dlsym", ret_type: "void *", category: "dyld::loader", params: &[("handle", "void *"), ("symbol", "const char *")] },
    SdkFuncEntry { name: "dlclose", ret_type: "int", category: "dyld::loader", params: &[("handle", "void *")] },
    SdkFuncEntry { name: "system", ret_type: "int", category: "libc::process", params: &[("command", "const char *")] },
    SdkFuncEntry { name: "getenv", ret_type: "char *", category: "libc::env", params: &[("name", "const char *")] },
    SdkFuncEntry { name: "exit", ret_type: "void", category: "libc::process", params: &[("status", "int")] },
    SdkFuncEntry { name: "abort", ret_type: "void", category: "libc::process", params: &[] },
    SdkFuncEntry { name: "sysctlbyname", ret_type: "int", category: "darwin::kernel", params: &[("name", "const char *"), ("oldp", "void *"), ("oldlenp", "size_t *"), ("newp", "void *"), ("newlen", "size_t")] },
    SdkFuncEntry { name: "ptrace", ret_type: "int", category: "darwin::debug", params: &[("request", "int"), ("pid", "pid_t"), ("addr", "caddr_t"), ("data", "int")] },

    // --- POSIX Threads & GCD ---
    SdkFuncEntry { name: "pthread_create", ret_type: "int", category: "posix::pthread", params: &[("thread", "pthread_t *"), ("attr", "const pthread_attr_t *"), ("start_routine", "void *(*)(void *)"), ("arg", "void *")] },
    SdkFuncEntry { name: "pthread_join", ret_type: "int", category: "posix::pthread", params: &[("thread", "pthread_t"), ("value_ptr", "void **")] },
    SdkFuncEntry { name: "pthread_mutex_lock", ret_type: "int", category: "posix::pthread", params: &[("mutex", "pthread_mutex_t *")] },
    SdkFuncEntry { name: "pthread_mutex_unlock", ret_type: "int", category: "posix::pthread", params: &[("mutex", "pthread_mutex_t *")] },
    SdkFuncEntry { name: "dispatch_async", ret_type: "void", category: "libdispatch", params: &[("queue", "dispatch_queue_t"), ("block", "dispatch_block_t")] },
    SdkFuncEntry { name: "dispatch_sync", ret_type: "void", category: "libdispatch", params: &[("queue", "dispatch_queue_t"), ("block", "dispatch_block_t")] },

    // --- Objective-C Runtime & Foundation ---
    SdkFuncEntry { name: "objc_msgSend", ret_type: "id", category: "objc::runtime", params: &[("self", "id"), ("_cmd", "SEL"), ("...", "id")] },
    SdkFuncEntry { name: "objc_msgSendSuper2", ret_type: "id", category: "objc::runtime", params: &[("super", "struct objc_super *"), ("_cmd", "SEL"), ("...", "id")] },
    SdkFuncEntry { name: "objc_alloc", ret_type: "id", category: "objc::arc", params: &[("cls", "Class")] },
    SdkFuncEntry { name: "objc_alloc_init", ret_type: "id", category: "objc::arc", params: &[("cls", "Class")] },
    SdkFuncEntry { name: "objc_retain", ret_type: "id", category: "objc::arc", params: &[("value", "id")] },
    SdkFuncEntry { name: "objc_release", ret_type: "void", category: "objc::arc", params: &[("value", "id")] },
    SdkFuncEntry { name: "objc_autorelease", ret_type: "id", category: "objc::arc", params: &[("value", "id")] },
    SdkFuncEntry { name: "objc_autoreleaseReturnValue", ret_type: "id", category: "objc::arc", params: &[("value", "id")] },
    SdkFuncEntry { name: "objc_retainAutoreleasedReturnValue", ret_type: "id", category: "objc::arc", params: &[("value", "id")] },
    SdkFuncEntry { name: "objc_storeStrong", ret_type: "void", category: "objc::arc", params: &[("object", "id *"), ("value", "id")] },
    SdkFuncEntry { name: "objc_getClass", ret_type: "Class", category: "objc::runtime", params: &[("name", "const char *")] },
    SdkFuncEntry { name: "sel_registerName", ret_type: "SEL", category: "objc::runtime", params: &[("str", "const char *")] },
    SdkFuncEntry { name: "NSLog", ret_type: "void", category: "Foundation", params: &[("format", "NSString *"), ("...", "id")] },

    // --- C++ ABI / Exception Handling ---
    SdkFuncEntry { name: "_Unwind_Resume", ret_type: "void", category: "cxxabi::unwind", params: &[("exception_object", "struct _Unwind_Exception *")] },
    SdkFuncEntry { name: "__cxa_allocate_exception", ret_type: "void *", category: "cxxabi::eh", params: &[("thrown_size", "size_t")] },
    SdkFuncEntry { name: "__cxa_throw", ret_type: "void", category: "cxxabi::eh", params: &[("thrown_exception", "void *"), ("tinfo", "std::type_info *"), ("dest", "void (*)(void *)")] },
    SdkFuncEntry { name: "__cxa_begin_catch", ret_type: "void *", category: "cxxabi::eh", params: &[("exceptionObject", "void *")] },
    SdkFuncEntry { name: "__cxa_end_catch", ret_type: "void", category: "cxxabi::eh", params: &[] },
    SdkFuncEntry { name: "__cxa_atexit", ret_type: "int", category: "cxxabi::init", params: &[("func", "void (*)(void *)"), ("arg", "void *"), ("dso_handle", "void *")] },
    SdkFuncEntry { name: "__stack_chk_fail", ret_type: "void", category: "libc::security", params: &[] },
    SdkFuncEntry { name: "operator new", ret_type: "void *", category: "cxx::alloc", params: &[("size", "size_t")] },
    SdkFuncEntry { name: "operator delete", ret_type: "void", category: "cxx::alloc", params: &[("ptr", "void *")] },
    SdkFuncEntry { name: "_Znwm", ret_type: "void *", category: "cxx::alloc", params: &[("size", "size_t")] },
    SdkFuncEntry { name: "_ZdlPv", ret_type: "void", category: "cxx::alloc", params: &[("ptr", "void *")] },
];

pub fn lookup_sdk_signature(
    func_name: &str,
) -> Option<(&'static str, &'static str, &'static [(&'static str, &'static str)])> {
    let mut clean = func_name.trim();
    for prefix in &["sym.imp.", "imp.", "stub.", "j_", "_"] {
        if clean.starts_with(prefix) && !clean.starts_with("__cxa_") && !clean.starts_with("__stack_") && clean != "_Unwind_Resume" && clean != "_Znwm" && clean != "_ZdlPv" {
            clean = &clean[prefix.len()..];
        }
    }
    if clean.starts_with("___cxa_") || clean.starts_with("___stack_") {
        clean = &clean[1..];
    }
    if clean.starts_with("__Unwind_Resume") || clean.starts_with("__Znwm") || clean.starts_with("__ZdlPv") {
        clean = &clean[1..];
    }
    if let Some((base, _)) = clean.split_once('@') {
        clean = base;
    }
    if let Some((base, _)) = clean.split_once('$') {
        clean = base;
    }

    for entry in SDK_SIGNATURES {
        if entry.name == clean || entry.name.trim_start_matches('_') == clean.trim_start_matches('_') {
            return Some((entry.ret_type, entry.category, entry.params));
        }
    }

    // Check C++ demangled operator new / delete variants
    if clean.contains("operator new") {
        return lookup_sdk_signature("operator new");
    }
    if clean.contains("operator delete") {
        return lookup_sdk_signature("operator delete");
    }

    None
}
