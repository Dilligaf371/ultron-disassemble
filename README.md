# ULTRON DISASSEMBLE v2.0 — Native Rust Edition (`ultron-disassemble-rs`)

> **"NO STRINGS ON ME"** — Avengers-Class macOS/Linux/Cross-Platform Binary Disassembler, SSA Decompiler, CPU Micro-Emulator, Security Auditor & LLVM Binary Patcher written in **Rust**.

---

## Architecture & Modules (100% Native Rust)

| Module | File | Description |
| :--- | :--- | :--- |
| **Core Models** | `src/types.rs` | `UltronDisassembledFile`, `UltronSegment`, `UltronSection`, `UltronProcedure`, `UltronBasicBlock`, `UltronInstruction`, C `struct` field offset solver |
| **Multi-Format Loader** | `src/loader.rs` | `goblin`-powered loader for **Mach-O 64-bit**, **Universal Fat Mach-O**, **macOS `.app` bundles**, **ELF 64-bit**, **PE64**, Objective-C Runtime metadata (`__objc_methname`, `__objc_selrefs`, `__objc_classname`), and C strings |
| **Capstone Disassembler & CFG** | `src/disassembler.rs` | Native **ARM64 (AArch64)** & **x86_64** disassembly, `ADRP + ADD/LDR` page-offset resolver, Basic Block & Control-Flow Graph (CFG) builder, stack frame analyzer, and bidirectional XREFs (`xrefs_to` / `xrefs_from`) |
| **SSA Decompiler & AST Lifter** | `src/decompiler.rs` | High-level C / Objective-C pseudocode lifter with **Static Single Assignment (SSA)** versioning, automatic **Phi ($\phi$) node insertion** at control-flow joins, `[Receiver selector:arg]` reconstruction, and C `struct` offset resolution |
| **Neural Core, Demangler & CPU Emulator** | `src/neural_and_emu.rs` | • **`SymbolDemangler`**: C++ Itanium (`_Z`), Swift (`_$s`), and Rust (`_R`) demangling<br>• **`UltronSecurityAuditor`**: CWE dangerous sink scanner, cryptographic constant detector (AES S-Box, SHA-256, ChaCha20), and Shannon Entropy calculator<br>• **`UltronNeuralAnalyzer`**: Heuristic subroutine classification & auto-renaming<br>• **`UltronMicroEmulator`**: Concrete step-by-step ARM64/x86_64 CPU & 64KB virtual stack emulator |
| **LLVM Assembler & Binary Patcher** | `src/assembler.rs` | Native Rust FFI (`libloading`) to `libLLVMServices.dylib` (`llvmservice_assemble_unchecked`) + `clang` fallback + in-memory binary patching & macOS `codesign -f -s -` export |
| **Holographic FUI Server** | `src/server.rs` | Asynchronous `axum` + `tokio` HTTP/REST server embedding the full **Avengers Holographic Cockpit & Interactive 3D Volumetric Orange Spherical Particle Cloud** in a single standalone binary |

---

## Build & Run (Rust)

```bash
# Build optimized release binary
cargo build --release

# Launch the Holographic Web UI & REST Server on http://127.0.0.1:8420
./target/release/ultron-disassemble-rs ui samples/ultron_sample_macho --host 0.0.0.0 --port 8420

# Inspect binary headers, segments, sections & security audit
./target/release/ultron-disassemble-rs info samples/ultron_sample_macho

# Disassemble a binary or specific procedure
./target/release/ultron-disassemble-rs disasm samples/ultron_sample_macho

# Decompile a procedure with SSA form and Phi (φ) nodes
./target/release/ultron-disassemble-rs decompile samples/ultron_sample_macho --proc _compute_checksum --ssa

# Assemble ARM64 / x86_64 machine instructions
./target/release/ultron-disassemble-rs assemble "mov x0, #0x2a" --arch arm64
```
