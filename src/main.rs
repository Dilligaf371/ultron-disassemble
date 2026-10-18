mod advanced_re;
mod assembler;
mod decompiler;
mod disassembler;
mod loader;
mod mcp_server;
mod neural_and_emu;
mod server;
mod types;
mod v3_intelligence;
mod v3_targets;
mod v4_legend;

use crate::advanced_re::{UltronBinDiffEngine, UltronDynamicDebugBridge, UltronFlirtEngine};
use crate::assembler::UltronLlvmAssembler;
use crate::decompiler::{DecompileOptions, UltronDecompiler};
use crate::loader::UltronBinaryLoader;
use crate::mcp_server::run_mcp_stdio_server;
use crate::neural_and_emu::{SymbolDemangler, UltronSecurityAuditor};
use crate::v3_intelligence::{UltronAiDecompiler, UltronSymbolicSolver};
use crate::v3_targets::{
    UltronArtifactAnalyzer, UltronBytecodeDecoder, UltronCrashAndLldbEngine,
};
use clap::{Parser, Subcommand};

#[derive(Parser)]
#[command(
    name = "ultron-disassemble-rs",
    version = "3.0.0",
    about = "ULTRON DISASSEMBLE v3.0 (Omni-Core Native Rust Edition) — Disassembler, SSA & AI Decompiler, Z3 Symbolic Solver, REA Multi-Targets (.asar/EVM/DEX/CIL/Crash) & MCP Server"
)]
struct Cli {
    #[command(subcommand)]
    command: Commands,
}

#[derive(Subcommand)]
enum Commands {
    /// Inspect segments, sections, symbols, ObjC/C++ classes, DWARF and security audit of a binary
    Info {
        path: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Disassemble all procedures or a specific procedure
    Disasm {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Decompile a procedure into high-level C/Objective-C/C++ pseudocode
    Decompile {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long)]
        ssa: bool,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Export Control-Flow Graph (CFG) basic blocks and edges
    Cfg {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Extract C strings and cross-references (XREFs)
    Strings {
        path: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Assemble ARM64 / x86_64 instructions via native libLLVMServices.dylib FFI
    Assemble {
        instruction: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Structural BinDiff comparison between two binaries (CFG & Mnemonic Hash)
    Bindiff {
        path_a: String,
        path_b: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Generate live Frida & LLDB dynamic instrumentation scripts for a procedure
    Frida {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Scan binary with FLIRT/WARP static library function signatures
    Flirt {
        path: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Run Z3 / SMT-LIB2 Symbolic Execution Path Solver to a target address
    Solve {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long)]
        target: Option<String>,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Rewrite procedure into idiomatic C23, Rust, or Swift using the Neural AST Synthesizer
    AiDecompile {
        path: String,
        #[arg(long)]
        proc: Option<String>,
        #[arg(long, default_value = "rust")]
        lang: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Inspect Electron .asar, mobile bundles (.ipa/.apk/.dmg), or EVM/DEX/CIL bytecode
    Artifact {
        path: String,
    },
    /// Analyze macOS .ips crash report or Linux ELF core dump
    Crash {
        path: String,
    },
    /// Launch the built-in Model Context Protocol (MCP) JSON-RPC 2.0 Server over stdio (REA-compatible)
    Mcp {
        #[arg(default_value = "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/samples/ultron_objc_sample")]
        path: String,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
    /// Launch the Minimalist Telemetry Web UI & REST API Server
    Ui {
        #[arg(default_value = "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/samples/ultron_objc_sample")]
        path: String,
        #[arg(long, default_value = "127.0.0.1")]
        host: String,
        #[arg(long, default_value_t = 8420)]
        port: u16,
        #[arg(long, default_value = "arm64")]
        arch: String,
    },
}

#[tokio::main]
async fn main() -> anyhow::Result<()> {
    let cli = Cli::parse();

    match cli.command {
        Commands::Info { path, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            println!("═══ ULTRON DISASSEMBLE v2.3 (RUST NATIVE) // BINARY DOSSIER ═══");
            println!("File        : {}", doc.file_path);
            println!("Format      : {} ({} / {})", doc.format_name, doc.cpu_family, doc.cpu_subfamily);
            println!("Entry Point : 0x{:x}", doc.entry_point);
            println!("Procedures  : {}", doc.procedures.len());
            println!("Instructions: {}", doc.instructions.len());
            println!("Strings     : {}", doc.string_entries.len());
            if doc.chained_fixups_count > 0 {
                println!("PAC/Fixups  : {} chained pointer slots unmasked", doc.chained_fixups_count);
            }
            println!("\n─── SEGMENTS & SECTIONS ───");
            for seg in &doc.segments {
                println!(
                    "  [{}] 0x{:09x} - 0x{:09x} ({} bytes)",
                    seg.name,
                    seg.start_address,
                    seg.start_address + seg.length,
                    seg.length
                );
                for sec in &seg.sections {
                    println!(
                        "    ├─ {:<18} 0x{:09x} ({} bytes) {}",
                        sec.name,
                        sec.start_address,
                        sec.length,
                        if sec.is_code { "[CODE]" } else { "[DATA]" }
                    );
                }
            }
            let audit = UltronSecurityAuditor::audit_document(&doc);
            if !doc.objc_classes.is_empty() {
                println!("\n─── OBJECTIVE-C 2.0 RECONSTRUCTED CLASSES ({}) ───", doc.objc_classes.len());
                for cls in &doc.objc_classes {
                    for line in cls.header_preview.lines() {
                        println!("  {}", line);
                    }
                }
            }
            if !doc.cpp_classes.is_empty() {
                println!("\n─── C++ POLYMORPHIC VTABLES & RTTI ({}) ───", doc.cpp_classes.len());
                for cpp in &doc.cpp_classes {
                    println!(
                        "  class {} : {} [vtable @ {}, {} virtual methods]",
                        cpp.demangled_name,
                        if cpp.base_class.is_empty() { "root" } else { &cpp.base_class },
                        cpp.vtable_address,
                        cpp.virtual_methods.len()
                    );
                    for (idx, vm) in cpp.virtual_methods.iter().enumerate() {
                        println!("    [vfunc #{}] {}", idx, vm);
                    }
                }
            }
            if !doc.dwarf_compile_units.is_empty() {
                println!("\n─── DWARF DEBUG COMPILE UNITS ({}) ───", doc.dwarf_compile_units.len());
                for cu in &doc.dwarf_compile_units {
                    println!("  • {}", cu);
                }
            }
            println!("\n─── SECURITY & ENTROPY AUDIT ───");
            println!("  Risk Score : {}/100", audit["risk_score"]);
            println!("  CWE Sinks  : {}", audit["vulnerability_count"]);
        }
        Commands::Disasm { path, proc, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            for p in doc.procedures.values() {
                if let Some(ref filter) = proc {
                    if !p.name.contains(filter) && format!("0x{:x}", p.entry_point) != *filter {
                        continue;
                    }
                }
                println!(
                    "\n; ═══ SUBROUTINE {} ({}) @ 0x{:x} ═══",
                    p.name,
                    SymbolDemangler::demangle(&p.name),
                    p.entry_point
                );
                for bb in &p.basic_blocks {
                    for ins in &bb.instructions {
                        let cmt = if ins.comment.is_empty() {
                            String::new()
                        } else {
                            format!(" ; {}", ins.comment)
                        };
                        println!(
                            "  0x{:09x}: {:<10} {:<8} {}{}",
                            ins.address, ins.bytes_hex, ins.mnemonic, ins.op_str, cmt
                        );
                    }
                }
            }
        }
        Commands::Decompile { path, proc, ssa, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            let opts = DecompileOptions {
                ssa_form: ssa,
                ..Default::default()
            };
            for p in doc.procedures.values() {
                if let Some(ref filter) = proc {
                    if !p.name.contains(filter) && format!("0x{:x}", p.entry_point) != *filter {
                        continue;
                    }
                }
                println!("{}\n", UltronDecompiler::decompile(&doc, p, &opts));
            }
        }
        Commands::Cfg { path, proc, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            for p in doc.procedures.values() {
                if let Some(ref filter) = proc {
                    if !p.name.contains(filter) && format!("0x{:x}", p.entry_point) != *filter {
                        continue;
                    }
                }
                println!("CFG for {} (0x{:x}): {} basic blocks", p.name, p.entry_point, p.basic_blocks.len());
                for bb in &p.basic_blocks {
                    let outs: Vec<String> = bb.outgoing_edges.iter().map(|e| format!("0x{:x}", e)).collect();
                    println!(
                        "  [BB 0x{:x}..0x{:x}] ({} insns) -> [{}]",
                        bb.start_address,
                        bb.end_address,
                        bb.instructions.len(),
                        outs.join(", ")
                    );
                }
            }
        }
        Commands::Strings { path, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            for s in &doc.string_entries {
                println!("0x{:09x} [{}]: {:?}", s.address, s.section, s.value);
            }
        }
        Commands::Assemble { instruction, arch } => {
            let res = UltronLlvmAssembler::assemble(&instruction, &arch)?;
            println!("{}", serde_json::to_string_pretty(&res)?);
        }
        Commands::Bindiff { path_a, path_b, arch } => {
            let doc_a = UltronBinaryLoader::load(&path_a, &arch)?;
            let doc_b = UltronBinaryLoader::load(&path_b, &arch)?;
            let diff = UltronBinDiffEngine::diff_binaries(&doc_a, &doc_b);
            println!("{}", serde_json::to_string_pretty(&diff)?);
        }
        Commands::Frida { path, proc, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            let target_addr = proc
                .as_ref()
                .and_then(|q| {
                    doc.procedures
                        .values()
                        .find(|p| p.name.contains(q) || format!("0x{:x}", p.entry_point) == *q)
                        .map(|p| p.entry_point)
                })
                .unwrap_or(doc.entry_point);
            let res = UltronDynamicDebugBridge::generate_debug_scripts(&doc, target_addr, &doc.breakpoints);
            println!("═══ FRIDA INTERCEPTOR SCRIPT ═══\n{}\n", res["frida_script"].as_str().unwrap_or_default());
            println!("═══ LLDB DEBUGGER SCRIPT ═══\n{}", res["lldb_script"].as_str().unwrap_or_default());
        }
        Commands::Flirt { path, arch } => {
            let mut doc = UltronBinaryLoader::load(&path, &arch)?;
            let matches = UltronFlirtEngine::scan_and_apply_flirt(&mut doc);
            println!("═══ ULTRON FLIRT/WARP SIGNATURE MATCHES ({}) ═══", matches.len());
            println!("{}", serde_json::to_string_pretty(&matches)?);
        }
        Commands::Solve {
            path,
            proc,
            target,
            arch,
        } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            let proc_addr = proc
                .as_ref()
                .and_then(|q| {
                    doc.procedures
                        .values()
                        .find(|p| p.name.contains(q) || format!("0x{:x}", p.entry_point) == *q)
                        .map(|p| p.entry_point)
                })
                .unwrap_or(doc.entry_point);
            let target_addr = target
                .as_ref()
                .and_then(|t| {
                    let s = t.trim().trim_start_matches("0x");
                    u64::from_str_radix(s, 16).ok()
                })
                .unwrap_or_else(|| {
                    doc.procedures
                        .get(&proc_addr)
                        .and_then(|p| p.basic_blocks.last().map(|bb| bb.start_address))
                        .unwrap_or(proc_addr)
                });
            let res = UltronSymbolicSolver::solve_symbolic_path(&doc, proc_addr, target_addr);
            println!("{}", serde_json::to_string_pretty(&res)?);
        }
        Commands::AiDecompile {
            path,
            proc,
            lang,
            arch,
        } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            let proc_addr = proc
                .as_ref()
                .and_then(|q| {
                    doc.procedures
                        .values()
                        .find(|p| p.name.contains(q) || format!("0x{:x}", p.entry_point) == *q)
                        .map(|p| p.entry_point)
                })
                .unwrap_or(doc.entry_point);
            let res = UltronAiDecompiler::ai_rewrite_procedure(&doc, proc_addr, &lang);
            println!(
                "═══ ULTRON AI IDIOMATIC REWRITER ({}) // {} ═══\n{}",
                lang.to_uppercase(),
                res["procedure"].as_str().unwrap_or_default(),
                res["idiomatic_code"].as_str().unwrap_or_default()
            );
        }
        Commands::Artifact { path } => {
            let res = if path.ends_with(".evm") || path.ends_with(".dex") || path.ends_with(".dll") {
                UltronBytecodeDecoder::decode_bytecode_file(&path)
            } else {
                UltronArtifactAnalyzer::inspect_artifact(&path)
            };
            println!("{}", serde_json::to_string_pretty(&res)?);
        }
        Commands::Crash { path } => {
            let res = UltronCrashAndLldbEngine::inspect_crash_dump(&path);
            println!("{}", serde_json::to_string_pretty(&res)?);
        }
        Commands::Mcp { path, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            run_mcp_stdio_server(doc)?;
        }
        Commands::Ui { path, host, port, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            server::run_server(doc, &host, port).await?;
        }
    }

    Ok(())
}
