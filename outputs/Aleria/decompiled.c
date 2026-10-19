/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Users/gilles/Applications/Aleria ICO.app/Contents/MacOS/aleria
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── swift::aleria::AgentUsage::Source::id() @ 0x100001be0 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::id() ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t swift::aleria::AgentUsage::Source::id(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x100001be0: Multi-Way Cascade on r8 (3 cases)]
    switch (r8) { case 0xff: goto loc_100001c14; case 0x1: goto loc_100001c08; case 0x1: goto loc_100001c0c; }
    r8 = r0 & 0xff;
    if (r8 == 0) { goto loc_100001c14; }
    // [Block 0x100001be8 | PostDom: exit]
    r8 = -0x1b00000000000000;
    r9 = 0x6f63;
    r9 = 0x65646f63; // movk lsl #16
    r9 = 0x7865646f63; // movk lsl #32
    r10 = -0x1c00000000000000;
    r11 = 0x6f62;
    r11 = 0x68746f62; // movk lsl #16
    r0 = (r8 == 1) ? r9 : r11;
    r1 = (r8 == 1) ? r8 : r10;
    return r0;
}

// ── sub_100001c14 @ 0x100001c14 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001c14 ───
int64_t sub_100001c14(int64_t arg0, int64_t arg1) {
    r1 = -0x1a00000000000000;
    r0 = 0x6c63;
    r0 = 0x75616c63; // movk lsl #16
    r0 = 0x656475616c63; // movk lsl #32
    return r0;
}

// ── swift::aleria::AgentUsage::Source::label() @ 0x100001c28 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::label() ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
int64_t swift::aleria::AgentUsage::Source::label(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x100001c28: Multi-Way Cascade on r8 (3 cases)]
    switch (r8) { case 0xff: goto loc_100001c60; case 0x1: goto loc_100001c54; case 0x1: goto loc_100001c58; }
    r8 = r0 & 0xff;
    if (r8 == 0) { goto loc_100001c60; }
    // [Block 0x100001c30 | PostDom: exit]
    r8 = -0x1b00000000000000;
    r9 = 0x6f43;
    r9 = 0x65646f43; // movk lsl #16
    r9 = 0x7865646f43; // movk lsl #32
    r10 = -0x1a00000000000000;
    r11 = 0x6741;
    r11 = 0x6e656741; // movk lsl #16
    r11 = 0x73746e656741; // movk lsl #32
    r0 = (r8 == 1) ? r9 : r11;
    r1 = (r8 == 1) ? r8 : r10;
    return r0;
}

// ── sub_100001c60 @ 0x100001c60 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001c60 ───
int64_t sub_100001c60(int64_t arg0, int64_t arg1) {
    r1 = -0x1a00000000000000;
    r0 = 0x6c43;
    r0 = 0x75616c43; // movk lsl #16
    r0 = 0x656475616c43; // movk lsl #32
    return r0;
}

// ── swift::aleria::AgentUsage::Source::rawValue() @ 0x100001c74 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue() ───
int64_t swift::aleria::AgentUsage::Source::rawValue(int64_t arg0, int64_t arg1) {
    goto loc_1000043bc;
}

// ── swift::aleria::AgentUsage::Source::allCases() @ 0x100001c78 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::allCases() ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::Source::allCases(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd; // 0x10019ac40
    r1 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR; // 0x1001670c0
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd, _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR);
    r1 = 0x10019ac18;
    goto loc_10013b438;
}

// ── swift::aleria::AgentUsage::Source::ee() @ 0x100001ca4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::ee() ───
int64_t swift::aleria::AgentUsage::Source::ee(int64_t arg0, int64_t arg1) {
    r8 = *([x0]);
    r9 = *([x1]);
    /* 0x100001cb0: cset w0, eq */
    return r0;
}

// ── swift::aleria::AgentUsage::Source::hashValue() @ 0x100001cb8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::hashValue() ───
int64_t swift::aleria::AgentUsage::Source::hashValue(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    // [SWITCH DISPATCH DETECTED @ 0x100001cb8: Multi-Way Cascade on r19 (4 cases)]
    switch (r19) { case 0x1: goto loc_100001d08; case 0x1: goto loc_100001d0c; case 0x0: goto loc_100001d14; case 0x0: goto loc_100001d18; }
    r19 = *([x20]);
    r8 = &stack_buf_8; // [sp + 0x8]
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_aef8(0, r1);
    r8 = -0x1a00000000000000;
    r9 = 0x6c63;
    r9 = 0x75616c63; // movk lsl #16
    r9 = 0x656475616c63; // movk lsl #32
    r10 = -0x1b00000000000000;
    r11 = 0x6f63;
    r11 = 0x65646f63; // movk lsl #16
    r11 = 0x7865646f63; // movk lsl #32
    r12 = -0x1c00000000000000;
    r13 = 0x6f62;
    r13 = 0x68746f62; // movk lsl #16
    r11 = (r19 == 1) ? r11 : r13;
    r10 = (r19 == 1) ? r10 : r12;
    r1 = (r19 == 0) ? r9 : r11;
    r19 = (r19 == 0) ? r8 : r10;
    r0 = &stack_buf_8; // [sp + 0x8]
    r2 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_a9dc(&stack_buf_8, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b2f4(r19, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_af1c(r0, r1);
    return r0;
}

// ── swift::aleria::AgentUsage::Source::hash::into::Hasher() @ 0x100001d48 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::hash::into::Hasher() ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::Source::hash::into::Hasher(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x100001d48: Multi-Way Cascade on r8 (4 cases)]
    switch (r8) { case 0x1: goto loc_100001d88; case 0x1: goto loc_100001d8c; case 0x0: goto loc_100001d94; case 0x0: goto loc_100001d98; }
    r8 = *([x20]);
    r9 = -0x1a00000000000000;
    r10 = 0x6c63;
    r10 = 0x75616c63; // movk lsl #16
    r10 = 0x656475616c63; // movk lsl #32
    r11 = -0x1b00000000000000;
    r12 = 0x6f63;
    r12 = 0x65646f63; // movk lsl #16
    r12 = 0x7865646f63; // movk lsl #32
    r13 = -0x1c00000000000000;
    r14 = 0x6f62;
    r14 = 0x68746f62; // movk lsl #16
    r12 = (r8 == 1) ? r12 : r14;
    r11 = (r8 == 1) ? r11 : r13;
    r1 = (r8 == 0) ? r10 : r12;
    r19 = (r8 == 0) ? r9 : r11;
    r2 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_a9dc(r0, r1);
    r0 = r19;
    goto loc_10013b2f4;
}

// ── swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_() @ 0x100001db4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_() ───
int64_t swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    // [SWITCH DISPATCH DETECTED @ 0x100001db4: Multi-Way Cascade on r19 (4 cases)]
    switch (r19) { case 0x1: goto loc_100001e00; case 0x1: goto loc_100001e04; case 0x0: goto loc_100001e0c; case 0x0: goto loc_100001e10; }
    r19 = *([x20]);
    r8 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_aef8(r0, r1);
    r8 = -0x1a00000000000000;
    r9 = 0x6c63;
    r9 = 0x75616c63; // movk lsl #16
    r9 = 0x656475616c63; // movk lsl #32
    r10 = -0x1b00000000000000;
    r11 = 0x6f63;
    r11 = 0x65646f63; // movk lsl #16
    r11 = 0x7865646f63; // movk lsl #32
    r12 = -0x1c00000000000000;
    r13 = 0x6f62;
    r13 = 0x68746f62; // movk lsl #16
    r11 = (r19 == 1) ? r11 : r13;
    r10 = (r19 == 1) ? r10 : r12;
    r1 = (r19 == 0) ? r9 : r11;
    r19 = (r19 == 0) ? r8 : r10;
    r0 = &stack_buf_8; // [sp + 0x8]
    r2 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_a9dc(&stack_buf_8, r1);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b2f4(r19, r1);
    r20 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_af1c(r0, r1);
    return r0;
}

// ── swift::aleria::AgentUsage::Source::rawValue::Raw() @ 0x100001e40 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue::Raw() ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::Source::rawValue::Raw(int64_t arg0, int64_t arg1) {
    r19 = r8;
    /* 0x100001e50: ldp x8, x1, [x0] */
    r0 = r8;
    r0 = _$s6aleria10AgentUsageC6SourceO8rawValueAESgSS_tcfCTf4nd_n(r8, r1);
    *([x19]) = r0;
    return r0;
}

// ── swift::aleria::AgentUsage::Source::rawValue::Raw() @ 0x100001e6c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue::Raw() ───
int64_t swift::aleria::AgentUsage::Source::rawValue::Raw(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x100001e6c: Multi-Way Cascade on r9 (4 cases)]
    switch (r9) { case 0x1: goto loc_100001ea0; case 0x1: goto loc_100001ea4; case 0x0: goto loc_100001eac; case 0x0: goto loc_100001eb0; }
    r9 = *([x20]);
    r10 = -0x1a00000000000000;
    r11 = 0x6c63;
    r11 = 0x75616c63; // movk lsl #16
    r11 = 0x656475616c63; // movk lsl #32
    r12 = -0x1b00000000000000;
    r13 = 0x6f63;
    r13 = 0x65646f63; // movk lsl #16
    r13 = 0x7865646f63; // movk lsl #32
    r14 = -0x1c00000000000000;
    r15 = 0x6f62;
    r15 = 0x68746f62; // movk lsl #16
    r13 = (r9 == 1) ? r13 : r15;
    r12 = (r9 == 1) ? r12 : r14;
    r9 = (r9 == 0) ? r11 : r13;
    r10 = (r9 == 0) ? r10 : r12;
    /* 0x100001eb4: stp x9, x10, [x8] */
    return r0;
}

// ── swift::aleria::AgentUsage::Source::CaseIterable::allCases::All() @ 0x100001ebc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::CaseIterable::allCases::All() ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::Source::CaseIterable::allCases::All(int64_t arg0, int64_t arg1) {
    r19 = r8;
    r0 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd; // 0x10019ac40
    r1 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR; // 0x1001670c0
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd, _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR);
    r1 = 0x10019af38;
    r0 = flirt_dyld_stub_binder_trampoline_b438(r0, 0x10019af38);
    *([x19]) = r0;
    return r0;
}

// ── swift::aleria::AgentUsage::shared() @ 0x100001efc (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 3
int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    /* 0x100001f00: stp x28, x27, [sp, #0x20] */
    /* 0x100001f04: stp x26, x25, [sp, #0x30] */
    /* 0x100001f08: stp x24, x23, [sp, #0x40] */
    r0 = 0;
    r0 = _$s6aleria10AgentUsageCMa(0, r1);
    r1 = ((VTable_PolymorphicClass_20 *)r0)->vfunc_4;
    r2 = ((_TtC6aleria11PixelPerson *)r0)->hairColor;
    r0 = flirt_dyld_stub_binder_trampoline_b2ac(r0, r1);
    r19 = r0;
    r20 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
    r0 = _$s6aleria11ClaudeUsageC6sharedACvau(r0, r1);
    r0 = *([x0]);
    *([x19, x20]) = r0;
    r21 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
    r0 = flirt_dyld_stub_binder_trampoline_b48c(r0, r1);
    r0 = _$s6aleria10CodexUsageC6sharedACvau(r0, r1);
    r20 = *([x0]);
    *([x19, x21]) = r20;
    r8 = _$s6aleria10AgentUsageC12cancellables33_9A91BDE20A56BD0A53D7E76ADA06452DLLShy7Combine14AnyCancellableCGvpWvd; // [0x1001a4520]
    r9 = *([x9, #0xcd0]);
    *([x19, x8]) = r9;
    r0 = *([x8, #0x8c8]);
    r0 = flirt_dyld_stub_binder_trampoline_b234(r0, r1);
    r21 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b48c(_$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd, r1);
    r0 = r21;
    r0 = -[self standardUserDefaults](r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
    r20 = r0;
    r8 = "aleria.office.usageSource";
    r8 = r8 - 0x20;
    r1 = r8 | 0x8000000000000000;
    r0 = 0x19;
    r0 = 0xd000000000000019; // movk lsl #48
    r0 = flirt_dyld_stub_binder_trampoline_a934(0xd000000000000019, r1);
    r21 = r0;
    r0 = r20;
    r2 = r21;
    r0 = -[self stringForKey:](r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
    r22 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
    if (r22 != 0) {
        // [Block 0x100001fec | PostDom: 0x100002014]
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_a958(r0, r1);
        r21 = r0;
        r20 = r1;
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
    } else {
        // [Block 0x100002008 | PostDom: 0x100002014]
        r20 = -0x1c00000000000000;
        r21 = 0x7561;
        r21 = 0x6f747561; // movk lsl #16
    }
    // [Block 0x100002014 | PostDom: exit]
    r8 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
    /* 0x10000201c: stp x21, x20, [sp, #8] */
    r1 = *([x1, #0x968]);
    r8 = r19 + r8;
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_9d58(&stack_buf_8, 0x100189000);
    r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
    r20 = *([x19, x8]);
    r0 = 0;
    r0 = _$s6aleria11ClaudeUsageCMa(0, 0x100189000);
    r21 = r0;
    r1 = _$s6aleria11ClaudeUsageCMa; // 0x1000684d8
    r0 = _$s6aleria11ClaudeUsageCAC7Combine16ObservableObjectAAWL; // 0x10019af70
    r2 = _$s6aleria11ClaudeUsageC7Combine16ObservableObjectAAMc; // 0x100169b10
    r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria11ClaudeUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria11ClaudeUsageCMa);
    r1 = r0;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_9d34(r0, r0);
    r24 = r0;
    ((UltronContext *)sp)->session_flags = r0;
    r22 = 0x10018a218;
    r0 = r22;
    r1 = 0x18;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_b2ac(0x10018a218, 0x18);
    r25 = r0;
    r0 = r0 + 0x10;
    r1 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b588(r0, r0);
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_9d4c(0, r0);
    r21 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b48c(r0, r0);
    r0 = _$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU_TA; // 0x100005050
    r23 = *([x23, #0x3a0]);
    r20 = &stack_buf_8; // [sp + 0x8]
    r1 = r25;
    r2 = r21;
    r3 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_9db8(_$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU_TA, r0);
    r20 = r0;
    r0 = r25;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r25 = _$s6aleria10AgentUsageC12cancellables33_9A91BDE20A56BD0A53D7E76ADA06452DLLShy7Combine14AnyCancellableCGvpWvd; // [0x1001a4520]
    r0 = r19 + r25;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
    r0 = r19 + r25;
    r0 = flirt_dyld_stub_binder_trampoline_9d28(r0, &stack_buf_8);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, &stack_buf_8);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, &stack_buf_8);
    r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
    r20 = *([x19, x8]);
    r0 = 0;
    r0 = _$s6aleria10CodexUsageCMa(0, &stack_buf_8);
    r24 = r0;
    r1 = _$s6aleria10CodexUsageCMa; // 0x100072d48
    r0 = _$s6aleria10CodexUsageCAC7Combine16ObservableObjectAAWL; // 0x10019af78
    r2 = _$s6aleria10CodexUsageC7Combine16ObservableObjectAAMc; // 0x100169fd0
    r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria10CodexUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria10CodexUsageCMa);
    r1 = r0;
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_9d34(r0, r0);
    r24 = r0;
    ((UltronContext *)sp)->session_flags = r0;
    r0 = r22;
    r1 = 0x18;
    r2 = 7;
    r0 = flirt_dyld_stub_binder_trampoline_b2ac(0x10018a218, 0x18);
    r22 = r0;
    r0 = r0 + 0x10;
    r1 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b588(r0, r0);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = _$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU0_TA; // 0x100004fac
    r20 = &stack_buf_8; // [sp + 0x8]
    r1 = r22;
    r2 = r21;
    r3 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_9db8(_$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU0_TA, r0);
    r20 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r24;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r19 + r25;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
    r0 = r19 + r25;
    r0 = flirt_dyld_stub_binder_trampoline_9d28(r0, &stack_buf_8);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, &stack_buf_8);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, &stack_buf_8);
    _$s6aleria10AgentUsageC6sharedACvpZ = r19; // [0x1001a4310]
    /* 0x1000021f8: ldp x24, x23, [sp, #0x40] */
    /* 0x1000021fc: ldp x26, x25, [sp, #0x30] */
    /* 0x100002200: ldp x28, x27, [sp, #0x20] */
    return r0;
}

// ── swift::aleria::AgentUsage::shared() @ 0x10000220c (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
    r8 = _$s6aleria10AgentUsageC6shared_Wz; // [0x1001a44f0]
    /* 0x100002214: cmn x8, #1 */
    if (r0 != 0) { goto loc_100002228; }
    // [Block 0x10000221c | PostDom: exit]
    r0 = _$s6aleria10AgentUsageC6sharedACvpZ; // 0x1001a4310
    return r0;
}

// ── flirt_objc_retain_release_thunk_2228 @ 0x100002228 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2228 ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t flirt_objc_retain_release_thunk_2228(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = _$s6aleria10AgentUsageC6shared_Wz; // 0x1001a44f0
    r1 = _$s6aleria10AgentUsageC6shared_WZ; // 0x100001efc
    r0 = flirt_dyld_stub_binder_trampoline_b468(_$s6aleria10AgentUsageC6shared_Wz, _$s6aleria10AgentUsageC6shared_WZ);
    goto loc_10000221c;
}

// ── swift::aleria::AgentUsage::shared() @ 0x10000224c (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
// Stack Frame: 16B | Basic Blocks: 3 | Natural Loops: 1 | Post-Dom Nodes: 3 | Callers: 1
int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
    r8 = _$s6aleria10AgentUsageC6shared_Wz; // [0x1001a44f0]
    /* 0x100002254: cmn x8, #1 */
    if (r0 == 0) {
        // [NATURAL LOOP HEADER @ 0x10000225c (Nesting #1)]
        do {
            r0 = _$s6aleria10AgentUsageC6sharedACvpZ; // [0x1001a4310]
        } else {
            // [Block 0x100002268 | PostDom: exit]
            r29 = sp;
            r0 = _$s6aleria10AgentUsageC6shared_Wz; // 0x1001a44f0
            r1 = _$s6aleria10AgentUsageC6shared_WZ; // 0x100001efc
            r0 = flirt_dyld_stub_binder_trampoline_b468(_$s6aleria10AgentUsageC6shared_Wz, _$s6aleria10AgentUsageC6shared_WZ);
        } while (r0 != 0); // back-edge -> 0x10000225c
    }
}

// ── swift::aleria::AgentUsage::sourceDefaultsKey() @ 0x10000228c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::sourceDefaultsKey() ───
int64_t swift::aleria::AgentUsage::sourceDefaultsKey(int64_t arg0, int64_t arg1) {
    r0 = _$s6aleria10AgentUsageC17sourceDefaultsKeySSvpZ; // 0x100189fe8
    return r0;
}

// ── swift::aleria::AgentUsage::sourceDefaultsKey() @ 0x100002298 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::sourceDefaultsKey() ───
int64_t swift::aleria::AgentUsage::sourceDefaultsKey(int64_t arg0, int64_t arg1) {
    r8 = "aleria.office.usageSource";
    r8 = r8 - 0x20;
    r1 = r8 | 0x8000000000000000;
    r0 = 0x19;
    r0 = 0xd000000000000019; // movk lsl #48
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x1000022b4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    /* 0x1000022c0: stp x0, x1, [sp] */
    r1 = *([x1, #0x968]);
    r0 = sp;
    r0 = flirt_dyld_stub_binder_trampoline_9d58(sp, 0x100189000);
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x1000022e0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    /* 0x1000022e4: stp x24, x23, [sp, #0x10] */
    r19 = *([x20]);
    r0 = *([x8, #0x8c8]);
    r0 = flirt_dyld_stub_binder_trampoline_b234(r0, r1);
    r0 = -[self standardUserDefaults](r0, r1);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
    r21 = r0;
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r22 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r23 = r0;
    r8 = sp;
    r0 = r20;
    r1 = r22;
    r2 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    /* 0x10000235c: ldp x0, x22, [sp] */
    r1 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_a934(r0, r0);
    r23 = r0;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, r0);
    r8 = "aleria.office.usageSource";
    r8 = r8 - 0x20;
    r1 = r8 | 0x8000000000000000;
    r0 = 0x19;
    r0 = 0xd000000000000019; // movk lsl #48
    r0 = flirt_dyld_stub_binder_trampoline_a934(0xd000000000000019, r0);
    r22 = r0;
    r0 = r21;
    r2 = r23;
    r3 = r22;
    r0 = -[self setObject:forKey:](r0, r0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
    r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWL; // 0x1001a2280
    r1 = _$s6aleria10AgentUsageCMa; // 0x100004570
    r2 = _$s6aleria10AgentUsageC7Combine16ObservableObjectAAMc; // 0x1001672a8
    r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria10AgentUsageCMa);
    r1 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_9d34(r19, r0);
    r20 = r0;
    r0 = flirt_dyld_stub_binder_trampoline_9d40(r0, r0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    /* 0x100002400: ldp x24, x23, [sp, #0x10] */
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x10000240c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r19 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r21 = r0;
    r8 = sp;
    r0 = r20;
    r1 = r19;
    r2 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    /* 0x100002464: ldp x0, x1, [sp] */
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x10000247c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
// Stack Frame: 48B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    r19 = r8;
    r20 = *([x0]);
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r21 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r22 = r0;
    r8 = r19;
    r0 = r20;
    r1 = r21;
    r2 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r22;
    goto loc_10013b474;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x1000024e4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    /* 0x1000024e8: stp x24, x23, [sp, #0x10] */
    /* 0x1000024fc: ldp x23, x19, [x0] */
    r20 = *([x1]);
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r21 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r22 = r0;
    /* 0x100002524: stp x23, x19, [sp] */
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b30c(r19, r1);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b48c(r20, r1);
    r0 = sp;
    r1 = r20;
    r2 = r21;
    r3 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_9d94(sp, r20);
    r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r20);
    /* 0x10000255c: ldp x24, x23, [sp, #0x10] */
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x100002568 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    /* 0x10000256c: stp x24, x23, [sp, #0x10] */
    r19 = r1;
    r21 = r0;
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r22 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r23 = r0;
    /* 0x1000025a8: stp x21, x19, [sp] */
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b48c(r20, r1);
    r0 = sp;
    r1 = r20;
    r2 = r22;
    r3 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_9d94(sp, r20);
    r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r20);
    /* 0x1000025d8: ldp x24, x23, [sp, #0x10] */
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x1000025e4 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
// Stack Frame: 48B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 0
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    r21 = r0;
    r0 = 0x28;
    r8 = *([x8, #0xd30]);
    if (r8 != 0) {
        // [Block 0x100002608 | PostDom: 0x100002618]
        r1 = 0x69f7;
        r0 = flirt_dyld_stub_binder_trampoline_b324(0x28, 0x69f7);
    } else {
        // [Block 0x100002614 | PostDom: 0x100002618]
        r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0x69f7);
    }
    // [Block 0x100002618 | PostDom: exit]
    r19 = r0;
    *([x21]) = r0;
    ((UltronContext *)r0)->crypto_nonce = r20;
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, 0x69f7);
    r21 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, 0x69f7);
    r22 = r0;
    r8 = r19 + 0x10;
    r0 = r20;
    r1 = r21;
    r2 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    /* 0x100002668: ldp x8, x9, [x19, #0x10] */
    /* 0x10000266c: stp x8, x9, [x19] */
    r0 = _$s6aleria10AgentUsageC15preferredSourceSSvM.resume.0; // 0x10000268c
    r1 = r19;
    return r0;
}

// ── swift::aleria::AgentUsage::preferredSource() @ 0x10000268c (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
// Stack Frame: 80B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 1
int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
    /* 0x10000268c: stp x26, x25, [sp, #-0x50]! */
    /* 0x100002690: stp x24, x23, [sp, #0x10] */
    r25 = r1;
    r19 = *([x0]);
    /* 0x1000026ac: ldp x21, x23, [x19] */
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r20 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r22 = r0;
    r24 = r19;
    *([x24, #0x10]!) = r21;
    r21 = ((UltronContext *)r19)->crypto_nonce;
    ((UltronContext *)r19)->payload_length = r23;
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b48c(r21, r1);
    if ((r25 & (1 << 0)) != 0) {
        // [Block 0x1000026ec | PostDom: 0x100002738]
        r0 = r23;
        r0 = flirt_dyld_stub_binder_trampoline_b30c(r23, r1);
        r0 = r24;
        r1 = r21;
        r2 = r20;
        r3 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_9d94(r19, r21);
        r20 = r21;
        r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r21);
        r0 = ((UltronContext *)r19)->session_flags;
        r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, r21);
    } else {
        // [Block 0x10000271c | PostDom: 0x100002738]
        r0 = r24;
        r1 = r21;
        r2 = r20;
        r3 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_9d94(r19, r21);
        r20 = r21;
        r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r21);
    }
    // [Block 0x100002738 | PostDom: exit]
    r0 = r19;
    /* 0x100002748: ldp x24, x23, [sp, #0x10] */
    /* 0x10000274c: ldp x26, x25, [sp], #0x50 */
    goto loc_10013b1b0;
}

// ── swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x100002754 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = r8;
    r21 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
    r0 = r20 + r21;
    r1 = &stack_buf_8; // [sp + 0x8]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
    r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
    r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
    r20 = r20 + r21;
    r8 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_9d64(r0, _$s7Combine9PublishedVySSGMR);
    r0 = &stack_buf_8; // [sp + 0x8]
    r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, _$s7Combine9PublishedVySSGMR);
    return r0;
}

// ── swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x1000027c4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
// Stack Frame: 64B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_30[48]; // [fp - 0x30]
    uint8_t stack_buf_48[24]; // [fp - 0x48]
    /* 0x1000027c4: stp x24, x23, [sp, #-0x40]! */
    r19 = r0;
    r0 = _$s7Combine9PublishedV9PublisherVySS_GMd; // 0x10019ac48
    r1 = _$s7Combine9PublishedV9PublisherVySS_GMR; // 0x100167580
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedV9PublisherVySS_GMd, _$s7Combine9PublishedV9PublisherVySS_GMR);
    r21 = r0;
    r23 = *([x0, #-8]);
    r9 = ((VTable_PolymorphicClass_20 *)r23)->vfunc_6;
    r8 = r9 + 0xf;
    r8 = r8 & 0xfffffffffffffff0;
    r16 = *([x16, #0x220]);
    r0 = x16(r0, _$s7Combine9PublishedV9PublisherVySS_GMR);
    r9 = sp;
    r22 = r9 - r8;
    sp = r22;
    r8 = ((UltronContext *)r23)->target_buffer;
    r0 = r22;
    r1 = r19;
    r2 = r21;
    r0 = x8(r22, r0);
    r24 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
    r0 = r20 + r24;
    r1 = &stack_buf_48; // [fp - 0x48]
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_48);
    r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
    r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
    r1 = r0;
    r20 = r20 + r24;
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_9d70(r22, r0);
    r0 = &stack_buf_48; // [fp - 0x48]
    r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_48, r0);
    r8 = ((UltronContext *)r23)->session_flags;
    r0 = r19;
    r1 = r21;
    r0 = x8(r0, r0);
    sp = &stack_buf_30; // [fp - 0x30]
    /* 0x10000289c: ldp x24, x23, [sp], #0x40 */
    return r0;
}

// ── swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x1000028a4 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
// Stack Frame: 48B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
    r21 = r0;
    r0 = 0x80;
    r22 = *([x22, #0xd30]);
    if (r22 != 0) {
        // [Block 0x1000028c8 | PostDom: 0x1000028d8]
        r1 = 0xd335;
        r0 = flirt_dyld_stub_binder_trampoline_b324(0x80, 0xd335);
    } else {
        // [Block 0x1000028d4 | PostDom: 0x1000028d8]
        r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
    }
    // [Block 0x1000028d8 | PostDom: 0x10000293c]
    r19 = r0;
    *([x21]) = r0;
    ((VTable_PolymorphicClass_6 *)r0)->vfunc_7 = r20;
    r0 = _$s7Combine9PublishedV9PublisherVySS_GMd; // 0x10019ac48
    r1 = _$s7Combine9PublishedV9PublisherVySS_GMR; // 0x100167580
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedV9PublisherVySS_GMd, _$s7Combine9PublishedV9PublisherVySS_GMR);
    ((_TtC6aleria11ModifierTap *)r19)->maxTapDuration = r0;
    r8 = *([x0, #-8]);
    ((_TtC6aleria11PixelPerson *)r19)->animFrame = r8;
    r21 = ((VTable_PolymorphicClass_20 *)r8)->vfunc_6;
    r0 = r21;
    if (r22 != 0) {
        // [Block 0x100002910 | PostDom: 0x10000293c]
        r1 = 0xd335;
        r0 = flirt_dyld_stub_binder_trampoline_b324(r0, 0xd335);
        ((_TtC6aleria11PixelPerson *)r19)->frameAccumulator = r0;
        r0 = r21;
        r1 = 0xd335;
        r0 = flirt_dyld_stub_binder_trampoline_b324(r0, 0xd335);
    } else {
        // [Block 0x10000292c | PostDom: 0x10000293c]
        r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
        ((_TtC6aleria11PixelPerson *)r19)->frameAccumulator = r0;
        r0 = r21;
        r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
    }
    // [Block 0x10000293c | PostDom: exit]
    r21 = r0;
    r22 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
    /* 0x100002948: stp x0, x22, [x19, #0x68] */
    r0 = r20 + r22;
    r1 = r19;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, r0);
    r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
    r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
    r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
    *([x19, #0x78]) = r0;
    r20 = r20 + r22;
    r8 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_9d64(r0, _$s7Combine9PublishedVySSGMR);
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_b36c(r0, _$s7Combine9PublishedVySSGMR);
    r0 = _$s6aleria10AgentUsageC16$preferredSource7Combine9PublishedV9PublisherVySS_GvM.resume.0; // 0x1000029a8
    r1 = r21;
    return r0;
}

// ── swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x1000029a8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
// Stack Frame: 96B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 3
int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
    /* 0x1000029a8: stp x28, x27, [sp, #-0x60]! */
    /* 0x1000029ac: stp x26, x25, [sp, #0x10] */
    /* 0x1000029b0: stp x24, x23, [sp, #0x20] */
    r20 = r1;
    r19 = *([x0]);
    /* 0x1000029cc: ldp x0, x1, [x19, #0x60] */
    /* 0x1000029d0: ldp x2, x25, [x19, #0x50] */
    r8 = ((UltronContext *)r25)->target_buffer;
    r0 = x8(r0, r1);
    /* 0x1000029dc: ldp x26, x21, [x19, #0x70] */
    /* 0x1000029e0: ldp x23, x22, [x19, #0x60] */
    r8 = 0x30;
    r9 = 0x18;
    r27 = ((r20 & 1) != 0) ? r9 : r8;
    /* 0x1000029f4: ldp x20, x24, [x19, #0x48] */
    r0 = r20 + r26;
    r1 = r19 + r27;
    r2 = 0x21;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, r1);
    r20 = r20 + r26;
    r0 = r23;
    r1 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_9d70(r23, r21);
    r0 = r19 + r27;
    r0 = flirt_dyld_stub_binder_trampoline_b36c(r0, r21);
    r8 = ((UltronContext *)r25)->session_flags;
    r0 = r22;
    r1 = r24;
    r0 = x8(r22, r24);
    r0 = r22;
    r0 = flirt_dyld_stub_binder_trampoline_b1b0(r22, r24);
    r0 = r23;
    r0 = flirt_dyld_stub_binder_trampoline_b1b0(r23, r24);
    r0 = r19;
    /* 0x100002a54: ldp x24, x23, [sp, #0x20] */
    /* 0x100002a58: ldp x26, x25, [sp, #0x10] */
    /* 0x100002a5c: ldp x28, x27, [sp], #0x60 */
    goto loc_10013b1b0;
}

// ── swift::aleria::AgentUsage::claude::_9A91BDE20A56BD0A53D7E76ADA06452D::Claude() @ 0x100002a64 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::claude::_9A91BDE20A56BD0A53D7E76ADA06452D::Claude() ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::claude::_9A91BDE20A56BD0A53D7E76ADA06452D::Claude(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = _$s6aleria11ClaudeUsageC6sharedACvau(r0, r1);
    r0 = *([x0]);
    goto loc_10013b48c;
}

// ── swift::aleria::AgentUsage::codex::_9A91BDE20A56BD0A53D7E76ADA06452D::Codex() @ 0x100002a7c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::codex::_9A91BDE20A56BD0A53D7E76ADA06452D::Codex() ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t swift::aleria::AgentUsage::codex::_9A91BDE20A56BD0A53D7E76ADA06452D::Codex(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = _$s6aleria10CodexUsageC6sharedACvau(r0, r1);
    r0 = *([x0]);
    goto loc_10013b48c;
}

// ── swift::aleria::AgentUsage::cancellables::_9A91BDE20A56BD0A53D7E76ADA06452D::Combine::AnyCancellable() @ 0x100002a94 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::cancellables::_9A91BDE20A56BD0A53D7E76ADA06452D::Combine::AnyCancellable() ───
int64_t swift::aleria::AgentUsage::cancellables::_9A91BDE20A56BD0A53D7E76ADA06452D::Combine::AnyCancellable(int64_t arg0, int64_t arg1) {
    r0 = *([x0, #0xcd0]);
    return r0;
}

// ── swift::aleria::AgentUsage::activeSource() @ 0x100002aa0 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::activeSource() ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 4
int64_t swift::aleria::AgentUsage::activeSource(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_d0[208]; // [fp - 0xd0]
    /* 0x100002aa4: stp x28, x27, [sp, #0x170] */
    /* 0x100002aa8: stp x26, x25, [sp, #0x180] */
    /* 0x100002aac: stp x24, x23, [sp, #0x190] */
    r19 = r20;
    r23 = 0x6c63;
    r23 = 0x75616c63; // movk lsl #16
    r23 = 0x656475616c63; // movk lsl #32
    r0 = 0x1001670c8;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
    r20 = r0;
    r0 = 0x1001670f0;
    r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
    r21 = r0;
    r8 = &stack_buf_d0; // [fp - 0xd0]
    r0 = r19;
    r1 = r20;
    r2 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    r0 = r21;
    r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
    /* 0x100002b14: ldp x22, x20, [x29, #-0xd0] */
    r8 = -0x1a00000000000000;
    /* 0x100002b20: ccmp x20, x8, #0, eq */
    if (r22 != x23) {
        // [Block 0x100002b28 | PostDom: 0x100002b44]
        r0 = r23;
        r1 = -0x1a00000000000000;
        r2 = r22;
        r3 = r20;
        r4 = 0;
        r0 = flirt_dyld_stub_binder_trampoline_aebc(0x656475616c63, -0x1a00000000000000);
        if ((r0 & (1 << 0)) == 0) { goto loc_100002b70; }
    }
    // [Block 0x100002b44 | PostDom: exit]
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, -0x1a00000000000000);
    r0 = 0;
    /* 0x100002b5c: ldp x24, x23, [sp, #0x190] */
    /* 0x100002b60: ldp x26, x25, [sp, #0x180] */
    /* 0x100002b64: ldp x28, x27, [sp, #0x170] */
    return r0;
}

// ── flirt_fast_memcpy_vec_2b70 @ 0x100002b70 (25 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_fast_memcpy_vec_2b70 ───
// Stack Frame: 0B | Basic Blocks: 25 | Natural Loops: 3 | Post-Dom Nodes: 25 | Callers: 1
int64_t flirt_fast_memcpy_vec_2b70(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_d0[208]; // [fp - 0xd0]
    uint8_t stack_buf_8[104]; // [sp + 0x8]
    uint8_t stack_buf_70[16]; // [sp + 0x70]
    uint8_t stack_buf_80[16]; // [sp + 0x80]
    r8 = 0x6f63;
    r8 = 0x65646f63; // movk lsl #16
    r8 = 0x7865646f63; // movk lsl #32
    if (r22 != x8) { goto loc_100002ba0; }
    // [Block 0x100002b84 | PostDom: exit]
    r8 = -0x1b00000000000000;
    if (r20 == x8) {
        // [Block 0x100002b90 | PostDom: exit]
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_b2f4(r20, r1);
        r0 = 1;
        goto loc_100002b50;
    }
    // [Block 0x100002ba0 | PostDom: exit]
    r0 = 0x6f63;
    r0 = 0x65646f63; // movk lsl #16
    r0 = 0x7865646f63; // movk lsl #32
    r1 = -0x1b00000000000000;
    r2 = r22;
    r3 = r20;
    r4 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_aebc(0x7865646f63, -0x1b00000000000000);
    r22 = r0;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b2f4(r20, -0x1b00000000000000);
    if ((r22 & (1 << 0)) != 0) {
        // [NATURAL LOOP HEADER @ 0x100002bd0 (Nesting #1)]
        do {
            r0 = 1;
            goto loc_100002b50;
        }
        // [Block 0x100002bd8 | PostDom: exit]
        r0 = _$s6aleria18AgentMonitorCenterC6sharedACvau(1, -0x1b00000000000000);
        r20 = *([x0]);
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_b48c(r20, -0x1b00000000000000);
        r0 = _$s6aleria18AgentMonitorCenterC4rowsSayAA0bC3RowVGyF(r0, -0x1b00000000000000);
        r22 = r0;
        r0 = r20;
        r0 = flirt_dyld_stub_binder_trampoline_b474(r20, -0x1b00000000000000);
        r27 = ((UltronContext *)r22)->target_buffer;
        if (r27 == 0) { goto loc_100002dcc; }
        // [Block 0x100002c00 | PostDom: 0x100002c18]
        *([sp]) = r19;
        r21 = 0;
        r28 = &stack_buf_80; // [sp + 0x80]
        r19 = 0x20;
        r26 = *([x26, #0x968]);
        // [NATURAL WHILE-LOOP HEADER @ 0x100002c18 (Nesting #2)]
        r8 = ((UltronContext *)r22)->target_buffer;
        while (r21 < x8) {
            // [Block 0x100002c24 | PostDom: 0x100002cd4]
            r8 = r22 + r19;
            /* 0x100002c28: ldp q0, q1, [x8] */
            q2 = ((UltronContext *)r8)->crypto_nonce;
            /* 0x100002c30: stp q1, q2, [x28, #0x80] */
            stack_buf_80[0x70] = q0;
            /* 0x100002c38: ldp q0, q1, [x8, #0x30] */
            q2 = ((_TtC6aleria11ModifierTap *)r8)->maxTapDuration;
            r9 = ((_TtC6aleria11PixelPerson *)r8)->frameAccumulator;
            *([x29, #-0x70]) = r9;
            /* 0x100002c48: stp q1, q2, [x28, #0xb0] */
            stack_buf_80[0xa0] = q0;
            /* 0x100002c50: ldp q0, q1, [x8] */
            q2 = ((UltronContext *)r8)->crypto_nonce;
            /* 0x100002c58: stp q1, q2, [x28, #0x10] */
            *([sp, #0x80]) = q0;
            /* 0x100002c60: ldp q0, q1, [x8, #0x30] */
            q2 = ((_TtC6aleria11ModifierTap *)r8)->maxTapDuration;
            r8 = ((_TtC6aleria11PixelPerson *)r8)->frameAccumulator;
            *([sp, #0xe0]) = r8;
            /* 0x100002c70: stp q1, q2, [x28, #0x40] */
            stack_buf_80[0x30] = q0;
            r8 = -0x1a00000000000000;
            /* 0x100002c7c: stp x23, x8, [sp, #0x70] */
            r0 = &stack_buf_d0; // [fp - 0xd0]
            r1 = &stack_buf_8; // [sp + 0x8]
            r0 = _$s6aleria15AgentMonitorRowVWOc(&stack_buf_d0, &stack_buf_8);
            r0 = _$sS2SSysWl(r0, &stack_buf_8);
            r24 = r0;
            r0 = &stack_buf_70; // [sp + 0x70]
            r8 = &stack_buf_80; // [sp + 0x80]
            r20 = r8 + 0x20;
            r1 = r26;
            r2 = r26;
            r3 = r24;
            r4 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_acf4(&stack_buf_70, 0x100189000);
            r25 = r0;
            r0 = &stack_buf_80; // [sp + 0x80]
            r0 = _$s6aleria15AgentMonitorRowVWOh(&stack_buf_80, 0x100189000);
            if ((r25 & (1 << 0)) == 0) {
                // [Block 0x100002cc4 | PostDom: 0x100002cd4]
                r21++;
                r19 = r19 + 0x68;
            } // end while-loop -> 0x100002c18
        }
        // [Block 0x100002cd4 | PostDom: 0x100002ce8]
        r21 = 0;
        r26 = 0x20;
        r19 = -0x1b00000000000000;
        r23 = *([x23, #0x968]);
        // [NATURAL WHILE-LOOP HEADER @ 0x100002ce8 (Nesting #2)]
        r8 = ((UltronContext *)r22)->target_buffer;
        while (r21 < x8) {
            // [Block 0x100002cf4 | PostDom: 0x100002e04]
            r8 = r22 + r26;
            /* 0x100002cf8: ldp q0, q1, [x8] */
            q2 = stack_buf_80[0x20];
            /* 0x100002d00: stp q1, q2, [x28, #0x80] */
            stack_buf_80[0x70] = q0;
            /* 0x100002d08: ldp q0, q1, [x8, #0x30] */
            q2 = stack_buf_80[0x50];
            r9 = stack_buf_80[0x60];
            *([x29, #-0x70]) = r9;
            /* 0x100002d18: stp q1, q2, [x28, #0xb0] */
            stack_buf_80[0xa0] = q0;
            /* 0x100002d20: ldp q0, q1, [x8] */
            q2 = stack_buf_80[0x20];
            /* 0x100002d28: stp q1, q2, [x28, #0x10] */
            *([sp, #0x80]) = q0;
            /* 0x100002d30: ldp q0, q1, [x8, #0x30] */
            q2 = stack_buf_80[0x50];
            r8 = stack_buf_80[0x60];
            *([sp, #0xe0]) = r8;
            /* 0x100002d40: stp q1, q2, [x28, #0x40] */
            stack_buf_80[0x30] = q0;
            r8 = 0x6f63;
            r8 = 0x65646f63; // movk lsl #16
            r8 = 0x7865646f63; // movk lsl #32
            /* 0x100002d54: stp x8, x19, [sp, #0x70] */
            r0 = &stack_buf_d0; // [fp - 0xd0]
            r1 = &stack_buf_8; // [sp + 0x8]
            r0 = _$s6aleria15AgentMonitorRowVWOc(&stack_buf_d0, &stack_buf_8);
            r0 = &stack_buf_70; // [sp + 0x70]
            r8 = &stack_buf_80; // [sp + 0x80]
            r20 = r8 + 0x20;
            r1 = r23;
            r2 = r23;
            r3 = r24;
            r4 = r24;
            r0 = flirt_dyld_stub_binder_trampoline_acf4(&stack_buf_70, 0x100189000);
            r20 = r0;
            r0 = &stack_buf_80; // [sp + 0x80]
            r0 = _$s6aleria15AgentMonitorRowVWOh(&stack_buf_80, 0x100189000);
            if ((r20 & (1 << 0)) != 0) { goto loc_100002dd8; }
            // [Block 0x100002d94 | PostDom: 0x100002da4]
            r21++;
            r26 = r26 + 0x68;
        } // end while-loop -> 0x100002ce8
        // [Block 0x100002da4 | PostDom: 0x100002e04]
        r0 = r22;
        r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, 0x100189000);
        r19 = *([sp]);
        if ((r25 & (1 << 0)) != 0) {
            // [Block 0x100002db4 | PostDom: 0x100002dc8]
            r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
            r20 = *([x19, x8]);
            r0 = _$s6aleria11ClaudeUsageC7hasDataSbvg(r0, 0x100189000);
            if ((r0 & (1 << 0)) != 0) { goto loc_100002b4c; }
            // [Block 0x100002dc8 | PostDom: 0x100002e04]
            goto loc_100002e04;
            // [Block 0x100002dcc | PostDom: 0x100002e04]
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, 0x100189000);
            goto loc_100002e04;
            // [Block 0x100002dd8 | PostDom: 0x100002e04]
            r0 = r22;
            r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, 0x100189000);
            if ((r25 & (1 << 0)) != 0) {
                // [Block 0x100002de4 | PostDom: 0x100002e04]
                r19 = *([sp]);
            } else {
                // [Block 0x100002dec | PostDom: 0x100002e04]
                r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
                r19 = *([sp]);
                r20 = *([x19, x8]);
                r0 = _$s6aleria10CodexUsageC7hasDataSbvg(r0, 0x100189000);
            } while ((r0 & (1 << 0)) != 0); // back-edge -> 0x100002bd0
        }
    }
loc_100002e04:
    r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
    r20 = *([x19, x8]);
    r0 = _$s6aleria11ClaudeUsageC7hasDataSbvg(r0, 0x100189000);
    if ((r0 & (1 << 0)) != 0) { goto loc_100002b4c; }
    // [Block 0x100002e18 | PostDom: exit]
    r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
    r20 = *([x19, x8]);
    r0 = _$s6aleria10CodexUsageC7hasDataSbvg(r0, 0x100189000);
    r0 = r0 & 1;
    goto loc_100002b50;
    // [Block 0x100002e30 | PostDom: 0x100002e34]
    // [Block 0x100002e34 | PostDom: exit]
}

// ── swift::aleria::AgentUsage::fiveHourPercent() @ 0x100002e38 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::fiveHourPercent() ───
int64_t swift::aleria::AgentUsage::fiveHourPercent(int64_t arg0, int64_t arg1) {
    r0 = _$s6aleria11ClaudeUsageC15fiveHourPercentSiSgvg; // 0x1000647c0
    r1 = _$s6aleria10CodexUsageC15fiveHourPercentSiSgvg; // 0x100069dbc
    goto loc_100002e60;
}

// ── swift::aleria::AgentUsage::sevenDayPercent() @ 0x100002e4c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::sevenDayPercent() ───
int64_t swift::aleria::AgentUsage::sevenDayPercent(int64_t arg0, int64_t arg1) {
    r0 = _$s6aleria11ClaudeUsageC15sevenDayPercentSiSgvg; // 0x100064888
    r1 = _$s6aleria10CodexUsageC15sevenDayPercentSiSgvg; // 0x100069e34
    goto loc_100002e60;
}

// ── swift::aleria::AgentUsage::fiveHourPercent() @ 0x100002e60 (7 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::fiveHourPercent() ───
// Stack Frame: 48B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 2
int64_t swift::aleria::AgentUsage::fiveHourPercent(int64_t arg0, int64_t arg1) {
    r21 = r1;
    r22 = r0;
    r19 = r20;
    r0 = _$s6aleria10AgentUsageC12activeSourceAC0E0Ovg(r0, r1);
    r8 = r0 & 0xff;
    if ((r8 & (1 << 0)) == 0) { goto loc_100002eb4; }
    // [Block 0x100002e88 | PostDom: 0x100002ee4]
    r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
    r20 = *([x19, x8]);
    r0 = x21(r0, r1);
    r8 = r1 & 0xff;
    if (r8 == 1) {
        // [Block 0x100002ea4 | PostDom: 0x100002ed8]
        r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // 0x1001a4518
        r21 = r22;
        goto loc_100002ed8;
        // [Block 0x100002eb4 | PostDom: 0x100002ee4]
        r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
        r20 = *([x19, x8]);
        r0 = x22(r0, r1);
        r8 = r1 & 0xff;
        if (r8 == 1) {
            // [Block 0x100002ed0 | PostDom: 0x100002ed8]
            r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // 0x1001a4510
            // [Block 0x100002ed8 | PostDom: 0x100002ee4]
            r8 = *([x8]);
            r20 = *([x19, x8]);
            r0 = x21(r0, r1);
        }
    }
loc_100002ee4:
    return r0;
}

// ── swift::aleria::AgentUsage::fiveHourReset::Foundation::Date() @ 0x100002ef4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::fiveHourReset::Foundation::Date() ───
int64_t swift::aleria::AgentUsage::fiveHourReset::Foundation::Date(int64_t arg0, int64_t arg1) {
    r0 = _$s6aleria11ClaudeUsageC13fiveHourReset10Foundation4DateVSgvg; // 0x100064b44
    r1 = _$s6aleria10CodexUsageC13fiveHourReset10Foundation4DateVSgvg; // 0x100069ed4
    goto loc_100002f1c;
}

