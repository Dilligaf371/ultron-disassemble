; ============================================================================
; ULTRON DISASSEMBLE v3.0 — ANNOTATED ASSEMBLY LISTING
; Target   : /Applications/ChatGPT.app/Contents/Resources/native/system-audio-spectrum
; Format   : Mach-O 64-bit (arm64 / 64-bit)
; Entry    : 0x1000012d8
; Procs    : 247 | Instructions: 4387
; ============================================================================


; ── PROCEDURE: _main (0x1000012d8 .. 0x100001870, 1432 bytes) ──
_main:
  0x1000012d8:  e923b96d       stp      d9, d8, [sp, #-0x70]! ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x1000012dc:  fc6f01a9       stp      x28, x27, [sp, #0x10]
  0x1000012e0:  fa6702a9       stp      x26, x25, [sp, #0x20]
  0x1000012e4:  f85f03a9       stp      x24, x23, [sp, #0x30]
  0x1000012e8:  f65704a9       stp      x22, x21, [sp, #0x40]
  0x1000012ec:  f44f05a9       stp      x20, x19, [sp, #0x50]
  0x1000012f0:  fd7b06a9       stp      x29, x30, [sp, #0x60]
  0x1000012f4:  fd830191       add      x29, sp, #0x60
  0x1000012f8:  ff8303d1       sub      sp, sp, #0xe0
  0x1000012fc:  000080d2       mov      x0, #0
  0x100001300:  5b0f0094       bl       #0x10000506c
  0x100001304:  f90300aa       mov      x25, x0
  0x100001308:  18805ff8       ldur     x24, [x0, #-8]
  0x10000130c:  082340f9       ldr      x8, [x24, #0x40]
  0x100001310:  e90308aa       mov      x9, x8
  0x100001314:  300000f0       adrp     x16, #0x100008000
  0x100001318:  100e40f9       ldr      x16, [x16, #0x18]
  0x10000131c:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001320:  e9030091       mov      x9, sp
  0x100001324:  083d0091       add      x8, x8, #0xf
  0x100001328:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x10000132c:  350108cb       sub      x21, x9, x8
  0x100001330:  bf020091       mov      sp, x21
  0x100001334:  000080d2       mov      x0, #0
  0x100001338:  530f0094       bl       #0x100005084
  0x10000133c:  fa0300aa       mov      x26, x0
  0x100001340:  16805ff8       ldur     x22, [x0, #-8]
  0x100001344:  c82240f9       ldr      x8, [x22, #0x40]
  0x100001348:  e90308aa       mov      x9, x8
  0x10000134c:  300000f0       adrp     x16, #0x100008000
  0x100001350:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001354:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001358:  e9030091       mov      x9, sp
  0x10000135c:  083d0091       add      x8, x8, #0xf
  0x100001360:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100001364:  370108cb       sub      x23, x9, x8
  0x100001368:  ff020091       mov      sp, x23
  0x10000136c:  28008052       mov      w8, #1
  0x100001370:  490000f0       adrp     x9, #0x10000c000
  0x100001374:  28012239       strb     w8, [x9, #0x880]
  0x100001378:  490000f0       adrp     x9, #0x10000c000
  0x10000137c:  28212239       strb     w8, [x9, #0x888]
  0x100001380:  490000f0       adrp     x9, #0x10000c000
  0x100001384:  28412239       strb     w8, [x9, #0x890]
  0x100001388:  8808e8d2       mov      x8, #0x4044000000000000
  0x10000138c:  490000f0       adrp     x9, #0x10000c000
  0x100001390:  284d04f9       str      x8, [x9, #0x898]
  0x100001394:  0800c8d2       mov      x8, #0x400000000000
  0x100001398:  e819e8f2       movk     x8, #0x40cf, lsl #48
  0x10000139c:  490000f0       adrp     x9, #0x10000c000
  0x1000013a0:  285104f9       str      x8, [x9, #0x8a0]
  0x1000013a4:  480000f0       adrp     x8, #0x10000c000
  0x1000013a8:  008542f9       ldr      x0, [x8, #0x508]
  0x1000013ac:  e40f0094       bl       #0x10000533c
  0x1000013b0:  9c100094       bl       #0x100005620 ; objc_msgSend -> -[self init] // [SME:OBJC-DISPATCH]
  0x1000013b4:  480000f0       adrp     x8, #0x10000c000
  0x1000013b8:  005504f9       str      x0, [x8, #0x8a8]
  0x1000013bc:  7a010094       bl       #0x1000019a4 ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCMa
  0x1000013c0:  01168052       mov      w1, #0xb0
  0x1000013c4:  e2008052       mov      w2, #7
  0x1000013c8:  f50f0094       bl       #0x10000539c
  0x1000013cc:  f40300aa       mov      x20, x0
  0x1000013d0:  d8050094       bl       #0x100002b30 ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfc
  0x1000013d4:  480000f0       adrp     x8, #0x10000c000
  0x1000013d8:  145904f9       str      x20, [x8, #0x8b0]
  0x1000013dc:  490000f0       adrp     x9, #0x10000c000
  0x1000013e0:  29c12191       add      x9, x9, #0x870 ; _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp
  0x1000013e4:  280000f0       adrp     x8, #0x100008000
  0x1000013e8:  086541f9       ldr      x8, [x8, #0x2c8]
  0x1000013ec:  280100f9       str      x8, [x9]
  0x1000013f0:  410000f0       adrp     x1, #0x10000c000
  0x1000013f4:  21001591       add      x1, x1, #0x540 ; _$sSo18OS_dispatch_sourceCML
  0x1000013f8:  420000f0       adrp     x2, #0x10000c000
  0x1000013fc:  42401491       add      x2, x2, #0x510
  0x100001400:  000080d2       mov      x0, #0
  0x100001404:  710d0094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100001408:  f30300aa       mov      x19, x0
  0x10000140c:  410000f0       adrp     x1, #0x10000c000
  0x100001410:  21201591       add      x1, x1, #0x548 ; _$sSo17OS_dispatch_queueCML
  0x100001414:  420000f0       adrp     x2, #0x10000c000
  0x100001418:  42601491       add      x2, x2, #0x518
  0x10000141c:  000080d2       mov      x0, #0
  0x100001420:  6a0d0094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100001424:  f40300aa       mov      x20, x0
  0x100001428:  0e0f0094       bl       #0x100005060
  0x10000142c:  e10300aa       mov      x1, x0
  0x100001430:  e0018052       mov      w0, #0xf
  0x100001434:  d40f0094       bl       #0x100005384
  0x100001438:  a8e300d1       sub      x8, x29, #0x38
  0x10000143c:  140110f8       stur     x20, [x8, #-0x100]
  0x100001440:  4d0f0094       bl       #0x100005174
  0x100001444:  fc0300aa       mov      x28, x0
  0x100001448:  e0018052       mov      w0, #0xf
  0x10000144c:  e1031caa       mov      x1, x28
  0x100001450:  a8c300d1       sub      x8, x29, #0x30
  0x100001454:  130110f8       stur     x19, [x8, #-0x100]
  0x100001458:  f40313aa       mov      x20, x19
  0x10000145c:  4f0f0094       bl       #0x100005198
  0x100001460:  fb0300aa       mov      x27, x0
  0x100001464:  e0031caa       mov      x0, x28
  0x100001468:  bb0f0094       bl       #0x100005354
  0x10000146c:  e0031baa       mov      x0, x27
  0x100001470:  f50f0094       bl       #0x100005444
  0x100001474:  fc0300aa       mov      x28, x0
  0x100001478:  08000090       adrp     x8, #0x100001000
  0x10000147c:  08112791       add      x8, x8, #0x9c4 ; _$s4main6finishyyF
  0x100001480:  a8ff30a9       stp      x8, xzr, [x29, #-0xf8]
  0x100001484:  280000f0       adrp     x8, #0x100008000
  0x100001488:  080940f9       ldr      x8, [x8, #0x10]
  0x10000148c:  a96300d1       sub      x9, x29, #0x18
  0x100001490:  280110f8       stur     x8, [x9, #-0x100]
  0x100001494:  28000090       adrp     x8, #0x100005000
  0x100001498:  084944fd       ldr      d8, [x8, #0x890]
  0x10000149c:  a84300d1       sub      x8, x29, #0x10
  0x1000014a0:  080110fc       stur     d8, [x8, #-0x100]
  0x1000014a4:  09000090       adrp     x9, #0x100001000
  0x1000014a8:  29912791       add      x9, x9, #0x9e4 ; _$sIeg_IeyB_TR
  0x1000014ac:  280000f0       adrp     x8, #0x100008000
  0x1000014b0:  08a11291       add      x8, x8, #0x4a8 ; _block_descriptor
  0x1000014b4:  aa2300d1       sub      x10, x29, #8
  0x1000014b8:  490110f8       stur     x9, [x10, #-0x100]
  0x1000014bc:  a80310f8       stur     x8, [x29, #-0x100]
  0x1000014c0:  a06304d1       sub      x0, x29, #0x118
  0x1000014c4:  7d0f0094       bl       #0x1000052b8
  0x1000014c8:  f30300aa       mov      x19, x0
  0x1000014cc:  e80317aa       mov      x8, x23
  0x1000014d0:  ea0e0094       bl       #0x100005078
  0x1000014d4:  e80315aa       mov      x8, x21
  0x1000014d8:  e0031caa       mov      x0, x28
  0x1000014dc:  4d010094       bl       #0x100001a10 ; _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_
  0x1000014e0:  e00317aa       mov      x0, x23
  0x1000014e4:  e10315aa       mov      x1, x21
  0x1000014e8:  e20313aa       mov      x2, x19
  0x1000014ec:  e3031caa       mov      x3, x28
  0x1000014f0:  f4031baa       mov      x20, x27
  0x1000014f4:  2f0f0094       bl       #0x1000051b0
  0x1000014f8:  e00313aa       mov      x0, x19
  0x1000014fc:  720f0094       bl       #0x1000052c4
  0x100001500:  180740f9       ldr      x24, [x24, #8]
  0x100001504:  e00315aa       mov      x0, x21
  0x100001508:  a88300d1       sub      x8, x29, #0x20
  0x10000150c:  190110f8       stur     x25, [x8, #-0x100]
  0x100001510:  e10319aa       mov      x1, x25
  0x100001514:  00033fd6       blr      x24 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001518:  d60640f9       ldr      x22, [x22, #8]
  0x10000151c:  e00317aa       mov      x0, x23
  0x100001520:  a8a300d1       sub      x8, x29, #0x28
  0x100001524:  1a0110f8       stur     x26, [x8, #-0x100]
  0x100001528:  e1031aaa       mov      x1, x26
  0x10000152c:  c0023fd6       blr      x22 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001530:  e0031caa       mov      x0, x28
  0x100001534:  5c0000f0       adrp     x28, #0x10000c000
  0x100001538:  9cc32191       add      x28, x28, #0x870 ; _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp
  0x10000153c:  230f0094       bl       #0x1000051c8
  0x100001540:  a16304d1       sub      x1, x29, #0x118
  0x100001544:  e0031caa       mov      x0, x28 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001548:  22048052       mov      w2, #0x21
  0x10000154c:  030080d2       mov      x3, #0
  0x100001550:  9c0f0094       bl       #0x1000053c0
  0x100001554:  e0031baa       mov      x0, x27
  0x100001558:  d90f0094       bl       #0x1000054bc
  0x10000155c:  f4031caa       mov      x20, x28 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001560:  e40e0094       bl       #0x1000050f0
  0x100001564:  880340f9       ldr      x8, [x28] ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001568:  08e17d92       and      x8, x8, #0xffffffffffffff8
  0x10000156c:  002141a9       ldp      x0, x8, [x8, #0x10]
  0x100001570:  1f0448eb       cmp      x0, x8, lsr #1
  0x100001574:  e2170054       b.hs     #0x100001870 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100001578:  e1031baa       mov      x1, x27
  0x10000157c:  f4031caa       mov      x20, x28 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001580:  e50e0094       bl       #0x100005114
  0x100001584:  a06304d1       sub      x0, x29, #0x118
  0x100001588:  a00f0094       bl       #0x100005408
  0x10000158c:  e0031baa       mov      x0, x27
  0x100001590:  c80f0094       bl       #0x1000054b0
  0x100001594:  b30e0094       bl       #0x100005060
  0x100001598:  e10300aa       mov      x1, x0
  0x10000159c:  40008052       mov      w0, #2
  0x1000015a0:  790f0094       bl       #0x100005384
  0x1000015a4:  a8e300d1       sub      x8, x29, #0x38
  0x1000015a8:  140150f8       ldur     x20, [x8, #-0x100]
  0x1000015ac:  f20e0094       bl       #0x100005174
  0x1000015b0:  f30300aa       mov      x19, x0
  0x1000015b4:  40008052       mov      w0, #2
  0x1000015b8:  e10313aa       mov      x1, x19
  0x1000015bc:  a8c300d1       sub      x8, x29, #0x30
  0x1000015c0:  140150f8       ldur     x20, [x8, #-0x100]
  0x1000015c4:  f50e0094       bl       #0x100005198
  0x1000015c8:  f90300aa       mov      x25, x0
  0x1000015cc:  e00313aa       mov      x0, x19
  0x1000015d0:  610f0094       bl       #0x100005354
  0x1000015d4:  e00319aa       mov      x0, x25
  0x1000015d8:  9b0f0094       bl       #0x100005444
  0x1000015dc:  f30300aa       mov      x19, x0
  0x1000015e0:  08000090       adrp     x8, #0x100001000
  0x1000015e4:  08112791       add      x8, x8, #0x9c4 ; _$s4main6finishyyF
  0x1000015e8:  a8ff30a9       stp      x8, xzr, [x29, #-0xf8]
  0x1000015ec:  3b0000f0       adrp     x27, #0x100008000
  0x1000015f0:  7b0b40f9       ldr      x27, [x27, #0x10]
  0x1000015f4:  a86300d1       sub      x8, x29, #0x18
  0x1000015f8:  1b0110f8       stur     x27, [x8, #-0x100]
  0x1000015fc:  a84300d1       sub      x8, x29, #0x10
  0x100001600:  080110fc       stur     d8, [x8, #-0x100]
  0x100001604:  280000f0       adrp     x8, #0x100008000
  0x100001608:  08411391       add      x8, x8, #0x4d0 ; _block_descriptor.3
  0x10000160c:  09000090       adrp     x9, #0x100001000
  0x100001610:  29912791       add      x9, x9, #0x9e4 ; _$sIeg_IeyB_TR
  0x100001614:  aa2300d1       sub      x10, x29, #8
  0x100001618:  490110f8       stur     x9, [x10, #-0x100]
  0x10000161c:  a80310f8       stur     x8, [x29, #-0x100]
  0x100001620:  a06304d1       sub      x0, x29, #0x118
  0x100001624:  250f0094       bl       #0x1000052b8
  0x100001628:  fa0300aa       mov      x26, x0
  0x10000162c:  e80317aa       mov      x8, x23
  0x100001630:  920e0094       bl       #0x100005078
  0x100001634:  e80315aa       mov      x8, x21
  0x100001638:  e00313aa       mov      x0, x19
  0x10000163c:  f5000094       bl       #0x100001a10 ; _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_
  0x100001640:  e00317aa       mov      x0, x23
  0x100001644:  e10315aa       mov      x1, x21
  0x100001648:  e2031aaa       mov      x2, x26
  0x10000164c:  e30313aa       mov      x3, x19
  0x100001650:  f40319aa       mov      x20, x25
  0x100001654:  d70e0094       bl       #0x1000051b0
  0x100001658:  e0031aaa       mov      x0, x26
  0x10000165c:  1a0f0094       bl       #0x1000052c4
  0x100001660:  e00315aa       mov      x0, x21
  0x100001664:  a88300d1       sub      x8, x29, #0x20
  0x100001668:  010150f8       ldur     x1, [x8, #-0x100]
  0x10000166c:  00033fd6       blr      x24 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001670:  e00317aa       mov      x0, x23
  0x100001674:  a8a300d1       sub      x8, x29, #0x28
  0x100001678:  010150f8       ldur     x1, [x8, #-0x100]
  0x10000167c:  c0023fd6       blr      x22 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001680:  e00313aa       mov      x0, x19
  0x100001684:  d10e0094       bl       #0x1000051c8
  0x100001688:  a16304d1       sub      x1, x29, #0x118
  0x10000168c:  e0031caa       mov      x0, x28 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001690:  22048052       mov      w2, #0x21
  0x100001694:  030080d2       mov      x3, #0
  0x100001698:  4a0f0094       bl       #0x1000053c0
  0x10000169c:  e00319aa       mov      x0, x25
  0x1000016a0:  870f0094       bl       #0x1000054bc
  0x1000016a4:  f4031caa       mov      x20, x28 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000016a8:  920e0094       bl       #0x1000050f0
  0x1000016ac:  880340f9       ldr      x8, [x28] ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000016b0:  08e17d92       and      x8, x8, #0xffffffffffffff8
  0x1000016b4:  002141a9       ldp      x0, x8, [x8, #0x10]
  0x1000016b8:  1f0448eb       cmp      x0, x8, lsr #1
  0x1000016bc:  f6031baa       mov      x22, x27
  0x1000016c0:  e20e0054       b.hs     #0x10000189c
  0x1000016c4:  d50280d2       mov      x21, #0x16
  0x1000016c8:  1500faf2       movk     x21, #0xd000, lsl #48
  0x1000016cc:  540000f0       adrp     x20, #0x10000c000
  0x1000016d0:  94c22191       add      x20, x20, #0x870 ; _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp
  0x1000016d4:  e10319aa       mov      x1, x25
  0x1000016d8:  8f0e0094       bl       #0x100005114
  0x1000016dc:  a06304d1       sub      x0, x29, #0x118
  0x1000016e0:  4a0f0094       bl       #0x100005408
  0x1000016e4:  e00319aa       mov      x0, x25
  0x1000016e8:  720f0094       bl       #0x1000054b0
  0x1000016ec:  480000f0       adrp     x8, #0x10000c000
  0x1000016f0:  009142f9       ldr      x0, [x8, #0x520]
  0x1000016f4:  150f0094       bl       #0x100005348
  0x1000016f8:  ba0f0094       bl       #0x1000055e0 ; objc_msgSend -> -[self fileHandleWithStandardInput] // [SME:OBJC-DISPATCH]
  0x1000016fc:  fd031daa       mov      x29, x29
  0x100001700:  1b0f0094       bl       #0x10000536c
  0x100001704:  f30300aa       mov      x19, x0
  0x100001708:  08000090       adrp     x8, #0x100001000
  0x10000170c:  08512b91       add      x8, x8, #0xad4 ; _$s4mainySo12NSFileHandleCcfU_
  0x100001710:  a8ff30a9       stp      x8, xzr, [x29, #-0xf8]
  0x100001714:  a86300d1       sub      x8, x29, #0x18
  0x100001718:  160110f8       stur     x22, [x8, #-0x100]
  0x10000171c:  a84300d1       sub      x8, x29, #0x10
  0x100001720:  080110fc       stur     d8, [x8, #-0x100]
  0x100001724:  08000090       adrp     x8, #0x100001000
  0x100001728:  08013691       add      x8, x8, #0xd80 ; _$sSo12NSFileHandleCIeghg_ABIeyBhy_TR
  0x10000172c:  290000f0       adrp     x9, #0x100008000
  0x100001730:  29e11391       add      x9, x9, #0x4f8 ; _block_descriptor.6
  0x100001734:  aa2300d1       sub      x10, x29, #8
  0x100001738:  480110f8       stur     x8, [x10, #-0x100]
  0x10000173c:  a90310f8       stur     x9, [x29, #-0x100]
  0x100001740:  a06304d1       sub      x0, x29, #0x118
  0x100001744:  dd0e0094       bl       #0x1000052b8
  0x100001748:  f40300aa       mov      x20, x0
  0x10000174c:  a00351f8       ldur     x0, [x29, #-0xf0]
  0x100001750:  4f0f0094       bl       #0x10000548c
  0x100001754:  e00313aa       mov      x0, x19
  0x100001758:  e20314aa       mov      x2, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000175c:  e90f0094       bl       #0x100005700 ; objc_msgSend -> -[self setReadabilityHandler:] // [SME:OBJC-DISPATCH]
  0x100001760:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001764:  d80e0094       bl       #0x1000052c4
  0x100001768:  e00313aa       mov      x0, x19
  0x10000176c:  fa0e0094       bl       #0x100005354
  0x100001770:  200000b0       adrp     x0, #0x100006000
  0x100001774:  00c02691       add      x0, x0, #0x9b0 ; "/System/Library/PrivateFrameworks/TCC.framework/Versions/A/TCC"
  0x100001778:  41008052       mov      w1, #2
  0x10000177c:  db0e0094       bl       #0x1000052e8
  0x100001780:  400a00b4       cbz      x0, #0x1000018c8
  0x100001784:  210000b0       adrp     x1, #0x100006000
  0x100001788:  21402891       add      x1, x1, #0xa10 ; "TCCAccessRequest"
  0x10000178c:  da0e0094       bl       #0x1000052f4
  0x100001790:  c00900b4       cbz      x0, #0x1000018c8
  0x100001794:  f30300aa       mov      x19, x0
  0x100001798:  280000b0       adrp     x8, #0x100006000
  0x10000179c:  08c12891       add      x8, x8, #0xa30 ; "kTCCServiceAudioCapture"
  0x1000017a0:  088100d1       sub      x8, x8, #0x20
  0x1000017a4:  a0060091       add      x0, x21, #1
  0x1000017a8:  010141b2       orr      x1, x8, #0x8000000000000000
  0x1000017ac:  4b0e0094       bl       #0x1000050d8
  0x1000017b0:  f40300aa       mov      x20, x0
  0x1000017b4:  08000090       adrp     x8, #0x100001000
  0x1000017b8:  08313791       add      x8, x8, #0xdcc ; _$s4mainySbcfU0_
  0x1000017bc:  a8ff30a9       stp      x8, xzr, [x29, #-0xf8]
  0x1000017c0:  a86300d1       sub      x8, x29, #0x18
  0x1000017c4:  160110f8       stur     x22, [x8, #-0x100]
  0x1000017c8:  a84300d1       sub      x8, x29, #0x10
  0x1000017cc:  080110fc       stur     d8, [x8, #-0x100]
  0x1000017d0:  080000f0       adrp     x8, #0x100004000
  0x1000017d4:  08910491       add      x8, x8, #0x124 ; _$sSbIegy_SbIeyBy_TR
  0x1000017d8:  290000f0       adrp     x9, #0x100008000
  0x1000017dc:  29011d91       add      x9, x9, #0x740 ; _block_descriptor.9
  0x1000017e0:  aa2300d1       sub      x10, x29, #8
  0x1000017e4:  480110f8       stur     x8, [x10, #-0x100]
  0x1000017e8:  a90310f8       stur     x9, [x29, #-0x100]
  0x1000017ec:  a06304d1       sub      x0, x29, #0x118
  0x1000017f0:  b20e0094       bl       #0x1000052b8
  0x1000017f4:  f50300aa       mov      x21, x0
  0x1000017f8:  a00351f8       ldur     x0, [x29, #-0xf0]
  0x1000017fc:  240f0094       bl       #0x10000548c
  0x100001800:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001804:  010080d2       mov      x1, #0
  0x100001808:  e20315aa       mov      x2, x21
  0x10000180c:  60023fd6       blr      x19 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001810:  e00315aa       mov      x0, x21
  0x100001814:  ac0e0094       bl       #0x1000052c4
  0x100001818:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000181c:  ce0e0094       bl       #0x100005354
  0x100001820:  480000f0       adrp     x8, #0x10000c000
  0x100001824:  009542f9       ldr      x0, [x8, #0x528]
  0x100001828:  c80e0094       bl       #0x100005348
  0x10000182c:  8d0f0094       bl       #0x100005660 ; objc_msgSend -> -[self mainRunLoop] // [SME:OBJC-DISPATCH]
  0x100001830:  fd031daa       mov      x29, x29
  0x100001834:  ce0e0094       bl       #0x10000536c
  0x100001838:  f30300aa       mov      x19, x0
  0x10000183c:  910f0094       bl       #0x100005680 ; objc_msgSend -> -[self run] // [SME:OBJC-DISPATCH]
  0x100001840:  e00313aa       mov      x0, x19
  0x100001844:  c40e0094       bl       #0x100005354
  0x100001848:  00008052       mov      w0, #0
  0x10000184c:  bf8301d1       sub      sp, x29, #0x60
  0x100001850:  fd7b46a9       ldp      x29, x30, [sp, #0x60]
  0x100001854:  f44f45a9       ldp      x20, x19, [sp, #0x50]
  0x100001858:  f65744a9       ldp      x22, x21, [sp, #0x40]
  0x10000185c:  f85f43a9       ldp      x24, x23, [sp, #0x30]
  0x100001860:  fa6742a9       ldp      x26, x25, [sp, #0x20]
  0x100001864:  fc6f41a9       ldp      x28, x27, [sp, #0x10]
  0x100001868:  e923c76c       ldp      d9, d8, [sp], #0x70
  0x10000186c:  c0035fd6       ret      

; ── PROCEDURE: flirt_memmove_overlap_safe_1870 (0x100001870 .. 0x1000019a4, 308 bytes) ──
flirt_memmove_overlap_safe_1870:
  0x100001870:  1f0500f1       cmp      x8, #1 ; [FLIRT] memmove_overlap_safe (libsystem_platform.dylib) — 99% confidence
  0x100001874:  e8979f1a       cset     w8, hi
  0x100001878:  540000f0       adrp     x20, #0x10000c000
  0x10000187c:  94c22191       add      x20, x20, #0x870 ; _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp
  0x100001880:  01040091       add      x1, x0, #1
  0x100001884:  f30300aa       mov      x19, x0
  0x100001888:  e00308aa       mov      x0, x8
  0x10000188c:  22008052       mov      w2, #1
  0x100001890:  1b0e0094       bl       #0x1000050fc
  0x100001894:  e00313aa       mov      x0, x19
  0x100001898:  38ffff17       b        #0x100001578
  0x10000189c:  1f0500f1       cmp      x8, #1
  0x1000018a0:  e8979f1a       cset     w8, hi
  0x1000018a4:  540000f0       adrp     x20, #0x10000c000
  0x1000018a8:  94c22191       add      x20, x20, #0x870 ; _$s4main7signalsSaySo25OS_dispatch_source_signal_pGvp
  0x1000018ac:  01040091       add      x1, x0, #1
  0x1000018b0:  f30300aa       mov      x19, x0
  0x1000018b4:  e00308aa       mov      x0, x8
  0x1000018b8:  22008052       mov      w2, #1
  0x1000018bc:  100e0094       bl       #0x1000050fc
  0x1000018c0:  e00313aa       mov      x0, x19
  0x1000018c4:  80ffff17       b        #0x1000016c4
  0x1000018c8:  400000f0       adrp     x0, #0x10000c000
  0x1000018cc:  00a01b91       add      x0, x0, #0x6e8 ; _$ss23_ContiguousArrayStorageCySS_yptGMd
  0x1000018d0:  21000090       adrp     x1, #0x100005000
  0x1000018d4:  21002791       add      x1, x1, #0x9c0 ; _$ss23_ContiguousArrayStorageCySS_yptGMR
  0x1000018d8:  c9060094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000018dc:  a16304d1       sub      x1, x29, #0x118
  0x1000018e0:  e50e0094       bl       #0x100005474
  0x1000018e4:  f30300aa       mov      x19, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000018e8:  68008052       mov      w8, #3
  0x1000018ec:  c9008052       mov      w9, #6
  0x1000018f0:  082401a9       stp      x8, x9, [x0, #0x10]
  0x1000018f4:  882e8f52       mov      w8, #0x7974
  0x1000018f8:  08aeac72       movk     w8, #0x6570, lsl #16
  0x1000018fc:  0980fcd2       mov      x9, #-0x1c00000000000000
  0x100001900:  082402a9       stp      x8, x9, [x0, #0x20]
  0x100001904:  280000f0       adrp     x8, #0x100008000
  0x100001908:  08d140f9       ldr      x8, [x8, #0x1a0]
  0x10000190c:  a94c8ed2       mov      x9, #0x7265
  0x100001910:  49eeadf2       movk     x9, #0x6f72, lsl #16
  0x100001914:  490ec0f2       movk     x9, #0x72, lsl #32
  0x100001918:  0aa0fcd2       mov      x10, #-0x1b00000000000000
  0x10000191c:  092803a9       stp      x9, x10, [x0, #0x30]
  0x100001920:  e90d8ed2       mov      x9, #0x706f
  0x100001924:  a94caef2       movk     x9, #0x7265, lsl #16
  0x100001928:  298ccef2       movk     x9, #0x7461, lsl #32
  0x10000192c:  29ededf2       movk     x9, #0x6f69, lsl #48
  0x100001930:  08a404a9       stp      x8, x9, [x0, #0x48]
  0x100001934:  c90d80d2       mov      x9, #0x6e
  0x100001938:  0920fdf2       movk     x9, #0xe900, lsl #48
  0x10000193c:  2a0000b0       adrp     x10, #0x100006000
  0x100001940:  4ac12791       add      x10, x10, #0x9f0 ; "permission-unavailable"
  0x100001944:  4a8100d1       sub      x10, x10, #0x20
  0x100001948:  4a0141b2       orr      x10, x10, #0x8000000000000000
  0x10000194c:  09d405a9       stp      x9, x21, [x0, #0x58]
  0x100001950:  0a3400f9       str      x10, [x0, #0x68]
  0x100001954:  698e8ed2       mov      x9, #0x7473
  0x100001958:  298caef2       movk     x9, #0x7461, lsl #16
  0x10000195c:  a96ecef2       movk     x9, #0x7375, lsl #32
  0x100001960:  08a407a9       stp      x8, x9, [x0, #0x78]
  0x100001964:  08c0fcd2       mov      x8, #-0x1a00000000000000
  0x100001968:  290000f0       adrp     x9, #0x100008000
  0x10000196c:  29f940f9       ldr      x9, [x9, #0x1f0]
  0x100001970:  095400f9       str      x9, [x0, #0xa8]
  0x100001974:  29008052       mov      w9, #1
  0x100001978:  08a408a9       stp      x8, x9, [x0, #0x88]
  0x10000197c:  e50a0094       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100001980:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001984:  e00313aa       mov      x0, x19
  0x100001988:  c10e0094       bl       #0x10000548c
  0x10000198c:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001990:  97010094       bl       #0x100001fec ; _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF
  0x100001994:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001998:  8d0e0094       bl       #0x1000053cc
  0x10000199c:  20008052       mov      w0, #1
  0x1000019a0:  580e0094       bl       #0x100005300

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (0x1000019a4 .. 0x1000019c4, 32 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCMa:
  0x1000019a4:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x1000019a8:  fd030091       mov      x29, sp
  0x1000019ac:  400000f0       adrp     x0, #0x10000c000
  0x1000019b0:  00401691       add      x0, x0, #0x590 ; ClassRef: _TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000019b4:  650e0094       bl       #0x100005348
  0x1000019b8:  010080d2       mov      x1, #0
  0x1000019bc:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x1000019c0:  c0035fd6       ret      

; ── PROCEDURE: swift::main::finish() (0x1000019c4 .. 0x1000019e4, 32 bytes) ──
_$s4main6finishyyF:
  0x1000019c4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x1000019c8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000019cc:  fd430091       add      x29, sp, #0x10
  0x1000019d0:  480000f0       adrp     x8, #0x10000c000
  0x1000019d4:  145944f9       ldr      x20, [x8, #0x8b0] ; _$s4main8spectrum029_12232F587A4C5CD8B1EEDF696793D2FCLLAA19SystemAudioSpectrumACLLCvp
  0x1000019d8:  25040094       bl       #0x100002a6c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF
  0x1000019dc:  00008052       mov      w0, #0
  0x1000019e0:  480e0094       bl       #0x100005300

; ── PROCEDURE: _$sIeg_IeyB_TR (0x1000019e4 .. 0x100001a10, 44 bytes) ──
_$sIeg_IeyB_TR:
  0x1000019e4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x1000019e8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000019ec:  fd430091       add      x29, sp, #0x10
  0x1000019f0:  135042a9       ldp      x19, x20, [x0, #0x20]
  0x1000019f4:  e00314aa       mov      x0, x20
  0x1000019f8:  a80e0094       bl       #0x100005498
  0x1000019fc:  60023fd6       blr      x19 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001a00:  e00314aa       mov      x0, x20
  0x100001a04:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100001a08:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100001a0c:  a00e0014       b        #0x10000548c

; ── PROCEDURE: swift::OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler() (0x100001a10 .. 0x100001ad4, 196 bytes) ──
_$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_:
  0x100001a10:  ff4301d1       sub      sp, sp, #0x50 ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x100001a14:  f85f01a9       stp      x24, x23, [sp, #0x10]
  0x100001a18:  f65702a9       stp      x22, x21, [sp, #0x20]
  0x100001a1c:  f44f03a9       stp      x20, x19, [sp, #0x30]
  0x100001a20:  fd7b04a9       stp      x29, x30, [sp, #0x40]
  0x100001a24:  fd030191       add      x29, sp, #0x40
  0x100001a28:  f30308aa       mov      x19, x8
  0x100001a2c:  000080d2       mov      x0, #0
  0x100001a30:  8f0d0094       bl       #0x10000506c
  0x100001a34:  f40300aa       mov      x20, x0
  0x100001a38:  210000f0       adrp     x1, #0x100008000
  0x100001a3c:  21fc41f9       ldr      x1, [x1, #0x3f8]
  0x100001a40:  280000f0       adrp     x8, #0x100008000
  0x100001a44:  086541f9       ldr      x8, [x8, #0x2c8]
  0x100001a48:  e80700f9       str      x8, [sp, #8]
  0x100001a4c:  400000f0       adrp     x0, #0x10000c000
  0x100001a50:  00401c91       add      x0, x0, #0x710 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL
  0x100001a54:  220000f0       adrp     x2, #0x100008000
  0x100001a58:  420442f9       ldr      x2, [x2, #0x408]
  0x100001a5c:  460c0094       bl       #0x100004b74 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm
  0x100001a60:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001a64:  560000f0       adrp     x22, #0x10000c000
  0x100001a68:  d6621c91       add      x22, x22, #0x718 ; _$sSay8Dispatch0A13WorkItemFlagsVGMd
  0x100001a6c:  37000090       adrp     x23, #0x100005000
  0x100001a70:  f7822791       add      x23, x23, #0x9e0 ; _$sSay8Dispatch0A13WorkItemFlagsVGMR
  0x100001a74:  e00316aa       mov      x0, x22 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001a78:  e10317aa       mov      x1, x23
  0x100001a7c:  60060094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100001a80:  f80300aa       mov      x24, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001a84:  400000f0       adrp     x0, #0x10000c000
  0x100001a88:  00801c91       add      x0, x0, #0x720 ; _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL
  0x100001a8c:  230000f0       adrp     x3, #0x100008000
  0x100001a90:  63e840f9       ldr      x3, [x3, #0x1d0]
  0x100001a94:  e10316aa       mov      x1, x22 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001a98:  e20317aa       mov      x2, x23
  0x100001a9c:  460c0094       bl       #0x100004bb4 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm
  0x100001aa0:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001aa4:  e0230091       add      x0, sp, #8
  0x100001aa8:  e80313aa       mov      x8, x19
  0x100001aac:  e10318aa       mov      x1, x24
  0x100001ab0:  e30314aa       mov      x3, x20
  0x100001ab4:  e40315aa       mov      x4, x21
  0x100001ab8:  ca0d0094       bl       #0x1000051e0
  0x100001abc:  fd7b44a9       ldp      x29, x30, [sp, #0x40]
  0x100001ac0:  f44f43a9       ldp      x20, x19, [sp, #0x30]
  0x100001ac4:  f65742a9       ldp      x22, x21, [sp, #0x20]
  0x100001ac8:  f85f41a9       ldp      x24, x23, [sp, #0x10]
  0x100001acc:  ff430191       add      sp, sp, #0x50
  0x100001ad0:  c0035fd6       ret      

; ── PROCEDURE: swift::main::NSFileHandle() (0x100001ad4 .. 0x100001d80, 684 bytes) ──
_$s4mainySo12NSFileHandleCcfU_:
  0x100001ad4:  fc6fbaa9       stp      x28, x27, [sp, #-0x60]! ; [FLIRT] memmove_overlap_safe (libsystem_platform.dylib) — 99% confidence
  0x100001ad8:  fa6701a9       stp      x26, x25, [sp, #0x10]
  0x100001adc:  f85f02a9       stp      x24, x23, [sp, #0x20]
  0x100001ae0:  f65703a9       stp      x22, x21, [sp, #0x30]
  0x100001ae4:  f44f04a9       stp      x20, x19, [sp, #0x40]
  0x100001ae8:  fd7b05a9       stp      x29, x30, [sp, #0x50]
  0x100001aec:  fd430191       add      x29, sp, #0x50
  0x100001af0:  ff0301d1       sub      sp, sp, #0x40
  0x100001af4:  f40300aa       mov      x20, x0
  0x100001af8:  000080d2       mov      x0, #0
  0x100001afc:  5c0d0094       bl       #0x10000506c
  0x100001b00:  f30300aa       mov      x19, x0
  0x100001b04:  1b805ff8       ldur     x27, [x0, #-8]
  0x100001b08:  682340f9       ldr      x8, [x27, #0x40]
  0x100001b0c:  e90308aa       mov      x9, x8
  0x100001b10:  300000f0       adrp     x16, #0x100008000
  0x100001b14:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001b18:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001b1c:  e9030091       mov      x9, sp
  0x100001b20:  083d0091       add      x8, x8, #0xf
  0x100001b24:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100001b28:  370108cb       sub      x23, x9, x8
  0x100001b2c:  ff020091       mov      sp, x23
  0x100001b30:  000080d2       mov      x0, #0
  0x100001b34:  540d0094       bl       #0x100005084
  0x100001b38:  f60300aa       mov      x22, x0
  0x100001b3c:  1c805ff8       ldur     x28, [x0, #-8]
  0x100001b40:  882340f9       ldr      x8, [x28, #0x40]
  0x100001b44:  e90308aa       mov      x9, x8
  0x100001b48:  300000f0       adrp     x16, #0x100008000
  0x100001b4c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001b50:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001b54:  e9030091       mov      x9, sp
  0x100001b58:  083d0091       add      x8, x8, #0xf
  0x100001b5c:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100001b60:  350108cb       sub      x21, x9, x8
  0x100001b64:  bf020091       mov      sp, x21
  0x100001b68:  e00314aa       mov      x0, x20
  0x100001b6c:  8d0e0094       bl       #0x1000055a0 ; objc_msgSend -> -[self availableData] // [SME:OBJC-DISPATCH]
  0x100001b70:  fd031daa       mov      x29, x29
  0x100001b74:  fe0d0094       bl       #0x10000536c
  0x100001b78:  f90300aa       mov      x25, x0
  0x100001b7c:  2a0d0094       bl       #0x100005024
  0x100001b80:  f80300aa       mov      x24, x0
  0x100001b84:  fa0301aa       mov      x26, x1
  0x100001b88:  e00319aa       mov      x0, x25
  0x100001b8c:  f20d0094       bl       #0x100005354
  0x100001b90:  e1031aaa       mov      x1, x26
  0x100001b94:  48ff7ed3       lsr      x8, x26, #0x3e
  0x100001b98:  1f050071       cmp      w8, #1
  0x100001b9c:  0c010054       b.gt     #0x100001bbc ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100001ba0:  e8010035       cbnz     w8, #0x100001bdc
  0x100001ba4:  e00318aa       mov      x0, x24
  0x100001ba8:  f80301aa       mov      x24, x1
  0x100001bac:  c20a0094       bl       #0x1000046b4 ; _$s10Foundation4DataV15_RepresentationOWOe
  0x100001bb0:  1f1f50f2       tst      x24, #0xff000000000000
  0x100001bb4:  610d0054       b.ne     #0x100001d60
  0x100001bb8:  12000014       b        #0x100001c00
  0x100001bbc:  1f090071       cmp      w8, #2
  0x100001bc0:  c1010054       b.ne     #0x100001bf8
  0x100001bc4:  196b41a9       ldp      x25, x26, [x24, #0x10]
  0x100001bc8:  e00318aa       mov      x0, x24
  0x100001bcc:  ba0a0094       bl       #0x1000046b4 ; _$s10Foundation4DataV15_RepresentationOWOe
  0x100001bd0:  3f031aeb       cmp      x25, x26
  0x100001bd4:  60010054       b.eq     #0x100001c00
  0x100001bd8:  62000014       b        #0x100001d60
  0x100001bdc:  e00318aa       mov      x0, x24
  0x100001be0:  b50a0094       bl       #0x1000046b4 ; _$s10Foundation4DataV15_RepresentationOWOe
  0x100001be4:  197f4093       sxtw     x25, w24
  0x100001be8:  1aff6093       asr      x26, x24, #0x20
  0x100001bec:  3f031aeb       cmp      x25, x26
  0x100001bf0:  80000054       b.eq     #0x100001c00
  0x100001bf4:  5b000014       b        #0x100001d60
  0x100001bf8:  e00318aa       mov      x0, x24
  0x100001bfc:  ae0a0094       bl       #0x1000046b4 ; _$s10Foundation4DataV15_RepresentationOWOe
  0x100001c00:  e00314aa       mov      x0, x20
  0x100001c04:  020080d2       mov      x2, #0
  0x100001c08:  be0e0094       bl       #0x100005700 ; objc_msgSend -> -[self setReadabilityHandler:] // [SME:OBJC-DISPATCH]
  0x100001c0c:  000080d2       mov      x0, #0
  0x100001c10:  ad0d0094       bl       #0x1000052c4
  0x100001c14:  410000f0       adrp     x1, #0x10000c000
  0x100001c18:  21201591       add      x1, x1, #0x548 ; _$sSo17OS_dispatch_queueCML
  0x100001c1c:  420000f0       adrp     x2, #0x10000c000
  0x100001c20:  42601491       add      x2, x2, #0x518
  0x100001c24:  000080d2       mov      x0, #0
  0x100001c28:  680b0094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100001c2c:  f40300aa       mov      x20, x0
  0x100001c30:  510d0094       bl       #0x100005174
  0x100001c34:  f80300aa       mov      x24, x0
  0x100001c38:  08000090       adrp     x8, #0x100001000
  0x100001c3c:  08112791       add      x8, x8, #0x9c4 ; _$s4main6finishyyF
  0x100001c40:  a87f3aa9       stp      x8, xzr, [x29, #-0x60]
  0x100001c44:  280000f0       adrp     x8, #0x100008000
  0x100001c48:  080940f9       ldr      x8, [x8, #0x10]
  0x100001c4c:  a80318f8       stur     x8, [x29, #-0x80]
  0x100001c50:  28000090       adrp     x8, #0x100005000
  0x100001c54:  004944fd       ldr      d0, [x8, #0x890]
  0x100001c58:  a08318fc       stur     d0, [x29, #-0x78]
  0x100001c5c:  08000090       adrp     x8, #0x100001000
  0x100001c60:  08912791       add      x8, x8, #0x9e4 ; _$sIeg_IeyB_TR
  0x100001c64:  290000f0       adrp     x9, #0x100008000
  0x100001c68:  29212091       add      x9, x9, #0x808 ; _block_descriptor.21
  0x100001c6c:  a82739a9       stp      x8, x9, [x29, #-0x70]
  0x100001c70:  a00302d1       sub      x0, x29, #0x80
  0x100001c74:  910d0094       bl       #0x1000052b8
  0x100001c78:  f90300aa       mov      x25, x0
  0x100001c7c:  e80315aa       mov      x8, x21
  0x100001c80:  fe0c0094       bl       #0x100005078
  0x100001c84:  280000f0       adrp     x8, #0x100008000
  0x100001c88:  086541f9       ldr      x8, [x8, #0x2c8]
  0x100001c8c:  a80318f8       stur     x8, [x29, #-0x80]
  0x100001c90:  400000f0       adrp     x0, #0x10000c000
  0x100001c94:  00401c91       add      x0, x0, #0x710 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL
  0x100001c98:  210000f0       adrp     x1, #0x100008000
  0x100001c9c:  21fc41f9       ldr      x1, [x1, #0x3f8]
  0x100001ca0:  220000f0       adrp     x2, #0x100008000
  0x100001ca4:  420442f9       ldr      x2, [x2, #0x408]
  0x100001ca8:  b30b0094       bl       #0x100004b74 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm
  0x100001cac:  fa0300aa       mov      x26, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001cb0:  540000f0       adrp     x20, #0x10000c000
  0x100001cb4:  94621c91       add      x20, x20, #0x718 ; _$sSay8Dispatch0A13WorkItemFlagsVGMd
  0x100001cb8:  b68317f8       stur     x22, [x29, #-0x88]
  0x100001cbc:  f6031baa       mov      x22, x27
  0x100001cc0:  3b000090       adrp     x27, #0x100005000
  0x100001cc4:  7b832791       add      x27, x27, #0x9e0 ; _$sSay8Dispatch0A13WorkItemFlagsVGMR
  0x100001cc8:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001ccc:  e1031baa       mov      x1, x27
  0x100001cd0:  cb050094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100001cd4:  bc0317f8       stur     x28, [x29, #-0x90]
  0x100001cd8:  fc0300aa       mov      x28, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001cdc:  400000f0       adrp     x0, #0x10000c000
  0x100001ce0:  00801c91       add      x0, x0, #0x720 ; _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL
  0x100001ce4:  230000f0       adrp     x3, #0x100008000
  0x100001ce8:  63e840f9       ldr      x3, [x3, #0x1d0]
  0x100001cec:  e10314aa       mov      x1, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001cf0:  e2031baa       mov      x2, x27
  0x100001cf4:  b00b0094       bl       #0x100004bb4 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm
  0x100001cf8:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001cfc:  a00302d1       sub      x0, x29, #0x80
  0x100001d00:  e80317aa       mov      x8, x23
  0x100001d04:  e1031caa       mov      x1, x28
  0x100001d08:  f40313aa       mov      x20, x19
  0x100001d0c:  e30313aa       mov      x3, x19
  0x100001d10:  e4031aaa       mov      x4, x26
  0x100001d14:  330d0094       bl       #0x1000051e0
  0x100001d18:  000080d2       mov      x0, #0
  0x100001d1c:  e10315aa       mov      x1, x21
  0x100001d20:  e20317aa       mov      x2, x23
  0x100001d24:  e30319aa       mov      x3, x25
  0x100001d28:  f40318aa       mov      x20, x24
  0x100001d2c:  150d0094       bl       #0x100005180
  0x100001d30:  e00319aa       mov      x0, x25
  0x100001d34:  640d0094       bl       #0x1000052c4
  0x100001d38:  e00318aa       mov      x0, x24
  0x100001d3c:  860d0094       bl       #0x100005354
  0x100001d40:  c80640f9       ldr      x8, [x22, #8]
  0x100001d44:  e00317aa       mov      x0, x23
  0x100001d48:  e10313aa       mov      x1, x19
  0x100001d4c:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001d50:  a80777a9       ldp      x8, x1, [x29, #-0x90]
  0x100001d54:  080540f9       ldr      x8, [x8, #8]
  0x100001d58:  e00315aa       mov      x0, x21
  0x100001d5c:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001d60:  bf4301d1       sub      sp, x29, #0x50
  0x100001d64:  fd7b45a9       ldp      x29, x30, [sp, #0x50]
  0x100001d68:  f44f44a9       ldp      x20, x19, [sp, #0x40]
  0x100001d6c:  f65743a9       ldp      x22, x21, [sp, #0x30]
  0x100001d70:  f85f42a9       ldp      x24, x23, [sp, #0x20]
  0x100001d74:  fa6741a9       ldp      x26, x25, [sp, #0x10]
  0x100001d78:  fc6fc6a8       ldp      x28, x27, [sp], #0x60
  0x100001d7c:  c0035fd6       ret      

; ── PROCEDURE: swift::NSFileHandle() (0x100001d80 .. 0x100001dcc, 76 bytes) ──
_$sSo12NSFileHandleCIeghg_ABIeyBhy_TR:
  0x100001d80:  f657bda9       stp      x22, x21, [sp, #-0x30]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x100001d84:  f44f01a9       stp      x20, x19, [sp, #0x10]
  0x100001d88:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x100001d8c:  fd830091       add      x29, sp, #0x20
  0x100001d90:  f30301aa       mov      x19, x1
  0x100001d94:  155042a9       ldp      x21, x20, [x0, #0x20]
  0x100001d98:  e00314aa       mov      x0, x20
  0x100001d9c:  bf0d0094       bl       #0x100005498
  0x100001da0:  e00313aa       mov      x0, x19
  0x100001da4:  6f0d0094       bl       #0x100005360
  0x100001da8:  f30300aa       mov      x19, x0
  0x100001dac:  a0023fd6       blr      x21 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001db0:  e00314aa       mov      x0, x20
  0x100001db4:  b60d0094       bl       #0x10000548c
  0x100001db8:  e00313aa       mov      x0, x19
  0x100001dbc:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x100001dc0:  f44f41a9       ldp      x20, x19, [sp, #0x10]
  0x100001dc4:  f657c3a8       ldp      x22, x21, [sp], #0x30
  0x100001dc8:  630d0014       b        #0x100005354

; ── PROCEDURE: swift::main() (0x100001dcc .. 0x100001fec, 544 bytes) ──
_$s4mainySbcfU0_:
  0x100001dcc:  fc6fbaa9       stp      x28, x27, [sp, #-0x60]! ; [FLIRT] swift_bridge_object_retain (libswiftCore.dylib) — 99% confidence
  0x100001dd0:  fa6701a9       stp      x26, x25, [sp, #0x10]
  0x100001dd4:  f85f02a9       stp      x24, x23, [sp, #0x20]
  0x100001dd8:  f65703a9       stp      x22, x21, [sp, #0x30]
  0x100001ddc:  f44f04a9       stp      x20, x19, [sp, #0x40]
  0x100001de0:  fd7b05a9       stp      x29, x30, [sp, #0x50]
  0x100001de4:  fd430191       add      x29, sp, #0x50
  0x100001de8:  ff0301d1       sub      sp, sp, #0x40
  0x100001dec:  fa0300aa       mov      x26, x0
  0x100001df0:  000080d2       mov      x0, #0
  0x100001df4:  9e0c0094       bl       #0x10000506c
  0x100001df8:  f30300aa       mov      x19, x0
  0x100001dfc:  390000f0       adrp     x25, #0x100008000
  0x100001e00:  39ff41f9       ldr      x25, [x25, #0x3f8]
  0x100001e04:  08805ff8       ldur     x8, [x0, #-8]
  0x100001e08:  a88317f8       stur     x8, [x29, #-0x88]
  0x100001e0c:  082140f9       ldr      x8, [x8, #0x40]
  0x100001e10:  e90308aa       mov      x9, x8
  0x100001e14:  300000f0       adrp     x16, #0x100008000
  0x100001e18:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001e1c:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001e20:  e9030091       mov      x9, sp
  0x100001e24:  083d0091       add      x8, x8, #0xf
  0x100001e28:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100001e2c:  350108cb       sub      x21, x9, x8
  0x100001e30:  bf020091       mov      sp, x21
  0x100001e34:  000080d2       mov      x0, #0
  0x100001e38:  930c0094       bl       #0x100005084
  0x100001e3c:  a00317f8       stur     x0, [x29, #-0x90]
  0x100001e40:  16805ff8       ldur     x22, [x0, #-8]
  0x100001e44:  c82240f9       ldr      x8, [x22, #0x40]
  0x100001e48:  e90308aa       mov      x9, x8
  0x100001e4c:  300000f0       adrp     x16, #0x100008000
  0x100001e50:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001e54:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001e58:  e9030091       mov      x9, sp
  0x100001e5c:  083d0091       add      x8, x8, #0xf
  0x100001e60:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100001e64:  370108cb       sub      x23, x9, x8
  0x100001e68:  ff020091       mov      sp, x23
  0x100001e6c:  410000f0       adrp     x1, #0x10000c000
  0x100001e70:  21201591       add      x1, x1, #0x548 ; _$sSo17OS_dispatch_queueCML
  0x100001e74:  420000f0       adrp     x2, #0x10000c000
  0x100001e78:  42601491       add      x2, x2, #0x518
  0x100001e7c:  000080d2       mov      x0, #0
  0x100001e80:  d20a0094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100001e84:  f40300aa       mov      x20, x0
  0x100001e88:  bb0c0094       bl       #0x100005174
  0x100001e8c:  f80300aa       mov      x24, x0
  0x100001e90:  200000f0       adrp     x0, #0x100008000
  0x100001e94:  00e01d91       add      x0, x0, #0x778
  0x100001e98:  21028052       mov      w1, #0x11
  0x100001e9c:  e2008052       mov      w2, #7
  0x100001ea0:  3f0d0094       bl       #0x10000539c
  0x100001ea4:  1a400039       strb     w26, [x0, #0x10]
  0x100001ea8:  080000f0       adrp     x8, #0x100004000
  0x100001eac:  08911d91       add      x8, x8, #0x764 ; _$s4mainySbcfU0_yyScMYccfU_TA
  0x100001eb0:  a8033aa9       stp      x8, x0, [x29, #-0x60]
  0x100001eb4:  280000f0       adrp     x8, #0x100008000
  0x100001eb8:  080940f9       ldr      x8, [x8, #0x10]
  0x100001ebc:  a80318f8       stur     x8, [x29, #-0x80]
  0x100001ec0:  28000090       adrp     x8, #0x100005000
  0x100001ec4:  004944fd       ldr      d0, [x8, #0x890]
  0x100001ec8:  a08318fc       stur     d0, [x29, #-0x78]
  0x100001ecc:  08000090       adrp     x8, #0x100001000
  0x100001ed0:  08912791       add      x8, x8, #0x9e4 ; _$sIeg_IeyB_TR
  0x100001ed4:  290000f0       adrp     x9, #0x100008000
  0x100001ed8:  29411e91       add      x9, x9, #0x790 ; _block_descriptor.12
  0x100001edc:  a82739a9       stp      x8, x9, [x29, #-0x70]
  0x100001ee0:  a00302d1       sub      x0, x29, #0x80
  0x100001ee4:  f50c0094       bl       #0x1000052b8
  0x100001ee8:  fa0300aa       mov      x26, x0
  0x100001eec:  a0835af8       ldur     x0, [x29, #-0x58]
  0x100001ef0:  670d0094       bl       #0x10000548c
  0x100001ef4:  e80317aa       mov      x8, x23
  0x100001ef8:  600c0094       bl       #0x100005078
  0x100001efc:  280000f0       adrp     x8, #0x100008000
  0x100001f00:  086541f9       ldr      x8, [x8, #0x2c8]
  0x100001f04:  a80318f8       stur     x8, [x29, #-0x80]
  0x100001f08:  400000f0       adrp     x0, #0x10000c000
  0x100001f0c:  00401c91       add      x0, x0, #0x710 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWL
  0x100001f10:  220000f0       adrp     x2, #0x100008000
  0x100001f14:  420442f9       ldr      x2, [x2, #0x408]
  0x100001f18:  e10319aa       mov      x1, x25
  0x100001f1c:  160b0094       bl       #0x100004b74 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm
  0x100001f20:  f90300aa       mov      x25, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001f24:  540000f0       adrp     x20, #0x10000c000
  0x100001f28:  94621c91       add      x20, x20, #0x718 ; _$sSay8Dispatch0A13WorkItemFlagsVGMd
  0x100001f2c:  3b000090       adrp     x27, #0x100005000
  0x100001f30:  7b832791       add      x27, x27, #0x9e0 ; _$sSay8Dispatch0A13WorkItemFlagsVGMR
  0x100001f34:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001f38:  e1031baa       mov      x1, x27
  0x100001f3c:  30050094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100001f40:  fc0300aa       mov      x28, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001f44:  400000f0       adrp     x0, #0x10000c000
  0x100001f48:  00801c91       add      x0, x0, #0x720 ; _$sSay8Dispatch0A13WorkItemFlagsVGSayxGSTsWL
  0x100001f4c:  230000f0       adrp     x3, #0x100008000
  0x100001f50:  63e840f9       ldr      x3, [x3, #0x1d0]
  0x100001f54:  e10314aa       mov      x1, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001f58:  e2031baa       mov      x2, x27
  0x100001f5c:  160b0094       bl       #0x100004bb4 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm
  0x100001f60:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100001f64:  a00302d1       sub      x0, x29, #0x80
  0x100001f68:  e80315aa       mov      x8, x21
  0x100001f6c:  e1031caa       mov      x1, x28
  0x100001f70:  f40313aa       mov      x20, x19
  0x100001f74:  e30313aa       mov      x3, x19
  0x100001f78:  e40319aa       mov      x4, x25
  0x100001f7c:  990c0094       bl       #0x1000051e0
  0x100001f80:  000080d2       mov      x0, #0
  0x100001f84:  e10317aa       mov      x1, x23
  0x100001f88:  e20315aa       mov      x2, x21
  0x100001f8c:  e3031aaa       mov      x3, x26
  0x100001f90:  f40318aa       mov      x20, x24
  0x100001f94:  7b0c0094       bl       #0x100005180
  0x100001f98:  e0031aaa       mov      x0, x26
  0x100001f9c:  ca0c0094       bl       #0x1000052c4
  0x100001fa0:  e00318aa       mov      x0, x24
  0x100001fa4:  ec0c0094       bl       #0x100005354
  0x100001fa8:  a88357f8       ldur     x8, [x29, #-0x88]
  0x100001fac:  080540f9       ldr      x8, [x8, #8]
  0x100001fb0:  e00315aa       mov      x0, x21
  0x100001fb4:  e10313aa       mov      x1, x19
  0x100001fb8:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001fbc:  c80640f9       ldr      x8, [x22, #8]
  0x100001fc0:  e00317aa       mov      x0, x23
  0x100001fc4:  a10357f8       ldur     x1, [x29, #-0x90]
  0x100001fc8:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001fcc:  bf4301d1       sub      sp, x29, #0x50
  0x100001fd0:  fd7b45a9       ldp      x29, x30, [sp, #0x50]
  0x100001fd4:  f44f44a9       ldp      x20, x19, [sp, #0x40]
  0x100001fd8:  f65743a9       ldp      x22, x21, [sp, #0x30]
  0x100001fdc:  f85f42a9       ldp      x24, x23, [sp, #0x20]
  0x100001fe0:  fa6741a9       ldp      x26, x25, [sp, #0x10]
  0x100001fe4:  fc6fc6a8       ldp      x28, x27, [sp], #0x60
  0x100001fe8:  c0035fd6       ret      

; ── PROCEDURE: swift::main::emit::_12232F587A4C5CD8B1EEDF696793::FC() (0x100001fec .. 0x100002220, 564 bytes) ──
_$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF:
  0x100001fec:  ff4302d1       sub      sp, sp, #0x90 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100001ff0:  f85f05a9       stp      x24, x23, [sp, #0x50]
  0x100001ff4:  f65706a9       stp      x22, x21, [sp, #0x60]
  0x100001ff8:  f44f07a9       stp      x20, x19, [sp, #0x70]
  0x100001ffc:  fd7b08a9       stp      x29, x30, [sp, #0x80]
  0x100002000:  fd030291       add      x29, sp, #0x80
  0x100002004:  f30300aa       mov      x19, x0
  0x100002008:  280000d0       adrp     x8, #0x100008000
  0x10000200c:  081540f9       ldr      x8, [x8, #0x28]
  0x100002010:  080140f9       ldr      x8, [x8]
  0x100002014:  a8831cf8       stur     x8, [x29, #-0x38]
  0x100002018:  480000d0       adrp     x8, #0x10000c000
  0x10000201c:  009942f9       ldr      x0, [x8, #0x530]
  0x100002020:  ca0c0094       bl       #0x100005348
  0x100002024:  f40300aa       mov      x20, x0
  0x100002028:  280000d0       adrp     x8, #0x100008000
  0x10000202c:  086141f9       ldr      x8, [x8, #0x2c0]
  0x100002030:  210000d0       adrp     x1, #0x100008000
  0x100002034:  21d040f9       ldr      x1, [x1, #0x1a0]
  0x100002038:  230000d0       adrp     x3, #0x100008000
  0x10000203c:  63d440f9       ldr      x3, [x3, #0x1a8]
  0x100002040:  02210091       add      x2, x8, #8
  0x100002044:  e00313aa       mov      x0, x19
  0x100002048:  210c0094       bl       #0x1000050cc
  0x10000204c:  f50300aa       mov      x21, x0
  0x100002050:  ff0b00f9       str      xzr, [sp, #0x10]
  0x100002054:  e4430091       add      x4, sp, #0x10
  0x100002058:  e00314aa       mov      x0, x20
  0x10000205c:  e20315aa       mov      x2, x21
  0x100002060:  030080d2       mov      x3, #0
  0x100002064:  570d0094       bl       #0x1000055c0 ; objc_msgSend -> -[self dataWithJSONObject:options:error:] // [SME:OBJC-DISPATCH]
  0x100002068:  fd031daa       mov      x29, x29
  0x10000206c:  c00c0094       bl       #0x10000536c
  0x100002070:  f30300aa       mov      x19, x0
  0x100002074:  e00315aa       mov      x0, x21
  0x100002078:  b70c0094       bl       #0x100005354
  0x10000207c:  e00b40f9       ldr      x0, [sp, #0x10]
  0x100002080:  b80c0094       bl       #0x100005360
  0x100002084:  130200b4       cbz      x19, #0x1000020c4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100002088:  e00313aa       mov      x0, x19
  0x10000208c:  e60b0094       bl       #0x100005024
  0x100002090:  f40300aa       mov      x20, x0
  0x100002094:  f50301aa       mov      x21, x1
  0x100002098:  e00313aa       mov      x0, x19
  0x10000209c:  ae0c0094       bl       #0x100005354
  0x1000020a0:  f4d703a9       stp      x20, x21, [sp, #0x38]
  0x1000020a4:  a8fe7ed3       lsr      x8, x21, #0x3e
  0x1000020a8:  1f050071       cmp      w8, #1
  0x1000020ac:  0c020054       b.gt     #0x1000020ec
  0x1000020b0:  a9de70d3       ubfx     x9, x21, #0x30, #8
  0x1000020b4:  8afe6093       asr      x10, x20, #0x20
  0x1000020b8:  1f010071       cmp      w8, #0
  0x1000020bc:  33018a9a       csel     x19, x9, x10, eq
  0x1000020c0:  10000014       b        #0x100002100
  0x1000020c4:  f30300aa       mov      x19, x0
  0x1000020c8:  ce0b0094       bl       #0x100005000
  0x1000020cc:  f40300aa       mov      x20, x0
  0x1000020d0:  e00313aa       mov      x0, x19
  0x1000020d4:  a00c0094       bl       #0x100005354
  0x1000020d8:  f50314aa       mov      x21, x20
  0x1000020dc:  040d0094       bl       #0x1000054ec
  0x1000020e0:  e00314aa       mov      x0, x20
  0x1000020e4:  cc0c0094       bl       #0x100005414
  0x1000020e8:  42000014       b        #0x1000021f0
  0x1000020ec:  1f090071       cmp      w8, #2
  0x1000020f0:  61000054       b.ne     #0x1000020fc
  0x1000020f4:  930e40f9       ldr      x19, [x20, #0x18]
  0x1000020f8:  02000014       b        #0x100002100
  0x1000020fc:  130080d2       mov      x19, #0
  0x100002100:  540000d0       adrp     x20, #0x10000c000
  0x100002104:  94c21b91       add      x20, x20, #0x6f0 ; _$ss15CollectionOfOneVys5UInt8VGMd
  0x100002108:  150000f0       adrp     x21, #0x100005000
  0x10000210c:  b5222791       add      x21, x21, #0x9c8 ; _$ss15CollectionOfOneVys5UInt8VGMR
  0x100002110:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002114:  e10315aa       mov      x1, x21
  0x100002118:  b9040094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000211c:  f60300aa       mov      x22, x0
  0x100002120:  e01700f9       str      x0, [sp, #0x28]
  0x100002124:  400000d0       adrp     x0, #0x10000c000
  0x100002128:  00e01b91       add      x0, x0, #0x6f8 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWL
  0x10000212c:  230000d0       adrp     x3, #0x100008000
  0x100002130:  63b040f9       ldr      x3, [x3, #0x160]
  0x100002134:  e10314aa       mov      x1, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002138:  e20315aa       mov      x2, x21
  0x10000213c:  9e0a0094       bl       #0x100004bb4 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm
  0x100002140:  e01b00f9       str      x0, [sp, #0x30]
  0x100002144:  48018052       mov      w8, #0xa
  0x100002148:  e8430039       strb     w8, [sp, #0x10]
  0x10000214c:  e0430091       add      x0, sp, #0x10
  0x100002150:  e10316aa       mov      x1, x22
  0x100002154:  47090094       bl       #0x100004670 ; ___swift_project_boxed_opaque_existential_1
  0x100002158:  08004039       ldrb     w8, [x0]
  0x10000215c:  e81f0039       strb     w8, [sp, #7]
  0x100002160:  e21f0091       add      x2, sp, #7
  0x100002164:  f4e30091       add      x20, sp, #0x38
  0x100002168:  e00313aa       mov      x0, x19
  0x10000216c:  e10313aa       mov      x1, x19
  0x100002170:  23008052       mov      w3, #1
  0x100002174:  a60b0094       bl       #0x10000500c
  0x100002178:  e0430091       add      x0, sp, #0x10
  0x10000217c:  46090094       bl       #0x100004694 ; ___swift_destroy_boxed_opaque_existential_1
  0x100002180:  480000d0       adrp     x8, #0x10000c000
  0x100002184:  135544f9       ldr      x19, [x8, #0x8a8] ; _$s4main10outputLock029_12232F587A4C5CD8B1EEDF696793E2FCLLSo6NSLockCvp
  0x100002188:  e00313aa       mov      x0, x19
  0x10000218c:  2d0d0094       bl       #0x100005640 ; objc_msgSend -> -[self lock] // [SME:OBJC-DISPATCH]
  0x100002190:  480000d0       adrp     x8, #0x10000c000
  0x100002194:  009142f9       ldr      x0, [x8, #0x520]
  0x100002198:  6c0c0094       bl       #0x100005348
  0x10000219c:  190d0094       bl       #0x100005600 ; objc_msgSend -> -[self fileHandleWithStandardOutput] // [SME:OBJC-DISPATCH]
  0x1000021a0:  fd031daa       mov      x29, x29
  0x1000021a4:  720c0094       bl       #0x10000536c
  0x1000021a8:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000021ac:  f5db43a9       ldp      x21, x22, [sp, #0x38]
  0x1000021b0:  e00315aa       mov      x0, x21
  0x1000021b4:  e10316aa       mov      x1, x22
  0x1000021b8:  980b0094       bl       #0x100005018
  0x1000021bc:  f70300aa       mov      x23, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000021c0:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000021c4:  e20317aa       mov      x2, x23
  0x1000021c8:  660d0094       bl       #0x100005760 ; objc_msgSend -> -[self writeData:] // [SME:OBJC-DISPATCH]
  0x1000021cc:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000021d0:  610c0094       bl       #0x100005354
  0x1000021d4:  e00317aa       mov      x0, x23
  0x1000021d8:  5f0c0094       bl       #0x100005354
  0x1000021dc:  e00313aa       mov      x0, x19
  0x1000021e0:  580d0094       bl       #0x100005740 ; objc_msgSend -> -[self unlock] // [SME:OBJC-DISPATCH]
  0x1000021e4:  e00315aa       mov      x0, x21
  0x1000021e8:  e10316aa       mov      x1, x22
  0x1000021ec:  32090094       bl       #0x1000046b4 ; _$s10Foundation4DataV15_RepresentationOWOe
  0x1000021f0:  a8835cf8       ldur     x8, [x29, #-0x38]
  0x1000021f4:  290000d0       adrp     x9, #0x100008000
  0x1000021f8:  291540f9       ldr      x9, [x9, #0x28]
  0x1000021fc:  290140f9       ldr      x9, [x9]
  0x100002200:  3f0108eb       cmp      x9, x8
  0x100002204:  e1000054       b.ne     #0x100002220
  0x100002208:  fd7b48a9       ldp      x29, x30, [sp, #0x80]
  0x10000220c:  f44f47a9       ldp      x20, x19, [sp, #0x70]
  0x100002210:  f65746a9       ldp      x22, x21, [sp, #0x60]
  0x100002214:  f85f45a9       ldp      x24, x23, [sp, #0x50]
  0x100002218:  ff430291       add      sp, sp, #0x90
  0x10000221c:  c0035fd6       ret      

; ── PROCEDURE: flirt_objc_retain_release_thunk_2220 (0x100002220 .. 0x100002224, 4 bytes) ──
flirt_objc_retain_release_thunk_2220:
  0x100002220:  2c0c0094       bl       #0x1000052d0 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 78% confidence

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (0x100002224 .. 0x1000024ac, 648 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC5startyyKF:
  0x100002224:  fc0f1af8       str      x28, [sp, #-0x60]! ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100002228:  fb6b01a9       stp      x27, x26, [sp, #0x10]
  0x10000222c:  f96302a9       stp      x25, x24, [sp, #0x20]
  0x100002230:  f75b03a9       stp      x23, x22, [sp, #0x30]
  0x100002234:  f44f04a9       stp      x20, x19, [sp, #0x40]
  0x100002238:  fd7b05a9       stp      x29, x30, [sp, #0x50]
  0x10000223c:  fd430191       add      x29, sp, #0x50
  0x100002240:  ff830bd1       sub      sp, sp, #0x2e0
  0x100002244:  f3030091       mov      x19, sp
  0x100002248:  751e00f9       str      x21, [x19, #0x38]
  0x10000224c:  f60314aa       mov      x22, x20
  0x100002250:  280000d0       adrp     x8, #0x100008000
  0x100002254:  081540f9       ldr      x8, [x8, #0x28]
  0x100002258:  080140f9       ldr      x8, [x8]
  0x10000225c:  a8031af8       stur     x8, [x29, #-0x60]
  0x100002260:  000080d2       mov      x0, #0
  0x100002264:  7c0b0094       bl       #0x100005054
  0x100002268:  602200f9       str      x0, [x19, #0x40]
  0x10000226c:  1b805ff8       ldur     x27, [x0, #-8]
  0x100002270:  682340f9       ldr      x8, [x27, #0x40]
  0x100002274:  e90308aa       mov      x9, x8
  0x100002278:  300000d0       adrp     x16, #0x100008000
  0x10000227c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100002280:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002284:  e9030091       mov      x9, sp
  0x100002288:  0a3d0091       add      x10, x8, #0xf
  0x10000228c:  4ced7c92       and      x12, x10, #0xfffffffffffffff0
  0x100002290:  3a010ccb       sub      x26, x9, x12
  0x100002294:  5f030091       mov      sp, x26
  0x100002298:  e90308aa       mov      x9, x8
  0x10000229c:  300000d0       adrp     x16, #0x100008000
  0x1000022a0:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000022a4:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000022a8:  e8030091       mov      x8, sp
  0x1000022ac:  1c010ccb       sub      x28, x8, x12
  0x1000022b0:  9f030091       mov      sp, x28
  0x1000022b4:  410000d0       adrp     x1, #0x10000c000
  0x1000022b8:  21c01c91       add      x1, x1, #0x730 ; _$sSo16CATapDescriptionCML
  0x1000022bc:  420000d0       adrp     x2, #0x10000c000
  0x1000022c0:  42e01491       add      x2, x2, #0x538
  0x1000022c4:  000080d2       mov      x0, #0
  0x1000022c8:  c0090094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x1000022cc:  f40300aa       mov      x20, x0
  0x1000022d0:  200000d0       adrp     x0, #0x100008000
  0x1000022d4:  006441f9       ldr      x0, [x0, #0x2c8]
  0x1000022d8:  9e0b0094       bl       #0x100005150
  0x1000022dc:  f70300aa       mov      x23, x0
  0x1000022e0:  28000090       adrp     x8, #0x100006000
  0x1000022e4:  08412991       add      x8, x8, #0xa50 ; "Codex system audio visualizer"
  0x1000022e8:  088100d1       sub      x8, x8, #0x20
  0x1000022ec:  140141b2       orr      x20, x8, #0x8000000000000000
  0x1000022f0:  a00380d2       mov      x0, #0x1d
  0x1000022f4:  0000faf2       movk     x0, #0xd000, lsl #48
  0x1000022f8:  e10314aa       mov      x1, x20
  0x1000022fc:  770b0094       bl       #0x1000050d8
  0x100002300:  f90300aa       mov      x25, x0
  0x100002304:  e00317aa       mov      x0, x23
  0x100002308:  e20319aa       mov      x2, x25
  0x10000230c:  ed0c0094       bl       #0x1000056c0 ; objc_msgSend -> -[self setName:] // [SME:OBJC-DISPATCH]
  0x100002310:  e00319aa       mov      x0, x25
  0x100002314:  100c0094       bl       #0x100005354
  0x100002318:  e00317aa       mov      x0, x23
  0x10000231c:  22008052       mov      w2, #1
  0x100002320:  f00c0094       bl       #0x1000056e0 ; objc_msgSend -> -[self setPrivate:] // [SME:OBJC-DISPATCH]
  0x100002324:  e00317aa       mov      x0, x23
  0x100002328:  020080d2       mov      x2, #0
  0x10000232c:  dd0c0094       bl       #0x1000056a0 ; objc_msgSend -> -[self setMuteBehavior:] // [SME:OBJC-DISPATCH]
  0x100002330:  c0420091       add      x0, x22, #0x10
  0x100002334:  61820391       add      x1, x19, #0xe0
  0x100002338:  22048052       mov      w2, #0x21
  0x10000233c:  030080d2       mov      x3, #0
  0x100002340:  200c0094       bl       #0x1000053c0
  0x100002344:  e00317aa       mov      x0, x23
  0x100002348:  060c0094       bl       #0x100005360
  0x10000234c:  f70300aa       mov      x23, x0
  0x100002350:  f80316aa       mov      x24, x22
  0x100002354:  c1420091       add      x1, x22, #0x10
  0x100002358:  cc0b0094       bl       #0x100005288
  0x10000235c:  f90300aa       mov      x25, x0
  0x100002360:  60820391       add      x0, x19, #0xe0
  0x100002364:  290c0094       bl       #0x100005408
  0x100002368:  e00317aa       mov      x0, x23
  0x10000236c:  fa0b0094       bl       #0x100005354
  0x100002370:  39020034       cbz      w25, #0x1000023b4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100002374:  a5090094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x100002378:  e10300aa       mov      x1, x0
  0x10000237c:  200000d0       adrp     x0, #0x100008000
  0x100002380:  00002391       add      x0, x0, #0x8c0
  0x100002384:  020080d2       mov      x2, #0
  0x100002388:  03008052       mov      w3, #0
  0x10000238c:  010c0094       bl       #0x100005390
  0x100002390:  f60300aa       mov      x22, x0
  0x100002394:  684c8ed2       mov      x8, #0x7263
  0x100002398:  a82cacf2       movk     x8, #0x6165, lsl #16
  0x10000239c:  88aeccf2       movk     x8, #0x6574, lsl #32
  0x1000023a0:  a885eef2       movk     x8, #0x742d, lsl #48
  0x1000023a4:  89ae8cd2       mov      x9, #0x6574
  0x1000023a8:  0940fdf2       movk     x9, #0xea00, lsl #48
  0x1000023ac:  29b52b91       add      x9, x9, #0xaed
  0x1000023b0:  2a000014       b        #0x100002458
  0x1000023b4:  f6031caa       mov      x22, x28
  0x1000023b8:  7a1a00f9       str      x26, [x19, #0x30]
  0x1000023bc:  7c2240f9       ldr      x28, [x19, #0x40]
  0x1000023c0:  080000f0       adrp     x8, #0x100005000
  0x1000023c4:  004d44fd       ldr      d0, [x8, #0x898]
  0x1000023c8:  602a00fd       str      d0, [x19, #0x50]
  0x1000023cc:  7f5a00b9       str      wzr, [x19, #0x58]
  0x1000023d0:  08058052       mov      w8, #0x28
  0x1000023d4:  684e00b9       str      w8, [x19, #0x4c]
  0x1000023d8:  191340b9       ldr      w25, [x24, #0x10]
  0x1000023dc:  00830091       add      x0, x24, #0x20
  0x1000023e0:  61820391       add      x1, x19, #0xe0
  0x1000023e4:  22048052       mov      w2, #0x21
  0x1000023e8:  030080d2       mov      x3, #0
  0x1000023ec:  f50b0094       bl       #0x1000053c0
  0x1000023f0:  61420191       add      x1, x19, #0x50
  0x1000023f4:  64320191       add      x4, x19, #0x4c
  0x1000023f8:  05830091       add      x5, x24, #0x20
  0x1000023fc:  e00319aa       mov      x0, x25
  0x100002400:  02008052       mov      w2, #0
  0x100002404:  030080d2       mov      x3, #0
  0x100002408:  a90b0094       bl       #0x1000052ac
  0x10000240c:  f90300aa       mov      x25, x0
  0x100002410:  60820391       add      x0, x19, #0xe0
  0x100002414:  fd0b0094       bl       #0x100005408
  0x100002418:  b9040034       cbz      w25, #0x1000024ac
  0x10000241c:  7b090094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x100002420:  e10300aa       mov      x1, x0
  0x100002424:  200000d0       adrp     x0, #0x100008000
  0x100002428:  00002391       add      x0, x0, #0x8c0
  0x10000242c:  020080d2       mov      x2, #0
  0x100002430:  03008052       mov      w3, #0
  0x100002434:  d70b0094       bl       #0x100005390
  0x100002438:  f60300aa       mov      x22, x0
  0x10000243c:  48ae8cd2       mov      x8, #0x6572
  0x100002440:  288cacf2       movk     x8, #0x6461, lsl #16
  0x100002444:  a8c5ccf2       movk     x8, #0x662d, lsl #32
  0x100002448:  e84deef2       movk     x8, #0x726f, lsl #48
  0x10000244c:  a92d8cd2       mov      x9, #0x616d
  0x100002450:  890ea0f2       movk     x9, #0x74, lsl #16
  0x100002454:  0960fdf2       movk     x9, #0xeb00, lsl #48
  0x100002458:  282400a9       stp      x8, x9, [x1]
  0x10000245c:  391000b9       str      w25, [x1, #0x10]
  0x100002460:  f50300aa       mov      x21, x0
  0x100002464:  220c0094       bl       #0x1000054ec
  0x100002468:  e00317aa       mov      x0, x23
  0x10000246c:  ba0b0094       bl       #0x100005354
  0x100002470:  a8035af8       ldur     x8, [x29, #-0x60]
  0x100002474:  290000d0       adrp     x9, #0x100008000
  0x100002478:  291540f9       ldr      x9, [x9, #0x28]
  0x10000247c:  290140f9       ldr      x9, [x9]
  0x100002480:  3f0108eb       cmp      x9, x8
  0x100002484:  212f0054       b.ne     #0x100002a68
  0x100002488:  f50316aa       mov      x21, x22
  0x10000248c:  bf4301d1       sub      sp, x29, #0x50
  0x100002490:  fd7b45a9       ldp      x29, x30, [sp, #0x50]
  0x100002494:  f44f44a9       ldp      x20, x19, [sp, #0x40]
  0x100002498:  f75b43a9       ldp      x23, x22, [sp, #0x30]
  0x10000249c:  f96342a9       ldp      x25, x24, [sp, #0x20]
  0x1000024a0:  fb6b41a9       ldp      x27, x26, [sp, #0x10]
  0x1000024a4:  fc0746f8       ldr      x28, [sp], #0x60
  0x1000024a8:  c0035fd6       ret      

; ── PROCEDURE: flirt_fast_memcpy_vec_24ac (0x1000024ac .. 0x100002a6c, 1472 bytes) ──
flirt_fast_memcpy_vec_24ac:
  0x1000024ac:  082b40b9       ldr      w8, [x24, #0x28] ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x1000024b0:  a96d8c52       mov      w9, #0x636d
  0x1000024b4:  098ead72       movk     w9, #0x6c70, lsl #16
  0x1000024b8:  1f01096b       cmp      w8, w9
  0x1000024bc:  e11a0054       b.ne     #0x100002818 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000024c0:  08b34039       ldrb     w8, [x24, #0x2c]
  0x1000024c4:  a81a0036       tbz      w8, #0, #0x100002818
  0x1000024c8:  084340b9       ldr      w8, [x24, #0x40]
  0x1000024cc:  1f810071       cmp      w8, #0x20
  0x1000024d0:  411a0054       b.ne     #0x100002818
  0x1000024d4:  083f40b9       ldr      w8, [x24, #0x3c]
  0x1000024d8:  1f090071       cmp      w8, #2
  0x1000024dc:  e1190054       b.ne     #0x100002818
  0x1000024e0:  400000d0       adrp     x0, #0x10000c000
  0x1000024e4:  00a01b91       add      x0, x0, #0x6e8 ; _$ss23_ContiguousArrayStorageCySS_yptGMd
  0x1000024e8:  010000f0       adrp     x1, #0x100005000
  0x1000024ec:  21002791       add      x1, x1, #0x9c0 ; _$ss23_ContiguousArrayStorageCySS_yptGMR
  0x1000024f0:  c3030094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000024f4:  601600f9       str      x0, [x19, #0x28]
  0x1000024f8:  61420691       add      x1, x19, #0x190
  0x1000024fc:  de0b0094       bl       #0x100005474
  0x100002500:  f90300aa       mov      x25, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002504:  080000f0       adrp     x8, #0x100005000
  0x100002508:  0029c23d       ldr      q0, [x8, #0x8a0]
  0x10000250c:  c82d8c52       mov      w8, #0x616e
  0x100002510:  a8adac72       movk     w8, #0x656d, lsl #16
  0x100002514:  e90300aa       mov      x9, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002518:  280d02f8       str      x8, [x9, #0x20]!
  0x10000251c:  691200f9       str      x9, [x19, #0x20]
  0x100002520:  0004803d       str      q0, [x0, #0x10]
  0x100002524:  0980fcd2       mov      x9, #-0x1c00000000000000
  0x100002528:  3a0000d0       adrp     x26, #0x100008000
  0x10000252c:  5ad340f9       ldr      x26, [x26, #0x1a0]
  0x100002530:  a80380d2       mov      x8, #0x1d
  0x100002534:  0800faf2       movk     x8, #0xd000, lsl #48
  0x100002538:  09a002a9       stp      x9, x8, [x0, #0x28]
  0x10000253c:  141c00f9       str      x20, [x0, #0x38]
  0x100002540:  a82e8d52       mov      w8, #0x6975
  0x100002544:  880ca072       movk     w8, #0x64, lsl #16
  0x100002548:  1aa004a9       stp      x26, x8, [x0, #0x48]
  0x10000254c:  0860fcd2       mov      x8, #-0x1d00000000000000
  0x100002550:  082c00f9       str      x8, [x0, #0x58]
  0x100002554:  e80316aa       mov      x8, x22
  0x100002558:  bc0a0094       bl       #0x100005048
  0x10000255c:  f40316aa       mov      x20, x22
  0x100002560:  b40a0094       bl       #0x100005030
  0x100002564:  3a3f00f9       str      x26, [x25, #0x78]
  0x100002568:  200706a9       stp      x0, x1, [x25, #0x60]
  0x10000256c:  680740f9       ldr      x8, [x27, #8]
  0x100002570:  680e00f9       str      x8, [x19, #0x18]
  0x100002574:  e00316aa       mov      x0, x22
  0x100002578:  f6031caa       mov      x22, x28
  0x10000257c:  e1031caa       mov      x1, x28
  0x100002580:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002584:  2a0000d0       adrp     x10, #0x100008000
  0x100002588:  4aed40f9       ldr      x10, [x10, #0x1d8]
  0x10000258c:  084e8ed2       mov      x8, #0x7270
  0x100002590:  28cdaef2       movk     x8, #0x7669, lsl #16
  0x100002594:  288ccef2       movk     x8, #0x7461, lsl #32
  0x100002598:  a80ce0f2       movk     x8, #0x65, lsl #48
  0x10000259c:  09e0fcd2       mov      x9, #-0x1900000000000000
  0x1000025a0:  282708a9       stp      x8, x9, [x25, #0x80]
  0x1000025a4:  28008052       mov      w8, #1
  0x1000025a8:  28430239       strb     w8, [x25, #0x90]
  0x1000025ac:  2b008052       mov      w11, #1
  0x1000025b0:  688e8ed2       mov      x8, #0x7473
  0x1000025b4:  286cacf2       movk     x8, #0x6361, lsl #16
  0x1000025b8:  68adccf2       movk     x8, #0x656b, lsl #32
  0x1000025bc:  880ce0f2       movk     x8, #0x64, lsl #48
  0x1000025c0:  2aa30aa9       stp      x10, x8, [x25, #0xa8]
  0x1000025c4:  295f00f9       str      x9, [x25, #0xb8]
  0x1000025c8:  3f030339       strb     wzr, [x25, #0xc0]
  0x1000025cc:  882e8cd2       mov      x8, #0x6174
  0x1000025d0:  082eacf2       movk     x8, #0x6170, lsl #16
  0x1000025d4:  a88ecef2       movk     x8, #0x7475, lsl #32
  0x1000025d8:  e86deef2       movk     x8, #0x736f, lsl #48
  0x1000025dc:  2aa30da9       stp      x10, x8, [x25, #0xd8]
  0x1000025e0:  882e8cd2       mov      x8, #0x6174
  0x1000025e4:  488eaef2       movk     x8, #0x7472, lsl #16
  0x1000025e8:  0880fdf2       movk     x8, #0xec00, lsl #48
  0x1000025ec:  287700f9       str      x8, [x25, #0xe8]
  0x1000025f0:  2bc30339       strb     w11, [x25, #0xf0]
  0x1000025f4:  882e8c52       mov      w8, #0x6174
  0x1000025f8:  086eae72       movk     w8, #0x7370, lsl #16
  0x1000025fc:  2aa310a9       stp      x10, x8, [x25, #0x108]
  0x100002600:  0880fcd2       mov      x8, #-0x1c00000000000000
  0x100002604:  288f00f9       str      x8, [x25, #0x118]
  0x100002608:  400000d0       adrp     x0, #0x10000c000
  0x10000260c:  00e01c91       add      x0, x0, #0x738 ; _$ss23_ContiguousArrayStorageCySDySSypGGMd
  0x100002610:  010000f0       adrp     x1, #0x100005000
  0x100002614:  21c02791       add      x1, x1, #0x9f0 ; _$ss23_ContiguousArrayStorageCySDySSypGGMR
  0x100002618:  79030094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000261c:  01058052       mov      w1, #0x28
  0x100002620:  e2008052       mov      w2, #7
  0x100002624:  5e0b0094       bl       #0x10000539c
  0x100002628:  fb0300aa       mov      x27, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000262c:  080000f0       adrp     x8, #0x100005000
  0x100002630:  002dc23d       ldr      q0, [x8, #0x8b0]
  0x100002634:  0004803d       str      q0, [x0, #0x10]
  0x100002638:  61420491       add      x1, x19, #0x110
  0x10000263c:  601640f9       ldr      x0, [x19, #0x28]
  0x100002640:  8d0b0094       bl       #0x100005474
  0x100002644:  fa0300aa       mov      x26, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002648:  080000f0       adrp     x8, #0x100005000
  0x10000264c:  0031c23d       ldr      q0, [x8, #0x8c0]
  0x100002650:  6002803d       str      q0, [x19]
  0x100002654:  0004803d       str      q0, [x0, #0x10]
  0x100002658:  e90300aa       mov      x9, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000265c:  a82e8d52       mov      w8, #0x6975
  0x100002660:  880ca072       movk     w8, #0x64, lsl #16
  0x100002664:  280d02f8       str      x8, [x9, #0x20]!
  0x100002668:  690a00f9       str      x9, [x19, #0x10]
  0x10000266c:  0860fcd2       mov      x8, #-0x1d00000000000000
  0x100002670:  081400f9       str      x8, [x0, #0x28]
  0x100002674:  e00317aa       mov      x0, x23
  0x100002678:  c20b0094       bl       #0x100005580 ; objc_msgSend -> -[self UUID] // [SME:OBJC-DISPATCH]
  0x10000267c:  fd031daa       mov      x29, x29
  0x100002680:  3b0b0094       bl       #0x10000536c
  0x100002684:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002688:  7c1a40f9       ldr      x28, [x19, #0x30]
  0x10000268c:  e8031caa       mov      x8, x28
  0x100002690:  6b0a0094       bl       #0x10000503c
  0x100002694:  e00314aa       mov      x0, x20
  0x100002698:  2f0b0094       bl       #0x100005354
  0x10000269c:  f4031caa       mov      x20, x28
  0x1000026a0:  640a0094       bl       #0x100005030
  0x1000026a4:  280000d0       adrp     x8, #0x100008000
  0x1000026a8:  08d140f9       ldr      x8, [x8, #0x1a0]
  0x1000026ac:  482700f9       str      x8, [x26, #0x48]
  0x1000026b0:  400703a9       stp      x0, x1, [x26, #0x30]
  0x1000026b4:  e0031caa       mov      x0, x28
  0x1000026b8:  fc0308aa       mov      x28, x8
  0x1000026bc:  e10316aa       mov      x1, x22
  0x1000026c0:  680e40f9       ldr      x8, [x19, #0x18]
  0x1000026c4:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000026c8:  884c8ed2       mov      x8, #0x7264
  0x1000026cc:  28cdacf2       movk     x8, #0x6669, lsl #16
  0x1000026d0:  880ec0f2       movk     x8, #0x74, lsl #32
  0x1000026d4:  09a0fcd2       mov      x9, #-0x1b00000000000000
  0x1000026d8:  482705a9       stp      x8, x9, [x26, #0x50]
  0x1000026dc:  280000d0       adrp     x8, #0x100008000
  0x1000026e0:  08ed40f9       ldr      x8, [x8, #0x1d8]
  0x1000026e4:  483f00f9       str      x8, [x26, #0x78]
  0x1000026e8:  28008052       mov      w8, #1
  0x1000026ec:  48830139       strb     w8, [x26, #0x60]
  0x1000026f0:  e0031aaa       mov      x0, x26
  0x1000026f4:  87070094       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x1000026f8:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000026fc:  e0031aaa       mov      x0, x26
  0x100002700:  690b0094       bl       #0x1000054a4
  0x100002704:  400000d0       adrp     x0, #0x10000c000
  0x100002708:  00201c91       add      x0, x0, #0x708 ; _$sSS_yptMd
  0x10000270c:  010000f0       adrp     x1, #0x100005000
  0x100002710:  21602791       add      x1, x1, #0x9d8 ; _$sSS_yptMR
  0x100002714:  3a030094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100002718:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000271c:  600a40f9       ldr      x0, [x19, #0x10]
  0x100002720:  41008052       mov      w1, #2
  0x100002724:  e20314aa       mov      x2, x20
  0x100002728:  200b0094       bl       #0x1000053a8
  0x10000272c:  761300f9       str      x22, [x27, #0x20]
  0x100002730:  400000d0       adrp     x0, #0x10000c000
  0x100002734:  00001d91       add      x0, x0, #0x740 ; _$sSaySDySSypGGMd
  0x100002738:  010000f0       adrp     x1, #0x100005000
  0x10000273c:  21e02791       add      x1, x1, #0x9f8 ; _$sSaySDySSypGGMR
  0x100002740:  2f030094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100002744:  209f00f9       str      x0, [x25, #0x138]
  0x100002748:  3b9300f9       str      x27, [x25, #0x120]
  0x10000274c:  e00319aa       mov      x0, x25
  0x100002750:  70070094       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100002754:  fa0300aa       mov      x26, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002758:  e00319aa       mov      x0, x25
  0x10000275c:  520b0094       bl       #0x1000054a4
  0x100002760:  601240f9       ldr      x0, [x19, #0x20]
  0x100002764:  c1008052       mov      w1, #6
  0x100002768:  e20314aa       mov      x2, x20
  0x10000276c:  0f0b0094       bl       #0x1000053a8
  0x100002770:  280000d0       adrp     x8, #0x100008000
  0x100002774:  086141f9       ldr      x8, [x8, #0x2c0]
  0x100002778:  230000d0       adrp     x3, #0x100008000
  0x10000277c:  63d440f9       ldr      x3, [x3, #0x1a8]
  0x100002780:  02210091       add      x2, x8, #8
  0x100002784:  e0031aaa       mov      x0, x26
  0x100002788:  e1031caa       mov      x1, x28
  0x10000278c:  500a0094       bl       #0x1000050cc
  0x100002790:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002794:  e0031aaa       mov      x0, x26
  0x100002798:  0d0b0094       bl       #0x1000053cc
  0x10000279c:  00530091       add      x0, x24, #0x14
  0x1000027a0:  61820391       add      x1, x19, #0xe0
  0x1000027a4:  22048052       mov      w2, #0x21
  0x1000027a8:  030080d2       mov      x3, #0
  0x1000027ac:  050b0094       bl       #0x1000053c0
  0x1000027b0:  01530091       add      x1, x24, #0x14
  0x1000027b4:  e00316aa       mov      x0, x22
  0x1000027b8:  b10a0094       bl       #0x10000527c
  0x1000027bc:  f90300aa       mov      x25, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000027c0:  60820391       add      x0, x19, #0xe0
  0x1000027c4:  110b0094       bl       #0x100005408
  0x1000027c8:  e00316aa       mov      x0, x22
  0x1000027cc:  e20a0094       bl       #0x100005354
  0x1000027d0:  99040034       cbz      w25, #0x100002860
  0x1000027d4:  8d080094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x1000027d8:  e10300aa       mov      x1, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000027dc:  200000d0       adrp     x0, #0x100008000
  0x1000027e0:  00002391       add      x0, x0, #0x8c0
  0x1000027e4:  020080d2       mov      x2, #0
  0x1000027e8:  03008052       mov      w3, #0
  0x1000027ec:  e90a0094       bl       #0x100005390
  0x1000027f0:  f60300aa       mov      x22, x0
  0x1000027f4:  684c8ed2       mov      x8, #0x7263
  0x1000027f8:  a82cacf2       movk     x8, #0x6165, lsl #16
  0x1000027fc:  88aeccf2       movk     x8, #0x6574, lsl #32
  0x100002800:  a885ecf2       movk     x8, #0x642d, lsl #48
  0x100002804:  a9cc8ed2       mov      x9, #0x7665
  0x100002808:  296dacf2       movk     x9, #0x6369, lsl #16
  0x10000280c:  a90cc0f2       movk     x9, #0x65, lsl #32
  0x100002810:  09a0fdf2       movk     x9, #0xed00, lsl #48
  0x100002814:  11ffff17       b        #0x100002458
  0x100002818:  28000090       adrp     x8, #0x100006000
  0x10000281c:  08c12991       add      x8, x8, #0xa70 ; "unsupported-format"
  0x100002820:  088100d1       sub      x8, x8, #0x20
  0x100002824:  140141b2       orr      x20, x8, #0x8000000000000000
  0x100002828:  78080094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x10000282c:  e10300aa       mov      x1, x0
  0x100002830:  200000d0       adrp     x0, #0x100008000
  0x100002834:  00002391       add      x0, x0, #0x8c0
  0x100002838:  020080d2       mov      x2, #0
  0x10000283c:  03008052       mov      w3, #0
  0x100002840:  d40a0094       bl       #0x100005390
  0x100002844:  f60300aa       mov      x22, x0
  0x100002848:  a80380d2       mov      x8, #0x1d
  0x10000284c:  0800faf2       movk     x8, #0xd000, lsl #48
  0x100002850:  082d00d1       sub      x8, x8, #0xb
  0x100002854:  285000a9       stp      x8, x20, [x1]
  0x100002858:  3f1000b9       str      wzr, [x1, #0x10]
  0x10000285c:  01ffff17       b        #0x100002460
  0x100002860:  76820391       add      x22, x19, #0xe0
  0x100002864:  191740b9       ldr      w25, [x24, #0x14]
  0x100002868:  1a2740f9       ldr      x26, [x24, #0x48]
  0x10000286c:  200000d0       adrp     x0, #0x100008000
  0x100002870:  00201f91       add      x0, x0, #0x7c8
  0x100002874:  01038052       mov      w1, #0x18
  0x100002878:  e2008052       mov      w2, #7
  0x10000287c:  c80a0094       bl       #0x10000539c
  0x100002880:  f50300aa       mov      x21, x0
  0x100002884:  00400091       add      x0, x0, #0x10
  0x100002888:  e10318aa       mov      x1, x24
  0x10000288c:  120b0094       bl       #0x1000054d4
  0x100002890:  080000d0       adrp     x8, #0x100004000
  0x100002894:  08b12991       add      x8, x8, #0xa6c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC5startyyKFySPySo0C9TimeStampVG_SPySo0C10BufferListVGAHSpyAJGAHtcfU_TA
  0x100002898:  c85602a9       stp      x8, x21, [x22, #0x20]
  0x10000289c:  280000d0       adrp     x8, #0x100008000
  0x1000028a0:  080940f9       ldr      x8, [x8, #0x10]
  0x1000028a4:  c80200f9       str      x8, [x22]
  0x1000028a8:  080000f0       adrp     x8, #0x100005000
  0x1000028ac:  004944fd       ldr      d0, [x8, #0x890]
  0x1000028b0:  c00600fd       str      d0, [x22, #8]
  0x1000028b4:  080000b0       adrp     x8, #0x100003000
  0x1000028b8:  08712091       add      x8, x8, #0x81c ; _$sSPySo14AudioTimeStampVGSPySo0A10BufferListVGACSpyAEGACIegyyyyy_AcfcgCIeyByyyyy_TR
  0x1000028bc:  290000d0       adrp     x9, #0x100008000
  0x1000028c0:  29811f91       add      x9, x9, #0x7e0 ; _block_descriptor.18
  0x1000028c4:  c82601a9       stp      x8, x9, [x22, #0x10]
  0x1000028c8:  60820391       add      x0, x19, #0xe0
  0x1000028cc:  7b0a0094       bl       #0x1000052b8
  0x1000028d0:  fc0300aa       mov      x28, x0
  0x1000028d4:  c01640f9       ldr      x0, [x22, #0x28]
  0x1000028d8:  ed0a0094       bl       #0x10000548c
  0x1000028dc:  00630091       add      x0, x24, #0x18
  0x1000028e0:  61820391       add      x1, x19, #0xe0
  0x1000028e4:  22048052       mov      w2, #0x21
  0x1000028e8:  030080d2       mov      x3, #0
  0x1000028ec:  b50a0094       bl       #0x1000053c0
  0x1000028f0:  00630091       add      x0, x24, #0x18
  0x1000028f4:  e10319aa       mov      x1, x25
  0x1000028f8:  e2031aaa       mov      x2, x26
  0x1000028fc:  e3031caa       mov      x3, x28
  0x100002900:  530a0094       bl       #0x10000524c
  0x100002904:  f90300aa       mov      x25, x0
  0x100002908:  60820391       add      x0, x19, #0xe0
  0x10000290c:  bf0a0094       bl       #0x100005408
  0x100002910:  e0031caa       mov      x0, x28
  0x100002914:  6c0a0094       bl       #0x1000052c4
  0x100002918:  59020034       cbz      w25, #0x100002960
  0x10000291c:  3b080094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x100002920:  e10300aa       mov      x1, x0
  0x100002924:  200000d0       adrp     x0, #0x100008000
  0x100002928:  00002391       add      x0, x0, #0x8c0
  0x10000292c:  020080d2       mov      x2, #0
  0x100002930:  03008052       mov      w3, #0
  0x100002934:  970a0094       bl       #0x100005390
  0x100002938:  f60300aa       mov      x22, x0
  0x10000293c:  684c8ed2       mov      x8, #0x7263
  0x100002940:  a82cacf2       movk     x8, #0x6165, lsl #16
  0x100002944:  88aeccf2       movk     x8, #0x6574, lsl #32
  0x100002948:  a865ecf2       movk     x8, #0x632d, lsl #48
  0x10000294c:  298c8dd2       mov      x9, #0x6c61
  0x100002950:  894dacf2       movk     x9, #0x626c, lsl #16
  0x100002954:  296cccf2       movk     x9, #0x6361, lsl #32
  0x100002958:  69edfdf2       movk     x9, #0xef6b, lsl #48
  0x10000295c:  bffeff17       b        #0x100002458
  0x100002960:  004341b8       ldur     w0, [x24, #0x14]
  0x100002964:  018341f8       ldur     x1, [x24, #0x18]
  0x100002968:  3f0a0094       bl       #0x100005264
  0x10000296c:  e0010034       cbz      w0, #0x1000029a8
  0x100002970:  f90300aa       mov      x25, x0
  0x100002974:  25080094       bl       #0x100004a08 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl
  0x100002978:  e10300aa       mov      x1, x0
  0x10000297c:  200000d0       adrp     x0, #0x100008000
  0x100002980:  00002391       add      x0, x0, #0x8c0
  0x100002984:  020080d2       mov      x2, #0
  0x100002988:  03008052       mov      w3, #0
  0x10000298c:  810a0094       bl       #0x100005390
  0x100002990:  f60300aa       mov      x22, x0
  0x100002994:  688e8ed2       mov      x8, #0x7473
  0x100002998:  284caef2       movk     x8, #0x7261, lsl #16
  0x10000299c:  880ec0f2       movk     x8, #0x74, lsl #32
  0x1000029a0:  09a0fcd2       mov      x9, #-0x1b00000000000000
  0x1000029a4:  adfeff17       b        #0x100002458
  0x1000029a8:  61820191       add      x1, x19, #0x60
  0x1000029ac:  601640f9       ldr      x0, [x19, #0x28]
  0x1000029b0:  b10a0094       bl       #0x100005474
  0x1000029b4:  f90300aa       mov      x25, x0
  0x1000029b8:  6002c03d       ldr      q0, [x19]
  0x1000029bc:  0004803d       str      q0, [x0, #0x10]
  0x1000029c0:  882e8f52       mov      w8, #0x7974
  0x1000029c4:  08aeac72       movk     w8, #0x6570, lsl #16
  0x1000029c8:  fa0300aa       mov      x26, x0
  0x1000029cc:  480f02f8       str      x8, [x26, #0x20]!
  0x1000029d0:  0880fcd2       mov      x8, #-0x1c00000000000000
  0x1000029d4:  49ae8cd2       mov      x9, #0x6572
  0x1000029d8:  298cacf2       movk     x9, #0x6461, lsl #16
  0x1000029dc:  290fc0f2       movk     x9, #0x79, lsl #32
  0x1000029e0:  08a402a9       stp      x8, x9, [x0, #0x28]
  0x1000029e4:  08a0fcd2       mov      x8, #-0x1b00000000000000
  0x1000029e8:  081c00f9       str      x8, [x0, #0x38]
  0x1000029ec:  682e8cd2       mov      x8, #0x6173
  0x1000029f0:  a80daef2       movk     x8, #0x706d, lsl #16
  0x1000029f4:  88adccf2       movk     x8, #0x656c, lsl #32
  0x1000029f8:  482aecf2       movk     x8, #0x6152, lsl #48
  0x1000029fc:  290000d0       adrp     x9, #0x100008000
  0x100002a00:  29d140f9       ldr      x9, [x9, #0x1a0]
  0x100002a04:  09a004a9       stp      x9, x8, [x0, #0x48]
  0x100002a08:  88ae8cd2       mov      x8, #0x6574
  0x100002a0c:  0840fdf2       movk     x8, #0xea00, lsl #48
  0x100002a10:  082c00f9       str      x8, [x0, #0x58]
  0x100002a14:  000342fc       ldur     d0, [x24, #0x20]
  0x100002a18:  280000d0       adrp     x8, #0x100008000
  0x100002a1c:  08f140f9       ldr      x8, [x8, #0x1e0]
  0x100002a20:  083c00f9       str      x8, [x0, #0x78]
  0x100002a24:  003000fd       str      d0, [x0, #0x60]
  0x100002a28:  ba060094       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100002a2c:  f80300aa       mov      x24, x0
  0x100002a30:  e00319aa       mov      x0, x25
  0x100002a34:  9c0a0094       bl       #0x1000054a4
  0x100002a38:  e0031aaa       mov      x0, x26
  0x100002a3c:  41008052       mov      w1, #2
  0x100002a40:  e20314aa       mov      x2, x20
  0x100002a44:  590a0094       bl       #0x1000053a8
  0x100002a48:  e00318aa       mov      x0, x24
  0x100002a4c:  68fdff97       bl       #0x100001fec ; _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF
  0x100002a50:  e00318aa       mov      x0, x24
  0x100002a54:  5e0a0094       bl       #0x1000053cc
  0x100002a58:  e00317aa       mov      x0, x23
  0x100002a5c:  3e0a0094       bl       #0x100005354
  0x100002a60:  761e40f9       ldr      x22, [x19, #0x38]
  0x100002a64:  83feff17       b        #0x100002470
  0x100002a68:  1a0a0094       bl       #0x1000052d0

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop() (0x100002a6c .. 0x100002b20, 180 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF:
  0x100002a6c:  ff0302d1       sub      sp, sp, #0x80 ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100002a70:  f44f06a9       stp      x20, x19, [sp, #0x60]
  0x100002a74:  fd7b07a9       stp      x29, x30, [sp, #0x70]
  0x100002a78:  fdc30191       add      x29, sp, #0x70
  0x100002a7c:  80620091       add      x0, x20, #0x18
  0x100002a80:  a1a300d1       sub      x1, x29, #0x28
  0x100002a84:  22008052       mov      w2, #1
  0x100002a88:  030080d2       mov      x3, #0
  0x100002a8c:  4d0a0094       bl       #0x1000053c0
  0x100002a90:  930e40f9       ldr      x19, [x20, #0x18]
  0x100002a94:  b30100b4       cbz      x19, #0x100002ac8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100002a98:  80520091       add      x0, x20, #0x14
  0x100002a9c:  e1030091       mov      x1, sp
  0x100002aa0:  020080d2       mov      x2, #0
  0x100002aa4:  030080d2       mov      x3, #0
  0x100002aa8:  460a0094       bl       #0x1000053c0
  0x100002aac:  801640b9       ldr      w0, [x20, #0x14]
  0x100002ab0:  e10313aa       mov      x1, x19
  0x100002ab4:  ef090094       bl       #0x100005270
  0x100002ab8:  801640b9       ldr      w0, [x20, #0x14]
  0x100002abc:  e10313aa       mov      x1, x19
  0x100002ac0:  e6090094       bl       #0x100005258
  0x100002ac4:  9f0e00f9       str      xzr, [x20, #0x18]
  0x100002ac8:  80520091       add      x0, x20, #0x14
  0x100002acc:  e1c30091       add      x1, sp, #0x30
  0x100002ad0:  22008052       mov      w2, #1
  0x100002ad4:  030080d2       mov      x3, #0
  0x100002ad8:  3a0a0094       bl       #0x1000053c0
  0x100002adc:  801640b9       ldr      w0, [x20, #0x14]
  0x100002ae0:  60000034       cbz      w0, #0x100002aec
  0x100002ae4:  ec090094       bl       #0x100005294
  0x100002ae8:  9f4201b8       stur     wzr, [x20, #0x14]
  0x100002aec:  80420091       add      x0, x20, #0x10
  0x100002af0:  e1630091       add      x1, sp, #0x18
  0x100002af4:  22008052       mov      w2, #1
  0x100002af8:  030080d2       mov      x3, #0
  0x100002afc:  310a0094       bl       #0x1000053c0
  0x100002b00:  801240b9       ldr      w0, [x20, #0x10]
  0x100002b04:  60000034       cbz      w0, #0x100002b10
  0x100002b08:  e6090094       bl       #0x1000052a0
  0x100002b0c:  9f0201b8       stur     wzr, [x20, #0x10]
  0x100002b10:  fd7b47a9       ldp      x29, x30, [sp, #0x70]
  0x100002b14:  f44f46a9       ldp      x20, x19, [sp, #0x60]
  0x100002b18:  ff030291       add      sp, sp, #0x80
  0x100002b1c:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain() (0x100002b20 .. 0x100002b24, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVs5ErrorAAsAEP7_domainSSvgTW:
  0x100002b20:  bf090014       b        #0x10000521c

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code() (0x100002b24 .. 0x100002b28, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVs5ErrorAAsAEP5_codeSivgTW:
  0x100002b24:  bb090014       b        #0x100005210

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo() (0x100002b28 .. 0x100002b2c, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVs5ErrorAAsAEP9_userInfoyXlSgvgTW:
  0x100002b28:  c0090014       b        #0x100005228

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError() (0x100002b2c .. 0x100002b30, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVs5ErrorAAsAEP19_getEmbeddedNSErroryXlSgyFTW:
  0x100002b2c:  b6090014       b        #0x100005204

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (0x100002b30 .. 0x100003184, 1620 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfc:
  0x100002b30:  fc6fbaa9       stp      x28, x27, [sp, #-0x60]! ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100002b34:  fa6701a9       stp      x26, x25, [sp, #0x10]
  0x100002b38:  f85f02a9       stp      x24, x23, [sp, #0x20]
  0x100002b3c:  f65703a9       stp      x22, x21, [sp, #0x30]
  0x100002b40:  f44f04a9       stp      x20, x19, [sp, #0x40]
  0x100002b44:  fd7b05a9       stp      x29, x30, [sp, #0x50]
  0x100002b48:  fd430191       add      x29, sp, #0x50
  0x100002b4c:  ff8302d1       sub      sp, sp, #0xa0
  0x100002b50:  f30314aa       mov      x19, x20
  0x100002b54:  000080d2       mov      x0, #0
  0x100002b58:  45090094       bl       #0x10000506c
  0x100002b5c:  08805ff8       ldur     x8, [x0, #-8]
  0x100002b60:  a88332a9       stp      x8, x0, [x29, #-0xd8]
  0x100002b64:  082140f9       ldr      x8, [x8, #0x40]
  0x100002b68:  e90308aa       mov      x9, x8
  0x100002b6c:  300000d0       adrp     x16, #0x100008000
  0x100002b70:  100e40f9       ldr      x16, [x16, #0x18]
  0x100002b74:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002b78:  e9030091       mov      x9, sp
  0x100002b7c:  083d0091       add      x8, x8, #0xf
  0x100002b80:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100002b84:  280108cb       sub      x8, x9, x8
  0x100002b88:  a80312f8       stur     x8, [x29, #-0xe0]
  0x100002b8c:  1f010091       mov      sp, x8
  0x100002b90:  000080d2       mov      x0, #0
  0x100002b94:  75090094       bl       #0x100005168
  0x100002b98:  08805ff8       ldur     x8, [x0, #-8]
  0x100002b9c:  a88336a9       stp      x8, x0, [x29, #-0x98]
  0x100002ba0:  082140f9       ldr      x8, [x8, #0x40]
  0x100002ba4:  e90308aa       mov      x9, x8
  0x100002ba8:  300000d0       adrp     x16, #0x100008000
  0x100002bac:  100e40f9       ldr      x16, [x16, #0x18]
  0x100002bb0:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002bb4:  e9030091       mov      x9, sp
  0x100002bb8:  083d0091       add      x8, x8, #0xf
  0x100002bbc:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100002bc0:  280108cb       sub      x8, x9, x8
  0x100002bc4:  a80316f8       stur     x8, [x29, #-0xa0]
  0x100002bc8:  1f010091       mov      sp, x8
  0x100002bcc:  000080d2       mov      x0, #0
  0x100002bd0:  63090094       bl       #0x10000515c
  0x100002bd4:  f50300aa       mov      x21, x0
  0x100002bd8:  340000d0       adrp     x20, #0x100008000
  0x100002bdc:  941e42f9       ldr      x20, [x20, #0x438]
  0x100002be0:  08805ff8       ldur     x8, [x0, #-8]
  0x100002be4:  082140f9       ldr      x8, [x8, #0x40]
  0x100002be8:  e90308aa       mov      x9, x8
  0x100002bec:  300000d0       adrp     x16, #0x100008000
  0x100002bf0:  100e40f9       ldr      x16, [x16, #0x18]
  0x100002bf4:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002bf8:  e9030091       mov      x9, sp
  0x100002bfc:  083d0091       add      x8, x8, #0xf
  0x100002c00:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100002c04:  3c0108cb       sub      x28, x9, x8
  0x100002c08:  9f030091       mov      sp, x28
  0x100002c0c:  000080d2       mov      x0, #0
  0x100002c10:  1d090094       bl       #0x100005084
  0x100002c14:  08805ff8       ldur     x8, [x0, #-8]
  0x100002c18:  a80331a9       stp      x8, x0, [x29, #-0xf0]
  0x100002c1c:  082140f9       ldr      x8, [x8, #0x40]
  0x100002c20:  e90308aa       mov      x9, x8
  0x100002c24:  300000d0       adrp     x16, #0x100008000
  0x100002c28:  100e40f9       ldr      x16, [x16, #0x18]
  0x100002c2c:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002c30:  e9030091       mov      x9, sp
  0x100002c34:  083d0091       add      x8, x8, #0xf
  0x100002c38:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100002c3c:  3a0108cb       sub      x26, x9, x8
  0x100002c40:  5f030091       mov      sp, x26
  0x100002c44:  7f7e01a9       stp      xzr, xzr, [x19, #0x10]
  0x100002c48:  00e4006f       movi     v0.2d, #0000000000000000
  0x100002c4c:  600201ad       stp      q0, q0, [x19, #0x20]
  0x100002c50:  7f2200f9       str      xzr, [x19, #0x40]
  0x100002c54:  410000d0       adrp     x1, #0x10000c000
  0x100002c58:  21201591       add      x1, x1, #0x548 ; _$sSo17OS_dispatch_queueCML
  0x100002c5c:  420000d0       adrp     x2, #0x10000c000
  0x100002c60:  42601491       add      x2, x2, #0x518
  0x100002c64:  000080d2       mov      x0, #0
  0x100002c68:  58070094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100002c6c:  fb0300aa       mov      x27, x0
  0x100002c70:  a08313f8       stur     x0, [x29, #-0xc8]
  0x100002c74:  28000090       adrp     x8, #0x100006000
  0x100002c78:  08412a91       add      x8, x8, #0xa90 ; "com.openai.codex.system-audio-spectrum"
  0x100002c7c:  088100d1       sub      x8, x8, #0x20
  0x100002c80:  a88315f8       stur     x8, [x29, #-0xa8]
  0x100002c84:  e8031aaa       mov      x8, x26
  0x100002c88:  fc080094       bl       #0x100005078
  0x100002c8c:  390000d0       adrp     x25, #0x100008000
  0x100002c90:  396741f9       ldr      x25, [x25, #0x2c8]
  0x100002c94:  b98317f8       stur     x25, [x29, #-0x88]
  0x100002c98:  400000d0       adrp     x0, #0x10000c000
  0x100002c9c:  00c01d91       add      x0, x0, #0x770 ; _$sSo17OS_dispatch_queueC8DispatchE10AttributesVAEs10SetAlgebraACWL
  0x100002ca0:  220000d0       adrp     x2, #0x100008000
  0x100002ca4:  422442f9       ldr      x2, [x2, #0x448]
  0x100002ca8:  e10314aa       mov      x1, x20
  0x100002cac:  b2070094       bl       #0x100004b74 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm
  0x100002cb0:  f70300aa       mov      x23, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002cb4:  a00315f8       stur     x0, [x29, #-0xb0]
  0x100002cb8:  540000d0       adrp     x20, #0x10000c000
  0x100002cbc:  94e21d91       add      x20, x20, #0x778 ; _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMd
  0x100002cc0:  160000f0       adrp     x22, #0x100005000
  0x100002cc4:  d6822891       add      x22, x22, #0xa20 ; _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGMR
  0x100002cc8:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002ccc:  e10316aa       mov      x1, x22
  0x100002cd0:  cb010094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100002cd4:  f80300aa       mov      x24, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002cd8:  a08314f8       stur     x0, [x29, #-0xb8]
  0x100002cdc:  400000d0       adrp     x0, #0x10000c000
  0x100002ce0:  00001e91       add      x0, x0, #0x780 ; _$sSaySo17OS_dispatch_queueC8DispatchE10AttributesVGSayxGSTsWL
  0x100002ce4:  230000d0       adrp     x3, #0x100008000
  0x100002ce8:  63e840f9       ldr      x3, [x3, #0x1d0]
  0x100002cec:  e10314aa       mov      x1, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002cf0:  e20316aa       mov      x2, x22
  0x100002cf4:  b0070094       bl       #0x100004bb4 ; _$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm
  0x100002cf8:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002cfc:  a00314f8       stur     x0, [x29, #-0xc0]
  0x100002d00:  a02302d1       sub      x0, x29, #0x88
  0x100002d04:  e8031caa       mov      x8, x28
  0x100002d08:  e10318aa       mov      x1, x24
  0x100002d0c:  f40315aa       mov      x20, x21
  0x100002d10:  e30315aa       mov      x3, x21
  0x100002d14:  e40317aa       mov      x4, x23
  0x100002d18:  32090094       bl       #0x1000051e0
  0x100002d1c:  280000d0       adrp     x8, #0x100008000
  0x100002d20:  082942f9       ldr      x8, [x8, #0x450]
  0x100002d24:  170140b9       ldr      w23, [x8]
  0x100002d28:  b42376a9       ldp      x20, x8, [x29, #-0xa0]
  0x100002d2c:  163540f9       ldr      x22, [x8, #0x68]
  0x100002d30:  e00314aa       mov      x0, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002d34:  e10317aa       mov      x1, x23
  0x100002d38:  a20357f8       ldur     x2, [x29, #-0x90]
  0x100002d3c:  c0023fd6       blr      x22 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002d40:  a88355f8       ldur     x8, [x29, #-0xa8]
  0x100002d44:  010141b2       orr      x1, x8, #0x8000000000000000
  0x100002d48:  c00480d2       mov      x0, #0x26
  0x100002d4c:  0000faf2       movk     x0, #0xd000, lsl #48
  0x100002d50:  e2031aaa       mov      x2, x26
  0x100002d54:  e3031caa       mov      x3, x28
  0x100002d58:  f8031caa       mov      x24, x28
  0x100002d5c:  e40314aa       mov      x4, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002d60:  fc0314aa       mov      x28, x20 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002d64:  050080d2       mov      x5, #0
  0x100002d68:  f4031baa       mov      x20, x27
  0x100002d6c:  08090094       bl       #0x10000518c
  0x100002d70:  602600f9       str      x0, [x19, #0x48]
  0x100002d74:  410000d0       adrp     x1, #0x10000c000
  0x100002d78:  21001591       add      x1, x1, #0x540 ; _$sSo18OS_dispatch_sourceCML
  0x100002d7c:  420000d0       adrp     x2, #0x10000c000
  0x100002d80:  42401491       add      x2, x2, #0x510
  0x100002d84:  000080d2       mov      x0, #0
  0x100002d88:  10070094       bl       #0x1000049c8 ; _$sSo18OS_dispatch_sourceCMaTm
  0x100002d8c:  a08316f8       stur     x0, [x29, #-0x98]
  0x100002d90:  28000090       adrp     x8, #0x100006000
  0x100002d94:  08012b91       add      x8, x8, #0xac0 ; "com.openai.codex.system-audio-spectrum.output"
  0x100002d98:  1b8100d1       sub      x27, x8, #0x20
  0x100002d9c:  e8031aaa       mov      x8, x26
  0x100002da0:  b6080094       bl       #0x100005078
  0x100002da4:  b98317f8       stur     x25, [x29, #-0x88]
  0x100002da8:  a02302d1       sub      x0, x29, #0x88
  0x100002dac:  e80318aa       mov      x8, x24
  0x100002db0:  a20774a9       ldp      x2, x1, [x29, #-0xc0]
  0x100002db4:  f40315aa       mov      x20, x21
  0x100002db8:  e30315aa       mov      x3, x21
  0x100002dbc:  a40355f8       ldur     x4, [x29, #-0xb0]
  0x100002dc0:  08090094       bl       #0x1000051e0
  0x100002dc4:  e0031caa       mov      x0, x28
  0x100002dc8:  e10317aa       mov      x1, x23
  0x100002dcc:  a20357f8       ldur     x2, [x29, #-0x90]
  0x100002dd0:  c0023fd6       blr      x22 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100002dd4:  c80480d2       mov      x8, #0x26
  0x100002dd8:  0800faf2       movk     x8, #0xd000, lsl #48
  0x100002ddc:  001d0091       add      x0, x8, #7
  0x100002de0:  610341b2       orr      x1, x27, #0x8000000000000000
  0x100002de4:  e2031aaa       mov      x2, x26
  0x100002de8:  e30318aa       mov      x3, x24
  0x100002dec:  e4031caa       mov      x4, x28
  0x100002df0:  050080d2       mov      x5, #0
  0x100002df4:  b48353f8       ldur     x20, [x29, #-0xc8]
  0x100002df8:  e5080094       bl       #0x10000518c
  0x100002dfc:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002e00:  b48356f8       ldur     x20, [x29, #-0x98]
  0x100002e04:  e8080094       bl       #0x1000051a4
  0x100002e08:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002e0c:  e00315aa       mov      x0, x21
  0x100002e10:  51090094       bl       #0x100005354
  0x100002e14:  742a00f9       str      x20, [x19, #0x50]
  0x100002e18:  480000d0       adrp     x8, #0x10000c000
  0x100002e1c:  008542f9       ldr      x0, [x8, #0x508]
  0x100002e20:  47090094       bl       #0x10000533c
  0x100002e24:  ff090094       bl       #0x100005620 ; objc_msgSend -> -[self init] // [SME:OBJC-DISPATCH]
  0x100002e28:  60fe05a9       stp      x0, xzr, [x19, #0x58]
  0x100002e2c:  480000d0       adrp     x8, #0x10000c000
  0x100002e30:  08016239       ldrb     w8, [x8, #0x880]
  0x100002e34:  1f010071       cmp      w8, #0
  0x100002e38:  68018052       mov      w8, #0xb
  0x100002e3c:  00119f9a       csel     x0, x8, xzr, ne
  0x100002e40:  01008052       mov      w1, #0
  0x100002e44:  ad090094       bl       #0x1000054f8
  0x100002e48:  e01900b4       cbz      x0, #0x100003184 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100002e4c:  603600f9       str      x0, [x19, #0x68]
  0x100002e50:  480000d0       adrp     x8, #0x10000c000
  0x100002e54:  17216239       ldrb     w23, [x8, #0x888]
  0x100002e58:  ff060071       cmp      w23, #1
  0x100002e5c:  21090054       b.ne     #0x100002f80
  0x100002e60:  340000d0       adrp     x20, #0x100008000
  0x100002e64:  94f640f9       ldr      x20, [x20, #0x1e8]
  0x100002e68:  18008152       mov      w24, #0x800
  0x100002e6c:  00008152       mov      w0, #0x800
  0x100002e70:  e10314aa       mov      x1, x20
  0x100002e74:  a5080094       bl       #0x100005108
  0x100002e78:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002e7c:  180800f9       str      x24, [x0, #0x10]
  0x100002e80:  00800091       add      x0, x0, #0x20
  0x100002e84:  01008452       mov      w1, #0x2000
  0x100002e88:  15090094       bl       #0x1000052dc
  0x100002e8c:  400000d0       adrp     x0, #0x10000c000
  0x100002e90:  00a01d91       add      x0, x0, #0x768 ; _$sSaySfGMd
  0x100002e94:  010000f0       adrp     x1, #0x100005000
  0x100002e98:  21602891       add      x1, x1, #0xa18 ; _$sSaySfGMR
  0x100002e9c:  58010094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100002ea0:  e10300aa       mov      x1, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002ea4:  56008052       mov      w22, #2
  0x100002ea8:  40008052       mov      w0, #2
  0x100002eac:  97080094       bl       #0x100005108
  0x100002eb0:  160800f9       str      x22, [x0, #0x10]
  0x100002eb4:  155402a9       stp      x21, x21, [x0, #0x20]
  0x100002eb8:  603a00f9       str      x0, [x19, #0x70]
  0x100002ebc:  e00315aa       mov      x0, x21
  0x100002ec0:  46090094       bl       #0x1000053d8
  0x100002ec4:  00008152       mov      w0, #0x800
  0x100002ec8:  e10314aa       mov      x1, x20
  0x100002ecc:  8f080094       bl       #0x100005108
  0x100002ed0:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002ed4:  180800f9       str      x24, [x0, #0x10]
  0x100002ed8:  00800091       add      x0, x0, #0x20
  0x100002edc:  01008452       mov      w1, #0x2000
  0x100002ee0:  ff080094       bl       #0x1000052dc
  0x100002ee4:  f50313aa       mov      x21, x19
  0x100002ee8:  b68e07f8       str      x22, [x21, #0x78]!
  0x100002eec:  18808052       mov      w24, #0x400
  0x100002ef0:  00808052       mov      w0, #0x400
  0x100002ef4:  e10314aa       mov      x1, x20
  0x100002ef8:  84080094       bl       #0x100005108
  0x100002efc:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002f00:  180800f9       str      x24, [x0, #0x10]
  0x100002f04:  00800091       add      x0, x0, #0x20
  0x100002f08:  01008252       mov      w1, #0x1000
  0x100002f0c:  f4080094       bl       #0x1000052dc
  0x100002f10:  b60600f9       str      x22, [x21, #8]
  0x100002f14:  00808052       mov      w0, #0x400
  0x100002f18:  e10314aa       mov      x1, x20
  0x100002f1c:  7b080094       bl       #0x100005108
  0x100002f20:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002f24:  180800f9       str      x24, [x0, #0x10]
  0x100002f28:  00800091       add      x0, x0, #0x20
  0x100002f2c:  01008252       mov      w1, #0x1000
  0x100002f30:  eb080094       bl       #0x1000052dc
  0x100002f34:  b60a00f9       str      x22, [x21, #0x10]
  0x100002f38:  00808052       mov      w0, #0x400
  0x100002f3c:  e10314aa       mov      x1, x20
  0x100002f40:  72080094       bl       #0x100005108
  0x100002f44:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002f48:  180800f9       str      x24, [x0, #0x10]
  0x100002f4c:  00800091       add      x0, x0, #0x20
  0x100002f50:  01008252       mov      w1, #0x1000
  0x100002f54:  e2080094       bl       #0x1000052dc
  0x100002f58:  b60e00f9       str      x22, [x21, #0x18]
  0x100002f5c:  00808052       mov      w0, #0x400
  0x100002f60:  e10314aa       mov      x1, x20
  0x100002f64:  69080094       bl       #0x100005108
  0x100002f68:  f90300aa       mov      x25, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002f6c:  180800f9       str      x24, [x0, #0x10]
  0x100002f70:  00800091       add      x0, x0, #0x20
  0x100002f74:  01008252       mov      w1, #0x1000
  0x100002f78:  d9080094       bl       #0x1000052dc
  0x100002f7c:  13000014       b        #0x100002fc8
  0x100002f80:  400000d0       adrp     x0, #0x10000c000
  0x100002f84:  00a01d91       add      x0, x0, #0x768 ; _$sSaySfGMd
  0x100002f88:  010000f0       adrp     x1, #0x100005000
  0x100002f8c:  21602891       add      x1, x1, #0xa18 ; _$sSaySfGMR
  0x100002f90:  1b010094       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100002f94:  e10300aa       mov      x1, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100002f98:  54008052       mov      w20, #2
  0x100002f9c:  40008052       mov      w0, #2
  0x100002fa0:  5a080094       bl       #0x100005108
  0x100002fa4:  140800f9       str      x20, [x0, #0x10]
  0x100002fa8:  196402a9       stp      x25, x25, [x0, #0x20]
  0x100002fac:  f50313aa       mov      x21, x19
  0x100002fb0:  b98e07f8       str      x25, [x21, #0x78]!
  0x100002fb4:  a0821ff8       stur     x0, [x21, #-8]
  0x100002fb8:  b9e600a9       stp      x25, x25, [x21, #8]
  0x100002fbc:  b90e00f9       str      x25, [x21, #0x18]
  0x100002fc0:  e00319aa       mov      x0, x25
  0x100002fc4:  05090094       bl       #0x1000053d8
  0x100002fc8:  7f7e0aa9       stp      xzr, xzr, [x19, #0xa0]
  0x100002fcc:  794e00f9       str      x25, [x19, #0x98]
  0x100002fd0:  a12302d1       sub      x1, x29, #0x88
  0x100002fd4:  e00315aa       mov      x0, x21
  0x100002fd8:  22048052       mov      w2, #0x21
  0x100002fdc:  030080d2       mov      x3, #0
  0x100002fe0:  f8080094       bl       #0x1000053c0
  0x100002fe4:  743e40f9       ldr      x20, [x19, #0x78]
  0x100002fe8:  e00314aa       mov      x0, x20
  0x100002fec:  25090094       bl       #0x100005480
  0x100002ff0:  743e00f9       str      x20, [x19, #0x78]
  0x100002ff4:  20010037       tbnz     w0, #0, #0x100003018
  0x100002ff8:  810a40f9       ldr      x1, [x20, #0x10]
  0x100002ffc:  240000d0       adrp     x4, #0x100008000
  0x100003000:  848041f9       ldr      x4, [x4, #0x300]
  0x100003004:  00008052       mov      w0, #0
  0x100003008:  02008052       mov      w2, #0
  0x10000300c:  e30314aa       mov      x3, x20
  0x100003010:  fd040094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x100003014:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003018:  ff020071       cmp      w23, #0
  0x10000301c:  08008152       mov      w8, #0x800
  0x100003020:  15119f9a       csel     x21, x8, xzr, ne
  0x100003024:  743e00f9       str      x20, [x19, #0x78]
  0x100003028:  e00314aa       mov      x0, x20
  0x10000302c:  eb080094       bl       #0x1000053d8
  0x100003030:  80820091       add      x0, x20, #0x20
  0x100003034:  e10315aa       mov      x1, x21
  0x100003038:  42008052       mov      w2, #2
  0x10000303c:  3b090094       bl       #0x100005528
  0x100003040:  a02302d1       sub      x0, x29, #0x88
  0x100003044:  f1080094       bl       #0x100005408
  0x100003048:  e00314aa       mov      x0, x20
  0x10000304c:  e0080094       bl       #0x1000053cc
  0x100003050:  742a40f9       ldr      x20, [x19, #0x50]
  0x100003054:  e00314aa       mov      x0, x20
  0x100003058:  fb080094       bl       #0x100005444
  0x10000305c:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003060:  200000b0       adrp     x0, #0x100008000
  0x100003064:  00201f91       add      x0, x0, #0x7c8
  0x100003068:  01038052       mov      w1, #0x18
  0x10000306c:  e2008052       mov      w2, #7
  0x100003070:  cb080094       bl       #0x10000539c
  0x100003074:  f50300aa       mov      x21, x0
  0x100003078:  00400091       add      x0, x0, #0x10
  0x10000307c:  e10313aa       mov      x1, x19
  0x100003080:  15090094       bl       #0x1000054d4
  0x100003084:  080000b0       adrp     x8, #0x100004000
  0x100003088:  08e12f91       add      x8, x8, #0xbf8 ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfcyycfU_TA
  0x10000308c:  a8d739a9       stp      x8, x21, [x29, #-0x68]
  0x100003090:  280000b0       adrp     x8, #0x100008000
  0x100003094:  080940f9       ldr      x8, [x8, #0x10]
  0x100003098:  a88317f8       stur     x8, [x29, #-0x88]
  0x10000309c:  080000d0       adrp     x8, #0x100005000
  0x1000030a0:  004944fd       ldr      d0, [x8, #0x890]
  0x1000030a4:  a00318fc       stur     d0, [x29, #-0x80]
  0x1000030a8:  e8ffffd0       adrp     x8, #0x100001000
  0x1000030ac:  08912791       add      x8, x8, #0x9e4 ; _$sIeg_IeyB_TR
  0x1000030b0:  290000b0       adrp     x9, #0x100008000
  0x1000030b4:  29c12091       add      x9, x9, #0x830 ; _block_descriptor.28
  0x1000030b8:  a8a738a9       stp      x8, x9, [x29, #-0x78]
  0x1000030bc:  a02302d1       sub      x0, x29, #0x88
  0x1000030c0:  7e080094       bl       #0x1000052b8
  0x1000030c4:  f70300aa       mov      x23, x0
  0x1000030c8:  e00315aa       mov      x0, x21
  0x1000030cc:  f3080094       bl       #0x100005498
  0x1000030d0:  e8031aaa       mov      x8, x26
  0x1000030d4:  e9070094       bl       #0x100005078
  0x1000030d8:  b80352f8       ldur     x24, [x29, #-0xe0]
  0x1000030dc:  e80318aa       mov      x8, x24
  0x1000030e0:  e00316aa       mov      x0, x22
  0x1000030e4:  4bfaff97       bl       #0x100001a10 ; _$sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtFfA0_
  0x1000030e8:  e0031aaa       mov      x0, x26
  0x1000030ec:  e10318aa       mov      x1, x24
  0x1000030f0:  e20317aa       mov      x2, x23
  0x1000030f4:  e30316aa       mov      x3, x22
  0x1000030f8:  2e080094       bl       #0x1000051b0
  0x1000030fc:  e00317aa       mov      x0, x23
  0x100003100:  71080094       bl       #0x1000052c4
  0x100003104:  a88772a9       ldp      x8, x1, [x29, #-0xd8]
  0x100003108:  080540f9       ldr      x8, [x8, #8]
  0x10000310c:  e00318aa       mov      x0, x24
  0x100003110:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100003114:  a80771a9       ldp      x8, x1, [x29, #-0xf0]
  0x100003118:  080540f9       ldr      x8, [x8, #8]
  0x10000311c:  e0031aaa       mov      x0, x26
  0x100003120:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100003124:  b4035af8       ldur     x20, [x29, #-0x60]
  0x100003128:  e00315aa       mov      x0, x21
  0x10000312c:  d8080094       bl       #0x10000548c
  0x100003130:  e00314aa       mov      x0, x20
  0x100003134:  d6080094       bl       #0x10000548c
  0x100003138:  742a40f9       ldr      x20, [x19, #0x50]
  0x10000313c:  e00314aa       mov      x0, x20
  0x100003140:  c1080094       bl       #0x100005444
  0x100003144:  f50300aa       mov      x21, x0
  0x100003148:  e00314aa       mov      x0, x20
  0x10000314c:  dc080094       bl       #0x1000054bc
  0x100003150:  e00315aa       mov      x0, x21
  0x100003154:  1d080094       bl       #0x1000051c8
  0x100003158:  e00314aa       mov      x0, x20
  0x10000315c:  d5080094       bl       #0x1000054b0
  0x100003160:  e00313aa       mov      x0, x19
  0x100003164:  bf4301d1       sub      sp, x29, #0x50
  0x100003168:  fd7b45a9       ldp      x29, x30, [sp, #0x50]
  0x10000316c:  f44f44a9       ldp      x20, x19, [sp, #0x40]
  0x100003170:  f65743a9       ldp      x22, x21, [sp, #0x30]
  0x100003174:  f85f42a9       ldp      x24, x23, [sp, #0x20]
  0x100003178:  fa6741a9       ldp      x26, x25, [sp, #0x10]
  0x10000317c:  fc6fc6a8       ldp      x28, x27, [sp], #0x60
  0x100003180:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_100003184 (0x100003184 .. 0x100003188, 4 bytes) ──
sme_runtime_helper_100003184:
  0x100003184:  200020d4       brk      #1

; ── PROCEDURE: _block_copy_helper (0x100003188 .. 0x10000319c, 20 bytes) ──
_block_copy_helper:
  0x100003188:  281440f9       ldr      x8, [x1, #0x28] ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x10000318c:  2008c03d       ldr      q0, [x1, #0x20]
  0x100003190:  0008803d       str      q0, [x0, #0x20]
  0x100003194:  e00308aa       mov      x0, x8
  0x100003198:  c0080014       b        #0x100005498

; ── PROCEDURE: _block_destroy_helper (0x10000319c .. 0x1000031a4, 8 bytes) ──
_block_destroy_helper:
  0x10000319c:  001440f9       ldr      x0, [x0, #0x28] ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x1000031a0:  bb080014       b        #0x10000548c

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (0x1000031a4 .. 0x100003258, 180 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCfD:
  0x1000031a4:  f657bda9       stp      x22, x21, [sp, #-0x30]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 99% confidence
  0x1000031a8:  f44f01a9       stp      x20, x19, [sp, #0x10]
  0x1000031ac:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x1000031b0:  fd830091       add      x29, sp, #0x20
  0x1000031b4:  f30314aa       mov      x19, x20
  0x1000031b8:  2dfeff97       bl       #0x100002a6c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF
  0x1000031bc:  942a40f9       ldr      x20, [x20, #0x50]
  0x1000031c0:  e00314aa       mov      x0, x20
  0x1000031c4:  a0080094       bl       #0x100005444
  0x1000031c8:  f50300aa       mov      x21, x0
  0x1000031cc:  e00314aa       mov      x0, x20
  0x1000031d0:  bb080094       bl       #0x1000054bc
  0x1000031d4:  e00315aa       mov      x0, x21
  0x1000031d8:  f9070094       bl       #0x1000051bc
  0x1000031dc:  e00314aa       mov      x0, x20
  0x1000031e0:  b4080094       bl       #0x1000054b0
  0x1000031e4:  603640f9       ldr      x0, [x19, #0x68]
  0x1000031e8:  ca080094       bl       #0x100005510
  0x1000031ec:  602640f9       ldr      x0, [x19, #0x48]
  0x1000031f0:  59080094       bl       #0x100005354
  0x1000031f4:  602a40f9       ldr      x0, [x19, #0x50]
  0x1000031f8:  ae080094       bl       #0x1000054b0
  0x1000031fc:  602e40f9       ldr      x0, [x19, #0x58]
  0x100003200:  55080094       bl       #0x100005354
  0x100003204:  603240f9       ldr      x0, [x19, #0x60]
  0x100003208:  71080094       bl       #0x1000053cc
  0x10000320c:  603a40f9       ldr      x0, [x19, #0x70]
  0x100003210:  6f080094       bl       #0x1000053cc
  0x100003214:  603e40f9       ldr      x0, [x19, #0x78]
  0x100003218:  6d080094       bl       #0x1000053cc
  0x10000321c:  604240f9       ldr      x0, [x19, #0x80]
  0x100003220:  6b080094       bl       #0x1000053cc
  0x100003224:  604640f9       ldr      x0, [x19, #0x88]
  0x100003228:  69080094       bl       #0x1000053cc
  0x10000322c:  604a40f9       ldr      x0, [x19, #0x90]
  0x100003230:  67080094       bl       #0x1000053cc
  0x100003234:  604e40f9       ldr      x0, [x19, #0x98]
  0x100003238:  65080094       bl       #0x1000053cc
  0x10000323c:  e00313aa       mov      x0, x19
  0x100003240:  01168052       mov      w1, #0xb0
  0x100003244:  e2008052       mov      w2, #7
  0x100003248:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x10000324c:  f44f41a9       ldp      x20, x19, [sp, #0x10]
  0x100003250:  f657c3a8       ldp      x22, x21, [sp], #0x30
  0x100003254:  64080014       b        #0x1000053e4

; ── PROCEDURE: ___swift_noop_void_return (0x100003258 .. 0x10000325c, 4 bytes) ──
___swift_noop_void_return:
  0x100003258:  c0035fd6       ret      

; ── PROCEDURE: ___swift_memcpy40_8 (0x10000325c .. 0x100003270, 20 bytes) ──
___swift_memcpy40_8:
  0x10000325c:  200440ad       ldp      q0, q1, [x1] ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100003260:  281040f9       ldr      x8, [x1, #0x20]
  0x100003264:  081000f9       str      x8, [x0, #0x20]
  0x100003268:  000400ad       stp      q0, q1, [x0]
  0x10000326c:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioStreamBasicDescription() (0x100003270 .. 0x100003288, 24 bytes) ──
_$sSo27AudioStreamBasicDescriptionVwet:
  0x100003270:  c1000034       cbz      w1, #0x100003288 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100003274:  08a04039       ldrb     w8, [x0, #0x28]
  0x100003278:  88000034       cbz      w8, #0x100003288
  0x10000327c:  080040b9       ldr      w8, [x0]
  0x100003280:  00050011       add      w0, w8, #1
  0x100003284:  c0035fd6       ret      

; ── PROCEDURE: neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi (0x100003288 .. 0x100003290, 8 bytes) ──
neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi:
  0x100003288:  00008052       mov      w0, #0
  0x10000328c:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioStreamBasicDescription() (0x100003290 .. 0x1000032c4, 52 bytes) ──
_$sSo27AudioStreamBasicDescriptionVwst:
  0x100003290:  21010034       cbz      w1, #0x1000032b4 ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x100003294:  00e4006f       movi     v0.2d, #0000000000000000
  0x100003298:  0080803c       stur     q0, [x0, #8]
  0x10000329c:  28040051       sub      w8, w1, #1
  0x1000032a0:  0080813c       stur     q0, [x0, #0x18]
  0x1000032a4:  080000f9       str      x8, [x0]
  0x1000032a8:  c2000034       cbz      w2, #0x1000032c0
  0x1000032ac:  28008052       mov      w8, #1
  0x1000032b0:  03000014       b        #0x1000032bc
  0x1000032b4:  62000034       cbz      w2, #0x1000032c0
  0x1000032b8:  08008052       mov      w8, #0
  0x1000032bc:  08a00039       strb     w8, [x0, #0x28]
  0x1000032c0:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioStreamBasicDescription() (0x1000032c4 .. 0x1000032d8, 20 bytes) ──
_$sSo27AudioStreamBasicDescriptionVMa:
  0x1000032c4:  410000b0       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x1000032c8:  21401b91       add      x1, x1, #0x6d0 ; _$sSo27AudioStreamBasicDescriptionVML
  0x1000032cc:  220000b0       adrp     x2, #0x100008000
  0x1000032d0:  42c01791       add      x2, x2, #0x5f0
  0x1000032d4:  29070014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: ___swift_memcpy24_8 (0x1000032d8 .. 0x1000032ec, 20 bytes) ──
___swift_memcpy24_8:
  0x1000032d8:  2000c03d       ldr      q0, [x1]
  0x1000032dc:  280840f9       ldr      x8, [x1, #0x10]
  0x1000032e0:  080800f9       str      x8, [x0, #0x10]
  0x1000032e4:  0000803d       str      q0, [x0]
  0x1000032e8:  c0035fd6       ret      

; ── PROCEDURE: flirt_string_length_scan_32ec (0x1000032ec .. 0x100003304, 24 bytes) ──
flirt_string_length_scan_32ec:
  0x1000032ec:  c1000034       cbz      w1, #0x100003304 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x1000032f0:  08604039       ldrb     w8, [x0, #0x18]
  0x1000032f4:  88000034       cbz      w8, #0x100003304
  0x1000032f8:  080040b9       ldr      w8, [x0]
  0x1000032fc:  00050011       add      w0, w8, #1
  0x100003300:  c0035fd6       ret      

; ── PROCEDURE: neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi (0x100003304 .. 0x10000330c, 8 bytes) ──
neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi:
  0x100003304:  00008052       mov      w0, #0
  0x100003308:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioBufferList() (0x10000330c .. 0x100003338, 44 bytes) ──
_$sSo15AudioBufferListVwst:
  0x10000330c:  e1000034       cbz      w1, #0x100003328 ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x100003310:  28040051       sub      w8, w1, #1
  0x100003314:  1ffc00a9       stp      xzr, xzr, [x0, #8]
  0x100003318:  080000f9       str      x8, [x0]
  0x10000331c:  c2000034       cbz      w2, #0x100003334
  0x100003320:  28008052       mov      w8, #1
  0x100003324:  03000014       b        #0x100003330
  0x100003328:  62000034       cbz      w2, #0x100003334
  0x10000332c:  08008052       mov      w8, #0
  0x100003330:  08600039       strb     w8, [x0, #0x18]
  0x100003334:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioBufferList() (0x100003338 .. 0x100003378, 64 bytes) ──
_$sSo15AudioBufferListVMa:
  0x100003338:  410000b0       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 99% confidence
  0x10000333c:  21601b91       add      x1, x1, #0x6d8 ; _$sSo15AudioBufferListVML
  0x100003340:  220000b0       adrp     x2, #0x100008000
  0x100003344:  42401a91       add      x2, x2, #0x690
  0x100003348:  0c070014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm
  0x10000334c:  f44fbea9       stp      x20, x19, [sp, #-0x20]!
  0x100003350:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100003354:  fd430091       add      x29, sp, #0x10
  0x100003358:  330040f9       ldr      x19, [x1] ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000335c:  130000f9       str      x19, [x0]
  0x100003360:  e00313aa       mov      x0, x19
  0x100003364:  4d080094       bl       #0x100005498
  0x100003368:  60420091       add      x0, x19, #0x10
  0x10000336c:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100003370:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100003374:  c0035fd6       ret      

; ── PROCEDURE: ___swift_memcpy64_8 (0x100003378 .. 0x10000338c, 20 bytes) ──
___swift_memcpy64_8:
  0x100003378:  200440ad       ldp      q0, q1, [x1] ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x10000337c:  220c41ad       ldp      q2, q3, [x1, #0x20]
  0x100003380:  020c01ad       stp      q2, q3, [x0, #0x20]
  0x100003384:  000400ad       stp      q0, q1, [x0]
  0x100003388:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioTimeStamp() (0x10000338c .. 0x1000033a4, 24 bytes) ──
_$sSo14AudioTimeStampVwet:
  0x10000338c:  c1000034       cbz      w1, #0x1000033a4 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100003390:  08004139       ldrb     w8, [x0, #0x40]
  0x100003394:  88000034       cbz      w8, #0x1000033a4
  0x100003398:  080040b9       ldr      w8, [x0]
  0x10000339c:  00050011       add      w0, w8, #1
  0x1000033a0:  c0035fd6       ret      

; ── PROCEDURE: neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi (0x1000033a4 .. 0x1000033ac, 8 bytes) ──
neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi:
  0x1000033a4:  00008052       mov      w0, #0
  0x1000033a8:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioTimeStamp() (0x1000033ac .. 0x1000033e8, 60 bytes) ──
_$sSo14AudioTimeStampVwst:
  0x1000033ac:  61010034       cbz      w1, #0x1000033d8 ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x1000033b0:  28040051       sub      w8, w1, #1
  0x1000033b4:  1f1c00f9       str      xzr, [x0, #0x38]
  0x1000033b8:  00e4006f       movi     v0.2d, #0000000000000000
  0x1000033bc:  0080823c       stur     q0, [x0, #0x28]
  0x1000033c0:  0080813c       stur     q0, [x0, #0x18]
  0x1000033c4:  0080803c       stur     q0, [x0, #8]
  0x1000033c8:  080000f9       str      x8, [x0]
  0x1000033cc:  c2000034       cbz      w2, #0x1000033e4
  0x1000033d0:  28008052       mov      w8, #1
  0x1000033d4:  03000014       b        #0x1000033e0
  0x1000033d8:  62000034       cbz      w2, #0x1000033e4
  0x1000033dc:  08008052       mov      w8, #0
  0x1000033e0:  08000139       strb     w8, [x0, #0x40]
  0x1000033e4:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioTimeStamp() (0x1000033e8 .. 0x1000033fc, 20 bytes) ──
_$sSo14AudioTimeStampVMa:
  0x1000033e8:  410000b0       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x1000033ec:  21801b91       add      x1, x1, #0x6e0 ; _$sSo14AudioTimeStampVML
  0x1000033f0:  220000b0       adrp     x2, #0x100008000
  0x1000033f4:  42401c91       add      x2, x2, #0x710
  0x1000033f8:  e0060014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: ___swift_instantiateConcreteTypeFromMangledNameV2 (0x1000033fc .. 0x10000344c, 80 bytes) ──
___swift_instantiateConcreteTypeFromMangledNameV2:
  0x1000033fc:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] swift_bridge_object_retain (libswiftCore.dylib) — 99% confidence
  0x100003400:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100003404:  fd430091       add      x29, sp, #0x10
  0x100003408:  f30300aa       mov      x19, x0
  0x10000340c:  000040f9       ldr      x0, [x0]
  0x100003410:  08004092       and      x8, x0, #1
  0x100003414:  1f0000f1       cmp      x0, #0
  0x100003418:  001940fa       ccmp     x8, #0, #0, ne
  0x10000341c:  20010054       b.eq     #0x100003440 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100003420:  290040f9       ldr      x9, [x1]
  0x100003424:  28fd6093       asr      x8, x9, #0x20
  0x100003428:  20c0298b       add      x0, x1, w9, sxtw
  0x10000342c:  e10308aa       mov      x1, x8
  0x100003430:  020080d2       mov      x2, #0
  0x100003434:  030080d2       mov      x3, #0
  0x100003438:  06080094       bl       #0x100005450
  0x10000343c:  600200f9       str      x0, [x19]
  0x100003440:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100003444:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100003448:  c0035fd6       ret      

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::consume() (0x10000344c .. 0x1000035d4, 392 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC7consumeyySPySo0C10BufferListVGF:
  0x10000344c:  e923b96d       stp      d9, d8, [sp, #-0x70]! ; [FLIRT] memmove_overlap_safe (libsystem_platform.dylib) — 99% confidence
  0x100003450:  fc6f01a9       stp      x28, x27, [sp, #0x10]
  0x100003454:  fa6702a9       stp      x26, x25, [sp, #0x20]
  0x100003458:  f85f03a9       stp      x24, x23, [sp, #0x30]
  0x10000345c:  f65704a9       stp      x22, x21, [sp, #0x40]
  0x100003460:  f44f05a9       stp      x20, x19, [sp, #0x50]
  0x100003464:  fd7b06a9       stp      x29, x30, [sp, #0x60]
  0x100003468:  fd830191       add      x29, sp, #0x60
  0x10000346c:  ff4302d1       sub      sp, sp, #0x90
  0x100003470:  f30314aa       mov      x19, x20
  0x100003474:  f80300aa       mov      x24, x0
  0x100003478:  400000b0       adrp     x0, #0x10000c000
  0x10000347c:  00201d91       add      x0, x0, #0x748 ; _$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGMd
  0x100003480:  010000d0       adrp     x1, #0x100005000
  0x100003484:  21002891       add      x1, x1, #0xa00 ; _$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGMR
  0x100003488:  ddffff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000348c:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003490:  08805ff8       ldur     x8, [x0, #-8]
  0x100003494:  092140f9       ldr      x9, [x8, #0x40]
  0x100003498:  283d0091       add      x8, x9, #0xf
  0x10000349c:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x1000034a0:  300000b0       adrp     x16, #0x100008000
  0x1000034a4:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000034a8:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000034ac:  e9030091       mov      x9, sp
  0x1000034b0:  360108cb       sub      x22, x9, x8
  0x1000034b4:  df020091       mov      sp, x22
  0x1000034b8:  000080d2       mov      x0, #0
  0x1000034bc:  fe060094       bl       #0x1000050b4
  0x1000034c0:  f70300aa       mov      x23, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000034c4:  390000b0       adrp     x25, #0x100008000
  0x1000034c8:  39e741f9       ldr      x25, [x25, #0x3c8]
  0x1000034cc:  08805ff8       ldur     x8, [x0, #-8]
  0x1000034d0:  a88313f8       stur     x8, [x29, #-0xc8]
  0x1000034d4:  082140f9       ldr      x8, [x8, #0x40]
  0x1000034d8:  e90308aa       mov      x9, x8
  0x1000034dc:  300000b0       adrp     x16, #0x100008000
  0x1000034e0:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000034e4:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000034e8:  e9030091       mov      x9, sp
  0x1000034ec:  083d0091       add      x8, x8, #0xf
  0x1000034f0:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x1000034f4:  340108cb       sub      x20, x9, x8
  0x1000034f8:  9f020091       mov      sp, x20
  0x1000034fc:  e80314aa       mov      x8, x20
  0x100003500:  e00318aa       mov      x0, x24
  0x100003504:  ef060094       bl       #0x1000050c0
  0x100003508:  400000b0       adrp     x0, #0x10000c000
  0x10000350c:  00401d91       add      x0, x0, #0x750 ; _$s9CoreAudio013UnsafeMutableB17BufferListPointerVACSlAAWL
  0x100003510:  220000b0       adrp     x2, #0x100008000
  0x100003514:  42ec41f9       ldr      x2, [x2, #0x3d8]
  0x100003518:  e10319aa       mov      x1, x25
  0x10000351c:  96050094       bl       #0x100004b74 ; _$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm
  0x100003520:  f90300aa       mov      x25, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003524:  a8c301d1       sub      x8, x29, #0x70
  0x100003528:  e00317aa       mov      x0, x23
  0x10000352c:  e10319aa       mov      x1, x25
  0x100003530:  fc060094       bl       #0x100005120
  0x100003534:  a84302d1       sub      x8, x29, #0x90
  0x100003538:  e00317aa       mov      x0, x23
  0x10000353c:  e10319aa       mov      x1, x25
  0x100003540:  fb060094       bl       #0x10000512c
  0x100003544:  a80359f8       ldur     x8, [x29, #-0x70]
  0x100003548:  a90357f8       ldur     x9, [x29, #-0x90]
  0x10000354c:  1f0109eb       cmp      x8, x9
  0x100003550:  61000054       b.ne     #0x10000355c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100003554:  f50314aa       mov      x21, x20
  0x100003558:  11000014       b        #0x10000359c
  0x10000355c:  b50313f8       stur     x21, [x29, #-0xd0]
  0x100003560:  a04302d1       sub      x0, x29, #0x90
  0x100003564:  a1c301d1       sub      x1, x29, #0x70
  0x100003568:  e20317aa       mov      x2, x23
  0x10000356c:  e30319aa       mov      x3, x25
  0x100003570:  f5060094       bl       #0x100005144
  0x100003574:  e80300aa       mov      x8, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003578:  38544029       ldp      w24, w21, [x1]
  0x10000357c:  a04302d1       sub      x0, x29, #0x90
  0x100003580:  01008052       mov      w1, #0
  0x100003584:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100003588:  1f030071       cmp      w24, #0
  0x10000358c:  a87e0253       lsr      w8, w21, #2
  0x100003590:  0213487a       ccmp     w24, w8, #2, ne
  0x100003594:  f50314aa       mov      x21, x20
  0x100003598:  e9010054       b.ls     #0x1000035d4
  0x10000359c:  a88353f8       ldur     x8, [x29, #-0xc8]
  0x1000035a0:  080540f9       ldr      x8, [x8, #8]
  0x1000035a4:  e00315aa       mov      x0, x21
  0x1000035a8:  e10317aa       mov      x1, x23
  0x1000035ac:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000035b0:  bf8301d1       sub      sp, x29, #0x60
  0x1000035b4:  fd7b46a9       ldp      x29, x30, [sp, #0x60]
  0x1000035b8:  f44f45a9       ldp      x20, x19, [sp, #0x50]
  0x1000035bc:  f65744a9       ldp      x22, x21, [sp, #0x40]
  0x1000035c0:  f85f43a9       ldp      x24, x23, [sp, #0x30]
  0x1000035c4:  fa6742a9       ldp      x26, x25, [sp, #0x20]
  0x1000035c8:  fc6f41a9       ldp      x28, x27, [sp, #0x10]
  0x1000035cc:  e923c76c       ldp      d9, d8, [sp], #0x70
  0x1000035d0:  c0035fd6       ret      

; ── PROCEDURE: flirt_fast_memcpy_vec_35d4 (0x1000035d4 .. 0x10000381c, 584 bytes) ──
flirt_fast_memcpy_vec_35d4:
  0x1000035d4:  bf0316f8       stur     xzr, [x29, #-0xa0] ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x1000035d8:  0a0080d2       mov      x10, #0
  0x1000035dc:  490000b0       adrp     x9, #0x10000c000
  0x1000035e0:  29216239       ldrb     w9, [x9, #0x888]
  0x1000035e4:  3f010071       cmp      w9, #0
  0x1000035e8:  09008152       mov      w9, #0x800
  0x1000035ec:  29119f9a       csel     x9, x9, xzr, ne
  0x1000035f0:  a9d731a9       stp      x9, x21, [x29, #-0xe8]
  0x1000035f4:  0809d81a       udiv     w8, w8, w24
  0x1000035f8:  b7db34a9       stp      x23, x22, [x29, #-0xb8]
  0x1000035fc:  b90314f8       stur     x25, [x29, #-0xc0]
  0x100003600:  a80311f8       stur     x8, [x29, #-0xf0]
  0x100003604:  5f0108eb       cmp      x10, x8
  0x100003608:  62100054       b.hs     #0x100003814 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x10000360c:  4a050091       add      x10, x10, #1
  0x100003610:  aa8312f8       stur     x10, [x29, #-0xd8]
  0x100003614:  a88353f8       ldur     x8, [x29, #-0xc8]
  0x100003618:  080940f9       ldr      x8, [x8, #0x10]
  0x10000361c:  e00316aa       mov      x0, x22
  0x100003620:  e10315aa       mov      x1, x21
  0x100003624:  e20317aa       mov      x2, x23
  0x100003628:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x10000362c:  a80353f8       ldur     x8, [x29, #-0xd0]
  0x100003630:  1a2580b9       ldrsw    x26, [x8, #0x24]
  0x100003634:  c8021a8b       add      x8, x22, x26
  0x100003638:  f40315aa       mov      x20, x21
  0x10000363c:  e00317aa       mov      x0, x23
  0x100003640:  e10319aa       mov      x1, x25
  0x100003644:  b7060094       bl       #0x100005120
  0x100003648:  150080d2       mov      x21, #0
  0x10000364c:  ba8315f8       stur     x26, [x29, #-0xa8]
  0x100003650:  09000014       b        #0x100003674
  0x100003654:  a04302d1       sub      x0, x29, #0x90
  0x100003658:  6c070094       bl       #0x100005408
  0x10000365c:  b7db74a9       ldp      x23, x22, [x29, #-0xb8]
  0x100003660:  b90354f8       ldur     x25, [x29, #-0xc0]
  0x100003664:  ba8355f8       ldur     x26, [x29, #-0xa8]
  0x100003668:  bc8356f8       ldur     x28, [x29, #-0x98]
  0x10000366c:  b5021cab       adds     x21, x21, x28
  0x100003670:  060d0054       b.vs     #0x100003810
  0x100003674:  a84302d1       sub      x8, x29, #0x90
  0x100003678:  f40316aa       mov      x20, x22
  0x10000367c:  e00317aa       mov      x0, x23
  0x100003680:  e10319aa       mov      x1, x25
  0x100003684:  aa060094       bl       #0x10000512c
  0x100003688:  c86a7af8       ldr      x8, [x22, x26]
  0x10000368c:  a90357f8       ldur     x9, [x29, #-0x90]
  0x100003690:  1f0109eb       cmp      x8, x9
  0x100003694:  e0080054       b.eq     #0x1000037b0
  0x100003698:  a04302d1       sub      x0, x29, #0x90
  0x10000369c:  c1021a8b       add      x1, x22, x26
  0x1000036a0:  f40316aa       mov      x20, x22
  0x1000036a4:  e20317aa       mov      x2, x23
  0x1000036a8:  e30319aa       mov      x3, x25
  0x1000036ac:  a6060094       bl       #0x100005144
  0x1000036b0:  e80300aa       mov      x8, x0
  0x1000036b4:  3c0040b9       ldr      w28, [x1]
  0x1000036b8:  380440f9       ldr      x24, [x1, #8]
  0x1000036bc:  a04302d1       sub      x0, x29, #0x90
  0x1000036c0:  01008052       mov      w1, #0
  0x1000036c4:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000036c8:  c0021a8b       add      x0, x22, x26
  0x1000036cc:  e10317aa       mov      x1, x23
  0x1000036d0:  e20319aa       mov      x2, x25
  0x1000036d4:  99060094       bl       #0x100005138
  0x1000036d8:  bcfcff34       cbz      w28, #0x10000366c
  0x1000036dc:  60c20191       add      x0, x19, #0x70
  0x1000036e0:  a14302d1       sub      x1, x29, #0x90
  0x1000036e4:  22048052       mov      w2, #0x21
  0x1000036e8:  030080d2       mov      x3, #0
  0x1000036ec:  35070094       bl       #0x1000053c0
  0x1000036f0:  a80356f8       ldur     x8, [x29, #-0xa0]
  0x1000036f4:  19611c9b       madd     x25, x8, x28, x24
  0x1000036f8:  bc8316f8       stur     x28, [x29, #-0x98]
  0x1000036fc:  fb0315aa       mov      x27, x21
  0x100003700:  765240f9       ldr      x22, [x19, #0xa0]
  0x100003704:  780000b4       cbz      x24, #0x100003710
  0x100003708:  280340bd       ldr      s8, [x25]
  0x10000370c:  02000014       b        #0x100003714
  0x100003710:  08e4006f       movi     v8.2d, #0000000000000000
  0x100003714:  740247f8       ldur     x20, [x19, #0x70]
  0x100003718:  e00314aa       mov      x0, x20
  0x10000371c:  59070094       bl       #0x100005480
  0x100003720:  740207f8       stur     x20, [x19, #0x70]
  0x100003724:  e0020036       tbz      w0, #0, #0x100003780
  0x100003728:  d506f8b7       tbnz     x21, #0x3f, #0x100003800
  0x10000372c:  880a40f9       ldr      x8, [x20, #0x10]
  0x100003730:  7f0308eb       cmp      x27, x8
  0x100003734:  82060054       b.hs     #0x100003804
  0x100003738:  970e1b8b       add      x23, x20, x27, lsl #3
  0x10000373c:  fa1240f9       ldr      x26, [x23, #0x20]
  0x100003740:  e0031aaa       mov      x0, x26
  0x100003744:  4f070094       bl       #0x100005480
  0x100003748:  fa1200f9       str      x26, [x23, #0x20]
  0x10000374c:  60020036       tbz      w0, #0, #0x100003798
  0x100003750:  d605f8b7       tbnz     x22, #0x3f, #0x100003808
  0x100003754:  480b40f9       ldr      x8, [x26, #0x10]
  0x100003758:  df0208eb       cmp      x22, x8
  0x10000375c:  82050054       b.hs     #0x10000380c
  0x100003760:  480b168b       add      x8, x26, x22, lsl #2
  0x100003764:  082100bd       str      s8, [x8, #0x20]
  0x100003768:  740207f8       stur     x20, [x19, #0x70]
  0x10000376c:  39130091       add      x25, x25, #4
  0x100003770:  7b070091       add      x27, x27, #1
  0x100003774:  9c0700f1       subs     x28, x28, #1
  0x100003778:  41fcff54       b.ne     #0x100003700
  0x10000377c:  b6ffff17       b        #0x100003654
  0x100003780:  e00314aa       mov      x0, x20
  0x100003784:  12030094       bl       #0x1000043cc ; _$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSaySfG_Tg5
  0x100003788:  f40300aa       mov      x20, x0
  0x10000378c:  600207f8       stur     x0, [x19, #0x70]
  0x100003790:  f5fcffb6       tbz      x21, #0x3f, #0x10000372c
  0x100003794:  1b000014       b        #0x100003800
  0x100003798:  e0031aaa       mov      x0, x26
  0x10000379c:  01030094       bl       #0x1000043a0 ; _$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSf_Tg5
  0x1000037a0:  fa0300aa       mov      x26, x0
  0x1000037a4:  e01200f9       str      x0, [x23, #0x20]
  0x1000037a8:  76fdffb6       tbz      x22, #0x3f, #0x100003754
  0x1000037ac:  17000014       b        #0x100003808
  0x1000037b0:  e00316aa       mov      x0, x22
  0x1000037b4:  c4040094       bl       #0x100004ac4 ; _$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGWOh
  0x1000037b8:  685240f9       ldr      x8, [x19, #0xa0]
  0x1000037bc:  080500b1       adds     x8, x8, #1
  0x1000037c0:  c6020054       b.vs     #0x100003818
  0x1000037c4:  685200f9       str      x8, [x19, #0xa0]
  0x1000037c8:  a9d771a9       ldp      x9, x21, [x29, #-0xe8]
  0x1000037cc:  1f0109eb       cmp      x8, x9
  0x1000037d0:  81000054       b.ne     #0x1000037e0
  0x1000037d4:  f40313aa       mov      x20, x19
  0x1000037d8:  2d000094       bl       #0x10000388c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC07publishD0yyF
  0x1000037dc:  7f5200f9       str      xzr, [x19, #0xa0]
  0x1000037e0:  a80356f8       ldur     x8, [x29, #-0xa0]
  0x1000037e4:  08110091       add      x8, x8, #4
  0x1000037e8:  a80316f8       stur     x8, [x29, #-0xa0]
  0x1000037ec:  aa8352f8       ldur     x10, [x29, #-0xd8]
  0x1000037f0:  a80351f8       ldur     x8, [x29, #-0xf0]
  0x1000037f4:  5f0108eb       cmp      x10, x8
  0x1000037f8:  61f0ff54       b.ne     #0x100003604
  0x1000037fc:  68ffff17       b        #0x10000359c
  0x100003800:  200020d4       brk      #1
  0x100003804:  200020d4       brk      #1
  0x100003808:  200020d4       brk      #1
  0x10000380c:  200020d4       brk      #1
  0x100003810:  200020d4       brk      #1
  0x100003814:  200020d4       brk      #1
  0x100003818:  200020d4       brk      #1

; ── PROCEDURE: swift::AudioTimeStamp() (0x10000381c .. 0x10000388c, 112 bytes) ──
_$sSPySo14AudioTimeStampVGSPySo0A10BufferListVGACSpyAEGACIegyyyyy_AcfcgCIeyByyyyy_TR:
  0x10000381c:  fa67bba9       stp      x26, x25, [sp, #-0x50]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x100003820:  f85f01a9       stp      x24, x23, [sp, #0x10]
  0x100003824:  f65702a9       stp      x22, x21, [sp, #0x20]
  0x100003828:  f44f03a9       stp      x20, x19, [sp, #0x30]
  0x10000382c:  fd7b04a9       stp      x29, x30, [sp, #0x40]
  0x100003830:  fd030191       add      x29, sp, #0x40
  0x100003834:  f30305aa       mov      x19, x5
  0x100003838:  f40304aa       mov      x20, x4
  0x10000383c:  f50303aa       mov      x21, x3
  0x100003840:  f60302aa       mov      x22, x2
  0x100003844:  f70301aa       mov      x23, x1
  0x100003848:  196042a9       ldp      x25, x24, [x0, #0x20]
  0x10000384c:  e00318aa       mov      x0, x24
  0x100003850:  12070094       bl       #0x100005498
  0x100003854:  e00317aa       mov      x0, x23
  0x100003858:  e10316aa       mov      x1, x22
  0x10000385c:  e20315aa       mov      x2, x21
  0x100003860:  e30314aa       mov      x3, x20
  0x100003864:  e40313aa       mov      x4, x19
  0x100003868:  f40318aa       mov      x20, x24
  0x10000386c:  20033fd6       blr      x25 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100003870:  e00318aa       mov      x0, x24
  0x100003874:  fd7b44a9       ldp      x29, x30, [sp, #0x40]
  0x100003878:  f44f43a9       ldp      x20, x19, [sp, #0x30]
  0x10000387c:  f65742a9       ldp      x22, x21, [sp, #0x20]
  0x100003880:  f85f41a9       ldp      x24, x23, [sp, #0x10]
  0x100003884:  fa67c5a8       ldp      x26, x25, [sp], #0x50
  0x100003888:  01070014       b        #0x10000548c

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::publish() (0x10000388c .. 0x1000040e0, 2132 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC07publishD0yyF:
  0x10000388c:  ef3bb66d       stp      d15, d14, [sp, #-0xa0]! ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100003890:  ed33016d       stp      d13, d12, [sp, #0x10]
  0x100003894:  eb2b026d       stp      d11, d10, [sp, #0x20]
  0x100003898:  e923036d       stp      d9, d8, [sp, #0x30]
  0x10000389c:  fc6f04a9       stp      x28, x27, [sp, #0x40]
  0x1000038a0:  fa6705a9       stp      x26, x25, [sp, #0x50]
  0x1000038a4:  f85f06a9       stp      x24, x23, [sp, #0x60]
  0x1000038a8:  f65707a9       stp      x22, x21, [sp, #0x70]
  0x1000038ac:  f44f08a9       stp      x20, x19, [sp, #0x80]
  0x1000038b0:  fd7b09a9       stp      x29, x30, [sp, #0x90]
  0x1000038b4:  fd430291       add      x29, sp, #0x90
  0x1000038b8:  ffc302d1       sub      sp, sp, #0xb0
  0x1000038bc:  f30314aa       mov      x19, x20
  0x1000038c0:  280000b0       adrp     x8, #0x100008000
  0x1000038c4:  081540f9       ldr      x8, [x8, #0x28]
  0x1000038c8:  080140f9       ldr      x8, [x8]
  0x1000038cc:  a80316f8       stur     x8, [x29, #-0xa0]
  0x1000038d0:  000080d2       mov      x0, #0
  0x1000038d4:  f5050094       bl       #0x1000050a8
  0x1000038d8:  f50300aa       mov      x21, x0
  0x1000038dc:  17805ff8       ldur     x23, [x0, #-8]
  0x1000038e0:  e82240f9       ldr      x8, [x23, #0x40]
  0x1000038e4:  e90308aa       mov      x9, x8
  0x1000038e8:  300000b0       adrp     x16, #0x100008000
  0x1000038ec:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000038f0:  00023fd6       blr      x16 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000038f4:  e9030091       mov      x9, sp
  0x1000038f8:  083d0091       add      x8, x8, #0xf
  0x1000038fc:  08ed7c92       and      x8, x8, #0xfffffffffffffff0
  0x100003900:  360108cb       sub      x22, x9, x8
  0x100003904:  df020091       mov      sp, x22
  0x100003908:  e80316aa       mov      x8, x22
  0x10000390c:  e4050094       bl       #0x10000509c
  0x100003910:  f40316aa       mov      x20, x22
  0x100003914:  df050094       bl       #0x100005090
  0x100003918:  f40300aa       mov      x20, x0
  0x10000391c:  e80640f9       ldr      x8, [x23, #8]
  0x100003920:  e00316aa       mov      x0, x22
  0x100003924:  e10315aa       mov      x1, x21
  0x100003928:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x10000392c:  685640f9       ldr      x8, [x19, #0xa8]
  0x100003930:  880208eb       subs     x8, x20, x8
  0x100003934:  433f0054       b.lo     #0x10000411c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100003938:  09408b52       mov      w9, #0x5a00
  0x10000393c:  494ca072       movk     w9, #0x262, lsl #16
  0x100003940:  1f0109eb       cmp      x8, x9
  0x100003944:  a33a0054       b.lo     #0x100004098
  0x100003948:  745600f9       str      x20, [x19, #0xa8]
  0x10000394c:  60420291       add      x0, x19, #0x90
  0x100003950:  a1a303d1       sub      x1, x29, #0xe8
  0x100003954:  020080d2       mov      x2, #0
  0x100003958:  030080d2       mov      x3, #0
  0x10000395c:  99060094       bl       #0x1000053c0
  0x100003960:  744a40f9       ldr      x20, [x19, #0x90]
  0x100003964:  950a40f9       ldr      x21, [x20, #0x10]
  0x100003968:  60420291       add      x0, x19, #0x90
  0x10000396c:  a1e302d1       sub      x1, x29, #0xb8
  0x100003970:  22048052       mov      w2, #0x21
  0x100003974:  030080d2       mov      x3, #0
  0x100003978:  92060094       bl       #0x1000053c0
  0x10000397c:  e00314aa       mov      x0, x20
  0x100003980:  c0060094       bl       #0x100005480
  0x100003984:  744a00f9       str      x20, [x19, #0x90]
  0x100003988:  20010037       tbnz     w0, #0, #0x1000039ac
  0x10000398c:  240000b0       adrp     x4, #0x100008000
  0x100003990:  848041f9       ldr      x4, [x4, #0x300]
  0x100003994:  00008052       mov      w0, #0
  0x100003998:  e10315aa       mov      x1, x21
  0x10000399c:  02008052       mov      w2, #0
  0x1000039a0:  e30314aa       mov      x3, x20
  0x1000039a4:  98020094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x1000039a8:  f40300aa       mov      x20, x0
  0x1000039ac:  744a00f9       str      x20, [x19, #0x90]
  0x1000039b0:  e00314aa       mov      x0, x20
  0x1000039b4:  89060094       bl       #0x1000053d8
  0x1000039b8:  80820091       add      x0, x20, #0x20
  0x1000039bc:  21008052       mov      w1, #1
  0x1000039c0:  e20315aa       mov      x2, x21
  0x1000039c4:  df060094       bl       #0x100005540
  0x1000039c8:  a0e302d1       sub      x0, x29, #0xb8
  0x1000039cc:  8f060094       bl       #0x100005408
  0x1000039d0:  e00314aa       mov      x0, x20
  0x1000039d4:  7e060094       bl       #0x1000053cc
  0x1000039d8:  60c20191       add      x0, x19, #0x70
  0x1000039dc:  a10304d1       sub      x1, x29, #0x100
  0x1000039e0:  020080d2       mov      x2, #0
  0x1000039e4:  030080d2       mov      x3, #0
  0x1000039e8:  76060094       bl       #0x1000053c0
  0x1000039ec:  683a40f9       ldr      x8, [x19, #0x70]
  0x1000039f0:  140940f9       ldr      x20, [x8, #0x10]
  0x1000039f4:  60e20191       add      x0, x19, #0x78
  0x1000039f8:  a16304d1       sub      x1, x29, #0x118
  0x1000039fc:  020080d2       mov      x2, #0
  0x100003a00:  030080d2       mov      x3, #0
  0x100003a04:  6f060094       bl       #0x1000053c0
  0x100003a08:  d41b00b4       cbz      x20, #0x100003d80
  0x100003a0c:  fb0314cb       neg      x27, x20
  0x100003a10:  9c008052       mov      w28, #4
  0x100003a14:  340000b0       adrp     x20, #0x100008000
  0x100003a18:  948241f9       ldr      x20, [x20, #0x300]
  0x100003a1c:  18000014       b        #0x100003a7c
  0x100003a20:  780209f8       stur     x24, [x19, #0x90]
  0x100003a24:  e00318aa       mov      x0, x24
  0x100003a28:  6c060094       bl       #0x1000053d8
  0x100003a2c:  c0820091       add      x0, x22, #0x20
  0x100003a30:  a2820091       add      x2, x21, #0x20
  0x100003a34:  04830091       add      x4, x24, #0x20
  0x100003a38:  21008052       mov      w1, #1
  0x100003a3c:  23008052       mov      w3, #1
  0x100003a40:  e60317aa       mov      x6, x23
  0x100003a44:  25008052       mov      w5, #1
  0x100003a48:  bb060094       bl       #0x100005534
  0x100003a4c:  a0e302d1       sub      x0, x29, #0xb8
  0x100003a50:  6e060094       bl       #0x100005408
  0x100003a54:  e00316aa       mov      x0, x22
  0x100003a58:  5d060094       bl       #0x1000053cc
  0x100003a5c:  e00315aa       mov      x0, x21
  0x100003a60:  5b060094       bl       #0x1000053cc
  0x100003a64:  e00318aa       mov      x0, x24
  0x100003a68:  59060094       bl       #0x1000053cc
  0x100003a6c:  9c070091       add      x28, x28, #1
  0x100003a70:  68031c8b       add      x8, x27, x28
  0x100003a74:  1f1100f1       cmp      x8, #4
  0x100003a78:  40180054       b.eq     #0x100003d80
  0x100003a7c:  9a1300d1       sub      x26, x28, #4
  0x100003a80:  780247f8       ldur     x24, [x19, #0x70]
  0x100003a84:  080b40f9       ldr      x8, [x24, #0x10]
  0x100003a88:  5f0308eb       cmp      x26, x8
  0x100003a8c:  a2320054       b.hs     #0x1000040e0
  0x100003a90:  177b7cf8       ldr      x23, [x24, x28, lsl #3]
  0x100003a94:  768247f8       ldur     x22, [x19, #0x78]
  0x100003a98:  480000b0       adrp     x8, #0x10000c000
  0x100003a9c:  08216239       ldrb     w8, [x8, #0x888]
  0x100003aa0:  1f010071       cmp      w8, #0
  0x100003aa4:  08008152       mov      w8, #0x800
  0x100003aa8:  15119f9a       csel     x21, x8, xzr, ne
  0x100003aac:  60c20191       add      x0, x19, #0x70
  0x100003ab0:  a1e302d1       sub      x1, x29, #0xb8
  0x100003ab4:  22048052       mov      w2, #0x21
  0x100003ab8:  030080d2       mov      x3, #0
  0x100003abc:  41060094       bl       #0x1000053c0
  0x100003ac0:  e00317aa       mov      x0, x23
  0x100003ac4:  45060094       bl       #0x1000053d8
  0x100003ac8:  e00316aa       mov      x0, x22
  0x100003acc:  43060094       bl       #0x1000053d8
  0x100003ad0:  e00318aa       mov      x0, x24
  0x100003ad4:  6b060094       bl       #0x100005480
  0x100003ad8:  780207f8       stur     x24, [x19, #0x70]
  0x100003adc:  40130036       tbz      w0, #0, #0x100003d44
  0x100003ae0:  080b40f9       ldr      x8, [x24, #0x10]
  0x100003ae4:  5f0308eb       cmp      x26, x8
  0x100003ae8:  e22f0054       b.hs     #0x1000040e4
  0x100003aec:  197b7cf8       ldr      x25, [x24, x28, lsl #3]
  0x100003af0:  e00319aa       mov      x0, x25
  0x100003af4:  63060094       bl       #0x100005480
  0x100003af8:  197b3cf8       str      x25, [x24, x28, lsl #3]
  0x100003afc:  00010037       tbnz     w0, #0, #0x100003b1c
  0x100003b00:  210b40f9       ldr      x1, [x25, #0x10]
  0x100003b04:  00008052       mov      w0, #0
  0x100003b08:  02008052       mov      w2, #0
  0x100003b0c:  e30319aa       mov      x3, x25
  0x100003b10:  e40314aa       mov      x4, x20
  0x100003b14:  3c020094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x100003b18:  f90300aa       mov      x25, x0
  0x100003b1c:  197b3cf8       str      x25, [x24, x28, lsl #3]
  0x100003b20:  e00319aa       mov      x0, x25
  0x100003b24:  2d060094       bl       #0x1000053d8
  0x100003b28:  e0820091       add      x0, x23, #0x20
  0x100003b2c:  c2820091       add      x2, x22, #0x20
  0x100003b30:  24830091       add      x4, x25, #0x20
  0x100003b34:  21008052       mov      w1, #1
  0x100003b38:  23008052       mov      w3, #1
  0x100003b3c:  e60315aa       mov      x6, x21
  0x100003b40:  25008052       mov      w5, #1
  0x100003b44:  82060094       bl       #0x10000554c
  0x100003b48:  780207f8       stur     x24, [x19, #0x70]
  0x100003b4c:  a0e302d1       sub      x0, x29, #0xb8
  0x100003b50:  2e060094       bl       #0x100005408
  0x100003b54:  e00317aa       mov      x0, x23
  0x100003b58:  1d060094       bl       #0x1000053cc
  0x100003b5c:  e00316aa       mov      x0, x22
  0x100003b60:  1b060094       bl       #0x1000053cc
  0x100003b64:  e00319aa       mov      x0, x25
  0x100003b68:  19060094       bl       #0x1000053cc
  0x100003b6c:  60020291       add      x0, x19, #0x80
  0x100003b70:  a1e302d1       sub      x1, x29, #0xb8
  0x100003b74:  22048052       mov      w2, #0x21
  0x100003b78:  030080d2       mov      x3, #0
  0x100003b7c:  11060094       bl       #0x1000053c0
  0x100003b80:  760248f8       ldur     x22, [x19, #0x80]
  0x100003b84:  e00316aa       mov      x0, x22
  0x100003b88:  3e060094       bl       #0x100005480
  0x100003b8c:  760208f8       stur     x22, [x19, #0x80]
  0x100003b90:  400e0036       tbz      w0, #0, #0x100003d58
  0x100003b94:  60220291       add      x0, x19, #0x88
  0x100003b98:  a14303d1       sub      x1, x29, #0xd0
  0x100003b9c:  22048052       mov      w2, #0x21
  0x100003ba0:  030080d2       mov      x3, #0
  0x100003ba4:  07060094       bl       #0x1000053c0
  0x100003ba8:  778248f8       ldur     x23, [x19, #0x88]
  0x100003bac:  e00317aa       mov      x0, x23
  0x100003bb0:  34060094       bl       #0x100005480
  0x100003bb4:  778208f8       stur     x23, [x19, #0x88]
  0x100003bb8:  a00d0036       tbz      w0, #0, #0x100003d6c
  0x100003bbc:  c8820091       add      x8, x22, #0x20
  0x100003bc0:  e9820091       add      x9, x23, #0x20
  0x100003bc4:  aa0301d1       sub      x10, x29, #0x40
  0x100003bc8:  480110f8       stur     x8, [x10, #-0x100]
  0x100003bcc:  a8e300d1       sub      x8, x29, #0x38
  0x100003bd0:  090110f8       stur     x9, [x8, #-0x100]
  0x100003bd4:  680247f8       ldur     x8, [x19, #0x70]
  0x100003bd8:  090940f9       ldr      x9, [x8, #0x10]
  0x100003bdc:  5f0309eb       cmp      x26, x9
  0x100003be0:  42280054       b.hs     #0x1000040e8
  0x100003be4:  18797cf8       ldr      x24, [x8, x28, lsl #3] ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003be8:  080b40f9       ldr      x8, [x24, #0x10]
  0x100003bec:  08fd7dd3       lsr      x8, x8, #0x3d
  0x100003bf0:  e82700b5       cbnz     x8, #0x1000040ec
  0x100003bf4:  b5fe41d3       lsr      x21, x21, #1
  0x100003bf8:  e00318aa       mov      x0, x24
  0x100003bfc:  f7050094       bl       #0x1000053d8
  0x100003c00:  00830091       add      x0, x24, #0x20
  0x100003c04:  a20305d1       sub      x2, x29, #0x140
  0x100003c08:  41008052       mov      w1, #2
  0x100003c0c:  23008052       mov      w3, #1
  0x100003c10:  e40315aa       mov      x4, x21
  0x100003c14:  3c060094       bl       #0x100005504
  0x100003c18:  e00318aa       mov      x0, x24
  0x100003c1c:  ec050094       bl       #0x1000053cc
  0x100003c20:  603640f9       ldr      x0, [x19, #0x68]
  0x100003c24:  480000b0       adrp     x8, #0x10000c000
  0x100003c28:  08016239       ldrb     w8, [x8, #0x880]
  0x100003c2c:  1f010071       cmp      w8, #0
  0x100003c30:  68018052       mov      w8, #0xb
  0x100003c34:  03119f9a       csel     x3, x8, xzr, ne
  0x100003c38:  a10305d1       sub      x1, x29, #0x140
  0x100003c3c:  22008052       mov      w2, #1
  0x100003c40:  24008052       mov      w4, #1
  0x100003c44:  36060094       bl       #0x10000551c
  0x100003c48:  a8e300d1       sub      x8, x29, #0x38
  0x100003c4c:  080150f8       ldur     x8, [x8, #-0x100]
  0x100003c50:  1f0100b9       str      wzr, [x8]
  0x100003c54:  60620291       add      x0, x19, #0x98
  0x100003c58:  a1c304d1       sub      x1, x29, #0x130
  0x100003c5c:  22048052       mov      w2, #0x21
  0x100003c60:  030080d2       mov      x3, #0
  0x100003c64:  d7050094       bl       #0x1000053c0
  0x100003c68:  784e40f9       ldr      x24, [x19, #0x98]
  0x100003c6c:  e00318aa       mov      x0, x24
  0x100003c70:  04060094       bl       #0x100005480
  0x100003c74:  784e00f9       str      x24, [x19, #0x98]
  0x100003c78:  00010037       tbnz     w0, #0, #0x100003c98
  0x100003c7c:  010b40f9       ldr      x1, [x24, #0x10]
  0x100003c80:  00008052       mov      w0, #0
  0x100003c84:  02008052       mov      w2, #0
  0x100003c88:  e30318aa       mov      x3, x24
  0x100003c8c:  e40314aa       mov      x4, x20
  0x100003c90:  dd010094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x100003c94:  f80300aa       mov      x24, x0
  0x100003c98:  788209f8       stur     x24, [x19, #0x98]
  0x100003c9c:  e00318aa       mov      x0, x24
  0x100003ca0:  ce050094       bl       #0x1000053d8
  0x100003ca4:  a00305d1       sub      x0, x29, #0x140
  0x100003ca8:  02830091       add      x2, x24, #0x20
  0x100003cac:  21008052       mov      w1, #1
  0x100003cb0:  23008052       mov      w3, #1
  0x100003cb4:  e40315aa       mov      x4, x21
  0x100003cb8:  28060094       bl       #0x100005558
  0x100003cbc:  a0c304d1       sub      x0, x29, #0x130
  0x100003cc0:  d2050094       bl       #0x100005408
  0x100003cc4:  e00318aa       mov      x0, x24
  0x100003cc8:  c1050094       bl       #0x1000053cc
  0x100003ccc:  778208f8       stur     x23, [x19, #0x88]
  0x100003cd0:  a04303d1       sub      x0, x29, #0xd0
  0x100003cd4:  cd050094       bl       #0x100005408
  0x100003cd8:  760208f8       stur     x22, [x19, #0x80]
  0x100003cdc:  a0e302d1       sub      x0, x29, #0xb8
  0x100003ce0:  ca050094       bl       #0x100005408
  0x100003ce4:  765649a9       ldp      x22, x21, [x19, #0x90]
  0x100003ce8:  d70a40f9       ldr      x23, [x22, #0x10]
  0x100003cec:  60420291       add      x0, x19, #0x90
  0x100003cf0:  a1e302d1       sub      x1, x29, #0xb8
  0x100003cf4:  22048052       mov      w2, #0x21
  0x100003cf8:  030080d2       mov      x3, #0
  0x100003cfc:  b1050094       bl       #0x1000053c0
  0x100003d00:  e00316aa       mov      x0, x22
  0x100003d04:  b5050094       bl       #0x1000053d8
  0x100003d08:  e00315aa       mov      x0, x21
  0x100003d0c:  b3050094       bl       #0x1000053d8
  0x100003d10:  e00316aa       mov      x0, x22
  0x100003d14:  db050094       bl       #0x100005480
  0x100003d18:  760209f8       stur     x22, [x19, #0x90]
  0x100003d1c:  f80316aa       mov      x24, x22
  0x100003d20:  00e80737       tbnz     w0, #0, #0x100003a20
  0x100003d24:  00008052       mov      w0, #0
  0x100003d28:  e10317aa       mov      x1, x23
  0x100003d2c:  02008052       mov      w2, #0
  0x100003d30:  e30316aa       mov      x3, x22
  0x100003d34:  e40314aa       mov      x4, x20
  0x100003d38:  b3010094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x100003d3c:  f80300aa       mov      x24, x0
  0x100003d40:  38ffff17       b        #0x100003a20
  0x100003d44:  e00318aa       mov      x0, x24
  0x100003d48:  a1010094       bl       #0x1000043cc ; _$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSaySfG_Tg5
  0x100003d4c:  f80300aa       mov      x24, x0
  0x100003d50:  600207f8       stur     x0, [x19, #0x70]
  0x100003d54:  63ffff17       b        #0x100003ae0
  0x100003d58:  e00316aa       mov      x0, x22
  0x100003d5c:  91010094       bl       #0x1000043a0 ; _$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSf_Tg5
  0x100003d60:  f60300aa       mov      x22, x0
  0x100003d64:  600208f8       stur     x0, [x19, #0x80]
  0x100003d68:  8bffff17       b        #0x100003b94
  0x100003d6c:  e00317aa       mov      x0, x23
  0x100003d70:  8c010094       bl       #0x1000043a0 ; _$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSf_Tg5
  0x100003d74:  f70300aa       mov      x23, x0
  0x100003d78:  608208f8       stur     x0, [x19, #0x88]
  0x100003d7c:  90ffff17       b        #0x100003bbc
  0x100003d80:  60820091       add      x0, x19, #0x20
  0x100003d84:  a1c304d1       sub      x1, x29, #0x130
  0x100003d88:  020080d2       mov      x2, #0
  0x100003d8c:  030080d2       mov      x3, #0
  0x100003d90:  8c050094       bl       #0x1000053c0
  0x100003d94:  480000b0       adrp     x8, #0x10000c000
  0x100003d98:  08216239       ldrb     w8, [x8, #0x888]
  0x100003d9c:  1f010071       cmp      w8, #0
  0x100003da0:  0814e8d2       mov      x8, #0x40a0000000000000
  0x100003da4:  0001679e       fmov     d0, x8
  0x100003da8:  01e4006f       movi     v1.2d, #0000000000000000
  0x100003dac:  001c611e       fcsel    d0, d0, d1, ne
  0x100003db0:  480000b0       adrp     x8, #0x10000c000
  0x100003db4:  08416239       ldrb     w8, [x8, #0x890]
  0x100003db8:  1f010071       cmp      w8, #0
  0x100003dbc:  09038052       mov      w9, #0x18
  0x100003dc0:  37119f9a       csel     x23, x9, xzr, ne
  0x100003dc4:  340000b0       adrp     x20, #0x100008000
  0x100003dc8:  946641f9       ldr      x20, [x20, #0x2c8]
  0x100003dcc:  28140034       cbz      w8, #0x100004050
  0x100003dd0:  611240fd       ldr      d1, [x19, #0x20]
  0x100003dd4:  a80301d1       sub      x8, x29, #0x40
  0x100003dd8:  140110f8       stur     x20, [x8, #-0x100]
  0x100003ddc:  2a18601e       fdiv     d10, d1, d0
  0x100003de0:  b40305d1       sub      x20, x29, #0x140
  0x100003de4:  00008052       mov      w0, #0
  0x100003de8:  01038052       mov      w1, #0x18
  0x100003dec:  02008052       mov      w2, #0
  0x100003df0:  7c010094       bl       #0x1000043e0 ; _$ss15ContiguousArrayV16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFSf_Tg5
  0x100003df4:  080080d2       mov      x8, #0
  0x100003df8:  a90301d1       sub      x9, x29, #0x40
  0x100003dfc:  340150f8       ldur     x20, [x9, #-0x100]
  0x100003e00:  1b02f092       mov      x27, #0x7fefffffffffffff
  0x100003e04:  3c0080d2       mov      x28, #1
  0x100003e08:  1c7cf8f2       movk     x28, #0xc3e0, lsl #48
  0x100003e0c:  1a7ce8d2       mov      x26, #0x43e0000000000000
  0x100003e10:  0ce4006f       movi     v12.2d, #0000000000000000
  0x100003e14:  0d90241e       fmov     s13, #10.00000000
  0x100003e18:  0e102e1e       fmov     s14, #1.00000000
  0x100003e1c:  1949a852       mov      w25, #0x42480000
  0x100003e20:  ff0208eb       cmp      x23, x8
  0x100003e24:  60160054       b.eq     #0x1000040f0
  0x100003e28:  16050091       add      x22, x8, #1 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100003e2c:  490000b0       adrp     x9, #0x10000c000
  0x100003e30:  2f4d44fd       ldr      d15, [x9, #0x898] ; _$s4main16minimumFrequency029_12232F587A4C5CD8B1EEDF696793E2FCLLSdvp.0
  0x100003e34:  490000b0       adrp     x9, #0x10000c000
  0x100003e38:  205144fd       ldr      d0, [x9, #0x8a0] ; _$s4main16maximumFrequency029_12232F587A4C5CD8B1EEDF696793E2FCLLSdvp.0
  0x100003e3c:  08186f1e       fdiv     d8, d0, d15
  0x100003e40:  0001639e       ucvtf    d0, x8
  0x100003e44:  480000b0       adrp     x8, #0x10000c000
  0x100003e48:  08416239       ldrb     w8, [x8, #0x890]
  0x100003e4c:  1f010071       cmp      w8, #0
  0x100003e50:  01e4006f       movi     v1.2d, #0000000000000000
  0x100003e54:  0210671e       fmov     d2, #24.00000000
  0x100003e58:  491c611e       fcsel    d9, d2, d1, ne
  0x100003e5c:  0118691e       fdiv     d1, d0, d9
  0x100003e60:  001da84e       mov      v0.16b, v8.16b
  0x100003e64:  45050094       bl       #0x100005378
  0x100003e68:  eb09601e       fmul     d11, d15, d0
  0x100003e6c:  c002639e       ucvtf    d0, x22
  0x100003e70:  0118691e       fdiv     d1, d0, d9
  0x100003e74:  001da84e       mov      v0.16b, v8.16b
  0x100003e78:  40050094       bl       #0x100005378
  0x100003e7c:  081ca04e       mov      v8.16b, v0.16b
  0x100003e80:  60420291       add      x0, x19, #0x90
  0x100003e84:  a1e302d1       sub      x1, x29, #0xb8
  0x100003e88:  020080d2       mov      x2, #0
  0x100003e8c:  030080d2       mov      x3, #0
  0x100003e90:  4c050094       bl       #0x1000053c0
  0x100003e94:  60196a1e       fdiv     d0, d11, d10
  0x100003e98:  00c0641e       frintp   d0, d0
  0x100003e9c:  0800669e       fmov     x8, d0
  0x100003ea0:  08f94092       and      x8, x8, #0x7fffffffffffffff
  0x100003ea4:  1f011beb       cmp      x8, x27
  0x100003ea8:  6c120054       b.gt     #0x1000040f4
  0x100003eac:  8103679e       fmov     d1, x28
  0x100003eb0:  0020611e       fcmp     d0, d1
  0x100003eb4:  2d120054       b.le     #0x1000040f8
  0x100003eb8:  4103679e       fmov     d1, x26
  0x100003ebc:  0020611e       fcmp     d0, d1
  0x100003ec0:  e5110054       b.pl     #0x1000040fc
  0x100003ec4:  e109681e       fmul     d1, d15, d8
  0x100003ec8:  680249f8       ldur     x8, [x19, #0x90]
  0x100003ecc:  090940f9       ldr      x9, [x8, #0x10]
  0x100003ed0:  2a0500d1       sub      x10, x9, #1
  0x100003ed4:  0b00789e       fcvtzs   x11, d0
  0x100003ed8:  7f0500f1       cmp      x11, #1
  0x100003edc:  6bc59f9a       csinc    x11, x11, xzr, gt
  0x100003ee0:  7f010aeb       cmp      x11, x10
  0x100003ee4:  61b18a9a       csel     x1, x11, x10, lt
  0x100003ee8:  20186a1e       fdiv     d0, d1, d10
  0x100003eec:  00c0641e       frintp   d0, d0
  0x100003ef0:  0a00669e       fmov     x10, d0
  0x100003ef4:  4af94092       and      x10, x10, #0x7fffffffffffffff
  0x100003ef8:  5f011beb       cmp      x10, x27
  0x100003efc:  2c100054       b.gt     #0x100004100
  0x100003f00:  8103679e       fmov     d1, x28
  0x100003f04:  0020611e       fcmp     d0, d1
  0x100003f08:  ed0f0054       b.le     #0x100004104
  0x100003f0c:  4103679e       fmov     d1, x26
  0x100003f10:  0020611e       fcmp     d0, d1
  0x100003f14:  a50f0054       b.pl     #0x100004108
  0x100003f18:  0a00789e       fcvtzs   x10, d0
  0x100003f1c:  2b040091       add      x11, x1, #1
  0x100003f20:  7f010aeb       cmp      x11, x10
  0x100003f24:  6ac18a9a       csel     x10, x11, x10, gt
  0x100003f28:  5f0109eb       cmp      x10, x9
  0x100003f2c:  4a31899a       csel     x10, x10, x9, lo
  0x100003f30:  5f0101eb       cmp      x10, x1
  0x100003f34:  cb0e0054       b.lt     #0x10000410c
  0x100003f38:  c90e00b4       cbz      x9, #0x100004110
  0x100003f3c:  29008052       mov      w9, #1
  0x100003f40:  22050aaa       orr      x2, x9, x10, lsl #1
  0x100003f44:  00810091       add      x0, x8, #0x20
  0x100003f48:  f1020094       bl       #0x100004b0c ; _$sSTsSL7ElementRpzrlE3maxABSgyFs10ArraySliceVySfG_Tg5Tf4x_n
  0x100003f4c:  f50300aa       mov      x21, x0
  0x100003f50:  60c20191       add      x0, x19, #0x70
  0x100003f54:  a14303d1       sub      x1, x29, #0xd0
  0x100003f58:  020080d2       mov      x2, #0
  0x100003f5c:  030080d2       mov      x3, #0
  0x100003f60:  18050094       bl       #0x1000053c0
  0x100003f64:  680247f8       ldur     x8, [x19, #0x70]
  0x100003f68:  080940f9       ldr      x8, [x8, #0x10]
  0x100003f6c:  490000b0       adrp     x9, #0x10000c000
  0x100003f70:  29216239       ldrb     w9, [x9, #0x888]
  0x100003f74:  3f010071       cmp      w9, #0
  0x100003f78:  09008152       mov      w9, #0x800
  0x100003f7c:  29119f9a       csel     x9, x9, xzr, ne
  0x100003f80:  0a7d099b       mul      x10, x8, x9
  0x100003f84:  087d499b       smulh    x8, x8, x9
  0x100003f88:  1ffd8aeb       cmp      x8, x10, asr #63
  0x100003f8c:  410c0054       b.ne     #0x100004114
  0x100003f90:  487d099b       mul      x8, x10, x9
  0x100003f94:  497d499b       smulh    x9, x10, x9
  0x100003f98:  3ffd88eb       cmp      x9, x8, asr #63
  0x100003f9c:  e10b0054       b.ne     #0x100004118
  0x100003fa0:  a91e6092       and      x9, x21, #0xff00000000
  0x100003fa4:  a002271e       fmov     s0, w21
  0x100003fa8:  2a00c0d2       mov      x10, #0x100000000
  0x100003fac:  3f010aeb       cmp      x9, x10
  0x100003fb0:  800d201e       fcsel    s0, s12, s0, eq
  0x100003fb4:  0101229e       scvtf    s1, x8
  0x100003fb8:  0018211e       fdiv     s0, s0, s1
  0x100003fbc:  88999752       mov      w8, #0xbccc
  0x100003fc0:  8871a572       movk     w8, #0x2b8c, lsl #16
  0x100003fc4:  0101271e       fmov     s1, w8
  0x100003fc8:  0020211e       fcmp     s0, s1
  0x100003fcc:  209c201e       fcsel    s0, s1, s0, ls
  0x100003fd0:  cf040094       bl       #0x10000530c
  0x100003fd4:  00082d1e       fmul     s0, s0, s13
  0x100003fd8:  4850a852       mov      w8, #0x42820000
  0x100003fdc:  0101271e       fmov     s1, w8
  0x100003fe0:  0028211e       fadd     s0, s0, s1
  0x100003fe4:  2103271e       fmov     s1, w25
  0x100003fe8:  0018211e       fdiv     s0, s0, s1
  0x100003fec:  0820201e       fcmp     s0, #0.0
  0x100003ff0:  08ac2c1e       fcsel    s8, s0, s12, ge
  0x100003ff4:  a80301d1       sub      x8, x29, #0x40
  0x100003ff8:  140110f8       stur     x20, [x8, #-0x100]
  0x100003ffc:  982241a9       ldp      x24, x8, [x20, #0x10]
  0x100004000:  15070091       add      x21, x24, #1
  0x100004004:  1f0748eb       cmp      x24, x8, lsr #1
  0x100004008:  22010054       b.hs     #0x10000402c
  0x10000400c:  00792e1e       fminnm   s0, s8, s14
  0x100004010:  950a00f9       str      x21, [x20, #0x10]
  0x100004014:  880a188b       add      x8, x20, x24, lsl #2
  0x100004018:  002100bd       str      s0, [x8, #0x20]
  0x10000401c:  e80316aa       mov      x8, x22
  0x100004020:  ff0216eb       cmp      x23, x22
  0x100004024:  e1efff54       b.ne     #0x100003e20
  0x100004028:  0a000014       b        #0x100004050
  0x10000402c:  1f0500f1       cmp      x8, #1
  0x100004030:  e0979f1a       cset     w0, hi
  0x100004034:  b40305d1       sub      x20, x29, #0x140
  0x100004038:  e10315aa       mov      x1, x21
  0x10000403c:  22008052       mov      w2, #1
  0x100004040:  e8000094       bl       #0x1000043e0 ; _$ss15ContiguousArrayV16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFSf_Tg5
  0x100004044:  a80301d1       sub      x8, x29, #0x40
  0x100004048:  140150f8       ldur     x20, [x8, #-0x100]
  0x10000404c:  f0ffff17       b        #0x10000400c
  0x100004050:  752e40f9       ldr      x21, [x19, #0x58]
  0x100004054:  e00315aa       mov      x0, x21
  0x100004058:  b2050094       bl       #0x100005720 ; objc_msgSend -> -[self tryLock] // [SME:OBJC-DISPATCH]
  0x10000405c:  a0010036       tbz      w0, #0, #0x100004090
  0x100004060:  603240f9       ldr      x0, [x19, #0x60]
  0x100004064:  743200f9       str      x20, [x19, #0x60]
  0x100004068:  d9040094       bl       #0x1000053cc
  0x10000406c:  e00315aa       mov      x0, x21
  0x100004070:  b4050094       bl       #0x100005740 ; objc_msgSend -> -[self unlock] // [SME:OBJC-DISPATCH]
  0x100004074:  742a40f9       ldr      x20, [x19, #0x50]
  0x100004078:  e00314aa       mov      x0, x20
  0x10000407c:  f2040094       bl       #0x100005444
  0x100004080:  e10300aa       mov      x1, x0
  0x100004084:  20008052       mov      w0, #1
  0x100004088:  53040094       bl       #0x1000051d4
  0x10000408c:  03000014       b        #0x100004098
  0x100004090:  e00314aa       mov      x0, x20
  0x100004094:  ce040094       bl       #0x1000053cc
  0x100004098:  a80356f8       ldur     x8, [x29, #-0xa0]
  0x10000409c:  29000090       adrp     x9, #0x100008000
  0x1000040a0:  291540f9       ldr      x9, [x9, #0x28]
  0x1000040a4:  290140f9       ldr      x9, [x9]
  0x1000040a8:  3f0108eb       cmp      x9, x8
  0x1000040ac:  a1030054       b.ne     #0x100004120
  0x1000040b0:  bf4302d1       sub      sp, x29, #0x90
  0x1000040b4:  fd7b49a9       ldp      x29, x30, [sp, #0x90]
  0x1000040b8:  f44f48a9       ldp      x20, x19, [sp, #0x80]
  0x1000040bc:  f65747a9       ldp      x22, x21, [sp, #0x70]
  0x1000040c0:  f85f46a9       ldp      x24, x23, [sp, #0x60]
  0x1000040c4:  fa6745a9       ldp      x26, x25, [sp, #0x50]
  0x1000040c8:  fc6f44a9       ldp      x28, x27, [sp, #0x40]
  0x1000040cc:  e923436d       ldp      d9, d8, [sp, #0x30]
  0x1000040d0:  eb2b426d       ldp      d11, d10, [sp, #0x20]
  0x1000040d4:  ed33416d       ldp      d13, d12, [sp, #0x10]
  0x1000040d8:  ef3bca6c       ldp      d15, d14, [sp], #0xa0
  0x1000040dc:  c0035fd6       ret      

; ── PROCEDURE: flirt_objc_retain_release_thunk_40e0 (0x1000040e0 .. 0x100004124, 68 bytes) ──
flirt_objc_retain_release_thunk_40e0:
  0x1000040e0:  200020d4       brk      #1 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 78% confidence
  0x1000040e4:  200020d4       brk      #1
  0x1000040e8:  200020d4       brk      #1
  0x1000040ec:  200020d4       brk      #1
  0x1000040f0:  200020d4       brk      #1
  0x1000040f4:  200020d4       brk      #1
  0x1000040f8:  200020d4       brk      #1
  0x1000040fc:  200020d4       brk      #1
  0x100004100:  200020d4       brk      #1
  0x100004104:  200020d4       brk      #1
  0x100004108:  200020d4       brk      #1
  0x10000410c:  200020d4       brk      #1
  0x100004110:  200020d4       brk      #1
  0x100004114:  200020d4       brk      #1
  0x100004118:  200020d4       brk      #1
  0x10000411c:  200020d4       brk      #1
  0x100004120:  6c040094       bl       #0x1000052d0

; ── PROCEDURE: _$sSbIegy_SbIeyBy_TR (0x100004124 .. 0x100004160, 60 bytes) ──
_$sSbIegy_SbIeyBy_TR:
  0x100004124:  f657bda9       stp      x22, x21, [sp, #-0x30]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x100004128:  f44f01a9       stp      x20, x19, [sp, #0x10]
  0x10000412c:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x100004130:  fd830091       add      x29, sp, #0x20
  0x100004134:  f30301aa       mov      x19, x1
  0x100004138:  155042a9       ldp      x21, x20, [x0, #0x20]
  0x10000413c:  e00314aa       mov      x0, x20
  0x100004140:  d6040094       bl       #0x100005498
  0x100004144:  e00313aa       mov      x0, x19
  0x100004148:  a0023fd6       blr      x21 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x10000414c:  e00314aa       mov      x0, x20
  0x100004150:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x100004154:  f44f41a9       ldp      x20, x19, [sp, #0x10]
  0x100004158:  f657c3a8       ldp      x22, x21, [sp], #0x30
  0x10000415c:  cc040014       b        #0x10000548c

; ── PROCEDURE: swift::_ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (0x100004160 .. 0x10000428c, 300 bytes) ──
_$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSaySfG_Tg5:
  0x100004160:  f85fbca9       stp      x24, x23, [sp, #-0x40]! ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100004164:  f65701a9       stp      x22, x21, [sp, #0x10]
  0x100004168:  f44f02a9       stp      x20, x19, [sp, #0x20]
  0x10000416c:  fd7b03a9       stp      x29, x30, [sp, #0x30]
  0x100004170:  fdc30091       add      x29, sp, #0x30
  0x100004174:  f30303aa       mov      x19, x3
  0x100004178:  f40300aa       mov      x20, x0
  0x10000417c:  82010036       tbz      w2, #0, #0x1000041ac ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004180:  690e40f9       ldr      x9, [x19, #0x18]
  0x100004184:  28fd41d3       lsr      x8, x9, #1
  0x100004188:  1f0101eb       cmp      x8, x1
  0x10000418c:  2a010054       b.ge     #0x1000041b0
  0x100004190:  0a00e8d2       mov      x10, #0x4000000000000000
  0x100004194:  1f010aab       cmn      x8, x10
  0x100004198:  a4070054       b.mi     #0x10000428c
  0x10000419c:  28f97f92       and      x8, x9, #0xfffffffffffffffe
  0x1000041a0:  1f0101eb       cmp      x8, x1
  0x1000041a4:  08c1819a       csel     x8, x8, x1, gt
  0x1000041a8:  02000014       b        #0x1000041b0
  0x1000041ac:  e80301aa       mov      x8, x1
  0x1000041b0:  750a40f9       ldr      x21, [x19, #0x10]
  0x1000041b4:  1f0115eb       cmp      x8, x21
  0x1000041b8:  16c1959a       csel     x22, x8, x21, gt
  0x1000041bc:  760200b4       cbz      x22, #0x100004208
  0x1000041c0:  40000090       adrp     x0, #0x10000c000
  0x1000041c4:  00801d91       add      x0, x0, #0x760 ; _$ss23_ContiguousArrayStorageCySaySfGGMd
  0x1000041c8:  010000b0       adrp     x1, #0x100005000
  0x1000041cc:  21402891       add      x1, x1, #0xa10 ; _$ss23_ContiguousArrayStorageCySaySfGGMR
  0x1000041d0:  8bfcff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000041d4:  c8f27dd3       lsl      x8, x22, #3
  0x1000041d8:  01810091       add      x1, x8, #0x20
  0x1000041dc:  e2008052       mov      w2, #7
  0x1000041e0:  6f040094       bl       #0x10000539c
  0x1000041e4:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000041e8:  4c040094       bl       #0x100005318
  0x1000041ec:  088000f1       subs     x8, x0, #0x20
  0x1000041f0:  096400d1       sub      x9, x0, #0x19
  0x1000041f4:  28b1889a       csel     x8, x9, x8, lt
  0x1000041f8:  08fd4393       asr      x8, x8, #3
  0x1000041fc:  08f97fd3       lsl      x8, x8, #1
  0x100004200:  d52201a9       stp      x21, x8, [x22, #0x10]
  0x100004204:  03000014       b        #0x100004210
  0x100004208:  36000090       adrp     x22, #0x100008000
  0x10000420c:  d66641f9       ldr      x22, [x22, #0x2c8]
  0x100004210:  d7820091       add      x23, x22, #0x20
  0x100004214:  78820091       add      x24, x19, #0x20
  0x100004218:  74010036       tbz      w20, #0, #0x100004244
  0x10000421c:  080f158b       add      x8, x24, x21, lsl #3
  0x100004220:  df0213eb       cmp      x22, x19
  0x100004224:  e20248fa       ccmp     x23, x8, #2, eq
  0x100004228:  a3000054       b.lo     #0x10000423c
  0x10000422c:  a2f27dd3       lsl      x2, x21, #3
  0x100004230:  e00317aa       mov      x0, x23
  0x100004234:  e10318aa       mov      x1, x24
  0x100004238:  3e040094       bl       #0x100005330
  0x10000423c:  7f0a00f9       str      xzr, [x19, #0x10]
  0x100004240:  0b000014       b        #0x10000426c
  0x100004244:  40000090       adrp     x0, #0x10000c000
  0x100004248:  00a01d91       add      x0, x0, #0x768 ; _$sSaySfGMd
  0x10000424c:  010000b0       adrp     x1, #0x100005000
  0x100004250:  21602891       add      x1, x1, #0xa18 ; _$sSaySfGMR
  0x100004254:  6afcff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100004258:  e30300aa       mov      x3, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000425c:  e00317aa       mov      x0, x23
  0x100004260:  e10318aa       mov      x1, x24
  0x100004264:  e20315aa       mov      x2, x21
  0x100004268:  53040094       bl       #0x1000053b4
  0x10000426c:  e00313aa       mov      x0, x19
  0x100004270:  57040094       bl       #0x1000053cc
  0x100004274:  e00316aa       mov      x0, x22
  0x100004278:  fd7b43a9       ldp      x29, x30, [sp, #0x30]
  0x10000427c:  f44f42a9       ldp      x20, x19, [sp, #0x20]
  0x100004280:  f65741a9       ldp      x22, x21, [sp, #0x10]
  0x100004284:  f85fc4a8       ldp      x24, x23, [sp], #0x40
  0x100004288:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_10000428c (0x10000428c .. 0x100004290, 4 bytes) ──
sme_runtime_helper_10000428c:
  0x10000428c:  200020d4       brk      #1

; ── PROCEDURE: swift::__RawDictionaryStorage::find::_HashTable::Bucket::bucket::found() (0x100004290 .. 0x1000042f4, 100 bytes) ──
_$ss22__RawDictionaryStorageC4findys10_HashTableV6BucketV6bucket_Sb5foundtxSHRzlFSS_Tg5:
  0x100004290:  ff0302d1       sub      sp, sp, #0x80 ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 99% confidence
  0x100004294:  f65705a9       stp      x22, x21, [sp, #0x50]
  0x100004298:  f44f06a9       stp      x20, x19, [sp, #0x60]
  0x10000429c:  fd7b07a9       stp      x29, x30, [sp, #0x70]
  0x1000042a0:  fdc30191       add      x29, sp, #0x70
  0x1000042a4:  f30314aa       mov      x19, x20
  0x1000042a8:  f50301aa       mov      x21, x1
  0x1000042ac:  f60300aa       mov      x22, x0
  0x1000042b0:  801640f9       ldr      x0, [x20, #0x28]
  0x1000042b4:  e8230091       add      x8, sp, #8
  0x1000042b8:  df030094       bl       #0x100005234
  0x1000042bc:  e0230091       add      x0, sp, #8
  0x1000042c0:  e10316aa       mov      x1, x22
  0x1000042c4:  e20315aa       mov      x2, x21
  0x1000042c8:  87030094       bl       #0x1000050e4
  0x1000042cc:  f4230091       add      x20, sp, #8
  0x1000042d0:  dc030094       bl       #0x100005240
  0x1000042d4:  e20300aa       mov      x2, x0
  0x1000042d8:  e00316aa       mov      x0, x22
  0x1000042dc:  e10315aa       mov      x1, x21
  0x1000042e0:  fd7b47a9       ldp      x29, x30, [sp, #0x70]
  0x1000042e4:  f44f46a9       ldp      x20, x19, [sp, #0x60]
  0x1000042e8:  f65745a9       ldp      x22, x21, [sp, #0x50]
  0x1000042ec:  ff030291       add      sp, sp, #0x80
  0x1000042f0:  01000014       b        #0x1000042f4 ; _$ss22__RawDictionaryStorageC4find_9hashValues10_HashTableV6BucketV6bucket_Sb5foundtx_SitSHRzlFSS_Tg5

; ── PROCEDURE: swift::__RawDictionaryStorage::find::hashValue::_HashTable::Bucket::bucket::found() (0x1000042f4 .. 0x1000043a0, 172 bytes) ──
_$ss22__RawDictionaryStorageC4find_9hashValues10_HashTableV6BucketV6bucket_Sb5foundtx_SitSHRzlFSS_Tg5:
  0x1000042f4:  f85fbca9       stp      x24, x23, [sp, #-0x40]! ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x1000042f8:  f65701a9       stp      x22, x21, [sp, #0x10]
  0x1000042fc:  f44f02a9       stp      x20, x19, [sp, #0x20]
  0x100004300:  fd7b03a9       stp      x29, x30, [sp, #0x30]
  0x100004304:  fdc30091       add      x29, sp, #0x30
  0x100004308:  97020191       add      x23, x20, #0x40
  0x10000430c:  88824039       ldrb     w8, [x20, #0x20]
  0x100004310:  09008092       mov      x9, #-1
  0x100004314:  2821c89a       lsl      x8, x9, x8
  0x100004318:  5300288a       bic      x19, x2, x8
  0x10000431c:  69fe46d3       lsr      x9, x19, #6
  0x100004320:  e97a69f8       ldr      x9, [x23, x9, lsl #3]
  0x100004324:  2925d39a       lsr      x9, x9, x19
  0x100004328:  a9020036       tbz      w9, #0, #0x10000437c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x10000432c:  f50301aa       mov      x21, x1
  0x100004330:  f60300aa       mov      x22, x0
  0x100004334:  f80328aa       mvn      x24, x8
  0x100004338:  881a40f9       ldr      x8, [x20, #0x30]
  0x10000433c:  0811138b       add      x8, x8, x19, lsl #4
  0x100004340:  000540a9       ldp      x0, x1, [x8]
  0x100004344:  1f0016eb       cmp      x0, x22
  0x100004348:  200055fa       ccmp     x1, x21, #0, eq
  0x10000434c:  c0010054       b.eq     #0x100004384
  0x100004350:  e20316aa       mov      x2, x22
  0x100004354:  e30315aa       mov      x3, x21
  0x100004358:  04008052       mov      w4, #0
  0x10000435c:  a7030094       bl       #0x1000051f8
  0x100004360:  20010037       tbnz     w0, #0, #0x100004384
  0x100004364:  68060091       add      x8, x19, #1
  0x100004368:  1301188a       and      x19, x8, x24
  0x10000436c:  68fe46d3       lsr      x8, x19, #6
  0x100004370:  e87a68f8       ldr      x8, [x23, x8, lsl #3]
  0x100004374:  0825d39a       lsr      x8, x8, x19
  0x100004378:  08fe0737       tbnz     w8, #0, #0x100004338
  0x10000437c:  01008052       mov      w1, #0
  0x100004380:  02000014       b        #0x100004388
  0x100004384:  21008052       mov      w1, #1
  0x100004388:  e00313aa       mov      x0, x19
  0x10000438c:  fd7b43a9       ldp      x29, x30, [sp, #0x30]
  0x100004390:  f44f42a9       ldp      x20, x19, [sp, #0x20]
  0x100004394:  f65741a9       ldp      x22, x21, [sp, #0x10]
  0x100004398:  f85fc4a8       ldp      x24, x23, [sp], #0x40
  0x10000439c:  c0035fd6       ret      

; ── PROCEDURE: swift::_ArrayBuffer::_consumeAndCreateNew() (0x1000043a0 .. 0x1000043cc, 44 bytes) ──
_$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSf_Tg5:
  0x1000043a0:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x1000043a4:  fd030091       mov      x29, sp
  0x1000043a8:  e30300aa       mov      x3, x0
  0x1000043ac:  010840f9       ldr      x1, [x0, #0x10]
  0x1000043b0:  24000090       adrp     x4, #0x100008000
  0x1000043b4:  848041f9       ldr      x4, [x4, #0x300]
  0x1000043b8:  00008052       mov      w0, #0
  0x1000043bc:  02008052       mov      w2, #0
  0x1000043c0:  11000094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x1000043c4:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x1000043c8:  c0035fd6       ret      

; ── PROCEDURE: swift::_ArrayBuffer::_consumeAndCreateNew() (0x1000043cc .. 0x1000043e0, 20 bytes) ──
_$ss12_ArrayBufferV20_consumeAndCreateNewAByxGyFSaySfG_Tg5:
  0x1000043cc:  e30300aa       mov      x3, x0 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x1000043d0:  010840f9       ldr      x1, [x0, #0x10]
  0x1000043d4:  00008052       mov      w0, #0
  0x1000043d8:  02008052       mov      w2, #0
  0x1000043dc:  61ffff17       b        #0x100004160 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSaySfG_Tg5

; ── PROCEDURE: swift::ContiguousArray::_createNewBuffer::bufferIsUnique::minimumCapacity::growForAppend() (0x1000043e0 .. 0x100004404, 36 bytes) ──
_$ss15ContiguousArrayV16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFSf_Tg5:
  0x1000043e0:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x1000043e4:  fd030091       mov      x29, sp
  0x1000043e8:  830240f9       ldr      x3, [x20]
  0x1000043ec:  24000090       adrp     x4, #0x100008000
  0x1000043f0:  84c041f9       ldr      x4, [x4, #0x380]
  0x1000043f4:  04000094       bl       #0x100004404 ; _$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm
  0x1000043f8:  800200f9       str      x0, [x20]
  0x1000043fc:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x100004400:  c0035fd6       ret      

; ── PROCEDURE: swift::_ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (0x100004404 .. 0x10000450c, 264 bytes) ──
_$ss12_ArrayBufferV20_consumeAndCreateNew14bufferIsUnique15minimumCapacity13growForAppendAByxGSb_SiSbtFSf_Tg5Tm:
  0x100004404:  f85fbca9       stp      x24, x23, [sp, #-0x40]! ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100004408:  f65701a9       stp      x22, x21, [sp, #0x10]
  0x10000440c:  f44f02a9       stp      x20, x19, [sp, #0x20]
  0x100004410:  fd7b03a9       stp      x29, x30, [sp, #0x30]
  0x100004414:  fdc30091       add      x29, sp, #0x30
  0x100004418:  f30304aa       mov      x19, x4
  0x10000441c:  f40303aa       mov      x20, x3
  0x100004420:  f50300aa       mov      x21, x0
  0x100004424:  82010036       tbz      w2, #0, #0x100004454 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004428:  890e40f9       ldr      x9, [x20, #0x18]
  0x10000442c:  28fd41d3       lsr      x8, x9, #1
  0x100004430:  1f0101eb       cmp      x8, x1
  0x100004434:  2a010054       b.ge     #0x100004458
  0x100004438:  0a00e8d2       mov      x10, #0x4000000000000000
  0x10000443c:  1f010aab       cmn      x8, x10
  0x100004440:  64060054       b.mi     #0x10000450c
  0x100004444:  28f97f92       and      x8, x9, #0xfffffffffffffffe
  0x100004448:  1f0101eb       cmp      x8, x1
  0x10000444c:  08c1819a       csel     x8, x8, x1, gt
  0x100004450:  02000014       b        #0x100004458
  0x100004454:  e80301aa       mov      x8, x1
  0x100004458:  970a40f9       ldr      x23, [x20, #0x10]
  0x10000445c:  1f0117eb       cmp      x8, x23
  0x100004460:  16c1979a       csel     x22, x8, x23, gt
  0x100004464:  760200b4       cbz      x22, #0x1000044b0
  0x100004468:  40000090       adrp     x0, #0x10000c000
  0x10000446c:  00601d91       add      x0, x0, #0x758 ; _$ss23_ContiguousArrayStorageCySfGMd
  0x100004470:  010000b0       adrp     x1, #0x100005000
  0x100004474:  21202891       add      x1, x1, #0xa08 ; _$ss23_ContiguousArrayStorageCySfGMR
  0x100004478:  e1fbff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000447c:  c8f67ed3       lsl      x8, x22, #2
  0x100004480:  01810091       add      x1, x8, #0x20
  0x100004484:  e2008052       mov      w2, #7
  0x100004488:  c5030094       bl       #0x10000539c
  0x10000448c:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004490:  a2030094       bl       #0x100005318
  0x100004494:  088000f1       subs     x8, x0, #0x20
  0x100004498:  097400d1       sub      x9, x0, #0x1d
  0x10000449c:  28b1889a       csel     x8, x9, x8, lt
  0x1000044a0:  08fd4293       asr      x8, x8, #2
  0x1000044a4:  08f97fd3       lsl      x8, x8, #1
  0x1000044a8:  d72201a9       stp      x23, x8, [x22, #0x10]
  0x1000044ac:  03000014       b        #0x1000044b8
  0x1000044b0:  36000090       adrp     x22, #0x100008000
  0x1000044b4:  d66641f9       ldr      x22, [x22, #0x2c8]
  0x1000044b8:  c0820091       add      x0, x22, #0x20
  0x1000044bc:  81820091       add      x1, x20, #0x20
  0x1000044c0:  35010036       tbz      w21, #0, #0x1000044e4
  0x1000044c4:  2808178b       add      x8, x1, x23, lsl #2
  0x1000044c8:  df0214eb       cmp      x22, x20
  0x1000044cc:  020048fa       ccmp     x0, x8, #2, eq
  0x1000044d0:  63000054       b.lo     #0x1000044dc
  0x1000044d4:  e2f67ed3       lsl      x2, x23, #2
  0x1000044d8:  96030094       bl       #0x100005330
  0x1000044dc:  9f0a00f9       str      xzr, [x20, #0x10]
  0x1000044e0:  03000014       b        #0x1000044ec
  0x1000044e4:  e2f67ed3       lsl      x2, x23, #2
  0x1000044e8:  8f030094       bl       #0x100005324
  0x1000044ec:  e00314aa       mov      x0, x20
  0x1000044f0:  60023fd6       blr      x19 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x1000044f4:  e00316aa       mov      x0, x22
  0x1000044f8:  fd7b43a9       ldp      x29, x30, [sp, #0x30]
  0x1000044fc:  f44f42a9       ldp      x20, x19, [sp, #0x20]
  0x100004500:  f65741a9       ldp      x22, x21, [sp, #0x10]
  0x100004504:  f85fc4a8       ldp      x24, x23, [sp], #0x40
  0x100004508:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_10000450c (0x10000450c .. 0x100004510, 4 bytes) ──
sme_runtime_helper_10000450c:
  0x10000450c:  200020d4       brk      #1

; ── PROCEDURE: swift::dictionaryLiteral() (0x100004510 .. 0x100004614, 260 bytes) ──
_$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n:
  0x100004510:  ff0302d1       sub      sp, sp, #0x80 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100004514:  fa6703a9       stp      x26, x25, [sp, #0x30]
  0x100004518:  f85f04a9       stp      x24, x23, [sp, #0x40]
  0x10000451c:  f65705a9       stp      x22, x21, [sp, #0x50]
  0x100004520:  f44f06a9       stp      x20, x19, [sp, #0x60]
  0x100004524:  fd7b07a9       stp      x29, x30, [sp, #0x70]
  0x100004528:  fdc30191       add      x29, sp, #0x70
  0x10000452c:  130840f9       ldr      x19, [x0, #0x10]
  0x100004530:  f30500b4       cbz      x19, #0x1000045ec ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004534:  f50300aa       mov      x21, x0
  0x100004538:  40000090       adrp     x0, #0x10000c000
  0x10000453c:  00001c91       add      x0, x0, #0x700 ; _$ss18_DictionaryStorageCySSypGMd
  0x100004540:  010000b0       adrp     x1, #0x100005000
  0x100004544:  21402791       add      x1, x1, #0x9d0 ; _$ss18_DictionaryStorageCySSypGMR
  0x100004548:  adfbff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000454c:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004550:  e00313aa       mov      x0, x19
  0x100004554:  26030094       bl       #0x1000051ec
  0x100004558:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x10000455c:  f8030091       mov      x24, sp
  0x100004560:  19000191       add      x25, x0, #0x40
  0x100004564:  b5820091       add      x21, x21, #0x20
  0x100004568:  cc030094       bl       #0x100005498
  0x10000456c:  3a008052       mov      w26, #1
  0x100004570:  e1030091       mov      x1, sp
  0x100004574:  e00315aa       mov      x0, x21
  0x100004578:  5f000094       bl       #0x1000046f4 ; _$sSS_yptWOc
  0x10000457c:  f65f40a9       ldp      x22, x23, [sp]
  0x100004580:  e00316aa       mov      x0, x22
  0x100004584:  e10317aa       mov      x1, x23
  0x100004588:  42ffff97       bl       #0x100004290 ; _$ss22__RawDictionaryStorageC4findys10_HashTableV6BucketV6bucket_Sb5foundtxSHRzlFSS_Tg5
  0x10000458c:  41040037       tbnz     w1, #0, #0x100004614
  0x100004590:  08fc43d3       lsr      x8, x0, #3
  0x100004594:  08e57d92       and      x8, x8, #0x1ffffffffffffff8
  0x100004598:  4923c09a       lsl      x9, x26, x0
  0x10000459c:  2a6b68f8       ldr      x10, [x25, x8]
  0x1000045a0:  490109aa       orr      x9, x10, x9
  0x1000045a4:  296b28f8       str      x9, [x25, x8]
  0x1000045a8:  881a40f9       ldr      x8, [x20, #0x30]
  0x1000045ac:  0811008b       add      x8, x8, x0, lsl #4
  0x1000045b0:  165d00a9       stp      x22, x23, [x8]
  0x1000045b4:  881e40f9       ldr      x8, [x20, #0x38]
  0x1000045b8:  0115008b       add      x1, x8, x0, lsl #5
  0x1000045bc:  00430091       add      x0, x24, #0x10
  0x1000045c0:  61000094       bl       #0x100004744 ; _$sypWOb
  0x1000045c4:  880a40f9       ldr      x8, [x20, #0x10]
  0x1000045c8:  080500b1       adds     x8, x8, #1
  0x1000045cc:  66020054       b.vs     #0x100004618
  0x1000045d0:  880a00f9       str      x8, [x20, #0x10]
  0x1000045d4:  b5c20091       add      x21, x21, #0x30
  0x1000045d8:  730600f1       subs     x19, x19, #1
  0x1000045dc:  a1fcff54       b.ne     #0x100004570
  0x1000045e0:  e00314aa       mov      x0, x20
  0x1000045e4:  aa030094       bl       #0x10000548c
  0x1000045e8:  03000014       b        #0x1000045f4
  0x1000045ec:  34000090       adrp     x20, #0x100008000
  0x1000045f0:  946a41f9       ldr      x20, [x20, #0x2d0]
  0x1000045f4:  e00314aa       mov      x0, x20
  0x1000045f8:  fd7b47a9       ldp      x29, x30, [sp, #0x70]
  0x1000045fc:  f44f46a9       ldp      x20, x19, [sp, #0x60]
  0x100004600:  f65745a9       ldp      x22, x21, [sp, #0x50]
  0x100004604:  f85f44a9       ldp      x24, x23, [sp, #0x40]
  0x100004608:  fa6743a9       ldp      x26, x25, [sp, #0x30]
  0x10000460c:  ff030291       add      sp, sp, #0x80
  0x100004610:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_100004614 (0x100004614 .. 0x10000461c, 8 bytes) ──
sme_runtime_helper_100004614:
  0x100004614:  200020d4       brk      #1
  0x100004618:  200020d4       brk      #1

; ── PROCEDURE: ___swift_instantiateConcreteTypeFromMangledNameAbstractV2 (0x10000461c .. 0x10000462c, 16 bytes) ──
___swift_instantiateConcreteTypeFromMangledNameAbstractV2:
  0x10000461c:  080040f9       ldr      x8, [x0]
  0x100004620:  680000b4       cbz      x8, #0x10000462c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004624:  00f97f92       and      x0, x8, #0xfffffffffffffffe
  0x100004628:  c0035fd6       ret      

; ── PROCEDURE: flirt_swift_bridge_object_retain_462c (0x10000462c .. 0x100004670, 68 bytes) ──
flirt_swift_bridge_object_retain_462c:
  0x10000462c:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] swift_bridge_object_retain (libswiftCore.dylib) — 99% confidence
  0x100004630:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004634:  fd430091       add      x29, sp, #0x10
  0x100004638:  f30300aa       mov      x19, x0
  0x10000463c:  280040f9       ldr      x8, [x1]
  0x100004640:  02fd6093       asr      x2, x8, #0x20
  0x100004644:  21c0288b       add      x1, x1, w8, sxtw
  0x100004648:  e01f8052       mov      w0, #0xff
  0x10000464c:  030080d2       mov      x3, #0
  0x100004650:  040080d2       mov      x4, #0
  0x100004654:  82030094       bl       #0x10000545c
  0x100004658:  080040b2       orr      x8, x0, #1
  0x10000465c:  680200f9       str      x8, [x19]
  0x100004660:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004664:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004668:  00f97f92       and      x0, x8, #0xfffffffffffffffe
  0x10000466c:  c0035fd6       ret      

; ── PROCEDURE: ___swift_project_boxed_opaque_existential_1 (0x100004670 .. 0x100004694, 36 bytes) ──
___swift_project_boxed_opaque_existential_1:
  0x100004670:  28805ff8       ldur     x8, [x1, #-8]
  0x100004674:  085140b9       ldr      w8, [x8, #0x50]
  0x100004678:  c8008836       tbz      w8, #0x11, #0x100004690 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x10000467c:  090040f9       ldr      x9, [x0]
  0x100004680:  081d4092       and      x8, x8, #0xff
  0x100004684:  0a410091       add      x10, x8, #0x10
  0x100004688:  4801288a       bic      x8, x10, x8
  0x10000468c:  2001088b       add      x0, x9, x8
  0x100004690:  c0035fd6       ret      

; ── PROCEDURE: ___swift_destroy_boxed_opaque_existential_1 (0x100004694 .. 0x1000046b4, 32 bytes) ──
___swift_destroy_boxed_opaque_existential_1:
  0x100004694:  010c40f9       ldr      x1, [x0, #0x18] ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 98% confidence
  0x100004698:  28805ff8       ldur     x8, [x1, #-8]
  0x10000469c:  09494139       ldrb     w9, [x8, #0x52]
  0x1000046a0:  69000837       tbnz     w9, #1, #0x1000046ac ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000046a4:  020540f9       ldr      x2, [x8, #8]
  0x1000046a8:  40001fd6       br       x2
  0x1000046ac:  000040f9       ldr      x0, [x0]
  0x1000046b0:  77030014       b        #0x10000548c

; ── PROCEDURE: swift::Foundation::Data::_Representation() (0x1000046b4 .. 0x1000046f4, 64 bytes) ──
_$s10Foundation4DataV15_RepresentationOWOe:
  0x1000046b4:  28fc7ed3       lsr      x8, x1, #0x3e ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 98% confidence
  0x1000046b8:  1f050071       cmp      w8, #1
  0x1000046bc:  60010054       b.eq     #0x1000046e8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000046c0:  1f090071       cmp      w8, #2
  0x1000046c4:  61010054       b.ne     #0x1000046f0
  0x1000046c8:  f44fbea9       stp      x20, x19, [sp, #-0x20]!
  0x1000046cc:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000046d0:  fd430091       add      x29, sp, #0x10
  0x1000046d4:  f30301aa       mov      x19, x1
  0x1000046d8:  6d030094       bl       #0x10000548c
  0x1000046dc:  e10313aa       mov      x1, x19
  0x1000046e0:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x1000046e4:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x1000046e8:  20f44092       and      x0, x1, #0x3fffffffffffffff
  0x1000046ec:  68030014       b        #0x10000548c
  0x1000046f0:  c0035fd6       ret      

; ── PROCEDURE: _$sSS_yptWOc (0x1000046f4 .. 0x100004744, 80 bytes) ──
_$sSS_yptWOc:
  0x1000046f4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x1000046f8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000046fc:  fd430091       add      x29, sp, #0x10
  0x100004700:  f30301aa       mov      x19, x1
  0x100004704:  f40300aa       mov      x20, x0
  0x100004708:  40000090       adrp     x0, #0x10000c000
  0x10000470c:  00201c91       add      x0, x0, #0x708 ; _$sSS_yptMd
  0x100004710:  010000b0       adrp     x1, #0x100005000
  0x100004714:  21602791       add      x1, x1, #0x9d8 ; _$sSS_yptMR
  0x100004718:  39fbff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x10000471c:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004720:  08805ff8       ldur     x8, [x0, #-8]
  0x100004724:  080940f9       ldr      x8, [x8, #0x10]
  0x100004728:  e00313aa       mov      x0, x19
  0x10000472c:  e10314aa       mov      x1, x20
  0x100004730:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100004734:  e00313aa       mov      x0, x19
  0x100004738:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x10000473c:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004740:  c0035fd6       ret      

; ── PROCEDURE: _$sypWOb (0x100004744 .. 0x100004754, 16 bytes) ──
_$sypWOb:
  0x100004744:  000440ad       ldp      q0, q1, [x0] ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100004748:  200400ad       stp      q0, q1, [x1]
  0x10000474c:  e00301aa       mov      x0, x1
  0x100004750:  c0035fd6       ret      

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_4754 (0x100004754 .. 0x100004764, 16 bytes) ──
flirt_dyld_stub_binder_trampoline_4754:
  0x100004754:  e00314aa       mov      x0, x20 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 92% confidence
  0x100004758:  21028052       mov      w1, #0x11
  0x10000475c:  e2008052       mov      w2, #7
  0x100004760:  24030014       b        #0x1000053f0

; ── PROCEDURE: swift::main() (0x100004764 .. 0x1000047b4, 80 bytes) ──
_$s4mainySbcfU0_yyScMYccfU_TA:
  0x100004764:  ff8304d1       sub      sp, sp, #0x120 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100004768:  f85f0ea9       stp      x24, x23, [sp, #0xe0]
  0x10000476c:  f6570fa9       stp      x22, x21, [sp, #0xf0]
  0x100004770:  f44f10a9       stp      x20, x19, [sp, #0x100]
  0x100004774:  fd7b11a9       stp      x29, x30, [sp, #0x110]
  0x100004778:  fd430491       add      x29, sp, #0x110
  0x10000477c:  88424039       ldrb     w8, [x20, #0x10]
  0x100004780:  1f050071       cmp      w8, #1
  0x100004784:  81010054       b.ne     #0x1000047b4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004788:  48000090       adrp     x8, #0x10000c000
  0x10000478c:  145944f9       ldr      x20, [x8, #0x8b0] ; _$s4main8spectrum029_12232F587A4C5CD8B1EEDF696793D2FCLLAA19SystemAudioSpectrumACLLCvp
  0x100004790:  150080d2       mov      x21, #0
  0x100004794:  a4f6ff97       bl       #0x100002224 ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC5startyyKF
  0x100004798:  150800b5       cbnz     x21, #0x100004898
  0x10000479c:  fd7b51a9       ldp      x29, x30, [sp, #0x110]
  0x1000047a0:  f44f50a9       ldp      x20, x19, [sp, #0x100]
  0x1000047a4:  f6574fa9       ldp      x22, x21, [sp, #0xf0]
  0x1000047a8:  f85f4ea9       ldp      x24, x23, [sp, #0xe0]
  0x1000047ac:  ff830491       add      sp, sp, #0x120
  0x1000047b0:  c0035fd6       ret      

; ── PROCEDURE: flirt_fast_memcpy_vec_47b4 (0x1000047b4 .. 0x1000049c8, 532 bytes) ──
flirt_fast_memcpy_vec_47b4:
  0x1000047b4:  40000090       adrp     x0, #0x10000c000 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x1000047b8:  00a01b91       add      x0, x0, #0x6e8 ; _$ss23_ContiguousArrayStorageCySS_yptGMd
  0x1000047bc:  010000b0       adrp     x1, #0x100005000
  0x1000047c0:  21002791       add      x1, x1, #0x9c0 ; _$ss23_ContiguousArrayStorageCySS_yptGMR
  0x1000047c4:  0efbff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000047c8:  e1c30091       add      x1, sp, #0x30
  0x1000047cc:  2a030094       bl       #0x100005474
  0x1000047d0:  f30300aa       mov      x19, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000047d4:  68008052       mov      w8, #3
  0x1000047d8:  c9008052       mov      w9, #6
  0x1000047dc:  082401a9       stp      x8, x9, [x0, #0x10]
  0x1000047e0:  882e8f52       mov      w8, #0x7974
  0x1000047e4:  08aeac72       movk     w8, #0x6570, lsl #16
  0x1000047e8:  29000090       adrp     x9, #0x100008000
  0x1000047ec:  29d140f9       ldr      x9, [x9, #0x1a0]
  0x1000047f0:  0a80fcd2       mov      x10, #-0x1c00000000000000
  0x1000047f4:  082802a9       stp      x8, x10, [x0, #0x20]
  0x1000047f8:  a84c8ed2       mov      x8, #0x7265
  0x1000047fc:  48eeadf2       movk     x8, #0x6f72, lsl #16
  0x100004800:  480ec0f2       movk     x8, #0x72, lsl #32
  0x100004804:  0aa0fcd2       mov      x10, #-0x1b00000000000000
  0x100004808:  082803a9       stp      x8, x10, [x0, #0x30]
  0x10000480c:  e80d8ed2       mov      x8, #0x706f
  0x100004810:  a84caef2       movk     x8, #0x7265, lsl #16
  0x100004814:  288ccef2       movk     x8, #0x7461, lsl #32
  0x100004818:  28ededf2       movk     x8, #0x6f69, lsl #48
  0x10000481c:  09a004a9       stp      x9, x8, [x0, #0x48]
  0x100004820:  c80d80d2       mov      x8, #0x6e
  0x100004824:  0820fdf2       movk     x8, #0xe900, lsl #48
  0x100004828:  0aae8cd2       mov      x10, #0x6570
  0x10000482c:  4aaeadf2       movk     x10, #0x6d72, lsl #16
  0x100004830:  2a6dcef2       movk     x10, #0x7369, lsl #32
  0x100004834:  6a2eedf2       movk     x10, #0x6973, lsl #48
  0x100004838:  08a805a9       stp      x8, x10, [x0, #0x58]
  0x10000483c:  e8cd8dd2       mov      x8, #0x6e6f
  0x100004840:  0840fdf2       movk     x8, #0xea00, lsl #48
  0x100004844:  083400f9       str      x8, [x0, #0x68]
  0x100004848:  688e8ed2       mov      x8, #0x7473
  0x10000484c:  288caef2       movk     x8, #0x7461, lsl #16
  0x100004850:  a86ecef2       movk     x8, #0x7375, lsl #32
  0x100004854:  09a007a9       stp      x9, x8, [x0, #0x78]
  0x100004858:  08c0fcd2       mov      x8, #-0x1a00000000000000
  0x10000485c:  29000090       adrp     x9, #0x100008000
  0x100004860:  29f940f9       ldr      x9, [x9, #0x1f0]
  0x100004864:  095400f9       str      x9, [x0, #0xa8]
  0x100004868:  29008052       mov      w9, #1
  0x10000486c:  08a408a9       stp      x8, x9, [x0, #0x88]
  0x100004870:  28ffff97       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100004874:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004878:  e00313aa       mov      x0, x19
  0x10000487c:  04030094       bl       #0x10000548c
  0x100004880:  e00314aa       mov      x0, x20
  0x100004884:  daf5ff97       bl       #0x100001fec ; _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF
  0x100004888:  e00314aa       mov      x0, x20
  0x10000488c:  d0020094       bl       #0x1000053cc
  0x100004890:  20008052       mov      w0, #1
  0x100004894:  9b020094       bl       #0x100005300
  0x100004898:  f51300f9       str      x21, [sp, #0x20]
  0x10000489c:  e00315aa       mov      x0, x21
  0x1000048a0:  e0020094       bl       #0x100005420
  0x1000048a4:  40000090       adrp     x0, #0x10000c000
  0x1000048a8:  00a01c91       add      x0, x0, #0x728 ; _$ss5Error_pMd
  0x1000048ac:  010000b0       adrp     x1, #0x100005000
  0x1000048b0:  21a02791       add      x1, x1, #0x9e8 ; _$ss5Error_pMR
  0x1000048b4:  d2faff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000048b8:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x1000048bc:  23000090       adrp     x3, #0x100008000
  0x1000048c0:  63002391       add      x3, x3, #0x8c0
  0x1000048c4:  e0230091       add      x0, sp, #8
  0x1000048c8:  e1830091       add      x1, sp, #0x20
  0x1000048cc:  040080d2       mov      x4, #0
  0x1000048d0:  cb020094       bl       #0x1000053fc
  0x1000048d4:  00070036       tbz      w0, #0, #0x1000049b4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000048d8:  f6cf40a9       ldp      x22, x19, [sp, #8]
  0x1000048dc:  f71b40b9       ldr      w23, [sp, #0x18]
  0x1000048e0:  40000090       adrp     x0, #0x10000c000
  0x1000048e4:  00a01b91       add      x0, x0, #0x6e8 ; _$ss23_ContiguousArrayStorageCySS_yptGMd
  0x1000048e8:  010000b0       adrp     x1, #0x100005000
  0x1000048ec:  21002791       add      x1, x1, #0x9c0 ; _$ss23_ContiguousArrayStorageCySS_yptGMR
  0x1000048f0:  c3faff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x1000048f4:  e1c30091       add      x1, sp, #0x30
  0x1000048f8:  df020094       bl       #0x100005474
  0x1000048fc:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004900:  68008052       mov      w8, #3
  0x100004904:  c9008052       mov      w9, #6
  0x100004908:  082401a9       stp      x8, x9, [x0, #0x10]
  0x10000490c:  882e8f52       mov      w8, #0x7974
  0x100004910:  08aeac72       movk     w8, #0x6570, lsl #16
  0x100004914:  0980fcd2       mov      x9, #-0x1c00000000000000
  0x100004918:  082402a9       stp      x8, x9, [x0, #0x20]
  0x10000491c:  28000090       adrp     x8, #0x100008000
  0x100004920:  08d140f9       ldr      x8, [x8, #0x1a0]
  0x100004924:  a94c8ed2       mov      x9, #0x7265
  0x100004928:  49eeadf2       movk     x9, #0x6f72, lsl #16
  0x10000492c:  490ec0f2       movk     x9, #0x72, lsl #32
  0x100004930:  0aa0fcd2       mov      x10, #-0x1b00000000000000
  0x100004934:  092803a9       stp      x9, x10, [x0, #0x30]
  0x100004938:  e90d8ed2       mov      x9, #0x706f
  0x10000493c:  a94caef2       movk     x9, #0x7265, lsl #16
  0x100004940:  298ccef2       movk     x9, #0x7461, lsl #32
  0x100004944:  29ededf2       movk     x9, #0x6f69, lsl #48
  0x100004948:  08a404a9       stp      x8, x9, [x0, #0x48]
  0x10000494c:  c90d80d2       mov      x9, #0x6e
  0x100004950:  0920fdf2       movk     x9, #0xe900, lsl #48
  0x100004954:  09d805a9       stp      x9, x22, [x0, #0x58]
  0x100004958:  133400f9       str      x19, [x0, #0x68]
  0x10000495c:  698e8ed2       mov      x9, #0x7473
  0x100004960:  298caef2       movk     x9, #0x7461, lsl #16
  0x100004964:  a96ecef2       movk     x9, #0x7375, lsl #32
  0x100004968:  08a407a9       stp      x8, x9, [x0, #0x78]
  0x10000496c:  08c0fcd2       mov      x8, #-0x1a00000000000000
  0x100004970:  084400f9       str      x8, [x0, #0x88]
  0x100004974:  28000090       adrp     x8, #0x100008000
  0x100004978:  084941f9       ldr      x8, [x8, #0x290]
  0x10000497c:  085400f9       str      x8, [x0, #0xa8]
  0x100004980:  179000b9       str      w23, [x0, #0x90]
  0x100004984:  e00313aa       mov      x0, x19
  0x100004988:  94020094       bl       #0x1000053d8
  0x10000498c:  e00315aa       mov      x0, x21
  0x100004990:  e0feff97       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100004994:  f30300aa       mov      x19, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004998:  e00315aa       mov      x0, x21
  0x10000499c:  bc020094       bl       #0x10000548c
  0x1000049a0:  e00313aa       mov      x0, x19
  0x1000049a4:  92f5ff97       bl       #0x100001fec ; _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF
  0x1000049a8:  e00313aa       mov      x0, x19
  0x1000049ac:  88020094       bl       #0x1000053cc
  0x1000049b0:  03000014       b        #0x1000049bc
  0x1000049b4:  e01340f9       ldr      x0, [sp, #0x20]
  0x1000049b8:  97020094       bl       #0x100005414
  0x1000049bc:  2cf8ff97       bl       #0x100002a6c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC4stopyyF
  0x1000049c0:  20008052       mov      w0, #1
  0x1000049c4:  4f020094       bl       #0x100005300

; ── PROCEDURE: swift::OS_dispatch_source() (0x1000049c8 .. 0x1000049d8, 16 bytes) ──
_$sSo18OS_dispatch_sourceCMaTm:
  0x1000049c8:  200040f9       ldr      x0, [x1]
  0x1000049cc:  600000b4       cbz      x0, #0x1000049d8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x1000049d0:  010080d2       mov      x1, #0
  0x1000049d4:  c0035fd6       ret      

; ── PROCEDURE: flirt_pthread_mutex_scoped_lock_49d8 (0x1000049d8 .. 0x100004a08, 48 bytes) ──
flirt_pthread_mutex_scoped_lock_49d8:
  0x1000049d8:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x1000049dc:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x1000049e0:  fd430091       add      x29, sp, #0x10
  0x1000049e4:  f30301aa       mov      x19, x1
  0x1000049e8:  400040f9       ldr      x0, [x2]
  0x1000049ec:  57020094       bl       #0x100005348
  0x1000049f0:  92020094       bl       #0x100005438
  0x1000049f4:  60fe9fc8       stlr     x0, [x19]
  0x1000049f8:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x1000049fc:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004a00:  010080d2       mov      x1, #0
  0x100004a04:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error() (0x100004a08 .. 0x100004a18, 16 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWl:
  0x100004a08:  48000090       adrp     x8, #0x10000c000
  0x100004a0c:  005d44f9       ldr      x0, [x8, #0x8b8] ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWL
  0x100004a10:  400000b4       cbz      x0, #0x100004a18 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004a14:  c0035fd6       ret      

; ── PROCEDURE: flirt_security_audit_command_exec_4a18 (0x100004a18 .. 0x100004a48, 48 bytes) ──
flirt_security_audit_command_exec_4a18:
  0x100004a18:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 97% confidence
  0x100004a1c:  fd030091       mov      x29, sp
  0x100004a20:  000000b0       adrp     x0, #0x100005000
  0x100004a24:  00c02991       add      x0, x0, #0xa70 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVs5ErrorAAMc
  0x100004a28:  21000090       adrp     x1, #0x100008000
  0x100004a2c:  21002391       add      x1, x1, #0x8c0
  0x100004a30:  8e020094       bl       #0x100005468
  0x100004a34:  48000090       adrp     x8, #0x10000c000
  0x100004a38:  08e12291       add      x8, x8, #0x8b8 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVADs5ErrorAAWL
  0x100004a3c:  00fd9fc8       stlr     x0, [x8]
  0x100004a40:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x100004a44:  c0035fd6       ret      

; ── PROCEDURE: flirt_cxx_exception_landing_pad_4a48 (0x100004a48 .. 0x100004a6c, 36 bytes) ──
flirt_cxx_exception_landing_pad_4a48:
  0x100004a48:  fd7bbfa9       stp      x29, x30, [sp, #-0x10]! ; [FLIRT] cxx_exception_landing_pad (libc++abi.dylib) — 98% confidence
  0x100004a4c:  fd030091       mov      x29, sp
  0x100004a50:  80420091       add      x0, x20, #0x10
  0x100004a54:  9d020094       bl       #0x1000054c8
  0x100004a58:  e00314aa       mov      x0, x20
  0x100004a5c:  01038052       mov      w1, #0x18
  0x100004a60:  e2008052       mov      w2, #7
  0x100004a64:  fd7bc1a8       ldp      x29, x30, [sp], #0x10
  0x100004a68:  62020014       b        #0x1000053f0

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (0x100004a6c .. 0x100004ac4, 88 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC5startyyKFySPySo0C9TimeStampVG_SPySo0C10BufferListVGAHSpyAJGAHtcfU_TA:
  0x100004a6c:  ff0301d1       sub      sp, sp, #0x40 ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x100004a70:  f44f02a9       stp      x20, x19, [sp, #0x20]
  0x100004a74:  fd7b03a9       stp      x29, x30, [sp, #0x30]
  0x100004a78:  fdc30091       add      x29, sp, #0x30
  0x100004a7c:  f30301aa       mov      x19, x1
  0x100004a80:  80420091       add      x0, x20, #0x10
  0x100004a84:  e1230091       add      x1, sp, #8
  0x100004a88:  020080d2       mov      x2, #0
  0x100004a8c:  030080d2       mov      x3, #0
  0x100004a90:  4c020094       bl       #0x1000053c0
  0x100004a94:  80420091       add      x0, x20, #0x10
  0x100004a98:  92020094       bl       #0x1000054e0
  0x100004a9c:  c00000b4       cbz      x0, #0x100004ab4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004aa0:  f40300aa       mov      x20, x0
  0x100004aa4:  e00313aa       mov      x0, x19
  0x100004aa8:  69faff97       bl       #0x10000344c ; _$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLC7consumeyySPySo0C10BufferListVGF
  0x100004aac:  e00314aa       mov      x0, x20
  0x100004ab0:  77020094       bl       #0x10000548c
  0x100004ab4:  fd7b43a9       ldp      x29, x30, [sp, #0x30]
  0x100004ab8:  f44f42a9       ldp      x20, x19, [sp, #0x20]
  0x100004abc:  ff030191       add      sp, sp, #0x40
  0x100004ac0:  c0035fd6       ret      

; ── PROCEDURE: swift::IndexingIterator::CoreAudio::UnsafeMutable::BufferListPointer() (0x100004ac4 .. 0x100004b0c, 72 bytes) ──
_$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGWOh:
  0x100004ac4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] security_audit_command_exec (libsystem_c.dylib) — 99% confidence
  0x100004ac8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004acc:  fd430091       add      x29, sp, #0x10
  0x100004ad0:  f30300aa       mov      x19, x0
  0x100004ad4:  40000090       adrp     x0, #0x10000c000
  0x100004ad8:  00201d91       add      x0, x0, #0x748 ; _$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGMd
  0x100004adc:  010000b0       adrp     x1, #0x100005000
  0x100004ae0:  21002891       add      x1, x1, #0xa00 ; _$ss16IndexingIteratorVy9CoreAudio013UnsafeMutableD17BufferListPointerVGMR
  0x100004ae4:  46faff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100004ae8:  e10300aa       mov      x1, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004aec:  08805ff8       ldur     x8, [x0, #-8]
  0x100004af0:  080540f9       ldr      x8, [x8, #8]
  0x100004af4:  e00313aa       mov      x0, x19
  0x100004af8:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100004afc:  e00313aa       mov      x0, x19
  0x100004b00:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004b04:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004b08:  c0035fd6       ret      

; ── PROCEDURE: swift::Element::max::ArraySlice::Tf4x_() (0x100004b0c .. 0x100004b20, 20 bytes) ──
_$sSTsSL7ElementRpzrlE3maxABSgyFs10ArraySliceVySfG_Tg5Tf4x_n:
  0x100004b0c:  48fc41d3       lsr      x8, x2, #1
  0x100004b10:  3f0008eb       cmp      x1, x8
  0x100004b14:  61000054       b.ne     #0x100004b20 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004b18:  2000c0d2       mov      x0, #0x100000000
  0x100004b1c:  c0035fd6       ret      

; ── PROCEDURE: flirt_matrix_nested_solver_kernel_4b20 (0x100004b20 .. 0x100004b6c, 76 bytes) ──
flirt_matrix_nested_solver_kernel_4b20:
  0x100004b20:  6a020054       b.ge     #0x100004b6c ; [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 97% confidence
  0x100004b24:  007861bc       ldr      s0, [x0, x1, lsl #2]
  0x100004b28:  29040091       add      x9, x1, #1
  0x100004b2c:  3f0108eb       cmp      x9, x8
  0x100004b30:  a0010054       b.eq     #0x100004b64
  0x100004b34:  ea010054       b.ge     #0x100004b70
  0x100004b38:  e90321aa       mvn      x9, x1
  0x100004b3c:  2801088b       add      x8, x9, x8
  0x100004b40:  0908018b       add      x9, x0, x1, lsl #2
  0x100004b44:  29110091       add      x9, x9, #4
  0x100004b48:  011ca04e       mov      v1.16b, v0.16b
  0x100004b4c:  224540bc       ldr      s2, [x9], #4
  0x100004b50:  2020221e       fcmp     s1, s2
  0x100004b54:  404c201e       fcsel    s0, s2, s0, mi
  0x100004b58:  414c211e       fcsel    s1, s2, s1, mi
  0x100004b5c:  080500f1       subs     x8, x8, #1
  0x100004b60:  61ffff54       b.ne     #0x100004b4c
  0x100004b64:  0000261e       fmov     w0, s0
  0x100004b68:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_100004b6c (0x100004b6c .. 0x100004b74, 8 bytes) ──
sme_runtime_helper_100004b6c:
  0x100004b6c:  200020d4       brk      #1
  0x100004b70:  200020d4       brk      #1

; ── PROCEDURE: swift::Dispatch() (0x100004b74 .. 0x100004bb4, 64 bytes) ──
_$s8Dispatch0A13WorkItemFlagsVACs10SetAlgebraAAWlTm:
  0x100004b74:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100004b78:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004b7c:  fd430091       add      x29, sp, #0x10
  0x100004b80:  f30300aa       mov      x19, x0
  0x100004b84:  000040f9       ldr      x0, [x0]
  0x100004b88:  000100b5       cbnz     x0, #0x100004ba8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004b8c:  f40302aa       mov      x20, x2
  0x100004b90:  e01f8052       mov      w0, #0xff
  0x100004b94:  20003fd6       blr      x1 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100004b98:  e10300aa       mov      x1, x0
  0x100004b9c:  e00314aa       mov      x0, x20
  0x100004ba0:  32020094       bl       #0x100005468
  0x100004ba4:  60fe9fc8       stlr     x0, [x19]
  0x100004ba8:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004bac:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004bb0:  c0035fd6       ret      

; ── PROCEDURE: swift::CollectionOfOne::UInt8::Foundation::ContiguousBytes() (0x100004bb4 .. 0x100004bf8, 68 bytes) ──
_$ss15CollectionOfOneVys5UInt8VGAByxG10Foundation15ContiguousBytesAgDRszlWlTm:
  0x100004bb4:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100004bb8:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004bbc:  fd430091       add      x29, sp, #0x10
  0x100004bc0:  f30300aa       mov      x19, x0
  0x100004bc4:  000040f9       ldr      x0, [x0]
  0x100004bc8:  200100b5       cbnz     x0, #0x100004bec ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004bcc:  f40303aa       mov      x20, x3
  0x100004bd0:  e00301aa       mov      x0, x1
  0x100004bd4:  e10302aa       mov      x1, x2
  0x100004bd8:  91feff97       bl       #0x10000461c ; ___swift_instantiateConcreteTypeFromMangledNameAbstractV2
  0x100004bdc:  e10300aa       mov      x1, x0
  0x100004be0:  e00314aa       mov      x0, x20
  0x100004be4:  21020094       bl       #0x100005468
  0x100004be8:  60fe9fc8       stlr     x0, [x19]
  0x100004bec:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004bf0:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004bf4:  c0035fd6       ret      

; ── PROCEDURE: swift::main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004bf8 .. 0x100004d30, 312 bytes) ──
_$s4main19SystemAudioSpectrum029_12232F587A4C5CD8B1EEDF696793F2FCLLCADycfcyycfU_TA:
  0x100004bf8:  ff4303d1       sub      sp, sp, #0xd0 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100004bfc:  f6570aa9       stp      x22, x21, [sp, #0xa0]
  0x100004c00:  f44f0ba9       stp      x20, x19, [sp, #0xb0]
  0x100004c04:  fd7b0ca9       stp      x29, x30, [sp, #0xc0]
  0x100004c08:  fd030391       add      x29, sp, #0xc0
  0x100004c0c:  80420091       add      x0, x20, #0x10
  0x100004c10:  a1e300d1       sub      x1, x29, #0x38
  0x100004c14:  020080d2       mov      x2, #0
  0x100004c18:  030080d2       mov      x3, #0
  0x100004c1c:  e9010094       bl       #0x1000053c0
  0x100004c20:  80420091       add      x0, x20, #0x10
  0x100004c24:  2f020094       bl       #0x1000054e0
  0x100004c28:  a00700b4       cbz      x0, #0x100004d1c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004c2c:  f30300aa       mov      x19, x0
  0x100004c30:  002c40f9       ldr      x0, [x0, #0x58]
  0x100004c34:  83020094       bl       #0x100005640 ; objc_msgSend -> -[self lock] // [SME:OBJC-DISPATCH]
  0x100004c38:  60da45a9       ldp      x0, x22, [x19, #0x58]
  0x100004c3c:  7f3200f9       str      xzr, [x19, #0x60]
  0x100004c40:  c0020094       bl       #0x100005740 ; objc_msgSend -> -[self unlock] // [SME:OBJC-DISPATCH]
  0x100004c44:  960600b4       cbz      x22, #0x100004d14
  0x100004c48:  40000090       adrp     x0, #0x10000c000
  0x100004c4c:  00a01b91       add      x0, x0, #0x6e8 ; _$ss23_ContiguousArrayStorageCySS_yptGMd
  0x100004c50:  010000b0       adrp     x1, #0x100005000
  0x100004c54:  21002791       add      x1, x1, #0x9c0 ; _$ss23_ContiguousArrayStorageCySS_yptGMR
  0x100004c58:  e9f9ff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100004c5c:  e1230091       add      x1, sp, #8
  0x100004c60:  05020094       bl       #0x100005474
  0x100004c64:  f40300aa       mov      x20, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004c68:  080000b0       adrp     x8, #0x100005000
  0x100004c6c:  0031c23d       ldr      q0, [x8, #0x8c0]
  0x100004c70:  882e8f52       mov      w8, #0x7974
  0x100004c74:  08aeac72       movk     w8, #0x6570, lsl #16
  0x100004c78:  f50300aa       mov      x21, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004c7c:  a80e02f8       str      x8, [x21, #0x20]!
  0x100004c80:  0004803d       str      q0, [x0, #0x10]
  0x100004c84:  0880fcd2       mov      x8, #-0x1c00000000000000
  0x100004c88:  29000090       adrp     x9, #0x100008000
  0x100004c8c:  29d140f9       ldr      x9, [x9, #0x1a0]
  0x100004c90:  8aad8cd2       mov      x10, #0x656c
  0x100004c94:  caaeacf2       movk     x10, #0x6576, lsl #16
  0x100004c98:  8a6dcef2       movk     x10, #0x736c, lsl #32
  0x100004c9c:  08a802a9       stp      x8, x10, [x0, #0x28]
  0x100004ca0:  08c0fcd2       mov      x8, #-0x1a00000000000000
  0x100004ca4:  081c00f9       str      x8, [x0, #0x38]
  0x100004ca8:  09a804a9       stp      x9, x10, [x0, #0x48]
  0x100004cac:  082c00f9       str      x8, [x0, #0x58]
  0x100004cb0:  40000090       adrp     x0, #0x10000c000
  0x100004cb4:  00a01d91       add      x0, x0, #0x768 ; _$sSaySfGMd
  0x100004cb8:  010000b0       adrp     x1, #0x100005000
  0x100004cbc:  21602891       add      x1, x1, #0xa18 ; _$sSaySfGMR
  0x100004cc0:  cff9ff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100004cc4:  803e00f9       str      x0, [x20, #0x78]
  0x100004cc8:  963200f9       str      x22, [x20, #0x60]
  0x100004ccc:  e00314aa       mov      x0, x20
  0x100004cd0:  10feff97       bl       #0x100004510 ; _$sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfCSS_ypTt0g5Tf4g_n
  0x100004cd4:  f60300aa       mov      x22, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004cd8:  e00314aa       mov      x0, x20
  0x100004cdc:  f2010094       bl       #0x1000054a4
  0x100004ce0:  40000090       adrp     x0, #0x10000c000
  0x100004ce4:  00201c91       add      x0, x0, #0x708 ; _$sSS_yptMd
  0x100004ce8:  010000b0       adrp     x1, #0x100005000
  0x100004cec:  21602791       add      x1, x1, #0x9d8 ; _$sSS_yptMR
  0x100004cf0:  c3f9ff97       bl       #0x1000033fc ; ___swift_instantiateConcreteTypeFromMangledNameV2
  0x100004cf4:  e20300aa       mov      x2, x0 ; __METACLASS_DATA__TtC4mainP33_12232F587A4C5CD8B1EEDF696793A4FC19SystemAudioSpectrum
  0x100004cf8:  e00315aa       mov      x0, x21
  0x100004cfc:  41008052       mov      w1, #2
  0x100004d00:  aa010094       bl       #0x1000053a8
  0x100004d04:  e00316aa       mov      x0, x22
  0x100004d08:  b9f4ff97       bl       #0x100001fec ; _$s4main4emit029_12232F587A4C5CD8B1EEDF696793D2FCLLyySDySSypGF
  0x100004d0c:  e00316aa       mov      x0, x22
  0x100004d10:  af010094       bl       #0x1000053cc
  0x100004d14:  e00313aa       mov      x0, x19
  0x100004d18:  dd010094       bl       #0x10000548c
  0x100004d1c:  fd7b4ca9       ldp      x29, x30, [sp, #0xc0]
  0x100004d20:  f44f4ba9       ldp      x20, x19, [sp, #0xb0]
  0x100004d24:  f6574aa9       ldp      x22, x21, [sp, #0xa0]
  0x100004d28:  ff430391       add      sp, sp, #0xd0
  0x100004d2c:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004d30 .. 0x100004d34, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwCP:
  0x100004d30:  03000014       b        #0x100004d3c ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwCPTm

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004d34 .. 0x100004d3c, 8 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwxx:
  0x100004d34:  000440f9       ldr      x0, [x0, #8] ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004d38:  a5010014       b        #0x1000053cc

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004d3c .. 0x100004d70, 52 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwCPTm:
  0x100004d3c:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100004d40:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004d44:  fd430091       add      x29, sp, #0x10
  0x100004d48:  f30300aa       mov      x19, x0
  0x100004d4c:  280040a9       ldp      x8, x0, [x1]
  0x100004d50:  680200a9       stp      x8, x0, [x19]
  0x100004d54:  281040b9       ldr      w8, [x1, #0x10]
  0x100004d58:  681200b9       str      w8, [x19, #0x10]
  0x100004d5c:  9f010094       bl       #0x1000053d8
  0x100004d60:  e00313aa       mov      x0, x19
  0x100004d64:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004d68:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004d6c:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004d70 .. 0x100004dc4, 84 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwca:
  0x100004d70:  f657bda9       stp      x22, x21, [sp, #-0x30]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100004d74:  f44f01a9       stp      x20, x19, [sp, #0x10]
  0x100004d78:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x100004d7c:  fd830091       add      x29, sp, #0x20
  0x100004d80:  f30301aa       mov      x19, x1
  0x100004d84:  f40300aa       mov      x20, x0
  0x100004d88:  280040f9       ldr      x8, [x1]
  0x100004d8c:  080000f9       str      x8, [x0]
  0x100004d90:  200440f9       ldr      x0, [x1, #8]
  0x100004d94:  950640f9       ldr      x21, [x20, #8]
  0x100004d98:  800600f9       str      x0, [x20, #8]
  0x100004d9c:  8f010094       bl       #0x1000053d8
  0x100004da0:  e00315aa       mov      x0, x21
  0x100004da4:  8a010094       bl       #0x1000053cc
  0x100004da8:  681240b9       ldr      w8, [x19, #0x10]
  0x100004dac:  881200b9       str      w8, [x20, #0x10]
  0x100004db0:  e00314aa       mov      x0, x20
  0x100004db4:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x100004db8:  f44f41a9       ldp      x20, x19, [sp, #0x10]
  0x100004dbc:  f657c3a8       ldp      x22, x21, [sp], #0x30
  0x100004dc0:  c0035fd6       ret      

; ── PROCEDURE: ___swift_memcpy20_8 (0x100004dc4 .. 0x100004dd8, 20 bytes) ──
___swift_memcpy20_8:
  0x100004dc4:  2000c03d       ldr      q0, [x1]
  0x100004dc8:  281040b9       ldr      w8, [x1, #0x10]
  0x100004dcc:  081000b9       str      w8, [x0, #0x10]
  0x100004dd0:  0000803d       str      q0, [x0]
  0x100004dd4:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004dd8 .. 0x100004e14, 60 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwta:
  0x100004dd8:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100004ddc:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004de0:  fd430091       add      x29, sp, #0x10
  0x100004de4:  f30301aa       mov      x19, x1
  0x100004de8:  f40300aa       mov      x20, x0
  0x100004dec:  282440a9       ldp      x8, x9, [x1]
  0x100004df0:  000440f9       ldr      x0, [x0, #8]
  0x100004df4:  882600a9       stp      x8, x9, [x20]
  0x100004df8:  75010094       bl       #0x1000053cc
  0x100004dfc:  681240b9       ldr      w8, [x19, #0x10]
  0x100004e00:  881200b9       str      w8, [x20, #0x10]
  0x100004e04:  e00314aa       mov      x0, x20
  0x100004e08:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004e0c:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004e10:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004e14 .. 0x100004e34, 32 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwet:
  0x100004e14:  01010034       cbz      w1, #0x100004e34 ; [FLIRT] matrix_nested_solver_kernel (Accelerate.framework (BLAS)) — 95% confidence
  0x100004e18:  4101f837       tbnz     w1, #0x1f, #0x100004e40
  0x100004e1c:  080440f9       ldr      x8, [x0, #8]
  0x100004e20:  09008012       mov      w9, #-1
  0x100004e24:  1f0109eb       cmp      x8, x9
  0x100004e28:  0831899a       csel     x8, x8, x9, lo
  0x100004e2c:  00050011       add      w0, w8, #1
  0x100004e30:  c0035fd6       ret      

; ── PROCEDURE: sme_runtime_helper_100004e34 (0x100004e34 .. 0x100004e40, 12 bytes) ──
sme_runtime_helper_100004e34:
  0x100004e34:  08008012       mov      w8, #-1
  0x100004e38:  00050011       add      w0, w8, #1
  0x100004e3c:  c0035fd6       ret      

; ── PROCEDURE: flirt_string_length_scan_4e40 (0x100004e40 .. 0x100004e5c, 28 bytes) ──
flirt_string_length_scan_4e40:
  0x100004e40:  08504039       ldrb     w8, [x0, #0x14] ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100004e44:  c8feff34       cbz      w8, #0x100004e1c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004e48:  080040b9       ldr      w8, [x0]
  0x100004e4c:  0900b012       mov      w9, #0x7fffffff
  0x100004e50:  0801090b       add      w8, w8, w9
  0x100004e54:  00050011       add      w0, w8, #1
  0x100004e58:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004e5c .. 0x100004e6c, 16 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwst:
  0x100004e5c:  8100f837       tbnz     w1, #0x1f, #0x100004e6c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004e60:  4201f837       tbnz     w2, #0x1f, #0x100004e88
  0x100004e64:  61010035       cbnz     w1, #0x100004e90
  0x100004e68:  c0035fd6       ret      

; ── PROCEDURE: flirt_byte_memset_loop_4e6c (0x100004e6c .. 0x100004e88, 28 bytes) ──
flirt_byte_memset_loop_4e6c:
  0x100004e6c:  28780012       and      w8, w1, #0x7fffffff ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 98% confidence
  0x100004e70:  1f1000b9       str      wzr, [x0, #0x10]
  0x100004e74:  087c00a9       stp      x8, xzr, [x0]
  0x100004e78:  82ffff36       tbz      w2, #0x1f, #0x100004e68 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004e7c:  28008052       mov      w8, #1
  0x100004e80:  08500039       strb     w8, [x0, #0x14]
  0x100004e84:  c0035fd6       ret      

; ── PROCEDURE: flirt_byte_memset_loop_4e88 (0x100004e88 .. 0x100004e9c, 20 bytes) ──
flirt_byte_memset_loop_4e88:
  0x100004e88:  1f500039       strb     wzr, [x0, #0x14] ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x100004e8c:  e1feff34       cbz      w1, #0x100004e68 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004e90:  28040051       sub      w8, w1, #1
  0x100004e94:  080400f9       str      x8, [x0, #8]
  0x100004e98:  c0035fd6       ret      

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004e9c .. 0x100004eac, 16 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVMa:
  0x100004e9c:  20000090       adrp     x0, #0x100008000
  0x100004ea0:  00002391       add      x0, x0, #0x8c0
  0x100004ea4:  010080d2       mov      x1, #0
  0x100004ea8:  c0035fd6       ret      

; ── PROCEDURE: ___swift_memcpy16_8 (0x100004eac .. 0x100004eb8, 12 bytes) ──
___swift_memcpy16_8:
  0x100004eac:  2000c03d       ldr      q0, [x1]
  0x100004eb0:  0000803d       str      q0, [x0]
  0x100004eb4:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioBuffer() (0x100004eb8 .. 0x100004ed0, 24 bytes) ──
_$sSo11AudioBufferVwet:
  0x100004eb8:  c1000034       cbz      w1, #0x100004ed0 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100004ebc:  08404039       ldrb     w8, [x0, #0x10]
  0x100004ec0:  88000034       cbz      w8, #0x100004ed0
  0x100004ec4:  080040b9       ldr      w8, [x0]
  0x100004ec8:  00050011       add      w0, w8, #1
  0x100004ecc:  c0035fd6       ret      

; ── PROCEDURE: neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi (0x100004ed0 .. 0x100004ed8, 8 bytes) ──
neural_$s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi:
  0x100004ed0:  00008052       mov      w0, #0
  0x100004ed4:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioBuffer() (0x100004ed8 .. 0x100004f00, 40 bytes) ──
_$sSo11AudioBufferVwst:
  0x100004ed8:  c1000034       cbz      w1, #0x100004ef0 ; [FLIRT] byte_memset_loop (libsystem_c.dylib) — 99% confidence
  0x100004edc:  28040051       sub      w8, w1, #1
  0x100004ee0:  087c00a9       stp      x8, xzr, [x0]
  0x100004ee4:  c2000034       cbz      w2, #0x100004efc
  0x100004ee8:  28008052       mov      w8, #1
  0x100004eec:  03000014       b        #0x100004ef8
  0x100004ef0:  62000034       cbz      w2, #0x100004efc
  0x100004ef4:  08008052       mov      w8, #0
  0x100004ef8:  08400039       strb     w8, [x0, #0x10]
  0x100004efc:  c0035fd6       ret      

; ── PROCEDURE: swift::AudioBuffer() (0x100004f00 .. 0x100004f14, 20 bytes) ──
_$sSo11AudioBufferVMa:
  0x100004f00:  41000090       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004f04:  21201e91       add      x1, x1, #0x788 ; _$sSo11AudioBufferVML
  0x100004f08:  22000090       adrp     x2, #0x100008000
  0x100004f0c:  42002591       add      x2, x2, #0x940
  0x100004f10:  1a000014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: swift::AudioTimeStampFlags() (0x100004f14 .. 0x100004f28, 20 bytes) ──
_$sSo19AudioTimeStampFlagsVMa:
  0x100004f14:  41000090       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004f18:  21401e91       add      x1, x1, #0x790 ; _$sSo19AudioTimeStampFlagsVML
  0x100004f1c:  22000090       adrp     x2, #0x100008000
  0x100004f20:  42c02591       add      x2, x2, #0x970
  0x100004f24:  15000014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: ___swift_memcpy24_4 (0x100004f28 .. 0x100004f3c, 20 bytes) ──
___swift_memcpy24_4:
  0x100004f28:  2000c03d       ldr      q0, [x1]
  0x100004f2c:  280840f9       ldr      x8, [x1, #0x10]
  0x100004f30:  080800f9       str      x8, [x0, #0x10]
  0x100004f34:  0000803d       str      q0, [x0]
  0x100004f38:  c0035fd6       ret      

; ── PROCEDURE: swift::SMPTETime() (0x100004f3c .. 0x100004f50, 20 bytes) ──
_$sSo9SMPTETimeVMa:
  0x100004f3c:  41000090       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004f40:  21601e91       add      x1, x1, #0x798 ; _$sSo9SMPTETimeVML
  0x100004f44:  22000090       adrp     x2, #0x100008000
  0x100004f48:  42c02791       add      x2, x2, #0x9f0
  0x100004f4c:  0b000014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: swift::SMPTETimeFlags() (0x100004f50 .. 0x100004f64, 20 bytes) ──
_$sSo14SMPTETimeFlagsVMa:
  0x100004f50:  41000090       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004f54:  21801e91       add      x1, x1, #0x7a0 ; _$sSo14SMPTETimeFlagsVML
  0x100004f58:  22000090       adrp     x2, #0x100008000
  0x100004f5c:  42e02891       add      x2, x2, #0xa38
  0x100004f60:  06000014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: swift::SMPTETimeType() (0x100004f64 .. 0x100004f78, 20 bytes) ──
_$sSo13SMPTETimeTypeVMa:
  0x100004f64:  41000090       adrp     x1, #0x10000c000 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 96% confidence
  0x100004f68:  21a01e91       add      x1, x1, #0x7a8 ; _$sSo13SMPTETimeTypeVML
  0x100004f6c:  22000090       adrp     x2, #0x100008000
  0x100004f70:  42802991       add      x2, x2, #0xa60
  0x100004f74:  01000014       b        #0x100004f78 ; _$sSo27AudioStreamBasicDescriptionVMaTm

; ── PROCEDURE: swift::AudioStreamBasicDescription() (0x100004f78 .. 0x100004f8c, 20 bytes) ──
_$sSo27AudioStreamBasicDescriptionVMaTm:
  0x100004f78:  e80300aa       mov      x8, x0
  0x100004f7c:  200040f9       ldr      x0, [x1]
  0x100004f80:  600000b4       cbz      x0, #0x100004f8c ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004f84:  010080d2       mov      x1, #0
  0x100004f88:  c0035fd6       ret      

; ── PROCEDURE: flirt_pthread_mutex_scoped_lock_4f8c (0x100004f8c .. 0x100004fbc, 48 bytes) ──
flirt_pthread_mutex_scoped_lock_4f8c:
  0x100004f8c:  f44fbea9       stp      x20, x19, [sp, #-0x20]! ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 96% confidence
  0x100004f90:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100004f94:  fd430091       add      x29, sp, #0x10
  0x100004f98:  f30301aa       mov      x19, x1
  0x100004f9c:  e00308aa       mov      x0, x8
  0x100004fa0:  e10302aa       mov      x1, x2
  0x100004fa4:  22010094       bl       #0x10000542c
  0x100004fa8:  410000b5       cbnz     x1, #0x100004fb0 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100004fac:  60fe9fc8       stlr     x0, [x19]
  0x100004fb0:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100004fb4:  f44fc2a8       ldp      x20, x19, [sp], #0x20
  0x100004fb8:  c0035fd6       ret      

; ── PROCEDURE: _block_copy_helper.1 (0x100004fbc .. 0x100004fc0, 4 bytes) ──
_block_copy_helper.1:
  0x100004fbc:  73f8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.4 (0x100004fc0 .. 0x100004fc4, 4 bytes) ──
_block_copy_helper.4:
  0x100004fc0:  72f8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.7 (0x100004fc4 .. 0x100004fc8, 4 bytes) ──
_block_copy_helper.7:
  0x100004fc4:  71f8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.10 (0x100004fc8 .. 0x100004fcc, 4 bytes) ──
_block_copy_helper.10:
  0x100004fc8:  70f8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.16 (0x100004fcc .. 0x100004fd0, 4 bytes) ──
_block_copy_helper.16:
  0x100004fcc:  6ff8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.19 (0x100004fd0 .. 0x100004fd4, 4 bytes) ──
_block_copy_helper.19:
  0x100004fd0:  6ef8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_copy_helper.26 (0x100004fd4 .. 0x100004fd8, 4 bytes) ──
_block_copy_helper.26:
  0x100004fd4:  6df8ff17       b        #0x100003188 ; _block_copy_helper

; ── PROCEDURE: _block_destroy_helper.2 (0x100004fd8 .. 0x100004fdc, 4 bytes) ──
_block_destroy_helper.2:
  0x100004fd8:  71f8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.5 (0x100004fdc .. 0x100004fe0, 4 bytes) ──
_block_destroy_helper.5:
  0x100004fdc:  70f8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.8 (0x100004fe0 .. 0x100004fe4, 4 bytes) ──
_block_destroy_helper.8:
  0x100004fe0:  6ff8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.11 (0x100004fe4 .. 0x100004fe8, 4 bytes) ──
_block_destroy_helper.11:
  0x100004fe4:  6ef8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.17 (0x100004fe8 .. 0x100004fec, 4 bytes) ──
_block_destroy_helper.17:
  0x100004fe8:  6df8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.20 (0x100004fec .. 0x100004ff0, 4 bytes) ──
_block_destroy_helper.20:
  0x100004fec:  6cf8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: _block_destroy_helper.27 (0x100004ff0 .. 0x100004ff4, 4 bytes) ──
_block_destroy_helper.27:
  0x100004ff0:  6bf8ff17       b        #0x10000319c ; _block_destroy_helper

; ── PROCEDURE: swift::AudioStreamBasicDescription() (0x100004ff4 .. 0x100004ff8, 4 bytes) ──
_$sSo27AudioStreamBasicDescriptionVwCP:
  0x100004ff4:  d6f8ff17       b        #0x10000334c

; ── PROCEDURE: swift::SMPTETime() (0x100004ff8 .. 0x100004ffc, 4 bytes) ──
_$sSo9SMPTETimeVwet:
  0x100004ff8:  bdf8ff17       b        #0x1000032ec

; ── PROCEDURE: swift::main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (0x100004ffc .. 0x100005000, 4 bytes) ──
_$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwcp:
  0x100004ffc:  4dffff17       b        #0x100004d30 ; _$s4main14CaptureFailure029_12232F587A4C5CD8B1EEDF696793E2FCLLVwCP

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5000 (0x100005000 .. 0x10000500c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5000:
  0x100005000:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005004:  108a40f9       ldr      x16, [x16, #0x110]
  0x100005008:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_500c (0x10000500c .. 0x100005018, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_500c:
  0x10000500c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005010:  108e40f9       ldr      x16, [x16, #0x118]
  0x100005014:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5018 (0x100005018 .. 0x100005024, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5018:
  0x100005018:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000501c:  109240f9       ldr      x16, [x16, #0x120]
  0x100005020:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5024 (0x100005024 .. 0x100005030, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5024:
  0x100005024:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005028:  109640f9       ldr      x16, [x16, #0x128]
  0x10000502c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5030 (0x100005030 .. 0x10000503c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5030:
  0x100005030:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005034:  109a40f9       ldr      x16, [x16, #0x130]
  0x100005038:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_503c (0x10000503c .. 0x100005048, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_503c:
  0x10000503c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005040:  109e40f9       ldr      x16, [x16, #0x138]
  0x100005044:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5048 (0x100005048 .. 0x100005054, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5048:
  0x100005048:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000504c:  10a240f9       ldr      x16, [x16, #0x140]
  0x100005050:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5054 (0x100005054 .. 0x100005060, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5054:
  0x100005054:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005058:  10a640f9       ldr      x16, [x16, #0x148]
  0x10000505c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5060 (0x100005060 .. 0x10000506c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5060:
  0x100005060:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005064:  10fa41f9       ldr      x16, [x16, #0x3f0]
  0x100005068:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_506c (0x10000506c .. 0x100005078, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_506c:
  0x10000506c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005070:  10fe41f9       ldr      x16, [x16, #0x3f8]
  0x100005074:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5078 (0x100005078 .. 0x100005084, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5078:
  0x100005078:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000507c:  100a42f9       ldr      x16, [x16, #0x410]
  0x100005080:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5084 (0x100005084 .. 0x100005090, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5084:
  0x100005084:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005088:  100e42f9       ldr      x16, [x16, #0x418]
  0x10000508c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5090 (0x100005090 .. 0x10000509c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5090:
  0x100005090:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005094:  101242f9       ldr      x16, [x16, #0x420]
  0x100005098:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_509c (0x10000509c .. 0x1000050a8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_509c:
  0x10000509c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050a0:  101642f9       ldr      x16, [x16, #0x428]
  0x1000050a4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50a8 (0x1000050a8 .. 0x1000050b4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50a8:
  0x1000050a8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050ac:  101a42f9       ldr      x16, [x16, #0x430]
  0x1000050b0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50b4 (0x1000050b4 .. 0x1000050c0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50b4:
  0x1000050b4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050b8:  10e641f9       ldr      x16, [x16, #0x3c8]
  0x1000050bc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50c0 (0x1000050c0 .. 0x1000050cc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50c0:
  0x1000050c0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050c4:  10f241f9       ldr      x16, [x16, #0x3e0]
  0x1000050c8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50cc (0x1000050cc .. 0x1000050d8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50cc:
  0x1000050cc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050d0:  10aa40f9       ldr      x16, [x16, #0x150]
  0x1000050d4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50d8 (0x1000050d8 .. 0x1000050e4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50d8:
  0x1000050d8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050dc:  10ae40f9       ldr      x16, [x16, #0x158]
  0x1000050e0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50e4 (0x1000050e4 .. 0x1000050f0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50e4:
  0x1000050e4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050e8:  10ce40f9       ldr      x16, [x16, #0x198]
  0x1000050ec:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50f0 (0x1000050f0 .. 0x1000050fc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50f0:
  0x1000050f0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000050f4:  10da40f9       ldr      x16, [x16, #0x1b0]
  0x1000050f8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_50fc (0x1000050fc .. 0x100005108, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_50fc:
  0x1000050fc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005100:  10de40f9       ldr      x16, [x16, #0x1b8]
  0x100005104:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5108 (0x100005108 .. 0x100005114, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5108:
  0x100005108:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000510c:  10e240f9       ldr      x16, [x16, #0x1c0]
  0x100005110:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5114 (0x100005114 .. 0x100005120, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5114:
  0x100005114:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005118:  10e640f9       ldr      x16, [x16, #0x1c8]
  0x10000511c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5120 (0x100005120 .. 0x10000512c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5120:
  0x100005120:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005124:  10fe40f9       ldr      x16, [x16, #0x1f8]
  0x100005128:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_512c (0x10000512c .. 0x100005138, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_512c:
  0x10000512c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005130:  100241f9       ldr      x16, [x16, #0x200]
  0x100005134:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5138 (0x100005138 .. 0x100005144, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5138:
  0x100005138:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000513c:  100641f9       ldr      x16, [x16, #0x208]
  0x100005140:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5144 (0x100005144 .. 0x100005150, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5144:
  0x100005144:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005148:  100a41f9       ldr      x16, [x16, #0x210]
  0x10000514c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5150 (0x100005150 .. 0x10000515c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5150:
  0x100005150:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005154:  10f641f9       ldr      x16, [x16, #0x3e8]
  0x100005158:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_515c (0x10000515c .. 0x100005168, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_515c:
  0x10000515c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005160:  101e42f9       ldr      x16, [x16, #0x438]
  0x100005164:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5168 (0x100005168 .. 0x100005174, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5168:
  0x100005168:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000516c:  102e42f9       ldr      x16, [x16, #0x458]
  0x100005170:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5174 (0x100005174 .. 0x100005180, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5174:
  0x100005174:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005178:  103242f9       ldr      x16, [x16, #0x460]
  0x10000517c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5180 (0x100005180 .. 0x10000518c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5180:
  0x100005180:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005184:  103642f9       ldr      x16, [x16, #0x468]
  0x100005188:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_518c (0x10000518c .. 0x100005198, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_518c:
  0x10000518c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005190:  103a42f9       ldr      x16, [x16, #0x470]
  0x100005194:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5198 (0x100005198 .. 0x1000051a4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5198:
  0x100005198:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000519c:  103e42f9       ldr      x16, [x16, #0x478]
  0x1000051a0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51a4 (0x1000051a4 .. 0x1000051b0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51a4:
  0x1000051a4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051a8:  104242f9       ldr      x16, [x16, #0x480]
  0x1000051ac:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51b0 (0x1000051b0 .. 0x1000051bc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51b0:
  0x1000051b0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051b4:  104642f9       ldr      x16, [x16, #0x488]
  0x1000051b8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51bc (0x1000051bc .. 0x1000051c8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51bc:
  0x1000051bc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051c0:  104a42f9       ldr      x16, [x16, #0x490]
  0x1000051c4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51c8 (0x1000051c8 .. 0x1000051d4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51c8:
  0x1000051c8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051cc:  104e42f9       ldr      x16, [x16, #0x498]
  0x1000051d0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51d4 (0x1000051d4 .. 0x1000051e0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51d4:
  0x1000051d4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051d8:  105242f9       ldr      x16, [x16, #0x4a0]
  0x1000051dc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51e0 (0x1000051e0 .. 0x1000051ec, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51e0:
  0x1000051e0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051e4:  100e41f9       ldr      x16, [x16, #0x218]
  0x1000051e8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51ec (0x1000051ec .. 0x1000051f8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_51ec:
  0x1000051ec:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051f0:  101e41f9       ldr      x16, [x16, #0x238]
  0x1000051f4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_51f8 (0x1000051f8 .. 0x100005234, 60 bytes) ──
flirt_dyld_stub_binder_trampoline_51f8:
  0x1000051f8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000051fc:  102a41f9       ldr      x16, [x16, #0x250]
  0x100005200:  00021fd6       br       x16
  0x100005204:  100000f0       adrp     x16, #0x100008000
  0x100005208:  103241f9       ldr      x16, [x16, #0x260]
  0x10000520c:  00021fd6       br       x16
  0x100005210:  100000f0       adrp     x16, #0x100008000
  0x100005214:  103641f9       ldr      x16, [x16, #0x268]
  0x100005218:  00021fd6       br       x16
  0x10000521c:  100000f0       adrp     x16, #0x100008000
  0x100005220:  103a41f9       ldr      x16, [x16, #0x270]
  0x100005224:  00021fd6       br       x16
  0x100005228:  100000f0       adrp     x16, #0x100008000
  0x10000522c:  103e41f9       ldr      x16, [x16, #0x278]
  0x100005230:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5234 (0x100005234 .. 0x100005240, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5234:
  0x100005234:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005238:  105241f9       ldr      x16, [x16, #0x2a0]
  0x10000523c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5240 (0x100005240 .. 0x10000524c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5240:
  0x100005240:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005244:  105641f9       ldr      x16, [x16, #0x2a8]
  0x100005248:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_524c (0x10000524c .. 0x100005258, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_524c:
  0x10000524c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005250:  106640f9       ldr      x16, [x16, #0xc8]
  0x100005254:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5258 (0x100005258 .. 0x100005264, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5258:
  0x100005258:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000525c:  106a40f9       ldr      x16, [x16, #0xd0]
  0x100005260:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5264 (0x100005264 .. 0x100005270, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5264:
  0x100005264:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005268:  106e40f9       ldr      x16, [x16, #0xd8]
  0x10000526c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5270 (0x100005270 .. 0x10000527c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5270:
  0x100005270:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005274:  107240f9       ldr      x16, [x16, #0xe0]
  0x100005278:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_527c (0x10000527c .. 0x100005288, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_527c:
  0x10000527c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005280:  107640f9       ldr      x16, [x16, #0xe8]
  0x100005284:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5288 (0x100005288 .. 0x100005294, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5288:
  0x100005288:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000528c:  107a40f9       ldr      x16, [x16, #0xf0]
  0x100005290:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5294 (0x100005294 .. 0x1000052a0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5294:
  0x100005294:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005298:  107e40f9       ldr      x16, [x16, #0xf8]
  0x10000529c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52a0 (0x1000052a0 .. 0x1000052ac, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52a0:
  0x1000052a0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052a4:  108240f9       ldr      x16, [x16, #0x100]
  0x1000052a8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52ac (0x1000052ac .. 0x1000052b8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52ac:
  0x1000052ac:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052b0:  108640f9       ldr      x16, [x16, #0x108]
  0x1000052b4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52b8 (0x1000052b8 .. 0x1000052c4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52b8:
  0x1000052b8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052bc:  100240f9       ldr      x16, [x16]
  0x1000052c0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52c4 (0x1000052c4 .. 0x1000052d0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52c4:
  0x1000052c4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052c8:  100640f9       ldr      x16, [x16, #8]
  0x1000052cc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52d0 (0x1000052d0 .. 0x1000052dc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52d0:
  0x1000052d0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052d4:  101240f9       ldr      x16, [x16, #0x20]
  0x1000052d8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52dc (0x1000052dc .. 0x1000052e8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52dc:
  0x1000052dc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052e0:  101a40f9       ldr      x16, [x16, #0x30]
  0x1000052e4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52e8 (0x1000052e8 .. 0x1000052f4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52e8:
  0x1000052e8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052ec:  101e40f9       ldr      x16, [x16, #0x38]
  0x1000052f0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_52f4 (0x1000052f4 .. 0x100005300, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_52f4:
  0x1000052f4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000052f8:  102240f9       ldr      x16, [x16, #0x40]
  0x1000052fc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5300 (0x100005300 .. 0x10000530c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5300:
  0x100005300:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005304:  102640f9       ldr      x16, [x16, #0x48]
  0x100005308:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_530c (0x10000530c .. 0x100005318, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_530c:
  0x10000530c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005310:  102a40f9       ldr      x16, [x16, #0x50]
  0x100005314:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5318 (0x100005318 .. 0x100005324, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5318:
  0x100005318:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000531c:  102e40f9       ldr      x16, [x16, #0x58]
  0x100005320:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5324 (0x100005324 .. 0x100005330, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5324:
  0x100005324:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005328:  103240f9       ldr      x16, [x16, #0x60]
  0x10000532c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5330 (0x100005330 .. 0x10000533c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5330:
  0x100005330:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005334:  103640f9       ldr      x16, [x16, #0x68]
  0x100005338:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_533c (0x10000533c .. 0x100005348, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_533c:
  0x10000533c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005340:  10b640f9       ldr      x16, [x16, #0x168]
  0x100005344:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5348 (0x100005348 .. 0x100005354, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5348:
  0x100005348:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x10000534c:  10be40f9       ldr      x16, [x16, #0x178]
  0x100005350:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5354 (0x100005354 .. 0x100005360, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5354:
  0x100005354:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005358:  10c240f9       ldr      x16, [x16, #0x180]
  0x10000535c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5360 (0x100005360 .. 0x10000536c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5360:
  0x100005360:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005364:  10c640f9       ldr      x16, [x16, #0x188]
  0x100005368:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_536c (0x10000536c .. 0x100005378, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_536c:
  0x10000536c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005370:  10ca40f9       ldr      x16, [x16, #0x190]
  0x100005374:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5378 (0x100005378 .. 0x100005384, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5378:
  0x100005378:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000537c:  103a40f9       ldr      x16, [x16, #0x70]
  0x100005380:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5384 (0x100005384 .. 0x100005390, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5384:
  0x100005384:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005388:  103e40f9       ldr      x16, [x16, #0x78]
  0x10000538c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5390 (0x100005390 .. 0x10000539c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5390:
  0x100005390:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005394:  106e41f9       ldr      x16, [x16, #0x2d8]
  0x100005398:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_539c (0x10000539c .. 0x1000053a8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_539c:
  0x10000539c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053a0:  107241f9       ldr      x16, [x16, #0x2e0]
  0x1000053a4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53a8 (0x1000053a8 .. 0x1000053b4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_53a8:
  0x1000053a8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053ac:  107641f9       ldr      x16, [x16, #0x2e8]
  0x1000053b0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53b4 (0x1000053b4 .. 0x1000053c0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_53b4:
  0x1000053b4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053b8:  107a41f9       ldr      x16, [x16, #0x2f0]
  0x1000053bc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53c0 (0x1000053c0 .. 0x1000053cc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_53c0:
  0x1000053c0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053c4:  107e41f9       ldr      x16, [x16, #0x2f8]
  0x1000053c8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53cc (0x1000053cc .. 0x1000053d8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_53cc:
  0x1000053cc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053d0:  108241f9       ldr      x16, [x16, #0x300]
  0x1000053d4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53d8 (0x1000053d8 .. 0x1000053fc, 36 bytes) ──
flirt_dyld_stub_binder_trampoline_53d8:
  0x1000053d8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000053dc:  108641f9       ldr      x16, [x16, #0x308]
  0x1000053e0:  00021fd6       br       x16
  0x1000053e4:  100000f0       adrp     x16, #0x100008000
  0x1000053e8:  108a41f9       ldr      x16, [x16, #0x310]
  0x1000053ec:  00021fd6       br       x16
  0x1000053f0:  100000f0       adrp     x16, #0x100008000
  0x1000053f4:  108e41f9       ldr      x16, [x16, #0x318]
  0x1000053f8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_53fc (0x1000053fc .. 0x100005408, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_53fc:
  0x1000053fc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005400:  109241f9       ldr      x16, [x16, #0x320]
  0x100005404:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5408 (0x100005408 .. 0x100005414, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5408:
  0x100005408:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000540c:  109641f9       ldr      x16, [x16, #0x328]
  0x100005410:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5414 (0x100005414 .. 0x100005420, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5414:
  0x100005414:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005418:  109a41f9       ldr      x16, [x16, #0x330]
  0x10000541c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5420 (0x100005420 .. 0x10000542c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5420:
  0x100005420:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005424:  109e41f9       ldr      x16, [x16, #0x338]
  0x100005428:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_542c (0x10000542c .. 0x100005438, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_542c:
  0x10000542c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005430:  10a241f9       ldr      x16, [x16, #0x340]
  0x100005434:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5438 (0x100005438 .. 0x100005444, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5438:
  0x100005438:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000543c:  10a641f9       ldr      x16, [x16, #0x348]
  0x100005440:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5444 (0x100005444 .. 0x100005450, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5444:
  0x100005444:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005448:  10aa41f9       ldr      x16, [x16, #0x350]
  0x10000544c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5450 (0x100005450 .. 0x10000545c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5450:
  0x100005450:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005454:  10ae41f9       ldr      x16, [x16, #0x358]
  0x100005458:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_545c (0x10000545c .. 0x100005468, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_545c:
  0x10000545c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005460:  10b241f9       ldr      x16, [x16, #0x360]
  0x100005464:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5468 (0x100005468 .. 0x100005474, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5468:
  0x100005468:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000546c:  10b641f9       ldr      x16, [x16, #0x368]
  0x100005470:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5474 (0x100005474 .. 0x100005480, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5474:
  0x100005474:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005478:  10ba41f9       ldr      x16, [x16, #0x370]
  0x10000547c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5480 (0x100005480 .. 0x10000548c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5480:
  0x100005480:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005484:  10be41f9       ldr      x16, [x16, #0x378]
  0x100005488:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_548c (0x10000548c .. 0x100005498, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_548c:
  0x10000548c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005490:  10c241f9       ldr      x16, [x16, #0x380]
  0x100005494:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5498 (0x100005498 .. 0x1000054a4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5498:
  0x100005498:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000549c:  10c641f9       ldr      x16, [x16, #0x388]
  0x1000054a0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54a4 (0x1000054a4 .. 0x1000054b0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54a4:
  0x1000054a4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054a8:  10ca41f9       ldr      x16, [x16, #0x390]
  0x1000054ac:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54b0 (0x1000054b0 .. 0x1000054bc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54b0:
  0x1000054b0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054b4:  10ce41f9       ldr      x16, [x16, #0x398]
  0x1000054b8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54bc (0x1000054bc .. 0x1000054c8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54bc:
  0x1000054bc:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054c0:  10d241f9       ldr      x16, [x16, #0x3a0]
  0x1000054c4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54c8 (0x1000054c8 .. 0x1000054d4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54c8:
  0x1000054c8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054cc:  10d641f9       ldr      x16, [x16, #0x3a8]
  0x1000054d0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54d4 (0x1000054d4 .. 0x1000054e0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54d4:
  0x1000054d4:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054d8:  10da41f9       ldr      x16, [x16, #0x3b0]
  0x1000054dc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54e0 (0x1000054e0 .. 0x1000054ec, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54e0:
  0x1000054e0:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054e4:  10de41f9       ldr      x16, [x16, #0x3b8]
  0x1000054e8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54ec (0x1000054ec .. 0x1000054f8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54ec:
  0x1000054ec:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054f0:  10e241f9       ldr      x16, [x16, #0x3c0]
  0x1000054f4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_54f8 (0x1000054f8 .. 0x100005504, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_54f8:
  0x1000054f8:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000054fc:  104240f9       ldr      x16, [x16, #0x80]
  0x100005500:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5504 (0x100005504 .. 0x100005510, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5504:
  0x100005504:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005508:  104640f9       ldr      x16, [x16, #0x88]
  0x10000550c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5510 (0x100005510 .. 0x10000551c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5510:
  0x100005510:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005514:  104a40f9       ldr      x16, [x16, #0x90]
  0x100005518:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_551c (0x10000551c .. 0x100005528, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_551c:
  0x10000551c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005520:  104e40f9       ldr      x16, [x16, #0x98]
  0x100005524:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5528 (0x100005528 .. 0x100005534, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5528:
  0x100005528:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000552c:  105240f9       ldr      x16, [x16, #0xa0]
  0x100005530:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5534 (0x100005534 .. 0x100005540, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5534:
  0x100005534:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005538:  105640f9       ldr      x16, [x16, #0xa8]
  0x10000553c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5540 (0x100005540 .. 0x10000554c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5540:
  0x100005540:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005544:  105a40f9       ldr      x16, [x16, #0xb0]
  0x100005548:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_554c (0x10000554c .. 0x100005558, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_554c:
  0x10000554c:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100005550:  105e40f9       ldr      x16, [x16, #0xb8]
  0x100005554:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_5558 (0x100005558 .. 0x100005564, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_5558:
  0x100005558:  100000f0       adrp     x16, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000555c:  106240f9       ldr      x16, [x16, #0xc0]
  0x100005560:  00021fd6       br       x16

; ── PROCEDURE: _objc_msgSend$UUID (0x100005580 .. 0x1000055a0, 32 bytes) ──
_objc_msgSend$UUID:
  0x100005580:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005584:  21e841f9       ldr      x1, [x1, #0x3d0] ; @selector(UUID)
  0x100005588:  100000f0       adrp     x16, #0x100008000
  0x10000558c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005590:  00021fd6       br       x16
  0x100005594:  200020d4       brk      #1
  0x100005598:  200020d4       brk      #1
  0x10000559c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$availableData (0x1000055a0 .. 0x1000055c0, 32 bytes) ──
_objc_msgSend$availableData:
  0x1000055a0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000055a4:  21ec41f9       ldr      x1, [x1, #0x3d8] ; @selector(availableData)
  0x1000055a8:  100000f0       adrp     x16, #0x100008000
  0x1000055ac:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000055b0:  00021fd6       br       x16
  0x1000055b4:  200020d4       brk      #1
  0x1000055b8:  200020d4       brk      #1
  0x1000055bc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$dataWithJSONObject:options:error: (0x1000055c0 .. 0x1000055e0, 32 bytes) ──
_objc_msgSend$dataWithJSONObject:options:error::
  0x1000055c0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000055c4:  21f041f9       ldr      x1, [x1, #0x3e0] ; @selector(dataWithJSONObject:options:error:)
  0x1000055c8:  100000f0       adrp     x16, #0x100008000
  0x1000055cc:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000055d0:  00021fd6       br       x16
  0x1000055d4:  200020d4       brk      #1
  0x1000055d8:  200020d4       brk      #1
  0x1000055dc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$fileHandleWithStandardInput (0x1000055e0 .. 0x100005600, 32 bytes) ──
_objc_msgSend$fileHandleWithStandardInput:
  0x1000055e0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000055e4:  21f441f9       ldr      x1, [x1, #0x3e8] ; @selector(fileHandleWithStandardInput)
  0x1000055e8:  100000f0       adrp     x16, #0x100008000
  0x1000055ec:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000055f0:  00021fd6       br       x16
  0x1000055f4:  200020d4       brk      #1
  0x1000055f8:  200020d4       brk      #1
  0x1000055fc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$fileHandleWithStandardOutput (0x100005600 .. 0x100005620, 32 bytes) ──
_objc_msgSend$fileHandleWithStandardOutput:
  0x100005600:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005604:  21f841f9       ldr      x1, [x1, #0x3f0] ; @selector(fileHandleWithStandardOutput)
  0x100005608:  100000f0       adrp     x16, #0x100008000
  0x10000560c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005610:  00021fd6       br       x16
  0x100005614:  200020d4       brk      #1
  0x100005618:  200020d4       brk      #1
  0x10000561c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$init (0x100005620 .. 0x100005640, 32 bytes) ──
_objc_msgSend$init:
  0x100005620:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005624:  21fc41f9       ldr      x1, [x1, #0x3f8] ; @selector(init)
  0x100005628:  100000f0       adrp     x16, #0x100008000
  0x10000562c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005630:  00021fd6       br       x16
  0x100005634:  200020d4       brk      #1
  0x100005638:  200020d4       brk      #1
  0x10000563c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$lock (0x100005640 .. 0x100005660, 32 bytes) ──
_objc_msgSend$lock:
  0x100005640:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005644:  210042f9       ldr      x1, [x1, #0x400] ; @selector(lock)
  0x100005648:  100000f0       adrp     x16, #0x100008000
  0x10000564c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005650:  00021fd6       br       x16
  0x100005654:  200020d4       brk      #1
  0x100005658:  200020d4       brk      #1
  0x10000565c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$mainRunLoop (0x100005660 .. 0x100005680, 32 bytes) ──
_objc_msgSend$mainRunLoop:
  0x100005660:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005664:  210442f9       ldr      x1, [x1, #0x408] ; @selector(mainRunLoop)
  0x100005668:  100000f0       adrp     x16, #0x100008000
  0x10000566c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005670:  00021fd6       br       x16
  0x100005674:  200020d4       brk      #1
  0x100005678:  200020d4       brk      #1
  0x10000567c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$run (0x100005680 .. 0x1000056a0, 32 bytes) ──
_objc_msgSend$run:
  0x100005680:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005684:  210842f9       ldr      x1, [x1, #0x410] ; @selector(run)
  0x100005688:  100000f0       adrp     x16, #0x100008000
  0x10000568c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005690:  00021fd6       br       x16
  0x100005694:  200020d4       brk      #1
  0x100005698:  200020d4       brk      #1
  0x10000569c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$setMuteBehavior: (0x1000056a0 .. 0x1000056c0, 32 bytes) ──
_objc_msgSend$setMuteBehavior::
  0x1000056a0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000056a4:  210c42f9       ldr      x1, [x1, #0x418] ; @selector(setMuteBehavior:)
  0x1000056a8:  100000f0       adrp     x16, #0x100008000
  0x1000056ac:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000056b0:  00021fd6       br       x16
  0x1000056b4:  200020d4       brk      #1
  0x1000056b8:  200020d4       brk      #1
  0x1000056bc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$setName: (0x1000056c0 .. 0x1000056e0, 32 bytes) ──
_objc_msgSend$setName::
  0x1000056c0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000056c4:  211042f9       ldr      x1, [x1, #0x420] ; @selector(setName:)
  0x1000056c8:  100000f0       adrp     x16, #0x100008000
  0x1000056cc:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000056d0:  00021fd6       br       x16
  0x1000056d4:  200020d4       brk      #1
  0x1000056d8:  200020d4       brk      #1
  0x1000056dc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$setPrivate: (0x1000056e0 .. 0x100005700, 32 bytes) ──
_objc_msgSend$setPrivate::
  0x1000056e0:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x1000056e4:  211442f9       ldr      x1, [x1, #0x428] ; @selector(setPrivate:)
  0x1000056e8:  100000f0       adrp     x16, #0x100008000
  0x1000056ec:  10ba40f9       ldr      x16, [x16, #0x170]
  0x1000056f0:  00021fd6       br       x16
  0x1000056f4:  200020d4       brk      #1
  0x1000056f8:  200020d4       brk      #1
  0x1000056fc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$setReadabilityHandler: (0x100005700 .. 0x100005720, 32 bytes) ──
_objc_msgSend$setReadabilityHandler::
  0x100005700:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005704:  211842f9       ldr      x1, [x1, #0x430] ; @selector(setReadabilityHandler:)
  0x100005708:  100000f0       adrp     x16, #0x100008000
  0x10000570c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005710:  00021fd6       br       x16
  0x100005714:  200020d4       brk      #1
  0x100005718:  200020d4       brk      #1
  0x10000571c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$tryLock (0x100005720 .. 0x100005740, 32 bytes) ──
_objc_msgSend$tryLock:
  0x100005720:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005724:  211c42f9       ldr      x1, [x1, #0x438] ; @selector(tryLock)
  0x100005728:  100000f0       adrp     x16, #0x100008000
  0x10000572c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005730:  00021fd6       br       x16
  0x100005734:  200020d4       brk      #1
  0x100005738:  200020d4       brk      #1
  0x10000573c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$unlock (0x100005740 .. 0x100005760, 32 bytes) ──
_objc_msgSend$unlock:
  0x100005740:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005744:  212042f9       ldr      x1, [x1, #0x440] ; @selector(unlock)
  0x100005748:  100000f0       adrp     x16, #0x100008000
  0x10000574c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005750:  00021fd6       br       x16
  0x100005754:  200020d4       brk      #1
  0x100005758:  200020d4       brk      #1
  0x10000575c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$writeData: (0x100005760 .. 0x100005780, 32 bytes) ──
_objc_msgSend$writeData::
  0x100005760:  210000f0       adrp     x1, #0x10000c000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 99% confidence
  0x100005764:  212442f9       ldr      x1, [x1, #0x448] ; @selector(writeData:)
  0x100005768:  100000f0       adrp     x16, #0x100008000
  0x10000576c:  10ba40f9       ldr      x16, [x16, #0x170]
  0x100005770:  00021fd6       br       x16
  0x100005774:  200020d4       brk      #1
  0x100005778:  200020d4       brk      #1
  0x10000577c:  200020d4       brk      #1
