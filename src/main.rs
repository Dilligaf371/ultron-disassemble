mod assembler;
mod decompiler;
mod disassembler;
mod loader;
mod neural_and_emu;
mod server;
mod types;

use crate::assembler::UltronLlvmAssembler;
use crate::decompiler::{DecompileOptions, UltronDecompiler};
use crate::loader::UltronBinaryLoader;
use crate::neural_and_emu::{SymbolDemangler, UltronSecurityAuditor};
use clap::{Parser, Subcommand};

#[derive(Parser)]
#[command(
    name = "ultron-disassemble-rs",
    version = "2.0.0",
    about = "ULTRON DISASSEMBLE v2.0 (Native Rust Edition) — Avengers-Class Binary Disassembler, SSA Decompiler, CPU Micro-Emulator & Security Auditor"
)]
struct Cli {
    #[command(subcommand)]
    command: Commands,
}

#[derive(Subcommand)]
enum Commands {
    /// Inspect segments, sections, symbols and security audit of a binary
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
    /// Decompile a procedure into high-level C/Objective-C pseudocode (with optional SSA + Phi nodes)
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
    /// Launch the AAA Avengers Holographic Web UI & REST API Server
    Ui {
        #[arg(default_value = "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/samples/ultron_sample_macho")]
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
            println!("═══ ULTRON DISASSEMBLE v2.0 (RUST NATIVE) // BINARY DOSSIER ═══");
            println!("File        : {}", doc.file_path);
            println!("Format      : {} ({} / {})", doc.format_name, doc.cpu_family, doc.cpu_subfamily);
            println!("Entry Point : 0x{:x}", doc.entry_point);
            println!("Procedures  : {}", doc.procedures.len());
            println!("Instructions: {}", doc.instructions.len());
            println!("Strings     : {}", doc.string_entries.len());
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
        Commands::Ui { path, host, port, arch } => {
            let doc = UltronBinaryLoader::load(&path, &arch)?;
            server::run_server(doc, &host, port).await?;
        }
    }

    Ok(())
}
