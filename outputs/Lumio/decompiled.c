/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Users/gilles/Downloads/Lumio.app/Contents/MacOS/Lumio
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── flirt_string_length_scan_1edc @ 0x100001edc (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_string_length_scan_1edc ───
// Stack Frame: 0B | Basic Blocks: 8 | Natural Loops: 4 | Post-Dom Nodes: 8 | Callers: 4
int64_t flirt_string_length_scan_1edc(int64_t arg0, int64_t arg1) {
    r8 = 0;
    r9 = *([x20]);
    r10 = r9;
    r11 = *([x10, #0x40]!);
    r12 = ((UltronContext *)r9)->crypto_nonce;
    r13 = r12 & 0x3f;
    r14 = 1;
    /* 0x100001ef8: lsl x14, x14, x12 */
    r12 = -1;
    /* 0x100001f04: lsl x13, x12, x14 */
    /* 0x100001f08: csinv x12, x12, x13, hs */
    r12 = r12 & r11;
    r11 = r14 + 0x3f;
    /* 0x100001f14: lsr x11, x11, #6 */
    /* 0x100001f18: movi v0.2d, #0000000000000000 */
    goto loc_100001f44;
    // [NATURAL LOOP HEADER @ 0x100001f20 (Nesting #1)]
    do {
        // [NATURAL LOOP HEADER @ 0x100001f20 (Nesting #2)]
        do {
            /* 0x100001f20: rbit x13, x12 */
            /* 0x100001f24: clz x13, x13 */
            r14 = r12 - 1;
            r12 = r14 & r12;
            r14 = ((VTable_PolymorphicClass_118 *)r9)->vfunc_5;
            r13 = r14 + r13;
            /* 0x100001f38: lsl x14, x8, #9 */
            d1 = *([x13, x14]);
            /* 0x100001f40: fadd d0, d0, d1 */
        } while (1); // loop -> 0x100001f44
        // [NATURAL LOOP HEADER @ 0x100001f44 (Nesting #2)]
        do {
        } while (r12 != 0); // back-edge -> 0x100001f20
        // [NATURAL LOOP HEADER @ 0x100001f48 (Nesting #2)]
        do {
            /* 0x100001f48: adds x8, x8, #1 */
            if (r13 != 6) { goto loc_100001f68; }
            // [Block 0x100001f50 | PostDom: exit]
            if (r8 >= x11) { goto loc_100001f64; }
            // [Block 0x100001f58 | PostDom: 0x100001f60]
            r12 = *([x10, x8, lsl #3]);
        } while (r12 == 0); // back-edge -> 0x100001f48
        // [Block 0x100001f60 | PostDom: exit]
    } while (r8 != x11); // back-edge -> 0x100001f20
    // [Block 0x100001f64 | PostDom: exit]
    return r0;
}

// ── sub_100001f68 @ 0x100001f68 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001f68 ───
int64_t sub_100001f68(int64_t arg0, int64_t arg1) {
}

// ── sub_100001f6c @ 0x100001f6c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001f6c ───
int64_t sub_100001f6c(int64_t arg0, int64_t arg1) {
    r8 = *([x0]);
    r9 = *([x1]);
    /* 0x100001f78: cset w0, eq */
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_1f80 @ 0x100001f80 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1f80 ───
int64_t flirt_pthread_mutex_scoped_lock_1f80(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = *([x20]);
    r8 = &stack_buf_8; // [sp + 0x8]
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_2960(0, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_296c(r19, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_2984(r0, r1);
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_1fc4 @ 0x100001fc4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1fc4 ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t flirt_pthread_mutex_scoped_lock_1fc4(int64_t arg0, int64_t arg1) {
    r8 = r0;
    r0 = *([x20]);
    r20 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_296c(r0, r1);
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_1fec @ 0x100001fec (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1fec ───
int64_t flirt_pthread_mutex_scoped_lock_1fec(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = *([x20]);
    r8 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_2960(r0, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_296c(r19, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_2984(r0, r1);
    return r0;
}

// ── flirt_string_length_scan_202c @ 0x10000202c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_string_length_scan_202c ───
int64_t flirt_string_length_scan_202c(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x10000202c: Multi-Way Cascade on r9 (6 cases)]
    switch (r9) { case 0x2: goto loc_100002064; case 0x2: goto loc_100002068; case 0x0: goto loc_100002080; case 0x0: goto loc_100002084; case 0x1: goto loc_10000208c; case 0x1: goto loc_100002090; }
    r8 = -0x1c00000000000000;
    r9 = *([x20]);
    r10 = 0x7061;
    r10 = 0x73707061; // movk lsl #16
    r11 = -0x1900000000000000;
    r12 = 0x6966;
    r12 = 0x73726966; // movk lsl #16
    r12 = 0x417473726966; // movk lsl #32
    r12 = 0x74417473726966; // movk lsl #48
    r13 = -0x1a00000000000000;
    r14 = 0x616c;
    r14 = 0x7473616c; // movk lsl #16
    r14 = 0x74417473616c; // movk lsl #32
    r12 = (r9 == 2) ? r12 : r14;
    r11 = (r9 == 2) ? r11 : r13;
    r13 = -0x1b00000000000000;
    r14 = 0x616e;
    r14 = 0x656d616e; // movk lsl #16
    r14 = 0x73656d616e; // movk lsl #32
    r10 = (r9 == 0) ? r10 : r14;
    r8 = (r9 == 0) ? r8 : r13;
    r0 = (r9 > 1) ? r12 : r10;
    r1 = (r9 > 1) ? r11 : r8;
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_2098 @ 0x100002098 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_2098 ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t flirt_pthread_mutex_scoped_lock_2098(int64_t arg0, int64_t arg1) {
    r19 = r8;
    r0 = flirt_malloc_zone_alloc_helper_888c(r0, r1);
    *([x19]) = r0;
    return r0;
}

// ── sub_1000020bc @ 0x1000020bc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_1000020bc ───
int64_t sub_1000020bc(int64_t arg0, int64_t arg1) {
    r0 = 0;
    r1 = 1;
    return r0;
}

// ── sub_1000020c8 @ 0x1000020c8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_1000020c8 ───
int64_t sub_1000020c8(int64_t arg0, int64_t arg1) {
    r9 = 4;
    *([x8]) = r9;
    return r0;
}

// ── flirt_cxx_exception_landing_pad_20d4 @ 0x1000020d4 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_20d4 ───
// Stack Frame: 32B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
int64_t flirt_cxx_exception_landing_pad_20d4(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = sub_1000084e8(r0, r1);
    r1 = r0;
    r0 = r19;
    goto loc_1002d29f0;
    // [Block 0x1000020fc | PostDom: exit]
    r19 = r0;
    r0 = sub_1000084e8(r0, r0);
    r1 = r0;
    r0 = r19;
    goto loc_1002d29e4;
}

// ── flirt_stack_canary_check_guard_2124 @ 0x100002124 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_stack_canary_check_guard_2124 ───
// Stack Frame: 96B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 1
int64_t flirt_stack_canary_check_guard_2124(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_41[65]; // [fp - 0x41]
    uint8_t stack_buf_42[8]; // [fp - 0x42]
    uint8_t stack_buf_43[8]; // [fp - 0x43]
    uint8_t stack_buf_44[8]; // [fp - 0x44]
    uint8_t stack_buf_50[12]; // [fp - 0x50]
    *([sp, #-0x60]!) = r28;
    /* 0x100002128: stp x27, x26, [sp, #0x10] */
    /* 0x10000212c: stp x25, x24, [sp, #0x20] */
    /* 0x100002130: stp x23, x22, [sp, #0x30] */
    r24 = r21;
    r23 = r20;
    r20 = r0;
    r0 = 0x100379098;
    r1 = 0x1002d7a70;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100379098, 0x1002d7a70);
    r19 = r0;
    r28 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_118 *)r28)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a70);
    r9 = sp;
    r22 = r9 - r8;
    sp = r22;
    /* 0x10000218c: ldp x25, x26, [x20, #0x18] */
    r0 = r20;
    r1 = r25;
    r0 = sub_1000084c4(r0, r25);
    r20 = r0;
    r0 = sub_1000084e8(r0, r25);
    r2 = r0;
    r0 = 0x10035c598;
    r8 = r22;
    r1 = r0;
    r3 = r25;
    r4 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_299c(0x10035c598, 0x10035c598);
    /* 0x1000021c4: sturb wzr, [x29, #-0x41] */
    r0 = 0x100379070;
    r1 = 0x1002d7a60;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100379070, 0x1002d7a60);
    r20 = r0;
    r0 = 0x1003790a0;
    r1 = *([x1, #0x3a0]);
    r2 = *([x2, #0x4b0]);
    r3 = *([x3, #0x1e0]);
    r0 = flirt_stack_canary_check_guard_8630(0x1003790a0, 0x10036d000);
    r4 = r0;
    r1 = &stack_buf_41; // [fp - 0x41]
    r0 = r23;
    r2 = r19;
    r3 = r20;
    r20 = r22;
    r21 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_2870(r20, &stack_buf_41);
    r24 = r21;
    if (r21 == 0) {
        // [Block 0x10000222c | PostDom: 0x10000232c]
        r8 = 1;
        /* 0x100002230: sturb w8, [x29, #-0x42] */
        r0 = 0x100379080;
        r1 = 0x1002d7a68;
        r0 = flirt_swift_bridge_object_retain_7b28(0x100379080, 0x1002d7a68);
        r20 = r0;
        r0 = 0x1003790a8;
        r1 = *([x1, #0x3a0]);
        r2 = *([x2, #0x1e0]);
        r0 = flirt_stack_canary_check_guard_8584(0x1003790a8, 0x10036d000);
        r4 = r0;
        r0 = r23 + 8;
        r1 = &stack_buf_42; // [fp - 0x42]
        r2 = r19;
        r3 = r20;
        r20 = r22;
        r21 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_2870(r0, &stack_buf_42);
        r24 = r21;
        if (r21 == 0) {
            // [Block 0x100002290 | PostDom: 0x10000232c]
            r0 = 0;
            r0 = flirt_objc_retain_release_thunk_83b4(0, &stack_buf_42);
            r25 = r0;
            r20 = ((UltronContext *)r0)->payload_length;
            r8 = 2;
            /* 0x1000022a4: sturb w8, [x29, #-0x43] */
            r0 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_728(0, &stack_buf_42);
            r26 = r0;
            r1 = ((VTable_PolymorphicClass_118 *)r1)->vfunc_3;
            r0 = 0x1003790b0;
            r2 = ((VTable_PolymorphicClass_118 *)r2)->vfunc_5;
            r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790b0, 0x10036b000);
            r27 = r0;
            r0 = r23 + r20;
            r1 = &stack_buf_43; // [fp - 0x43]
            r2 = r19;
            r3 = r26;
            r4 = r27;
            r20 = r22;
            r21 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_2828(r0, &stack_buf_43);
            r24 = r21;
            if (r21 == 0) {
                // [Block 0x1000022fc | PostDom: 0x10000232c]
                r8 = *([x25, #0x1c]);
                r9 = 3;
                /* 0x100002304: sturb w9, [x29, #-0x44] */
                r0 = r23 + r8;
                r1 = &stack_buf_44; // [fp - 0x44]
                r2 = r19;
                r3 = r26;
                r4 = r27;
                r20 = r22;
                r21 = r24;
                r0 = flirt_dyld_stub_binder_trampoline_2828(r0, &stack_buf_44);
                r24 = r21;
            }
        }
    }
loc_10000232c:
    r8 = ((UltronContext *)r28)->session_flags;
    r0 = r22;
    r1 = r19;
    r0 = x8(r22, r0);
    r21 = r24;
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x10000234c: ldp x23, x22, [sp, #0x30] */
    /* 0x100002350: ldp x25, x24, [sp, #0x20] */
    /* 0x100002354: ldp x27, x26, [sp, #0x10] */
    r28 = stack_buf_50[0x60];
    return r0;
}

// ── flirt_objc_retain_release_thunk_2360 @ 0x100002360 (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2360 ───
// Stack Frame: 96B | Basic Blocks: 8 | Natural Loops: 0 | Post-Dom Nodes: 8 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2360(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_48[72]; // [fp - 0x48]
    uint8_t stack_buf_50[8]; // [fp - 0x50]
    uint8_t stack_buf_51[8]; // [fp - 0x51]
    *([sp, #-0x60]!) = r28;
    /* 0x100002364: stp x27, x26, [sp, #0x10] */
    /* 0x100002368: stp x25, x24, [sp, #0x20] */
    /* 0x10000236c: stp x23, x22, [sp, #0x30] */
    *([x29, #-0x70]) = r21;
    r28 = r0;
    *([x29, #-0xa0]) = r8;
    r0 = 0x100378fb8;
    r1 = 0x1002d90f0;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378fb8, 0x1002d90f0);
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    *([x29, #-0x98]) = r9;
    sp = r9;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r8 = sp;
    r8 = r8 - r12;
    *([x29, #-0x80]) = r8;
    sp = r8;
    r0 = 0x100379060;
    r1 = 0x1002d7a58;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100379060, 0x1002d7a58);
    *([x29, #-0x78]) = r0;
    r8 = *([x0, #-8]);
    *([x29, #-0x88]) = r8;
    r9 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a58);
    r9 = sp;
    r27 = r9 - r8;
    sp = r27;
    r0 = 0;
    r0 = flirt_objc_retain_release_thunk_83b4(0, 0x1002d7a58);
    r20 = r0;
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a58);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r25 = r9 - r8;
    sp = r25;
    r22 = *([x22, #0xa18]);
    r0 = r22;
    r0 = flirt_fast_memcpy_vec_9970(0x10036d000, 0x1002d7a58);
    *([x29, #-0x90]) = r0;
    *([x25]) = r0;
    r0 = r22;
    r0 = flirt_fast_memcpy_vec_9a8c(0x10036d000, 0x1002d7a58);
    r23 = r0;
    ((UltronContext *)r25)->session_flags = r0;
    r19 = ((UltronContext *)r20)->payload_length;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7a58);
    r26 = r0;
    r8 = *([x0, #-8]);
    r24 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
    r0 = r25 + r19;
    r1 = 1;
    r2 = 1;
    r3 = r26;
    r0 = x24(r0, 1);
    r22 = *([x20, #0x1c]);
    *([x29, #-0x68]) = r25;
    r0 = r25 + r22;
    r1 = 1;
    r2 = 1;
    r3 = r26;
    r0 = x24(r0, 1);
    /* 0x1000024dc: ldp x25, x24, [x28, #0x18] */
    *([x29, #-0x60]) = r28;
    r0 = r28;
    r1 = r25;
    r0 = sub_1000084c4(r0, r25);
    r20 = r0;
    r0 = sub_1000084e8(r0, r25);
    r2 = r0;
    r0 = 0x10035c598;
    r28 = r27;
    r8 = r27;
    r1 = r0;
    r21 = *([x29, #-0x70]);
    r3 = r25;
    r4 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_2990(0x10035c598, 0x10035c598);
    r24 = r21;
    if (r21 != 0) {
        // [Block 0x100002528 | PostDom: 0x1000026bc]
        r23 = *([x29, #-0x68]);
    } else {
        // [Block 0x100002530 | PostDom: 0x1000026bc]
        /* 0x100002530: stp x19, x23, [x29, #-0xb0] */
        *([x29, #-0x70]) = r26;
        *([x29, #-0xb8]) = r22;
        r22 = *([x29, #-0x80]);
        /* 0x100002540: ldp x25, x19, [x29, #-0x90] */
        r0 = 0x100379070;
        r1 = 0x1002d7a60;
        r0 = flirt_swift_bridge_object_retain_7b28(0x100379070, 0x1002d7a60);
        r20 = r0;
        /* 0x10000255c: sturb wzr, [x29, #-0x51] */
        r0 = 0x100379078;
        r1 = *([x1, #0x3c0]);
        r2 = *([x2, #0x4c0]);
        r3 = *([x3, #0x1e8]);
        r0 = flirt_stack_canary_check_guard_8630(0x100379078, 0x10036d000);
        r4 = r0;
        r8 = &stack_buf_48; // [fp - 0x48]
        r1 = &stack_buf_51; // [fp - 0x51]
        r0 = r20;
        r27 = *([x29, #-0x78]);
        r2 = r27;
        r3 = r20;
        r20 = r28;
        r21 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_27e0(r0, &stack_buf_51);
        r24 = r21;
        if (r21 != 0) {
            // [Block 0x1000025b4 | PostDom: 0x1000026bc]
            r8 = ((UltronContext *)r19)->session_flags;
            r0 = r20;
            r1 = r27;
            r0 = x8(r27, r27);
            r23 = *([x29, #-0x68]);
        } else {
            // [Block 0x1000025cc | PostDom: 0x1000026ac]
            r0 = r25;
            r0 = flirt_dyld_stub_binder_trampoline_31a0(r25, r27);
            r8 = *([x29, #-0x48]);
            r23 = *([x29, #-0x68]);
            *([x23]) = r8;
            r0 = 0x100379080;
            r1 = 0x1002d7a68;
            r0 = flirt_swift_bridge_object_retain_7b28(0x100379080, 0x1002d7a68);
            r26 = r0;
            r8 = 1;
            /* 0x1000025fc: sturb w8, [x29, #-0x51] */
            r0 = 0x100379088;
            r1 = *([x1, #0x3c0]);
            r2 = *([x2, #0x1e8]);
            r0 = flirt_stack_canary_check_guard_8584(0x100379088, 0x10036d000);
            r4 = r0;
            r8 = &stack_buf_48; // [fp - 0x48]
            r1 = &stack_buf_51; // [fp - 0x51]
            r0 = r26;
            r2 = r27;
            r3 = r26;
            r21 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_27e0(r0, &stack_buf_51);
            r24 = r21;
            if (r21 == 0) {
                // [Block 0x100002644 | PostDom: 0x1000026ac]
                r0 = *([x29, #-0xa8]);
                r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, &stack_buf_51);
                r8 = *([x29, #-0x48]);
                ((UltronContext *)r23)->session_flags = r8;
                r8 = 2;
                /* 0x100002658: sturb w8, [x29, #-0x48] */
                r0 = 0x100379090;
                r1 = ((VTable_PolymorphicClass_118 *)r1)->vfunc_3;
                r2 = ((_TtC5Lumio10PixelScene *)r2)->lightNode;
                r0 = flirt_pthread_mutex_scoped_lock_869c(0x100379090, 0x10036b000);
                r28 = r0;
                r1 = &stack_buf_48; // [fp - 0x48]
                r26 = r22;
                r8 = r22;
                r22 = *([x29, #-0x70]);
                r0 = r22;
                r2 = r27;
                r3 = r22;
                r4 = r28;
                r21 = r24;
                r0 = flirt_dyld_stub_binder_trampoline_2798(0x10036d000, &stack_buf_48);
                r24 = r21;
                if (r21 == 0) { goto loc_1000026f0; }
            }
            // [Block 0x1000026ac | PostDom: 0x1000026bc]
            r8 = ((UltronContext *)r19)->session_flags;
            r0 = r20;
            r1 = r27;
            r0 = x8(r27, r27);
        }
    }
loc_1000026bc:
    r0 = *([x29, #-0x60]);
    r0 = flirt_objc_retain_release_thunk_8528(r0, r27);
    r0 = r23;
    r0 = flirt_pthread_mutex_scoped_lock_8548(r0, r27);
    r21 = r24;
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x1000026dc: ldp x23, x22, [sp, #0x30] */
    /* 0x1000026e0: ldp x25, x24, [sp, #0x20] */
    /* 0x1000026e4: ldp x27, x26, [sp, #0x10] */
    r28 = stack_buf_50[0x60];
    return r0;
}

// ── flirt_objc_retain_release_thunk_26f0 @ 0x1000026f0 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_26f0 ───
// Stack Frame: 16B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_objc_retain_release_thunk_26f0(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_48[72]; // [fp - 0x48]
    r2 = 0x100378fb8;
    r3 = 0x1002d90f0;
    r8 = *([x29, #-0xb0]);
    r1 = r23 + r8;
    r0 = r26;
    r0 = flirt_pthread_mutex_scoped_lock_87a8(r26, r1);
    r8 = 3;
    /* 0x100002714: sturb w8, [x29, #-0x48] */
    r1 = &stack_buf_48; // [fp - 0x48]
    r25 = *([x29, #-0x98]);
    r8 = r25;
    r0 = r22;
    r2 = r27;
    r3 = r22;
    r4 = r28;
    r21 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_2798(r22, &stack_buf_48);
    r24 = r21;
    r8 = ((UltronContext *)r19)->session_flags;
    r0 = r20;
    r1 = r27;
    r0 = x8(r20, r27);
    if (r24 != 0) { goto loc_1000026bc; }
    // [Block 0x100002754 | PostDom: exit]
    r2 = 0x100378fb8;
    r3 = 0x1002d90f0;
    r8 = *([x29, #-0xb8]);
    r1 = r23 + r8;
    r0 = r25;
    r0 = flirt_pthread_mutex_scoped_lock_87a8(r25, r27);
    r0 = r23;
    r1 = *([x29, #-0xa0]);
    r0 = flirt_pthread_mutex_scoped_lock_85ec(r23, r27);
    goto loc_1000026bc;
    // [Block 0x100002784 | PostDom: exit]
    r29 = sp;
    r0 = flirt_objc_retain_release_thunk_2360(r0, r27);
    return r0;
}

// ── flirt_cxx_exception_landing_pad_2798 @ 0x100002798 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_2798 ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t flirt_cxx_exception_landing_pad_2798(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = flirt_stack_canary_check_guard_2124(r0, r1);
    return r0;
}

// ── flirt_fast_memcpy_vec_27ac @ 0x1000027ac (17 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_27ac ───
// Stack Frame: 0B | Basic Blocks: 17 | Natural Loops: 6 | Post-Dom Nodes: 17 | Callers: 1
int64_t flirt_fast_memcpy_vec_27ac(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_28[56]; // [sp + 0x28]
    uint8_t stack_buf_60[48]; // [sp + 0x60]
    uint8_t stack_buf_90[16]; // [sp + 0x90]
    /* 0x1000027b0: stp d9, d8, [sp, #0xd0] */
    /* 0x1000027b4: stp x28, x27, [sp, #0xe0] */
    /* 0x1000027b8: stp x26, x25, [sp, #0xf0] */
    /* 0x1000027bc: stp x24, x23, [sp, #0x100] */
    r9 = *([x8, #0xd58]);
    r8 = *([x20, x9]);
    if (r8 != 0) { goto loc_100002ed0; }
    // [Block 0x1000027e0 | PostDom: 0x1000028e0]
    ((UltronContext *)sp)->payload_length = r9;
    r0 = *([x8, #0x480]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, r1);
    ((UltronContext *)sp)->target_buffer = r0;
    r0 = flirt_dyld_stub_binder_trampoline_67c0(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r19 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_4d60(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r22 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r1);
    r8 = *([x8, #0x678]);
    r19 = *([x8]);
    r0 = 0x10035c218;
    r1 = 0x18;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
    r21 = r0;
    r0 = r0 + 0x10;
    r1 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_33b0(r0, r20);
    r2 = 0x1000092f0;
    r0 = r22;
    r1 = r19;
    r3 = r21;
    r0 = flirt_memmove_overlap_safe_32c4(r0, r0);
    r0 = r21;
    r1 = 2;
    r0 = flirt_dyld_stub_binder_trampoline_33a4(r0, 2);
    r8 = *([x8, #0x6a8]);
    r9 = *([x9, #0x688]);
    r19 = *([x8]);
    r23 = *([x9]);
    /* 0x100002890: stp x19, x23, [sp, #0xb0] */
    r8 = *([x8, #0x6a0]);
    r25 = *([x8]);
    ((_TtC5Lumio10PixelScene *)sp)->input = r25;
    r24 = *([x8, #0xd60]);
    r0 = *([x8, #0x488]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, 2);
    ((UltronContext *)sp)->crypto_nonce = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_3068(r0, 2);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_3068(r23, 2);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_3068(r25, 2);
    r21 = 0x20;
    d8 = *([x8, #0x900]);
    // [NATURAL LOOP HEADER @ 0x1000028e0 (Nesting #1)]
    do {
        r8 = &stack_buf_90; // [sp + 0x90]
        r19 = stack_buf_90[0x0];
        r0 = 0x10035c218;
        r1 = 0x18;
        r2 = 7;
        r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
        r25 = r0;
        r0 = r0 + 0x10;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
        r0 = r25;
        r1 = 2;
        r0 = flirt_dyld_stub_binder_trampoline_33bc(r0, 2);
        r0 = ((UltronContext *)sp)->crypto_nonce;
        r0 = flirt_dyld_stub_binder_trampoline_4bc0(r0, 2);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 2);
        r23 = r0;
        r8 = 0x1000092f8;
        /* 0x100002934: stp x8, x25, [sp, #0x80] */
        r8 = *([x8, #0x480]);
        ((_TtC5Lumio10PixelScene *)sp)->glowNode = r8;
        ((_TtC5Lumio10PixelScene *)sp)->clockNode = d8;
        r9 = 0x1000bddc0;
        r8 = 0x10035c230;
        /* 0x100002958: stp x9, x8, [sp, #0x70] */
        r0 = &stack_buf_60; // [sp + 0x60]
        r0 = flirt_dyld_stub_binder_trampoline_2e58(&stack_buf_60, 2);
        r27 = r0;
        r0 = ((_TtC5Lumio10PixelScene *)sp)->lampGlow;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, 2);
        r0 = r22;
        r2 = r19;
        r3 = 0;
        r4 = r23;
        r5 = r27;
        r0 = flirt_dyld_stub_binder_trampoline_3780(r0, 2);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 2);
        r26 = r0;
        r0 = r27;
        r0 = flirt_dyld_stub_binder_trampoline_2e64(r0, 2);
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 2);
        r0 = r20 + r24;
        r1 = &stack_buf_60; // [sp + 0x60]
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_60);
        r27 = *([x20, x24]);
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, &stack_buf_60);
        r23 = r0;
        r0 = r27;
        r0 = flirt_dyld_stub_binder_trampoline_3374(r0, &stack_buf_60);
        *([x20, x24]) = r27;
        if ((r0 & (1 << 0)) == 0) { goto loc_100002a1c; }
        // [NATURAL WHILE-LOOP HEADER @ 0x1000029d8 (Nesting #2)]
        /* 0x1000029d8: ldp x19, x8, [x27, #0x10] */
        r28 = r19 + 1;
        while (r19 < x8) {
            // [NATURAL WHILE-LOOP HEADER @ 0x1000029e8 (Nesting #3)]
            ((UltronContext *)r27)->target_buffer = r28;
            r8 = r27 + r19;
            /* 0x1000029f0: stp x23, x26, [x8, #0x20] */
            *([x20, x24]) = r27;
            r0 = &stack_buf_60; // [sp + 0x60]
            r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_60, &stack_buf_60);
            r0 = r25;
            r1 = 2;
            r0 = flirt_dyld_stub_binder_trampoline_33a4(r0, 2);
            r21 = r21 + 8;
            while (r21 == 0x38) {
                // [Block 0x100002a18 | PostDom: 0x100002a60]
                goto loc_100002a60;
                // [Block 0x100002a1c | PostDom: exit]
                r8 = ((UltronContext *)r27)->target_buffer;
                r1 = r8 + 1;
                r0 = 0;
                r2 = 1;
                r3 = r27;
                r0 = flirt_fast_memcpy_vec_5d94(0, 2);
                r27 = r0;
                *([x20, x24]) = r0;
            } // end while-loop -> 0x1000029d8
            // [Block 0x100002a40 | PostDom: exit]
            /* 0x100002a44: cset w0, hi */
            r1 = r28;
            r2 = 1;
            r3 = r27;
            r0 = flirt_fast_memcpy_vec_5d94(r0, r28);
            r27 = r0;
        } // end while-loop -> 0x1000029e8
        // [Block 0x100002a60 | PostDom: 0x100002ac4]
        r0 = 0;
        r0 = flirt_objc_retain_release_thunk_932c(0, r28);
        r2 = r0;
        r8 = &stack_buf_90; // [sp + 0x90]
        r0 = r8 + 0x20;
        r1 = 3;
        ((UltronContext *)sp)->session_flags = r2;
        r0 = flirt_dyld_stub_binder_trampoline_3164(r0, 3);
        r8 = *([x8, #0x680]);
        r0 = *([x8]);
        r8 = *([x8, #0x690]);
        r19 = *([x8]);
        /* 0x100002a98: stp x0, x19, [sp, #0x48] */
        r8 = *([x8, #0x698]);
        r22 = *([x8]);
        ((_TtC5Lumio10PixelScene *)sp)->lightNode = r22;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, 3);
        r0 = r19;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, 3);
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, 3);
        r21 = 0x20;
        // [NATURAL LOOP HEADER @ 0x100002ac4 (Nesting #2)]
        do {
            r8 = &stack_buf_28; // [sp + 0x28]
            r19 = stack_buf_28[0x0];
            r0 = 0x10035c218;
            r1 = 0x18;
            r2 = 7;
            r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
            r26 = r0;
            r0 = r0 + 0x10;
            r1 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
            r0 = r26;
            r1 = 2;
            r0 = flirt_dyld_stub_binder_trampoline_33bc(r0, 2);
            r0 = ((UltronContext *)sp)->crypto_nonce;
            r0 = flirt_dyld_stub_binder_trampoline_4bc0(r0, 2);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 2);
            r22 = r0;
            r8 = 0x100009340;
            /* 0x100002b18: stp x8, x26, [sp, #0x80] */
            r8 = *([x8, #0x480]);
            ((_TtC5Lumio10PixelScene *)sp)->glowNode = r8;
            ((_TtC5Lumio10PixelScene *)sp)->clockNode = d8;
            r9 = 0x1000bddc0;
            r8 = 0x10035c258;
            /* 0x100002b3c: stp x9, x8, [sp, #0x70] */
            r0 = &stack_buf_60; // [sp + 0x60]
            r0 = flirt_dyld_stub_binder_trampoline_2e58(&stack_buf_60, 2);
            r28 = r0;
            r0 = ((_TtC5Lumio10PixelScene *)sp)->lampGlow;
            r0 = flirt_dyld_stub_binder_trampoline_3398(r0, 2);
            r0 = r23;
            r2 = r19;
            r3 = 0;
            r4 = r22;
            r5 = r28;
            r0 = flirt_dyld_stub_binder_trampoline_3780(r0, 2);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 2);
            r27 = r0;
            r0 = r28;
            r0 = flirt_dyld_stub_binder_trampoline_2e64(r0, 2);
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 2);
            r0 = r20 + r24;
            r1 = &stack_buf_60; // [sp + 0x60]
            r2 = 0x21;
            r3 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_60);
            r28 = *([x20, x24]);
            r0 = r23;
            r0 = flirt_dyld_stub_binder_trampoline_3068(r0, &stack_buf_60);
            r22 = r0;
            r0 = r28;
            r0 = flirt_dyld_stub_binder_trampoline_3374(r0, &stack_buf_60);
            *([x20, x24]) = r28;
            if ((r0 & (1 << 0)) == 0) { goto loc_100002c00; }
            // [NATURAL WHILE-LOOP HEADER @ 0x100002bbc (Nesting #3)]
            /* 0x100002bbc: ldp x25, x8, [x28, #0x10] */
            r19 = r25 + 1;
            while (r25 < x8) {
                // [NATURAL WHILE-LOOP HEADER @ 0x100002bcc (Nesting #4)]
                ((UltronContext *)r28)->target_buffer = r19;
                r8 = r28 + r25;
                /* 0x100002bd4: stp x22, x27, [x8, #0x20] */
                *([x20, x24]) = r28;
                r0 = &stack_buf_60; // [sp + 0x60]
                r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_60, &stack_buf_60);
                r0 = r26;
                r1 = 2;
                r0 = flirt_dyld_stub_binder_trampoline_33a4(r0, 2);
                r21 = r21 + 8;
                while (r21 == 0x38) {
                    // [Block 0x100002bfc | PostDom: 0x100002c44]
                    goto loc_100002c44;
                    // [Block 0x100002c00 | PostDom: exit]
                    r8 = ((UltronContext *)r28)->target_buffer;
                    r1 = r8 + 1;
                    r0 = 0;
                    r2 = 1;
                    r3 = r28;
                    r0 = flirt_fast_memcpy_vec_5d94(0, 2);
                    r28 = r0;
                    *([x20, x24]) = r0;
                } // end while-loop -> 0x100002bbc
                // [Block 0x100002c24 | PostDom: exit]
                /* 0x100002c28: cset w0, hi */
                r1 = r19;
                r2 = 1;
                r3 = r28;
                r0 = flirt_fast_memcpy_vec_5d94(r0, r0);
                r28 = r0;
            } // end while-loop -> 0x100002bcc
            // [Block 0x100002c44 | PostDom: 0x100002ed0]
            r8 = &stack_buf_28; // [sp + 0x28]
            r0 = r8 + 0x20;
            r1 = 3;
            r2 = ((UltronContext *)sp)->session_flags;
            r0 = flirt_dyld_stub_binder_trampoline_3164(r0, 3);
            r0 = *([x8, #0x490]);
            r0 = flirt_dyld_stub_binder_trampoline_3050(r0, 3);
            r0 = flirt_dyld_stub_binder_trampoline_3f40(r0, 3);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 3);
            r21 = r0;
            r8 = "com.apple.screenIsLocked";
            r8 = r8 - 0x20;
            r25 = 0x18;
            r25 = 0xd000000000000018; // movk lsl #48
            r1 = r8 | 0x8000000000000000;
            r0 = 0x18;
            r0 = 0xd000000000000018; // movk lsl #48
            r0 = flirt_dyld_stub_binder_trampoline_1ea4(0xd000000000000018, 3);
            r19 = r0;
            r23 = 0x10035c218;
            r0 = r23;
            r1 = 0x18;
            r2 = 7;
            r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
            r24 = r0;
            r0 = r0 + 0x10;
            r1 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
            r0 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_33b0(r0, r20);
            r2 = 0x100009e30;
            r0 = r21;
            r1 = r19;
            r3 = r24;
            r0 = flirt_memmove_overlap_safe_32c4(r0, r0);
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
            r0 = r24;
            r1 = 2;
            r0 = flirt_dyld_stub_binder_trampoline_33a4(r0, 2);
            r8 = "com.apple.screenIsUnlocked";
            r8 = r8 - 0x20;
            r0 = r25 | 2;
            r1 = r8 | 0x8000000000000000;
            r0 = flirt_dyld_stub_binder_trampoline_1ea4(r0, 2);
            r19 = r0;
            r0 = r23;
            r1 = 0x18;
            r2 = 7;
            r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
            r24 = r0;
            r0 = r0 + 0x10;
            r1 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
            r0 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_33b0(r0, r20);
            r2 = 0x100009e34;
            r0 = r21;
            r1 = r19;
            r3 = r24;
            r0 = flirt_memmove_overlap_safe_32c4(r0, r0);
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
            r0 = r24;
            r1 = 2;
            r0 = flirt_dyld_stub_binder_trampoline_33a4(r0, 2);
            r0 = r23;
            r1 = 0x18;
            r2 = 7;
            r0 = flirt_dyld_stub_binder_trampoline_314c(0x10035c218, 0x18);
            r19 = r0;
            r0 = r0 + 0x10;
            r1 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_34a0(r0, r20);
            r8 = flirt_dyld_stub_binder_trampoline_9358; // 0x100009358
            /* 0x100002d90: stp x8, x19, [sp, #0x80] */
            r8 = *([x8, #0x480]);
            ((_TtC5Lumio10PixelScene *)sp)->glowNode = r8;
            ((_TtC5Lumio10PixelScene *)sp)->clockNode = d8;
            r8 = 0x10017917c;
            r9 = 0x10035c280;
            /* 0x100002db4: stp x8, x9, [sp, #0x70] */
            r0 = &stack_buf_60; // [sp + 0x60]
            r0 = flirt_dyld_stub_binder_trampoline_2e58(&stack_buf_60, r20);
            r23 = r0;
            r0 = *([x8, #0x498]);
            r0 = flirt_dyld_stub_binder_trampoline_3050(r0, r20);
            r24 = r0;
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_33b0(r0, r20);
            /* 0x100002ddc: fmov d0, #30.00000000 */
            r0 = r24;
            r2 = 1;
            r3 = r23;
            r0 = flirt_dyld_stub_binder_trampoline_6b00(r0, r20);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r20);
            r24 = r0;
            r0 = r23;
            r0 = flirt_dyld_stub_binder_trampoline_2e64(r0, r20);
            r23 = ((_TtC5Lumio10PixelScene *)sp)->lampGlow;
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_3398(r0, r20);
            r0 = r23;
            r0 = flirt_dyld_stub_binder_trampoline_3398(r0, r20);
            /* 0x100002e18: fmov d0, #10.00000000 */
            r0 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_6680(r0, r20);
            r0 = *([x8, #0x4a0]);
            r0 = flirt_dyld_stub_binder_trampoline_3050(r0, r20);
            r0 = flirt_dyld_stub_binder_trampoline_4be0(r0, r20);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r20);
            r19 = r0;
            r8 = *([x8, #0x880]);
            r3 = *([x8]);
            r2 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_37e0(r0, r20);
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r8 = ((UltronContext *)sp)->payload_length;
            r19 = *([x20, x8]);
            *([x20, x8]) = r24;
            r0 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_3068(r0, r20);
            r23 = r0;
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r0 = ((UltronContext *)sp)->target_buffer;
            r0 = flirt_dyld_stub_binder_trampoline_67c0(r0, r20);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r20);
            r19 = r0;
            r0 = flirt_dyld_stub_binder_trampoline_4320(r0, r20);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r20);
            r24 = r0;
            r0 = r19;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r0 = r24;
            r0 = flirt_objc_retain_release_thunk_3060(r0, r20);
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r0 = r23;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            r0 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r20);
            // [Block 0x100002ed0 | PostDom: exit]
            /* 0x100002edc: ldp x24, x23, [sp, #0x100] */
            /* 0x100002ee0: ldp x26, x25, [sp, #0xf0] */
            /* 0x100002ee4: ldp x28, x27, [sp, #0xe0] */
            /* 0x100002ee8: ldp d9, d8, [sp, #0xd0] */
            return r0;
}

// ── flirt_memmove_overlap_safe_2ef4 @ 0x100002ef4 (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_memmove_overlap_safe_2ef4 ───
// Stack Frame: 0B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 1
int64_t flirt_memmove_overlap_safe_2ef4(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[40]; // [sp + 0x8]
    uint8_t stack_buf_30[16]; // [sp + 0x30]
    r19 = r1;
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_170(r0, r1);
    if (r0 == 0) { goto loc_100002fec; }
    // [Block 0x100002f18 | PostDom: 0x100003010]
    r20 = r0;
    r8 = *([x8, #0x670]);
    r0 = *([x8]);
    r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, r1);
    r21 = r1;
    /* 0x100002f30: stp x0, x1, [sp, #0x30] */
    r0 = r1;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(r1, r1);
    r1 = *([x1, #0x398]);
    r2 = *([x2, #0x3a8]);
    r8 = &stack_buf_8; // [sp + 0x8]
    r0 = &stack_buf_30; // [sp + 0x30]
    r0 = flirt_dyld_stub_binder_trampoline_260c(&stack_buf_30, 0x10036d000);
    r8 = ((UltronContext *)r20)->target_buffer;
    if (r8 == 0) { goto loc_100002fd4; }
    // [Block 0x100002f60 | PostDom: 0x100003010]
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_cxx_exception_landing_pad_4e50(&stack_buf_8, 0x10036d000);
    if ((r1 & (1 << 0)) == 0) { goto loc_100002fd4; }
    // [Block 0x100002f6c | PostDom: 0x100003010]
    r8 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_5;
    r0 = r8 + r0;
    r1 = &stack_buf_30; // [sp + 0x30]
    r0 = flirt_fast_memcpy_vec_9418(r0, &stack_buf_30);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r1, &stack_buf_30);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_fast_memcpy_vec_93a0(&stack_buf_8, &stack_buf_30);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, &stack_buf_30);
    r8 = ((VTable_PolymorphicClass_46 *)sp)->vfunc_7;
    if (r8 == 0) { goto loc_100002ff4; }
    // [Block 0x100002f9c | PostDom: 0x100003010]
    r0 = 0;
    r0 = sub_1000093d4(0, &stack_buf_30);
    r3 = r0;
    r8 = *([x8, #0xa00]);
    r0 = &stack_buf_8; // [sp + 0x8]
    r1 = &stack_buf_30; // [sp + 0x30]
    r2 = 0x10036d008;
    r4 = 6;
    r0 = flirt_dyld_stub_binder_trampoline_31f4(&stack_buf_8, &stack_buf_30);
    r8 = ((UltronContext *)sp)->session_flags;
    r21 = (r0 != 0) ? r8 : 0;
    goto loc_100003010;
    // [Block 0x100002fd4 | PostDom: 0x100002fec]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, &stack_buf_30);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r1, &stack_buf_30);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_fast_memcpy_vec_93a0(&stack_buf_8, &stack_buf_30);
    // [Block 0x100002fec | PostDom: 0x100002ff4]
    /* 0x100002fec: movi v0.2d, #0000000000000000 */
    /* 0x100002ff0: stp q0, q0, [sp, #0x30] */
    // [Block 0x100002ff4 | PostDom: 0x100003010]
    r1 = 0x10037e920;
    r2 = 0x1002d7ab0;
    r0 = &stack_buf_30; // [sp + 0x30]
    r0 = flirt_pthread_mutex_scoped_lock_9360(&stack_buf_30, 0x10037e920);
    r21 = 0;
    // [Block 0x100003010 | PostDom: 0x100003044]
    r0 = r19 + 0x10;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_8);
    r0 = r19 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_34ac(r0, &stack_buf_8);
    if (r0 != 0) {
        // [Block 0x100003030 | PostDom: 0x100003044]
        r20 = r0;
        r0 = r21;
        r0 = flirt_objc_retain_release_thunk_3060(0, &stack_buf_8);
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, &stack_buf_8);
    }
    // [Block 0x100003044 | PostDom: exit]
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_305c(0, &stack_buf_8);
    return r0;
}

// ── flirt_objc_retain_release_thunk_3060 @ 0x100003060 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_3060 ───
// Stack Frame: 96B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 2
int64_t flirt_objc_retain_release_thunk_3060(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_68[24]; // [fp - 0x68]
    /* 0x100003060: stp x28, x27, [sp, #-0x60]! */
    /* 0x100003064: stp x26, x25, [sp, #0x10] */
    /* 0x100003068: stp x24, x23, [sp, #0x20] */
    r24 = r0;
    r0 = 0x1003790d8;
    r1 = 0x1002d7a90;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d8, 0x1002d7a90);
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r23 = r9 - r12;
    sp = r23;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r8 = sp;
    r19 = r8 - r12;
    sp = r19;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7a90);
    r21 = r0;
    r27 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r22 = r9 - r8;
    sp = r22;
    r8 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 0x1002d7a90);
    r0 = r22;
    r0 = flirt_string_length_scan_3e50(r22, 0x1002d7a90);
    if (r24 == 0) { goto loc_100003224; }
    // [Block 0x10000312c | PostDom: 0x100003298]
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_3a20(r0, 0x1002d7a90);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
    if (r0 == 0) { goto loc_100003224; }
    // [Block 0x100003140 | PostDom: 0x10000319c]
    r26 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, 0x1002d7a90);
    r23 = r0;
    r25 = r1;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
    /* 0x100003158: stp x23, x25, [x19] */
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(0x1002d7a90, 0x1002d7a90);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_4b00(r0, 0x1002d7a90);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
    if (r0 != 0) {
        // [Block 0x100003178 | PostDom: 0x10000319c]
        r24 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, 0x1002d7a90);
        r23 = r0;
        r26 = r1;
        r0 = r25;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(0x1002d7a90, 0x1002d7a90);
        r0 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
        r25 = r26;
    }
    // [Block 0x10000319c | PostDom: 0x100003298]
    /* 0x10000319c: stp x23, x25, [x19, #0x10] */
    r0 = 0x100378db8;
    r1 = 0x1002d7960;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
    r23 = r0;
    r8 = ((VTable_PolymorphicClass_118 *)r0)->vfunc_6;
    r9 = ((UltronContext *)r27)->crypto_nonce;
    r0 = r19 + r8;
    r1 = r22;
    r2 = r21;
    r0 = x9(r0, r22);
    r8 = *([x23, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
    r0 = r19;
    r1 = 0;
    r2 = 1;
    r3 = r23;
    r0 = x8(r19, 0);
    r21 = *([x8, #0xd40]);
    r0 = r20 + r21;
    r1 = &stack_buf_68; // [fp - 0x68]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_68);
    r2 = 0x1003790d8;
    r3 = 0x1002d7a90;
    r1 = r20 + r21;
    r0 = r19;
    goto loc_100003298;
    // [Block 0x100003224 | PostDom: 0x100003298]
    r8 = ((UltronContext *)r27)->session_flags;
    r0 = r22;
    r1 = r21;
    r0 = x8(r22, r0);
    r0 = 0x100378db8;
    r1 = 0x1002d7960;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
    r3 = r0;
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
    r0 = r23;
    r1 = 1;
    r2 = 1;
    r0 = x8(r0, 1);
    r19 = *([x8, #0xd40]);
    r0 = r20 + r19;
    r1 = &stack_buf_68; // [fp - 0x68]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_68);
    r2 = 0x1003790d8;
    r3 = 0x1002d7a90;
    r1 = r20 + r19;
    r0 = r23;
    // [Block 0x100003298 | PostDom: exit]
    r0 = flirt_pthread_mutex_scoped_lock_87a8(r0, &stack_buf_68);
    r0 = &stack_buf_68; // [fp - 0x68]
    r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_68, &stack_buf_68);
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x1000032b4: ldp x24, x23, [sp, #0x20] */
    /* 0x1000032b8: ldp x26, x25, [sp, #0x10] */
    /* 0x1000032bc: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── flirt_memmove_overlap_safe_32c4 @ 0x1000032c4 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_memmove_overlap_safe_32c4 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 3
int64_t flirt_memmove_overlap_safe_32c4(int64_t arg0, int64_t arg1) {
    /* 0x1000032c8: stp x26, x25, [sp, #0x30] */
    /* 0x1000032cc: stp x24, x23, [sp, #0x40] */
    r21 = r3;
    r22 = r2;
    r23 = r1;
    r19 = r0;
    r0 = *([x8, #0x488]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_4bc0(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r24 = r0;
    r8 = *([x8, #0x480]);
    *([sp]) = r8;
    d0 = *([x8, #0x900]);
    ((UltronContext *)sp)->session_flags = d0;
    r8 = 0x1000bddc0;
    r9 = 0x10035c2a8;
    /* 0x100003338: stp x8, x9, [sp, #0x10] */
    r0 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_2e58(sp, r1);
    r22 = r0;
    r25 = ((VTable_PolymorphicClass_118 *)sp)->vfunc_3;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_33b0(r3, r1);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_3398(r25, r1);
    r0 = r19;
    r2 = r23;
    r3 = 0;
    r4 = r24;
    r5 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_3780(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r21 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_2e64(r0, r1);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r1);
    r24 = *([x8, #0xd60]);
    r0 = r20 + r24;
    r1 = sp;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, sp);
    r22 = *([x20, x24]);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_3068(r0, sp);
    r19 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_3374(r0, sp);
    *([x20, x24]) = r22;
    if ((r0 & (1 << 0)) == 0) { goto loc_100003410; }
    // [Block 0x1000033cc | PostDom: 0x1000033dc]
    /* 0x1000033cc: ldp x25, x8, [x22, #0x10] */
    r23 = r25 + 1;
    if (r25 >= x8) { goto loc_100003434; }
    // [Block 0x1000033dc | PostDom: exit]
    ((UltronContext *)r22)->target_buffer = r23;
    r8 = r22 + r25;
    /* 0x1000033e4: stp x19, x21, [x8, #0x20] */
    *([x20, x24]) = r22;
    r0 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_3224(sp, sp);
    /* 0x100003400: ldp x24, x23, [sp, #0x40] */
    /* 0x100003404: ldp x26, x25, [sp, #0x30] */
    return r0;
}

// ── flirt_cxx_exception_landing_pad_3410 @ 0x100003410 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_3410 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_cxx_exception_landing_pad_3410(int64_t arg0, int64_t arg1) {
    r8 = ((UltronContext *)r22)->target_buffer;
    r1 = r8 + 1;
    r0 = 0;
    r2 = 1;
    r3 = r22;
    r0 = flirt_fast_memcpy_vec_5d94(0, r1);
    r22 = r0;
    *([x20, x24]) = r0;
    goto loc_1000033cc;
    // [Block 0x100003434 | PostDom: exit]
    /* 0x100003438: cset w0, hi */
    r1 = r23;
    r2 = 1;
    r3 = r22;
    r0 = flirt_fast_memcpy_vec_5d94(r0, r23);
    r22 = r0;
    goto loc_1000033dc;
}

// ── flirt_byte_memset_loop_3454 @ 0x100003454 (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_byte_memset_loop_3454 ───
// Stack Frame: 96B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 1
int64_t flirt_byte_memset_loop_3454(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_68[24]; // [fp - 0x68]
    /* 0x100003454: stp x28, x27, [sp, #-0x60]! */
    /* 0x100003458: stp x26, x25, [sp, #0x10] */
    /* 0x10000345c: stp x24, x23, [sp, #0x20] */
    r23 = r0;
    r24 = r0 & 1;
    r0 = 0x1003790d8;
    r1 = 0x1002d7a90;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d8, 0x1002d7a90);
    r8 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r19 = r9 - r8;
    sp = r19;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7a90);
    r21 = r0;
    r28 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r28)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r22 = r9 - r8;
    sp = r22;
    r25 = *([x8, #0xd50]);
    r8 = *([x20, x25]);
    if (r24 != w8) {
        // [Block 0x100003504 | PostDom: 0x100003698]
        r8 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 0x1002d7a90);
        r0 = r22;
        r0 = flirt_string_length_scan_3e50(r22, 0x1002d7a90);
        *([x20, x25]) = r24;
        if ((r23 & (1 << 0)) != 0) { goto loc_1000035d0; }
        // [Block 0x10000351c | PostDom: 0x100003698]
        r0 = *([x8, #0x480]);
        r0 = flirt_dyld_stub_binder_trampoline_3050(r0, 0x1002d7a90);
        r0 = flirt_dyld_stub_binder_trampoline_67c0(r0, 0x1002d7a90);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
        r24 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_4320(r0, 0x1002d7a90);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
        r23 = r0;
        r0 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
        if (r23 == 0) { goto loc_1000035d0; }
        // [Block 0x100003554 | PostDom: 0x100003698]
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_3a20(r0, 0x1002d7a90);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
        if (r0 == 0) { goto loc_1000035e4; }
        // [Block 0x100003568 | PostDom: 0x100003608]
        r26 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, 0x1002d7a90);
        r24 = r0;
        r25 = r1;
        r0 = r26;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
        /* 0x100003580: stp x24, x25, [x19] */
        r0 = r25;
        r0 = flirt_dyld_stub_binder_trampoline_31b8(0x1002d7a90, 0x1002d7a90);
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_4b00(r0, 0x1002d7a90);
        r29 = r29;
        r0 = flirt_dyld_stub_binder_trampoline_3074(r0, 0x1002d7a90);
        if (r0 == 0) { goto loc_100003600; }
        // [Block 0x1000035a0 | PostDom: 0x100003608]
        r26 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, 0x1002d7a90);
        r24 = r0;
        r27 = r1;
        r0 = r25;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(0x1002d7a90, 0x1002d7a90);
        r0 = r26;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1002d7a90);
        r25 = r27;
        goto loc_100003608;
        // [Block 0x1000035d0 | PostDom: 0x100003698]
        r8 = ((UltronContext *)r28)->session_flags;
        r0 = r22;
        r1 = r21;
        r0 = x8(r22, r0);
        goto loc_100003698;
        // [Block 0x1000035e4 | PostDom: 0x100003698]
        r8 = ((UltronContext *)r28)->session_flags;
        r0 = r22;
        r1 = r21;
        r0 = x8(r22, r0);
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
        goto loc_100003698;
        // [Block 0x100003600 | PostDom: 0x100003608]
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
        // [Block 0x100003608 | PostDom: 0x100003698]
        /* 0x100003608: stp x24, x25, [x19, #0x10] */
        r0 = 0x100378db8;
        r1 = 0x1002d7960;
        r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
        r23 = r0;
        r8 = ((VTable_PolymorphicClass_118 *)r0)->vfunc_6;
        r9 = ((UltronContext *)r28)->crypto_nonce;
        r0 = r19 + r8;
        r1 = r22;
        r2 = r21;
        r0 = x9(r0, r22);
        r8 = *([x23, #-8]);
        r8 = @selector(release); // [0x100377038]
        r0 = r19;
        r1 = 0;
        r2 = 1;
        r3 = r23;
        r0 = x8(r19, 0);
        r21 = *([x8, #0xd40]);
        r0 = r20 + r21;
        r1 = &stack_buf_68; // [fp - 0x68]
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_68);
        r2 = 0x1003790d8;
        r3 = 0x1002d7a90;
        r1 = r20 + r21;
        r0 = r19;
        r0 = flirt_pthread_mutex_scoped_lock_87a8(r19, &stack_buf_68);
        r0 = &stack_buf_68; // [fp - 0x68]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_68, &stack_buf_68);
    }
loc_100003698:
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x1000036a8: ldp x24, x23, [sp, #0x20] */
    /* 0x1000036ac: ldp x26, x25, [sp, #0x10] */
    /* 0x1000036b0: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── flirt_string_length_scan_36b8 @ 0x1000036b8 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_string_length_scan_36b8 ───
// Stack Frame: 64B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 1
int64_t flirt_string_length_scan_36b8(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_30[48]; // [fp - 0x30]
    uint8_t stack_buf_48[24]; // [fp - 0x48]
    /* 0x1000036b8: stp x24, x23, [sp, #-0x40]! */
    r20 = r1;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, r1);
    r19 = r0;
    r22 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r22)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r21 = r9 - r8;
    sp = r21;
    r0 = r20 + 0x10;
    r1 = &stack_buf_48; // [fp - 0x48]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_48);
    r0 = r20 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_34ac(r0, &stack_buf_48);
    if (r0 != 0) {
        // [Block 0x10000372c | PostDom: 0x100003768]
        r20 = r0;
        r23 = *([x8, #0xd50]);
        r8 = *([x0, x23]);
        if ((r8 & (1 << 0)) == 0) {
            // [Block 0x100003740 | PostDom: 0x100003768]
            r8 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_71c(r0, &stack_buf_48);
            r0 = r21;
            r0 = flirt_string_length_scan_3e50(r21, &stack_buf_48);
            r8 = ((UltronContext *)r22)->session_flags;
            r0 = r21;
            r1 = r19;
            r0 = x8(r21, r0);
            r8 = 1;
            *([x20, x23]) = r8;
        }
        // [Block 0x100003768 | PostDom: 0x100003770]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, r0);
    }
    // [Block 0x100003770 | PostDom: exit]
    sp = &stack_buf_30; // [fp - 0x30]
    /* 0x100003780: ldp x24, x23, [sp], #0x40 */
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_3788 @ 0x100003788 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_3788 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_pthread_mutex_scoped_lock_3788(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = r1;
    r0 = r1 + 0x10;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_8);
    r0 = r19 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_34ac(r0, &stack_buf_8);
    if (r0 != 0) {
        // [Block 0x1000037bc | PostDom: 0x1000037d0]
        r20 = r0;
        r0 = 0;
        r0 = flirt_byte_memset_loop_3454(0, &stack_buf_8);
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, &stack_buf_8);
    }
    // [Block 0x1000037d0 | PostDom: exit]
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_37e0 @ 0x1000037e0 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_37e0 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_pthread_mutex_scoped_lock_37e0(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = r1;
    r0 = r1 + 0x10;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_8);
    r0 = r19 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_34ac(r0, &stack_buf_8);
    if (r0 != 0) {
        // [Block 0x100003814 | PostDom: 0x100003824]
        r20 = r0;
        r0 = flirt_byte_memset_loop_3834(r0, &stack_buf_8);
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, &stack_buf_8);
    }
    // [Block 0x100003824 | PostDom: exit]
    return r0;
}

// ── flirt_byte_memset_loop_3834 @ 0x100003834 (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_byte_memset_loop_3834 ───
// Stack Frame: 112B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 1
int64_t flirt_byte_memset_loop_3834(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_60[96]; // [fp - 0x60]
    uint8_t stack_buf_78[24]; // [fp - 0x78]
    uint8_t stack_buf_90[24]; // [fp - 0x90]
    /* 0x100003834: stp d9, d8, [sp, #-0x70]! */
    /* 0x100003838: stp x28, x27, [sp, #0x10] */
    /* 0x10000383c: stp x26, x25, [sp, #0x20] */
    /* 0x100003840: stp x24, x23, [sp, #0x30] */
    r19 = r20;
    r0 = 0x1003790d8;
    r1 = 0x1002d7a90;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d8, 0x1002d7a90);
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r24 = r9 - r12;
    sp = r24;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r8 = sp;
    r20 = r8 - r12;
    sp = r20;
    r0 = 0x100378db8;
    r1 = 0x1002d7960;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
    r27 = r0;
    r8 = *([x0, #-8]);
    *([x29, #-0x98]) = r8;
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    *([x29, #-0xa8]) = r9;
    sp = r9;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r9 = r9 - r12;
    *([x29, #-0xa0]) = r9;
    sp = r9;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r8 = sp;
    r28 = r8 - r12;
    sp = r28;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7960);
    r21 = r0;
    r25 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r25)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r23 = r9 - r12;
    sp = r23;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r8 = sp;
    r22 = r8 - r12;
    sp = r22;
    r8 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 0x1002d7960);
    r0 = 0;
    r1 = -1;
    r0 = flirt_dyld_stub_binder_trampoline_2c84(0, -1);
    r26 = *([x8, #0xd48]);
    r8 = *([x19, x26]);
    if ((r8 & (1 << 0)) == 0) { goto loc_100003a4c; }
    // [Block 0x1000039b8 | PostDom: 0x100003bec]
    r8 = 0xc00000000000;
    r8 = 0x4072c00000000000; // movk lsl #48
    /* 0x1000039c0: fmov d1, x8 */
    /* 0x1000039c4: fcmp d0, d1 */
    if (r0 >= 0) { goto loc_100003a60; }
    // [Block 0x1000039cc | PostDom: 0x100003bec]
    v8.16b = v0.16b;
    *([x19, x26]) = 0;
    r26 = *([x8, #0xd40]);
    r0 = r19 + r26;
    r1 = &stack_buf_90; // [fp - 0x90]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_90);
    r2 = 0x1003790d8;
    r3 = 0x1002d7a90;
    *([x29, #-0xb0]) = r26;
    r0 = r19 + r26;
    r1 = r20;
    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, r20);
    r26 = *([x29, #-0x98]);
    r8 = ((VTable_PolymorphicClass_118 *)r26)->vfunc_4;
    r0 = r20;
    r1 = 1;
    r2 = r27;
    r0 = x8(r20, 1);
    if (r0 != 1) { goto loc_100003aa8; }
    // [Block 0x100003a30 | PostDom: 0x100003bec]
    r1 = 0x1003790d8;
    r2 = 0x1002d7a90;
    r0 = r20;
    r0 = flirt_pthread_mutex_scoped_lock_9360(r20, 0x1003790d8);
    goto loc_100003bec;
    // [Block 0x100003a4c | PostDom: 0x100003bec]
    r8 = 0xc00000000000;
    r8 = 0x4072c00000000000; // movk lsl #48
    /* 0x100003a54: fmov d1, x8 */
    /* 0x100003a58: fcmp d0, d1 */
    if (r0 < 1) {
        // [Block 0x100003a60 | PostDom: 0x100003bec]
        r0 = r22;
        r20 = r19;
        r0 = flirt_string_length_scan_3e50(r22, 0x1003790d8);
    } else {
        // [Block 0x100003a70 | PostDom: 0x100003bec]
        /* 0x100003a70: fneg d0, d0 */
        r8 = r23;
        r20 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_698(r0, 0x1003790d8);
        r0 = r23;
        r20 = r19;
        r0 = flirt_string_length_scan_3e50(r23, 0x1003790d8);
        r8 = ((UltronContext *)r25)->session_flags;
        r0 = r23;
        r1 = r21;
        r0 = x8(r23, r0);
        r8 = 1;
        *([x19, x26]) = r8;
        goto loc_100003bec;
        // [Block 0x100003aa8 | PostDom: 0x100003bec]
        r2 = 0x100378db8;
        r3 = 0x1002d7960;
        r0 = r20;
        r1 = r28;
        r0 = flirt_pthread_mutex_scoped_lock_8760(r20, r28);
        r8 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_6;
        *([x29, #-0xc8]) = r8;
        r0 = r28;
        r20 = *([x29, #-0xa0]);
        r1 = r20;
        r2 = 0x100378db8;
        r3 = 0x1002d7960;
        r0 = flirt_pthread_mutex_scoped_lock_8800(r28, r20);
        r8 = r20;
        /* 0x100003af0: ldp x26, x20, [x20] */
        r0 = ((UltronContext *)r8)->payload_length;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r20);
        r8 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_6;
        *([x29, #-0xb8]) = r8;
        /* 0x100003b04: stp x26, x20, [x24] */
        r0 = r28;
        r26 = *([x29, #-0xa8]);
        r1 = r26;
        r2 = 0x100378db8;
        r3 = 0x1002d7960;
        r0 = flirt_pthread_mutex_scoped_lock_8800(r28, r26);
        r0 = ((UltronContext *)r26)->session_flags;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r26);
        /* 0x100003b30: ldp x8, x9, [x26, #0x10] */
        r10 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_6;
        *([x29, #-0xc0]) = r10;
        /* 0x100003b3c: stp x8, x9, [x24, #0x10] */
        /* 0x100003b40: fneg d0, d8 */
        r8 = *([x29, #-0xc8]);
        r8 = r24 + r8;
        r20 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_698(r0, r26);
        r0 = r28;
        r1 = 0x100378db8;
        r2 = 0x1002d7960;
        r0 = flirt_pthread_mutex_scoped_lock_9360(r28, 0x100378db8);
        r8 = *([x29, #-0x98]);
        r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
        r0 = r24;
        r1 = 0;
        r2 = 1;
        r3 = r27;
        r0 = x8(r24, 0);
        r20 = *([x29, #-0xb0]);
        r0 = r19 + r20;
        r1 = &stack_buf_78; // [fp - 0x78]
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_78);
        r2 = 0x1003790d8;
        r3 = 0x1002d7a90;
        r1 = r19 + r20;
        r0 = r24;
        r0 = flirt_pthread_mutex_scoped_lock_87a8(r24, &stack_buf_78);
        r0 = &stack_buf_78; // [fp - 0x78]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_78, &stack_buf_78);
        r20 = ((UltronContext *)r25)->session_flags;
        r8 = *([x29, #-0xc0]);
        r0 = r26 + r8;
        r1 = r21;
        r0 = x20(r0, r0);
        r8 = *([x29, #-0xa0]);
        r9 = *([x29, #-0xb8]);
        r0 = r8 + r9;
        r1 = r21;
        r0 = x20(r0, r0);
    }
loc_100003bec:
    r20 = *([x8, #0xd68]);
    r0 = r19 + r20;
    r1 = &stack_buf_78; // [fp - 0x78]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_78);
    r8 = ((UltronContext *)r25)->target_buffer;
    r1 = r19 + r20;
    r0 = r23;
    r2 = r21;
    r0 = x8(r23, &stack_buf_78);
    r0 = r23;
    r20 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_68c(r23, &stack_buf_78);
    v8.16b = v0.16b;
    r24 = ((UltronContext *)r25)->session_flags;
    r0 = r23;
    r1 = r21;
    r0 = x24(r23, r0);
    r8 = 0xc00000000000;
    r8 = 0x4072c00000000000; // movk lsl #48
    /* 0x100003c44: fmov d0, x8 */
    /* 0x100003c48: fcmp d8, d0 */
    if (r0 >= 1) {
        // [Block 0x100003c50 | PostDom: 0x100003c58]
        r20 = r19;
        r0 = flirt_fast_memcpy_vec_5528(r0, r0);
    }
    // [Block 0x100003c58 | PostDom: exit]
    r0 = r22;
    r1 = r21;
    r0 = x24(r22, r0);
    sp = &stack_buf_60; // [fp - 0x60]
    /* 0x100003c74: ldp x24, x23, [sp, #0x30] */
    /* 0x100003c78: ldp x26, x25, [sp, #0x20] */
    /* 0x100003c7c: ldp x28, x27, [sp, #0x10] */
    /* 0x100003c80: ldp d9, d8, [sp], #0x70 */
    return r0;
}

// ── flirt_fast_memcpy_vec_3c88 @ 0x100003c88 (9 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_3c88 ───
// Stack Frame: 64B | Basic Blocks: 9 | Natural Loops: 1 | Post-Dom Nodes: 9 | Callers: 1
int64_t flirt_fast_memcpy_vec_3c88(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_30[48]; // [fp - 0x30]
    uint8_t stack_buf_48[24]; // [fp - 0x48]
    uint8_t stack_buf_60[24]; // [fp - 0x60]
    /* 0x100003c88: stp x24, x23, [sp, #-0x40]! */
    r0 = 0x1003790d8;
    r1 = 0x1002d7a90;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d8, 0x1002d7a90);
    r8 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r19 = r9 - r8;
    sp = r19;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7a90);
    r21 = r0;
    r24 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r24)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r22 = r9 - r8;
    sp = r22;
    r23 = *([x8, #0xd58]);
    r8 = *([x20, x23]);
    if (r8 != 0) {
        // [Block 0x100003d24 | PostDom: 0x100003d58]
        r8 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 0x1002d7a90);
        r0 = r22;
        r0 = flirt_string_length_scan_3e50(r22, 0x1002d7a90);
        r8 = ((UltronContext *)r24)->session_flags;
        r0 = r22;
        r1 = r21;
        r0 = x8(r22, r0);
        r0 = flirt_fast_memcpy_vec_5528(r0, r0);
        r0 = *([x20, x23]);
        if (r0 != 0) {
            // [Block 0x100003d50 | PostDom: 0x100003d58]
            r0 = flirt_dyld_stub_binder_trampoline_4860(r0, r0);
            r0 = *([x20, x23]);
        }
        // [Block 0x100003d58 | PostDom: 0x100003db4]
        *([x20, x23]) = 0;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
        r22 = *([x8, #0xd60]);
        r0 = r20 + r22;
        r1 = &stack_buf_48; // [fp - 0x48]
        r2 = 1;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_48);
        r21 = *([x20, x22]);
        r23 = ((UltronContext *)r21)->target_buffer;
        if (r23 != 0) {
            // [Block 0x100003d88 | PostDom: 0x100003d94]
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, &stack_buf_48);
            r24 = r21 + 0x28;
            // [NATURAL LOOP HEADER @ 0x100003d94 (Nesting #1)]
            do {
                /* 0x100003d94: ldp x0, x2, [x24, #-8] */
                r0 = flirt_dyld_stub_binder_trampoline_52c0(r0, &stack_buf_48);
                r24 = r24 + 0x10;
                r23--;
            } while (r23 != 0); // back-edge -> 0x100003d94
            // [Block 0x100003da8 | PostDom: 0x100003db4]
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, &stack_buf_48);
            r21 = *([x20, x22]);
        }
        // [Block 0x100003db4 | PostDom: 0x100003e38]
        r8 = *([x8, #0xa18]);
        *([x20, x22]) = r8;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, &stack_buf_48);
        r0 = 0x100378db8;
        r1 = 0x1002d7960;
        r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
        r3 = r0;
        r8 = *([x0, #-8]);
        r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
        r0 = r19;
        r1 = 1;
        r2 = 1;
        r0 = x8(r19, 1);
        r21 = *([x8, #0xd40]);
        r0 = r20 + r21;
        r1 = &stack_buf_60; // [fp - 0x60]
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_60);
        r2 = 0x1003790d8;
        r3 = 0x1002d7a90;
        r1 = r20 + r21;
        r0 = r19;
        r0 = flirt_pthread_mutex_scoped_lock_87a8(r19, &stack_buf_60);
        r0 = &stack_buf_60; // [fp - 0x60]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_60, &stack_buf_60);
    }
    // [Block 0x100003e38 | PostDom: exit]
    sp = &stack_buf_30; // [fp - 0x30]
    /* 0x100003e48: ldp x24, x23, [sp], #0x40 */
    return r0;
}

// ── flirt_string_length_scan_3e50 @ 0x100003e50 (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_string_length_scan_3e50 ───
// Stack Frame: 112B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 9
int64_t flirt_string_length_scan_3e50(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[8]; // [fp - 0x8]
    uint8_t stack_buf_10[8]; // [fp - 0x10]
    uint8_t stack_buf_18[8]; // [fp - 0x18]
    uint8_t stack_buf_20[8]; // [fp - 0x20]
    uint8_t stack_buf_28[8]; // [fp - 0x28]
    uint8_t stack_buf_30[8]; // [fp - 0x30]
    uint8_t stack_buf_38[8]; // [fp - 0x38]
    uint8_t stack_buf_40[8]; // [fp - 0x40]
    uint8_t stack_buf_48[8]; // [fp - 0x48]
    uint8_t stack_buf_50[8]; // [fp - 0x50]
    uint8_t stack_buf_58[8]; // [fp - 0x58]
    uint8_t stack_buf_60[8]; // [fp - 0x60]
    uint8_t stack_buf_68[8]; // [fp - 0x68]
    uint8_t stack_buf_70[8]; // [fp - 0x70]
    uint8_t stack_buf_78[8]; // [fp - 0x78]
    uint8_t stack_buf_80[8]; // [fp - 0x80]
    uint8_t stack_buf_88[8]; // [fp - 0x88]
    uint8_t stack_buf_90[8]; // [fp - 0x90]
    uint8_t stack_buf_98[8]; // [fp - 0x98]
    uint8_t stack_buf_a0[8]; // [fp - 0xa0]
    uint8_t stack_buf_a8[8]; // [fp - 0xa8]
    uint8_t stack_buf_b0[8]; // [fp - 0xb0]
    uint8_t stack_buf_b8[8]; // [fp - 0xb8]
    uint8_t stack_buf_c0[8]; // [fp - 0xc0]
    uint8_t stack_buf_c8[8]; // [fp - 0xc8]
    uint8_t stack_buf_d0[8]; // [fp - 0xd0]
    uint8_t stack_buf_d8[8]; // [fp - 0xd8]
    uint8_t stack_buf_e0[8]; // [fp - 0xe0]
    uint8_t stack_buf_e8[8]; // [fp - 0xe8]
    uint8_t stack_buf_f0[8]; // [fp - 0xf0]
    uint8_t stack_buf_108[24]; // [fp - 0x108]
    uint8_t stack_buf_110[8]; // [fp - 0x110]
    uint8_t stack_buf_118[8]; // [fp - 0x118]
    uint8_t stack_buf_11c[8]; // [fp - 0x11c]
    uint8_t stack_buf_128[12]; // [fp - 0x128]
    uint8_t stack_buf_12c[8]; // [fp - 0x12c]
    uint8_t stack_buf_138[12]; // [fp - 0x138]
    uint8_t stack_buf_140[8]; // [fp - 0x140]
    // [SWITCH DISPATCH DETECTED @ 0x100003e50: Multi-Way Cascade on r0 (2 cases)]
    switch (r0) { case 0x1: goto loc_1000043b0; case 0x1: goto loc_100004498; }
    /* 0x100003e50: stp d9, d8, [sp, #-0x70]! */
    /* 0x100003e54: stp x28, x27, [sp, #0x10] */
    /* 0x100003e58: stp x26, x25, [sp, #0x20] */
    /* 0x100003e5c: stp x24, x23, [sp, #0x30] */
    *([x29, #-0xc8]) = r0;
    r0 = 0x1003790d0;
    r1 = 0x1002d7a88;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d0, 0x1002d7a88);
    r8 = &stack_buf_10; // [fp - 0x10]
    stack_buf_10[0x0] = r0;
    r8 = *([x0, #-8]);
    r8 = stack_buf_10[0x40];
    r9 = &stack_buf_10;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a88);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_78; // [fp - 0x78]
    stack_buf_78[0x0] = r9;
    sp = r9;
    r9 = &stack_buf_10;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a88);
    r8 = sp;
    r8 = r8 - r12;
    r9 = &stack_buf_58; // [fp - 0x58]
    stack_buf_58[0x0] = r8;
    sp = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_554(0, 0x1002d7a88);
    r8 = &stack_buf_a0; // [fp - 0xa0]
    stack_buf_a0[0x0] = r0;
    r8 = *([x0, #-8]);
    r9 = &stack_buf_a8; // [fp - 0xa8]
    stack_buf_a8[0x0] = r8;
    r8 = stack_buf_a0[0x40];
    r9 = &stack_buf_a0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a88);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    r9 = &stack_buf_b0; // [fp - 0xb0]
    stack_buf_b0[0x0] = r8;
    sp = &stack_buf_a0;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_38(0, 0x1002d7a88);
    r8 = &stack_buf_b8; // [fp - 0xb8]
    stack_buf_b8[0x0] = r0;
    r8 = *([x0, #-8]);
    r9 = &stack_buf_c0; // [fp - 0xc0]
    stack_buf_c0[0x0] = r8;
    r8 = stack_buf_b8[0x40];
    r9 = &stack_buf_b8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a88);
    r9 = &stack_buf_a0;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    r9 = &stack_buf_c8; // [fp - 0xc8]
    stack_buf_c8[0x0] = r8;
    sp = &stack_buf_b8;
    r0 = 0x1003790b8;
    r1 = 0x1002d7a78;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790b8, 0x1002d7a78);
    r8 = *([x0, #-8]);
    r8 = stack_buf_b8[0x40];
    r9 = &stack_buf_b8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = &stack_buf_b8;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_d0; // [fp - 0xd0]
    stack_buf_d0[0x0] = r9;
    sp = &stack_buf_b8;
    r9 = &stack_buf_b8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r8 = &stack_buf_b8;
    r8 = r8 - r12;
    r9 = &stack_buf_28; // [fp - 0x28]
    stack_buf_28[0x0] = r8;
    sp = &stack_buf_b8;
    r0 = 0;
    r0 = flirt_objc_retain_release_thunk_83b4(0, 0x1002d7a78);
    *([x29, #-0xd0]) = r0;
    r8 = *([x0, #-8]);
    *([x29, #-0xf8]) = r8;
    r8 = stack_buf_b8[0x40];
    r9 = &stack_buf_b8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = &stack_buf_b8;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_20; // [fp - 0x20]
    stack_buf_20[0x0] = r9;
    sp = &stack_buf_b8;
    r9 = &stack_buf_b8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r8 = &stack_buf_b8;
    r8 = r8 - r12;
    *([x29, #-0xb0]) = r8;
    sp = &stack_buf_b8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_854(0, 0x1002d7a78);
    r8 = &stack_buf_60; // [fp - 0x60]
    stack_buf_60[0x0] = r0;
    r8 = *([x0, #-8]);
    r9 = &stack_buf_68; // [fp - 0x68]
    stack_buf_68[0x0] = r8;
    r8 = stack_buf_60[0x40];
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = &stack_buf_b8;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    r9 = &stack_buf_70; // [fp - 0x70]
    stack_buf_70[0x0] = r8;
    sp = &stack_buf_60;
    r0 = 0x100378fb8;
    r1 = 0x1002d90f0;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378fb8, 0x1002d90f0);
    r8 = *([x0, #-8]);
    r8 = stack_buf_60[0x40];
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_90; // [fp - 0x90]
    stack_buf_90[0x0] = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r9 = r9 - r12;
    r10 = &stack_buf_80; // [fp - 0x80]
    stack_buf_80[0x0] = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r8 = &stack_buf_60;
    r8 = r8 - r12;
    r9 = &stack_buf_50; // [fp - 0x50]
    stack_buf_50[0x0] = r8;
    sp = &stack_buf_60;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d90f0);
    *([x29, #-0xf0]) = r0;
    r8 = *([x0, #-8]);
    *([x29, #-0xc0]) = r8;
    r8 = stack_buf_60[0x40];
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_d8; // [fp - 0xd8]
    stack_buf_d8[0x0] = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r9 = r9 - r12;
    *([x29, #-0xb8]) = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r9 = r9 - r12;
    r10 = &stack_buf_30; // [fp - 0x30]
    stack_buf_30[0x0] = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r9 = r9 - r12;
    r10 = &stack_buf_18; // [fp - 0x18]
    stack_buf_18[0x0] = r9;
    sp = &stack_buf_60;
    r9 = &stack_buf_60;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r8 = &stack_buf_60;
    r8 = r8 - r12;
    *([x29, #-0xe8]) = r8;
    sp = &stack_buf_60;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_86c(0, 0x1002d90f0);
    r8 = &stack_buf_e0; // [fp - 0xe0]
    stack_buf_e0[0x0] = r0;
    r8 = *([x0, #-8]);
    r9 = &stack_buf_e8; // [fp - 0xe8]
    stack_buf_e8[0x0] = r8;
    r8 = stack_buf_e0[0x40];
    r9 = &stack_buf_e0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d90f0);
    r9 = &stack_buf_60;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    r9 = &stack_buf_40; // [fp - 0x40]
    stack_buf_40[0x0] = r8;
    sp = &stack_buf_e0;
    r28 = 0x1003790d8;
    r1 = 0x1002d7a90;
    r0 = r28;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790d8, 0x1002d7a90);
    r8 = *([x0, #-8]);
    r8 = stack_buf_e0[0x40];
    r9 = &stack_buf_e0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r9 = &stack_buf_e0;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r21 = r9 - r12;
    sp = r21;
    r9 = &stack_buf_e0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a90);
    r8 = sp;
    r23 = r8 - r12;
    sp = r23;
    r0 = 0x100378db8;
    r1 = 0x1002d7960;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
    r26 = r0;
    r24 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r24)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_88; // [fp - 0x88]
    stack_buf_88[0x0] = r9;
    sp = r9;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r25 = r9 - r12;
    sp = r25;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r9 = sp;
    r27 = r9 - r12;
    sp = r27;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7960);
    r8 = sp;
    r22 = r8 - r12;
    sp = r22;
    r19 = *([x8, #0xd40]);
    r0 = r20 + r19;
    r1 = &stack_buf_80; // [fp - 0x80]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_80);
    r0 = r20 + r19;
    r1 = r23;
    r2 = r28;
    r3 = 0x1002d7a90;
    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, r23);
    r8 = ((VTable_PolymorphicClass_118 *)r24)->vfunc_4;
    r0 = r23;
    r1 = 1;
    r2 = r26;
    r0 = x8(r23, 1);
    if (r0 == 1) {
        // [Block 0x100004398 | PostDom: 0x100004674]
        r1 = 0x1003790d8;
        r2 = 0x1002d7a90;
        r0 = r23;
    } else {
        // [Block 0x1000043b0 | PostDom: exit]
        r28 = 0x100378db8;
        r3 = 0x1002d7960;
        r0 = r23;
        r1 = r22;
        r2 = r28;
        r23 = r3;
        r0 = flirt_pthread_mutex_scoped_lock_8760(r23, r22);
        r8 = &stack_buf_48; // [fp - 0x48]
        stack_buf_48[0x0] = r20;
        r8 = ((VTable_PolymorphicClass_118 *)r26)->vfunc_6;
        *([x29, #-0xe0]) = r8;
        r0 = r22;
        r1 = r27;
        r2 = r28;
        r3 = r23;
        r0 = flirt_pthread_mutex_scoped_lock_8800(r22, r27);
        /* 0x1000043f8: ldp x20, x28, [x27] */
        r0 = ((UltronContext *)r27)->payload_length;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r27);
        /* 0x100004404: stp x20, x28, [x21] */
        r23 = *([x29, #-0xc8]);
        r0 = r22;
        r1 = r25;
        r2 = 0x100378db8;
        r3 = 0x1002d7960;
        r0 = flirt_pthread_mutex_scoped_lock_8800(r22, r25);
        r0 = ((UltronContext *)r25)->session_flags;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r25);
        /* 0x100004430: ldp x8, x9, [x25, #0x10] */
        /* 0x100004434: stp x8, x9, [x21, #0x10] */
        r8 = ((VTable_PolymorphicClass_118 *)r26)->vfunc_6;
        *([x29, #-0xd8]) = r25;
        r25 = r22 + r8;
        r0 = 0x1003790e0;
        r1 = ((VTable_PolymorphicClass_118 *)r1)->vfunc_3;
        r2 = ((VTable_PolymorphicClass_46 *)r2)->vfunc_7;
        r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790e0, 0x10036b000);
        r3 = r0;
        r0 = r25;
        r1 = r23;
        r20 = *([x29, #-0xf0]);
        r2 = r20;
        r8 = &stack_buf_f0; // [fp - 0xf0]
        stack_buf_f0[0x0] = r3;
        r0 = flirt_dyld_stub_binder_trampoline_1e5c(r25, 0x1002d7960);
        r28 = r24;
        r24 = *([x29, #-0xc0]);
        r8 = ((UltronContext *)r24)->target_buffer;
        r9 = &stack_buf_8; // [fp - 0x8]
        stack_buf_8[0x0] = r25;
        r1 = ((r0 & 1) != 0) ? r25 : r23;
        r9 = *([x29, #-0xe0]);
        r0 = r21 + r9;
        r9 = &stack_buf_48; // [fp - 0x48]
        r25 = stack_buf_48[0x0];
        r2 = r20;
        *([x29, #-0x100]) = r8;
        r0 = x8(r0, 0x1002d7960);
        r23 = ((VTable_PolymorphicClass_118 *)r26)->vfunc_6;
        r8 = ((VTable_PolymorphicClass_118 *)r28)->vfunc_5;
        r0 = r21;
        r1 = 0;
        r2 = 1;
        r3 = r26;
        r0 = x8(r21, 0);
        r0 = r25 + r19;
        r1 = &stack_buf_98; // [fp - 0x98]
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_98);
        r2 = 0x1003790d8;
        r3 = 0x1002d7a90;
        r1 = r25 + r19;
        r0 = r21;
        r0 = flirt_pthread_mutex_scoped_lock_87a8(r21, &stack_buf_98);
        r0 = &stack_buf_98; // [fp - 0x98]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_98, &stack_buf_98);
        r19 = ((UltronContext *)r24)->session_flags;
        r8 = *([x29, #-0xd8]);
        r0 = r8 + r23;
        r1 = r20;
        r0 = x19(r0, r20);
        r0 = r27 + r23;
        r1 = r20;
        *([x29, #-0xd8]) = r19;
        r0 = x19(r0, r20);
        r8 = *([x8, #0xd48]);
        r8 = *([x25, x8]);
        if ((r8 & (1 << 0)) != 0) { goto loc_100004660; }
        // [Block 0x100004540 | PostDom: exit]
        r8 = *([x8, #0xd50]);
        r8 = *([x25, x8]);
        if ((r8 & (1 << 0)) != 0) { goto loc_100004660; }
        // [Block 0x100004550 | PostDom: exit]
        r27 = r20;
        r8 = *([x8, #0xd70]);
        r2 = *([x25, x8]);
        /* 0x100004560: ldp x0, x1, [x22] */
        r8 = &stack_buf_38; // [fp - 0x38]
        stack_buf_38[0x0] = r0;
        r8 = &stack_buf_108; // [fp - 0x108]
        stack_buf_108[0x0] = r1;
        r0 = flirt_string_length_scan_88e8(r0, r20);
        if ((r0 & (1 << 0)) != 0) { goto loc_100004660; }
        // [Block 0x10000457c | PostDom: exit]
        r0 = *([x29, #-0xc8]);
        r8 = &stack_buf_8; // [fp - 0x8]
        r1 = stack_buf_8[0x0];
        r0 = flirt_dyld_stub_binder_trampoline_6b0(r0, r20);
        if ((r0 & (1 << 0)) == 0) { goto loc_100004660; }
        // [Block 0x100004590 | PostDom: 0x1000045e0]
        r8 = &stack_buf_110; // [fp - 0x110]
        stack_buf_110[0x0] = r22;
        r0 = ((UltronContext *)r25)->target_buffer;
        r8 = &stack_buf_138; // [fp - 0x138]
        stack_buf_138[0x0] = r0;
        r0 = flirt_dyld_stub_binder_trampoline_4b40(r0, r20);
        r8 = &stack_buf_40; // [fp - 0x40]
        r8 = stack_buf_40[0x0];
        r0 = flirt_dyld_stub_binder_trampoline_830(r0, r20);
        r28 = *([x29, #-0xe8]);
        r0 = r28;
        r8 = &stack_buf_8; // [fp - 0x8]
        r1 = stack_buf_8[0x0];
        r2 = r27;
        r8 = *([x29, #-0x100]);
        r0 = x8(r24, r20);
        r0 = r28;
        r1 = *([x29, #-0xc8]);
        r0 = flirt_dyld_stub_binder_trampoline_6bc(r24, r20);
        if ((r0 & (1 << 0)) == 0) { goto loc_100005460; }
        // [Block 0x1000045e0 | PostDom: 0x1000045f8]
        r8 = &stack_buf_128; // [fp - 0x128]
        stack_buf_128[0x0] = r26;
        r8 = *([x8, #0xfa0]);
        /* 0x1000045f0: cmn x8, #1 */
        if ((r0 & 1) != 0) { goto loc_1000054e0; }
        // [Block 0x1000045f8 | PostDom: exit]
        r11 = 0;
        r21 = 0;
        r8 = *([x8, #0x160]);
        r9 = *([x9, #0xa70]);
        r10 = *([x10, #0xf90]);
        r12 = &stack_buf_118; // [fp - 0x118]
        stack_buf_118[0x0] = r10;
        r8 = *([x8]);
        r10 = &stack_buf_11c; // [fp - 0x11c]
        stack_buf_11c[0x0] = r8;
        r8 = *([x9]);
        r9 = &stack_buf_12c; // [fp - 0x12c]
        stack_buf_12c[0x0] = r8;
        r8 = sub_1000063f8; // 0x1000063f8
        r9 = &stack_buf_140; // [fp - 0x140]
        stack_buf_140[0x0] = r8;
        r8 = &stack_buf_50; // [fp - 0x50]
        r23 = stack_buf_50[0x0];
        r25 = *([x29, #-0xc0]);
        r8 = &stack_buf_48; // [fp - 0x48]
        r26 = stack_buf_48[0x0];
        goto loc_100004728;
loc_100004660:
        r1 = 0x100378db8;
        r2 = 0x1002d7960;
        r0 = r22;
    }
    // [Block 0x100004674 | PostDom: exit]
    r0 = flirt_pthread_mutex_scoped_lock_9360(r22, 0x100378db8);
    sp = &stack_buf_60; // [fp - 0x60]
    /* 0x100004688: ldp x24, x23, [sp, #0x30] */
    /* 0x10000468c: ldp x26, x25, [sp, #0x20] */
    /* 0x100004690: ldp x28, x27, [sp, #0x10] */
    /* 0x100004694: ldp d9, d8, [sp], #0x70 */
    return r0;
}

// ── flirt_fast_memcpy_vec_469c @ 0x10000469c (74 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_469c ───
// Stack Frame: 0B | Basic Blocks: 74 | Natural Loops: 7 | Post-Dom Nodes: 74 | Callers: 1
int64_t flirt_fast_memcpy_vec_469c(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[8]; // [fp - 0x8]
    uint8_t stack_buf_10[8]; // [fp - 0x10]
    uint8_t stack_buf_18[8]; // [fp - 0x18]
    uint8_t stack_buf_20[8]; // [fp - 0x20]
    uint8_t stack_buf_28[8]; // [fp - 0x28]
    uint8_t stack_buf_30[8]; // [fp - 0x30]
    uint8_t stack_buf_38[8]; // [fp - 0x38]
    uint8_t stack_buf_40[8]; // [fp - 0x40]
    uint8_t stack_buf_48[8]; // [fp - 0x48]
    uint8_t stack_buf_50[8]; // [fp - 0x50]
    uint8_t stack_buf_58[8]; // [fp - 0x58]
    uint8_t stack_buf_60[8]; // [fp - 0x60]
    uint8_t stack_buf_68[8]; // [fp - 0x68]
    uint8_t stack_buf_70[8]; // [fp - 0x70]
    uint8_t stack_buf_78[8]; // [fp - 0x78]
    uint8_t stack_buf_80[8]; // [fp - 0x80]
    uint8_t stack_buf_88[8]; // [fp - 0x88]
    uint8_t stack_buf_90[8]; // [fp - 0x90]
    uint8_t stack_buf_98[8]; // [fp - 0x98]
    uint8_t stack_buf_a0[8]; // [fp - 0xa0]
    uint8_t stack_buf_a8[8]; // [fp - 0xa8]
    uint8_t stack_buf_b0[8]; // [fp - 0xb0]
    uint8_t stack_buf_b8[8]; // [fp - 0xb8]
    uint8_t stack_buf_c0[8]; // [fp - 0xc0]
    uint8_t stack_buf_c8[8]; // [fp - 0xc8]
    uint8_t stack_buf_d0[8]; // [fp - 0xd0]
    uint8_t stack_buf_d8[8]; // [fp - 0xd8]
    uint8_t stack_buf_e0[8]; // [fp - 0xe0]
    uint8_t stack_buf_e8[8]; // [fp - 0xe8]
    uint8_t stack_buf_f0[8]; // [fp - 0xf0]
    uint8_t stack_buf_f8[8]; // [fp - 0xf8]
    uint8_t stack_buf_100[8]; // [fp - 0x100]
    uint8_t stack_buf_108[8]; // [fp - 0x108]
    uint8_t stack_buf_110[8]; // [fp - 0x110]
    uint8_t stack_buf_118[8]; // [fp - 0x118]
    uint8_t stack_buf_11c[8]; // [fp - 0x11c]
    uint8_t stack_buf_128[12]; // [fp - 0x128]
    uint8_t stack_buf_12c[8]; // [fp - 0x12c]
    uint8_t stack_buf_138[12]; // [fp - 0x138]
    uint8_t stack_buf_140[8]; // [fp - 0x140]
    // [NATURAL LOOP HEADER @ 0x10000469c (Nesting #1)]
    do {
        r8 = ((VTable_PolymorphicClass_118 *)r19)->vfunc_5;
        r9 = *([x29, #-0xf8]);
        r9 = ((VTable_PolymorphicClass_46 *)r9)->vfunc_7;
        /* 0x1000046a8: madd x1, x9, x0, x8 */
        r8 = &stack_buf_20; // [fp - 0x20]
        r0 = stack_buf_20[0x0];
        r0 = flirt_pthread_mutex_scoped_lock_8848(r0, r1);
        r0 = *([x29, #-0xe0]);
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r1);
        // [NATURAL WHILE-LOOP HEADER @ 0x1000046c0 (Nesting #2)]
        r0 = ((UltronContext *)r26)->payload_length;
        ((UltronContext *)r26)->payload_length = r19;
        r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r1);
        r0 = &stack_buf_98; // [fp - 0x98]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_98, r1);
        r8 = &stack_buf_18; // [fp - 0x18]
        r0 = stack_buf_18[0x0];
        r1 = r27;
        r19 = *([x29, #-0xd8]);
        r0 = x19(r0, r27);
        r0 = r28;
        r1 = r27;
        r0 = x19(r28, r27);
        r8 = ((UltronContext *)r25)->crypto_nonce;
        r0 = r28;
        r1 = *([x29, #-0xb8]);
        r2 = r27;
        r0 = x8(r28, r27);
        r0 = r24;
        r0 = flirt_pthread_mutex_scoped_lock_8548(r24, r27);
        r0 = r28;
        r1 = *([x29, #-0xc8]);
        r0 = flirt_dyld_stub_binder_trampoline_6bc(r28, r27);
        r11 = sub_1000063f8; // 0x1000063f8
        while ((r0 & (1 << 0)) != 0) {
            // [Block 0x100004728 | PostDom: 0x10000489c]
            // [SWITCH DISPATCH DETECTED @ 0x100004728: Multi-Way Cascade on r0 (2 cases)]
            switch (r0) { case 0x1: goto loc_100004878; case 0x1: goto loc_1000048c0; }
            r8 = &stack_buf_f8; // [fp - 0xf8]
            stack_buf_f8[0x0] = r11;
            r20 = r28;
            r0 = flirt_dyld_stub_binder_trampoline_6a4(r0, r27);
            r20 = r0;
            r8 = &stack_buf_118; // [fp - 0x118]
            r0 = stack_buf_118[0x0];
            r2 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_69e0(r0, r27);
            r29 = r29;
            r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r27);
            r22 = r0;
            r0 = r20;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r27);
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, r27);
            r8 = &stack_buf_8; // [fp - 0x8]
            stack_buf_8[0x0] = r0;
            *([x29, #-0xe0]) = r1;
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r27);
            r8 = &stack_buf_68; // [fp - 0x68]
            r22 = stack_buf_68[0x0];
            r8 = ((_TtC5Lumio10PixelScene *)r22)->clockNode;
            r9 = &stack_buf_70; // [fp - 0x70]
            r24 = stack_buf_70[0x0];
            r0 = r24;
            r9 = &stack_buf_11c; // [fp - 0x11c]
            r1 = stack_buf_11c[0x0];
            r9 = &stack_buf_60; // [fp - 0x60]
            r19 = stack_buf_60[0x0];
            r2 = r19;
            r0 = x8(r24, r27);
            r0 = r28;
            r8 = &stack_buf_30; // [fp - 0x30]
            r28 = stack_buf_30[0x0];
            r8 = r28;
            r9 = &stack_buf_40; // [fp - 0x40]
            r20 = stack_buf_40[0x0];
            r0 = flirt_dyld_stub_binder_trampoline_7d0(r28, r27);
            r8 = r23;
            r0 = r24;
            r1 = 1;
            r2 = r28;
            r3 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_818(r24, 1);
            r0 = r28;
            r1 = r27;
            r8 = *([x29, #-0xd8]);
            r0 = x8(r28, r27);
            r8 = ((UltronContext *)r22)->session_flags;
            r0 = r24;
            r1 = r19;
            r0 = x8(r24, r19);
            r20 = ((VTable_PolymorphicClass_118 *)r25)->vfunc_4;
            r0 = r23;
            r1 = 1;
            r2 = r27;
            r0 = x20(r23, 1);
            r8 = &stack_buf_98; // [fp - 0x98]
            stack_buf_98[0x0] = r20;
            if (r0 != 1) { goto loc_100004878; }
            // [Block 0x100004824 | PostDom: 0x10000489c]
            r8 = &stack_buf_18; // [fp - 0x18]
            r19 = stack_buf_18[0x0];
            r0 = r19;
            r1 = *([x29, #-0xc8]);
            r2 = r27;
            r24 = *([x29, #-0x100]);
            r0 = x24(r19, 1);
            r0 = r23;
            r1 = 1;
            r2 = r27;
            r0 = x20(r23, 1);
            r22 = *([x29, #-0xd0]);
            if (r0 != 1) {
                // [Block 0x10000485c | PostDom: 0x10000489c]
                r0 = r23;
                r1 = 0x100378fb8;
                r2 = 0x1002d90f0;
                r0 = flirt_pthread_mutex_scoped_lock_9360(r23, 0x100378fb8);
                goto loc_10000489c;
                // [Block 0x100004878 | PostDom: 0x10000489c]
                r8 = ((UltronContext *)r25)->crypto_nonce;
                r9 = &stack_buf_18; // [fp - 0x18]
                r19 = stack_buf_18[0x0];
                r0 = r19;
                r1 = r23;
                r2 = r27;
                r0 = x8(r19, r23);
                r22 = *([x29, #-0xd0]);
                r24 = *([x29, #-0x100]);
            }
loc_10000489c:
            r0 = r19;
            r23 = *([x29, #-0xc8]);
            r1 = r23;
            r20 = r27;
            r2 = r27;
            r8 = &stack_buf_f0; // [fp - 0xf0]
            r3 = stack_buf_f0[0x0];
            r0 = flirt_dyld_stub_binder_trampoline_1e50(r19, r23);
            r1 = ((r0 & 1) != 0) ? r19 : r23;
            r0 = *([x29, #-0xb8]);
            r2 = r27;
            r0 = x24(r0, r23);
            r0 = r26 + 0x18;
            r1 = &stack_buf_98; // [fp - 0x98]
            r2 = 0x20;
            r3 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_98);
            r20 = ((UltronContext *)r26)->payload_length;
            r8 = ((UltronContext *)r20)->target_buffer;
            r28 = *([x29, #-0xe8]);
            if (r8 == 0) { goto loc_100004938; }
            // [Block 0x1000048f4 | PostDom: 0x10000495c]
            r8 = &stack_buf_8; // [fp - 0x8]
            r0 = stack_buf_8[0x0];
            r1 = *([x29, #-0xe0]);
            r0 = flirt_objc_retain_release_thunk_4e0c(r0, &stack_buf_98);
            r8 = &stack_buf_108; // [fp - 0x108]
            r27 = stack_buf_108[0x0];
            if ((r1 & (1 << 0)) == 0) { goto loc_100004950; }
            // [Block 0x100004910 | PostDom: 0x10000495c]
            r8 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_5;
            r9 = *([x29, #-0xf8]);
            r9 = stack_buf_18[0x48];
            /* 0x10000491c: madd x0, x9, x0, x8 */
            r8 = &stack_buf_28; // [fp - 0x28]
            r19 = stack_buf_28[0x0];
            r1 = r19;
            r0 = flirt_pthread_mutex_scoped_lock_85ec(r0, r19);
            r1 = 0;
            goto loc_10000495c;
            // [Block 0x100004938 | PostDom: 0x10000495c]
            r1 = 1;
            r8 = &stack_buf_28; // [fp - 0x28]
            r19 = stack_buf_28[0x0];
            r8 = &stack_buf_108; // [fp - 0x108]
            r27 = stack_buf_108[0x0];
            goto loc_10000495c;
            // [Block 0x100004950 | PostDom: 0x10000495c]
            r1 = 1;
            r8 = &stack_buf_28; // [fp - 0x28]
            r19 = stack_buf_28[0x0];
loc_10000495c:
            r20 = *([x29, #-0xf8]);
            r24 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_5;
            r0 = r19;
            r2 = 1;
            r3 = r22;
            r0 = x24(r19, 1);
            r0 = &stack_buf_98; // [fp - 0x98]
            r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_98, 1);
            r25 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_4;
            r0 = r19;
            r1 = 1;
            r2 = r22;
            r0 = x25(r19, 1);
            if (r0 != 1) { goto loc_100004a5c; }
            // [Block 0x100004998 | PostDom: exit]
            r0 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_68(0, 1);
            r1 = ((VTable_PolymorphicClass_118 *)r0)->vfunc_4;
            r2 = *([x0, #0x34]);
            r0 = flirt_dyld_stub_binder_trampoline_314c(r0, 1);
            r20 = r0;
            r0 = flirt_dyld_stub_binder_trampoline_5c(r0, 1);
            r22 = r0;
            r8 = &stack_buf_c0; // [fp - 0xc0]
            r8 = stack_buf_c0[0x0];
            r8 = stack_buf_c0[0x68];
            r9 = &stack_buf_c8; // [fp - 0xc8]
            r19 = stack_buf_c8[0x0];
            r0 = r19;
            r9 = &stack_buf_12c; // [fp - 0x12c]
            r1 = stack_buf_12c[0x0];
            r9 = &stack_buf_b8; // [fp - 0xb8]
            r2 = stack_buf_b8[0x0];
            r0 = x8(r19, 1);
            r0 = r19;
            r20 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_44(r19, 1);
            r8 = &stack_buf_b0; // [fp - 0xb0]
            r19 = stack_buf_b0[0x0];
            r8 = r19;
            r9 = &stack_buf_8; // [fp - 0x8]
            r0 = stack_buf_8[0x0];
            r1 = *([x29, #-0xe0]);
            r20 = r26;
            r0 = flirt_fast_memcpy_vec_6244(r0, 1);
            r0 = r19;
            r1 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_56c(r19, 0);
            if (r21 == 0) { goto loc_100004a78; }
            // [Block 0x100004a20 | PostDom: 0x100004b10]
            r8 = &stack_buf_a8; // [fp - 0xa8]
            r8 = stack_buf_a8[0x0];
            r8 = stack_buf_a8[0x8];
            r0 = r19;
            r9 = &stack_buf_a0; // [fp - 0xa0]
            r1 = stack_buf_a0[0x0];
            r0 = x8(r19, 0);
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_3230(r21, 0);
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_3398(r0, 0);
            r21 = 0;
            r8 = &stack_buf_d0; // [fp - 0xd0]
            r20 = stack_buf_d0[0x0];
            goto loc_100004b10;
            // [Block 0x100004a5c | PostDom: 0x100004c04]
            r0 = r19;
            r19 = *([x29, #-0xb0]);
            r1 = r19;
            r0 = flirt_pthread_mutex_scoped_lock_86dc(r19, r19);
            r8 = &stack_buf_58; // [fp - 0x58]
            r24 = stack_buf_58[0x0];
            goto loc_100004c04;
            // [Block 0x100004a78 | PostDom: exit]
            r27 = r0;
            r26 = r1;
            r8 = &stack_buf_a8; // [fp - 0xa8]
            r8 = stack_buf_a8[0x0];
            r8 = stack_buf_a8[0x8];
            r0 = r19;
            r9 = &stack_buf_a0; // [fp - 0xa0]
            r1 = stack_buf_a0[0x0];
            r0 = x8(r19, r19);
            r0 = 0x1003790f0;
            r1 = flirt_objc_retain_release_thunk_83b4; // 0x1000083b4
            r2 = 0x1002d7a2c;
            r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790f0, flirt_objc_retain_release_thunk_83b4);
            r4 = r0;
            r8 = &stack_buf_d0; // [fp - 0xd0]
            r19 = stack_buf_d0[0x0];
            r8 = r19;
            r28 = *([x29, #-0xd0]);
            r0 = r28;
            r1 = r27;
            r2 = r26;
            r3 = r28;
            r20 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_50(r28, r0);
            r0 = r27;
            r1 = r26;
            if (r21 == 0) { goto loc_1000053ec; }
            // [Block 0x100004af0 | PostDom: 0x100004b10]
            r0 = flirt_objc_retain_release_thunk_8720(r0, r19);
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_3398(r0, r19);
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_3230(0, r19);
            r21 = 0;
            r20 = r19;
            r28 = *([x29, #-0xe8]);
            // [Block 0x100004b10 | PostDom: 0x100004bc0]
            r0 = r20;
            r1 = 1;
            r2 = 1;
            r22 = *([x29, #-0xd0]);
            r3 = r22;
            r0 = x24(r19, 1);
            r19 = *([x19, #0xa18]);
            r0 = r19;
            r0 = flirt_fast_memcpy_vec_9970(0x10036d000, 1);
            r24 = *([x29, #-0xb0]);
            *([x24]) = r0;
            r0 = r19;
            r0 = flirt_fast_memcpy_vec_9a8c(0x10036d000, 1);
            ((UltronContext *)r24)->session_flags = r0;
            r8 = ((UltronContext *)r22)->payload_length;
            r9 = *([x29, #-0xc0]);
            r19 = stack_buf_a0[0x38];
            r0 = r24 + r8;
            r1 = 1;
            r2 = 1;
            r23 = *([x29, #-0xf0]);
            r3 = r23;
            r0 = x19(r0, 1);
            r8 = *([x22, #0x1c]);
            r0 = r24 + r8;
            r1 = 1;
            r2 = 1;
            r3 = r23;
            r0 = x19(r0, 1);
            r0 = r20;
            r1 = 1;
            r2 = r22;
            r0 = x25(r19, 1);
            r8 = &stack_buf_108; // [fp - 0x108]
            r27 = stack_buf_108[0x0];
            if (r0 != 1) {
                // [Block 0x100004ba8 | PostDom: 0x100004bc0]
                r0 = r20;
                r1 = 0x1003790b8;
                r2 = 0x1002d7a78;
                r0 = flirt_pthread_mutex_scoped_lock_9360(r19, 0x1003790b8);
            }
            // [Block 0x100004bc0 | PostDom: 0x100004bc8]
            r8 = &stack_buf_58; // [fp - 0x58]
            r24 = stack_buf_58[0x0];
            // [NATURAL WHILE-LOOP HEADER @ 0x100004bc8 (Nesting #3)]
            r8 = &stack_buf_28; // [fp - 0x28]
            r19 = stack_buf_28[0x0];
            r0 = r19;
            r1 = 1;
            r2 = r22;
            r0 = x25(0x10036d000, 1);
            while (r0 != 1) {
                // [Block 0x100004be8 | PostDom: 0x100004c00]
                r0 = r19;
                r1 = 0x1003790b8;
                r2 = 0x1002d7a78;
                r0 = flirt_pthread_mutex_scoped_lock_9360(0x10036d000, 0x1003790b8);
                // [Block 0x100004c00 | PostDom: 0x100004c04]
                r19 = *([x29, #-0xb0]);
                // [Block 0x100004c04 | PostDom: exit]
                r8 = &stack_buf_f8; // [fp - 0xf8]
                r22 = stack_buf_f8[0x0];
                r0 = r28;
                r20 = *([x29, #-0xb8]);
                r0 = flirt_dyld_stub_binder_trampoline_68c(r28, 0x1003790b8);
                v8.16b = v0.16b;
                r0 = r22;
                r1 = 0;
                r0 = flirt_objc_retain_release_thunk_87f0(r0, 0);
                r0 = *([x19]);
                r0 = flirt_dyld_stub_binder_trampoline_3374(r0, 0);
                r25 = r0;
                r20 = *([x19]);
                *([x29, #-0x98]) = r20;
                r8 = &stack_buf_38; // [fp - 0x38]
                r0 = stack_buf_38[0x0];
                r1 = r27;
                r0 = flirt_objc_retain_release_thunk_4e0c(r0, r0);
                r8 = ((UltronContext *)r20)->target_buffer;
                /* 0x100004c50: mvn w9, w1 */
                r9 = r9 & 1;
                /* 0x100004c58: adds x8, x8, x9 */
                if (r0 != 1) { goto loc_1000054d0; }
                // [Block 0x100004c60 | PostDom: exit]
                r22 = r1;
                r9 = ((UltronContext *)r20)->payload_length;
                if (r9 >= x8) { goto loc_100004ca8; }
                // [Block 0x100004c70 | PostDom: exit]
                r20 = &stack_buf_98; // [fp - 0x98]
                r0 = &stack_buf_38;
                r1 = r25;
                r0 = flirt_fast_memcpy_vec_ee28(&stack_buf_38, r0);
                r20 = *([x29, #-0x98]);
                r8 = &stack_buf_38; // [fp - 0x38]
                r0 = stack_buf_38[0x0];
                r1 = r27;
                r0 = flirt_objc_retain_release_thunk_4e0c(r0, r0);
                r8 = r1 & 1;
                r9 = r22 & 1;
                if (r9 == w8) { goto loc_100004cac; }
                // [Block 0x100004ca4 | PostDom: 0x100005500]
                goto loc_100005500;
                // [Block 0x100004ca8 | PostDom: exit]
                if ((r25 & (1 << 0)) == 0) { goto loc_100005434; }
                // [NATURAL WHILE-LOOP HEADER @ 0x100004cac (Nesting #4)]
                r8 = *([x29, #-0xb0]);
                stack_buf_38[0x0] = r20;
                while ((r22 & (1 << 0)) == 0) {
                    // [Block 0x100004cb8 | PostDom: exit]
                    /* 0x100004cb8: lsr x8, x0, #6 */
                    r8 = r20 + r8;
                    r9 = 1;
                    /* 0x100004cc4: lsl x9, x9, x0 */
                    r10 = stack_buf_38[0x40];
                    r9 = r10 | r9;
                    stack_buf_38[0x40] = r9;
                    r8 = stack_buf_98[0x30];
                    r8 = r8 + r0;
                    r9 = &stack_buf_38; // [fp - 0x38]
                    r9 = stack_buf_38[0x0];
                    /* 0x100004ce4: stp x9, x27, [x8] */
                    r8 = stack_buf_98[0x38];
                    stack_buf_38[0x3] = 0;
                    r8 = stack_buf_98[0x10];
                    /* 0x100004cf4: adds x8, x8, #1 */
                    if (r9 != w8) { goto loc_1000054d8; }
                    // [Block 0x100004cfc | PostDom: 0x100004d10]
                    r19 = r0;
                    stack_buf_98[0x10] = r8;
                    r0 = r27;
                    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, r0);
                    r0 = r19;
                    // [Block 0x100004d10 | PostDom: exit]
                    r8 = &stack_buf_f8; // [fp - 0xf8]
                    stack_buf_f8[0x0] = r21;
                    r8 = stack_buf_98[0x38];
                    d0 = stack_buf_f8[0x3];
                    /* 0x100004d20: fadd d0, d8, d0 */
                    stack_buf_f8[0x3] = d0;
                    r8 = &stack_buf_110; // [fp - 0x110]
                    r0 = stack_buf_110[0x0];
                    r8 = &stack_buf_88; // [fp - 0x88]
                    r26 = stack_buf_88[0x0];
                    r1 = r26;
                    r2 = 0x100378db8;
                    r3 = 0x1002d7960;
                    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, r19);
                    r0 = ((UltronContext *)r26)->session_flags;
                    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r19);
                    /* 0x100004d58: ldp x22, x25, [x26, #0x10] */
                    r8 = &stack_buf_128; // [fp - 0x128]
                    r8 = stack_buf_128[0x0];
                    r19 = stack_buf_128[0x40];
                    r0 = r27;
                    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, r19);
                    r0 = r25;
                    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, r19);
                    r21 = *([x29, #-0xb0]);
                    r0 = ((UltronContext *)r21)->session_flags;
                    r0 = flirt_dyld_stub_binder_trampoline_3374(r0, r19);
                    r4 = r0;
                    r8 = ((UltronContext *)r21)->session_flags;
                    *([x29, #-0x98]) = r8;
                    r20 = &stack_buf_98; // [fp - 0x98]
                    r0 = r22;
                    r1 = r25;
                    r8 = &stack_buf_38; // [fp - 0x38]
                    r2 = stack_buf_38[0x0];
                    r3 = r27;
                    r0 = flirt_objc_retain_release_thunk_8978(r0, r0);
                    r0 = r25;
                    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
                    r0 = r27;
                    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
                    r8 = *([x29, #-0x98]);
                    ((UltronContext *)r21)->session_flags = r8;
                    r0 = r26 + r19;
                    r27 = *([x29, #-0xf0]);
                    r1 = r27;
                    r8 = *([x29, #-0xd8]);
                    r0 = x8(r0, r0);
                    r8 = *([x29, #-0xd0]);
                    r25 = stack_buf_38[0x18];
                    r8 = *([x29, #-0xc0]);
                    r22 = stack_buf_38[0x38];
                    r8 = &stack_buf_80; // [fp - 0x80]
                    r20 = stack_buf_80[0x0];
                    r0 = &stack_buf_98;
                    r1 = 1;
                    r2 = 1;
                    r3 = r27;
                    r0 = x22(&stack_buf_98, 1);
                    r8 = &stack_buf_10; // [fp - 0x10]
                    r8 = stack_buf_10[0x0];
                    r19 = stack_buf_10[0x30];
                    r0 = r21 + r25;
                    r1 = r24;
                    r23 = 0x100378fb8;
                    r2 = r23;
                    r28 = 0x1002d90f0;
                    r3 = r28;
                    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, r24);
                    r1 = r24 + r19;
                    r0 = &stack_buf_98;
                    r2 = r23;
                    r3 = r28;
                    r0 = flirt_pthread_mutex_scoped_lock_8800(&stack_buf_98, r24);
                    r0 = r24;
                    r1 = 1;
                    r2 = r27;
                    r8 = &stack_buf_98; // [fp - 0x98]
                    r26 = stack_buf_98[0x0];
                    r0 = x26(r24, 1);
                    if (r0 != 1) { goto loc_100004eb8; }
                    // [Block 0x100004e68 | PostDom: exit]
                    r0 = &stack_buf_98;
                    r1 = r23;
                    r2 = r28;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(&stack_buf_98, 0x100378fb8);
                    r0 = r24 + r19;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(r0, 1);
                    r19 = r28;
                    r8 = &stack_buf_78; // [fp - 0x78]
                    r21 = stack_buf_78[0x0];
                    if (r0 != 1) { goto loc_100004ef4; }
                    // [Block 0x100004e9c | PostDom: 0x100005010]
                    r0 = r24;
                    r1 = r23;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r24, 0x100378fb8);
                    r24 = *([x29, #-0xb0]);
                    r28 = *([x29, #-0xe8]);
                    goto loc_100005010;
                    // [Block 0x100004eb8 | PostDom: exit]
                    r0 = r24 + r19;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(r0, 1);
                    r8 = *([x29, #-0x100]);
                    if (r0 != 1) { goto loc_100004f40; }
                    // [Block 0x100004ed4 | PostDom: 0x100004ef4]
                    r0 = &stack_buf_98;
                    r1 = r23;
                    r19 = 0x1002d90f0;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(&stack_buf_98, 0x100378fb8);
                    r8 = &stack_buf_78; // [fp - 0x78]
                    r21 = stack_buf_78[0x0];
                    // [Block 0x100004ef4 | PostDom: 0x100004f14]
                    r0 = r24;
                    r1 = 0x1003790d0;
                    r2 = 0x1002d7a88;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r24, 0x1003790d0);
                    r24 = *([x29, #-0xb0]);
                    r28 = *([x29, #-0xe8]);
                    // [NATURAL WHILE-LOOP HEADER @ 0x100004f14 (Nesting #5)]
                    r0 = r24 + r25;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(r0, 1);
                    while (r0 != 1) {
                        // [Block 0x100004f2c | PostDom: 0x100005048]
                        r1 = r24 + r25;
                        r0 = r28;
                        r0 = flirt_dyld_stub_binder_trampoline_6bc(0x1002d90f0, 1);
                        if ((r0 & (1 << 0)) != 0) { goto loc_100005010; }
                        // [Block 0x100004f3c | PostDom: 0x100005048]
                        goto loc_100005048;
                        // [Block 0x100004f40 | PostDom: 0x100005010]
                        r9 = &stack_buf_30; // [fp - 0x30]
                        r28 = stack_buf_30[0x0];
                        r0 = r28;
                        r1 = r24;
                        r2 = r27;
                        r0 = x8(0x1002d90f0, r24);
                        r8 = *([x29, #-0xc0]);
                        r8 = stack_buf_78[0x20];
                        r1 = r24 + r19;
                        r9 = &stack_buf_d8; // [fp - 0xd8]
                        r21 = stack_buf_d8[0x0];
                        r0 = r21;
                        r2 = r27;
                        r0 = x8(0, r24);
                        r0 = 0x1003790e8;
                        r1 = ((VTable_PolymorphicClass_118 *)r1)->vfunc_3;
                        r2 = ((_TtC5Lumio10PixelScene *)r2)->labels;
                        r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790e8, 0x10036b000);
                        r3 = r0;
                        r0 = r28;
                        r1 = r21;
                        r19 = &stack_buf_98;
                        r20 = r27;
                        r2 = r27;
                        r0 = flirt_dyld_stub_binder_trampoline_1e74(0x1002d90f0, 0);
                        r20 = r0;
                        r0 = r21;
                        r1 = r27;
                        r8 = *([x29, #-0xd8]);
                        r0 = x8(0, r0);
                        r0 = r28;
                        r28 = *([x29, #-0xe8]);
                        r1 = r27;
                        r8 = *([x29, #-0xd8]);
                        r0 = x8(0x1002d90f0, r0);
                        r0 = &stack_buf_98;
                        r1 = r23;
                        r19 = 0x1002d90f0;
                        r2 = r19;
                        r0 = flirt_pthread_mutex_scoped_lock_9360(&stack_buf_98, 0x100378fb8);
                        r0 = r24;
                        r1 = r23;
                        r2 = r19;
                        r0 = flirt_pthread_mutex_scoped_lock_9360(r24, 0x100378fb8);
                        r24 = *([x29, #-0xb0]);
                        r8 = &stack_buf_78; // [fp - 0x78]
                        r21 = stack_buf_78[0x0];
                    } // end while-loop -> 0x100004f14
loc_100005010:
                    r0 = r24 + r25;
                    r1 = r23;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x100378fb8);
                    r0 = r24 + r25;
                    r1 = r28;
                    r2 = r27;
                    r8 = *([x29, #-0x100]);
                    r0 = x8(r0, 0x1002d90f0);
                    r0 = r24 + r25;
                    r1 = 0;
                    r2 = 1;
                    r3 = r27;
                    r0 = x22(r0, 0);
                    // [Block 0x100005048 | PostDom: exit]
                    r8 = *([x29, #-0xd0]);
                    r25 = stack_buf_78[0x1c];
                    r8 = &stack_buf_90; // [fp - 0x90]
                    r20 = stack_buf_90[0x0];
                    r0 = r20;
                    r1 = 1;
                    r2 = 1;
                    r3 = r27;
                    r8 = &stack_buf_100; // [fp - 0x100]
                    stack_buf_100[0x0] = r22;
                    r0 = x22(r0, 1);
                    r8 = &stack_buf_10; // [fp - 0x10]
                    r8 = stack_buf_10[0x0];
                    r22 = stack_buf_10[0x30];
                    r0 = r24 + r25;
                    r1 = r21;
                    r2 = r23;
                    r3 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, 0);
                    r1 = r21 + r22;
                    r0 = r20;
                    r2 = r23;
                    r3 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_8800(r0, 0);
                    r0 = r21;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(0, 1);
                    if (r0 != 1) { goto loc_100005114; }
                    // [Block 0x1000050c0 | PostDom: exit]
                    r0 = r20;
                    r1 = r23;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x100378fb8);
                    r0 = r21 + r22;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(r0, 1);
                    if (r0 != 1) { goto loc_100005144; }
                    // [Block 0x1000050e8 | PostDom: 0x10000528c]
                    r0 = r21;
                    r1 = r23;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(0, 0x100378fb8);
                    r8 = &stack_buf_f8; // [fp - 0xf8]
                    r21 = stack_buf_f8[0x0];
                    r8 = &stack_buf_48; // [fp - 0x48]
                    r26 = stack_buf_48[0x0];
                    r8 = &stack_buf_100; // [fp - 0x100]
                    r22 = stack_buf_100[0x0];
                    goto loc_10000528c;
                    // [Block 0x100005114 | PostDom: exit]
                    r0 = r21 + r22;
                    r1 = 1;
                    r2 = r27;
                    r0 = x26(r0, 1);
                    if (r0 != 1) { goto loc_1000051a8; }
                    // [Block 0x10000512c | PostDom: 0x100005144]
                    r0 = r20;
                    r1 = r23;
                    r19 = 0x1002d90f0;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x100378fb8);
                    // [Block 0x100005144 | PostDom: 0x100005174]
                    r0 = r21;
                    r1 = 0x1003790d0;
                    r2 = 0x1002d7a88;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(0, 0x1003790d0);
                    r8 = &stack_buf_f8; // [fp - 0xf8]
                    r21 = stack_buf_f8[0x0];
                    r8 = &stack_buf_48; // [fp - 0x48]
                    r26 = stack_buf_48[0x0];
                    r8 = &stack_buf_100; // [fp - 0x100]
                    r22 = stack_buf_100[0x0];
                    // [NATURAL WHILE-LOOP HEADER @ 0x100005174 (Nesting #5)]
                    r0 = r24 + r25;
                    r1 = 1;
                    r2 = r27;
                    r8 = &stack_buf_98; // [fp - 0x98]
                    r8 = stack_buf_98[0x0];
                    r0 = x8(r0, 1);
                    while (r0 != 1) {
                        // [Block 0x100005194 | PostDom: 0x1000052c4]
                        r1 = r24 + r25;
                        r0 = *([x29, #-0xb8]);
                        r0 = flirt_dyld_stub_binder_trampoline_6b0(r0, 1);
                        if ((r0 & (1 << 0)) != 0) { goto loc_10000528c; }
                        // [Block 0x1000051a4 | PostDom: 0x1000052c4]
                        goto loc_1000052c4;
                        // [Block 0x1000051a8 | PostDom: 0x10000528c]
                        r8 = &stack_buf_30; // [fp - 0x30]
                        r28 = stack_buf_30[0x0];
                        r0 = r28;
                        r1 = r21;
                        r2 = r27;
                        r8 = *([x29, #-0x100]);
                        r0 = x8(0x1002d90f0, 0);
                        r8 = *([x29, #-0xc0]);
                        r8 = stack_buf_30[0x20];
                        r1 = r21 + r22;
                        r26 = r21;
                        r9 = &stack_buf_d8; // [fp - 0xd8]
                        r21 = stack_buf_d8[0x0];
                        r0 = r21;
                        r2 = r27;
                        r0 = x8(0, 0);
                        r0 = 0x1003790e8;
                        r1 = ((VTable_PolymorphicClass_118 *)r1)->vfunc_3;
                        r2 = ((_TtC5Lumio10PixelScene *)r2)->labels;
                        r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790e8, 0x10036b000);
                        r3 = r0;
                        r0 = r28;
                        r1 = r21;
                        r19 = r20;
                        r20 = r27;
                        r2 = r27;
                        r0 = flirt_dyld_stub_binder_trampoline_1e74(0x1002d90f0, 0);
                        r20 = r0;
                        r0 = r21;
                        r1 = r27;
                        r8 = *([x29, #-0xd8]);
                        r0 = x8(0, r0);
                        r0 = r28;
                        r28 = *([x29, #-0xe8]);
                        r1 = r27;
                        r8 = *([x29, #-0xd8]);
                        r0 = x8(0x1002d90f0, r0);
                        r0 = r19;
                        r1 = r23;
                        r19 = 0x1002d90f0;
                        r2 = r19;
                        r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x100378fb8);
                        r0 = r26;
                        r1 = r23;
                        r2 = r19;
                        r0 = flirt_pthread_mutex_scoped_lock_9360(0, 0x100378fb8);
                        r8 = &stack_buf_f8; // [fp - 0xf8]
                        r21 = stack_buf_f8[0x0];
                        r8 = &stack_buf_48; // [fp - 0x48]
                        r26 = stack_buf_48[0x0];
                        r8 = &stack_buf_100; // [fp - 0x100]
                        r22 = stack_buf_100[0x0];
                    } // end while-loop -> 0x100005174
loc_10000528c:
                    r0 = r24 + r25;
                    r1 = r23;
                    r2 = r19;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x100378fb8);
                    r0 = r24 + r25;
                    r1 = *([x29, #-0xb8]);
                    r2 = r27;
                    r8 = *([x29, #-0x100]);
                    r0 = x8(r0, 0x100378fb8);
                    r0 = r24 + r25;
                    r1 = 0;
                    r2 = 1;
                    r3 = r27;
                    r0 = x22(r0, 0);
                    // [Block 0x1000052c4 | PostDom: exit]
                    r0 = r26 + 0x18;
                    r1 = &stack_buf_98; // [fp - 0x98]
                    r2 = 0x21;
                    r3 = 0;
                    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_98);
                    r0 = r24;
                    r8 = &stack_buf_20; // [fp - 0x20]
                    r1 = stack_buf_20[0x0];
                    r0 = flirt_pthread_mutex_scoped_lock_85ec(r24, &stack_buf_98);
                    r0 = ((UltronContext *)r26)->payload_length;
                    r0 = flirt_dyld_stub_binder_trampoline_3374(r0, &stack_buf_98);
                    r25 = r0;
                    r20 = ((UltronContext *)r26)->payload_length;
                    *([x29, #-0xa8]) = r20;
                    r8 = -0x8000000000000000;
                    ((UltronContext *)r26)->payload_length = r8;
                    r8 = &stack_buf_8; // [fp - 0x8]
                    r0 = stack_buf_8[0x0];
                    r1 = *([x29, #-0xe0]);
                    r0 = flirt_objc_retain_release_thunk_4e0c(r0, &stack_buf_98);
                    r8 = ((UltronContext *)r20)->target_buffer;
                    /* 0x100005318: mvn w9, w1 */
                    r9 = r9 & 1;
                    /* 0x100005320: adds x8, x8, x9 */
                    if (r0 != 1) { goto loc_1000054d4; }
                    // [Block 0x100005328 | PostDom: exit]
                    r22 = &stack_buf_98;
                    r9 = ((UltronContext *)r20)->payload_length;
                    if (r9 >= x8) { goto loc_100005370; }
                    // [Block 0x100005338 | PostDom: exit]
                    r20 = &stack_buf_a8; // [fp - 0xa8]
                    r0 = &stack_buf_8;
                    r1 = r25;
                    r0 = flirt_objc_retain_release_thunk_eb58(&stack_buf_8, r0);
                    r20 = *([x29, #-0xa8]);
                    r8 = &stack_buf_8; // [fp - 0x8]
                    r0 = stack_buf_8[0x0];
                    r1 = *([x29, #-0xe0]);
                    r0 = flirt_objc_retain_release_thunk_4e0c(r0, r0);
                    r8 = r1 & 1;
                    r9 = r22 & 1;
                    if (r9 == w8) { goto loc_100005374; }
                    // [Block 0x10000536c | PostDom: 0x100005510]
                    goto loc_100005510;
                    // [Block 0x100005370 | PostDom: exit]
                    if ((r25 & (1 << 0)) == 0) { goto loc_10000544c; }
                    // [NATURAL WHILE-LOOP HEADER @ 0x100005374 (Nesting #5)]
                    r8 = &stack_buf_50; // [fp - 0x50]
                    r23 = stack_buf_50[0x0];
                    r25 = *([x29, #-0xc0]);
                    r19 = *([x29, #-0xa8]);
                    while ((r22 & (1 << 0)) == 0) {
                        // [Block 0x100005388 | PostDom: exit]
                        /* 0x100005388: lsr x8, x0, #6 */
                        r8 = r19 + r8;
                        r9 = 1;
                        /* 0x100005394: lsl x9, x9, x0 */
                        r10 = stack_buf_50[0x40];
                        r9 = r10 | r9;
                        stack_buf_50[0x40] = r9;
                        r8 = ((VTable_PolymorphicClass_118 *)r19)->vfunc_4;
                        r8 = r8 + r0;
                        r9 = &stack_buf_8; // [fp - 0x8]
                        r10 = stack_buf_8[0x0];
                        r9 = *([x29, #-0xe0]);
                        /* 0x1000053b8: stp x10, x9, [x8] */
                        r8 = ((VTable_PolymorphicClass_118 *)r19)->vfunc_5;
                        r9 = *([x29, #-0xf8]);
                        r9 = stack_buf_8[0x48];
                        /* 0x1000053c8: madd x1, x9, x0, x8 */
                        r8 = &stack_buf_20; // [fp - 0x20]
                        r0 = stack_buf_20[0x0];
                        r0 = flirt_pthread_mutex_scoped_lock_86dc(r0, r0);
                        r8 = ((UltronContext *)r19)->target_buffer;
                        /* 0x1000053dc: adds x8, x8, #1 */
                        if (r9 != w8) { goto loc_1000054dc; }
                        // [Block 0x1000053e4 | PostDom: exit]
                        ((UltronContext *)r19)->target_buffer = r8;
                    } // end while-loop -> 0x1000046c0
                    // [Block 0x1000053ec | PostDom: exit]
                    r0 = flirt_objc_retain_release_thunk_8720(r0, r0);
                    r0 = &stack_buf_98;
                    r0 = flirt_dyld_stub_binder_trampoline_3398(&stack_buf_98, r0);
                    r0 = r19;
                    r1 = 0;
                    r2 = 1;
                    r3 = r28;
                    r0 = x24(0x1002d90f0, 0);
                    r0 = r19;
                    r1 = *([x29, #-0xb0]);
                    r0 = flirt_pthread_mutex_scoped_lock_86dc(0x1002d90f0, 0);
                    r8 = &stack_buf_58; // [fp - 0x58]
                    r24 = stack_buf_58[0x0];
                    r22 = r28;
                    r28 = *([x29, #-0xe8]);
                    r8 = &stack_buf_108; // [fp - 0x108]
                    r27 = stack_buf_108[0x0];
                } // end while-loop -> 0x100004bc8
                // [Block 0x100005434 | PostDom: exit]
                r20 = &stack_buf_98; // [fp - 0x98]
                r19 = r0;
                r0 = flirt_string_length_scan_b7e0(r0, 0);
                r0 = r19;
                r20 = *([x29, #-0x98]);
            } // end while-loop -> 0x100004cac
            // [Block 0x10000544c | PostDom: exit]
            r20 = &stack_buf_a8; // [fp - 0xa8]
            r19 = r0;
            r0 = flirt_objc_retain_release_thunk_b650(r0, 0);
            r0 = r19;
        } // end while-loop -> 0x100005374
        // [Block 0x100005460 | PostDom: 0x10000546c]
        r8 = &stack_buf_140; // [fp - 0x140]
        stack_buf_140[0x0] = 0;
        r19 = *([x29, #-0xd8]);
        // [Block 0x10000546c | PostDom: exit]
        r0 = r28;
        r1 = r27;
        r0 = x19(0x1002d90f0, r0);
        r8 = &stack_buf_e8; // [fp - 0xe8]
        r8 = stack_buf_e8[0x0];
        r8 = stack_buf_e8[0x8];
        r9 = &stack_buf_40; // [fp - 0x40]
        r0 = stack_buf_40[0x0];
        r9 = &stack_buf_e0; // [fp - 0xe0]
        r1 = stack_buf_e0[0x0];
        r0 = x8(r0, r0);
        r8 = &stack_buf_138; // [fp - 0x138]
        r0 = stack_buf_138[0x0];
        r0 = flirt_dyld_stub_binder_trampoline_6b80(r0, r0);
        r8 = &stack_buf_140; // [fp - 0x140]
        r0 = stack_buf_140[0x0];
        r1 = 0;
        r0 = flirt_objc_retain_release_thunk_87f0(r0, 0);
        r1 = 0x100378db8;
        r2 = 0x1002d7960;
        r8 = &stack_buf_110; // [fp - 0x110]
        r0 = stack_buf_110[0x0];
        goto loc_100004674;
        // [Block 0x1000054d0 | PostDom: 0x1000054d4]
        // [Block 0x1000054d4 | PostDom: 0x1000054d8]
        // [Block 0x1000054d8 | PostDom: 0x1000054dc]
        // [Block 0x1000054dc | PostDom: exit]
        r0 = 0x100380fa0;
        r1 = 0x1001595e4;
        r0 = flirt_dyld_stub_binder_trampoline_338c(0x100380fa0, 0x1001595e4);
        goto loc_1000045f8;
        // [Block 0x1000054f8 | PostDom: 0x1000054fc]
        // [Block 0x1000054fc | PostDom: 0x100005500]
        // [Block 0x100005500 | PostDom: 0x100005510]
        r0 = *([x0, #0x398]);
        r0 = flirt_dyld_stub_binder_trampoline_2900(0x10036d000, 0x1001595e4);
        // [Block 0x100005510 | PostDom: exit]
        r0 = *([x0, #0x398]);
        r0 = flirt_dyld_stub_binder_trampoline_2900(0x10036d000, 0x1001595e4);
        r0 = &stack_buf_98; // [fp - 0x98]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_98, 0x1001595e4);
}

// ── flirt_fast_memcpy_vec_5528 @ 0x100005528 (29 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_5528 ───
// Stack Frame: 96B | Basic Blocks: 29 | Natural Loops: 8 | Post-Dom Nodes: 29 | Callers: 5
int64_t flirt_fast_memcpy_vec_5528(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[8]; // [fp - 0x8]
    uint8_t stack_buf_10[8]; // [fp - 0x10]
    uint8_t stack_buf_18[8]; // [fp - 0x18]
    uint8_t stack_buf_20[8]; // [fp - 0x20]
    uint8_t stack_buf_28[8]; // [fp - 0x28]
    uint8_t stack_buf_30[8]; // [fp - 0x30]
    uint8_t stack_buf_38[8]; // [fp - 0x38]
    uint8_t stack_buf_40[8]; // [fp - 0x40]
    uint8_t stack_buf_48[8]; // [fp - 0x48]
    uint8_t stack_buf_50[8]; // [fp - 0x50]
    uint8_t stack_buf_58[8]; // [fp - 0x58]
    uint8_t stack_buf_60[8]; // [fp - 0x60]
    uint8_t stack_buf_68[8]; // [fp - 0x68]
    uint8_t stack_buf_70[8]; // [fp - 0x70]
    uint8_t stack_buf_78[8]; // [fp - 0x78]
    uint8_t stack_buf_90[24]; // [fp - 0x90]
    uint8_t stack_buf_a0[16]; // [fp - 0xa0]
    /* 0x100005528: stp x28, x27, [sp, #-0x60]! */
    /* 0x10000552c: stp x26, x25, [sp, #0x10] */
    /* 0x100005530: stp x24, x23, [sp, #0x20] */
    r8 = *([x8, #0x4a8]);
    r8 = *([x8]);
    *([x29, #-0x60]) = r8;
    r0 = 0x1003790b8;
    r1 = 0x1002d7a78;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790b8, 0x1002d7a78);
    r8 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = sp;
    r8 = r9 - r8;
    r9 = &stack_buf_78; // [fp - 0x78]
    stack_buf_78[0x0] = r8;
    sp = r8;
    r0 = 0x1003790c0;
    r1 = 0x1002d7a80;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790c0, 0x1002d7a80);
    *([x29, #-0xe8]) = r0;
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r10 = 0x10036b00f;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    *([x29, #-0xf0]) = r9;
    sp = r9;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r8 = sp;
    r8 = r8 - r12;
    *([x29, #-0xa8]) = r8;
    sp = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_554(0, 0x1002d7a80);
    r8 = &stack_buf_8; // [fp - 0x8]
    stack_buf_8[0x0] = r0;
    r8 = *([x0, #-8]);
    *([x29, #-0xb8]) = r8;
    r8 = stack_buf_8[0x40];
    r9 = &stack_buf_8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r9 = r9 - r12;
    r10 = &stack_buf_38; // [fp - 0x38]
    stack_buf_38[0x0] = r9;
    sp = r9;
    r9 = &stack_buf_8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r27 = r9 - r12;
    sp = r27;
    r9 = &stack_buf_8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r22 = r9 - r12;
    sp = r22;
    r9 = &stack_buf_8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r8 = sp;
    r24 = r8 - r12;
    sp = r24;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_98(0, 0x1002d7a80);
    *([x29, #-0xc0]) = r0;
    r25 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r25)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r23 = r9 - r8;
    sp = r23;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1002d7a80);
    r28 = r0;
    r21 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r21)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a80);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r19 = r9 - r8;
    sp = r19;
    r8 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 0x1002d7a80);
    r26 = *([x8, #0xd68]);
    r0 = r20 + r26;
    r1 = &stack_buf_78; // [fp - 0x78]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_78);
    *([x29, #-0xd8]) = r21;
    r8 = ((VTable_PolymorphicClass_118 *)r21)->vfunc_3;
    r0 = r20 + r26;
    r1 = r19;
    *([x29, #-0xb0]) = r28;
    r2 = r28;
    r0 = x8(r0, r19);
    r0 = &stack_buf_78; // [fp - 0x78]
    r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_78, r19);
    r26 = ((UltronContext *)r20)->target_buffer;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_4b40(r26, r19);
    r0 = r20 + 0x18;
    r1 = &stack_buf_78; // [fp - 0x78]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_78);
    r8 = &stack_buf_70; // [fp - 0x70]
    stack_buf_70[0x0] = r20;
    r0 = ((UltronContext *)r20)->payload_length;
    *([x29, #-0xc8]) = r0;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, &stack_buf_78);
    r8 = &stack_buf_28; // [fp - 0x28]
    stack_buf_28[0x0] = r26;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_6b80(r26, &stack_buf_78);
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_c8(0, &stack_buf_78);
    r1 = ((VTable_PolymorphicClass_118 *)r0)->vfunc_4;
    r2 = *([x0, #0x34]);
    r0 = flirt_dyld_stub_binder_trampoline_314c(r0, &stack_buf_78);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_bc(r0, &stack_buf_78);
    r20 = r0;
    r8 = *([x8, #0xab8]);
    r1 = *([x8]);
    r8 = ((_TtC5Lumio10PixelScene *)r25)->clockNode;
    r0 = r23;
    r2 = *([x29, #-0xc0]);
    r0 = x8(r23, &stack_buf_78);
    r0 = r23;
    *([x29, #-0xd0]) = r20;
    r0 = flirt_dyld_stub_binder_trampoline_a4(r23, &stack_buf_78);
    r0 = *([x8, #0x468]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, &stack_buf_78);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_3f60(r0, &stack_buf_78);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, &stack_buf_78);
    r21 = r0;
    r8 = &stack_buf_58; // [fp - 0x58]
    stack_buf_58[0x0] = r20;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_3f60(r0, &stack_buf_78);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, &stack_buf_78);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_4400(r0, &stack_buf_78);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, &stack_buf_78);
    r23 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, &stack_buf_78);
    r8 = r27;
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_518(r0, &stack_buf_78);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, &stack_buf_78);
    r8 = "Library/Application Support/Lumio";
    r8 = r8 - 0x20;
    r9 = &stack_buf_60; // [fp - 0x60]
    stack_buf_60[0x0] = r8;
    r1 = r8 | 0x8000000000000000;
    r8 = r22;
    r0 = 0x21;
    r0 = 0xd000000000000021; // movk lsl #48
    r2 = 1;
    r20 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_4d0(0xd000000000000021, &stack_buf_78);
    r8 = *([x29, #-0xb8]);
    r25 = ((UltronContext *)r8)->session_flags;
    r8 = &stack_buf_40; // [fp - 0x40]
    stack_buf_40[0x0] = r27;
    r0 = r27;
    r8 = &stack_buf_8; // [fp - 0x8]
    r23 = stack_buf_8[0x0];
    r1 = r23;
    r0 = x25(r27, r0);
    r8 = r24;
    r0 = 0x6361;
    r0 = 0x69746361; // movk lsl #16
    r0 = 0x697669746361; // movk lsl #32
    r0 = 0x7974697669746361; // movk lsl #48
    r1 = -0x1800000000000000;
    r2 = 1;
    r20 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_4d0(0x7974697669746361, -0x1800000000000000);
    r8 = &stack_buf_48; // [fp - 0x48]
    stack_buf_48[0x0] = r22;
    r0 = r22;
    r1 = r23;
    r0 = x25(r22, r0);
    r20 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_4b8(r0, r0);
    r20 = r0;
    r8 = &stack_buf_50; // [fp - 0x50]
    stack_buf_50[0x0] = r24;
    r0 = r24;
    r1 = r23;
    r0 = x25(r24, r0);
    *([x29, #-0x90]) = 0;
    r5 = &stack_buf_90; // [fp - 0x90]
    r0 = r21;
    r2 = r20;
    r3 = 1;
    r4 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3de0(r0, r0);
    r23 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
    r20 = *([x29, #-0x90]);
    if (r23 != 0) {
        // [Block 0x100005930 | PostDom: 0x10000596c]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, r0);
    } else {
        // [Block 0x10000593c | PostDom: 0x10000596c]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3068(r0, r0);
        r21 = r0;
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_428(r0, r0);
        r20 = r0;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
        r21 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_34b8(r0, r0);
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_3230(r0, r0);
    }
    // [Block 0x10000596c | PostDom: 0x100005990]
    r21 = 0;
    r8 = &stack_buf_68; // [fp - 0x68]
    stack_buf_68[0x0] = r25;
    r8 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_71c(r0, r0);
    r8 = *([x8, #0xfa0]);
    /* 0x100005988: cmn x8, #1 */
    if (r0 != 0) { goto loc_100005e94; }
    // [Block 0x100005990 | PostDom: 0x100005aa4]
    r23 = *([x8, #0xf90]);
    r20 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_6a4(r0, r0);
    r20 = r0;
    r0 = r23;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_69e0(r0, r0);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r0);
    r23 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, r0);
    /* 0x1000059cc: stp x1, x0, [x29, #-0xc0] */
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
    r8 = *([x29, #-0xd8]);
    r8 = ((UltronContext *)r8)->session_flags;
    r0 = r19;
    r1 = *([x29, #-0xb0]);
    r0 = x8(r19, r0);
    r25 = 0;
    r9 = *([x29, #-0xc8]);
    r8 = stack_buf_60[0x0];
    r10 = &stack_buf_30; // [fp - 0x30]
    stack_buf_30[0x0] = r9;
    /* 0x100005a00: ldurb w9, [x9, #-0x20] */
    r10 = r9 & 0x3f;
    r11 = 1;
    /* 0x100005a0c: lsl x9, x11, x9 */
    r11 = -1;
    /* 0x100005a14: lsl x12, x11, x9 */
    /* 0x100005a1c: csinv x10, x11, x12, hs */
    r28 = r10 & r8;
    r8 = r9 + 0x3f;
    /* 0x100005a28: lsr x8, x8, #6 */
    *([x29, #-0xf8]) = r8;
    goto loc_100005aa4;
    // [NATURAL LOOP HEADER @ 0x100005a34 (Nesting #1)]
    do {
        r1 = 1;
        r8 = &stack_buf_78; // [fp - 0x78]
        r27 = stack_buf_78[0x0];
        // [NATURAL LOOP HEADER @ 0x100005a40 (Nesting #2)]
        do {
            /* 0x100005a40: ldp x8, x3, [x29, #-0xe0] */
            r8 = stack_buf_78[0x38];
            r0 = r27;
            r2 = 1;
            r0 = x8(r27, 1);
            r0 = r27;
            r1 = 0x1003790b8;
            r2 = 0x1002d7a78;
            r0 = flirt_pthread_mutex_scoped_lock_9360(r27, 0x1003790b8);
            r0 = &stack_buf_90; // [fp - 0x90]
            r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_90, 0x1003790b8);
            r8 = &stack_buf_28; // [fp - 0x28]
            r0 = stack_buf_28[0x0];
            r0 = flirt_dyld_stub_binder_trampoline_6b80(r0, 0x1003790b8);
            // [NATURAL LOOP HEADER @ 0x100005a80 (Nesting #3)]
            do {
                // [NATURAL LOOP HEADER @ 0x100005a80 (Nesting #4)]
                do {
                    r8 = r28 - 1;
                    r28 = r8 & r28;
                    r0 = *([x29, #-0xa8]);
                    r1 = 0x1003790c0;
                    r2 = 0x1002d7a80;
                    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x1003790c0);
                    r8 = *([x29, #-0xf8]);
                } while (1); // loop -> 0x100005aa4
                // [NATURAL LOOP HEADER @ 0x100005aa4 (Nesting #4)]
                do {
                    if (r28 == 0) { goto loc_100005b7c; }
                    // [NATURAL WHILE-LOOP HEADER @ 0x100005aa8 (Nesting #5)]
                    /* 0x100005aa8: rbit x8, x28 */
                    /* 0x100005aac: clz x8, x8 */
                    r22 = r8 | r25;
                    r9 = *([x29, #-0xc8]);
                    /* 0x100005ab8: ldp x8, x23, [x9, #0x30] */
                    r8 = r8 + r22;
                    /* 0x100005ac0: ldp x9, x20, [x8] */
                    /* 0x100005ac4: ldp x19, x27, [x29, #-0xf0] */
                    /* 0x100005ac8: stp x9, x20, [x19] */
                    r24 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_4;
                    r0 = 0;
                    r0 = flirt_objc_retain_release_thunk_83b4(0, 0x1003790c0);
                    r26 = r0;
                    r8 = *([x0, #-8]);
                    *([x29, #-0xe0]) = r8;
                    r8 = stack_buf_28[0x48];
                    *([x29, #-0x100]) = r8;
                    /* 0x100005aec: madd x0, x8, x22, x23 */
                    r1 = r19 + r24;
                    r0 = flirt_pthread_mutex_scoped_lock_85ec(r0, 0x1003790c0);
                    r0 = r19;
                    r19 = *([x29, #-0xa8]);
                    r1 = r19;
                    r2 = 0x1003790c0;
                    r3 = 0x1002d7a80;
                    r0 = flirt_pthread_mutex_scoped_lock_8760(r19, r19);
                    /* 0x100005b18: ldp x24, x8, [x19] */
                    *([x29, #-0xb0]) = r8;
                    r22 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_4;
                    r0 = 0x1003790c8;
                    r1 = flirt_objc_retain_release_thunk_83b4; // 0x1000083b4
                    r2 = 0x1002d7a04;
                    r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790c8, flirt_objc_retain_release_thunk_83b4);
                    r23 = r0;
                    r0 = r20;
                    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, flirt_objc_retain_release_thunk_83b4);
                    r0 = r19 + r22;
                    *([x29, #-0xd8]) = r26;
                    r1 = r26;
                    r2 = r23;
                    r20 = *([x29, #-0xd0]);
                    r0 = flirt_dyld_stub_binder_trampoline_b0(r0, r0);
                    while (r21 != 0) {
                        // [Block 0x100005b68 | PostDom: 0x100005d54]
                        r26 = *([x29, #-0xb0]);
                        r0 = r21;
                        r0 = flirt_dyld_stub_binder_trampoline_3230(0, r0);
                        r21 = 0;
                        goto loc_100005d54;
                        // [Block 0x100005b7c | PostDom: 0x100005b8c]
                        /* 0x100005b7c: adds x25, x25, #1 */
                        r9 = &stack_buf_30; // [fp - 0x30]
                        r9 = stack_buf_30[0x0];
                        if (r10 != 6) { goto loc_100005e90; }
                        // [NATURAL WHILE-LOOP HEADER @ 0x100005b8c (Nesting #6)]
                        while (r25 < x8) {
                            // [Block 0x100005b94 | PostDom: 0x100005b9c]
                            r28 = stack_buf_30[0x3];
                        } // end while-loop -> 0x100005aa8
                        // [Block 0x100005b9c | PostDom: 0x100005ba4]
                        /* 0x100005b9c: adds x25, x25, #1 */
                    } // end while-loop -> 0x100005b8c
                    // [Block 0x100005ba4 | PostDom: exit]
                    goto loc_100005e90;
                    // [Block 0x100005ba8 | PostDom: 0x100005d4c]
                    r22 = r0;
                    r19 = r1;
                    r8 = &stack_buf_58; // [fp - 0x58]
                    r0 = stack_buf_58[0x0];
                    r0 = flirt_dyld_stub_binder_trampoline_3f60(r0, r0);
                    r29 = r29;
                    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r0);
                    r8 = &stack_buf_18; // [fp - 0x18]
                    stack_buf_18[0x0] = r19;
                    r20 = r0;
                    r0 = flirt_dyld_stub_binder_trampoline_4400(r0, r0);
                    r29 = r29;
                    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r0);
                    r8 = &stack_buf_20; // [fp - 0x20]
                    stack_buf_20[0x0] = r22;
                    r22 = r0;
                    r0 = r20;
                    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
                    r8 = &stack_buf_40; // [fp - 0x40]
                    r20 = stack_buf_40[0x0];
                    r8 = r20;
                    r0 = r22;
                    r0 = flirt_dyld_stub_binder_trampoline_518(r0, r0);
                    r0 = r22;
                    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r0);
                    r8 = &stack_buf_60; // [fp - 0x60]
                    r8 = stack_buf_60[0x0];
                    r1 = r8 | 0x8000000000000000;
                    r8 = &stack_buf_48; // [fp - 0x48]
                    r22 = stack_buf_48[0x0];
                    r8 = r22;
                    r0 = 0x21;
                    r0 = 0xd000000000000021; // movk lsl #48
                    r2 = 1;
                    r0 = flirt_dyld_stub_binder_trampoline_4d0(0xd000000000000021, r0);
                    r0 = r20;
                    r8 = &stack_buf_8; // [fp - 0x8]
                    r19 = stack_buf_8[0x0];
                    r1 = r19;
                    r27 = r24;
                    r8 = &stack_buf_68; // [fp - 0x68]
                    r24 = stack_buf_68[0x0];
                    r0 = x24(r0, r0);
                    r8 = &stack_buf_50; // [fp - 0x50]
                    r23 = stack_buf_50[0x0];
                    r8 = r23;
                    r0 = 0x6361;
                    r0 = 0x69746361; // movk lsl #16
                    r0 = 0x697669746361; // movk lsl #32
                    r0 = 0x7974697669746361; // movk lsl #48
                    r1 = -0x1800000000000000;
                    r2 = 1;
                    r20 = r22;
                    r0 = flirt_dyld_stub_binder_trampoline_4d0(0x7974697669746361, -0x1800000000000000);
                    r0 = r22;
                    r1 = r19;
                    r0 = x24(r0, r0);
                    r8 = &stack_buf_10; // [fp - 0x10]
                    stack_buf_10[0x0] = r27;
                    r0 = *([x29, #-0xb0]);
                    /* 0x100005c98: stp x27, x0, [x29, #-0x90] */
                    r26 = r0;
                    r0 = flirt_dyld_stub_binder_trampoline_31b8(r0, r0);
                    r20 = &stack_buf_90; // [fp - 0x90]
                    r0 = 0x6a2e;
                    r0 = 0x6f736a2e; // movk lsl #16
                    r0 = 0x6e6f736a2e; // movk lsl #32
                    r1 = -0x1b00000000000000;
                    r0 = flirt_dyld_stub_binder_trampoline_1ff4(0x6e6f736a2e, -0x1b00000000000000);
                    /* 0x100005cbc: ldp x0, x22, [x29, #-0x90] */
                    r8 = &stack_buf_38; // [fp - 0x38]
                    r27 = stack_buf_38[0x0];
                    r8 = r27;
                    r1 = r22;
                    r20 = r23;
                    r0 = flirt_dyld_stub_binder_trampoline_4dc(r0, r0);
                    r8 = &stack_buf_18; // [fp - 0x18]
                    r20 = stack_buf_18[0x0];
                    r0 = r22;
                    r8 = &stack_buf_20; // [fp - 0x20]
                    r22 = stack_buf_20[0x0];
                    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
                    r0 = r23;
                    r1 = r19;
                    r0 = x24(r0, r0);
                    r0 = r27;
                    r1 = 1;
                    r2 = r22;
                    r3 = r20;
                    r0 = flirt_dyld_stub_binder_trampoline_5e4(r24, 1);
                    r0 = r27;
                    r1 = r19;
                    if (r21 != 0) {
                        // [Block 0x100005d1c | PostDom: 0x100005d4c]
                        r0 = x24(r24, r0);
                        r0 = r22;
                        r1 = r20;
                        r0 = flirt_objc_retain_release_thunk_8720(r0, r0);
                        r0 = r21;
                        r0 = flirt_dyld_stub_binder_trampoline_3230(0, r0);
                        r21 = 0;
                    } else {
                        // [Block 0x100005d3c | PostDom: 0x100005d4c]
                        r0 = x24(r0, r0);
                        r0 = r22;
                        r1 = r20;
                        r0 = flirt_objc_retain_release_thunk_8720(r0, r0);
                    }
                    // [Block 0x100005d4c | PostDom: 0x100005d54]
                    r8 = &stack_buf_10; // [fp - 0x10]
                    r24 = stack_buf_10[0x0];
                    // [Block 0x100005d54 | PostDom: 0x100005d6c]
                    r8 = *([x29, #-0xb8]);
                    if (r24 == x8) {
                        // [Block 0x100005d60 | PostDom: 0x100005d6c]
                        r8 = *([x29, #-0xc0]);
                    } while (r26 == x8); // back-edge -> 0x100005a80
                }
                // [Block 0x100005d6c | PostDom: 0x100005d84]
                r0 = r24;
                r1 = r26;
                /* 0x100005d74: ldp x3, x2, [x29, #-0xc0] */
                r4 = 0;
                r0 = flirt_dyld_stub_binder_trampoline_28d0(r24, r0);
            } while ((r0 & (1 << 0)) != 0); // back-edge -> 0x100005a80
            // [Block 0x100005d84 | PostDom: 0x100005dc0]
            r8 = &stack_buf_28; // [fp - 0x28]
            r0 = stack_buf_28[0x0];
            r0 = flirt_dyld_stub_binder_trampoline_4b40(r0, r0);
            r8 = &stack_buf_70; // [fp - 0x70]
            r22 = stack_buf_70[0x0];
            r0 = r22 + 0x18;
            r1 = &stack_buf_90; // [fp - 0x90]
            r2 = 0x21;
            r3 = 0;
            r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_90);
            r20 = ((UltronContext *)r22)->payload_length;
            r0 = r24;
            r1 = r26;
            r0 = flirt_objc_retain_release_thunk_4e0c(r24, r0);
        } while ((r1 & (1 << 0)) == 0); // back-edge -> 0x100005a34
        // [Block 0x100005dc0 | PostDom: exit]
        r23 = r0;
        r0 = ((UltronContext *)r22)->payload_length;
        r0 = flirt_dyld_stub_binder_trampoline_3374(r0, r0);
        r20 = ((UltronContext *)r22)->payload_length;
        *([x29, #-0xa0]) = r20;
        r8 = -0x8000000000000000;
        ((UltronContext *)r22)->payload_length = r8;
        r24 = r22;
        r8 = &stack_buf_78; // [fp - 0x78]
        r27 = stack_buf_78[0x0];
        if (r0 != 0) {
            // [NATURAL LOOP HEADER @ 0x100005dec (Nesting #2)]
            do {
                /* 0x100005dec: ldp x8, x9, [x20, #0x30] */
                r8 = r8 + r23;
                r22 = stack_buf_78[0x8];
                r8 = *([x29, #-0x100]);
                /* 0x100005dfc: madd x0, x23, x8, x9 */
                r1 = r27;
                r0 = flirt_pthread_mutex_scoped_lock_86dc(r0, r24);
                r0 = r23;
                r1 = r20;
                r0 = flirt_objc_retain_release_thunk_7cf8(r0, r0);
                r0 = r22;
                r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
                r0 = ((UltronContext *)r24)->payload_length;
                ((UltronContext *)r24)->payload_length = r20;
                r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
                r1 = 0;
            } while (r26 != x8); // back-edge -> 0x100005a40
        }
        // [Block 0x100005e30 | PostDom: exit]
        r20 = &stack_buf_a0; // [fp - 0xa0]
        r0 = flirt_objc_retain_release_thunk_b650(r0, 0);
        r20 = *([x29, #-0xa0]);
    } while (r26 != x8); // back-edge -> 0x100005dec
    // [Block 0x100005e40 | PostDom: 0x100005e70]
    r0 = *([x29, #-0xc8]);
    r0 = flirt_dyld_stub_binder_trampoline_3398(r0, 0);
    r0 = *([x29, #-0xc0]);
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, 0);
    r0 = *([x29, #-0xd0]);
    r0 = flirt_dyld_stub_binder_trampoline_3398(r0, 0);
    r8 = *([x29, #-0x60]);
    r9 = *([x9, #0x4a8]);
    r9 = *([x9]);
    if (r9 != x8) { goto loc_100005eac; }
    // [Block 0x100005e70 | PostDom: exit]
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100005e80: ldp x24, x23, [sp, #0x20] */
    /* 0x100005e84: ldp x26, x25, [sp, #0x10] */
    /* 0x100005e88: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── flirt_objc_retain_release_thunk_5e90 @ 0x100005e90 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_5e90 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 2
int64_t flirt_objc_retain_release_thunk_5e90(int64_t arg0, int64_t arg1) {
    r0 = 0x100380fa0;
    r1 = 0x1001595e4;
    r0 = flirt_dyld_stub_binder_trampoline_338c(0x100380fa0, 0x1001595e4);
    goto loc_100005990;
    // [Block 0x100005eac | PostDom: exit]
    r0 = flirt_dyld_stub_binder_trampoline_2e88(r0, 0x1001595e4);
}

// ── flirt_objc_retain_release_thunk_5eb0 @ 0x100005eb0 (6 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_5eb0 ───
// Stack Frame: 96B | Basic Blocks: 6 | Natural Loops: 0 | Post-Dom Nodes: 6 | Callers: 2
int64_t flirt_objc_retain_release_thunk_5eb0(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_68[24]; // [fp - 0x68]
    /* 0x100005eb0: stp x28, x27, [sp, #-0x60]! */
    /* 0x100005eb4: stp x26, x25, [sp, #0x10] */
    /* 0x100005eb8: stp x24, x23, [sp, #0x20] */
    r25 = r20;
    /* 0x100005ed4: stp x8, x1, [x29, #-0x80] */
    r28 = r0;
    r0 = 0x1003790b8;
    r1 = 0x1002d7a78;
    r0 = flirt_swift_bridge_object_retain_7b28(0x1003790b8, 0x1002d7a78);
    r8 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = sp;
    r8 = r9 - r8;
    *([x29, #-0xa0]) = r8;
    sp = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_554(0, 0x1002d7a78);
    r22 = r0;
    r27 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r27)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r24 = r9 - r8;
    sp = r24;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_38(0, 0x1002d7a78);
    r21 = r0;
    r26 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r26)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r23 = r9 - r8;
    sp = r23;
    r0 = 0;
    r0 = flirt_objc_retain_release_thunk_83b4(0, 0x1002d7a78);
    r8 = *([x0, #-8]);
    /* 0x100005f98: stp x8, x0, [x29, #-0x98] */
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, 0x1002d7a78);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r19 = r9 - r8;
    sp = r19;
    r0 = ((UltronContext *)r20)->target_buffer;
    *([x29, #-0x88]) = r0;
    r0 = flirt_dyld_stub_binder_trampoline_4b40(r0, 0x1002d7a78);
    r0 = r20 + 0x18;
    r1 = &stack_buf_68; // [fp - 0x68]
    r2 = 0x20;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_68);
    r20 = ((UltronContext *)r20)->payload_length;
    r8 = ((UltronContext *)r20)->target_buffer;
    if (r8 == 0) { goto loc_100006040; }
    // [Block 0x100005ff0 | PostDom: 0x1000060fc]
    r0 = r28;
    r1 = *([x29, #-0x78]);
    r0 = flirt_objc_retain_release_thunk_4e0c(r0, &stack_buf_68);
    if ((r1 & (1 << 0)) != 0) {
        // [Block 0x100006000 | PostDom: 0x1000060fc]
        r8 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_5;
        r20 = *([x29, #-0x98]);
        r9 = ((VTable_PolymorphicClass_46 *)r20)->vfunc_7;
        /* 0x10000600c: madd x0, x9, x0, x8 */
        r1 = r19;
        r0 = flirt_pthread_mutex_scoped_lock_85ec(r0, r19);
        r0 = &stack_buf_68; // [fp - 0x68]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_68, r19);
        r0 = r19;
        r19 = *([x29, #-0x80]);
        r1 = r19;
        r0 = flirt_pthread_mutex_scoped_lock_86dc(r19, r19);
        r8 = ((VTable_PolymorphicClass_118 *)r20)->vfunc_5;
        r0 = r19;
        r1 = 0;
    } else {
        // [Block 0x100006040 | PostDom: 0x1000060dc]
        r0 = &stack_buf_68; // [fp - 0x68]
        r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_68, 0);
        r0 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_68(0, 0);
        r1 = ((VTable_PolymorphicClass_118 *)r0)->vfunc_4;
        r2 = *([x0, #0x34]);
        r0 = flirt_dyld_stub_binder_trampoline_314c(r0, 0);
        r20 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_5c(r0, 0);
        r20 = r0;
        r8 = *([x8, #0xa70]);
        r1 = *([x8]);
        r8 = ((_TtC5Lumio10PixelScene *)r26)->clockNode;
        r0 = r23;
        r2 = r21;
        r0 = x8(r23, 0);
        r0 = r23;
        r23 = r22;
        r22 = r28;
        r28 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_44(r23, 0);
        r8 = r24;
        r0 = r22;
        r26 = *([x29, #-0x78]);
        r1 = r26;
        r20 = r25;
        r0 = flirt_fast_memcpy_vec_6244(r0, r26);
        r0 = r24;
        r1 = 0;
        r21 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_56c(r24, 0);
        r19 = r0;
        r20 = r1;
        r8 = ((UltronContext *)r27)->session_flags;
        r0 = r24;
        r1 = r23;
        r0 = x8(r24, r0);
        if (r21 == 0) { goto loc_100006130; }
        // [Block 0x1000060dc | PostDom: 0x1000060fc]
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_3230(0, r0);
        r0 = r28;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r0, r0);
        r8 = *([x29, #-0x98]);
        r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
        r0 = *([x29, #-0x80]);
        r1 = 1;
    }
    // [Block 0x1000060fc | PostDom: exit]
    r2 = 1;
    r3 = *([x29, #-0x90]);
    r0 = x8(r0, 1);
    r0 = *([x29, #-0x88]);
    r0 = flirt_dyld_stub_binder_trampoline_6b80(r0, 1);
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100006120: ldp x24, x23, [sp, #0x20] */
    /* 0x100006124: ldp x26, x25, [sp, #0x10] */
    /* 0x100006128: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── flirt_objc_retain_release_thunk_6130 @ 0x100006130 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_6130 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_objc_retain_release_thunk_6130(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_68[104]; // [fp - 0x68]
    r0 = 0x1003790f0;
    r1 = flirt_objc_retain_release_thunk_83b4; // 0x1000083b4
    r2 = 0x1002d7a2c;
    r0 = flirt_pthread_mutex_scoped_lock_869c(0x1003790f0, flirt_objc_retain_release_thunk_83b4);
    r4 = r0;
    r24 = *([x29, #-0x80]);
    r8 = r24;
    r27 = *([x29, #-0x90]);
    r0 = r27;
    r1 = r19;
    r23 = r20;
    r2 = r20;
    r3 = r27;
    r20 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_50(r27, r19);
    if (r21 != 0) {
        // [Block 0x10000617c | PostDom: exit]
        r0 = r28;
        r0 = flirt_dyld_stub_binder_trampoline_3398(r28, r19);
        r0 = r19;
        r1 = r23;
        r0 = flirt_objc_retain_release_thunk_8720(r19, r20);
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_3230(r21, r20);
        r8 = *([x29, #-0x98]);
        r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
        r0 = r24;
        r1 = 1;
        r2 = 1;
        r3 = r27;
        goto loc_100006104;
    }
    // [Block 0x1000061b4 | PostDom: exit]
    r0 = r19;
    r1 = r23;
    r0 = flirt_objc_retain_release_thunk_8720(r19, r20);
    r8 = *([x29, #-0x98]);
    r19 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
    r0 = r24;
    r1 = 0;
    r2 = 1;
    r3 = r27;
    r0 = x19(r24, 0);
    r0 = r24;
    r21 = *([x29, #-0xa0]);
    r1 = r21;
    r0 = flirt_pthread_mutex_scoped_lock_85ec(r24, r21);
    r0 = r21;
    r1 = 0;
    r2 = 1;
    r3 = r27;
    r0 = x19(r21, 0);
    r0 = r25 + 0x18;
    r1 = &stack_buf_68; // [fp - 0x68]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_3194(r0, &stack_buf_68);
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(r26, &stack_buf_68);
    r20 = r25 + 0x18;
    r0 = r21;
    r1 = r22;
    r2 = r26;
    r0 = flirt_fast_memcpy_vec_dfc4(r21, r22);
    r0 = &stack_buf_68; // [fp - 0x68]
    r0 = flirt_dyld_stub_binder_trampoline_3224(&stack_buf_68, r22);
    r0 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_3398(r28, r22);
    goto loc_100006108;
}

// ── flirt_fast_memcpy_vec_6244 @ 0x100006244 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_6244 ───
// Stack Frame: 96B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 2
int64_t flirt_fast_memcpy_vec_6244(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_60[16]; // [fp - 0x60]
    /* 0x100006244: stp x28, x27, [sp, #-0x60]! */
    /* 0x100006248: stp x26, x25, [sp, #0x10] */
    /* 0x10000624c: stp x24, x23, [sp, #0x20] */
    r22 = r1;
    r23 = r0;
    r21 = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_554(0, r1);
    r19 = r0;
    r28 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r28)->vfunc_6;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, r1);
    r9 = sp;
    r10 = r8 + 0xf;
    r12 = r10 & 0xfffffffffffffff0;
    r20 = r9 - r12;
    sp = r20;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, r1);
    r9 = sp;
    r25 = r9 - r12;
    sp = r25;
    r9 = r8;
    r16 = *([x16, #0x490]);
    r0 = x16(r0, r1);
    r8 = sp;
    r24 = r8 - r12;
    sp = r24;
    r0 = *([x8, #0x468]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_3f60(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r26 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_4400(r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, r1);
    r27 = r0;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r1);
    r8 = r20;
    r0 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_518(r0, r1);
    r0 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r1);
    r8 = "Library/Application Support/Lumio";
    r8 = r8 - 0x20;
    r1 = r8 | 0x8000000000000000;
    r8 = r25;
    r0 = 0x21;
    r0 = 0xd000000000000021; // movk lsl #48
    r2 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_4d0(0xd000000000000021, r1);
    r26 = ((UltronContext *)r28)->session_flags;
    r0 = r20;
    r1 = r19;
    r0 = x26(r20, r0);
    r0 = 0x6361;
    r0 = 0x69746361; // movk lsl #16
    r0 = 0x697669746361; // movk lsl #32
    r0 = 0x7974697669746361; // movk lsl #48
    r8 = r24;
    r1 = -0x1800000000000000;
    r2 = 1;
    r20 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_4d0(0x7974697669746361, -0x1800000000000000);
    r0 = r25;
    r1 = r19;
    r0 = x26(r25, r0);
    /* 0x10000638c: stp x23, x22, [x29, #-0x60] */
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(r1, r0);
    r0 = 0x6a2e;
    r0 = 0x6f736a2e; // movk lsl #16
    r0 = 0x6e6f736a2e; // movk lsl #32
    r20 = &stack_buf_60; // [fp - 0x60]
    r1 = -0x1b00000000000000;
    r0 = flirt_dyld_stub_binder_trampoline_1ff4(0x6e6f736a2e, -0x1b00000000000000);
    /* 0x1000063b0: ldp x0, x22, [x29, #-0x60] */
    r8 = r21;
    r1 = r22;
    r20 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_4dc(r0, r1);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r1, r1);
    r0 = r24;
    r1 = r19;
    r0 = x26(r24, r0);
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x1000063e8: ldp x24, x23, [sp, #0x20] */
    /* 0x1000063ec: ldp x26, x25, [sp, #0x10] */
    /* 0x1000063f0: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── sub_1000063f8 @ 0x1000063f8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_1000063f8 ───
int64_t sub_1000063f8(int64_t arg0, int64_t arg1) {
    *([x8]) = 0;
    return r0;
}

// ── flirt_objc_retain_release_thunk_6400 @ 0x100006400 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_6400 ───
// Stack Frame: 64B | Basic Blocks: 7 | Natural Loops: 1 | Post-Dom Nodes: 7 | Callers: 7
int64_t flirt_objc_retain_release_thunk_6400(int64_t arg0, int64_t arg1) {
    /* 0x100006400: stp x24, x23, [sp, #-0x40]! */
    r8 = ((UltronContext *)r0)->target_buffer;
    if (r8 == 0) { goto loc_100006470; }
    // [Block 0x10000641c | PostDom: 0x10000642c]
    r19 = r2;
    r20 = r1;
    r8--;
    r23 = r0 + 0x28;
    // [NATURAL WHILE-LOOP HEADER @ 0x10000642c (Nesting #1)]
    r24 = r8;
    /* 0x100006430: ldp x21, x22, [x23, #-8] */
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_31b8(r22, r1);
    r0 = r21;
    r1 = r22;
    r2 = r20;
    r3 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_2078(r21, r22);
    r21 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r22, r22);
    while ((r21 & (1 << 0)) == 0) {
        // [Block 0x100006460 | PostDom: 0x10000646c]
        r8 = r24 - 1;
        r23 = r23 + 0x10;
    } // end while-loop -> 0x10000642c
    // [Block 0x10000646c | PostDom: 0x100006474]
    goto loc_100006474;
    // [Block 0x100006470 | PostDom: 0x100006474]
    r21 = 0;
loc_100006474:
    r0 = r21 & 1;
    /* 0x100006484: ldp x24, x23, [sp], #0x40 */
    return r0;
}

// ── flirt_objc_retain_release_thunk_648c @ 0x10000648c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_648c ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t flirt_objc_retain_release_thunk_648c(int64_t arg0, int64_t arg1) {
    r0 = ((UltronContext *)r20)->target_buffer;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, r1);
    r0 = ((UltronContext *)r20)->payload_length;
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r1);
    r8 = *([x8, #0xd40]);
    r1 = 0x1003790d8;
    r2 = 0x1002d7a90;
    r0 = r20 + r8;
    r0 = flirt_pthread_mutex_scoped_lock_9360(r0, 0x1003790d8);
    r8 = *([x8, #0xd58]);
    r0 = *([x20, x8]);
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, 0x1003790d8);
    r8 = *([x8, #0xd60]);
    r0 = *([x20, x8]);
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, 0x1003790d8);
    r19 = *([x8, #0xd68]);
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_728(0, 0x1003790d8);
    r1 = r0;
    r8 = *([x0, #-8]);
    r8 = ((UltronContext *)r8)->session_flags;
    r0 = r20 + r19;
    r0 = x8(r0, r0);
    r8 = *([x8, #0xd70]);
    r0 = *([x20, x8]);
    r0 = flirt_dyld_stub_binder_trampoline_31a0(r0, r0);
    r8 = *([x20]);
    r1 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_4;
    r2 = *([x8, #0x34]);
    r0 = r20;
    goto loc_1002d31dc;
}

// ── flirt_fast_memcpy_vec_6538 @ 0x100006538 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_6538 ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 1
int64_t flirt_fast_memcpy_vec_6538(int64_t arg0, int64_t arg1) {
    /* 0x10000653c: stp x24, x23, [sp, #0x60] */
    r0 = *([x8, #0x470]);
    r0 = flirt_dyld_stub_binder_trampoline_302c(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_4500(r0, r1);
    ((UltronContext *)r20)->target_buffer = r0;
    r19 = *([x19, #0xa18]);
    r0 = r19;
    r0 = flirt_fast_memcpy_vec_9804(0x10036d000, r1);
    ((UltronContext *)r20)->payload_length = r0;
    r21 = *([x8, #0xd40]);
    r0 = 0x100378db8;
    r1 = 0x1002d7960;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100378db8, 0x1002d7960);
    r3 = r0;
    r8 = *([x0, #-8]);
    r8 = ((VTable_PolymorphicClass_118 *)r8)->vfunc_5;
    r0 = r20 + r21;
    r1 = 1;
    r2 = 1;
    r0 = x8(r0, 1);
    r8 = *([x8, #0xd48]);
    *([x20, x8]) = 0;
    r8 = *([x8, #0xd50]);
    *([x20, x8]) = 0;
    r8 = *([x8, #0xd58]);
    *([x20, x8]) = 0;
    r8 = *([x8, #0xd60]);
    *([x20, x8]) = r19;
    r8 = *([x8, #0xd68]);
    r8 = r20 + r8;
    r0 = flirt_dyld_stub_binder_trampoline_71c(r0, 1);
    r0 = 0x100385ff0;
    r1 = 0x1002da2b0;
    r0 = flirt_swift_bridge_object_retain_7b28(0x100385ff0, 0x1002da2b0);
    r1 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_3338(r0, sp);
    r19 = r0;
    q0 = *([x8, #0x910]);
    ((UltronContext *)r0)->target_buffer = q0;
    r0 = *([x8, #0x478]);
    r0 = flirt_dyld_stub_binder_trampoline_3050(r0, sp);
    r0 = flirt_dyld_stub_binder_trampoline_4ba0(r0, sp);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, sp);
    r21 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_3a20(r0, sp);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_3074(r0, sp);
    r23 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_305c(r0, sp);
    if (r23 != 0) {
        // [Block 0x100006654 | PostDom: 0x100006678]
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_1ec8(r0, sp);
        r22 = r0;
        r21 = r1;
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_305c(r0, sp);
    } else {
        // [Block 0x100006670 | PostDom: 0x100006678]
        r22 = 0;
        r21 = -0x2000000000000000;
    }
    // [Block 0x100006678 | PostDom: exit]
    r23 = r19;
    *([x23, #0x20]!) = r22;
    r22 = *([x8, #0xd70]);
    r8 = "com.apple.loginwindow";
    r8 = r8 - 0x20;
    r8 = r8 | 0x8000000000000000;
    r9 = 0x15;
    r9 = 0xd000000000000015; // movk lsl #48
    /* 0x1000066a0: stp x21, x9, [x19, #0x28] */
    r10 = "com.apple.ScreenSaver.Engine";
    r10 = r10 - 0x20;
    r10 = r10 | 0x8000000000000000;
    r11 = r9 + 7;
    /* 0x1000066b8: stp x8, x11, [x19, #0x38] */
    r8 = "com.apple.UserNotificationCenter";
    r8 = r8 - 0x20;
    r8 = r8 | 0x8000000000000000;
    r9 = r9 + 0xb;
    /* 0x1000066d0: stp x10, x9, [x19, #0x48] */
    ((_TtC5Lumio10PixelScene *)r19)->lightNode = r8;
    r0 = r19;
    r0 = flirt_fast_memcpy_vec_d9e0(r0, sp);
    r21 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_33c8(r0, sp);
    r2 = *([x2, #0x398]);
    r0 = r23;
    r1 = 4;
    r0 = flirt_dyld_stub_binder_trampoline_3164(r0, 4);
    *([x20, x22]) = r21;
    r0 = r20;
    /* 0x100006714: ldp x24, x23, [sp, #0x60] */
    return r0;
}

// ── flirt_objc_retain_release_thunk_6720 @ 0x100006720 (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_6720 ───
// Stack Frame: 48B | Basic Blocks: 8 | Natural Loops: 0 | Post-Dom Nodes: 8 | Callers: 0
int64_t flirt_objc_retain_release_thunk_6720(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_10[32]; // [sp + 0x10]
    /* 0x100006730: ldp x19, x20, [x0] */
    r21 = ((UltronContext *)r0)->payload_length;
    r0 = 1;
    r1 = 0x1a;
    r2 = 4;
    r3 = 0;
    r0 = flirt_fast_memcpy_vec_f974(1, 0x1a);
    if (r0 != 0) {
        // [Block 0x100006750 | PostDom: 0x100006774]
        r0 = 0xff;
        r1 = r20;
        r2 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_12c8(0xff, r20);
    } else {
        // [Block 0x100006764 | PostDom: 0x100006774]
        r0 = 0xff;
        r1 = r20;
        r2 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_11d8(0xff, r20);
    }
    // [Block 0x100006774 | PostDom: exit]
    r2 = r0;
    r0 = 0;
    r1 = r19;
    goto loc_1002d0efc;
    // [Block 0x100006790 | PostDom: 0x10000680c]
    /* 0x100006794: stp x24, x23, [sp, #0x20] */
    /* 0x1000067a8: ldp x19, x20, [x0] */
    /* 0x1000067ac: ldp x23, x21, [x0, #0x10] */
    r0 = 1;
    r1 = 0x1a;
    r2 = 4;
    r3 = 0;
    r0 = flirt_fast_memcpy_vec_f974(1, 0x1a);
    if (r0 != 0) {
        // [Block 0x1000067c8 | PostDom: 0x10000680c]
        r0 = 0xff;
        r1 = r20;
        r2 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_12c8(0xff, r20);
        r21 = r0;
        r20 = &stack_buf_10; // [sp + 0x10]
        r22 = *([x22, #0x580]);
    } else {
        // [Block 0x1000067ec | PostDom: 0x10000680c]
        r0 = 0xff;
        r1 = &stack_buf_10;
        r2 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_11d8(0xff, &stack_buf_10);
        r21 = r0;
        r20 = sp;
        r22 = *([x22, #0x490]);
    }
    // [Block 0x10000680c | PostDom: exit]
    r0 = 0xff;
    r1 = r19;
    r2 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_efc(0xff, r19);
    r19 = r0;
    r0 = r22;
    r1 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_3308(0x10036c000, r0);
    /* 0x10000682c: stp x23, x0, [x20] */
    r0 = *([x0, #0x140]);
    r1 = r19;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_3308(0x10036c000, r0);
    /* 0x100006850: ldp x24, x23, [sp, #0x20] */
    return r0;
}

// ── sub_10000685c @ 0x10000685c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_10000685c ───
int64_t sub_10000685c(int64_t arg0, int64_t arg1) {
    r8 = *([x0]);
    r9 = *([x20]);
    /* 0x100006864: bics xzr, x8, x9 */
    /* 0x100006868: cset w0, eq */
    return r0;
}

// ── sub_100006870 @ 0x100006870 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100006870 ───
int64_t sub_100006870(int64_t arg0, int64_t arg1) {
    r8 = *([x1]);
    *([x0]) = r8;
    r9 = *([x20]);
    /* 0x10000687c: bics xzr, x8, x9 */
    /* 0x100006880: cset w0, ne */
    r8 = r9 | r8;
    *([x20]) = r8;
    return r0;
}

