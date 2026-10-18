# ULTRON DISASSEMBLE v3.0 — Open-Source Native Rust Edition (`ultron-disassemble-rs`)

> **Open-Source Multi-Architecture Binary Disassembler, Optimizing SSA Decompiler, Symbolic Z3 Solver, AI Decompiler, REA & MCP Server** written in **Rust**.

---

## Architecture & Modules (100% Native Rust)

| Module | File | Description |
| :--- | :--- | :--- |
| **Core Models** | `src/types.rs` | `UltronDisassembledFile`, `UltronSegment`, `UltronSection`, `UltronProcedure`, `UltronBasicBlock`, `UltronInstruction`, C `struct` field offset solver |
| **Multi-Format Loader** | `src/loader.rs` | `goblin`-powered loader for **Mach-O 32/64**, **Universal Fat Mach-O**, **macOS `.app`/`.framework`/`.kext`/`.xpc` bundles**, **ELF 32/64**, **PE32/PE32+**, **WebAssembly (`.wasm`)**, **Static Archives (`.a`)**, Objective-C 2.0, Swift 5, C++ RTTI/vtables, and DWARF debug info |
| **Capstone Disassembler & CFG** | `src/disassembler.rs` | Native **ARM64 (AArch64)**, **ARM32**, **x86_64**, **x86**, & **WASM32** disassembly, `ADRP + ADD/LDR` page-offset resolver, Basic Block & Control-Flow Graph (CFG) builder, stack frame analyzer, and bidirectional XREFs (`xrefs_to` / `xrefs_from`) |
| **SSA Decompiler & AST Lifter** | `src/decompiler.rs` | Optimizing C / Objective-C pseudocode lifter with **Static Single Assignment (SSA)** versioning, **Phi ($\phi$) node insertion**, Dominator/Post-Dominator nested loop structuring (`while`, `do-while`, `if/else`, `switch`), `[Receiver selector:arg]` reconstruction, and C `struct` offset resolution |
| **Neural Core, Demangler & CPU Emulator** | `src/neural_and_emu.rs` | • **`SymbolDemangler`**: C++ Itanium (`_Z`), Swift (`_$s`), and Rust (`_R`) demangling<br>• **`UltronSecurityAuditor`**: CWE dangerous sink scanner, cryptographic constant detector (AES S-Box, SHA-256, ChaCha20), and Shannon Entropy calculator<br>• **`UltronNeuralAnalyzer`**: Heuristic subroutine classification & auto-renaming<br>• **`UltronMicroEmulator`**: Concrete step-by-step ARM64/x86_64 CPU & 64KB virtual stack emulator |
| **RE Suite & Omni-Core v3.0** | `src/advanced_re.rs`, `src/v3_intelligence.rs`, `src/v3_targets.rs`, `src/mcp_server.rs` | Persistent `.ultron` project DB, FLIRT/WARP signatures, 3-phase `BinDiff`, Frida/LLDB dynamic script generator, **Z3/SMT-LIB2 Symbolic Execution Solver**, **AI Idiomatic Rewriter (C23/Rust/Swift)**, **Electron `.asar` / `.evm` / `.dex` / `.ips` Crash Forensics**, **REA Evidence Ledger**, and built-in **JSON-RPC 2.0 MCP Server (`ultron-disassemble-rs mcp`)** |
| **LLVM Assembler & Binary Patcher** | `src/assembler.rs` | Native Rust FFI (`libloading`) to `libLLVMServices.dylib` (`llvmservice_assemble_unchecked`) + `clang` fallback + in-memory binary patching & macOS `codesign -f -s -` export |
| **Minimalist Telemetry Web UI** | `src/server.rs` | Asynchronous `axum` + `tokio` HTTP/REST server embedding a **SpaceX-inspired Ultra-Minimalist Monochrome Telemetry Interface** with an optional **60 FPS 3D Spherical Particle Cloud (`[P]`)** in a single standalone binary |

---

## Build & Run (Rust)

```bash
# Build optimized release binary
cargo build --release

# Launch the Minimalist Telemetry Web UI & REST Server on http://127.0.0.1:8420
./target/release/ultron-disassemble-rs ui samples/ultron_objc_sample --host 0.0.0.0 --port 8420

# Inspect binary headers, segments, sections & security audit
./target/release/ultron-disassemble-rs info samples/ultron_sample_macho

# Disassemble a binary or specific procedure
./target/release/ultron-disassemble-rs disasm samples/ultron_sample_macho

# Decompile a procedure with SSA form and Phi (φ) nodes
./target/release/ultron-disassemble-rs decompile samples/ultron_sample_macho --proc _compute_checksum --ssa

# Assemble ARM64 / x86_64 machine instructions
./target/release/ultron-disassemble-rs assemble "mov x0, #0x2a" --arch arm64
```
