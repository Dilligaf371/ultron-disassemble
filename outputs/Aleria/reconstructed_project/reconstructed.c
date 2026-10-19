/* ============================================================================
* ULTRON DISASSEMBLE — AUTONOMOUS COMPILABLE RECONSTRUCTION (C17/C23)
* Auto-synthesized from binary CFG, SSA lifter, and recovered symbol table
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef uint64_t u64;
typedef int64_t  i64;
typedef uint32_t u32;

/* ── Recovered Read-Only String Literals ── */
static const char * const ULTRON_STR_00 = "aleria.office.usageSource" /* @ 0x10013e790 */;
static const char * const ULTRON_STR_01 = "claude" /* @ 0x10013e7aa */;
static const char * const ULTRON_STR_02 = "both" /* @ 0x10013e7b7 */;
static const char * const ULTRON_STR_03 = "waitingPermission" /* @ 0x10013e7c0 */;
static const char * const ULTRON_STR_04 = " clique sur le micro pour parler" /* @ 0x10013e7fb */;
static const char * const ULTRON_STR_05 = " la voix." /* @ 0x10013e88d */;
static const char * const ULTRON_STR_06 = "Waiting for your answer" /* @ 0x10013e900 */;
static const char * const ULTRON_STR_07 = "Permission needed" /* @ 0x10013e920 */;
static const char * const ULTRON_STR_08 = "Context window usage (" /* @ 0x10013e940 */;
static const char * const ULTRON_STR_09 = "Activer la conversation vocale directe" /* @ 0x10013e960 */;
static const char * const ULTRON_STR_10 = "arrow.up.circle.fill" /* @ 0x10013e9b0 */;
static const char * const ULTRON_STR_11 = "waveform.circle.fill" /* @ 0x10013e9d0 */;
static const char * const ULTRON_STR_12 = " (parle ou clique pour interrompre)" /* @ 0x10013eaa4 */;
static const char * const ULTRON_STR_13 = "Collapse transcript" /* @ 0x10013ead0 */;
static const char * const ULTRON_STR_14 = "Conversation vocale" /* @ 0x10013eaf0 */;
static const char * const ULTRON_STR_15 = " Agent Vocal Local" /* @ 0x10013eb19 */;
static const char * const ULTRON_STR_16 = "Retour aux sessions" /* @ 0x10013eb30 */;
static const char * const ULTRON_STR_17 = "questionmark.circle.fill" /* @ 0x10013eb50 */;
static const char * const ULTRON_STR_18 = "Reply & Transcript (" /* @ 0x10013eb70 */;
static const char * const ULTRON_STR_19 = "bubble.left.and.bubble.right.fill" /* @ 0x10013eb90 */;
static const char * const ULTRON_STR_20 = "Jump to Terminal / IDE" /* @ 0x10013ebc0 */;
static const char * const ULTRON_STR_21 = "arrow.triangle.branch" /* @ 0x10013ebe0 */;
static const char * const ULTRON_STR_22 = " Aleria" /* @ 0x10013ec09 */;
static const char * const ULTRON_STR_23 = " En conversation" /* @ 0x10013ec2e */;
static const char * const ULTRON_STR_24 = "No active agent sessions" /* @ 0x10013ec40 */;
static const char * const ULTRON_STR_25 = " sessions appear here automatically." /* @ 0x10013ec8c */;
static const char * const ULTRON_STR_26 = "hand.raised.fill" /* @ 0x10013ecc0 */;
static const char * const ULTRON_STR_27 = "questionmark.bubble.fill" /* @ 0x10013ece0 */;
static const char * const ULTRON_STR_28 = "/.local/bin/claude" /* @ 0x10013ed00 */;
static const char * const ULTRON_STR_29 = "/opt/homebrew/bin/claude" /* @ 0x10013ed20 */;
static const char * const ULTRON_STR_30 = "/usr/local/bin/claude" /* @ 0x10013ed40 */;
static const char * const ULTRON_STR_31 = "/opt/homebrew/bin/codex" /* @ 0x10013ed60 */;

/* ── Forward Declarations ── */
u64 re_s6aleria10AgentUsageC6SourceO2idSSvg(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::id() @ 0x100001be0 (52B) */
u64 re_sub_100001c14(u64 arg0, u64 arg1, u64 arg2); /* sub_100001c14 @ 0x100001c14 (20B) */
u64 re_s6aleria10AgentUsageC6SourceO5labelSSvg(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::label() @ 0x100001c28 (56B) */
u64 re_sub_100001c60(u64 arg0, u64 arg1, u64 arg2); /* sub_100001c60 @ 0x100001c60 (20B) */
u64 re_s6aleria10AgentUsageC6SourceO8rawValueAESgSS_tcfC(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::rawValue() @ 0x100001c74 (4B) */
u64 re_s6aleria10AgentUsageC6SourceO8allCasesSayAEGvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::allCases() @ 0x100001c78 (44B) */
u64 re_s6aleria10AgentUsageC6SourceOSQAASQ2eeoiySbx_xtFZTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::ee() @ 0x100001ca4 (20B) */
u64 re_s6aleria10AgentUsageC6SourceOSHAASH9hashValueSivgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::hashValue() @ 0x100001cb8 (144B) */
u64 re_s6aleria10AgentUsageC6SourceOSHAASH4hash4intoys6HasherVz_tFTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::hash::into::Hasher() @ 0x100001d48 (108B) */
u64 re_s6aleria10AgentUsageC6SourceOSHAASH13_rawHashValue4seedS2i_tFTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_() @ 0x100001db4 (140B) */
u64 re_s6aleria10AgentUsageC6SourceOSYAASY8rawValuexSg03RawF0Qz_tcfCTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::rawValue::Raw() @ 0x100001e40 (44B) */
u64 re_s6aleria10AgentUsageC6SourceOSYAASY8rawValue03RawF0QzvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::rawValue::Raw() @ 0x100001e6c (80B) */
u64 re_s6aleria10AgentUsageC6SourceOs12CaseIterableAAsAFP8allCases03AllH0QzvgZTW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::Source::CaseIterable::allCases::All() @ 0x100001ebc (64B) */
u64 re_s6aleria10AgentUsageC6shared_WZ(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::shared() @ 0x100001efc (784B) */
u64 re_s6aleria10AgentUsageC6sharedACvau(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::shared() @ 0x10000220c (28B) */
u64 re_flirt_objc_retain_release_thunk_2228(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_2228 @ 0x100002228 (36B) */
u64 re_s6aleria10AgentUsageC6sharedACvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::shared() @ 0x10000224c (64B) */
u64 re_s6aleria10AgentUsageC17sourceDefaultsKeySSvau(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::sourceDefaultsKey() @ 0x10000228c (12B) */
u64 re_s6aleria10AgentUsageC17sourceDefaultsKeySSvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::sourceDefaultsKey() @ 0x100002298 (28B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpfP(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x1000022b4 (44B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvW(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x1000022e0 (300B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvg(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x10000240c (112B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpACTK(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x10000247c (104B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpACTk(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x1000024e4 (132B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvs(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x100002568 (124B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvM(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x1000025e4 (168B) */
u64 re_s6aleria10AgentUsageC15preferredSourceSSvM_resume_0(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::preferredSource() @ 0x10000268c (200B) */
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_Gvg(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x100002754 (112B) */
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_Gvs(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x1000027c4 (224B) */
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_GvM(u64 arg0, u64 arg1, u64 arg2); /* swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() @ 0x1000028a4 (260B) */

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::id() (@ 0x100001be0, 52 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::id() ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t swift::aleria::AgentUsage::Source::id(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001be0: Multi-Way Cascade on r8 (3 cases)]
     *     switch (r8) { case 0xff: goto loc_100001c14; case 0x1: goto loc_100001c08; case 0x1: goto loc_100001c0c; }
     *     r8 = r0 & 0xff;
     *     if (r8 == 0) { goto loc_100001c14; }
     *     // [Block 0x100001be8 | PostDom: exit]
     *     r8 = -0x1b00000000000000;
     *     r9 = 0x6f63;
     *     r9 = 0x65646f63; // movk lsl #16
     *     r9 = 0x7865646f63; // movk lsl #32
     *     r10 = -0x1c00000000000000;
     *     r11 = 0x6f62;
     *     r11 = 0x68746f62; // movk lsl #16
     *     r0 = (r8 == 1) ? r9 : r11;
     *     r1 = (r8 == 1) ? r8 : r10;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceO2idSSvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001be0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: sub_100001c14 (@ 0x100001c14, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001c14 ───
     * int64_t sub_100001c14(int64_t arg0, int64_t arg1) {
     *     r1 = -0x1a00000000000000;
     *     r0 = 0x6c63;
     *     r0 = 0x75616c63; // movk lsl #16
     *     r0 = 0x656475616c63; // movk lsl #32
     *     return r0;
     * }
*/
u64 re_sub_100001c14(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001c14ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::label() (@ 0x100001c28, 56 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::label() ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
     * int64_t swift::aleria::AgentUsage::Source::label(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001c28: Multi-Way Cascade on r8 (3 cases)]
     *     switch (r8) { case 0xff: goto loc_100001c60; case 0x1: goto loc_100001c54; case 0x1: goto loc_100001c58; }
     *     r8 = r0 & 0xff;
     *     if (r8 == 0) { goto loc_100001c60; }
     *     // [Block 0x100001c30 | PostDom: exit]
     *     r8 = -0x1b00000000000000;
     *     r9 = 0x6f43;
     *     r9 = 0x65646f43; // movk lsl #16
     *     r9 = 0x7865646f43; // movk lsl #32
     *     r10 = -0x1a00000000000000;
     *     r11 = 0x6741;
     *     r11 = 0x6e656741; // movk lsl #16
     *     r11 = 0x73746e656741; // movk lsl #32
     *     r0 = (r8 == 1) ? r9 : r11;
     *     r1 = (r8 == 1) ? r8 : r10;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceO5labelSSvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001c28ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: sub_100001c60 (@ 0x100001c60, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_100001c60 ───
     * int64_t sub_100001c60(int64_t arg0, int64_t arg1) {
     *     r1 = -0x1a00000000000000;
     *     r0 = 0x6c43;
     *     r0 = 0x75616c43; // movk lsl #16
     *     r0 = 0x656475616c43; // movk lsl #32
     *     return r0;
     * }
*/
u64 re_sub_100001c60(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001c60ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::rawValue() (@ 0x100001c74, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue() ───
     * int64_t swift::aleria::AgentUsage::Source::rawValue(int64_t arg0, int64_t arg1) {
     *     goto loc_1000043bc;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceO8rawValueAESgSS_tcfC(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001c74ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::allCases() (@ 0x100001c78, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::allCases() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::Source::allCases(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r0 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd; // 0x10019ac40
     *     r1 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR; // 0x1001670c0
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd, _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR);
     *     r1 = 0x10019ac18;
     *     goto loc_10013b438;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceO8allCasesSayAEGvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001c78ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::ee() (@ 0x100001ca4, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::ee() ───
     * int64_t swift::aleria::AgentUsage::Source::ee(int64_t arg0, int64_t arg1) {
     *     r8 = *([x0]);
     *     r9 = *([x1]);
     *     /* 0x100001cb0: cset w0, eq * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSQAASQ2eeoiySbx_xtFZTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001ca4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::hashValue() (@ 0x100001cb8, 144 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::hashValue() ───
     * int64_t swift::aleria::AgentUsage::Source::hashValue(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_8[16]; // [sp + 0x8]
     *     // [SWITCH DISPATCH DETECTED @ 0x100001cb8: Multi-Way Cascade on r19 (4 cases)]
     *     switch (r19) { case 0x1: goto loc_100001d08; case 0x1: goto loc_100001d0c; case 0x0: goto loc_100001d14; case 0x0: goto loc_100001d18; }
     *     r19 = *([x20]);
     *     r8 = &stack_buf_8; // [sp + 0x8]
     *     r0 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_aef8(0, r1);
     *     r8 = -0x1a00000000000000;
     *     r9 = 0x6c63;
     *     r9 = 0x75616c63; // movk lsl #16
     *     r9 = 0x656475616c63; // movk lsl #32
     *     r10 = -0x1b00000000000000;
     *     r11 = 0x6f63;
     *     r11 = 0x65646f63; // movk lsl #16
     *     r11 = 0x7865646f63; // movk lsl #32
     *     r12 = -0x1c00000000000000;
     *     r13 = 0x6f62;
     *     r13 = 0x68746f62; // movk lsl #16
     *     r11 = (r19 == 1) ? r11 : r13;
     *     r10 = (r19 == 1) ? r10 : r12;
     *     r1 = (r19 == 0) ? r9 : r11;
     *     r19 = (r19 == 0) ? r8 : r10;
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r2 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_a9dc(&stack_buf_8, r1);
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2f4(r19, r1);
     *     r20 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_af1c(r0, r1);
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSHAASH9hashValueSivgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001cb8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::hash::into::Hasher() (@ 0x100001d48, 108 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::hash::into::Hasher() ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::Source::hash::into::Hasher(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001d48: Multi-Way Cascade on r8 (4 cases)]
     *     switch (r8) { case 0x1: goto loc_100001d88; case 0x1: goto loc_100001d8c; case 0x0: goto loc_100001d94; case 0x0: goto loc_100001d98; }
     *     r8 = *([x20]);
     *     r9 = -0x1a00000000000000;
     *     r10 = 0x6c63;
     *     r10 = 0x75616c63; // movk lsl #16
     *     r10 = 0x656475616c63; // movk lsl #32
     *     r11 = -0x1b00000000000000;
     *     r12 = 0x6f63;
     *     r12 = 0x65646f63; // movk lsl #16
     *     r12 = 0x7865646f63; // movk lsl #32
     *     r13 = -0x1c00000000000000;
     *     r14 = 0x6f62;
     *     r14 = 0x68746f62; // movk lsl #16
     *     r12 = (r8 == 1) ? r12 : r14;
     *     r11 = (r8 == 1) ? r11 : r13;
     *     r1 = (r8 == 0) ? r10 : r12;
     *     r19 = (r8 == 0) ? r9 : r11;
     *     r2 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_a9dc(r0, r1);
     *     r0 = r19;
     *     goto loc_10013b2f4;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSHAASH4hash4intoys6HasherVz_tFTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001d48ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_() (@ 0x100001db4, 140 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_() ───
     * int64_t swift::aleria::AgentUsage::Source::_rawHashValue::seed::i_(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_8[16]; // [sp + 0x8]
     *     // [SWITCH DISPATCH DETECTED @ 0x100001db4: Multi-Way Cascade on r19 (4 cases)]
     *     switch (r19) { case 0x1: goto loc_100001e00; case 0x1: goto loc_100001e04; case 0x0: goto loc_100001e0c; case 0x0: goto loc_100001e10; }
     *     r19 = *([x20]);
     *     r8 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_aef8(r0, r1);
     *     r8 = -0x1a00000000000000;
     *     r9 = 0x6c63;
     *     r9 = 0x75616c63; // movk lsl #16
     *     r9 = 0x656475616c63; // movk lsl #32
     *     r10 = -0x1b00000000000000;
     *     r11 = 0x6f63;
     *     r11 = 0x65646f63; // movk lsl #16
     *     r11 = 0x7865646f63; // movk lsl #32
     *     r12 = -0x1c00000000000000;
     *     r13 = 0x6f62;
     *     r13 = 0x68746f62; // movk lsl #16
     *     r11 = (r19 == 1) ? r11 : r13;
     *     r10 = (r19 == 1) ? r10 : r12;
     *     r1 = (r19 == 0) ? r9 : r11;
     *     r19 = (r19 == 0) ? r8 : r10;
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r2 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_a9dc(&stack_buf_8, r1);
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2f4(r19, r1);
     *     r20 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_af1c(r0, r1);
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSHAASH13_rawHashValue4seedS2i_tFTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001db4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::rawValue::Raw() (@ 0x100001e40, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue::Raw() ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::Source::rawValue::Raw(int64_t arg0, int64_t arg1) {
     *     r19 = r8;
     *     /* 0x100001e50: ldp x8, x1, [x0] * /
     *     r0 = r8;
     *     r0 = _$s6aleria10AgentUsageC6SourceO8rawValueAESgSS_tcfCTf4nd_n(r8, r1);
     *     *([x19]) = r0;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSYAASY8rawValuexSg03RawF0Qz_tcfCTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001e40ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::rawValue::Raw() (@ 0x100001e6c, 80 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::rawValue::Raw() ───
     * int64_t swift::aleria::AgentUsage::Source::rawValue::Raw(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001e6c: Multi-Way Cascade on r9 (4 cases)]
     *     switch (r9) { case 0x1: goto loc_100001ea0; case 0x1: goto loc_100001ea4; case 0x0: goto loc_100001eac; case 0x0: goto loc_100001eb0; }
     *     r9 = *([x20]);
     *     r10 = -0x1a00000000000000;
     *     r11 = 0x6c63;
     *     r11 = 0x75616c63; // movk lsl #16
     *     r11 = 0x656475616c63; // movk lsl #32
     *     r12 = -0x1b00000000000000;
     *     r13 = 0x6f63;
     *     r13 = 0x65646f63; // movk lsl #16
     *     r13 = 0x7865646f63; // movk lsl #32
     *     r14 = -0x1c00000000000000;
     *     r15 = 0x6f62;
     *     r15 = 0x68746f62; // movk lsl #16
     *     r13 = (r9 == 1) ? r13 : r15;
     *     r12 = (r9 == 1) ? r12 : r14;
     *     r9 = (r9 == 0) ? r11 : r13;
     *     r10 = (r9 == 0) ? r10 : r12;
     *     /* 0x100001eb4: stp x9, x10, [x8] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOSYAASY8rawValue03RawF0QzvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001e6cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::Source::CaseIterable::allCases::All() (@ 0x100001ebc, 64 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::CaseIterable::allCases::All() ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::Source::CaseIterable::allCases::All(int64_t arg0, int64_t arg1) {
     *     r19 = r8;
     *     r0 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd; // 0x10019ac40
     *     r1 = _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR; // 0x1001670c0
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMd, _$ss23_ContiguousArrayStorageCy6aleria10AgentUsageC6SourceOGMR);
     *     r1 = 0x10019af38;
     *     r0 = flirt_dyld_stub_binder_trampoline_b438(r0, 0x10019af38);
     *     *([x19]) = r0;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6SourceOs12CaseIterableAAsAFP8allCases03AllH0QzvgZTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001ebcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::shared() (@ 0x100001efc, 784 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 3
     * int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_8[16]; // [sp + 0x8]
     *     /* 0x100001f00: stp x28, x27, [sp, #0x20] * /
     *     /* 0x100001f04: stp x26, x25, [sp, #0x30] * /
     *     /* 0x100001f08: stp x24, x23, [sp, #0x40] * /
     *     r0 = 0;
     *     r0 = _$s6aleria10AgentUsageCMa(0, r1);
     *     r1 = ((AutoStruct____swift_memcpy56_8_10003b458 *)r0)->field_30_rw;
     *     r2 = ((AutoStruct_flirt_fast_memcpy_vec_a1fc_10009a1fc *)r0)->field_34_ro;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2ac(r0, r1);
     *     r19 = r0;
     *     r20 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
     *     r0 = _$s6aleria11ClaudeUsageC6sharedACvau(r0, r1);
     *     r0 = *([x0]);
     *     *([x19, x20]) = r0;
     *     r21 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(r0, r1);
     *     r0 = _$s6aleria10CodexUsageC6sharedACvau(r0, r1);
     *     r20 = *([x0]);
     *     *([x19, x21]) = r20;
     *     r8 = _$s6aleria10AgentUsageC12cancellables33_9A91BDE20A56BD0A53D7E76ADA06452DLLShy7Combine14AnyCancellableCGvpWvd; // [0x1001a4520]
     *     r9 = *([x9, #0xcd0]);
     *     *([x19, x8]) = r9;
     *     r0 = *([x8, #0x8c8]);
     *     r0 = flirt_dyld_stub_binder_trampoline_b234(r0, r1);
     *     r21 = r0;
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(_$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd, r1);
     *     r0 = r21;
     *     r0 = -[self standardUserDefaults](r0, r1);
     *     r29 = r29;
     *     r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
     *     r20 = r0;
     *     r8 = "aleria.office.usageSource";
     *     r8 = r8 - 0x20;
     *     r1 = r8 | 0x8000000000000000;
     *     r0 = 0x19;
     *     r0 = 0xd000000000000019; // movk lsl #48
     *     r0 = flirt_dyld_stub_binder_trampoline_a934(0xd000000000000019, r1);
     *     r21 = r0;
     *     r0 = r20;
     *     r2 = r21;
     *     r0 = -[self stringForKey:](r0, r1);
     *     r29 = r29;
     *     r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
     *     r22 = r0;
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
     *     if (r22 != 0) {
     *         // [Block 0x100001fec | PostDom: 0x100002014]
     *         r0 = r22;
     *         r0 = flirt_dyld_stub_binder_trampoline_a958(r0, r1);
     *         r21 = r0;
     *         r20 = r1;
     *         r0 = r22;
     *         r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r1);
     *     } else {
     *         // [Block 0x100002008 | PostDom: 0x100002014]
     *         r20 = -0x1c00000000000000;
     *         r21 = 0x7561;
     *         r21 = 0x6f747561; // movk lsl #16
     *     }
     *     // [Block 0x100002014 | PostDom: exit]
     *     r8 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
     *     /* 0x10000201c: stp x21, x20, [sp, #8] * /
     *     r1 = *([x1, #0x968]);
     *     r8 = r19 + r8;
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_9d58(&stack_buf_8, 0x100189000);
     *     r8 = _$s6aleria10AgentUsageC6claude33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA06ClaudeC0CvpWvd; // [0x1001a4518]
     *     r20 = *([x19, x8]);
     *     r0 = 0;
     *     r0 = _$s6aleria11ClaudeUsageCMa(0, 0x100189000);
     *     r21 = r0;
     *     r1 = _$s6aleria11ClaudeUsageCMa; // 0x1000684d8
     *     r0 = _$s6aleria11ClaudeUsageCAC7Combine16ObservableObjectAAWL; // 0x10019af70
     *     r2 = _$s6aleria11ClaudeUsageC7Combine16ObservableObjectAAMc; // 0x100169b10
     *     r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria11ClaudeUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria11ClaudeUsageCMa);
     *     r1 = r0;
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d34(r0, r0);
     *     r24 = r0;
     *     ((AutoStruct__objectdestroy153Tm_100043f68 *)sp)->field_08_ro = r0;
     *     r22 = 0x10018a218;
     *     r0 = r22;
     *     r1 = 0x18;
     *     r2 = 7;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2ac(0x10018a218, 0x18);
     *     r25 = r0;
     *     r0 = r0 + 0x10;
     *     r1 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b588(r0, r0);
     *     r0 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d4c(0, r0);
     *     r21 = r0;
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(r0, r0);
     *     r0 = _$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU_TA; // 0x100005050
     *     r23 = ((AutoStruct_swiftaleriaAgentChatViewbodySwiftUITuple_10002b3f8 *)r23)->field_3a0_rw;
     *     r20 = &stack_buf_8; // [sp + 0x8]
     *     r1 = r25;
     *     r2 = r21;
     *     r3 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_9db8(_$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU_TA, r0);
     *     r20 = r0;
     *     r0 = r25;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r24;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r25 = _$s6aleria10AgentUsageC12cancellables33_9A91BDE20A56BD0A53D7E76ADA06452DLLShy7Combine14AnyCancellableCGvpWvd; // [0x1001a4520]
     *     r0 = r19 + r25;
     *     r1 = &stack_buf_8; // [sp + 0x8]
     *     r2 = 0x21;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
     *     r0 = r19 + r25;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d28(r0, &stack_buf_8);
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, &stack_buf_8);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, &stack_buf_8);
     *     r8 = _$s6aleria10AgentUsageC5codex33_9A91BDE20A56BD0A53D7E76ADA06452DLLAA05CodexC0CvpWvd; // [0x1001a4510]
     *     r20 = *([x19, x8]);
     *     r0 = 0;
     *     r0 = _$s6aleria10CodexUsageCMa(0, &stack_buf_8);
     *     r24 = r0;
     *     r1 = _$s6aleria10CodexUsageCMa; // 0x100072d48
     *     r0 = _$s6aleria10CodexUsageCAC7Combine16ObservableObjectAAWL; // 0x10019af78
     *     r2 = _$s6aleria10CodexUsageC7Combine16ObservableObjectAAMc; // 0x100169fd0
     *     r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria10CodexUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria10CodexUsageCMa);
     *     r1 = r0;
     *     r0 = r24;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d34(r0, r0);
     *     r24 = r0;
     *     ((AutoStruct__objectdestroy153Tm_100043f68 *)sp)->field_08_ro = r0;
     *     r0 = r22;
     *     r1 = 0x18;
     *     r2 = 7;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2ac(0x10018a218, 0x18);
     *     r22 = r0;
     *     r0 = r0 + 0x10;
     *     r1 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b588(r0, r0);
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = _$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU0_TA; // 0x100004fac
     *     r20 = &stack_buf_8; // [sp + 0x8]
     *     r1 = r22;
     *     r2 = r21;
     *     r3 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_9db8(_$s6aleria10AgentUsageCACyc33_9A91BDE20A56BD0A53D7E76ADA06452DLlfcyyt_tcfU0_TA, r0);
     *     r20 = r0;
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r24;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r19 + r25;
     *     r1 = &stack_buf_8; // [sp + 0x8]
     *     r2 = 0x21;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
     *     r0 = r19 + r25;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d28(r0, &stack_buf_8);
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, &stack_buf_8);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, &stack_buf_8);
     *     _$s6aleria10AgentUsageC6sharedACvpZ = r19; // [0x1001a4310]
     *     /* 0x1000021f8: ldp x24, x23, [sp, #0x40] * /
     *     /* 0x1000021fc: ldp x26, x25, [sp, #0x30] * /
     *     /* 0x100002200: ldp x28, x27, [sp, #0x20] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6shared_WZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001efcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x46ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::shared() (@ 0x10000220c, 28 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 0
     * int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
     *     r8 = _$s6aleria10AgentUsageC6shared_Wz; // [0x1001a44f0]
     *     /* 0x100002214: cmn x8, #1 * /
     *     if (r0 != 0) { goto loc_100002228; }
     *     // [Block 0x10000221c | PostDom: exit]
     *     r0 = _$s6aleria10AgentUsageC6sharedACvpZ; // 0x1001a4310
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC6sharedACvau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000220cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_2228 (@ 0x100002228, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2228 ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_2228(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r0 = _$s6aleria10AgentUsageC6shared_Wz; // 0x1001a44f0
     *     r1 = _$s6aleria10AgentUsageC6shared_WZ; // 0x100001efc
     *     r0 = flirt_dyld_stub_binder_trampoline_b468(_$s6aleria10AgentUsageC6shared_Wz, _$s6aleria10AgentUsageC6shared_WZ);
     *     goto loc_10000221c;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_2228(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100002228ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::shared() (@ 0x10000224c, 64 bytes, 3 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::shared() ───
     * // Stack Frame: 16B | Basic Blocks: 3 | Natural Loops: 1 | Post-Dom Nodes: 3 | Callers: 1
     * int64_t swift::aleria::AgentUsage::shared(int64_t arg0, int64_t arg1) {
     *     r8 = _$s6aleria10AgentUsageC6shared_Wz; // [0x1001a44f0]
     *     /* 0x100002254: cmn x8, #1 * /
     *     if (r0 == 0) {
     *         // [NATURAL LOOP HEADER @ 0x10000225c (Nesting #1)]
     *         do {
     *             r0 = _$s6aleria10AgentUsageC6sharedACvpZ; // [0x1001a4310]
     *         } else {
     *             // [Block 0x100002268 | PostDom: exit]
     *             r29 = sp;
     *             r0 = _$s6aleria10AgentUsageC6shared_Wz; // 0x1001a44f0
     *             r1 = _$s6aleria10AgentUsageC6shared_WZ; // 0x100001efc
     *             r0 = flirt_dyld_stub_binder_trampoline_b468(_$s6aleria10AgentUsageC6shared_Wz, _$s6aleria10AgentUsageC6shared_WZ);
     *         } while (r0 != 0); // back-edge -> 0x10000225c
     *     }
     * }
*/
u64 re_s6aleria10AgentUsageC6sharedACvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000224cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::sourceDefaultsKey() (@ 0x10000228c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::sourceDefaultsKey() ───
     * int64_t swift::aleria::AgentUsage::sourceDefaultsKey(int64_t arg0, int64_t arg1) {
     *     r0 = _$s6aleria10AgentUsageC17sourceDefaultsKeySSvpZ; // 0x100189fe8
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC17sourceDefaultsKeySSvau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000228cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::sourceDefaultsKey() (@ 0x100002298, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::sourceDefaultsKey() ───
     * int64_t swift::aleria::AgentUsage::sourceDefaultsKey(int64_t arg0, int64_t arg1) {
     *     r8 = "aleria.office.usageSource";
     *     r8 = r8 - 0x20;
     *     r1 = r8 | 0x8000000000000000;
     *     r0 = 0x19;
     *     r0 = 0xd000000000000019; // movk lsl #48
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC17sourceDefaultsKeySSvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100002298ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x1000022b4, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     /* 0x1000022c0: stp x0, x1, [sp] * /
     *     r1 = *([x1, #0x968]);
     *     r0 = sp;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d58(sp, 0x100189000);
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpfP(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000022b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x1000022e0, 300 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     /* 0x1000022e4: stp x24, x23, [sp, #0x10] * /
     *     r19 = *([x20]);
     *     r0 = *([x8, #0x8c8]);
     *     r0 = flirt_dyld_stub_binder_trampoline_b234(r0, r1);
     *     r0 = -[self standardUserDefaults](r0, r1);
     *     r29 = r29;
     *     r0 = flirt_dyld_stub_binder_trampoline_b264(r0, r1);
     *     r21 = r0;
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r22 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r23 = r0;
     *     r8 = sp;
     *     r0 = r20;
     *     r1 = r22;
     *     r2 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     /* 0x10000235c: ldp x0, x22, [sp] * /
     *     r1 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_a934(r0, r0);
     *     r23 = r0;
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, r0);
     *     r8 = "aleria.office.usageSource";
     *     r8 = r8 - 0x20;
     *     r1 = r8 | 0x8000000000000000;
     *     r0 = 0x19;
     *     r0 = 0xd000000000000019; // movk lsl #48
     *     r0 = flirt_dyld_stub_binder_trampoline_a934(0xd000000000000019, r0);
     *     r22 = r0;
     *     r0 = r21;
     *     r2 = r23;
     *     r3 = r22;
     *     r0 = -[self setObject:forKey:](r0, r0);
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
     *     r0 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_b240(r0, r0);
     *     r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWL; // 0x1001a2280
     *     r1 = _$s6aleria10AgentUsageCMa; // 0x100004570
     *     r2 = _$s6aleria10AgentUsageC7Combine16ObservableObjectAAMc; // 0x1001672a8
     *     r0 = _$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWlTm(_$s6aleria10AgentUsageCAC7Combine16ObservableObjectAAWL, _$s6aleria10AgentUsageCMa);
     *     r1 = r0;
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d34(r19, r0);
     *     r20 = r0;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d40(r0, r0);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     /* 0x100002400: ldp x24, x23, [sp, #0x10] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000022e0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1bULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x10000240c, 112 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r19 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r21 = r0;
     *     r8 = sp;
     *     r0 = r20;
     *     r1 = r19;
     *     r2 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     /* 0x100002464: ldp x0, x1, [sp] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000240cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x10000247c, 104 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * // Stack Frame: 48B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     r19 = r8;
     *     r20 = *([x0]);
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r21 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r22 = r0;
     *     r8 = r19;
     *     r0 = r20;
     *     r1 = r21;
     *     r2 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r22;
     *     goto loc_10013b474;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpACTK(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000247cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x1000024e4, 132 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     /* 0x1000024e8: stp x24, x23, [sp, #0x10] * /
     *     /* 0x1000024fc: ldp x23, x19, [x0] * /
     *     r20 = *([x1]);
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r21 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r22 = r0;
     *     /* 0x100002524: stp x23, x19, [sp] * /
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b30c(r19, r1);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(r20, r1);
     *     r0 = sp;
     *     r1 = r20;
     *     r2 = r21;
     *     r3 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d94(sp, r20);
     *     r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r20);
     *     /* 0x10000255c: ldp x24, x23, [sp, #0x10] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvpACTk(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000024e4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xaULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x100002568, 124 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     /* 0x10000256c: stp x24, x23, [sp, #0x10] * /
     *     r19 = r1;
     *     r21 = r0;
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r22 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r23 = r0;
     *     /* 0x1000025a8: stp x21, x19, [sp] * /
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(r20, r1);
     *     r0 = sp;
     *     r1 = r20;
     *     r2 = r22;
     *     r3 = r23;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d94(sp, r20);
     *     r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r20);
     *     /* 0x1000025d8: ldp x24, x23, [sp, #0x10] * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100002568ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x1000025e4, 168 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * // Stack Frame: 48B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 0
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     r21 = r0;
     *     r0 = 0x28;
     *     r8 = *([x8, #0xd30]);
     *     if (r8 != 0) {
     *         // [Block 0x100002608 | PostDom: 0x100002618]
     *         r1 = 0x69f7;
     *         r0 = flirt_dyld_stub_binder_trampoline_b324(0x28, 0x69f7);
     *     } else {
     *         // [Block 0x100002614 | PostDom: 0x100002618]
     *         r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0x69f7);
     *     }
     *     // [Block 0x100002618 | PostDom: exit]
     *     r19 = r0;
     *     *([x21]) = r0;
     *     ((AutoStruct__TtC6aleria18AleriaStudioBridgespeechSynthesizerdidFinishSpeechUtterance_10000fdcc *)r0)->field_20_rw = r20;
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, 0x69f7);
     *     r21 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, 0x69f7);
     *     r22 = r0;
     *     r8 = r19 + 0x10;
     *     r0 = r20;
     *     r1 = r21;
     *     r2 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d88(r20, r0);
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b474(r0, r0);
     *     /* 0x100002668: ldp x8, x9, [x19, #0x10] * /
     *     /* 0x10000266c: stp x8, x9, [x19] * /
     *     r0 = _$s6aleria10AgentUsageC15preferredSourceSSvM.resume.0; // 0x10000268c
     *     r1 = r19;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvM(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000025e4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xcULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::preferredSource() (@ 0x10000268c, 200 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::preferredSource() ───
     * // Stack Frame: 80B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 1
     * int64_t swift::aleria::AgentUsage::preferredSource(int64_t arg0, int64_t arg1) {
     *     /* 0x10000268c: stp x26, x25, [sp, #-0x50]! * /
     *     /* 0x100002690: stp x24, x23, [sp, #0x10] * /
     *     r25 = r1;
     *     r19 = *([x0]);
     *     /* 0x1000026ac: ldp x21, x23, [x19] * /
     *     r0 = 0x1001670c8;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670c8, r1);
     *     r20 = r0;
     *     r0 = 0x1001670f0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b3b4(0x1001670f0, r1);
     *     r22 = r0;
     *     r24 = r19;
     *     *([x24, #0x10]!) = r21;
     *     r21 = ((AutoStruct__TtC6aleria18AleriaStudioBridgespeechSynthesizerdidFinishSpeechUtterance_10000fdcc *)r19)->field_20_rw;
     *     ((AutoStruct____swift_destroy_boxed_opaque_existential_1_1000678b4 *)r19)->field_18_ro = r23;
     *     r0 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_b48c(r21, r1);
     *     if ((r25 & (1 << 0)) != 0) {
     *         // [Block 0x1000026ec | PostDom: 0x100002738]
     *         r0 = r23;
     *         r0 = flirt_dyld_stub_binder_trampoline_b30c(r23, r1);
     *         r0 = r24;
     *         r1 = r21;
     *         r2 = r20;
     *         r3 = r22;
     *         r0 = flirt_dyld_stub_binder_trampoline_9d94(r19, r21);
     *         r20 = r21;
     *         r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r21);
     *         r0 = ((AutoStruct__objectdestroy153Tm_100043f68 *)r19)->field_08_ro;
     *         r0 = flirt_dyld_stub_binder_trampoline_b2f4(r0, r21);
     *     } else {
     *         // [Block 0x10000271c | PostDom: 0x100002738]
     *         r0 = r24;
     *         r1 = r21;
     *         r2 = r20;
     *         r3 = r22;
     *         r0 = flirt_dyld_stub_binder_trampoline_9d94(r19, r21);
     *         r20 = r21;
     *         r0 = _$s6aleria10AgentUsageC15preferredSourceSSvW(r0, r21);
     *     }
     *     // [Block 0x100002738 | PostDom: exit]
     *     r0 = r19;
     *     /* 0x100002748: ldp x24, x23, [sp, #0x10] * /
     *     /* 0x10000274c: ldp x26, x25, [sp], #0x50 * /
     *     goto loc_10013b1b0;
     * }
*/
u64 re_s6aleria10AgentUsageC15preferredSourceSSvM_resume_0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000268cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xcULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() (@ 0x100002754, 112 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
     * int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_8[16]; // [sp + 0x8]
     *     r19 = r8;
     *     r21 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
     *     r0 = r20 + r21;
     *     r1 = &stack_buf_8; // [sp + 0x8]
     *     r2 = 0x21;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_8);
     *     r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
     *     r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
     *     r20 = r20 + r21;
     *     r8 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d64(r0, _$s7Combine9PublishedVySSGMR);
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_8, _$s7Combine9PublishedVySSGMR);
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_Gvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100002754ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xcULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() (@ 0x1000027c4, 224 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
     * // Stack Frame: 64B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_30[48]; // [fp - 0x30]
     *     uint8_t stack_buf_48[24]; // [fp - 0x48]
     *     /* 0x1000027c4: stp x24, x23, [sp, #-0x40]! * /
     *     r19 = r0;
     *     r0 = _$s7Combine9PublishedV9PublisherVySS_GMd; // 0x10019ac48
     *     r1 = _$s7Combine9PublishedV9PublisherVySS_GMR; // 0x100167580
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedV9PublisherVySS_GMd, _$s7Combine9PublishedV9PublisherVySS_GMR);
     *     r21 = r0;
     *     r23 = *([x0, #-8]);
     *     r9 = ((AutoStruct____swift_memcpy153_8_10005fd14 *)r23)->field_40_rw;
     *     r8 = r9 + 0xf;
     *     r8 = r8 & 0xfffffffffffffff0;
     *     r16 = ((AutoStruct_flirt_fast_memcpy_vec_a1fc_10009a1fc *)r16)->field_220_rw;
     *     r0 = x16(r0, _$s7Combine9PublishedV9PublisherVySS_GMR);
     *     r9 = sp;
     *     r22 = r9 - r8;
     *     sp = r22;
     *     r8 = ((AutoStruct__TtC6aleria18AleriaStudioBridgespeechSynthesizerdidFinishSpeechUtterance_10000fdcc *)r23)->field_10_rw;
     *     r0 = r22;
     *     r1 = r19;
     *     r2 = r21;
     *     r0 = x8(r22, r0);
     *     r24 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
     *     r0 = r20 + r24;
     *     r1 = &stack_buf_48; // [fp - 0x48]
     *     r2 = 0x21;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, &stack_buf_48);
     *     r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
     *     r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
     *     r1 = r0;
     *     r20 = r20 + r24;
     *     r0 = r22;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d70(r22, r0);
     *     r0 = &stack_buf_48; // [fp - 0x48]
     *     r0 = flirt_dyld_stub_binder_trampoline_b36c(&stack_buf_48, r0);
     *     r8 = ((AutoStruct__objectdestroy153Tm_100043f68 *)r23)->field_08_ro;
     *     r0 = r19;
     *     r1 = r21;
     *     r0 = x8(r0, r0);
     *     sp = &stack_buf_30; // [fp - 0x30]
     *     /* 0x10000289c: ldp x24, x23, [sp], #0x40 * /
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_Gvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000027c4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xdULL;
}

/*
* Reconstructed Procedure: swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() (@ 0x1000028a4, 260 bytes, 7 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher() ───
     * // Stack Frame: 48B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
     * int64_t swift::aleria::AgentUsage::$preferredSource::Combine::Published::Publisher(int64_t arg0, int64_t arg1) {
     *     r21 = r0;
     *     r0 = 0x80;
     *     r22 = *([x22, #0xd30]);
     *     if (r22 != 0) {
     *         // [Block 0x1000028c8 | PostDom: 0x1000028d8]
     *         r1 = 0xd335;
     *         r0 = flirt_dyld_stub_binder_trampoline_b324(0x80, 0xd335);
     *     } else {
     *         // [Block 0x1000028d4 | PostDom: 0x1000028d8]
     *         r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
     *     }
     *     // [Block 0x1000028d8 | PostDom: 0x10000293c]
     *     r19 = r0;
     *     *([x21]) = r0;
     *     ((AutoStruct__objectdestroy47Tm_100062ff0 *)r0)->field_48_ro = r20;
     *     r0 = _$s7Combine9PublishedV9PublisherVySS_GMd; // 0x10019ac48
     *     r1 = _$s7Combine9PublishedV9PublisherVySS_GMR; // 0x100167580
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedV9PublisherVySS_GMd, _$s7Combine9PublishedV9PublisherVySS_GMR);
     *     ((AutoStruct____swift_memcpy88_8_1000422a4 *)r19)->field_50_rw = r0;
     *     r8 = *([x0, #-8]);
     *     ((AutoStruct__objectdestroy47Tm_100062ff0 *)r19)->field_58_ro = r8;
     *     r21 = ((AutoStruct____swift_memcpy153_8_10005fd14 *)r8)->field_40_rw;
     *     r0 = r21;
     *     if (r22 != 0) {
     *         // [Block 0x100002910 | PostDom: 0x10000293c]
     *         r1 = 0xd335;
     *         r0 = flirt_dyld_stub_binder_trampoline_b324(r0, 0xd335);
     *         ((AutoStruct____swift_memcpy153_8_10005fd14 *)r19)->field_60_rw = r0;
     *         r0 = r21;
     *         r1 = 0xd335;
     *         r0 = flirt_dyld_stub_binder_trampoline_b324(r0, 0xd335);
     *     } else {
     *         // [Block 0x10000292c | PostDom: 0x10000293c]
     *         r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
     *         ((AutoStruct____swift_memcpy153_8_10005fd14 *)r19)->field_60_rw = r0;
     *         r0 = r21;
     *         r0 = flirt_dyld_stub_binder_trampoline_b1ec(r0, 0xd335);
     *     }
     *     // [Block 0x10000293c | PostDom: exit]
     *     r21 = r0;
     *     r22 = _$s6aleria10AgentUsageC16_preferredSource33_9A91BDE20A56BD0A53D7E76ADA06452DLL7Combine9PublishedVySSGvpWvd; // [0x1001a4508]
     *     /* 0x100002948: stp x0, x22, [x19, #0x68] * /
     *     r0 = r20 + r22;
     *     r1 = r19;
     *     r2 = 0x21;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_b2e8(r0, r0);
     *     r0 = _$s7Combine9PublishedVySSGMd; // 0x10019b010
     *     r1 = _$s7Combine9PublishedVySSGMR; // 0x100167110
     *     r0 = ___swift_instantiateConcreteTypeFromMangledNameV2(_$s7Combine9PublishedVySSGMd, _$s7Combine9PublishedVySSGMR);
     *     ((AutoStruct_flirt_byte_memset_loop_a2c_100060a2c *)r19)->field_78_rw = r0;
     *     r20 = r20 + r22;
     *     r8 = r21;
     *     r0 = flirt_dyld_stub_binder_trampoline_9d64(r0, _$s7Combine9PublishedVySSGMR);
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_b36c(r0, _$s7Combine9PublishedVySSGMR);
     *     r0 = _$s6aleria10AgentUsageC16$preferredSource7Combine9PublishedV9PublisherVySS_GvM.resume.0; // 0x1000029a8
     *     r1 = r21;
     *     return r0;
     * }
*/
u64 re_s6aleria10AgentUsageC16_preferredSource7Combine9PublishedV9PublisherVySS_GvM(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000028a4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x13ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: aleria | Format: Mach-O 64-bit | Procs: 4194\n");
    u64 res = re_s6aleria10AgentUsageC6SourceO2idSSvg(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine 'swift::aleria::AgentUsage::Source::id()' (@ 0x100001be0) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}
