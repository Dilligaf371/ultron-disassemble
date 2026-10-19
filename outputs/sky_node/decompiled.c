/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Applications/ChatGPT.app/Contents/Resources/native/sky.node
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── __Z20StartModifierCaptureRKN4Napi12CallbackInfoE @ 0x1978 (19 basic blocks) ──
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
    goto loc_1a80;
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
    goto loc_1a94;
loc_1a80:
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

// ── flirt_matrix_nested_solver_kernel_1ab0 @ 0x1ab0 (17 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_matrix_nested_solver_kernel_1ab0 ───
// Stack Frame: 0B | Basic Blocks: 17 | Natural Loops: 0 | Post-Dom Nodes: 17 | Callers: 1
int64_t flirt_matrix_nested_solver_kernel_1ab0(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_28[16]; // [sp + 0x28]
    r1 = &stack_buf_28; // [sp + 0x28]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8db0(r20, &stack_buf_28);
    if (r0 != 0) { goto loc_1c7c; }
    // [Block 0x1ac0 | PostDom: 0x1adc]
    r2 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
    r0 = sp;
    r1 = r20;
    r0 = __ZN4Napi12TypedArrayOfIhEC2EP10napi_env__P12napi_value__(sp, r20);
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_10_ro;
    if (r8 <= 0xa) { goto loc_1a4c; }
    // [Block 0x1adc | PostDom: 0x1af0]
    r8 = 0;
    r9 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    /* 0x1ae4: mul x8, x9, x8 */
    if (r8 != 8) { goto loc_1a68; }
    // [Block 0x1af0 | PostDom: exit]
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_20_ro;
    r20 = *([x8]);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8fcc(r20, r20);
    r0 = imp__OBJC_CLASS_$_NSView; // [0xadd98]
    r0 = flirt_dyld_stub_binder_trampoline_8f90(imp__OBJC_CLASS_$_NSView, r20);
    r1 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8f9c(r20, r0);
    if ((r0 & (1 << 0)) == 0) { goto loc_1b78; }
    // [Block 0x1b1c | PostDom: exit]
    r0 = r20;
    r0 = -[NSView window](r20, r0);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_8fe4(r0, r0);
    r22 = r0;
    if (r0 == 0) { goto loc_1b7c; }
    // [Block 0x1b34 | PostDom: exit]
    r0 = r22;
    r0 = -[NSView isKeyWindow](r0, r0);
    if ((r0 & (1 << 0)) == 0) { goto loc_1b7c; }
    // [Block 0x1b40 | PostDom: 0x1b90]
    r0 = r22;
    r0 = -[NSView windowNumber](r0, r0);
    r23 = r0;
    r0 = r21;
    r1 = 1;
    r0 = __ZNK4Napi12CallbackInfoixEm(r21, 1);
    r2 = r0;
    r3 = r1;
    r0 = r19;
    r1 = r23;
    r0 = __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE(r19, r0);
    r19 = r0;
    r21 = r1;
    goto loc_1b90;
    // [Block 0x1b78 | PostDom: 0x1b7c]
    r22 = 0;
loc_1b7c:
    r1 = &stack_buf_28; // [sp + 0x28]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8d80(r0, &stack_buf_28);
    if (r0 != 0) { goto loc_1c48; }
    // [Block 0x1b8c | PostDom: 0x1b90]
    r21 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
    // [Block 0x1b90 | PostDom: exit]
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(0, &stack_buf_28);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(r20, &stack_buf_28);
    r1 = r21;
    goto loc_1a94;
    // [Block 0x1ba8 | PostDom: 0x1c48]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r20 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r0 = r20;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.6(r0, r0);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r20 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r0 = r20;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.1(r0, r0);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r0 = r21;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.3(r0, r0);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r0 = r21;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.2(r0, r0);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r20 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r0 = r20;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.5(r0, r0);
    // [Block 0x1c48 | PostDom: 0x1c7c]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r0);
    r21 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r0);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x1c7c | PostDom: 0x1cf0]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r21;
    r0 = __Z20StartModifierCaptureRKN4Napi12CallbackInfoE.cold.4(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_1cf0;
    // [Block 0x1ca0 | PostDom: 0x1cf0]
    goto loc_1cf0;
    // [Block 0x1ca4 | PostDom: 0x1cf0]
    r19 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_1cf0:
    r19 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8fc0(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
}

// ── __ZNK4Napi12CallbackInfoixEm @ 0x1d70 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK4Napi12CallbackInfoixEm ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 5
int64_t __ZNK4Napi12CallbackInfoixEm(int64_t arg0, int64_t arg1) {
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r0)->field_20_ro;
    r19 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw;
    if (r1 >= x8) { goto loc_1dac; }
    // [Block 0x1d90 | PostDom: exit]
    r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r0)->field_28_ro;
    r1 = *([x8, x1, lsl #3]);
    r0 = r19;
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_1dac @ 0x1dac (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1dac ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_pthread_mutex_scoped_lock_1dac(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r1 = &stack_buf_8; // [sp + 0x8]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8db0(r19, &stack_buf_8);
    if (r0 != 0) { goto loc_1dd4; }
    // [Block 0x1dbc | PostDom: exit]
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r0 = r19;
    return r0;
}

// ── flirt_cxx_exception_landing_pad_1dd4 @ 0x1dd4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_1dd4 ───
int64_t flirt_cxx_exception_landing_pad_1dd4(int64_t arg0, int64_t arg1) {
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r20 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r19, r1);
    r0 = r20;
    r0 = __ZNK4Napi12CallbackInfoixEm.cold.1(r0, r1);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, r1);
}

// ── __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE @ 0x1e08 (16 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE ───
// Stack Frame: 0B | Basic Blocks: 16 | Natural Loops: 0 | Post-Dom Nodes: 16 | Callers: 1
int64_t __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    /* 0x1e0c: stp x26, x25, [sp, #0x20] */
    /* 0x1e10: stp x24, x23, [sp, #0x30] */
    r21 = r3;
    r22 = r1;
    r20 = r0;
    r8 = imp____stack_chk_guard; // [0xa01e0]
    r8 = *([x8]);
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw = r8;
    r0 = 0x18;
    r0 = flirt_dyld_stub_binder_trampoline_89e4(0x18, r1);
    r23 = r0;
    /* 0x1e4c: stp xzr, xzr, [x0, #8] */
    r8 = __ZN12_GLOBAL__N_115ModifierCapture7DisposeERKN4Napi12CallbackInfoE; // 0x2bfc
    *([x0]) = r8;
    r0 = 0x40;
    r0 = flirt_dyld_stub_binder_trampoline_89e4(0x40, r1);
    r19 = r0;
    r8 = "dispose";
    /* 0x1e70: stp x8, xzr, [x0] */
    r24 = __ZN4Napi12InstanceWrapIN12_GLOBAL__N_115ModifierCaptureEE33InstanceVoidMethodCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x42ac
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_10_ro = r24;
    /* 0x1e80: movi v0.2d, #0000000000000000 */
    r25 = r0;
    *([x25, #0x18]!) = q0;
    ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r0)->field_28_ro = q0;
    ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r0)->field_38_ro = r23;
    r1 = "ModifierCapture";
    r3 = __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE26ConstructorCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x2c00
    r7 = &stack_buf_8; // [sp + 0x8]
    r0 = r20;
    r2 = -1;
    r4 = 0;
    r5 = 1;
    r6 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8cd8(r0, "ModifierCapture");
    if (r0 != 0) { goto loc_208c; }
    // [Block 0x1ec4 | PostDom: exit]
    r8 = *([x25]);
    r9 = __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE27StaticGetterCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x31ac
    if (r8 == x9) { goto loc_1f70; }
    // [Block 0x1ed8 | PostDom: exit]
    r9 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro;
    r10 = __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE27StaticSetterCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x326c
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    if (r9 == x10) { goto loc_1f74; }
    // [Block 0x1ef0 | PostDom: exit]
    r10 = ((AutoStruct___ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE_1e08 *)r19)->field_31_ro;
    if ((r10 & (1 << 2)) != 0) { goto loc_1f94; }
    // [Block 0x1ef8 | PostDom: 0x1f04]
    r10 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r10 == x24) { goto loc_2014; }
    // [Block 0x1f04 | PostDom: 0x1f14]
    r11 = __ZN4Napi12InstanceWrapIN12_GLOBAL__N_115ModifierCaptureEE29InstanceMethodCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x4424
    if (r10 == x11) { goto loc_2050; }
    // [Block 0x1f14 | PostDom: exit]
    r10 = __ZN4Napi12InstanceWrapIN12_GLOBAL__N_115ModifierCaptureEE29InstanceGetterCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x45c8
    if (r8 != x10) {
        // [Block 0x1f24 | PostDom: exit]
        r8 = __ZN4Napi12InstanceWrapIN12_GLOBAL__N_115ModifierCaptureEE29InstanceSetterCallbackWrapperEP10napi_env__P20napi_callback_info__; // 0x476c
        if (r9 != x8) { goto loc_1f94; }
    }
    // [Block 0x1f34 | PostDom: exit]
    r2 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_38_ro;
    r3 = __ZN4Napi7details23default_basic_finalizerINS_20AccessorCallbackDataIN12_GLOBAL__N_115ModifierCaptureEMS4_FNS_5ValueERKNS_12CallbackInfoEEMS4_FvS8_RKS5_EEEEEvP10napi_env__PvSI_; // 0x4974
    r0 = r20;
    r4 = 0;
    r5 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8bf4(r0, "ModifierCapture");
    if (r0 == 0) { goto loc_1f94; }
    // [Block 0x1f54 | PostDom: exit]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, "ModifierCapture");
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, "ModifierCapture");
    goto loc_2124;
    // [Block 0x1f70 | PostDom: 0x1f74]
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    // [Block 0x1f74 | PostDom: 0x1f94]
    r2 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_38_ro;
    r3 = __ZN4Napi7details23default_basic_finalizerINS_20AccessorCallbackDataIN12_GLOBAL__N_115ModifierCaptureEPFNS_5ValueERKNS_12CallbackInfoEEPFvS8_RKS5_EEEEEvP10napi_env__PvSI_; // 0x429c
    r0 = r20;
    r4 = 0;
    r5 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8bf4(r0, "ModifierCapture");
    if (r0 != 0) { goto loc_210c; }
loc_1f94:
    r23 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, "ModifierCapture");
    /* 0x1fa0: scvtf d0, x22 */
    r1 = &stack_buf_8; // [sp + 0x8]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8c60(r0, &stack_buf_8);
    if (r0 != 0) { goto loc_20c0; }
    // [Block 0x1fb4 | PostDom: 0x1fd8]
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    /* 0x1fb8: stp x8, x21, [sp, #8] */
    r3 = &stack_buf_8; // [sp + 0x8]
    r4 = sp;
    r0 = r20;
    r1 = r23;
    r2 = 2;
    r0 = flirt_dyld_stub_binder_trampoline_8e28(r0, r0);
    if (r0 != 0) { goto loc_20e4; }
    // [Block 0x1fd8 | PostDom: 0x1ff4]
    r1 = *([sp]);
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r9 = imp____stack_chk_guard; // [0xa01e0]
    r9 = *([x9]);
    if (r9 != x8) { goto loc_2108; }
    // [Block 0x1ff4 | PostDom: exit]
    r0 = r20;
    /* 0x2004: ldp x24, x23, [sp, #0x30] */
    /* 0x2008: ldp x26, x25, [sp, #0x20] */
    return r0;
}

// ── flirt_objc_retain_release_thunk_2014 @ 0x2014 (15 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2014 ───
// Stack Frame: 0B | Basic Blocks: 15 | Natural Loops: 0 | Post-Dom Nodes: 15 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2014(int64_t arg0, int64_t arg1) {
    r2 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_38_ro; // [DWARF CU: modifier-capture.mm:sub_2014]
    r3 = __ZN4Napi7details23default_basic_finalizerINS_18MethodCallbackDataIN12_GLOBAL__N_115ModifierCaptureEMS4_FvRKNS_12CallbackInfoEEEEEEvP10napi_env__PvSD_; // 0x4954
    r0 = r20;
    r4 = 0;
    r5 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8bf4(r20, r1);
    if (r0 == 0) { goto loc_1f94; }
    // [Block 0x2034 | PostDom: 0x2124]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, r1);
    goto loc_2124;
    // [Block 0x2050 | PostDom: 0x2070]
    r2 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_38_ro;
    r3 = __ZN4Napi7details23default_basic_finalizerINS_18MethodCallbackDataIN12_GLOBAL__N_115ModifierCaptureEMS4_FNS_5ValueERKNS_12CallbackInfoEEEEEEvP10napi_env__PvSE_; // 0x4964
    r0 = r20;
    r4 = 0;
    r5 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8bf4(r20, r1);
    if (r0 == 0) { goto loc_1f94; }
    // [Block 0x2070 | PostDom: 0x2124]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, r1);
    goto loc_2124;
    // [Block 0x208c | PostDom: 0x213c]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, r1);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_213c;
    // [Block 0x20c0 | PostDom: 0x213c]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE.cold.1(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_213c;
    // [Block 0x20e4 | PostDom: 0x213c]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = __ZN12_GLOBAL__N_115ModifierCapture6CreateEN4Napi3EnvElNS1_8FunctionE.cold.2(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_213c;
    // [Block 0x2108 | PostDom: 0x2124]
    r0 = flirt_dyld_stub_binder_trampoline_8a44(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_2124:
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_213c:
    goto loc_218c;
    // [Block 0x2144 | PostDom: 0x218c]
    goto loc_218c;
    // [Block 0x2148 | PostDom: 0x218c]
    goto loc_218c;
    // [Block 0x214c | PostDom: 0x218c]
    goto loc_218c;
    // [Block 0x2150 | PostDom: 0x218c]
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_218c:
    r20 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
}

// ── __ZN4Napi5Error3NewEP10napi_env__ @ 0x21d4 (9 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi5Error3NewEP10napi_env__ ───
// Stack Frame: 0B | Basic Blocks: 9 | Natural Loops: 0 | Post-Dom Nodes: 9 | Callers: 589
int64_t __ZN4Napi5Error3NewEP10napi_env__(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[15]; // [sp + 0x8]
    uint8_t stack_buf_17[8]; // [sp + 0x17]
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r19 = r0;
    r20 = r8;
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw = 0;
    r1 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_8d5c(r0, &stack_buf_8);
    if (r0 != 0) { goto loc_2300; }
    // [Block 0x2200 | PostDom: 0x221c]
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r21 = *([x8]);
    r22 = *([x8, #0x14]);
    r1 = &stack_buf_17; // [sp + 0x17]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8e1c(r0, &stack_buf_17);
    if (r0 != 0) { goto loc_2314; }
    // [Block 0x221c | PostDom: 0x22b0]
    r8 = ((AutoStruct___ZNK4Napi6String9Utf8ValueEv_29e0 *)sp)->field_17_ro;
    if (r8 != 1) { goto loc_224c; }
    // [Block 0x2228 | PostDom: 0x22b0]
    r1 = &stack_buf_18; // [sp + 0x18]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8d20(r0, &stack_buf_18);
    if (r0 != 0) {
        // [Block 0x2238 | PostDom: 0x224c]
        r0 = "Error::New";
        r1 = "napi_get_and_clear_last_exception";
        r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::New", "napi_get_and_clear_last_exception");
        // [Block 0x224c | PostDom: 0x227c]
        r8 = "Error in native callback";
        r21 = (r21 == 0) ? r8 : r21;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_9098(r21, "napi_get_and_clear_last_exception");
        r2 = r0;
        r3 = &stack_buf_8; // [sp + 0x8]
        r0 = r19;
        r1 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_8cb4(r0, r21);
        if (r0 != 0) { goto loc_2328; }
        // [Block 0x227c | PostDom: 0x2298]
        r8 = 1;
        /* 0x2284: lsl w8, w8, w22 */
        r9 = 0xcc;
        r8 = r8 & r9;
        /* 0x2290: ccmp w8, #0, #4, ls */
        if (r22 == 7) { goto loc_22d4; }
        // [Block 0x2298 | PostDom: 0x22b0]
        r2 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
        r3 = &stack_buf_18; // [sp + 0x18]
        r0 = r19;
        r1 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_8ccc(r0, 0);
        if (r0 != 0) { goto loc_22ec; }
    }
    // [Block 0x22b0 | PostDom: exit]
    r2 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r0 = r20;
    r1 = r19;
    r0 = __ZN4Napi5ErrorC2EP10napi_env__P12napi_value__(r8, r0);
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_22d4 @ 0x22d4 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_22d4 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t flirt_pthread_mutex_scoped_lock_22d4(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r2 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw; // [DWARF CU: modifier-capture.mm:sub_22d4]
    r3 = &stack_buf_18; // [sp + 0x18]
    r0 = r19;
    r1 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8c6c(r19, 0);
    if (r0 == 0) { goto loc_22b0; }
    // [Block 0x22ec | PostDom: exit]
    r0 = "Error::New";
    r1 = "napi_create_error";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::New", "napi_create_error");
    r0 = "Error::New";
    r1 = "napi_get_last_error_info";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::New", "napi_get_last_error_info");
    r0 = "Error::New";
    r1 = "napi_is_exception_pending";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::New", "napi_is_exception_pending");
    r0 = "Error::New";
    r1 = "napi_create_string_utf8";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::New", "napi_create_string_utf8");
}

// ── __ZN4Napi5ErrorD1Ev @ 0x233c (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi5ErrorD1Ev ───
// Stack Frame: 32B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 177
int64_t __ZN4Napi5ErrorD1Ev(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r8 = __ZTVN4Napi5ErrorE; // 0xa05a0
    r8 = r8 + 0x10;
    *([x0]) = r8;
    /* 0x235c: ldrsb w8, [x0, #0x37] */
    if ((r8 & (1 << 0x1f)) != 0) { goto loc_2384; }
    // [Block 0x2364 | PostDom: 0x2374]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89a8(r0, r1);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r1 != 0) { goto loc_239c; }
    // [Block 0x2374 | PostDom: exit]
    r0 = r19;
    return r0;
}

// ── flirt_cxx_exception_landing_pad_2384 @ 0x2384 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_2384 ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 1
int64_t flirt_cxx_exception_landing_pad_2384(int64_t arg0, int64_t arg1) {
    r0 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro; // [DWARF CU: modifier-capture.mm:sub_2384]
    r0 = flirt_dyld_stub_binder_trampoline_89cc([DWARF CU: modifier-capture.mm:sub_2384], r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89a8(r19, r1);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r1 == 0) { goto loc_2374; }
    // [Block 0x239c | PostDom: 0x23ac]
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_18_rw;
    if ((r8 & (1 << 0)) == 0) {
        // [Block 0x23a4 | PostDom: 0x23ac]
        r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_08_rw;
        r0 = flirt_dyld_stub_binder_trampoline_8cfc(r0, r1);
    }
    // [Block 0x23ac | PostDom: exit]
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro = 0;
    r0 = r19;
    return r0;
}

// ── flirt_objc_retain_release_thunk_23c0 @ 0x23c0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_23c0 ───
int64_t flirt_objc_retain_release_thunk_23c0(int64_t arg0, int64_t arg1) {
    r0 = ___clang_call_terminate(r0, r1);
}

// ── __ZN4Napi5Error5FatalEPKcS2_ @ 0x23c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi5Error5FatalEPKcS2_ ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 27
int64_t __ZN4Napi5Error5FatalEPKcS2_(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r2 = r1;
    r1 = -1;
    r3 = -1;
    r0 = flirt_dyld_stub_binder_trampoline_8d14(r0, -1);
}

// ── __ZN4Napi5ErrorC2EP10napi_env__P12napi_value__ @ 0x23dc (6 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi5ErrorC2EP10napi_env__P12napi_value__ ───
// Stack Frame: 0B | Basic Blocks: 6 | Natural Loops: 0 | Post-Dom Nodes: 6 | Callers: 5
int64_t __ZN4Napi5ErrorC2EP10napi_env__P12napi_value__(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_38[56]; // [fp - 0x38]
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    /* 0x23e0: stp x24, x23, [sp, #0x50] */
    r20 = r0;
    r19 = r0;
    *([x19, #8]!) = r1;
    r22 = r0;
    *([x22, #0x10]!) = 0;
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_18_rw = 0;
    r8 = __ZTVN4Napi5ErrorE; // 0xa05a0
    r8 = r8 + 0x10;
    *([x0]) = r8;
    r24 = r0;
    *([x24, #0x20]!) = 0;
    /* 0x2424: stp xzr, xzr, [x0, #0x28] */
    if (r2 != 0) {
        // [Block 0x242c | PostDom: 0x24b0]
        r23 = r2;
        r21 = r1;
        r0 = r1;
        r1 = r2;
        r2 = 1;
        r3 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_8c9c(r1, r2);
        if (r0 != 0) {
            // [Block 0x244c | PostDom: 0x245c]
            r1 = &stack_buf_38; // [fp - 0x38]
            r0 = r21;
            r0 = flirt_dyld_stub_binder_trampoline_8c84(r1, &stack_buf_38);
            if (r0 != 0) { goto loc_24cc; }
            // [Block 0x245c | PostDom: 0x2498]
            r8 = "4bda9e7e-4913-4dbc-95de-891cbf66598e-errorVal";
            ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw = r8;
            /* 0x2468: movi v0.2d, #0000000000000000 */
            /* 0x246c: stp q0, q0, [sp, #0x10] */
            ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_30_ro = r23;
            r8 = 2;
            ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_38_ro = r8;
            ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_40_ro = 0;
            r1 = *([x29, #-0x38]);
            r3 = &stack_buf_8; // [sp + 0x8]
            r0 = r21;
            r2 = 1;
            r0 = flirt_dyld_stub_binder_trampoline_8ce4(r1, &stack_buf_38);
            if (r0 != 0) { goto loc_24e4; }
            // [Block 0x2498 | PostDom: 0x24b0]
            r1 = *([x29, #-0x38]);
            r0 = r21;
            r2 = 1;
            r3 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_8c9c(r1, &stack_buf_38);
            if (r0 != 0) { goto loc_24fc; }
        }
    }
loc_24b0:
    r0 = r20;
    /* 0x24c0: ldp x24, x23, [sp, #0x50] */
    return r0;
}

// ── flirt_objc_retain_release_thunk_24cc @ 0x24cc (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_24cc ───
// Stack Frame: 0B | Basic Blocks: 8 | Natural Loops: 0 | Post-Dom Nodes: 8 | Callers: 1
int64_t flirt_objc_retain_release_thunk_24cc(int64_t arg0, int64_t arg1) {
    r0 = "Error::Error";
    r1 = "napi_create_object";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::Error", "napi_create_object");
    goto loc_2510;
    // [Block 0x24e4 | PostDom: 0x2510]
    r0 = "Error::Error";
    r1 = "napi_define_properties";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::Error", "napi_define_properties");
    goto loc_2510;
    // [Block 0x24fc | PostDom: 0x2510]
    r0 = "Error::Error";
    r1 = "napi_create_reference";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("Error::Error", "napi_create_reference");
loc_2510:
    goto loc_251c;
    // [Block 0x2518 | PostDom: 0x251c]
    goto loc_251c;
    // [Block 0x251c | PostDom: 0x2530]
    r21 = r0;
    /* 0x2520: ldrsb w8, [x20, #0x37] */
    if ((r8 & (1 << 0x1f)) != 0) {
        // [Block 0x2528 | PostDom: 0x2530]
        r0 = *([x24]);
        r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, "napi_create_reference");
    }
    // [Block 0x2530 | PostDom: exit]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_89a8(r20, "napi_create_reference");
    r0 = r19;
    r0 = __ZN4Napi15ObjectReferenceD2Ev(r19, "napi_create_reference");
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, "napi_create_reference");
}

// ── __ZN4Napi15ObjectReferenceD2Ev @ 0x2548 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi15ObjectReferenceD2Ev ───
// Stack Frame: 32B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 1
int64_t __ZN4Napi15ObjectReferenceD2Ev(int64_t arg0, int64_t arg1) {
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw;
    if (r1 != 0) {
        // [Block 0x255c | PostDom: 0x2578]
        r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_10_ro;
        if ((r8 & (1 << 0)) == 0) {
            // [Block 0x2564 | PostDom: 0x2578]
            r8 = *([x0]);
            r19 = r0;
            r0 = r8;
            r0 = flirt_dyld_stub_binder_trampoline_8cfc(r8, r1);
            r0 = r19;
        }
        // [Block 0x2578 | PostDom: 0x257c]
        ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw = 0;
    }
    // [Block 0x257c | PostDom: exit]
    return r0;
}

// ── flirt_objc_retain_release_thunk_2588 @ 0x2588 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2588 ───
int64_t flirt_objc_retain_release_thunk_2588(int64_t arg0, int64_t arg1) {
    r0 = ___clang_call_terminate(r0, r1);
}

// ── __ZN4Napi5ErrorD0Ev @ 0x258c (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi5ErrorD0Ev ───
// Stack Frame: 32B | Basic Blocks: 8 | Natural Loops: 0 | Post-Dom Nodes: 8 | Callers: 0
int64_t __ZN4Napi5ErrorD0Ev(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r8 = __ZTVN4Napi5ErrorE; // 0xa05a0
    r8 = r8 + 0x10;
    *([x0]) = r8;
    /* 0x25ac: ldrsb w8, [x0, #0x37] */
    if ((r8 & (1 << 0x1f)) != 0) { goto loc_25c8; }
    // [Block 0x25b4 | PostDom: 0x25f0]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89a8(r0, r1);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r1 != 0) { goto loc_25e0; }
    // [Block 0x25c4 | PostDom: 0x25f0]
    goto loc_25f0;
    // [Block 0x25c8 | PostDom: 0x25f0]
    r0 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89a8(r0, r1);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r1 != 0) {
        // [Block 0x25e0 | PostDom: 0x25f0]
        r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_18_rw;
        if ((r8 & (1 << 0)) == 0) {
            // [Block 0x25e8 | PostDom: 0x25f0]
            r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_08_rw;
            r0 = flirt_dyld_stub_binder_trampoline_8cfc(r0, r1);
        }
    }
loc_25f0:
    r0 = r19;
    goto loc_789cc;
    // [Block 0x2600 | PostDom: exit]
    r0 = ___clang_call_terminate(r0, r1);
}

// ── __ZNK4Napi5Error4whatEv @ 0x2604 (10 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK4Napi5Error4whatEv ───
// Stack Frame: 0B | Basic Blocks: 10 | Natural Loops: 0 | Post-Dom Nodes: 10 | Callers: 0
int64_t __ZNK4Napi5Error4whatEv(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r19 = r0;
    /* 0x2618: ldrsb x8, [x0, #0x37] */
    if ((r8 & (1 << 0x3f)) != 0) { goto loc_262c; }
    // [Block 0x2620 | PostDom: 0x2680]
    r20 = r19 + 0x20;
    if (r8 == 0) {
        // [Block 0x2628 | PostDom: 0x2638]
        goto loc_2638;
        // [Block 0x262c | PostDom: 0x2680]
        r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r19)->field_28_ro;
        r20 = r19 + 0x20;
        if (r8 == 0) {
            // [Block 0x2638 | PostDom: 0x2680]
            r0 = r19;
            r8 = *([x0, #8]!);
            if (r8 != 0) {
                // [Block 0x2644 | PostDom: 0x2670]
                r1 = "message";
                r0 = __ZNK4Napi15ObjectReference3GetEPKc(r0, "message");
                /* 0x2650: stp x0, x1, [sp, #8] */
                r8 = &stack_buf_18; // [sp + 0x18]
                r0 = &stack_buf_8; // [sp + 0x8]
                r0 = __ZNK4Napi6String9Utf8ValueEv(&stack_buf_8, "message");
                /* 0x2660: ldrsb w8, [x19, #0x37] */
                if ((r8 & (1 << 0x1f)) != 0) {
                    // [Block 0x2668 | PostDom: 0x2670]
                    r0 = *([x20]);
                    r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, "message");
                }
                // [Block 0x2670 | PostDom: 0x2680]
                q0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
                *([x20]) = q0;
                r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
                ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r20)->field_10_ro = r8;
            }
        }
    }
loc_2680:
    /* 0x2680: ldrsb w8, [x19, #0x37] */
    if ((r8 & (1 << 0x1f)) != 0) { goto loc_269c; }
    // [Block 0x2688 | PostDom: exit]
    r0 = r20;
    return r0;
}

// ── flirt_fast_memcpy_vec_269c @ 0x269c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_269c ───
int64_t flirt_fast_memcpy_vec_269c(int64_t arg0, int64_t arg1) {
    r20 = *([x20]); // [DWARF CU: modifier-capture.mm:sub_269c]
    r0 = r20;
    return r0;
}

// ── flirt_objc_retain_release_thunk_26b4 @ 0x26b4 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_26b4 ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
int64_t flirt_objc_retain_release_thunk_26b4(int64_t arg0, int64_t arg1) {
    r0 = flirt_dyld_stub_binder_trampoline_8a14(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, r1);
    goto loc_2680;
    // [Block 0x26c0 | PostDom: exit]
    r0 = ___clang_call_terminate(r0, r1);
}

// ── ___clang_call_terminate @ 0x26c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___clang_call_terminate ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 62
int64_t ___clang_call_terminate(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_8a14(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_89b4(r0, r1);
}

// ── __ZN4Napi9ReferenceINS_6ObjectEED2Ev @ 0x26d4 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi9ReferenceINS_6ObjectEED2Ev ───
// Stack Frame: 32B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 1
int64_t __ZN4Napi9ReferenceINS_6ObjectEED2Ev(int64_t arg0, int64_t arg1) {
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw;
    if (r1 != 0) {
        // [Block 0x26e8 | PostDom: 0x2704]
        r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_10_ro;
        if ((r8 & (1 << 0)) == 0) {
            // [Block 0x26f0 | PostDom: 0x2704]
            r8 = *([x0]);
            r19 = r0;
            r0 = r8;
            r0 = flirt_dyld_stub_binder_trampoline_8cfc(r8, r1);
            r0 = r19;
        }
        // [Block 0x2704 | PostDom: 0x2708]
        ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_08_rw = 0;
    }
    // [Block 0x2708 | PostDom: exit]
    return r0;
}

// ── flirt_objc_retain_release_thunk_2714 @ 0x2714 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2714 ───
int64_t flirt_objc_retain_release_thunk_2714(int64_t arg0, int64_t arg1) {
    r0 = ___clang_call_terminate(r0, r1);
}

// ── __ZNK4Napi15ObjectReference3GetEPKc @ 0x2718 (15 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK4Napi15ObjectReference3GetEPKc ───
// Stack Frame: 0B | Basic Blocks: 15 | Natural Loops: 0 | Post-Dom Nodes: 15 | Callers: 1
int64_t __ZNK4Napi15ObjectReference3GetEPKc(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r20 = r1;
    r19 = r0;
    r0 = *([x0]);
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw = r0;
    r8 = &stack_buf_8; // [sp + 0x8]
    r1 = r8 + 8;
    r0 = flirt_dyld_stub_binder_trampoline_8e34(r0, r1);
    if (r0 != 0) { goto loc_2814; }
    // [Block 0x274c | PostDom: 0x2774]
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_08_rw;
    if (r1 == 0) { goto loc_2770; }
    // [Block 0x2754 | PostDom: 0x2764]
    r0 = *([x19]);
    r2 = &stack_buf_18; // [sp + 0x18]
    r0 = flirt_dyld_stub_binder_trampoline_8d98(r0, r1);
    if (r0 != 0) { goto loc_2868; }
    // [Block 0x2764 | PostDom: 0x2774]
    r21 = *([x19]);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    goto loc_2774;
    // [Block 0x2770 | PostDom: 0x2774]
    r21 = *([x19]);
    // [Block 0x2774 | PostDom: 0x2788]
    r3 = &stack_buf_18; // [sp + 0x18]
    r0 = r21;
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8d68(r21, r1);
    if (r0 != 0) { goto loc_2834; }
    // [Block 0x2788 | PostDom: 0x27dc]
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r1 = &stack_buf_18; // [sp + 0x18]
    r0 = flirt_dyld_stub_binder_trampoline_8e1c(r0, &stack_buf_18);
    if (r0 != 0) { goto loc_27c4; }
    // [Block 0x279c | PostDom: 0x27dc]
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    if ((r8 & (1 << 0)) == 0) { goto loc_27c4; }
    // [Block 0x27a4 | PostDom: 0x27ac]
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_08_rw;
    if (r1 == 0) { goto loc_2808; }
    // [Block 0x27ac | PostDom: 0x27bc]
    r0 = *([x19]);
    r2 = &stack_buf_18; // [sp + 0x18]
    r0 = flirt_dyld_stub_binder_trampoline_8d98(r0, &stack_buf_18);
    if (r0 != 0) { goto loc_28d0; }
    // [Block 0x27bc | PostDom: 0x27dc]
    r19 = *([x19]);
    goto loc_27dc;
    // [Block 0x27c4 | PostDom: 0x27d8]
    /* 0x27c4: ldp x0, x1, [sp, #8] */
    r3 = &stack_buf_18; // [sp + 0x18]
    r2 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8d08(r0, &stack_buf_18);
    if (r0 != 0) { goto loc_289c; }
    // [Block 0x27d8 | PostDom: 0x27dc]
    r19 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    // [Block 0x27dc | PostDom: 0x27ec]
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    /* 0x27e0: ldp x0, x1, [sp, #8] */
    r0 = flirt_dyld_stub_binder_trampoline_8c18(r0, &stack_buf_18);
    if (r0 != 0) { goto loc_2850; }
    // [Block 0x27ec | PostDom: exit]
    r0 = r19;
    r1 = r20;
    return r0;
}

// ── flirt_objc_retain_release_thunk_2808 @ 0x2808 (12 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2808 ───
// Stack Frame: 0B | Basic Blocks: 12 | Natural Loops: 0 | Post-Dom Nodes: 12 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2808(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r20 = 0;
    r19 = *([x19]);
    goto loc_27e0;
    // [Block 0x2814 | PostDom: 0x2880]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r20 = r0;
    r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r8 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r1);
    r0 = r20;
    r0 = __ZNK4Napi15ObjectReference3GetEPKc.cold.1(r0, r1);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r20 = r0;
    r8 = r0;
    r0 = r21;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r21, r1);
    goto loc_2880;
    // [Block 0x2850 | PostDom: 0x2900]
    r0 = "EscapableHandleScope::~EscapableHandleScope";
    r1 = "napi_close_escapable_handle_scope";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("EscapableHandleScope::~EscapableHandleScope", "napi_close_escapable_handle_scope");
    goto loc_2900;
    // [Block 0x2868 | PostDom: 0x2880]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, "napi_close_escapable_handle_scope");
    r20 = r0;
    r0 = *([x19]);
    r8 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, "napi_close_escapable_handle_scope");
    // [Block 0x2880 | PostDom: 0x2900]
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2900;
    // [Block 0x289c | PostDom: 0x2900]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r8 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2900;
    // [Block 0x28d0 | PostDom: 0x2900]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    r0 = *([x19]);
    r8 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_2900:
    goto loc_2924;
    // [Block 0x2908 | PostDom: 0x2924]
    goto loc_2924;
    // [Block 0x290c | PostDom: 0x2924]
    goto loc_2924;
    // [Block 0x2910 | PostDom: 0x2924]
    r19 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = __ZN4Napi20EscapableHandleScopeD1Ev(&stack_buf_8, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_2924:
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = __ZN4Napi20EscapableHandleScopeD1Ev(&stack_buf_8, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = __ZN4Napi20EscapableHandleScopeD1Ev(&stack_buf_8, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = __ZN4Napi20EscapableHandleScopeD1Ev(&stack_buf_8, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = ___clang_call_terminate(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r19 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = __ZN4Napi20EscapableHandleScopeD1Ev(&stack_buf_8, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
}

// ── __ZN4Napi20EscapableHandleScopeD1Ev @ 0x2994 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi20EscapableHandleScopeD1Ev ───
// Stack Frame: 32B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 20
int64_t __ZN4Napi20EscapableHandleScopeD1Ev(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = *([x0]);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_08_rw;
    r0 = flirt_dyld_stub_binder_trampoline_8c18(r0, r1);
    if (r0 != 0) { goto loc_29c4; }
    // [Block 0x29b4 | PostDom: exit]
    r0 = r19;
    return r0;
}

// ── flirt_security_audit_command_exec_29c4 @ 0x29c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_security_audit_command_exec_29c4 ───
int64_t flirt_security_audit_command_exec_29c4(int64_t arg0, int64_t arg1) {
    r0 = "EscapableHandleScope::~EscapableHandleScope";
    r1 = "napi_close_escapable_handle_scope";
    r0 = __ZN4Napi5Error5FatalEPKcS2_("EscapableHandleScope::~EscapableHandleScope", "napi_close_escapable_handle_scope");
    r0 = ___clang_call_terminate(r0, "napi_close_escapable_handle_scope");
}

// ── __ZNK4Napi6String9Utf8ValueEv @ 0x29e0 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK4Napi6String9Utf8ValueEv ───
// Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 13
int64_t __ZNK4Napi6String9Utf8ValueEv(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r20 = r0;
    r19 = r8;
    r0 = *([x0]);
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r20)->field_08_rw;
    r4 = &stack_buf_8; // [sp + 0x8]
    r2 = 0;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8dec(r0, r1);
    if (r0 != 0) { goto loc_2ad8; }
    // [Block 0x2a18 | PostDom: 0x2a38]
    /* 0x2a18: stp xzr, xzr, [x19] */
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro = 0;
    r21 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw;
    r8 = r21 + 1;
    r9 = -9;
    r9 = 0x7fff000000000000; // movk lsl #48
    if (r8 >= x9) { goto loc_2af8; }
    // [Block 0x2a38 | PostDom: 0x2a74]
    if (r8 >= 0x17) {
        // [Block 0x2a40 | PostDom: 0x2a74]
        r8 = r8 | 7;
        r9 = 0x19;
        /* 0x2a4c: csinc x22, x9, x8, eq */
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_89e4(r22, r1);
        r8 = *([x19]);
        *([x0]) = r8;
        r8 = r22 | 0x8000000000000000;
        /* 0x2a64: stp xzr, x8, [x19, #8] */
        *([x19]) = r0;
    } else {
        // [Block 0x2a70 | PostDom: 0x2a74]
        if (r21 == 0) { goto loc_2acc; }
    }
    // [Block 0x2a74 | PostDom: 0x2ab8]
    // [SWITCH DISPATCH DETECTED @ 0x2a74: Multi-Way Cascade on r8 (2 cases)]
    switch (r8) { case 0x0: goto loc_2aa0; case 0x0: goto loc_2aa8; }
    r0 = r19;
    r1 = r21;
    r2 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8984(r8, r21);
    /* 0x2a84: ldp x0, x1, [x20] */
    /* 0x2a88: ldrsb w8, [x19, #0x17] */
    r9 = *([x19]);
    r10 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    r10 = r10 & 0x7fffffffffffffff;
    r10--;
    r2 = (r8 < 0) ? r9 : r19;
    r8 = 0x16;
    r3 = (r8 < 0) ? r10 : r8;
    r4 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8dec(r0, r21);
    if (r0 != 0) { goto loc_2b00; }
    // [Block 0x2ab8 | PostDom: exit]
    return r0;
}

// ── flirt_objc_retain_release_thunk_2acc @ 0x2acc (8 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2acc ───
// Stack Frame: 0B | Basic Blocks: 8 | Natural Loops: 0 | Post-Dom Nodes: 8 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2acc(int64_t arg0, int64_t arg1) {
    ((AutoStruct___ZNK4Napi6String9Utf8ValueEv_29e0 *)r19)->field_17_ro = 0;
    *([x19, x21]) = 0;
    goto loc_2a84;
    // [Block 0x2ad8 | PostDom: 0x2b30]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r19 = r0;
    r0 = *([x20]);
    r8 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r1);
    r0 = r19;
    r0 = __ZNK4Napi6String9Utf8ValueEv.cold.1(r0, r1);
    r0 = __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB9nqe210106Ev(r0, r1);
    goto loc_2b30;
    // [Block 0x2b00 | PostDom: 0x2b30]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r1);
    r21 = r0;
    r0 = *([x20]);
    r8 = r21;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, r1);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x2b30 | PostDom: 0x2b5c]
    r20 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2b5c;
    // [Block 0x2b44 | PostDom: 0x2b5c]
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r20 = r0;
    // [Block 0x2b5c | PostDom: 0x2b6c]
    /* 0x2b5c: ldrsb w8, [x19, #0x17] */
    if ((r8 & (1 << 0x1f)) != 0) {
        // [Block 0x2b64 | PostDom: 0x2b6c]
        r0 = *([x19]);
        r0 = flirt_dyld_stub_binder_trampoline_89cc(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    }
    // [Block 0x2b6c | PostDom: exit]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
}

// ── __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB9nqe210106Ev @ 0x2b74 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB9nqe210106Ev ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 5
int64_t __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB9nqe210106Ev(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = "basic_string";
    r0 = __ZNSt3__120__throw_length_errorB9nqe210106EPKc("basic_string", r1);
}

// ── __ZNSt3__120__throw_length_errorB9nqe210106EPKc @ 0x2b88 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNSt3__120__throw_length_errorB9nqe210106EPKc ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 2
int64_t __ZNSt3__120__throw_length_errorB9nqe210106EPKc(int64_t arg0, int64_t arg1) {
    r20 = r0;
    r0 = 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x10, r1);
    r19 = r0;
    r1 = r20;
    r0 = __ZNSt12length_errorC1B9nqe210106EPKc(r0, r0);
    r1 = imp___ZTVN10__cxxabiv120__si_class_type_infoE; // 0xa05c8
    r2 = imp___ZNSt12length_errorD1Ev; // [0xa0198]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
}

// ── __ZNSt12length_errorC1B9nqe210106EPKc @ 0x2bd8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNSt12length_errorC1B9nqe210106EPKc ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZNSt12length_errorC1B9nqe210106EPKc(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_896c(r0, r1);
    r8 = imp___ZTVSt12length_error; // [0xa01b8]
    r8 = imp__NSApp; // 0xa0010
    *([x0]) = r8;
    return r0;
}

// ── __ZN12_GLOBAL__N_115ModifierCapture7DisposeERKN4Napi12CallbackInfoE @ 0x2bfc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN12_GLOBAL__N_115ModifierCapture7DisposeERKN4Napi12CallbackInfoE ───
int64_t __ZN12_GLOBAL__N_115ModifierCapture7DisposeERKN4Napi12CallbackInfoE(int64_t arg0, int64_t arg1) {
    goto loc_4224;
}

// ── __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE26ConstructorCallbackWrapperEP10napi_env__P20napi_callback_info__ @ 0x2c00 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE26ConstructorCallbackWrapperEP10napi_env__P20napi_callback_info__ ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE26ConstructorCallbackWrapperEP10napi_env__P20napi_callback_info__(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    /* 0x2c04: stp x24, x23, [sp, #0xa0] */
    r19 = r1;
    r20 = r0;
    r2 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_8d74(r0, r1);
    if (r0 == 0) { goto loc_2c48; }
    // [Block 0x2c2c | PostDom: exit]
    r0 = 0;
    /* 0x2c3c: ldp x24, x23, [sp, #0xa0] */
    return r0;
}

// ── flirt_byte_memset_loop_2c48 @ 0x2c48 (26 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_byte_memset_loop_2c48 ───
// Stack Frame: 0B | Basic Blocks: 26 | Natural Loops: 1 | Post-Dom Nodes: 26 | Callers: 1
int64_t flirt_byte_memset_loop_2c48(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_38[56]; // [fp - 0x38]
    uint8_t stack_buf_50[24]; // [fp - 0x50]
    uint8_t stack_buf_10[16]; // [sp + 0x10]
    r8 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_08_rw; // [DWARF CU: modifier-capture.mm:sub_2c48]
    if (r8 == 0) { goto loc_2e34; }
    // [Block 0x2c50 | PostDom: 0x2cb0]
    r0 = &stack_buf_10; // [sp + 0x10]
    r1 = r20;
    r2 = r19;
    r0 = __ZN4Napi12CallbackInfoC2EP10napi_env__P20napi_callback_info__(&stack_buf_10, r20);
    r0 = 0x50;
    r0 = flirt_dyld_stub_binder_trampoline_89e4(0x50, r20);
    r19 = r0;
    r21 = r0;
    *([x21, #8]!) = 0;
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_10_ro = 0;
    r8 = 0x100;
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r0)->field_18_rw = r8;
    r8 = 0xa0678;
    *([x0]) = r8;
    ((AutoStruct___ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEED2Ev_3d00 *)r0)->field_1a_ro = 0;
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r1 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
    if (r1 == 0) {
        // [Block 0x2c9c | PostDom: 0x2cac]
        r1 = &stack_buf_50; // [fp - 0x50]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_8db0(r20, &stack_buf_50);
        if (r0 != 0) { goto loc_2f90; }
        // [Block 0x2cac | PostDom: 0x2cb0]
        r1 = *([x29, #-0x50]);
    }
    // [Block 0x2cb0 | PostDom: 0x2cd0]
    r3 = __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE16FinalizeCallbackEP10napi_env__PvS6_; // 0x3e90
    r5 = &stack_buf_38; // [fp - 0x38]
    r0 = r20;
    r2 = r19;
    r4 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_8ec4(r20, &stack_buf_50);
    if (r0 != 0) { goto loc_2e80; }
    // [Block 0x2cd0 | PostDom: 0x2cf4]
    r22 = *([x29, #-0x38]);
    /* 0x2cd4: stp x20, x22, [x29, #-0x50] */
    /* 0x2cd8: sturb wzr, [x29, #-0x40] */
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro;
    if (r1 != 0) {
        // [Block 0x2ce4 | PostDom: 0x2cf0]
        r0 = *([x21]);
        r0 = flirt_dyld_stub_binder_trampoline_8cfc(r0, &stack_buf_50);
        if (r0 != 0) { goto loc_2f0c; }
        // [Block 0x2cf0 | PostDom: 0x2cf4]
        ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_10_ro = 0;
    }
    // [Block 0x2cf4 | PostDom: 0x2d60]
    /* 0x2cf4: stp x20, x22, [x19, #8] */
    ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r19)->field_18_rw = 0;
    r8 = 0xa0648;
    *([x19]) = r8;
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_30_ro;
    ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro = r20;
    if (r8 < 2) { goto loc_2d44; }
    // [Block 0x2d1c | PostDom: 0x2d60]
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_38_ro;
    r1 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r8)->field_08_rw;
    if (r1 == 0) { goto loc_2d5c; }
    // [NATURAL WHILE-LOOP HEADER @ 0x2d28 (Nesting #1)]
    r3 = &stack_buf_50; // [fp - 0x50]
    r0 = r20;
    r2 = 1;
    r0 = flirt_dyld_stub_binder_trampoline_8c9c(r20, &stack_buf_50);
    while (r0 != 0) {
        // [Block 0x2d3c | PostDom: 0x2d60]
        r8 = *([x29, #-0x50]);
        goto loc_2d60;
        // [Block 0x2d44 | PostDom: 0x2d54]
        r1 = &stack_buf_50; // [fp - 0x50]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_8db0(r20, &stack_buf_50);
        if (r0 != 0) { goto loc_2f5c; }
        // [Block 0x2d54 | PostDom: 0x2d5c]
        r1 = *([x29, #-0x50]);
    } // end while-loop -> 0x2d28
    // [Block 0x2d5c | PostDom: 0x2d60]
    r8 = 0;
    // [Block 0x2d60 | PostDom: 0x2da0]
    /* 0x2d60: stp x20, x8, [x19, #0x28] */
    ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_38_ro = 0;
    ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r19)->field_40_ro = 0;
    r8 = 1;
    ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r19)->field_48_rw = r8;
    r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_30_ro;
    r20 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    if (r8 != 0) {
        // [Block 0x2d80 | PostDom: 0x2da0]
        r8 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)sp)->field_38_ro;
        r1 = *([x8]);
    } else {
        // [Block 0x2d8c | PostDom: 0x2d9c]
        r1 = &stack_buf_50; // [fp - 0x50]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_8db0(r20, &stack_buf_50);
        if (r0 != 0) { goto loc_2fc4; }
        // [Block 0x2d9c | PostDom: 0x2da0]
        r1 = *([x29, #-0x50]);
    }
    // [Block 0x2da0 | PostDom: 0x2db0]
    r2 = &stack_buf_50; // [fp - 0x50]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8de0(r20, &stack_buf_50);
    if (r0 != 0) { goto loc_2eb4; }
    // [Block 0x2db0 | PostDom: 0x2dcc]
    r0 = *([x29, #-0x50]);
    r2 = __ZN12_GLOBAL__N_115ModifierCapture8OnHotkeyEPvPKc; // 0x3ab0
    r1 = r19;
    r0 = _SkyStartModifierCapture(r0, r0);
    ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)r19)->field_40_ro = r0;
    if (r0 == 0) { goto loc_2ed0; }
    // [Block 0x2dcc | PostDom: 0x2e04]
    r0 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro;
    r1 = __ZN12_GLOBAL__N_115ModifierCapture7CleanupEPv; // 0x3cb4
    r2 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8be8(r0, __ZN12_GLOBAL__N_115ModifierCapture7CleanupEPv);
    ((AutoStruct___ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEED2Ev_3d00 *)r19)->field_19_ro = 0;
    r0 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_28_ro;
    if (r0 == 0) {
        // [Block 0x2dec | PostDom: 0x2e00]
        r19 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
        r1 = &stack_buf_50; // [fp - 0x50]
        r0 = r19;
        r0 = flirt_dyld_stub_binder_trampoline_8db0(r0, &stack_buf_50);
        if (r0 != 0) { goto loc_2ff8; }
        // [Block 0x2e00 | PostDom: 0x2e04]
        r0 = *([x29, #-0x50]);
    }
    // [Block 0x2e04 | PostDom: 0x2e0c]
    r8 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_70_ro;
    if (r8 == 0) { goto loc_2c30; }
    // [Block 0x2e0c | PostDom: exit]
    r19 = r0;
    r0 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_89c0(1, &stack_buf_50);
    r0 = r19;
    /* 0x2e28: ldp x24, x23, [sp, #0xa0] */
    return r0;
}

// ── flirt_objc_retain_release_thunk_2e34 @ 0x2e34 (49 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2e34 ───
// Stack Frame: 0B | Basic Blocks: 49 | Natural Loops: 0 | Post-Dom Nodes: 49 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2e34(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_50[80]; // [fp - 0x50]
    uint8_t stack_buf_10[16]; // [sp + 0x10]
    r0 = &stack_buf_10; // [sp + 0x10]
    r1 = r20;
    r2 = r19;
    r0 = __ZN4Napi12CallbackInfoC2EP10napi_env__P20napi_callback_info__(&stack_buf_10, r20);
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, r20);
    r21 = r0;
    r0 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)sp)->field_18_rw;
    r1 = "Class constructors cannot be invoked without 'new'";
    r8 = r21;
    r0 = __ZN4Napi9TypeError3NewEP10napi_env__PKc(r0, "Class constructors cannot be invoked without 'new'");
    r1 = imp___ZTVN10__cxxabiv120__si_class_type_infoE; // 0xa05f8
    r2 = __ZN4Napi9TypeErrorD1Ev; // 0x39b0
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
    goto loc_3028;
    // [Block 0x2e80 | PostDom: 0x3028]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
    r23 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv120__si_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2eb4 | PostDom: 0x2fdc]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2fdc;
    // [Block 0x2ed0 | PostDom: 0x3028]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r0 = ((AutoStruct_PIPStackControllerapplyMotionFramesExpanded_26238 *)r19)->field_20_ro;
    r1 = "Unable to start native shortcut capture";
    r8 = r21;
    r0 = __ZN4Napi5Error3NewEP10napi_env__PKc(r0, "Unable to start native shortcut capture");
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2f0c | PostDom: 0x3028]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r23 = r0;
    r0 = *([x21]);
    r8 = r23;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2f40 | PostDom: 0x2f74]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2f74;
    // [Block 0x2f5c | PostDom: 0x2f74]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x2f74 | PostDom: 0x3028]
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2f90 | PostDom: 0x3028]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r23 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2fc4 | PostDom: 0x2fdc]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r20;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r20, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x2fdc | PostDom: 0x3028]
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3028;
    // [Block 0x2ff8 | PostDom: 0x3028]
    r0 = 0x38;
    r0 = flirt_dyld_stub_binder_trampoline_89fc(0x38, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r21 = r0;
    r8 = r0;
    r0 = r19;
    r0 = __ZN4Napi5Error3NewEP10napi_env__(r19, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r1 = imp___ZTVN10__cxxabiv121__vmi_class_type_infoE; // 0xa0530
    r2 = __ZN4Napi5ErrorD1Ev; // 0x233c
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a38(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_3028:
    r22 = r1;
    r20 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3170;
    // [Block 0x3040 | PostDom: 0x30a4]
    goto loc_30a4;
    // [Block 0x3044 | PostDom: 0x30b8]
    goto loc_30b8;
    // [Block 0x3048 | PostDom: 0x3078]
    goto loc_3078;
    // [Block 0x304c | PostDom: 0x3068]
    r19 = r1;
    r20 = r0;
    goto loc_3068;
    // [Block 0x3058 | PostDom: 0x3068]
    r19 = r1;
    r20 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x3068 | PostDom: 0x30d4]
    r0 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_70_ro;
    if (r0 != 0) {
        // [Block 0x3070 | PostDom: 0x30d4]
        r0 = flirt_dyld_stub_binder_trampoline_89c0(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
        goto loc_30d4;
        // [Block 0x3078 | PostDom: 0x3160]
        r22 = r1;
        r20 = r0;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
        goto loc_3160;
        // [Block 0x308c | PostDom: 0x3108]
        r22 = r1;
        r20 = r0;
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
        goto loc_3108;
        // [Block 0x30a0 | PostDom: 0x30a4]
        goto loc_30a4;
        // [Block 0x30a4 | PostDom: 0x3158]
        r22 = r1;
        r20 = r0;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
        goto loc_3158;
        // [Block 0x30b8 | PostDom: 0x312c]
        r22 = r1;
        r20 = r0;
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_8a2c(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
        goto loc_312c;
        // [Block 0x30cc | PostDom: 0x30d4]
        r19 = r1;
        r20 = r0;
    }
loc_30d4:
    if (r19 != 1) { goto loc_31a0; }
    // [Block 0x30dc | PostDom: 0x3190]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a14(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = __ZNK4Napi5Error26ThrowAsJavaScriptExceptionEv(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3190;
    // [Block 0x30ec | PostDom: 0x31a0]
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_31a0;
    // [Block 0x30f8 | PostDom: 0x3124]
    r0 = ___clang_call_terminate(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3124;
    // [Block 0x3100 | PostDom: 0x3108]
    r22 = r1;
    r20 = r0;
    // [Block 0x3108 | PostDom: 0x312c]
    r0 = &stack_buf_50; // [fp - 0x50]
    r0 = __ZN4Napi9ReferenceINS_6ObjectEED1Ev(&stack_buf_50, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_312c;
    // [Block 0x3114 | PostDom: 0x317c]
    r22 = r1;
    r20 = r0;
    goto loc_317c;
    // [Block 0x3120 | PostDom: 0x3150]
    goto loc_3150;
    // [Block 0x3124 | PostDom: 0x312c]
    r22 = r1;
    r20 = r0;
loc_312c:
    r0 = r21;
    r0 = __ZN4Napi9ReferenceINS_6ObjectEED2Ev(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_3168;
    // [Block 0x3138 | PostDom: 0x3170]
    r22 = r1;
    r20 = r0;
    goto loc_3170;
    // [Block 0x3144 | PostDom: 0x3160]
    r22 = r1;
    r20 = r0;
    goto loc_3160;
    // [Block 0x3150 | PostDom: 0x3158]
    r22 = r1;
    r20 = r0;
    // [Block 0x3158 | PostDom: 0x3160]
    r0 = r19 + 0x28;
    r0 = __ZN4Napi17FunctionReferenceD1Ev(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_3160:
    r0 = r19;
    r0 = __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEED2Ev(imp___ZTVN10__cxxabiv121__vmi_class_type_infoE, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x3168 | PostDom: 0x3170]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_89cc(imp___ZTVN10__cxxabiv121__vmi_class_type_infoE, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_3170:
    r0 = ((AutoStruct_PIPStackControllerapplyMaxDisplaySizeanimated_236c0 *)sp)->field_70_ro;
    if (r0 != 0) {
        // [Block 0x3178 | PostDom: 0x317c]
        r0 = flirt_dyld_stub_binder_trampoline_89c0(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    }
loc_317c:
    if (r22 != 1) { goto loc_31a0; }
    // [Block 0x3184 | PostDom: 0x3190]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8a14(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = __ZNK4Napi5Error26ThrowAsJavaScriptExceptionEv(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    // [Block 0x3190 | PostDom: exit]
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    goto loc_2c2c;
    // [Block 0x3198 | PostDom: 0x31a0]
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
loc_31a0:
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
    r0 = ___clang_call_terminate(r0, imp___ZTVN10__cxxabiv121__vmi_class_type_infoE);
}

// ── __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE27StaticGetterCallbackWrapperEP10napi_env__P20napi_callback_info__ @ 0x31ac (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE27StaticGetterCallbackWrapperEP10napi_env__P20napi_callback_info__ ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 1
int64_t __ZN4Napi10ObjectWrapIN12_GLOBAL__N_115ModifierCaptureEE27StaticGetterCallbackWrapperEP10napi_env__P20napi_callback_info__(int64_t arg0, int64_t arg1) {
    r2 = r1;
    r1 = r0;
    r0 = sp;
    r0 = __ZN4Napi12CallbackInfoC2EP10napi_env__P20napi_callback_info__(sp, r0);
    r8 = ((AutoStruct_PIPStackControllerclear_218e0 *)sp)->field_68_ro;
    r9 = ((AutoStruct_PIPStackAnchorinitWithPointalignmenthost_1ba04 *)r8)->field_10_ro;
    ((AutoStruct_PIPStackControllerclear_218e0 *)sp)->field_68_ro = r9;
    r8 = *([x8]);
    r0 = sp;
    r0 = x8(sp, r0);
    r19 = r1;
    r0 = ((AutoStruct_PIPStackDragInteractioninitWithLeaderPresentationIDgrabOffsetpointerScreenPointtimestamp_2beb4 *)sp)->field_60_rw;
    if (r0 != 0) {
        // [Block 0x31f0 | PostDom: 0x31f4]
        r0 = flirt_dyld_stub_binder_trampoline_89c0(r0, r0);
    }
    // [Block 0x31f4 | PostDom: exit]
    r0 = r19;
    return r0;
}

// ── flirt_objc_retain_release_thunk_3208 @ 0x3208 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_3208 ───
// Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 0
int64_t flirt_objc_retain_release_thunk_3208(int64_t arg0, int64_t arg1) {
    r20 = r1;
    r19 = r0;
    r0 = ((AutoStruct_PIPStackDragInteractioninitWithLeaderPresentationIDgrabOffsetpointerScreenPointtimestamp_2beb4 *)sp)->field_60_rw;
    if (r0 != 0) {
        // [Block 0x3218 | PostDom: 0x3228]
        r0 = flirt_dyld_stub_binder_trampoline_89c0(r0, r1);
        goto loc_3228;
        // [Block 0x3220 | PostDom: 0x3228]
        r20 = r1;
        r19 = r0;
    }
loc_3228:
    if (r20 != 1) { goto loc_3260; }
    // [Block 0x3230 | PostDom: exit]
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8a14(r0, r1);
    r0 = __ZNK4Napi5Error26ThrowAsJavaScriptExceptionEv(r0, r1);
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, r1);
    r19 = 0;
    r0 = r19;
    return r0;
}

// ── flirt_cxx_exception_landing_pad_3258 @ 0x3258 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_3258 ───
int64_t flirt_cxx_exception_landing_pad_3258(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_8a20(r0, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_8960(r0, r1);
    r0 = ___clang_call_terminate(r0, r1);
}

