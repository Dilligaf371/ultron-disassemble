// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : __Z20StartModifierCaptureRKN4Napi12CallbackInfoE @ 0x1978
// CFG Blocks: 19 | Loop Regions: 0 | If-Else Hammocks: 7
// ============================================================================
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __Z20StartModifierCaptureRKN4Napi12CallbackInfoE ───
// Stack Frame: 0B | Basic Blocks: 19 | Natural Loops: 0 | Post-Dom Nodes: 19 | Callers: 1
int64_t __Z20StartModifierCaptureRKN4Napi12CallbackInfoE(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_28[16]; // [sp + 0x28]
    // [SWITCH DISPATCH DETECTED @ 0x1978: Multi-Way Cascade on r8 (4 cases)]
    switch (r8) { case 0x2: goto loc_1a80; case 0x1: goto loc_1a80; case 0x7: goto loc_1a80; case 0x8: goto loc_1af0; }
    /* 0x197c: stp x24, x23, [sp, #0x30] */
    r19 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw;
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r0)->field_20_ro;
    if (r8 != 2) { goto loc_1a80; }
    // [Block 0x19a0 | PostDom: 0x1a94]
    r21 = r0;
    r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r0)->field_28_ro;
    r1 = *([x8]);
    if (r1 == 0) { goto loc_1a80; }
    // [Block 0x19b0 | PostDom: 0x19c0]
    r2 = sp;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8e10(r19, r1);
    if (r0 != 0) { goto loc_1bc8; }
    // [Block 0x19c0 | PostDom: 0x1a94]
    r8 = *([sp]);
    if (r8 != 1) { goto loc_1a80; }
    // [Block 0x19cc | PostDom: 0x1a94]
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r21)->field_20_ro;
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r21)->field_08_rw;
    if (r8 < 2) { goto loc_19ec; }
    // [Block 0x19dc | PostDom: 0x1a94]
    r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r21)->field_28_ro;
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r8)->field_08_rw;
    if (r1 != 0) { goto loc_1a04; }
    // [Block 0x19e8 | PostDom: 0x1a80]
        /* [PHOENIX REGION FOLDED: eliminated goto loc_1a80 -> structured control flow] */
    // [Block 0x19ec | PostDom: 0x19fc]
    r1 = sp;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8db0(r20, sp);
    if (r0 != 0) { goto loc_1c08; }
    // [Block 0x19fc | PostDom: 0x1a94]
    r1 = *([sp]);
    if (r1 == 0) { goto loc_1a80; }
    // [Block 0x1a04 | PostDom: 0x1a14]
    r2 = sp;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8eac(r20, sp);
    if (r0 != 0) { goto loc_1be8; }
    // [Block 0x1a14 | PostDom: 0x1a94]
    r8 = *([sp]);
    if (r8 != 7) { goto loc_1a80; }
    // [Block 0x1a20 | PostDom: 0x1a2c]
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r21)->field_20_ro;
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r21)->field_08_rw;
    if (r8 == 0) { goto loc_1ab0; }
    // [Block 0x1a2c | PostDom: 0x1a4c]
    r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r21)->field_28_ro;
    r2 = *([x8]);
    r0 = sp;
    r1 = r20;
    r0 = __ZN4Napi12TypedArrayOfIhEC2EP10napi_env__P12napi_value__(sp, r20);
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_10_ro;
    if (r8 > 0xa) { goto loc_1adc; }
    // [Block 0x1a4c | PostDom: 0x1a68]
    r9 = 0x8a498;
    r8 = *([x9, x8, lsl #3]);
    r9 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    /* 0x1a5c: mul x8, x9, x8 */
    if (r8 == 8) { goto loc_1af0; }
    // [Block 0x1a68 | PostDom: 0x1a78]
    r1 = &stack_buf_28; // [sp + 0x28]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8d80(r19, &stack_buf_28);
    if (r0 != 0) { goto loc_1c28; }
    // [Block 0x1a78 | PostDom: 0x1a94]
    r1 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
        /* [PHOENIX REGION FOLDED: eliminated goto loc_1a94 -> structured control flow] */
    // [POST-DOMINATOR MERGE NODE: loc_1a80]
    r1 = sp;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8d80(r19, sp);
    if (r0 != 0) { goto loc_1ba8; }
    // [Block 0x1a90 | PostDom: 0x1a94]
    r1 = *([sp]);
    // [Block 0x1a94 | PostDom: exit]
    r0 = r19;
    /* 0x1aa4: ldp x24, x23, [sp, #0x30] */
    return r0;
}