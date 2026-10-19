// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : _main @ 0x1000012d8
// CFG Blocks: 5 | Loop Regions: 0 | If-Else Hammocks: 0
// ============================================================================
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _main ───
// Stack Frame: 112B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 0
int64_t _main(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[8]; // [fp - 0x8]
    uint8_t stack_buf_10[8]; // [fp - 0x10]
    uint8_t stack_buf_18[8]; // [fp - 0x18]
    uint8_t stack_buf_20[8]; // [fp - 0x20]
    uint8_t stack_buf_28[8]; // [fp - 0x28]
    uint8_t stack_buf_30[8]; // [fp - 0x30]
    uint8_t stack_buf_38[8]; // [fp - 0x38]
    uint8_t stack_buf_60[40]; // [fp - 0x60]
    uint8_t stack_buf_118[184]; // [fp - 0x118]
    /* 0x1000012d8: stp d9, d8, [sp, #-0x70]! */
    /* 0x1000012dc: stp x28, x27, [sp, #0x10] */
    /* 0x1000012e0: stp x26, x25, [sp, #0x20] */
    /* 0x1000012e4: stp x24, x23, [sp, #0x30] */
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_506c(0, r1);
    r25 = r0;
    r24 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r24)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r21 = r9 - r8;
    sp = r21;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5084(0, r1);
    r26 = r0;
    r22 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r22)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r23 = r9 - r8;
    sp = r23;
    r8 = 1;
    _$s4main7fftLog2029_12232F587A4C5CD8B1EEDF696793E2FCLLSuvp.0 = r8; // [0x10000c880]
    _$s4main11sampleCount029_12232F587A4C5CD8B1EEDF696793E2FCLLSivp.0 = r8; // [0x10000c888]
    _$s4main9bandCount029_12232F587A4C5CD8B1EEDF696793E2FCLLSivp.0 = r8; // [0x10000c890]
    r8 = 0x4044000000000000;
    _$s4main16minimumFrequency029_12232F587A4C5CD8B1EEDF696793E2FCLLSdvp.0 = r8; // [0x10000c898]
    r8 = 0x400000000000;
    r8 = 0x40cf400000000000; // movk lsl #48
    _$s4main16maximumFrequency029_12232F587A4C5CD8B1EEDF696793E2FCLLSdvp.0 = r8; // [0x10000c8a0]
    r0 = *([x8, #0x508]);
    r0 = flirt_dyld_stub_binder_trampoline_533c(r0, r1);
    r0 = -[self init](r0, r1);
    _$s4main10outputLock029_12232F587A4C5CD8B1EEDF696793E2FCLLSo6NSLockCvp = r0; // [0x10000c8a8]
    r0 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCMa(r0, r1);
    r1 = 0xb0;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_539c(r0, 0xb0);
    r20 = r0;
    r0 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfc(r0, 0xb0);
    _$s4main8spectrum029_12232F587A4C5CD8B1EEDF696793D2FCLLAA19SystemAudioSpectrumACLLCvp = r20; // [0x10000c8b0]
    r9 = _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp; // 0x10000c870
    r8 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r8)->field_2c8_ro;
    *([x9]) = r8;
    r1 = _$sSo18OS_dispatch_sourceCML; // 0x10000c540
    r2 = 0x10000c510;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo18OS_dispatch_sourceCML);
    r19 = r0;
    r1 = _$sSo17OS_dispatch_queueCML; // 0x10000c548
    r2 = 0x10000c518;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo17OS_dispatch_queueCML);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_5060(r0, _$sSo17OS_dispatch_queueCML);
    r1 = r0;
    r0 = 0xf;
    r0 = flirt_dyld_stub_binder_trampoline_5384(0xf, r0);
    r8 = &stack_buf_38; // [fp - 0x38]
    stack_buf_38[0x0] = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5174(r0, r0);
    r28 = r0;
    r0 = 0xf;
    r1 = r28;
    r8 = &stack_buf_30; // [fp - 0x30]
    stack_buf_30[0x0] = r19;
    r20 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5198(0xf, r0);
    r27 = r0;
    r0 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_5444(r0, r0);
    r28 = r0;
    r8 = _$s4main6finishyyF; // 0x1000019c4
    /* 0x100001480: stp x8, xzr, [x29, #-0xf8] */
    r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r8)->field_10_rw;
    r9 = &stack_buf_18; // [fp - 0x18]
    stack_buf_18[0x0] = r8;
    d8 = *([x8, #0x890]);
    r8 = &stack_buf_10; // [fp - 0x10]
    stack_buf_10[0x0] = d8;
    r9 = _$sIeg_IeyB_TR; // 0x1000019e4
    r8 = _block_descriptor; // 0x1000084a8
    r10 = &stack_buf_8; // [fp - 0x8]
    stack_buf_8[0x0] = r9;
    *([x29, #-0x100]) = r8;
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_118, r0);
    r19 = r0;
    r8 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, r0);
    r8 = r21;
    r0 = r28;
    r0 = _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_(r0, r0);
    r0 = r23;
    r1 = r21;
    r2 = r19;
    r3 = r28;
    r20 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_51b0(r23, r21);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r21);
    r24 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r24)->field_08_rw;
    r0 = r21;
    r8 = &stack_buf_20; // [fp - 0x20]
    stack_buf_20[0x0] = r25;
    r1 = r25;
    r0 = x24(r21, r0);
    r22 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r22)->field_08_rw;
    r0 = r23;
    r8 = &stack_buf_28; // [fp - 0x28]
    stack_buf_28[0x0] = r26;
    r1 = r26;
    r0 = x22(r23, r0);
    r0 = r28;
    r28 = _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp; // 0x10000c870
    r0 = flirt_dyld_stub_binder_trampoline_51c8(r0, r0);
    r1 = &stack_buf_118; // [fp - 0x118]
    r0 = r28;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(_$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp, &stack_buf_118);
    r0 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_54bc(r0, &stack_buf_118);
    r20 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_50f0(r0, &stack_buf_118);
    r8 = *([x28]); // __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
    r8 = r8 & 0xffffffffffffff8;
    /* 0x10000156c: ldp x0, x8, [x8, #0x10] */
    if (r0 >= x8) { goto loc_100001870; }
    // [Block 0x100001578 | PostDom: 0x1000016c4]
    r1 = r27;
    r20 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_5114(r0, r0);
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_5408(&stack_buf_118, r0);
    r0 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_54b0(r0, r0);
    r0 = flirt_dyld_stub_binder_trampoline_5060(r0, r0);
    r1 = r0;
    r0 = 2;
    r0 = flirt_dyld_stub_binder_trampoline_5384(2, r0);
    r8 = &stack_buf_38; // [fp - 0x38]
    r20 = stack_buf_38[0x0];
    r0 = flirt_dyld_stub_binder_trampoline_5174(r0, r0);
    r19 = r0;
    r0 = 2;
    r1 = r19;
    r8 = &stack_buf_30; // [fp - 0x30]
    r20 = stack_buf_30[0x0];
    r0 = flirt_dyld_stub_binder_trampoline_5198(2, r0);
    r25 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_5444(r0, r0);
    r19 = r0;
    r8 = _$s4main6finishyyF; // 0x1000019c4
    /* 0x1000015e8: stp x8, xzr, [x29, #-0xf8] */
    r27 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r27)->field_10_rw;
    r8 = &stack_buf_18; // [fp - 0x18]
    stack_buf_18[0x0] = r27;
    r8 = &stack_buf_10; // [fp - 0x10]
    stack_buf_10[0x0] = d8;
    r8 = _block_descriptor.3; // 0x1000084d0
    r9 = _$sIeg_IeyB_TR; // 0x1000019e4
    r10 = &stack_buf_8; // [fp - 0x8]
    stack_buf_8[0x0] = r9;
    *([x29, #-0x100]) = r8;
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_118, r0);
    r26 = r0;
    r8 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, r0);
    r8 = r21;
    r0 = r19;
    r0 = _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_(r0, r0);
    r0 = r23;
    r1 = r21;
    r2 = r26;
    r3 = r19;
    r20 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_51b0(r23, r21);
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r21);
    r0 = r21;
    r8 = &stack_buf_20; // [fp - 0x20]
    r1 = stack_buf_20[0x0];
    r0 = x24(r21, r21);
    r0 = r23;
    r8 = &stack_buf_28; // [fp - 0x28]
    r1 = stack_buf_28[0x0];
    r0 = x22(r23, r21);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_51c8(r0, r21);
    r1 = &stack_buf_118; // [fp - 0x118]
    r0 = r28;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(_$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp, &stack_buf_118);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_54bc(r0, &stack_buf_118);
    r20 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_50f0(r0, &stack_buf_118);
    r8 = *([x28]); // __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
    r8 = r8 & 0xffffffffffffff8;
    /* 0x1000016b4: ldp x0, x8, [x8, #0x10] */
    r22 = r27;
    if (r0 >= x8) { goto loc_10000189c; }
    // [Block 0x1000016c4 | PostDom: 0x100001784]
    r21 = 0x16;
    r21 = 0xd000000000000016; // movk lsl #48
    r20 = _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp; // 0x10000c870
    r1 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_5114(r0, r0);
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_5408(&stack_buf_118, r0);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_54b0(r0, r0);
    r0 = *([x8, #0x520]);
    r0 = flirt_dyld_stub_binder_trampoline_5348(r0, r0);
    r0 = -[self fileHandleWithStandardInput](r0, r0);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, r0);
    r19 = r0;
    r8 = _$s4mainySo12NSFileHandleCcfU_; // 0x100001ad4
    /* 0x100001710: stp x8, xzr, [x29, #-0xf8] */
    r8 = &stack_buf_18; // [fp - 0x18]
    stack_buf_18[0x0] = r22;
    r8 = &stack_buf_10; // [fp - 0x10]
    stack_buf_10[0x0] = d8;
    r8 = _$sSo12NSFileHandleCIeghg_ABIeyBhy_TR; // 0x100001d80
    r9 = _block_descriptor.6; // 0x1000084f8
    r10 = &stack_buf_8; // [fp - 0x8]
    stack_buf_8[0x0] = r8;
    *([x29, #-0x100]) = r9;
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_118, r0);
    r20 = r0;
    r0 = *([x29, #-0xf0]);
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, r0);
    r0 = r19;
    r2 = r20;
    r0 = -[self setReadabilityHandler:](r0, r0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r0);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = "/System/Library/PrivateFrameworks/TCC.framework/Versions/A/TCC";
    r1 = 2;
    r0 = flirt_dyld_stub_binder_trampoline_52e8("/System/Library/PrivateFrameworks/TCC.framework/Versions/A/TCC", 2);
    if (r0 == 0) { goto loc_1000018c8; }
    // [Block 0x100001784 | PostDom: 0x100001794]
    r1 = "TCCAccessRequest";
    r0 = flirt_dyld_stub_binder_trampoline_52f4(r0, "TCCAccessRequest");
    if (r0 == 0) { goto loc_1000018c8; }
    // [Block 0x100001794 | PostDom: exit]
    r19 = r0;
    r8 = "kTCCServiceAudioCapture";
    r8 = r8 - 0x20;
    r0 = r21 + 1;
    r1 = r8 | 0x8000000000000000;
    r0 = flirt_dyld_stub_binder_trampoline_50d8(r0, "TCCAccessRequest");
    r20 = r0;
    r8 = _$s4mainySbcfU0_; // 0x100001dcc
    /* 0x1000017bc: stp x8, xzr, [x29, #-0xf8] */
    r8 = &stack_buf_18; // [fp - 0x18]
    stack_buf_18[0x0] = r22;
    r8 = &stack_buf_10; // [fp - 0x10]
    stack_buf_10[0x0] = d8;
    r8 = _$sSbIegy_SbIeyBy_TR; // 0x100004124
    r9 = _block_descriptor.9; // 0x100008740
    r10 = &stack_buf_8; // [fp - 0x8]
    stack_buf_8[0x0] = r8;
    *([x29, #-0x100]) = r9;
    r0 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_118, "TCCAccessRequest");
    r21 = r0;
    r0 = *([x29, #-0xf0]);
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, "TCCAccessRequest");
    r0 = r20;
    r1 = 0;
    r2 = r21;
    r0 = x19(r0, 0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, 0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0);
    r0 = *([x8, #0x528]);
    r0 = flirt_dyld_stub_binder_trampoline_5348(r0, 0);
    r0 = -[self mainRunLoop](r0, 0);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, 0);
    r19 = r0;
    r0 = -[self run](r0, 0);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0);
    r0 = 0;
    sp = &stack_buf_60; // [fp - 0x60]
    /* 0x10000185c: ldp x24, x23, [sp, #0x30] */
    /* 0x100001860: ldp x26, x25, [sp, #0x20] */
    /* 0x100001864: ldp x28, x27, [sp, #0x10] */
    /* 0x100001868: ldp d9, d8, [sp], #0x70 */
    return r0;
}