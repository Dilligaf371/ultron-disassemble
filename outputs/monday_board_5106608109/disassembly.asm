; ============================================================================
; ULTRON DISASSEMBLE v3.0 — ANNOTATED ASSEMBLY LISTING
; Target   : samples/monday_board_5106608109
; Format   : Mach-O 64-bit (arm64 / 64-bit)
; Entry    : 0x100000730
; Procs    : 46 | Instructions: 400
; ============================================================================


; ── PROCEDURE: _dispatch_monday_workos_opcode (0x100000588 .. 0x100000600, 120 bytes) ──
_dispatch_monday_workos_opcode:
  0x100000588:  ff4301d1       sub      sp, sp, #0x50 ; [DWARF CU: monday_board_5106608109.cpp:dispatch_monday_workos_opcode] | [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x10000058c:  f44f03a9       stp      x20, x19, [sp, #0x30]
  0x100000590:  fd7b04a9       stp      x29, x30, [sp, #0x40]
  0x100000594:  fd030191       add      x29, sp, #0x40
  0x100000598:  f30301aa       mov      x19, x1
  0x10000059c:  f40300aa       mov      x20, x0
  0x1000005a0:  e0230091       add      x0, sp, #8
  0x1000005a4:  220e9752       mov      w2, #0xb871
  0x1000005a8:  6247a072       movk     w2, #0x23b, lsl #16
  0x1000005ac:  15000094       bl       #0x100000600 ; __ZN21BoardGraphQLTransportC1Eyy
  0x1000005b0:  e0230091       add      x0, sp, #8
  0x1000005b4:  e10314aa       mov      x1, x20
  0x1000005b8:  13000094       bl       #0x100000604 ; __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi
  0x1000005bc:  e80300aa       mov      x8, x0
  0x1000005c0:  8922140b       add      w9, w20, w20, lsl #8
  0x1000005c4:  297d4093       sxtw     x9, w9
  0x1000005c8:  600209ca       eor      x0, x19, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x1000005cc:  09154038       ldrb     w9, [x8], #1
  0x1000005d0:  09010034       cbz      w9, #0x1000005f0 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000005d4:  6a3680d2       mov      x10, #0x1b3
  0x1000005d8:  0a20c0f2       movk     x10, #0x100, lsl #32
  0x1000005dc:  0b7c0a9b       mul      x11, x0, x10
  0x1000005e0:  e903092a       mov      w9, w9
  0x1000005e4:  600109ca       eor      x0, x11, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x1000005e8:  09154038       ldrb     w9, [x8], #1
  0x1000005ec:  89ffff35       cbnz     w9, #0x1000005dc
  0x1000005f0:  fd7b44a9       ldp      x29, x30, [sp, #0x40]
  0x1000005f4:  f44f43a9       ldp      x20, x19, [sp, #0x30]
  0x1000005f8:  ff430191       add      sp, sp, #0x50
  0x1000005fc:  c0035fd6       ret      

; ── PROCEDURE: __ZN21BoardGraphQLTransportC1Eyy (0x100000600 .. 0x100000604, 4 bytes) ──
__ZN21BoardGraphQLTransportC1Eyy:
  0x100000600:  b4000014       b        #0x1000008d0 ; __ZN21BoardGraphQLTransportC2Eyy | [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::BoardGraphQLTransport(uint64_t, uint64_t)]

; ── PROCEDURE: __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi (0x100000604 .. 0x10000061c, 24 bytes) ──
__ZNK21BoardGraphQLTransport20resolveEndpointRouteEi:
  0x100000604:  3f200071       cmp      w1, #8 ; [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::resolveEndpointRoute(int) const] | [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 94% confidence
  0x100000608:  a8000054       b.hi     #0x10000061c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x10000060c:  28000090       adrp     x8, #0x100004000
  0x100000610:  08610b91       add      x8, x8, #0x2d8
  0x100000614:  005961f8       ldr      x0, [x8, w1, uxtw #3]
  0x100000618:  c0035fd6       ret      

; ── PROCEDURE: neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv (0x10000061c .. 0x100000628, 12 bytes) ──
neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv:
  0x10000061c:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:sub_10000061c]
  0x100000620:  00603991       add      x0, x0, #0xe58 ; "/projects/5106608109/subscribers"
  0x100000624:  c0035fd6       ret      

; ── PROCEDURE: __ZN21BoardGraphQLTransportD1Ev (0x100000628 .. 0x10000062c, 4 bytes) ──
__ZN21BoardGraphQLTransportD1Ev:
  0x100000628:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::~BoardGraphQLTransport() [complete dtor]]

; ── PROCEDURE: __Z27instantiate_board_subsystemiyy (0x10000062c .. 0x1000006fc, 208 bytes) ──
__Z27instantiate_board_subsystemiyy:
  0x10000062c:  f657bda9       stp      x22, x21, [sp, #-0x30]! ; [DWARF CU: monday_board_5106608109.cpp:instantiate_board_subsystem(int, uint64_t, uint64_t)] | [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x100000630:  f44f01a9       stp      x20, x19, [sp, #0x10]
  0x100000634:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x100000638:  fd830091       add      x29, sp, #0x20
  0x10000063c:  f40302aa       mov      x20, x2
  0x100000640:  f50301aa       mov      x21, x1
  0x100000644:  f60300aa       mov      x22, x0
  0x100000648:  00058052       mov      w0, #0x28
  0x10000064c:  59010094       bl       #0x100000bb0
  0x100000650:  f30300aa       mov      x19, x0
  0x100000654:  df060071       cmp      w22, #1
  0x100000658:  2c010054       b.gt     #0x10000067c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x10000065c:  16030034       cbz      w22, #0x1000006bc
  0x100000660:  df060071       cmp      w22, #1
  0x100000664:  21020054       b.ne     #0x1000006a8
  0x100000668:  e00313aa       mov      x0, x19
  0x10000066c:  e10315aa       mov      x1, x21
  0x100000670:  e20314aa       mov      x2, x20
  0x100000674:  2c000094       bl       #0x100000724 ; __ZN21ColumnValueAggregatorC1Eyy
  0x100000678:  1c000014       b        #0x1000006e8
  0x10000067c:  df0a0071       cmp      w22, #2
  0x100000680:  a0020054       b.eq     #0x1000006d4
  0x100000684:  df0e0071       cmp      w22, #3
  0x100000688:  01010054       b.ne     #0x1000006a8
  0x10000068c:  e00313aa       mov      x0, x19
  0x100000690:  e10315aa       mov      x1, x21
  0x100000694:  e20314aa       mov      x2, x20
  0x100000698:  43008052       mov      w3, #2
  0x10000069c:  a4008052       mov      w4, #5
  0x1000006a0:  23000094       bl       #0x10000072c ; __ZN24VibeWorkflowOrchestratorC1Eyyjj
  0x1000006a4:  11000014       b        #0x1000006e8
  0x1000006a8:  e00313aa       mov      x0, x19
  0x1000006ac:  e10315aa       mov      x1, x21
  0x1000006b0:  e20314aa       mov      x2, x20
  0x1000006b4:  d3ffff97       bl       #0x100000600 ; __ZN21BoardGraphQLTransportC1Eyy
  0x1000006b8:  0c000014       b        #0x1000006e8
  0x1000006bc:  e00313aa       mov      x0, x19
  0x1000006c0:  e10315aa       mov      x1, x21
  0x1000006c4:  e20314aa       mov      x2, x20
  0x1000006c8:  63008052       mov      w3, #3
  0x1000006cc:  15000094       bl       #0x100000720 ; __ZN14PulseItemStoreC1Eyyj
  0x1000006d0:  06000014       b        #0x1000006e8
  0x1000006d4:  e00313aa       mov      x0, x19
  0x1000006d8:  e10315aa       mov      x1, x21
  0x1000006dc:  e20314aa       mov      x2, x20
  0x1000006e0:  e3018052       mov      w3, #0xf
  0x1000006e4:  11000094       bl       #0x100000728 ; __ZN23SidekickAgentDispatcherC1Eyyj
  0x1000006e8:  e00313aa       mov      x0, x19
  0x1000006ec:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x1000006f0:  f44f41a9       ldp      x20, x19, [sp, #0x10]
  0x1000006f4:  f657c3a8       ldp      x22, x21, [sp], #0x30
  0x1000006f8:  c0035fd6       ret      

; ── PROCEDURE: flirt_cxx_exception_landing_pad_6fc (0x1000006fc .. 0x100000720, 36 bytes) ──
flirt_cxx_exception_landing_pad_6fc:
  0x1000006fc:  04000014       b        #0x10000070c ; [DWARF CU: monday_board_5106608109.cpp:sub_1000006fc] | [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x100000700:  03000014       b        #0x10000070c
  0x100000704:  02000014       b        #0x10000070c
  0x100000708:  01000014       b        #0x10000070c
  0x10000070c:  f40300aa       mov      x20, x0
  0x100000710:  e00313aa       mov      x0, x19
  0x100000714:  24010094       bl       #0x100000ba4
  0x100000718:  e00314aa       mov      x0, x20
  0x10000071c:  1f010094       bl       #0x100000b98

; ── PROCEDURE: __ZN14PulseItemStoreC1Eyyj (0x100000720 .. 0x100000724, 4 bytes) ──
__ZN14PulseItemStoreC1Eyyj:
  0x100000720:  a5000014       b        #0x1000009b4 ; __ZN14PulseItemStoreC2Eyyj | [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::PulseItemStore(uint64_t, uint64_t, uint32_t)]

; ── PROCEDURE: __ZN21ColumnValueAggregatorC1Eyy (0x100000724 .. 0x100000728, 4 bytes) ──
__ZN21ColumnValueAggregatorC1Eyy:
  0x100000724:  ce000014       b        #0x100000a5c ; __ZN21ColumnValueAggregatorC2Eyy | [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::ColumnValueAggregator(uint64_t, uint64_t)]

; ── PROCEDURE: __ZN23SidekickAgentDispatcherC1Eyyj (0x100000728 .. 0x10000072c, 4 bytes) ──
__ZN23SidekickAgentDispatcherC1Eyyj:
  0x100000728:  dd000014       b        #0x100000a9c ; __ZN23SidekickAgentDispatcherC2Eyyj | [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::SidekickAgentDispatcher(uint64_t, uint64_t, uint32_t)]

; ── PROCEDURE: __ZN24VibeWorkflowOrchestratorC1Eyyjj (0x10000072c .. 0x100000730, 4 bytes) ──
__ZN24VibeWorkflowOrchestratorC1Eyyjj:
  0x10000072c:  fb000014       b        #0x100000b18 ; __ZN24VibeWorkflowOrchestratorC2Eyyjj | [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::VibeWorkflowOrchestrator(uint64_t, uint64_t, uint32_t, uint32_t)]

; ── PROCEDURE: _main (0x100000730 .. 0x1000008ac, 380 bytes) ──
_main:
  0x100000730:  ffc302d1       sub      sp, sp, #0xb0 ; [DWARF CU: monday_board_5106608109.cpp:main] | [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100000734:  f85f07a9       stp      x24, x23, [sp, #0x70]
  0x100000738:  f65708a9       stp      x22, x21, [sp, #0x80]
  0x10000073c:  f44f09a9       stp      x20, x19, [sp, #0x90]
  0x100000740:  fd7b0aa9       stp      x29, x30, [sp, #0xa0]
  0x100000744:  fd830291       add      x29, sp, #0xa0
  0x100000748:  f60300aa       mov      x22, x0
  0x10000074c:  e8cc8c52       mov      w8, #0x6667
  0x100000750:  c8ccac72       movk     w8, #0x6666, lsl #16
  0x100000754:  087c289b       smull    x8, w0, w8
  0x100000758:  09fd60d3       lsr      x9, x8, #0x20
  0x10000075c:  08fd7fd3       lsr      x8, x8, #0x3f
  0x100000760:  0805890b       add      w8, w8, w9, asr #1
  0x100000764:  0809080b       add      w8, w8, w8, lsl #2
  0x100000768:  0000084b       sub      w0, w0, w8
  0x10000076c:  b4fd94d2       mov      x20, #0xa7ed
  0x100000770:  140ca6f2       movk     x20, #0x3060, lsl #16
  0x100000774:  3400c0f2       movk     x20, #1, lsl #32
  0x100000778:  e10314aa       mov      x1, x20
  0x10000077c:  220e9752       mov      w2, #0xb871
  0x100000780:  6247a072       movk     w2, #0x23b, lsl #16
  0x100000784:  aaffff97       bl       #0x10000062c ; __Z27instantiate_board_subsystemiyy
  0x100000788:  f30300aa       mov      x19, x0
  0x10000078c:  c17e4093       sxtw     x1, w22
  0x100000790:  080040f9       ldr      x8, [x0]
  0x100000794:  080d40f9       ldr      x8, [x8, #0x18]
  0x100000798:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x10000079c:  f50300aa       mov      x21, x0
  0x1000007a0:  680240f9       ldr      x8, [x19]
  0x1000007a4:  081140f9       ldr      x8, [x8, #0x20]
  0x1000007a8:  37000090       adrp     x23, #0x100004000
  0x1000007ac:  f7a20091       add      x23, x23, #0x28 ; __ZL22kBoard5106608109Pulses
  0x1000007b0:  e00313aa       mov      x0, x19
  0x1000007b4:  e10317aa       mov      x1, x23
  0x1000007b8:  62008052       mov      w2, #3
  0x1000007bc:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000007c0:  f80300aa       mov      x24, x0
  0x1000007c4:  e0230191       add      x0, sp, #0x48
  0x1000007c8:  e10314aa       mov      x1, x20
  0x1000007cc:  220e9752       mov      w2, #0xb871
  0x1000007d0:  6247a072       movk     w2, #0x23b, lsl #16
  0x1000007d4:  d4ffff97       bl       #0x100000724 ; __ZN21ColumnValueAggregatorC1Eyy
  0x1000007d8:  e0230191       add      x0, sp, #0x48
  0x1000007dc:  e10317aa       mov      x1, x23
  0x1000007e0:  62008052       mov      w2, #3
  0x1000007e4:  32000094       bl       #0x1000008ac ; __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm
  0x1000007e8:  f70300aa       mov      x23, x0
  0x1000007ec:  28c79152       mov      w8, #0x8e39
  0x1000007f0:  681ca772       movk     w8, #0x38e3, lsl #16
  0x1000007f4:  c87e289b       smull    x8, w22, w8
  0x1000007f8:  09fd60d3       lsr      x9, x8, #0x20
  0x1000007fc:  08fd7fd3       lsr      x8, x8, #0x3f
  0x100000800:  0805890b       add      w8, w8, w9, asr #1
  0x100000804:  080d080b       add      w8, w8, w8, lsl #3
  0x100000808:  c002084b       sub      w0, w22, w8
  0x10000080c:  e10314aa       mov      x1, x20
  0x100000810:  5effff97       bl       #0x100000588 ; _dispatch_monday_workos_opcode
  0x100000814:  f60300aa       mov      x22, x0
  0x100000818:  680240f9       ldr      x8, [x19]
  0x10000081c:  080940f9       ldr      x8, [x8, #0x10]
  0x100000820:  e00313aa       mov      x0, x19
  0x100000824:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100000828:  68e19ad2       mov      x8, #0xd70b
  0x10000082c:  6814aef2       movk     x8, #0x70a3, lsl #16
  0x100000830:  a847c1f2       movk     x8, #0xa3d, lsl #32
  0x100000834:  e87af4f2       movk     x8, #0xa3d7, lsl #48
  0x100000838:  e87e489b       smulh    x8, x23, x8
  0x10000083c:  0801178b       add      x8, x8, x23
  0x100000840:  09fd4693       asr      x9, x8, #6
  0x100000844:  28fd488b       add      x8, x9, x8, lsr #63
  0x100000848:  890c8052       mov      w9, #0x64
  0x10000084c:  09dd099b       msub     x9, x8, x9, x23
  0x100000850:  6a1a40b9       ldr      w10, [x19, #0x18]
  0x100000854:  0b000090       adrp     x11, #0x100000000
  0x100000858:  6b093e91       add      x11, x11, #0xf82 ; "Tâche"
  0x10000085c:  f8af03a9       stp      x24, x11, [sp, #0x38]
  0x100000860:  f5db02a9       stp      x21, x22, [sp, #0x28]
  0x100000864:  e8a701a9       stp      x8, x9, [sp, #0x18]
  0x100000868:  f4ab00a9       stp      x20, x10, [sp, #8]
  0x10000086c:  08000090       adrp     x8, #0x100000000
  0x100000870:  08c12f91       add      x8, x8, #0xbf0 ; "[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s
"
  0x100000874:  e00300f9       str      x0, [sp]
  0x100000878:  e00308aa       mov      x0, x8 ; __mh_execute_header
  0x10000087c:  d0000094       bl       #0x100000bbc
  0x100000880:  680240f9       ldr      x8, [x19]
  0x100000884:  080540f9       ldr      x8, [x8, #8] ; __mh_execute_header
  0x100000888:  e00313aa       mov      x0, x19
  0x10000088c:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100000890:  00008052       mov      w0, #0
  0x100000894:  fd7b4aa9       ldp      x29, x30, [sp, #0xa0]
  0x100000898:  f44f49a9       ldp      x20, x19, [sp, #0x90]
  0x10000089c:  f65748a9       ldp      x22, x21, [sp, #0x80]
  0x1000008a0:  f85f47a9       ldp      x24, x23, [sp, #0x70]
  0x1000008a4:  ffc30291       add      sp, sp, #0xb0
  0x1000008a8:  c0035fd6       ret      

; ── PROCEDURE: __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm (0x1000008ac .. 0x1000008cc, 32 bytes) ──
__ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm:
  0x1000008ac:  000080d2       mov      x0, #0 ; [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::evaluateColumnMetric(const void *, double, char, uint64_t, void *, int64_t, int16_t, uint16_t, uint64_t, uint64_t)] | [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 95% confidence
  0x1000008b0:  c20000b4       cbz      x2, #0x1000008c8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000008b4:  28e00091       add      x8, x1, #0x38
  0x1000008b8:  098544f8       ldr      x9, [x8], #0x48
  0x1000008bc:  2001008b       add      x0, x9, x0
  0x1000008c0:  420400f1       subs     x2, x2, #1
  0x1000008c4:  a1ffff54       b.ne     #0x1000008b8
  0x1000008c8:  c0035fd6       ret      

; ── PROCEDURE: __ZN21ColumnValueAggregatorD1Ev (0x1000008cc .. 0x1000008d0, 4 bytes) ──
__ZN21ColumnValueAggregatorD1Ev:
  0x1000008cc:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::~ColumnValueAggregator() [complete dtor]]

; ── PROCEDURE: __ZN21BoardGraphQLTransportC2Eyy (0x1000008d0 .. 0x1000008fc, 44 bytes) ──
__ZN21BoardGraphQLTransportC2Eyy:
  0x1000008d0:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::BoardGraphQLTransport(uint64_t, uint64_t)] | [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 97% confidence
  0x1000008d4:  fd030091       mov      x29, sp
  0x1000008d8:  09000094       bl       #0x1000008fc ; __ZN17MondayBoardEngineC2Eyy
  0x1000008dc:  28000090       adrp     x8, #0x100004000
  0x1000008e0:  08010491       add      x8, x8, #0x100 ; __ZTV21BoardGraphQLTransport
  0x1000008e4:  08410091       add      x8, x8, #0x10
  0x1000008e8:  080000f9       str      x8, [x0]
  0x1000008ec:  48008052       mov      w8, #2
  0x1000008f0:  082000b9       str      w8, [x0, #0x20]
  0x1000008f4:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x1000008f8:  c0035fd6       ret      

; ── PROCEDURE: __ZN17MondayBoardEngineC2Eyy (0x1000008fc .. 0x10000091c, 32 bytes) ──
__ZN17MondayBoardEngineC2Eyy:
  0x1000008fc:  28000090       adrp     x8, #0x100004000 ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::MondayBoardEngine(uint64_t, uint64_t)] | [FLIRT] bzero_page_clear (libsystem_platform.dylib) — 92% confidence
  0x100000900:  08810591       add      x8, x8, #0x160 ; __ZTV17MondayBoardEngine
  0x100000904:  08410091       add      x8, x8, #0x10
  0x100000908:  080400a9       stp      x8, x1, [x0]
  0x10000090c:  280180d2       mov      x8, #9
  0x100000910:  4800c0f2       movk     x8, #2, lsl #32
  0x100000914:  022001a9       stp      x2, x8, [x0, #0x10]
  0x100000918:  c0035fd6       ret      

; ── PROCEDURE: __ZN21BoardGraphQLTransportD0Ev (0x10000091c .. 0x100000920, 4 bytes) ──
__ZN21BoardGraphQLTransportD0Ev:
  0x10000091c:  a2000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::~BoardGraphQLTransport() [deleting dtor]]

; ── PROCEDURE: __ZNK21BoardGraphQLTransport19engineSubsystemNameEv (0x100000920 .. 0x10000092c, 12 bytes) ──
__ZNK21BoardGraphQLTransport19engineSubsystemNameEv:
  0x100000920:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:BoardGraphQLTransport::engineSubsystemName() const]
  0x100000924:  00043291       add      x0, x0, #0xc81 ; "BoardGraphQLTransport::RouterBoardSubset"
  0x100000928:  c0035fd6       ret      

; ── PROCEDURE: __ZN17MondayBoardEngine23computeBoardStateDigestEy (0x10000092c .. 0x10000096c, 64 bytes) ──
__ZN17MondayBoardEngine23computeBoardStateDigestEy:
  0x10000092c:  e80300aa       mov      x8, x0 ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::computeBoardStateDigest(uint64_t)] | [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100000930:  09a840a9       ldp      x9, x10, [x0, #8]
  0x100000934:  290101ca       eor      x9, x9, x1 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000938:  20350aca       eor      x0, x9, x10, lsl #13 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x10000093c:  081940b9       ldr      w8, [x8, #0x18]
  0x100000940:  48010034       cbz      w8, #0x100000968 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000944:  a9828fd2       mov      x9, #0x7c15
  0x100000948:  49e9aff2       movk     x9, #0x7f4a, lsl #16
  0x10000094c:  2937cff2       movk     x9, #0x79b9, lsl #32
  0x100000950:  e9c6f3f2       movk     x9, #0x9e37, lsl #48
  0x100000954:  ea0309aa       mov      x10, x9
  0x100000958:  40ddc0ca       eor      x0, x10, x0, ror #55 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x10000095c:  4a01098b       add      x10, x10, x9
  0x100000960:  080500f1       subs     x8, x8, #1
  0x100000964:  a1ffff54       b.ne     #0x100000958
  0x100000968:  c0035fd6       ret      

; ── PROCEDURE: __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm (0x10000096c .. 0x1000009a0, 52 bytes) ──
__ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm:
  0x10000096c:  000080d2       mov      x0, #0 ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::evaluateColumnMetric(const void *, double, char, uint64_t, void *, int64_t, int16_t, uint16_t, uint64_t, uint64_t)] | [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 99% confidence
  0x100000970:  620100b4       cbz      x2, #0x10000099c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000974:  28100191       add      x8, x1, #0x44
  0x100000978:  890c8052       mov      w9, #0x64
  0x10000097c:  0a0140b9       ldr      w10, [x8]
  0x100000980:  4a7d091b       mul      w10, w10, w9
  0x100000984:  0b415ff8       ldur     x11, [x8, #-0xc]
  0x100000988:  6b01008b       add      x11, x11, x0
  0x10000098c:  60010a8b       add      x0, x11, x10
  0x100000990:  08210191       add      x8, x8, #0x48
  0x100000994:  420400f1       subs     x2, x2, #1
  0x100000998:  21ffff54       b.ne     #0x10000097c
  0x10000099c:  c0035fd6       ret      

; ── PROCEDURE: __ZN17MondayBoardEngineD1Ev (0x1000009a0 .. 0x1000009a4, 4 bytes) ──
__ZN17MondayBoardEngineD1Ev:
  0x1000009a0:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::~MondayBoardEngine() [complete dtor]]

; ── PROCEDURE: __ZN17MondayBoardEngineD0Ev (0x1000009a4 .. 0x1000009a8, 4 bytes) ──
__ZN17MondayBoardEngineD0Ev:
  0x1000009a4:  80000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::~MondayBoardEngine() [deleting dtor]]

; ── PROCEDURE: __ZNK17MondayBoardEngine19engineSubsystemNameEv (0x1000009a8 .. 0x1000009b4, 12 bytes) ──
__ZNK17MondayBoardEngine19engineSubsystemNameEv:
  0x1000009a8:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:MondayBoardEngine::engineSubsystemName() const]
  0x1000009ac:  008c3191       add      x0, x0, #0xc63 ; "MondayBoardEngine::WorkOSCore"
  0x1000009b0:  c0035fd6       ret      

; ── PROCEDURE: __ZN14PulseItemStoreC2Eyyj (0x1000009b4 .. 0x1000009e8, 52 bytes) ──
__ZN14PulseItemStoreC2Eyyj:
  0x1000009b4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::PulseItemStore(uint64_t, uint64_t, uint32_t)] | [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 97% confidence
  0x1000009b8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000009bc:  fd430091       add      x29, sp, #0x10
  0x1000009c0:  f30303aa       mov      x19, x3
  0x1000009c4:  ceffff97       bl       #0x1000008fc ; __ZN17MondayBoardEngineC2Eyy
  0x1000009c8:  28000090       adrp     x8, #0x100004000
  0x1000009cc:  08610691       add      x8, x8, #0x198 ; __ZTV14PulseItemStore
  0x1000009d0:  08410091       add      x8, x8, #0x10
  0x1000009d4:  080000f9       str      x8, [x0]
  0x1000009d8:  137c0429       stp      w19, wzr, [x0, #0x20]
  0x1000009dc:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x1000009e0:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x1000009e4:  c0035fd6       ret      

; ── PROCEDURE: __ZN14PulseItemStoreD1Ev (0x1000009e8 .. 0x1000009ec, 4 bytes) ──
__ZN14PulseItemStoreD1Ev:
  0x1000009e8:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::~PulseItemStore() [complete dtor]]

; ── PROCEDURE: __ZN14PulseItemStoreD0Ev (0x1000009ec .. 0x1000009f0, 4 bytes) ──
__ZN14PulseItemStoreD0Ev:
  0x1000009ec:  6e000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::~PulseItemStore() [deleting dtor]]

; ── PROCEDURE: __ZNK14PulseItemStore19engineSubsystemNameEv (0x1000009f0 .. 0x1000009fc, 12 bytes) ──
__ZNK14PulseItemStore19engineSubsystemNameEv:
  0x1000009f0:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::engineSubsystemName() const]
  0x1000009f4:  00e43991       add      x0, x0, #0xe79 ; "PulseItemStore::VulcanReduxSlice"
  0x1000009f8:  c0035fd6       ret      

; ── PROCEDURE: __ZN14PulseItemStore23computeBoardStateDigestEy (0x1000009fc .. 0x100000a34, 56 bytes) ──
__ZN14PulseItemStore23computeBoardStateDigestEy:
  0x1000009fc:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::computeBoardStateDigest(uint64_t)] | [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100000a00:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100000a04:  fd430091       add      x29, sp, #0x10
  0x100000a08:  f30300aa       mov      x19, x0
  0x100000a0c:  c8ffff97       bl       #0x10000092c ; __ZN17MondayBoardEngine23computeBoardStateDigestEy
  0x100000a10:  682240b9       ldr      w8, [x19, #0x20]
  0x100000a14:  292190d2       mov      x9, #0x8109
  0x100000a18:  09cca0f2       movk     x9, #0x660, lsl #16
  0x100000a1c:  290ac0f2       movk     x9, #0x51, lsl #32
  0x100000a20:  087d099b       mul      x8, x8, x9
  0x100000a24:  000100ca       eor      x0, x8, x0 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000a28:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100000a2c:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100000a30:  c0035fd6       ret      

; ── PROCEDURE: __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm (0x100000a34 .. 0x100000a5c, 40 bytes) ──
__ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm:
  0x100000a34:  000080d2       mov      x0, #0 ; [DWARF CU: monday_board_5106608109.cpp:PulseItemStore::evaluateColumnMetric(const void *, double, char, uint64_t, void *, int64_t, int16_t, uint16_t, uint64_t, uint64_t)] | [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 97% confidence
  0x100000a38:  020100b4       cbz      x2, #0x100000a58 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000a3c:  28e00091       add      x8, x1, #0x38
  0x100000a40:  09d15e38       ldurb    w9, [x8, #-0x13]
  0x100000a44:  0a8544f8       ldr      x10, [x8], #0x48
  0x100000a48:  4929099b       madd     x9, x10, x9, x10
  0x100000a4c:  2001008b       add      x0, x9, x0
  0x100000a50:  420400f1       subs     x2, x2, #1
  0x100000a54:  61ffff54       b.ne     #0x100000a40
  0x100000a58:  c0035fd6       ret      

; ── PROCEDURE: __ZN21ColumnValueAggregatorC2Eyy (0x100000a5c .. 0x100000a8c, 48 bytes) ──
__ZN21ColumnValueAggregatorC2Eyy:
  0x100000a5c:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::ColumnValueAggregator(uint64_t, uint64_t)] | [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 98% confidence
  0x100000a60:  fd030091       mov      x29, sp
  0x100000a64:  a6ffff97       bl       #0x1000008fc ; __ZN17MondayBoardEngineC2Eyy
  0x100000a68:  28000090       adrp     x8, #0x100004000
  0x100000a6c:  08a10791       add      x8, x8, #0x1e8 ; __ZTV21ColumnValueAggregator
  0x100000a70:  08410091       add      x8, x8, #0x10
  0x100000a74:  080000f9       str      x8, [x0]
  0x100000a78:  08208e52       mov      w8, #0x7100
  0x100000a7c:  4800a072       movk     w8, #2, lsl #16
  0x100000a80:  081000f9       str      x8, [x0, #0x20]
  0x100000a84:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x100000a88:  c0035fd6       ret      

; ── PROCEDURE: __ZN21ColumnValueAggregatorD0Ev (0x100000a8c .. 0x100000a90, 4 bytes) ──
__ZN21ColumnValueAggregatorD0Ev:
  0x100000a8c:  46000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::~ColumnValueAggregator() [deleting dtor]]

; ── PROCEDURE: __ZNK21ColumnValueAggregator19engineSubsystemNameEv (0x100000a90 .. 0x100000a9c, 12 bytes) ──
__ZNK21ColumnValueAggregator19engineSubsystemNameEv:
  0x100000a90:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:ColumnValueAggregator::engineSubsystemName() const]
  0x100000a94:  00683a91       add      x0, x0, #0xe9a ; "ColumnValueAggregator::MfBoardColumns"
  0x100000a98:  c0035fd6       ret      

; ── PROCEDURE: __ZN23SidekickAgentDispatcherC2Eyyj (0x100000a9c .. 0x100000ad0, 52 bytes) ──
__ZN23SidekickAgentDispatcherC2Eyyj:
  0x100000a9c:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::SidekickAgentDispatcher(uint64_t, uint64_t, uint32_t)] | [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 97% confidence
  0x100000aa0:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100000aa4:  fd430091       add      x29, sp, #0x10
  0x100000aa8:  f30303aa       mov      x19, x3
  0x100000aac:  94ffff97       bl       #0x1000008fc ; __ZN17MondayBoardEngineC2Eyy
  0x100000ab0:  28000090       adrp     x8, #0x100004000
  0x100000ab4:  08e10891       add      x8, x8, #0x238 ; __ZTV23SidekickAgentDispatcher
  0x100000ab8:  08410091       add      x8, x8, #0x10
  0x100000abc:  080000f9       str      x8, [x0]
  0x100000ac0:  132000b9       str      w19, [x0, #0x20]
  0x100000ac4:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100000ac8:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100000acc:  c0035fd6       ret      

; ── PROCEDURE: __ZN23SidekickAgentDispatcherD1Ev (0x100000ad0 .. 0x100000ad4, 4 bytes) ──
__ZN23SidekickAgentDispatcherD1Ev:
  0x100000ad0:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::~SidekickAgentDispatcher() [complete dtor]]

; ── PROCEDURE: __ZN23SidekickAgentDispatcherD0Ev (0x100000ad4 .. 0x100000ad8, 4 bytes) ──
__ZN23SidekickAgentDispatcherD0Ev:
  0x100000ad4:  34000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::~SidekickAgentDispatcher() [deleting dtor]]

; ── PROCEDURE: __ZNK23SidekickAgentDispatcher19engineSubsystemNameEv (0x100000ad8 .. 0x100000ae4, 12 bytes) ──
__ZNK23SidekickAgentDispatcher19engineSubsystemNameEv:
  0x100000ad8:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::engineSubsystemName() const]
  0x100000adc:  00003b91       add      x0, x0, #0xec0 ; "SidekickAgentDispatcher::MfAiAgentsStore"
  0x100000ae0:  c0035fd6       ret      

; ── PROCEDURE: __ZN23SidekickAgentDispatcher23computeBoardStateDigestEy (0x100000ae4 .. 0x100000b18, 52 bytes) ──
__ZN23SidekickAgentDispatcher23computeBoardStateDigestEy:
  0x100000ae4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [DWARF CU: monday_board_5106608109.cpp:SidekickAgentDispatcher::computeBoardStateDigest(uint64_t)] | [FLIRT] rotl_mix_cipher (libultron_crypto.a) — 99% confidence
  0x100000ae8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100000aec:  fd430091       add      x29, sp, #0x10
  0x100000af0:  f30300aa       mov      x19, x0
  0x100000af4:  8effff97       bl       #0x10000092c ; __ZN17MondayBoardEngine23computeBoardStateDigestEy
  0x100000af8:  a88e9c52       mov      w8, #0xe475
  0x100000afc:  c834b472       movk     w8, #0xa1a6, lsl #16
  0x100000b00:  080008ca       eor      x8, x0, x8 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000b04:  692240b9       ldr      w9, [x19, #0x20]
  0x100000b08:  0001098b       add      x0, x8, x9
  0x100000b0c:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100000b10:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100000b14:  c0035fd6       ret      

; ── PROCEDURE: __ZN24VibeWorkflowOrchestratorC2Eyyjj (0x100000b18 .. 0x100000b50, 56 bytes) ──
__ZN24VibeWorkflowOrchestratorC2Eyyjj:
  0x100000b18:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::VibeWorkflowOrchestrator(uint64_t, uint64_t, uint32_t, uint32_t)] | [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 97% confidence
  0x100000b1c:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100000b20:  fd430091       add      x29, sp, #0x10
  0x100000b24:  f30304aa       mov      x19, x4
  0x100000b28:  f40303aa       mov      x20, x3
  0x100000b2c:  74ffff97       bl       #0x1000008fc ; __ZN17MondayBoardEngineC2Eyy
  0x100000b30:  28000090       adrp     x8, #0x100004000
  0x100000b34:  08210a91       add      x8, x8, #0x288 ; __ZTV24VibeWorkflowOrchestrator
  0x100000b38:  08410091       add      x8, x8, #0x10
  0x100000b3c:  080000f9       str      x8, [x0]
  0x100000b40:  144c0429       stp      w20, w19, [x0, #0x20]
  0x100000b44:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100000b48:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100000b4c:  c0035fd6       ret      

; ── PROCEDURE: __ZN24VibeWorkflowOrchestratorD1Ev (0x100000b50 .. 0x100000b54, 4 bytes) ──
__ZN24VibeWorkflowOrchestratorD1Ev:
  0x100000b50:  c0035fd6       ret       ; [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::~VibeWorkflowOrchestrator() [complete dtor]]

; ── PROCEDURE: __ZN24VibeWorkflowOrchestratorD0Ev (0x100000b54 .. 0x100000b58, 4 bytes) ──
__ZN24VibeWorkflowOrchestratorD0Ev:
  0x100000b54:  14000014       b        #0x100000ba4 ; [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::~VibeWorkflowOrchestrator() [deleting dtor]]

; ── PROCEDURE: __ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv (0x100000b58 .. 0x100000b64, 12 bytes) ──
__ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv:
  0x100000b58:  00000090       adrp     x0, #0x100000000 ; [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::engineSubsystemName() const]
  0x100000b5c:  00a43b91       add      x0, x0, #0xee9 ; "VibeWorkflowOrchestrator::LiteBuilderSync"
  0x100000b60:  c0035fd6       ret      

; ── PROCEDURE: __ZN24VibeWorkflowOrchestrator20evaluateColumnMetricEPK15MondayPulseItemm (0x100000b64 .. 0x100000b98, 52 bytes) ──
__ZN24VibeWorkflowOrchestrator20evaluateColumnMetricEPK15MondayPulseItemm:
  0x100000b64:  087d8052       mov      w8, #0x3e8 ; [DWARF CU: monday_board_5106608109.cpp:VibeWorkflowOrchestrator::evaluateColumnMetric(const void *, double, char, uint64_t, void *, int64_t, int16_t, uint16_t, uint64_t, uint64_t)] | [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100000b68:  09284429       ldp      w9, w10, [x0, #0x20]
  0x100000b6c:  287d081b       mul      w8, w9, w8
  0x100000b70:  491f8052       mov      w9, #0xfa
  0x100000b74:  4021091b       madd     w0, w10, w9, w8
  0x100000b78:  e20000b4       cbz      x2, #0x100000b94 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000b7c:  28900091       add      x8, x1, #0x24
  0x100000b80:  893e8052       mov      w9, #0x1f4
  0x100000b84:  0a854438       ldrb     w10, [x8], #0x48
  0x100000b88:  4001a99b       umaddl   x0, w10, w9, x0
  0x100000b8c:  420400f1       subs     x2, x2, #1
  0x100000b90:  a1ffff54       b.ne     #0x100000b84
  0x100000b94:  c0035fd6       ret      

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_b98 (0x100000b98 .. 0x100000ba4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_b98:
  0x100000b98:  30000090       adrp     x16, #0x100004000 ; [DWARF CU: monday_board_5106608109.cpp:sub_100000b98] | [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100000b9c:  100640f9       ldr      x16, [x16, #8]
  0x100000ba0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_ba4 (0x100000ba4 .. 0x100000bb0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_ba4:
  0x100000ba4:  30000090       adrp     x16, #0x100004000 ; [DWARF CU: monday_board_5106608109.cpp:sub_100000ba4] | [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100000ba8:  100e40f9       ldr      x16, [x16, #0x18]
  0x100000bac:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_bb0 (0x100000bb0 .. 0x100000bbc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_bb0:
  0x100000bb0:  30000090       adrp     x16, #0x100004000 ; [DWARF CU: monday_board_5106608109.cpp:sub_100000bb0] | [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100000bb4:  101240f9       ldr      x16, [x16, #0x20]
  0x100000bb8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_bbc (0x100000bbc .. 0x100000bc8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_bbc:
  0x100000bbc:  30000090       adrp     x16, #0x100004000 ; [DWARF CU: monday_board_5106608109.cpp:sub_100000bbc] | [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100000bc0:  100a40f9       ldr      x16, [x16, #0x10]
  0x100000bc4:  00021fd6       br       x16
