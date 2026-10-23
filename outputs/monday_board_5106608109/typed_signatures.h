// ============================================================================
// ULTRON DISASSEMBLE v4.0 — OS TYPE LIBRARY (.TIL) & PROPAGATED SIGNATURES
// Target Binary     : samples/monday_board_5106608109
// Embedded OS Signatures: 39 (POSIX / Darwin / CoreFoundation / Security / BSD)
// Typed Procedures  : 46
// ============================================================================
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>

typedef struct UltronContext UltronContext;

int64_t re_dispatch_monday_workos_opcode(int64_t arg0, int64_t arg1); // @ 0x100000588
int64_t re_ZN21BoardGraphQLTransportC1Eyy(int64_t arg0, int64_t arg1); // @ 0x100000600
int64_t re_ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(int64_t arg0, int64_t arg1); // @ 0x100000604
int re_neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(const char* shell_cmd); // @ 0x10000061c
int64_t re_ZN21BoardGraphQLTransportD1Ev(int64_t arg0, int64_t arg1); // @ 0x100000628
int re_Z27instantiate_board_subsystemiyy(const char* shell_cmd); // @ 0x10000062c
int64_t re_flirt_cxx_exception_landing_pad_6fc(int64_t arg0, int64_t arg1); // @ 0x1000006fc
int64_t re_ZN14PulseItemStoreC1Eyyj(int64_t arg0, int64_t arg1); // @ 0x100000720
int64_t re_ZN21ColumnValueAggregatorC1Eyy(int64_t arg0, int64_t arg1); // @ 0x100000724
int64_t re_ZN23SidekickAgentDispatcherC1Eyyj(int64_t arg0, int64_t arg1); // @ 0x100000728
int64_t re_ZN24VibeWorkflowOrchestratorC1Eyyjj(int64_t arg0, int64_t arg1); // @ 0x10000072c
int64_t reconstructed_entry_main(const char* shell_cmd, const uint8_t* input_buf); // @ 0x100000730
int64_t re_ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1); // @ 0x1000008ac
int64_t re_ZN21ColumnValueAggregatorD1Ev(int64_t arg0, int64_t arg1); // @ 0x1000008cc
int64_t re_ZN21BoardGraphQLTransportC2Eyy(UltronContext* ctx_ptr); // @ 0x1000008d0
int64_t re_ZN17MondayBoardEngineC2Eyy(UltronContext* ctx_ptr); // @ 0x1000008fc
int64_t re_ZN21BoardGraphQLTransportD0Ev(int64_t arg0, int64_t arg1); // @ 0x10000091c
int re_ZNK21BoardGraphQLTransport19engineSubsystemNameEv(const char* shell_cmd); // @ 0x100000920
int64_t re_ZN17MondayBoardEngine23computeBoardStateDigestEy(UltronContext* ctx_ptr); // @ 0x10000092c
int64_t re_ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1); // @ 0x10000096c
int64_t re_ZN17MondayBoardEngineD1Ev(int64_t arg0, int64_t arg1); // @ 0x1000009a0
int64_t re_ZN17MondayBoardEngineD0Ev(int64_t arg0, int64_t arg1); // @ 0x1000009a4
int re_ZNK17MondayBoardEngine19engineSubsystemNameEv(const char* shell_cmd); // @ 0x1000009a8
int64_t re_ZN14PulseItemStoreC2Eyyj(UltronContext* ctx_ptr); // @ 0x1000009b4
int64_t re_ZN14PulseItemStoreD1Ev(int64_t arg0, int64_t arg1); // @ 0x1000009e8
int64_t re_ZN14PulseItemStoreD0Ev(int64_t arg0, int64_t arg1); // @ 0x1000009ec
int re_ZNK14PulseItemStore19engineSubsystemNameEv(const char* shell_cmd); // @ 0x1000009f0
int64_t re_ZN14PulseItemStore23computeBoardStateDigestEy(const uint8_t* input_buf); // @ 0x1000009fc
int64_t re_ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1); // @ 0x100000a34
int64_t re_ZN21ColumnValueAggregatorC2Eyy(UltronContext* ctx_ptr); // @ 0x100000a5c
int64_t re_ZN21ColumnValueAggregatorD0Ev(int64_t arg0, int64_t arg1); // @ 0x100000a8c
int re_ZNK21ColumnValueAggregator19engineSubsystemNameEv(const char* shell_cmd); // @ 0x100000a90
int64_t re_ZN23SidekickAgentDispatcherC2Eyyj(UltronContext* ctx_ptr); // @ 0x100000a9c
int64_t re_ZN23SidekickAgentDispatcherD1Ev(int64_t arg0, int64_t arg1); // @ 0x100000ad0
int64_t re_ZN23SidekickAgentDispatcherD0Ev(int64_t arg0, int64_t arg1); // @ 0x100000ad4
int re_ZNK23SidekickAgentDispatcher19engineSubsystemNameEv(const char* shell_cmd); // @ 0x100000ad8
int64_t re_ZN23SidekickAgentDispatcher23computeBoardStateDigestEy(const uint8_t* input_buf); // @ 0x100000ae4
int64_t re_ZN24VibeWorkflowOrchestratorC2Eyyjj(UltronContext* ctx_ptr); // @ 0x100000b18
int64_t re_ZN24VibeWorkflowOrchestratorD1Ev(int64_t arg0, int64_t arg1); // @ 0x100000b50
int64_t re_ZN24VibeWorkflowOrchestratorD0Ev(int64_t arg0, int64_t arg1); // @ 0x100000b54
int re_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(const char* shell_cmd); // @ 0x100000b58
int64_t re_ZN24VibeWorkflowOrchestrator20evaluateColumnMetricEPK15MondayPulseItemm(UltronContext* ctx_ptr); // @ 0x100000b64
int64_t re_flirt_dyld_stub_binder_trampoline_b98(const uint8_t* input_buf); // @ 0x100000b98
int64_t re_flirt_dyld_stub_binder_trampoline_ba4(const uint8_t* input_buf); // @ 0x100000ba4
int64_t re_flirt_dyld_stub_binder_trampoline_bb0(const uint8_t* input_buf); // @ 0x100000bb0
int64_t re_flirt_dyld_stub_binder_trampoline_bbc(const uint8_t* input_buf); // @ 0x100000bbc
