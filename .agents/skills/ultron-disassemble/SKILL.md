---
name: ultron-disassemble
description: >-
  Disassemble, decompile (Optimizing SSA + AI C23/Rust), audit security mitigations,
  solve Z3 symbolic execution paths, inspect Electron/EVM/DEX/WASM/Mach-O/ELF/PE/.app
  binaries, and generate full autonomous reverse engineering reports and output artifacts
  using the native Rust Ultron Disassemble v3.0 engine (CLI, REST API, and MCP server).
---

# Ultron Disassemble v3.0 — Autonomous Reverse Engineering Skill

Use this skill whenever the user asks to disassemble, decompile, audit, or reverse-engineer a binary, `.app` bundle, library (`.dylib`, `.so`, `.dll`), smart contract (`.evm`), Android bytecode (`.dex` / `.apk`), Electron archive (`.asar`), WebAssembly module (`.wasm`), or crash dump (`.ips` / ELF core).

## Binary & Workspace Locations

- **Repository Root**: `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler`
- **Release Binary**: `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs`
- **macOS App Bundle**: `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/Ultron Disassemble.app`
- **Web UI & REST API**: `http://127.0.0.1:8420`
- **Generated Outputs Directory**: `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/outputs/<target_name>/`

---

## Workflow 1: 1-Click Autonomous End-to-End Disassembly & Report Generation

To run the complete 5-stage reverse engineering pipeline on any file or `.app` bundle and produce all 6 output files (`REPORT.md`, `disassembly.asm`, `decompiled.c`, `analysis_dossier.json`, `frida_hook.js`, `lldb_trace.py`):

1. Run the helper script [run_ultron_pipeline.sh](./scripts/run_ultron_pipeline.sh):
   ```bash
   /Users/gilles/.gemini/config/skills/ultron-disassemble/scripts/run_ultron_pipeline.sh "<path_to_binary_or_app>" [arch]
   ```
   *(If `arch` is omitted, Ultron automatically detects `arm64`, `x86_64`, `wasm32`, `evm`, `dex`, or `asar`, and automatically resolves executables inside `.app/Contents/MacOS/`.)*

2. Read the generated report and artifacts in `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/outputs/<target_slug>/`:
   - `REPORT.md` — Executive & technical summary, binary hardening mitigations, procedures, AI C23/Rust reconstruction, Z3 SMT-LIB2 model, and extracted strings.
   - `decompiled.c` — Optimizing SSA & AI-rewritten C23/Rust pseudocode for recovered procedures.
   - `disassembly.asm` — Full annotated assembly listing.
   - `analysis_dossier.json` — Complete JSON telemetry dossier.
   - `frida_hook.js` & `lldb_trace.py` — Ready-to-run dynamic instrumentation scripts.

---

## Workflow 2: Direct CLI Commands (`ultron-disassemble-rs`)

Use the native Rust CLI directly for targeted queries without going through HTTP:

```bash
# 1. Inspect binary headers, segments, sections & security audit
/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs info "<target_path>" --arch arm64

# 2. Disassemble procedures or a specific function
/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs disasm "<target_path>" --proc _main

# 3. Decompile a procedure (Optimizing SSA + Phi nodes + ObjC/C++/Swift demangling)
/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs decompile "<target_path>" --proc _main --ssa

# 4. Assemble ARM64 / x86_64 instructions to machine code bytes
/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs assemble "mov x0, #0x1; ret" --arch arm64

# 5. Start the standalone JSON-RPC 2.0 MCP Server (20 REA-compatible tools over stdio)
/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs mcp
```

---

## Workflow 3: REST & MCP API Endpoints (`http://127.0.0.1:8420`)

When the UI server is running on port `8420`, you can query any specialized v3.0 engine via `curl`:

- **Full Autonomous Pipeline**:
  `curl -s -X POST http://127.0.0.1:8420/api/auto-pipeline -H "Content-Type: application/json" -d '{"path":"/path/to/binary","arch":"arm64"}'`
- **AI Semantic Decompiler (`c23` | `rust` | `swift`)**:
  `curl -s -X POST http://127.0.0.1:8420/api/v3/ai-decompile -H "Content-Type: application/json" -d '{"proc_address":"0x100000f3c","language":"rust"}'`
- **Z3 / SMT-LIB2 Symbolic Execution Path Solver**:
  `curl -s -X POST http://127.0.0.1:8420/api/v3/symbolic-solve -H "Content-Type: application/json" -d '{"proc_address":"0x100000a18","target_address":"0x100000b24"}'`
- **Artifact & Bytecode Inspector (`.asar`, `.evm`, `.dex`, `.ipa`, `.apk`, `.dmg`)**:
  `curl -s -X POST http://127.0.0.1:8420/api/v3/inspect-artifact -H "Content-Type: application/json" -d '{"path":"/path/to/archive"}'`
- **MCP JSON-RPC 2.0 over HTTP (`20 tools`)**:
  `curl -s -X POST http://127.0.0.1:8420/api/mcp -H "Content-Type: application/json" -d '{"jsonrpc":"2.0","id":1,"method":"tools/list","params":{}}'`
