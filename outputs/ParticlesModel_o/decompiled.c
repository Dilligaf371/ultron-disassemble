/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesModel.o
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── flirt_cxx_exception_landing_pad_8c @ 0x8c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_8c ───
int64_t flirt_cxx_exception_landing_pad_8c(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_8c(r0, r1);
    r8 = ((UltronContext *)sp)->target_buffer;
    r14 = ((UltronContext *)sp)->payload_length;
    r9 = ((UltronContext *)sp)->crypto_nonce;
    r13 = *([sp, #0x28]);
    r12 = *([sp, #0x30]);
    r11 = *([sp, #0x38]);
    r10 = *([sp, #0x40]);
    r1 = *([sp, #0x48]);
    *([x29, #-0x40]) = r0;
    ((UltronContext *)r0)->crypto_nonce = r8;
    r8 = 4;
    *([x0, #0x28]) = r8;
    r8 = 2;
    *([x0, #0x30]) = r8;
    *([x0, #0x38]) = r14;
    r14 = 9;
    *([x0, #0x40]) = r14;
    *([x0, #0x48]) = r8;
    *([x0, #0x50]) = r9;
    r9 = 8;
    *([x0, #0x58]) = r9;
    *([x0, #0x60]) = r8;
    *([x0, #0x68]) = r13;
    *([x0, #0x70]) = r9;
    *([x0, #0x78]) = r8;
    *([x0, #0x80]) = r12;
    r12 = 5;
    *([x0, #0x88]) = r12;
    *([x0, #0x90]) = r8;
    *([x0, #0x98]) = r11;
    *([x0, #0xa0]) = r9;
    *([x0, #0xa8]) = r8;
    *([x0, #0xb0]) = r10;
    *([x0, #0xb8]) = r9;
    *([x0, #0xc0]) = r8;
}

// ── flirt_objc_retain_release_thunk_11c @ 0x11c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_11c ───
int64_t flirt_objc_retain_release_thunk_11c(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_11c(r0, r1);
    r1 = *([x29, #-0x38]);
    r2 = *([x29, #-0x30]);
    *([x29, #-0x28]) = r0;
}

// ── flirt_cxx_exception_landing_pad_12c @ 0x12c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_12c ───
int64_t flirt_cxx_exception_landing_pad_12c(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_12c(r0, r1);
    r8 = r0;
    r0 = *([x29, #-0x28]);
    *([x29, #-0x20]) = r8;
}

// ── flirt_cxx_exception_landing_pad_13c @ 0x13c (22 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_13c ───
// Stack Frame: 0B | Basic Blocks: 22 | Natural Loops: 0 | Post-Dom Nodes: 22 | Callers: 1
int64_t flirt_cxx_exception_landing_pad_13c(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_13c(r0, r1);
    r0 = *([x29, #-0x20]);
    if (r0 != 0) { goto loc_15c; }
    // [Block 0x148 | PostDom: 0x14c]
    goto loc_14c;
    // [Block 0x14c | PostDom: exit]
    /* 0x14c: sturb wzr, [x29, #-1] */
    r8 = 0;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x15c | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 1;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_184; }
    // [Block 0x16c | PostDom: 0x170]
    goto loc_170;
    // [Block 0x170 | PostDom: exit]
    r8 = 1;
    /* 0x174: sturb w8, [x29, #-1] */
    r8 = 1;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x184 | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 2;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_1ac; }
    // [Block 0x194 | PostDom: 0x198]
    goto loc_198;
    // [Block 0x198 | PostDom: exit]
    r8 = 2;
    /* 0x19c: sturb w8, [x29, #-1] */
    r8 = 2;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x1ac | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 3;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_1d4; }
    // [Block 0x1bc | PostDom: 0x1c0]
    goto loc_1c0;
    // [Block 0x1c0 | PostDom: exit]
    r8 = 3;
    /* 0x1c4: sturb w8, [x29, #-1] */
    r8 = 3;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x1d4 | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 4;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_1fc; }
    // [Block 0x1e4 | PostDom: 0x1e8]
    goto loc_1e8;
    // [Block 0x1e8 | PostDom: exit]
    r8 = 4;
    /* 0x1ec: sturb w8, [x29, #-1] */
    r8 = 4;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x1fc | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 5;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_224; }
    // [Block 0x20c | PostDom: 0x210]
    goto loc_210;
    // [Block 0x210 | PostDom: exit]
    r8 = 5;
    /* 0x214: sturb w8, [x29, #-1] */
    r8 = 5;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x224 | PostDom: exit]
    r9 = *([x29, #-0x20]);
    r8 = 6;
    r8 = r8 - r9;
    if (r8 != 0) { goto loc_24c; }
    // [Block 0x234 | PostDom: 0x238]
    goto loc_238;
    // [Block 0x238 | PostDom: exit]
    r8 = 6;
    /* 0x23c: sturb w8, [x29, #-1] */
    r8 = 6;
    *([sp, #0xc]) = r8;
    goto loc_260;
    // [Block 0x24c | PostDom: exit]
    r0 = *([x29, #-0x30]);
}

// ── flirt_cxx_exception_landing_pad_250 @ 0x250 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_250 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_cxx_exception_landing_pad_250(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_250(r0, r1);
    r8 = 7;
    ((UltronContext *)sp)->session_flags = r8;
    goto loc_27c;
    // [Block 0x260 | PostDom: exit]
    r0 = *([x29, #-0x30]);
    r8 = *([sp, #0xc]);
    *([sp, #4]) = r8;
}

// ── flirt_objc_retain_release_thunk_26c @ 0x26c (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_26c ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_26c(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_26c(r0, r1);
    r8 = *([sp, #4]);
    ((UltronContext *)sp)->session_flags = r8;
    goto loc_27c;
    // [Block 0x27c | PostDom: exit]
    r0 = ((UltronContext *)sp)->session_flags;
    return r0;
}

// ── swift::_finalizeUninitializedArray() @ 0x28c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::_finalizeUninitializedArray() ───
int64_t swift::_finalizeUninitializedArray(int64_t arg0, int64_t arg1) {
    r8 = r1;
    ((UltronContext *)sp)->session_flags = r8;
    r20 = sp;
    *([sp]) = r0;
    r0 = 0;
}

// ── flirt_objc_retain_release_thunk_2b0 @ 0x2b0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2b0 ───
int64_t flirt_objc_retain_release_thunk_2b0(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_2b0(r0, r1);
}

// ── flirt_pthread_mutex_scoped_lock_2b4 @ 0x2b4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_2b4 ───
int64_t flirt_pthread_mutex_scoped_lock_2b4(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_2b4(r0, r1);
    r0 = *([sp]);
    return r0;
}

// ── swift::Aleria::ParticlesState::allCases() @ 0x2cc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::allCases() ───
int64_t swift::Aleria::ParticlesState::allCases(int64_t arg0, int64_t arg1) {
    r8 = 7;
    r0 = r8;
    r8 = 0x0;
    r1 = r8 + 0x10;
    ((UltronContext *)sp)->session_flags = r1;
}

// ── flirt_cxx_exception_landing_pad_2f0 @ 0x2f0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_2f0 ───
int64_t flirt_cxx_exception_landing_pad_2f0(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_2f0(r0, r1);
    r1 = ((UltronContext *)sp)->session_flags;
    ((UltronContext *)r0)->crypto_nonce = 0;
    r8 = 1;
    *([x0, #0x21]) = r8;
    r8 = 2;
    *([x0, #0x22]) = r8;
    r8 = 3;
    *([x0, #0x23]) = r8;
    r8 = 4;
    *([x0, #0x24]) = r8;
    r8 = 5;
    *([x0, #0x25]) = r8;
    r8 = 6;
    *([x0, #0x26]) = r8;
}

// ── flirt_pthread_mutex_scoped_lock_32c @ 0x32c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_32c ───
int64_t flirt_pthread_mutex_scoped_lock_32c(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_32c(r0, r1);
    return r0;
}

// ── swift::Aleria::ParticlesState::rawValue() @ 0x33c (14 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::rawValue() ───
// Stack Frame: 0B | Basic Blocks: 14 | Natural Loops: 0 | Post-Dom Nodes: 14 | Callers: 0
int64_t swift::Aleria::ParticlesState::rawValue(int64_t arg0, int64_t arg1) {
    *([x29, #-0xc]) = r0;
    /* 0x34c: sturb wzr, [x29, #-8] */
    /* 0x350: sturb w0, [x29, #-8] */
    r8 = r0 & 0xff;
    if (r8 == 0) { goto loc_3c8; }
    // [Block 0x35c | PostDom: 0x360]
    goto loc_360;
    // [Block 0x360 | PostDom: 0x370]
    r8 = *([x29, #-0xc]);
    r8 = r8 & 0xff;
    r8--;
    if (r8 == 0) { goto loc_3f0; }
    // [Block 0x370 | PostDom: 0x374]
    goto loc_374;
    // [Block 0x374 | PostDom: 0x384]
    r8 = *([x29, #-0xc]);
    r8 = r8 & 0xff;
    r8 = r8 - 2;
    if (r8 == 0) { goto loc_418; }
    // [Block 0x384 | PostDom: 0x388]
    goto loc_388;
    // [Block 0x388 | PostDom: 0x398]
    r8 = *([x29, #-0xc]);
    r8 = r8 & 0xff;
    r8 = r8 - 3;
    if (r8 == 0) { goto loc_440; }
    // [Block 0x398 | PostDom: 0x39c]
    goto loc_39c;
    // [Block 0x39c | PostDom: 0x3ac]
    r8 = *([x29, #-0xc]);
    r8 = r8 & 0xff;
    r8 = r8 - 4;
    if (r8 == 0) { goto loc_468; }
    // [Block 0x3ac | PostDom: 0x3b0]
    goto loc_3b0;
    // [Block 0x3b0 | PostDom: 0x3c0]
    r8 = *([x29, #-0xc]);
    r8 = r8 & 0xff;
    r8 = r8 - 5;
    if (r8 == 0) { goto loc_490; }
    // [Block 0x3c0 | PostDom: 0x3c4]
    goto loc_3c4;
    // [Block 0x3c4 | PostDom: exit]
    goto loc_4b8;
    // [Block 0x3c8 | PostDom: exit]
    r0 = 0x0;
    r8 = 4;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_3e0 @ 0x3e0 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_3e0 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_3e0(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_3e0(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x3f0 | PostDom: exit]
    r0 = 0x0;
    r8 = 9;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_408 @ 0x408 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_408 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_408(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_408(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x418 | PostDom: exit]
    r0 = 0x0;
    r8 = 8;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_430 @ 0x430 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_430 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_430(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_430(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x440 | PostDom: exit]
    r0 = 0x0;
    r8 = 8;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_458 @ 0x458 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_458 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_458(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_458(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x468 | PostDom: exit]
    r0 = 0x0;
    r8 = 5;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_480 @ 0x480 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_480 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_480(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_480(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x490 | PostDom: exit]
    r0 = 0x0;
    r8 = 8;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_4a8 @ 0x4a8 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_4a8 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_4a8(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_4a8(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x4b8 | PostDom: exit]
    r0 = 0x0;
    r8 = 8;
    r1 = r8;
    r8 = 1;
    r2 = r8 & 1;
}

// ── flirt_objc_retain_release_thunk_4d0 @ 0x4d0 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_4d0 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_objc_retain_release_thunk_4d0(int64_t arg0, int64_t arg1) {
    r0 = flirt_objc_retain_release_thunk_4d0(r0, r1);
    *([sp]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    goto loc_4e0;
    // [Block 0x4e0 | PostDom: exit]
    r0 = *([sp]);
    r1 = ((UltronContext *)sp)->session_flags;
    return r0;
}

// ── swift::Aleria::ParticlesState::ee() @ 0x4f4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::ee() ───
int64_t swift::Aleria::ParticlesState::ee(int64_t arg0, int64_t arg1) {
    r8 = *([x0]); // [DWARF CU: ParticlesModel.swift:$s6Aleria14ParticlesStateOSQAASQ2eeoiySbx_xtFZTW]
    r9 = *([x1]);
    r8 = r8 - r9;
    /* 0x500: cset w0, eq */
    return r0;
}

// ── swift::Aleria::ParticlesState::hashValue() @ 0x508 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::hashValue() ───
int64_t swift::Aleria::ParticlesState::hashValue(int64_t arg0, int64_t arg1) {
    ((UltronContext *)sp)->session_flags = r0;
    *([sp]) = r1;
}

// ── flirt_cxx_exception_landing_pad_51c @ 0x51c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_51c ───
int64_t flirt_cxx_exception_landing_pad_51c(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_51c(r0, r1);
    r1 = *([sp]);
    r2 = r0;
    r0 = ((UltronContext *)sp)->session_flags;
    r3 = *([x3]);
}

// ── flirt_pthread_mutex_scoped_lock_534 @ 0x534 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_534 ───
int64_t flirt_pthread_mutex_scoped_lock_534(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_534(r0, r1);
    return r0;
}

// ── swift::Aleria::ParticlesState::hash::into::Hasher() @ 0x544 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::hash::into::Hasher() ───
int64_t swift::Aleria::ParticlesState::hash::into::Hasher(int64_t arg0, int64_t arg1) {
    *([x29, #-8]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    ((UltronContext *)sp)->target_buffer = r2;
}

// ── flirt_cxx_exception_landing_pad_55c @ 0x55c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_55c ───
int64_t flirt_cxx_exception_landing_pad_55c(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_55c(r0, r1);
    r1 = ((UltronContext *)sp)->session_flags;
    r2 = ((UltronContext *)sp)->target_buffer;
    r3 = r0;
    r0 = *([x29, #-8]);
    r4 = *([x4]);
}

// ── flirt_pthread_mutex_scoped_lock_578 @ 0x578 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_578 ───
int64_t flirt_pthread_mutex_scoped_lock_578(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_578(r0, r1);
    return r0;
}

// ── swift::Aleria::ParticlesState::_rawHashValue::seed::i_() @ 0x588 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::_rawHashValue::seed::i_() ───
int64_t swift::Aleria::ParticlesState::_rawHashValue::seed::i_(int64_t arg0, int64_t arg1) {
    *([x29, #-8]) = r0;
    ((UltronContext *)sp)->session_flags = r1;
    ((UltronContext *)sp)->target_buffer = r2;
}

// ── flirt_cxx_exception_landing_pad_5a0 @ 0x5a0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_5a0 ───
int64_t flirt_cxx_exception_landing_pad_5a0(int64_t arg0, int64_t arg1) {
    r0 = flirt_cxx_exception_landing_pad_5a0(r0, r1);
    r1 = ((UltronContext *)sp)->session_flags;
    r2 = ((UltronContext *)sp)->target_buffer;
    r3 = r0;
    r0 = *([x29, #-8]);
    r4 = *([x4]);
}

// ── flirt_pthread_mutex_scoped_lock_5bc @ 0x5bc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_5bc ───
int64_t flirt_pthread_mutex_scoped_lock_5bc(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_5bc(r0, r1);
    return r0;
}

// ── swift::Aleria::ParticlesState::rawValue::Raw() @ 0x5cc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::rawValue::Raw() ───
int64_t swift::Aleria::ParticlesState::rawValue::Raw(int64_t arg0, int64_t arg1) {
    ((UltronContext *)sp)->session_flags = r8;
    r8 = r0;
    r0 = *([x8]);
    r1 = ((UltronContext *)r8)->session_flags;
}

// ── flirt_pthread_mutex_scoped_lock_5e8 @ 0x5e8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_5e8 ───
int64_t flirt_pthread_mutex_scoped_lock_5e8(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_5e8(r0, r1);
    r8 = ((UltronContext *)sp)->session_flags;
    *([x8]) = r0;
    return r0;
}

// ── swift::Aleria::ParticlesState::rawValue::Raw() @ 0x600 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::rawValue::Raw() ───
int64_t swift::Aleria::ParticlesState::rawValue::Raw(int64_t arg0, int64_t arg1) {
    ((UltronContext *)sp)->session_flags = r8;
    r0 = *([x20]);
}

// ── flirt_pthread_mutex_scoped_lock_614 @ 0x614 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_614 ───
int64_t flirt_pthread_mutex_scoped_lock_614(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_614(r0, r1);
    r8 = ((UltronContext *)sp)->session_flags;
    *([x8]) = r0;
    ((UltronContext *)r8)->session_flags = r1;
    return r0;
}

// ── swift::Aleria::ParticlesState::CaseIterable::allCases::All() @ 0x630 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::CaseIterable::allCases::All() ───
int64_t swift::Aleria::ParticlesState::CaseIterable::allCases::All(int64_t arg0, int64_t arg1) {
    ((UltronContext *)sp)->session_flags = r8;
}

// ── flirt_pthread_mutex_scoped_lock_640 @ 0x640 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_640 ───
int64_t flirt_pthread_mutex_scoped_lock_640(int64_t arg0, int64_t arg1) {
    r0 = flirt_pthread_mutex_scoped_lock_640(r0, r1);
    r8 = ((UltronContext *)sp)->session_flags;
    *([x8]) = r0;
    return r0;
}

// ── swift::Aleria::ParticlesBudget::app() @ 0x658 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesBudget::app() ───
int64_t swift::Aleria::ParticlesBudget::app(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── swift::Aleria::ParticlesBudget::app() @ 0x65c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesBudget::app() ───
int64_t swift::Aleria::ParticlesBudget::app(int64_t arg0, int64_t arg1) {
    r0 = 0x0;
    return r0;
}

// ── swift::Aleria::ParticlesBudget::app() @ 0x668 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesBudget::app() ───
int64_t swift::Aleria::ParticlesBudget::app(int64_t arg0, int64_t arg1) {
    r8 = 0xc350;
    r0 = r8;
    return r0;
}

// ── swift::Aleria::ParticlesBudget::preview() @ 0x674 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesBudget::preview() ───
int64_t swift::Aleria::ParticlesBudget::preview(int64_t arg0, int64_t arg1) {
    return r0;
}

