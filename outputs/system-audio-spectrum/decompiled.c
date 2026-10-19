/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Applications/ChatGPT.app/Contents/Resources/native/system-audio-spectrum
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── _main @ 0x1000012d8 (5 basic blocks) ──
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

// ── flirt_memmove_overlap_safe_1870 @ 0x100001870 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_memmove_overlap_safe_1870 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_memmove_overlap_safe_1870(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_118[256]; // [fp - 0x118]
    /* 0x100001874: cset w8, hi */
    r20 = _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp; // 0x10000c870
    r1 = r0 + 1;
    r19 = r0;
    r0 = r8;
    r2 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_50fc(r8, r1);
    r0 = r19;
    goto loc_100001578;
    // [Block 0x10000189c | PostDom: exit]
    /* 0x1000018a0: cset w8, hi */
    r20 = _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp; // 0x10000c870
    r1 = r0 + 1;
    r19 = r0;
    r0 = r8;
    r2 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_50fc(r8, r1);
    r0 = r19;
    goto loc_1000016c4;
    // [Block 0x1000018c8 | PostDom: exit]
    r0 = _$ss23_ContiguousArrayStorageCySS_yptGMd; // 0x10000c6e8
    r1 = _$ss23_ContiguousArrayStorageCySS_yptGMR; // 0x1000059c0
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCySS_yptGMd, _$ss23_ContiguousArrayStorageCySS_yptGMR);
    r1 = &stack_buf_118; // [fp - 0x118]
    r0 = flirt_dyld_stub_binder_trampoline_5474(r0, &stack_buf_118);
    r19 = r0;
    r8 = 3;
    r9 = 6;
    /* 0x1000018f0: stp x8, x9, [x0, #0x10] */
    r8 = 0x7974;
    r8 = 0x65707974; // movk lsl #16
    r9 = -0x1c00000000000000;
    /* 0x100001900: stp x8, x9, [x0, #0x20] */
    r8 = *([x8, #0x1a0]);
    r9 = 0x7265;
    r9 = 0x6f727265; // movk lsl #16
    r9 = 0x726f727265; // movk lsl #32
    r10 = -0x1b00000000000000;
    /* 0x10000191c: stp x9, x10, [x0, #0x30] */
    r9 = 0x706f;
    r9 = 0x7265706f; // movk lsl #16
    r9 = 0x74617265706f; // movk lsl #32
    r9 = 0x6f6974617265706f; // movk lsl #48
    /* 0x100001930: stp x8, x9, [x0, #0x48] */
    r9 = 0x6e;
    r9 = 0xe90000000000006e; // movk lsl #48
    r10 = "permission-unavailable";
    r10 = r10 - 0x20;
    r10 = r10 | 0x8000000000000000;
    /* 0x10000194c: stp x9, x21, [x0, #0x58] */
    ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r0)->field_68_rw = r10;
    r9 = 0x7473;
    r9 = 0x74617473; // movk lsl #16
    r9 = 0x737574617473; // movk lsl #32
    /* 0x100001960: stp x8, x9, [x0, #0x78] */
    r8 = -0x1a00000000000000;
    r9 = *([x9, #0x1f0]);
    ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r0)->field_a8_rw = r9;
    r9 = 1;
    /* 0x100001978: stp x8, x9, [x0, #0x88] */
    r0 = _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n(r0, &stack_buf_118);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, &stack_buf_118);
    r0 = r20;
    r0 = _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF(r0, &stack_buf_118);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, &stack_buf_118);
    r0 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_5300(1, &stack_buf_118);
}

// ── swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() @ 0x1000019a4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = _TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum; // 0x10000c590
    r0 = flirt_dyld_stub_binder_trampoline_5348(_TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum, r1);
    r1 = 0;
    return r0;
}

// ── swift::main::finish() @ 0x1000019c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::finish() ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 3
int64_t swift::main::finish(int64_t arg0, int64_t arg1) {
    r20 = _$s4main8spectrum029_12232F587A4C5CD8B1EEDF696793D2FCLLAA19SystemAudioSpectrumACLLCvp; // [0x10000c8b0]
    r0 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF(r0, r1);
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5300(0, r1);
}

// ── _$sIeg_IeyB_TR @ 0x1000019e4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sIeg_IeyB_TR ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 5
int64_t _$sIeg_IeyB_TR(int64_t arg0, int64_t arg1) {
    /* 0x1000019f0: ldp x19, x20, [x0, #0x20] */
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5498(r20, r1);
    r0 = x19(r0, r1);
    r0 = r20;
    goto loc_10000548c;
}

// ── swift::OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler() @ 0x100001a10 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler() ───
int64_t swift::OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    /* 0x100001a14: stp x24, x23, [sp, #0x10] */
    r19 = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_506c(0, r1);
    r20 = r0;
    r1 = *([x1, #0x3f8]);
    r8 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r8)->field_2c8_ro;
    ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)sp)->field_08_rw = r8;
    r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL; // 0x10000c710
    r2 = *([x2, #0x408]);
    r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm(_$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL, 0x100008000);
    r21 = r0;
    r22 = _$sSay8Dispatch0A13WorkItemFlagsVGMd; // 0x10000c718
    r23 = _$sSay8Dispatch0A13WorkItemFlagsVGMR; // 0x1000059e0
    r0 = r22;
    r1 = r23;
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSay8Dispatch0A13WorkItemFlagsVGMd, _$sSay8Dispatch0A13WorkItemFlagsVGMR);
    r24 = r0;
    r0 = _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL; // 0x10000c720
    r3 = *([x3, #0x1d0]);
    r1 = r22;
    r2 = r23;
    r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm(_$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL, _$sSay8Dispatch0A13WorkItemFlagsVGMd);
    r2 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r8 = r19;
    r1 = r24;
    r3 = r20;
    r4 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_51e0(&stack_buf_8, r0);
    /* 0x100001ac8: ldp x24, x23, [sp, #0x10] */
    return r0;
}

// ── swift::main::NSFileHandle() @ 0x100001ad4 (12 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::NSFileHandle() ───
// Stack Frame: 96B | Basic Blocks: 12 | Natural Loops: 0 | Post-Dom Nodes: 12 | Callers: 1
int64_t swift::main::NSFileHandle(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_80[48]; // [fp - 0x80]
    /* 0x100001ad4: stp x28, x27, [sp, #-0x60]! */
    /* 0x100001ad8: stp x26, x25, [sp, #0x10] */
    /* 0x100001adc: stp x24, x23, [sp, #0x20] */
    r20 = r0;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_506c(0, r1);
    r19 = r0;
    r27 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r27)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r23 = r9 - r8;
    sp = r23;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5084(0, r1);
    r22 = r0;
    r28 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r28)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r21 = r9 - r8;
    sp = r21;
    r0 = r20;
    r0 = -[self availableData](r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, r1);
    r25 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_5024(r0, r1);
    r24 = r0;
    r26 = r1;
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r1);
    r1 = r26;
    /* 0x100001b94: lsr x8, x26, #0x3e */
    if (r8 > 1) { goto loc_100001bbc; }
    // [Block 0x100001ba0 | PostDom: 0x100001d60]
    if (r8 != 0) { goto loc_100001bdc; }
    // [Block 0x100001ba4 | PostDom: 0x100001d60]
    r0 = r24;
    r24 = r1;
    r0 = _$s10Foundation4DataV15_RepresentationOWOe(r0, r1);
    if ((r24 & 0xff000000000000) == 0) {
        // [Block 0x100001bb8 | PostDom: 0x100001c00]
        goto loc_100001c00;
        // [Block 0x100001bbc | PostDom: 0x100001d60]
        if (r8 != 2) { goto loc_100001bf8; }
        // [Block 0x100001bc4 | PostDom: 0x100001d60]
        /* 0x100001bc4: ldp x25, x26, [x24, #0x10] */
        r0 = r24;
        r0 = _$s10Foundation4DataV15_RepresentationOWOe(r1, r1);
        if (r25 == x26) { goto loc_100001c00; }
        // [Block 0x100001bd8 | PostDom: 0x100001d60]
        goto loc_100001d60;
        // [Block 0x100001bdc | PostDom: 0x100001d60]
        r0 = r24;
        r0 = _$s10Foundation4DataV15_RepresentationOWOe(r1, r1);
        /* 0x100001be4: sxtw x25, w24 */
        /* 0x100001be8: asr x26, x24, #0x20 */
        if (r25 == x26) { goto loc_100001c00; }
        // [Block 0x100001bf4 | PostDom: 0x100001d60]
        goto loc_100001d60;
        // [Block 0x100001bf8 | PostDom: 0x100001c00]
        r0 = r24;
        r0 = _$s10Foundation4DataV15_RepresentationOWOe(r1, r1);
loc_100001c00:
        r0 = r20;
        r2 = 0;
        r0 = -[self setReadabilityHandler:](r0, r1);
        r0 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_52c4(0, r1);
        r1 = _$sSo17OS_dispatch_queueCML; // 0x10000c548
        r2 = 0x10000c518;
        r0 = 0;
        r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo17OS_dispatch_queueCML);
        r20 = r0;
        r0 = flirt_dyld_stub_binder_trampoline_5174(r0, _$sSo17OS_dispatch_queueCML);
        r24 = r0;
        r8 = _$s4main6finishyyF; // 0x1000019c4
        /* 0x100001c40: stp x8, xzr, [x29, #-0x60] */
        r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r8)->field_10_rw;
        *([x29, #-0x80]) = r8;
        d0 = *([x8, #0x890]);
        *([x29, #-0x78]) = d0;
        r8 = _$sIeg_IeyB_TR; // 0x1000019e4
        r9 = _block_descriptor.21; // 0x100008808
        /* 0x100001c6c: stp x8, x9, [x29, #-0x70] */
        r0 = &stack_buf_80; // [fp - 0x80]
        r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_80, _$sSo17OS_dispatch_queueCML);
        r25 = r0;
        r8 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_5078(r0, _$sSo17OS_dispatch_queueCML);
        r8 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r8)->field_2c8_ro;
        *([x29, #-0x80]) = r8;
        r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL; // 0x10000c710
        r1 = *([x1, #0x3f8]);
        r2 = *([x2, #0x408]);
        r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm(_$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL, 0x100008000);
        r26 = r0;
        r20 = _$sSay8Dispatch0A13WorkItemFlagsVGMd; // 0x10000c718
        *([x29, #-0x88]) = r22;
        r22 = r27;
        r27 = _$sSay8Dispatch0A13WorkItemFlagsVGMR; // 0x1000059e0
        r0 = r20;
        r1 = r27;
        r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSay8Dispatch0A13WorkItemFlagsVGMd, _$sSay8Dispatch0A13WorkItemFlagsVGMR);
        *([x29, #-0x90]) = r28;
        r28 = r0;
        r0 = _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL; // 0x10000c720
        r3 = *([x3, #0x1d0]);
        r1 = r20;
        r2 = r27;
        r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm(_$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL, _$sSay8Dispatch0A13WorkItemFlagsVGMd);
        r2 = r0;
        r0 = &stack_buf_80; // [fp - 0x80]
        r8 = r23;
        r1 = r28;
        r20 = r19;
        r3 = r19;
        r4 = r26;
        r0 = flirt_dyld_stub_binder_trampoline_51e0(&stack_buf_80, r0);
        r0 = 0;
        r1 = r21;
        r2 = r23;
        r3 = r25;
        r20 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_5180(0, r21);
        r0 = r25;
        r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r21);
        r0 = r24;
        r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r21);
        r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r22)->field_08_rw;
        r0 = r23;
        r1 = r19;
        r0 = x8(r23, r0);
        /* 0x100001d50: ldp x8, x1, [x29, #-0x90] */
        r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r8)->field_08_rw;
        r0 = r21;
        r0 = x8(r21, r0);
    }
loc_100001d60:
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100001d70: ldp x24, x23, [sp, #0x20] */
    /* 0x100001d74: ldp x26, x25, [sp, #0x10] */
    /* 0x100001d78: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── swift::NSFileHandle() @ 0x100001d80 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::NSFileHandle() ───
// Stack Frame: 48B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t swift::NSFileHandle(int64_t arg0, int64_t arg1) {
    r19 = r1;
    /* 0x100001d94: ldp x21, x20, [x0, #0x20] */
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5498(r20, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5360(r1, r1);
    r19 = r0;
    r0 = x21(r0, r1);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_548c(r20, r1);
    r0 = r19;
    goto loc_100005354;
}

// ── swift::main() @ 0x100001dcc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main() ───
// Stack Frame: 96B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t swift::main(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_80[48]; // [fp - 0x80]
    /* 0x100001dcc: stp x28, x27, [sp, #-0x60]! */
    /* 0x100001dd0: stp x26, x25, [sp, #0x10] */
    /* 0x100001dd4: stp x24, x23, [sp, #0x20] */
    r26 = r0;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_506c(0, r1);
    r19 = r0;
    r25 = *([x25, #0x3f8]);
    r8 = *([x0, #-8]);
    *([x29, #-0x88]) = r8;
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r8)->field_40_ro;
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
    *([x29, #-0x90]) = r0;
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
    r1 = _$sSo17OS_dispatch_queueCML; // 0x10000c548
    r2 = 0x10000c518;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo17OS_dispatch_queueCML);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_5174(r0, _$sSo17OS_dispatch_queueCML);
    r24 = r0;
    r0 = 0x100008778;
    r1 = 0x11;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_539c(0x100008778, 0x11);
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r26;
    r8 = _$s4mainySbcfU0_yyScMYccfU_TA; // 0x100004764
    /* 0x100001eb0: stp x8, x0, [x29, #-0x60] */
    r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r8)->field_10_rw;
    *([x29, #-0x80]) = r8;
    d0 = *([x8, #0x890]);
    *([x29, #-0x78]) = d0;
    r8 = _$sIeg_IeyB_TR; // 0x1000019e4
    r9 = _block_descriptor.12; // 0x100008790
    /* 0x100001edc: stp x8, x9, [x29, #-0x70] */
    r0 = &stack_buf_80; // [fp - 0x80]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_80, 0x11);
    r26 = r0;
    r0 = *([x29, #-0x58]);
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, 0x11);
    r8 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, 0x11);
    r8 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r8)->field_2c8_ro;
    *([x29, #-0x80]) = r8;
    r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL; // 0x10000c710
    r2 = *([x2, #0x408]);
    r1 = r25;
    r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm(_$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL, 0x100008000);
    r25 = r0;
    r20 = _$sSay8Dispatch0A13WorkItemFlagsVGMd; // 0x10000c718
    r27 = _$sSay8Dispatch0A13WorkItemFlagsVGMR; // 0x1000059e0
    r0 = r20;
    r1 = r27;
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSay8Dispatch0A13WorkItemFlagsVGMd, _$sSay8Dispatch0A13WorkItemFlagsVGMR);
    r28 = r0;
    r0 = _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL; // 0x10000c720
    r3 = *([x3, #0x1d0]);
    r1 = r20;
    r2 = r27;
    r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm(_$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL, _$sSay8Dispatch0A13WorkItemFlagsVGMd);
    r2 = r0;
    r0 = &stack_buf_80; // [fp - 0x80]
    r8 = r21;
    r1 = r28;
    r20 = r19;
    r3 = r19;
    r4 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_51e0(&stack_buf_80, r0);
    r0 = 0;
    r1 = r23;
    r2 = r21;
    r3 = r26;
    r20 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_5180(0, r23);
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r23);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r23);
    r8 = *([x29, #-0x88]);
    r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r8)->field_08_rw;
    r0 = r21;
    r1 = r19;
    r0 = x8(r21, r0);
    r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r22)->field_08_rw;
    r0 = r23;
    r1 = *([x29, #-0x90]);
    r0 = x8(r23, r0);
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100001fdc: ldp x24, x23, [sp, #0x20] */
    /* 0x100001fe0: ldp x26, x25, [sp, #0x10] */
    /* 0x100001fe4: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── swift::main::emit::_12232F587A4C5CD8B1EEDF696793::FC() @ 0x100001fec (10 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::emit::_12232F587A4C5CD8B1EEDF696793::FC() ───
// Stack Frame: 0B | Basic Blocks: 10 | Natural Loops: 0 | Post-Dom Nodes: 10 | Callers: 5
int64_t swift::main::emit::_12232F587A4C5CD8B1EEDF696793::FC(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_7[9]; // [sp + 0x7]
    uint8_t stack_buf_10[40]; // [sp + 0x10]
    uint8_t stack_buf_38[16]; // [sp + 0x38]
    /* 0x100001ff0: stp x24, x23, [sp, #0x50] */
    r19 = r0;
    r8 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r8)->field_28_rw;
    r8 = *([x8]);
    *([x29, #-0x38]) = r8;
    r0 = *([x8, #0x530]);
    r0 = flirt_dyld_stub_binder_trampoline_5348(r0, r1);
    r20 = r0;
    r8 = *([x8, #0x2c0]);
    r1 = *([x1, #0x1a0]);
    r3 = *([x3, #0x1a8]);
    r2 = 0x100008008;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_50cc(r0, 0x100008000);
    r21 = r0;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)sp)->field_10_rw = 0;
    r4 = &stack_buf_10; // [sp + 0x10]
    r0 = r20;
    r2 = r21;
    r3 = 0;
    r0 = -[self dataWithJSONObject:options:error:](r0, 0x100008000);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, 0x100008000);
    r19 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0x100008000);
    r0 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)sp)->field_10_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5360(r0, 0x100008000);
    if (r19 == 0) { goto loc_1000020c4; }
    // [Block 0x100002088 | PostDom: 0x100002100]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5024(r0, 0x100008000);
    r20 = r0;
    r21 = r1;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0x100008000);
    /* 0x1000020a0: stp x20, x21, [sp, #0x38] */
    /* 0x1000020a4: lsr x8, x21, #0x3e */
    if (r8 > 1) { goto loc_1000020ec; }
    // [Block 0x1000020b0 | PostDom: 0x100002100]
    // [SWITCH DISPATCH DETECTED @ 0x1000020b0: Multi-Way Cascade on r8 (2 cases)]
    switch (r8) { case 0x0: goto loc_1000020bc; case 0x2: goto loc_1000020fc; }
    /* 0x1000020b0: ubfx x9, x21, #0x30, #8 */
    /* 0x1000020b4: asr x10, x20, #0x20 */
    r19 = (r8 == 0) ? r9 : r10;
    goto loc_100002100;
    // [Block 0x1000020c4 | PostDom: 0x1000021f0]
    r19 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_5000(r0, 0x100008000);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0x100008000);
    r21 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_54ec(r0, 0x100008000);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5414(r0, 0x100008000);
    goto loc_1000021f0;
    // [Block 0x1000020ec | PostDom: 0x100002100]
    if (r8 == 2) {
        // [Block 0x1000020f4 | PostDom: 0x100002100]
        r19 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r20)->field_18_ro;
    } else {
        // [Block 0x1000020fc | PostDom: 0x100002100]
        r19 = 0;
    }
loc_100002100:
    r20 = _$ss15CollectionOfOneVys5UInt8VGMd; // 0x10000c6f0
    r21 = _$ss15CollectionOfOneVys5UInt8VGMR; // 0x1000059c8
    r0 = r20;
    r1 = r21;
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss15CollectionOfOneVys5UInt8VGMd, _$ss15CollectionOfOneVys5UInt8VGMR);
    r22 = r0;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)sp)->field_28_rw = r0;
    r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWL; // 0x10000c6f8
    r3 = *([x3, #0x160]);
    r1 = r20;
    r2 = r21;
    r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm(_$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWL, _$ss15CollectionOfOneVys5UInt8VGMd);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)sp)->field_30_ro = r0;
    r8 = 0xa;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)sp)->field_10_rw = r8;
    r0 = &stack_buf_10; // [sp + 0x10]
    r1 = r22;
    r0 = ___swift_project_boxed_opaque_existential_1(&stack_buf_10, r0);
    r8 = *([x0]);
    *([sp, #7]) = r8;
    r2 = &stack_buf_7; // [sp + 0x7]
    r20 = &stack_buf_38; // [sp + 0x38]
    r0 = r19;
    r1 = r19;
    r3 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_500c(0, 0);
    r0 = &stack_buf_10; // [sp + 0x10]
    r0 = ___swift_destroy_boxed_opaque_existential_1(&stack_buf_10, 0);
    r19 = _$s4main10outputLock029_12232F587A4C5CD8B1EEDF696793E2FCLLSo6NSLockCvp; // [0x10000c8a8]
    r0 = r19;
    r0 = -[self lock](_$s4main10outputLock029_12232F587A4C5CD8B1EEDF696793E2FCLLSo6NSLockCvp, 0);
    r0 = *([x8, #0x520]);
    r0 = flirt_dyld_stub_binder_trampoline_5348(r0, 0);
    r0 = -[self fileHandleWithStandardOutput](r0, 0);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, 0);
    r20 = r0;
    /* 0x1000021ac: ldp x21, x22, [sp, #0x38] */
    r0 = r21;
    r1 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_5018(_$ss15CollectionOfOneVys5UInt8VGMR, r0);
    r23 = r0;
    r0 = r20;
    r2 = r23;
    r0 = -[self writeData:](r0, r0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = r19;
    r0 = -[self unlock](_$s4main10outputLock029_12232F587A4C5CD8B1EEDF696793E2FCLLSo6NSLockCvp, r0);
    r0 = r21;
    r1 = r22;
    r0 = _$s10Foundation4DataV15_RepresentationOWOe(_$ss15CollectionOfOneVys5UInt8VGMR, r0);
    // [Block 0x1000021f0 | PostDom: 0x100002208]
    r8 = *([x29, #-0x38]);
    r9 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r9)->field_28_rw;
    r9 = *([x9]);
    if (r9 != x8) { goto loc_100002220; }
    // [Block 0x100002208 | PostDom: exit]
    /* 0x100002214: ldp x24, x23, [sp, #0x50] */
    return r0;
}

// ── flirt_objc_retain_release_thunk_2220 @ 0x100002220 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2220 ───
int64_t flirt_objc_retain_release_thunk_2220(int64_t arg0, int64_t arg1) {
    r0 = flirt_dyld_stub_binder_trampoline_52d0(r0, r1);
}

// ── swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() @ 0x100002224 (6 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() ───
// Stack Frame: 96B | Basic Blocks: 6 | Natural Loops: 0 | Post-Dom Nodes: 6 | Callers: 1
int64_t swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    *([sp, #-0x60]!) = r28;
    /* 0x100002228: stp x27, x26, [sp, #0x10] */
    /* 0x10000222c: stp x25, x24, [sp, #0x20] */
    /* 0x100002230: stp x23, x22, [sp, #0x30] */
    r19 = sp;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_38_rw = r21;
    r22 = r20;
    r8 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r8)->field_28_rw;
    r8 = *([x8]);
    *([x29, #-0x60]) = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5054(0, r1);
    ((AutoStruct_swiftAudioTimeStamp_10000338c *)r19)->field_40_ro = r0;
    r27 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r27)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r10 = 0x10000800f;
    r12 = r10 & 0xfffffffffffffff0;
    r26 = r9 - r12;
    sp = r26;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r8 = sp;
    r28 = r8 - r12;
    sp = r28;
    r1 = _$sSo16CATapDescriptionCML; // 0x10000c730
    r2 = 0x10000c538;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo16CATapDescriptionCML);
    r20 = r0;
    r0 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r0)->field_2c8_ro;
    r0 = flirt_dyld_stub_binder_trampoline_5150(0x100008000, _$sSo16CATapDescriptionCML);
    r23 = r0;
    r8 = "Codex system audio visualizer";
    r8 = r8 - 0x20;
    r20 = r8 | 0x8000000000000000;
    r0 = 0x1d;
    r0 = 0xd00000000000001d; // movk lsl #48
    r1 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_50d8(0xd00000000000001d, r0);
    r25 = r0;
    r0 = r23;
    r2 = r25;
    r0 = -[self setName:](r0, r0);
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r0 = r23;
    r2 = 1;
    r0 = -[self setPrivate:](r0, r0);
    r0 = r23;
    r2 = 0;
    r0 = -[self setMuteBehavior:](r0, r0);
    r0 = r22 + 0x10;
    r1 = r19 + 0xe0;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5360(r0, r0);
    r23 = r0;
    r24 = r22;
    r1 = r22 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_5288(r0, r0);
    r25 = r0;
    r0 = r19 + 0xe0;
    r0 = flirt_dyld_stub_binder_trampoline_5408(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    if (r25 != 0) {
        // [Block 0x100002374 | PostDom: 0x100002458]
        r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, r0);
        r1 = r0;
        r0 = 0x1000088c0;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
        r22 = r0;
        r8 = 0x7263;
        r8 = 0x61657263; // movk lsl #16
        r8 = 0x657461657263; // movk lsl #32
        r8 = 0x742d657461657263; // movk lsl #48
        r9 = 0x6574;
        r9 = 0xea00000000006574; // movk lsl #48
        r9 = r9 + 0xaed;
    } else {
        // [Block 0x1000023b4 | PostDom: 0x10000241c]
        r22 = r28;
        ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_30_ro = r26;
        r28 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r19)->field_40_ro;
        d0 = *([x8, #0x898]);
        ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_50_rw = d0;
        ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_58_rw = 0;
        r8 = 0x28;
        ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCstart_100002224 *)r19)->field_4c_rw = r8;
        r25 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r24)->field_10_rw;
        r0 = r24 + 0x20;
        r1 = r19 + 0xe0;
        r2 = 0x21;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, r0);
        r1 = r19 + 0x50;
        r4 = r19 + 0x4c;
        r5 = r24 + 0x20;
        r0 = r25;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_52ac(r0, r0);
        r25 = r0;
        r0 = r19 + 0xe0;
        r0 = flirt_dyld_stub_binder_trampoline_5408(r0, r0);
        if (r25 == 0) { goto loc_1000024ac; }
        // [Block 0x10000241c | PostDom: 0x100002458]
        r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, r0);
        r1 = r0;
        r0 = 0x1000088c0;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
        r22 = r0;
        r8 = 0x6572;
        r8 = 0x64616572; // movk lsl #16
        r8 = 0x662d64616572; // movk lsl #32
        r8 = 0x726f662d64616572; // movk lsl #48
        r9 = 0x616d;
        r9 = 0x74616d; // movk lsl #16
        r9 = 0xeb0000000074616d; // movk lsl #48
    }
    // [Block 0x100002458 | PostDom: 0x100002488]
    /* 0x100002458: stp x8, x9, [x1] */
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r1)->field_10_rw = r25;
    r21 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_54ec(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    r8 = *([x29, #-0x60]);
    r9 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r9)->field_28_rw;
    r9 = *([x9]);
    if (r9 != x8) { goto loc_100002a68; }
    // [Block 0x100002488 | PostDom: exit]
    r21 = r22;
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100002498: ldp x23, x22, [sp, #0x30] */
    /* 0x10000249c: ldp x25, x24, [sp, #0x20] */
    /* 0x1000024a0: ldp x27, x26, [sp, #0x10] */
    r28 = stack_buf_50[0x60];
    return r0;
}

// ── flirt_fast_memcpy_vec_24ac @ 0x1000024ac (13 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_24ac ───
// Stack Frame: 0B | Basic Blocks: 13 | Natural Loops: 0 | Post-Dom Nodes: 13 | Callers: 1
int64_t flirt_fast_memcpy_vec_24ac(int64_t arg0, int64_t arg1) {
    r8 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r24)->field_28_rw; // [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
    r9 = 0x636d;
    r9 = 0x6c70636d; // movk lsl #16
    if (r8 != w9) { goto loc_100002818; }
    // [Block 0x1000024c0 | PostDom: exit]
    r8 = *([x24, #0x2c]);
    if ((r8 & (1 << 0)) == 0) { goto loc_100002818; }
    // [Block 0x1000024c8 | PostDom: exit]
    // [SWITCH DISPATCH DETECTED @ 0x1000024c8: Multi-Way Cascade on r8 (2 cases)]
    switch (r8) { case 0x20: goto loc_100002818; case 0x2: goto loc_100002818; }
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r24)->field_40_ro;
    if (r8 != 0x20) { goto loc_100002818; }
    // [Block 0x1000024d4 | PostDom: exit]
    r8 = *([x24, #0x3c]);
    if (r8 != 2) { goto loc_100002818; }
    // [Block 0x1000024e0 | PostDom: exit]
    r0 = _$ss23_ContiguousArrayStorageCySS_yptGMd; // 0x10000c6e8
    r1 = _$ss23_ContiguousArrayStorageCySS_yptGMR; // 0x1000059c0
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCySS_yptGMd, _$ss23_ContiguousArrayStorageCySS_yptGMR);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_28_rw = r0;
    r1 = r19 + 0x190;
    r0 = flirt_dyld_stub_binder_trampoline_5474(r0, _$ss23_ContiguousArrayStorageCySS_yptGMR);
    r25 = r0;
    q0 = *([x8, #0x8a0]);
    r8 = 0x616e;
    r8 = 0x656d616e; // movk lsl #16
    r9 = r0;
    *([x9, #0x20]!) = r8;
    ((AutoStruct____swift_memcpy40_8_10000325c *)r19)->field_20_rw = r9;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = q0;
    r9 = -0x1c00000000000000;
    r26 = *([x26, #0x1a0]);
    r8 = 0x1d;
    r8 = 0xd00000000000001d; // movk lsl #48
    /* 0x100002538: stp x9, x8, [x0, #0x28] */
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_38_rw = r20;
    r8 = 0x6975;
    r8 = 0x646975; // movk lsl #16
    /* 0x100002548: stp x26, x8, [x0, #0x48] */
    r8 = -0x1d00000000000000;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_58_rw = r8;
    r8 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_5048(r0, _$ss23_ContiguousArrayStorageCySS_yptGMR);
    r20 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_5030(r0, _$ss23_ContiguousArrayStorageCySS_yptGMR);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r25)->field_78_rw = r26;
    /* 0x100002568: stp x0, x1, [x25, #0x60] */
    r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r27)->field_08_rw;
    ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r19)->field_18_ro = r8;
    r0 = r22;
    r22 = r28;
    r1 = r28;
    r0 = x8(r22, r28);
    r10 = *([x10, #0x1d8]);
    r8 = 0x7270;
    r8 = 0x76697270; // movk lsl #16
    r8 = 0x746176697270; // movk lsl #32
    r8 = 0x65746176697270; // movk lsl #48
    r9 = -0x1900000000000000;
    /* 0x1000025a0: stp x8, x9, [x25, #0x80] */
    r8 = 1;
    ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r25)->field_90_rw = r8;
    r11 = 1;
    r8 = 0x7473;
    r8 = 0x63617473; // movk lsl #16
    r8 = 0x656b63617473; // movk lsl #32
    r8 = 0x64656b63617473; // movk lsl #48
    /* 0x1000025c0: stp x10, x8, [x25, #0xa8] */
    *([x25, #0xb8]) = r9;
    *([x25, #0xc0]) = 0;
    r8 = 0x6174;
    r8 = 0x61706174; // movk lsl #16
    r8 = 0x747561706174; // movk lsl #32
    r8 = 0x736f747561706174; // movk lsl #48
    /* 0x1000025dc: stp x10, x8, [x25, #0xd8] */
    r8 = 0x6174;
    r8 = 0x74726174; // movk lsl #16
    r8 = 0xec00000074726174; // movk lsl #48
    *([x25, #0xe8]) = r8;
    *([x25, #0xf0]) = r11;
    r8 = 0x6174;
    r8 = 0x73706174; // movk lsl #16
    /* 0x1000025fc: stp x10, x8, [x25, #0x108] */
    r8 = -0x1c00000000000000;
    *([x25, #0x118]) = r8;
    r0 = _$ss23_ContiguousArrayStorageCySDySSypGGMd; // 0x10000c738
    r1 = _$ss23_ContiguousArrayStorageCySDySSypGGMR; // 0x1000059f0
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCySDySSypGGMd, _$ss23_ContiguousArrayStorageCySDySSypGGMR);
    r1 = 0x28;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_539c(r0, 0x28);
    r27 = r0;
    q0 = *([x8, #0x8b0]);
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = q0;
    r1 = r19 + 0x110;
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_28_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5474(r0, 0x28);
    r26 = r0;
    q0 = *([x8, #0x8c0]);
    *([x19]) = q0;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = q0;
    r9 = r0;
    r8 = 0x6975;
    r8 = 0x646975; // movk lsl #16
    *([x9, #0x20]!) = r8;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r19)->field_10_rw = r9;
    r8 = -0x1d00000000000000;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_28_rw = r8;
    r0 = r23;
    r0 = -[self UUID](r23, 0x28);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_536c(r0, 0x28);
    r20 = r0;
    r28 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_30_ro;
    r8 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_503c(r0, 0x28);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0x28);
    r20 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_5030(r0, 0x28);
    r8 = *([x8, #0x1a0]);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r26)->field_48_rw = r8;
    /* 0x1000026b0: stp x0, x1, [x26, #0x30] */
    r0 = r28;
    r28 = r8;
    r1 = r22;
    r8 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r19)->field_18_ro;
    r0 = x8(r28, r28);
    r8 = 0x7264;
    r8 = 0x66697264; // movk lsl #16
    r8 = 0x7466697264; // movk lsl #32
    r9 = -0x1b00000000000000;
    /* 0x1000026d8: stp x8, x9, [x26, #0x50] */
    r8 = *([x8, #0x1d8]);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r26)->field_78_rw = r8;
    r8 = 1;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r26)->field_60_rw = r8;
    r0 = r26;
    r0 = _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n(r0, r28);
    r22 = r0;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_54a4(r0, r28);
    r0 = _$sSS_yptMd; // 0x10000c708
    r1 = _$sSS_yptMR; // 0x1000059d8
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSS_yptMd, _$sSS_yptMR);
    r20 = r0;
    r0 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r19)->field_10_rw;
    r1 = 2;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53a8(r0, 2);
    ((AutoStruct____swift_memcpy40_8_10000325c *)r27)->field_20_rw = r22;
    r0 = _$sSaySDySSypGGMd; // 0x10000c740
    r1 = _$sSaySDySSypGGMR; // 0x1000059f8
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSaySDySSypGGMd, _$sSaySDySSypGGMR);
    *([x25, #0x138]) = r0;
    *([x25, #0x120]) = r27;
    r0 = r25;
    r0 = _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n(r0, _$sSaySDySSypGGMR);
    r26 = r0;
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_54a4(r0, _$sSaySDySSypGGMR);
    r0 = ((AutoStruct____swift_memcpy40_8_10000325c *)r19)->field_20_rw;
    r1 = 6;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53a8(r0, 6);
    r8 = *([x8, #0x2c0]);
    r3 = *([x3, #0x1a8]);
    r2 = 0x100008008;
    r0 = r26;
    r1 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_50cc(r0, 0x100008000);
    r22 = r0;
    r0 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, 0x100008000);
    r0 = r24 + 0x14;
    r1 = r19 + 0xe0;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, 0x100008000);
    r1 = r24 + 0x14;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_527c(r0, 0x100008000);
    r25 = r0;
    r0 = r19 + 0xe0;
    r0 = flirt_dyld_stub_binder_trampoline_5408(r0, 0x100008000);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, 0x100008000);
    if (r25 == 0) { goto loc_100002860; }
    // [Block 0x1000027d4 | PostDom: exit]
    r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, 0x100008000);
    r1 = r0;
    r0 = 0x1000088c0;
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
    r22 = r0;
    r8 = 0x7263;
    r8 = 0x61657263; // movk lsl #16
    r8 = 0x657461657263; // movk lsl #32
    r8 = 0x642d657461657263; // movk lsl #48
    r9 = 0x7665;
    r9 = 0x63697665; // movk lsl #16
    r9 = 0x6563697665; // movk lsl #32
    r9 = 0xed00006563697665; // movk lsl #48
    goto loc_100002458;
loc_100002818:
    r8 = "unsupported-format";
    r8 = r8 - 0x20;
    r20 = r8 | 0x8000000000000000;
    r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, r0);
    r1 = r0;
    r0 = 0x1000088c0;
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
    r22 = r0;
    r8 = 0x1d;
    r8 = 0xd00000000000001d; // movk lsl #48
    r8 = r8 - 0xb;
    /* 0x100002854: stp x8, x20, [x1] */
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r1)->field_10_rw = 0;
    goto loc_100002460;
    // [Block 0x100002860 | PostDom: exit]
    r22 = r19 + 0xe0;
    r25 = ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r24)->field_14_rw;
    r26 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r24)->field_48_rw;
    r0 = 0x1000087c8;
    r1 = 0x18;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_539c(0x1000087c8, 0x18);
    r21 = r0;
    r0 = r0 + 0x10;
    r1 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_54d4(r0, r24);
    r8 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC5startyyKFySPySo0C9TimeStampVG_SPySo0C10BufferListVGAHSpyAJGAHtcfU_TA; // 0x100004a6c
    /* 0x100002898: stp x8, x21, [x22, #0x20] */
    r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r8)->field_10_rw;
    *([x22]) = r8;
    d0 = *([x8, #0x890]);
    ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r22)->field_08_rw = d0;
    r8 = _$sSPySo14AudioTimeStampVGSPySo0A10BufferListVGACSpyAEGACIegyyyyy_AcfcgCIeyByyyyy_TR; // 0x10000381c
    r9 = _block_descriptor.18; // 0x1000087e0
    /* 0x1000028c4: stp x8, x9, [x22, #0x10] */
    r0 = r19 + 0xe0;
    r0 = flirt_dyld_stub_binder_trampoline_52b8(r0, r24);
    r28 = r0;
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r22)->field_28_rw;
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, r24);
    r0 = r24 + 0x18;
    r1 = r19 + 0xe0;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, r24);
    r0 = r24 + 0x18;
    r1 = r25;
    r2 = r26;
    r3 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_524c(r0, r0);
    r25 = r0;
    r0 = r19 + 0xe0;
    r0 = flirt_dyld_stub_binder_trampoline_5408(r0, r0);
    r0 = r28;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, r0);
    if (r25 != 0) {
        // [Block 0x10000291c | PostDom: exit]
        r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, r0);
        r1 = r0;
        r0 = 0x1000088c0;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
        r22 = r0;
        r8 = 0x7263;
        r8 = 0x61657263; // movk lsl #16
        r8 = 0x657461657263; // movk lsl #32
        r8 = 0x632d657461657263; // movk lsl #48
        r9 = 0x6c61;
        r9 = 0x626c6c61; // movk lsl #16
        r9 = 0x6361626c6c61; // movk lsl #32
        r9 = 0xef6b6361626c6c61; // movk lsl #48
        goto loc_100002458;
    }
    // [Block 0x100002960 | PostDom: exit]
    r0 = ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r24)->field_14_rw;
    r1 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r24)->field_18_ro;
    r0 = flirt_dyld_stub_binder_trampoline_5264(r0, r0);
    if (r0 != 0) {
        // [Block 0x100002970 | PostDom: exit]
        r25 = r0;
        r0 = _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl(r0, r0);
        r1 = r0;
        r0 = 0x1000088c0;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_5390(0x1000088c0, r0);
        r22 = r0;
        r8 = 0x7473;
        r8 = 0x72617473; // movk lsl #16
        r8 = 0x7472617473; // movk lsl #32
        r9 = -0x1b00000000000000;
        goto loc_100002458;
    }
    // [Block 0x1000029a8 | PostDom: exit]
    r1 = r19 + 0x60;
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_28_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5474(r0, r0);
    r25 = r0;
    q0 = *([x19]);
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = q0;
    r8 = 0x7974;
    r8 = 0x65707974; // movk lsl #16
    r26 = r0;
    *([x26, #0x20]!) = r8;
    r8 = -0x1c00000000000000;
    r9 = 0x6572;
    r9 = 0x64616572; // movk lsl #16
    r9 = 0x7964616572; // movk lsl #32
    /* 0x1000029e0: stp x8, x9, [x0, #0x28] */
    r8 = -0x1b00000000000000;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_38_rw = r8;
    r8 = 0x6173;
    r8 = 0x706d6173; // movk lsl #16
    r8 = 0x656c706d6173; // movk lsl #32
    r8 = 0x6152656c706d6173; // movk lsl #48
    r9 = *([x9, #0x1a0]);
    /* 0x100002a04: stp x9, x8, [x0, #0x48] */
    r8 = 0x6574;
    r8 = 0xea00000000006574; // movk lsl #48
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_58_rw = r8;
    d0 = ((AutoStruct____swift_memcpy40_8_10000325c *)r24)->field_20_rw;
    r8 = *([x8, #0x1e0]);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_78_rw = r8;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_60_rw = d0;
    r0 = _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n(r0, r0);
    r24 = r0;
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_54a4(r0, r0);
    r0 = r26;
    r1 = 2;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53a8(r0, 2);
    r0 = r24;
    r0 = _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF(r0, 2);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, 2);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r23, 2);
    r22 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_38_rw;
    goto loc_100002470;
    // [Block 0x100002a68 | PostDom: exit]
    r0 = flirt_dyld_stub_binder_trampoline_52d0(r0, 2);
}

// ── swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop() @ 0x100002a6c (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop() ───
// Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 3
int64_t swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_28[40]; // [fp - 0x28]
    uint8_t stack_buf_18[24]; // [sp + 0x18]
    uint8_t stack_buf_30[16]; // [sp + 0x30]
    r0 = r20 + 0x18;
    r1 = &stack_buf_28; // [fp - 0x28]
    r2 = 1;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, &stack_buf_28);
    r19 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r20)->field_18_ro;
    if (r19 != 0) {
        // [Block 0x100002a98 | PostDom: 0x100002ac8]
        r0 = r20 + 0x14;
        r1 = sp;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, sp);
        r0 = ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r20)->field_14_rw;
        r1 = r19;
        r0 = flirt_dyld_stub_binder_trampoline_5270(r0, r19);
        r0 = ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r20)->field_14_rw;
        r1 = r19;
        r0 = flirt_dyld_stub_binder_trampoline_5258(r0, r19);
        ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r20)->field_18_ro = 0;
    }
    // [Block 0x100002ac8 | PostDom: 0x100002aec]
    r0 = r20 + 0x14;
    r1 = &stack_buf_30; // [sp + 0x30]
    r2 = 1;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, &stack_buf_30);
    r0 = ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r20)->field_14_rw;
    if (r0 != 0) {
        // [Block 0x100002ae4 | PostDom: 0x100002aec]
        r0 = flirt_dyld_stub_binder_trampoline_5294(r0, &stack_buf_30);
        ((AutoStruct_flirt_byte_memset_loop_4e6c_100004e6c *)r20)->field_14_rw = 0;
    }
    // [Block 0x100002aec | PostDom: 0x100002b10]
    r0 = r20 + 0x10;
    r1 = &stack_buf_18; // [sp + 0x18]
    r2 = 1;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r20)->field_10_rw;
    if (r0 != 0) {
        // [Block 0x100002b08 | PostDom: 0x100002b10]
        r0 = flirt_dyld_stub_binder_trampoline_52a0(r0, &stack_buf_18);
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r20)->field_10_rw = 0;
    }
    // [Block 0x100002b10 | PostDom: exit]
    return r0;
}

// ── swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain() @ 0x100002b20 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain() ───
int64_t swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain(int64_t arg0, int64_t arg1) {
    goto loc_10000521c;
}

// ── swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code() @ 0x100002b24 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code() ───
int64_t swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code(int64_t arg0, int64_t arg1) {
    goto loc_100005210;
}

// ── swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo() @ 0x100002b28 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo() ───
int64_t swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo(int64_t arg0, int64_t arg1) {
    goto loc_100005228;
}

// ── swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError() @ 0x100002b2c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError() ───
int64_t swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError(int64_t arg0, int64_t arg1) {
    goto loc_100005204;
}

// ── swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() @ 0x100002b30 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() ───
// Stack Frame: 96B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 1
int64_t swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_88[56]; // [fp - 0x88]
    /* 0x100002b30: stp x28, x27, [sp, #-0x60]! */
    /* 0x100002b34: stp x26, x25, [sp, #0x10] */
    /* 0x100002b38: stp x24, x23, [sp, #0x20] */
    r19 = r20;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_506c(0, r1);
    r8 = *([x0, #-8]);
    /* 0x100002b60: stp x8, x0, [x29, #-0xd8] */
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r8)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    *([x29, #-0xe0]) = r8;
    sp = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5168(0, r1);
    r8 = *([x0, #-8]);
    /* 0x100002b9c: stp x8, x0, [x29, #-0x98] */
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r8)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r8 = r9 - r8;
    *([x29, #-0xa0]) = r8;
    sp = r8;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_515c(0, r1);
    r21 = r0;
    r20 = *([x20, #0x438]);
    r8 = *([x0, #-8]);
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r8)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r28 = r9 - r8;
    sp = r28;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_5084(0, r1);
    r8 = *([x0, #-8]);
    /* 0x100002c18: stp x8, x0, [x29, #-0xf0] */
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r8)->field_40_ro;
    r9 = r8;
    r16 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r16)->field_18_ro;
    r0 = x16(r0, r1);
    r9 = sp;
    r8 = r8 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r26 = r9 - r8;
    sp = r26;
    /* 0x100002c44: stp xzr, xzr, [x19, #0x10] */
    /* 0x100002c48: movi v0.2d, #0000000000000000 */
    /* 0x100002c4c: stp q0, q0, [x19, #0x20] */
    ((AutoStruct_swiftAudioTimeStamp_10000338c *)r19)->field_40_ro = 0;
    r1 = _$sSo17OS_dispatch_queueCML; // 0x10000c548
    r2 = 0x10000c518;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo17OS_dispatch_queueCML);
    r27 = r0;
    *([x29, #-0xc8]) = r0;
    r8 = "com.openai.codex.system-audio-spectrum";
    r8 = r8 - 0x20;
    *([x29, #-0xa8]) = r8;
    r8 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, _$sSo17OS_dispatch_queueCML);
    r25 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r25)->field_2c8_ro;
    *([x29, #-0x88]) = r25;
    r0 = _$sSo17OS_dispatch_queueC8DispatchE10AttributesVAEs10SetAlgebraACWL; // 0x10000c770
    r2 = *([x2, #0x448]);
    r1 = r20;
    r0 = _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm(_$sSo17OS_dispatch_queueC8DispatchE10AttributesVAEs10SetAlgebraACWL, 0x100008000);
    r23 = r0;
    *([x29, #-0xb0]) = r0;
    r20 = _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMd; // 0x10000c778
    r22 = _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMR; // 0x100005a20
    r0 = r20;
    r1 = r22;
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMd, _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMR);
    r24 = r0;
    *([x29, #-0xb8]) = r0;
    r0 = _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGSayxGSTsWL; // 0x10000c780
    r3 = *([x3, #0x1d0]);
    r1 = r20;
    r2 = r22;
    r0 = _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm(_$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGSayxGSTsWL, _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMd);
    r2 = r0;
    *([x29, #-0xc0]) = r0;
    r0 = &stack_buf_88; // [fp - 0x88]
    r8 = r28;
    r1 = r24;
    r20 = r21;
    r3 = r21;
    r4 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_51e0(&stack_buf_88, r0);
    r8 = *([x8, #0x450]);
    r23 = *([x8]);
    /* 0x100002d28: ldp x20, x8, [x29, #-0xa0] */
    r22 = ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r8)->field_68_rw;
    r0 = r20;
    r1 = r23;
    r2 = *([x29, #-0x90]);
    r0 = x22(r0, r0);
    r8 = *([x29, #-0xa8]);
    r1 = r8 | 0x8000000000000000;
    r0 = 0x26;
    r0 = 0xd000000000000026; // movk lsl #48
    r2 = r26;
    r3 = r28;
    r24 = r28;
    r4 = r20;
    r28 = r20;
    r5 = 0;
    r20 = r27;
    r0 = flirt_dyld_stub_binder_trampoline_518c(0xd000000000000026, r0);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_48_rw = r0;
    r1 = _$sSo18OS_dispatch_sourceCML; // 0x10000c540
    r2 = 0x10000c510;
    r0 = 0;
    r0 = _$sSo18OS_dispatch_sourceCMaTm(0, _$sSo18OS_dispatch_sourceCML);
    *([x29, #-0x98]) = r0;
    r8 = "com.openai.codex.system-audio-spectrum.output";
    r27 = r8 - 0x20;
    r8 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, _$sSo18OS_dispatch_sourceCML);
    *([x29, #-0x88]) = r25;
    r0 = &stack_buf_88; // [fp - 0x88]
    r8 = r24;
    /* 0x100002db0: ldp x2, x1, [x29, #-0xc0] */
    r20 = r21;
    r3 = r21;
    r4 = *([x29, #-0xb0]);
    r0 = flirt_dyld_stub_binder_trampoline_51e0(&stack_buf_88, _$sSo18OS_dispatch_sourceCML);
    r0 = r28;
    r1 = r23;
    r2 = *([x29, #-0x90]);
    r0 = x22(r0, r0);
    r8 = 0x26;
    r8 = 0xd000000000000026; // movk lsl #48
    r0 = r8 + 7;
    r1 = r27 | 0x8000000000000000;
    r2 = r26;
    r3 = r24;
    r4 = r28;
    r5 = 0;
    r20 = *([x29, #-0xc8]);
    r0 = flirt_dyld_stub_binder_trampoline_518c(r0, r0);
    r21 = r0;
    r20 = *([x29, #-0x98]);
    r0 = flirt_dyld_stub_binder_trampoline_51a4(r0, r0);
    r20 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r0);
    ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_50_rw = r20;
    r0 = *([x8, #0x508]);
    r0 = flirt_dyld_stub_binder_trampoline_533c(r0, r0);
    r0 = -[self init](r0, r0);
    /* 0x100002e28: stp x0, xzr, [x19, #0x58] */
    r8 = _$s4main7fftLog2029_12232F587A4C5CD8B1EEDF696793E2FCLLSuvp.0; // [0x10000c880]
    r8 = 0xb;
    r0 = (r8 != 0) ? r8 : 0;
    r1 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_54f8(r0, 0);
    if (r0 == 0) { goto loc_100003184; }
    // [Block 0x100002e4c | PostDom: 0x100002fc8]
    // [SWITCH DISPATCH DETECTED @ 0x100002e4c: Multi-Way Cascade on r23 (2 cases)]
    switch (r23) { case 0x1: goto loc_100002f80; case 0x0: goto loc_100003020; }
    ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r19)->field_68_rw = r0;
    r23 = _$s4main11sampleCount029_12232F587A4C5CD8B1EEDF696793E2FCLLSivp.0; // [0x10000c888]
    if (r23 == 1) {
        // [Block 0x100002e60 | PostDom: 0x100002fc8]
        r20 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r20)->field_1e8_ro;
        r24 = 0x800;
        r0 = 0x800;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x800, 0x100008000);
        r21 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x2000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x2000);
        r0 = _$sSaySfGMd; // 0x10000c768
        r1 = _$sSaySfGMR; // 0x100005a18
        r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSaySfGMd, _$sSaySfGMR);
        r1 = r0;
        r22 = 2;
        r0 = 2;
        r0 = flirt_dyld_stub_binder_trampoline_5108(2, r0);
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r22;
        /* 0x100002eb4: stp x21, x21, [x0, #0x20] */
        ((AutoStruct_flirt_fast_memcpy_vec_35d4_1000035d4 *)r19)->field_70_ro = r0;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_53d8(r0, r0);
        r0 = 0x800;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x800, 0x100008000);
        r22 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x2000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x2000);
        r21 = r19;
        *([x21, #0x78]!) = r22;
        r24 = 0x400;
        r0 = 0x400;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x400, 0x100008000);
        r22 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x1000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x1000);
        ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r21)->field_08_rw = r22;
        r0 = 0x400;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x400, 0x100008000);
        r22 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x1000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x1000);
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r21)->field_10_rw = r22;
        r0 = 0x400;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x400, 0x100008000);
        r22 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x1000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x1000);
        ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r21)->field_18_ro = r22;
        r0 = 0x400;
        r1 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_5108(0x400, 0x100008000);
        r25 = r0;
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r24;
        r0 = r0 + 0x20;
        r1 = 0x1000;
        r0 = flirt_dyld_stub_binder_trampoline_52dc(r0, 0x1000);
    } else {
        // [Block 0x100002f80 | PostDom: 0x100002fc8]
        r0 = _$sSaySfGMd; // 0x10000c768
        r1 = _$sSaySfGMR; // 0x100005a18
        r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$sSaySfGMd, _$sSaySfGMR);
        r1 = r0;
        r20 = 2;
        r0 = 2;
        r0 = flirt_dyld_stub_binder_trampoline_5108(2, r0);
        ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r20;
        /* 0x100002fa8: stp x25, x25, [x0, #0x20] */
        r21 = r19;
        *([x21, #0x78]!) = r25;
        *([x21, #-8]) = r0;
        /* 0x100002fb8: stp x25, x25, [x21, #8] */
        ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r21)->field_18_ro = r25;
        r0 = r25;
        r0 = flirt_dyld_stub_binder_trampoline_53d8(r0, r0);
    }
    // [Block 0x100002fc8 | PostDom: 0x100003018]
    /* 0x100002fc8: stp xzr, xzr, [x19, #0xa0] */
    ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_98_rw = r25;
    r1 = &stack_buf_88; // [fp - 0x88]
    r0 = r21;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_53c0(r20, &stack_buf_88);
    r20 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_78_rw;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5480(2, &stack_buf_88);
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_78_rw = r20;
    if ((r0 & (1 << 0)) == 0) {
        // [Block 0x100002ff8 | PostDom: 0x100003018]
        r1 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r20)->field_10_rw;
        r4 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FCpublish_10000388c *)r4)->field_300_ro;
        r0 = 0;
        r2 = 0;
        r3 = r20;
        r0 = _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm(0, &stack_buf_88);
        r20 = r0;
    }
    // [Block 0x100003018 | PostDom: exit]
    r8 = 0x800;
    r21 = (r23 != 0) ? r8 : 0;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_78_rw = r20;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53d8(r0, &stack_buf_88);
    r0 = r20 + 0x20;
    r1 = r21;
    r2 = 2;
    r0 = flirt_dyld_stub_binder_trampoline_5528(r0, r20);
    r0 = &stack_buf_88; // [fp - 0x88]
    r0 = flirt_dyld_stub_binder_trampoline_5408(&stack_buf_88, r20);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r20);
    r20 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_50_rw;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5444(r0, r20);
    r22 = r0;
    r0 = 0x1000087c8;
    r1 = 0x18;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_539c(0x1000087c8, 0x18);
    r21 = r0;
    r0 = r0 + 0x10;
    r1 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_54d4(r0, r20);
    r8 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfcyycfU_TA; // 0x100004bf8
    /* 0x10000308c: stp x8, x21, [x29, #-0x68] */
    r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r8)->field_10_rw;
    *([x29, #-0x88]) = r8;
    d0 = *([x8, #0x890]);
    *([x29, #-0x80]) = d0;
    r8 = _$sIeg_IeyB_TR; // 0x1000019e4
    r9 = _block_descriptor.28; // 0x100008830
    /* 0x1000030b8: stp x8, x9, [x29, #-0x78] */
    r0 = &stack_buf_88; // [fp - 0x88]
    r0 = flirt_dyld_stub_binder_trampoline_52b8(&stack_buf_88, r20);
    r23 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_5498(r0, r20);
    r8 = r26;
    r0 = flirt_dyld_stub_binder_trampoline_5078(r0, r20);
    r24 = *([x29, #-0xe0]);
    r8 = r24;
    r0 = r22;
    r0 = _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_(r0, r20);
    r0 = r26;
    r1 = r24;
    r2 = r23;
    r3 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_51b0(r26, 0x400);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_52c4(r0, 0x400);
    /* 0x100003104: ldp x8, x1, [x29, #-0xd8] */
    r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r8)->field_08_rw;
    r0 = r24;
    r0 = x8(0x400, 0x400);
    /* 0x100003114: ldp x8, x1, [x29, #-0xf0] */
    r8 = ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r8)->field_08_rw;
    r0 = r26;
    r0 = x8(r26, 0x400);
    r20 = *([x29, #-0x60]);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, 0x400);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_548c(r0, 0x400);
    r20 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_50_rw;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5444(r0, 0x400);
    r21 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_54bc(r0, 0x400);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_51c8(r0, 0x400);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_54b0(r0, 0x400);
    r0 = r19;
    sp = &stack_buf_50; // [fp - 0x50]
    /* 0x100003174: ldp x24, x23, [sp, #0x20] */
    /* 0x100003178: ldp x26, x25, [sp, #0x10] */
    /* 0x10000317c: ldp x28, x27, [sp], #0x60 */
    return r0;
}

// ── sme_runtime_helper_100003184 @ 0x100003184 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sme_runtime_helper_100003184 ───
int64_t sme_runtime_helper_100003184(int64_t arg0, int64_t arg1) {
}

// ── _block_copy_helper @ 0x100003188 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _block_copy_helper ───
int64_t _block_copy_helper(int64_t arg0, int64_t arg1) {
    r8 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r1)->field_28_rw; // [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
    q0 = ((AutoStruct____swift_memcpy40_8_10000325c *)r1)->field_20_rw;
    ((AutoStruct____swift_memcpy40_8_10000325c *)r0)->field_20_rw = q0;
    r0 = r8;
    goto loc_100005498;
}

// ── _block_destroy_helper @ 0x10000319c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _block_destroy_helper ───
int64_t _block_destroy_helper(int64_t arg0, int64_t arg1) {
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_28_rw; // [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
    goto loc_10000548c;
}

// ── swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() @ 0x1000031a4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() ───
// Stack Frame: 48B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC(int64_t arg0, int64_t arg1) {
    r19 = r20;
    r0 = _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF(r0, r1);
    r20 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r20)->field_50_rw;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_5444(r20, r1);
    r21 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_54bc(r20, r1);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_51bc(r0, r1);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_54b0(r20, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r19)->field_68_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5510(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_48_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r1);
    r0 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_50_rw;
    r0 = flirt_dyld_stub_binder_trampoline_54b0(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_58_rw;
    r0 = flirt_dyld_stub_binder_trampoline_5354(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_60_rw;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_35d4_1000035d4 *)r19)->field_70_ro;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r19)->field_78_rw;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_1000031a4 *)r19)->field_80_ro;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r19)->field_88_rw;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_flirt_fast_memcpy_vec_47b4_1000047b4 *)r19)->field_90_rw;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = ((AutoStruct_swiftmainSystemAudioSpectrum_12232F587A4C5CD8B1EEDF696793FC_100002b30 *)r19)->field_98_rw;
    r0 = flirt_dyld_stub_binder_trampoline_53cc(r0, r1);
    r0 = r19;
    r1 = 0xb0;
    r2 = 7;
    goto loc_1000053e4;
}

// ── ___swift_noop_void_return @ 0x100003258 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_noop_void_return ───
int64_t ___swift_noop_void_return(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── ___swift_memcpy40_8 @ 0x10000325c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_memcpy40_8 ───
int64_t ___swift_memcpy40_8(int64_t arg0, int64_t arg1) {
    /* 0x10000325c: ldp q0, q1, [x1] */
    r8 = ((AutoStruct____swift_memcpy40_8_10000325c *)r1)->field_20_rw;
    ((AutoStruct____swift_memcpy40_8_10000325c *)r0)->field_20_rw = r8;
    /* 0x100003268: stp q0, q1, [x0] */
    return r0;
}

// ── swift::AudioStreamBasicDescription() @ 0x100003270 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioStreamBasicDescription() ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 0
int64_t swift::AudioStreamBasicDescription(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_100003288; }
    // [Block 0x100003274 | PostDom: 0x10000327c]
    r8 = ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_28_rw;
    if (r8 == 0) { goto loc_100003288; }
    // [Block 0x10000327c | PostDom: exit]
    r8 = *([x0]);
    r0 = r8 + 1;
    return r0;
}

// ── neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi @ 0x100003288 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi ───
int64_t neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1) {
    r0 = 0;
    return r0;
}

// ── swift::AudioStreamBasicDescription() @ 0x100003290 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioStreamBasicDescription() ───
// Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
int64_t swift::AudioStreamBasicDescription(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_1000032b4; }
    // [Block 0x100003294 | PostDom: 0x1000032c0]
    /* 0x100003294: movi v0.2d, #0000000000000000 */
    ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r0)->field_08_rw = q0;
    r8 = r1 - 1;
    ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r0)->field_18_ro = q0;
    *([x0]) = r8;
    if (r2 != 0) {
        // [Block 0x1000032ac | PostDom: 0x1000032bc]
        r8 = 1;
        goto loc_1000032bc;
        // [Block 0x1000032b4 | PostDom: 0x1000032c0]
        if (r2 != 0) {
            // [Block 0x1000032b8 | PostDom: 0x1000032bc]
            r8 = 0;
            // [Block 0x1000032bc | PostDom: 0x1000032c0]
            ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_28_rw = r8;
        }
    }
loc_1000032c0:
    return r0;
}

// ── swift::AudioStreamBasicDescription() @ 0x1000032c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioStreamBasicDescription() ───
int64_t swift::AudioStreamBasicDescription(int64_t arg0, int64_t arg1) {
    r1 = _$sSo27AudioStreamBasicDescriptionVML; // 0x10000c6d0
    r2 = 0x1000085f0;
    goto loc_100004f78;
}

// ── ___swift_memcpy24_8 @ 0x1000032d8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_memcpy24_8 ───
int64_t ___swift_memcpy24_8(int64_t arg0, int64_t arg1) {
    q0 = *([x1]);
    r8 = ((AutoStruct____swift_memcpy20_8_100004dc4 *)r1)->field_10_rw;
    ((AutoStruct____swift_memcpy20_8_100004dc4 *)r0)->field_10_rw = r8;
    *([x0]) = q0;
    return r0;
}

// ── flirt_string_length_scan_32ec @ 0x1000032ec (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_string_length_scan_32ec ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t flirt_string_length_scan_32ec(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_100003304; }
    // [Block 0x1000032f0 | PostDom: 0x1000032f8]
    r8 = ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r0)->field_18_ro;
    if (r8 == 0) { goto loc_100003304; }
    // [Block 0x1000032f8 | PostDom: exit]
    r8 = *([x0]);
    r0 = r8 + 1;
    return r0;
}

// ── neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi @ 0x100003304 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi ───
int64_t neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1) {
    r0 = 0;
    return r0;
}

// ── swift::AudioBufferList() @ 0x10000330c (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioBufferList() ───
// Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
int64_t swift::AudioBufferList(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_100003328; }
    // [Block 0x100003310 | PostDom: 0x100003334]
    r8 = r1 - 1;
    /* 0x100003314: stp xzr, xzr, [x0, #8] */
    *([x0]) = r8;
    if (r2 != 0) {
        // [Block 0x100003320 | PostDom: 0x100003330]
        r8 = 1;
        goto loc_100003330;
        // [Block 0x100003328 | PostDom: 0x100003334]
        if (r2 != 0) {
            // [Block 0x10000332c | PostDom: 0x100003330]
            r8 = 0;
            // [Block 0x100003330 | PostDom: 0x100003334]
            ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r0)->field_18_ro = r8;
        }
    }
loc_100003334:
    return r0;
}

// ── swift::AudioBufferList() @ 0x100003338 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioBufferList() ───
// Stack Frame: 32B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
int64_t swift::AudioBufferList(int64_t arg0, int64_t arg1) {
    r1 = _$sSo15AudioBufferListVML; // 0x10000c6d8
    r2 = 0x100008690;
    goto loc_100004f78;
    // [Block 0x10000334c | PostDom: exit]
    r19 = *([x1]); // __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
    *([x0]) = r19;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_5498(__METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum, _$sSo15AudioBufferListVML);
    r0 = r19 + 0x10;
    return r0;
}

// ── ___swift_memcpy64_8 @ 0x100003378 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_memcpy64_8 ───
int64_t ___swift_memcpy64_8(int64_t arg0, int64_t arg1) {
    /* 0x100003378: ldp q0, q1, [x1] */
    /* 0x10000337c: ldp q2, q3, [x1, #0x20] */
    /* 0x100003380: stp q2, q3, [x0, #0x20] */
    /* 0x100003384: stp q0, q1, [x0] */
    return r0;
}

// ── swift::AudioTimeStamp() @ 0x10000338c (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioTimeStamp() ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 0
int64_t swift::AudioTimeStamp(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_1000033a4; }
    // [Block 0x100003390 | PostDom: 0x100003398]
    r8 = ((AutoStruct_swiftAudioTimeStamp_10000338c *)r0)->field_40_ro;
    if (r8 == 0) { goto loc_1000033a4; }
    // [Block 0x100003398 | PostDom: exit]
    r8 = *([x0]);
    r0 = r8 + 1;
    return r0;
}

// ── neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi @ 0x1000033a4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi ───
int64_t neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1) {
    r0 = 0;
    return r0;
}

// ── swift::AudioTimeStamp() @ 0x1000033ac (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioTimeStamp() ───
// Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
int64_t swift::AudioTimeStamp(int64_t arg0, int64_t arg1) {
    if (r1 == 0) { goto loc_1000033d8; }
    // [Block 0x1000033b0 | PostDom: 0x1000033e4]
    r8 = r1 - 1;
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_38_rw = 0;
    /* 0x1000033b8: movi v0.2d, #0000000000000000 */
    ((AutoStruct_flirt_fast_memcpy_vec_24ac_1000024ac *)r0)->field_28_rw = q0;
    ((AutoStruct____swift_destroy_boxed_opaque_existential_1_100004694 *)r0)->field_18_ro = q0;
    ((AutoStruct_flirt_byte_memset_loop_4e88_100004e88 *)r0)->field_08_rw = q0;
    *([x0]) = r8;
    if (r2 != 0) {
        // [Block 0x1000033d0 | PostDom: 0x1000033e0]
        r8 = 1;
        goto loc_1000033e0;
        // [Block 0x1000033d8 | PostDom: 0x1000033e4]
        if (r2 != 0) {
            // [Block 0x1000033dc | PostDom: 0x1000033e0]
            r8 = 0;
            // [Block 0x1000033e0 | PostDom: 0x1000033e4]
            ((AutoStruct_swiftAudioTimeStamp_10000338c *)r0)->field_40_ro = r8;
        }
    }
loc_1000033e4:
    return r0;
}

// ── swift::AudioTimeStamp() @ 0x1000033e8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::AudioTimeStamp() ───
int64_t swift::AudioTimeStamp(int64_t arg0, int64_t arg1) {
    r1 = _$sSo14AudioTimeStampVML; // 0x10000c6e0
    r2 = 0x100008710;
    goto loc_100004f78;
}

// ── ___swift_instantiateConcreteTypeFromMangledNameV2 @ 0x1000033fc (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_instantiateConcreteTypeFromMangledNameV2 ───
// Stack Frame: 32B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 25
int64_t ___swift_instantiateConcreteTypeFromMangledNameV2(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = *([x0]);
    r8 = r0 & 1;
    /* 0x100003418: ccmp x8, #0, #0, ne */
    if (r0 != 0) {
        // [Block 0x100003420 | PostDom: 0x100003440]
        r9 = *([x1]);
        /* 0x100003424: asr x8, x9, #0x20 */
        r0 = r1 + r9;
        r1 = r8;
        r2 = 0;
        r3 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_5450(r0, r8);
        *([x19]) = r0;
    }
    // [Block 0x100003440 | PostDom: exit]
    return r0;
}

