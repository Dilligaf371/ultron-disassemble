// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : _d @ 0x359d
// CFG Blocks: 1 | Loop Regions: 0 | If-Else Hammocks: 0
// ============================================================================
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _d ───
int64_t _d(int64_t arg0, int64_t arg1) {
    /* 0x35a0: block 0x40 */
    /* 0x35a2: local.get $local_0 */
    /* 0x35a4: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x35a7: local.get $local_0 */
    /* 0x35a9: i32.const 8 */
    /* 0x35ab: i32.sub  */
    /* 0x35ac: local.tee $local_3 */
    /* 0x35ae: local.get $local_0 */
    /* 0x35b0: i32.const 4 */
    /* 0x35b2: i32.sub  */
    /* 0x35b3: i32.load offset=0, align=2 */
    /* 0x35b6: local.tee $local_2 */
    /* 0x35b8: i32.const -8 */
    /* 0x35ba: i32.and  */
    /* 0x35bb: local.tee $local_0 */
    /* 0x35bd: i32.add  */
    /* 0x35be: local.set $local_5 */
    /* 0x35c0: block 0x40 */
    /* 0x35c2: local.get $local_2 */
    /* 0x35c4: i32.const 1 */
    /* 0x35c6: i32.and  */
    if (r0 != 0) { goto 0; }
    /* 0x35c9: local.get $local_2 */
    /* 0x35cb: i32.const 2 */
    /* 0x35cd: i32.and  */
    /* 0x35ce: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x35d1: local.get $local_3 */
    /* 0x35d3: local.get $local_3 */
    /* 0x35d5: i32.load offset=0, align=2 */
    /* 0x35d8: local.tee $local_4 */
    /* 0x35da: i32.sub  */
    /* 0x35db: local.tee $local_3 */
    /* 0x35dd: i32.const 3736848 */
    /* 0x35e2: i32.load offset=0, align=2 */
    /* 0x35e5: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x35e8: local.get $local_0 */
    /* 0x35ea: local.get $local_4 */
    /* 0x35ec: i32.add  */
    /* 0x35ed: local.set $local_0 */
    /* 0x35ef: block 0x40 */
    /* 0x35f1: block 0x40 */
    /* 0x35f3: block 0x40 */
    /* 0x35f5: i32.const 3736852 */
    /* 0x35fa: i32.load offset=0, align=2 */
    /* 0x35fd: local.get $local_3 */
    /* 0x35ff: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3602: local.get $local_3 */
    /* 0x3604: i32.load offset=12, align=2 */
    /* 0x3607: local.set $local_1 */
    /* 0x3609: local.get $local_4 */
    /* 0x360b: i32.const 255 */
    /* 0x360e: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3611: local.get $local_1 */
    /* 0x3613: local.get $local_3 */
    /* 0x3615: i32.load offset=8, align=2 */
    /* 0x3618: local.tee $local_2 */
    /* 0x361a: i32.ne  */
    if (r0 != 0) { goto 2; }
    /* 0x361d: i32.const 3736832 */
    /* 0x3622: i32.const 3736832 */
    /* 0x3627: i32.load offset=0, align=2 */
    /* 0x362a: i32.const -2 */
    /* 0x362c: local.get $local_4 */
    /* 0x362e: i32.const 3 */
    /* 0x3630: i32.shr_u  */
    /* 0x3631: i32.rotl  */
    /* 0x3632: i32.and  */
    /* 0x3633: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 5; }
    /* 0x3638: end  */
    /* 0x3639: local.get $local_3 */
    /* 0x363b: i32.load offset=24, align=2 */
    /* 0x363e: local.set $local_7 */
    /* 0x3640: local.get $local_1 */
    /* 0x3642: local.get $local_3 */
    /* 0x3644: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3647: local.get $local_3 */
    /* 0x3649: i32.load offset=8, align=2 */
    /* 0x364c: local.tee $local_2 */
    /* 0x364e: local.get $local_1 */
    /* 0x3650: i32.store offset=12, align=2 */
    /* 0x3653: local.get $local_1 */
    /* 0x3655: local.get $local_2 */
    /* 0x3657: i32.store offset=8, align=2 */
    if (r0 != 0) { goto 4; }
    /* 0x365c: end  */
    /* 0x365d: local.get $local_3 */
    /* 0x365f: i32.load offset=20, align=2 */
    /* 0x3662: local.tee $local_2 */
    if (r0 != 0) { goto 0x7f; }
    /* 0x3666: local.get $local_3 */
    /* 0x3668: i32.const 20 */
    /* 0x366a: i32.add  */
    /* 0x366b: else  */
    /* 0x366c: local.get $local_3 */
    /* 0x366e: i32.load offset=16, align=2 */
    /* 0x3671: local.tee $local_2 */
    /* 0x3673: i32.eqz  */
    if (r0 != 0) { goto 3; }
    /* 0x3676: local.get $local_3 */
    /* 0x3678: i32.const 16 */
    /* 0x367a: i32.add  */
    /* 0x367b: end  */
    /* 0x367c: local.set $local_4 */
    /* 0x367e: loop 0x40 */
    /* 0x3680: local.get $local_4 */
    /* 0x3682: local.set $local_6 */
    /* 0x3684: local.get $local_2 */
    /* 0x3686: local.tee $local_1 */
    /* 0x3688: i32.const 20 */
    /* 0x368a: i32.add  */
    /* 0x368b: local.set $local_4 */
    /* 0x368d: local.get $local_1 */
    /* 0x368f: i32.load offset=20, align=2 */
    /* 0x3692: local.tee $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x3696: local.get $local_1 */
    /* 0x3698: i32.const 16 */
    /* 0x369a: i32.add  */
    /* 0x369b: local.set $local_4 */
    /* 0x369d: local.get $local_1 */
    /* 0x369f: i32.load offset=16, align=2 */
    /* 0x36a2: local.tee $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x36a6: end  */
    /* 0x36a7: local.get $local_6 */
    /* 0x36a9: i32.const 0 */
    /* 0x36ab: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 3; }
    /* 0x36b0: end  */
    /* 0x36b1: local.get $local_5 */
    /* 0x36b3: i32.load offset=4, align=2 */
    /* 0x36b6: local.tee $local_2 */
    /* 0x36b8: i32.const 3 */
    /* 0x36ba: i32.and  */
    /* 0x36bb: i32.const 3 */
    /* 0x36bd: i32.ne  */
    if (r0 != 0) { goto 3; }
    /* 0x36c0: i32.const 3736840 */
    /* 0x36c5: local.get $local_0 */
    /* 0x36c7: i32.store offset=0, align=2 */
    /* 0x36ca: local.get $local_5 */
    /* 0x36cc: local.get $local_2 */
    /* 0x36ce: i32.const -2 */
    /* 0x36d0: i32.and  */
    /* 0x36d1: i32.store offset=4, align=2 */
    /* 0x36d4: local.get $local_3 */
    /* 0x36d6: local.get $local_0 */
    /* 0x36d8: i32.const 1 */
    /* 0x36da: i32.or  */
    /* 0x36db: i32.store offset=4, align=2 */
    /* 0x36de: local.get $local_5 */
    /* 0x36e0: local.get $local_0 */
    /* 0x36e2: i32.store offset=0, align=2 */
    return r0;
    /* 0x36e6: end  */
    /* 0x36e7: local.get $local_2 */
    /* 0x36e9: local.get $local_1 */
    /* 0x36eb: i32.store offset=12, align=2 */
    /* 0x36ee: local.get $local_1 */
    /* 0x36f0: local.get $local_2 */
    /* 0x36f2: i32.store offset=8, align=2 */
    if (r0 != 0) { goto 2; }
    /* 0x36f7: end  */
    /* 0x36f8: i32.const 0 */
    /* 0x36fa: local.set $local_1 */
    /* 0x36fc: end  */
    /* 0x36fd: local.get $local_7 */
    /* 0x36ff: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x3702: block 0x40 */
    /* 0x3704: local.get $local_3 */
    /* 0x3706: i32.load offset=28, align=2 */
    /* 0x3709: local.tee $local_4 */
    /* 0x370b: i32.const 2 */
    /* 0x370d: i32.shl  */
    /* 0x370e: local.tee $local_2 */
    /* 0x3710: i32.load offset=3737136, align=2 */
    /* 0x3716: local.get $local_3 */
    /* 0x3718: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x371b: local.get $local_2 */
    /* 0x371d: i32.const 3737136 */
    /* 0x3722: i32.add  */
    /* 0x3723: local.get $local_1 */
    /* 0x3725: i32.store offset=0, align=2 */
    /* 0x3728: local.get $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x372c: i32.const 3736836 */
    /* 0x3731: i32.const 3736836 */
    /* 0x3736: i32.load offset=0, align=2 */
    /* 0x3739: i32.const -2 */
    /* 0x373b: local.get $local_4 */
    /* 0x373d: i32.rotl  */
    /* 0x373e: i32.and  */
    /* 0x373f: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 2; }
    /* 0x3744: end  */
    /* 0x3745: block 0x40 */
    /* 0x3747: local.get $local_3 */
    /* 0x3749: local.get $local_7 */
    /* 0x374b: i32.load offset=16, align=2 */
    /* 0x374e: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3751: local.get $local_7 */
    /* 0x3753: local.get $local_1 */
    /* 0x3755: i32.store offset=16, align=2 */
    if (r0 != 0) { goto 1; }
    /* 0x375a: end  */
    /* 0x375b: local.get $local_7 */
    /* 0x375d: local.get $local_1 */
    /* 0x375f: i32.store offset=20, align=2 */
    /* 0x3762: end  */
    /* 0x3763: local.get $local_1 */
    /* 0x3765: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x3768: end  */
    /* 0x3769: local.get $local_1 */
    /* 0x376b: local.get $local_7 */
    /* 0x376d: i32.store offset=24, align=2 */
    /* 0x3770: local.get $local_3 */
    /* 0x3772: i32.load offset=16, align=2 */
    /* 0x3775: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x3779: local.get $local_1 */
    /* 0x377b: local.get $local_2 */
    /* 0x377d: i32.store offset=16, align=2 */
    /* 0x3780: local.get $local_2 */
    /* 0x3782: local.get $local_1 */
    /* 0x3784: i32.store offset=24, align=2 */
    /* 0x3787: end  */
    /* 0x3788: local.get $local_3 */
    /* 0x378a: i32.load offset=20, align=2 */
    /* 0x378d: local.tee $local_2 */
    /* 0x378f: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x3792: local.get $local_1 */
    /* 0x3794: local.get $local_2 */
    /* 0x3796: i32.store offset=20, align=2 */
    /* 0x3799: local.get $local_2 */
    /* 0x379b: local.get $local_1 */
    /* 0x379d: i32.store offset=24, align=2 */
    /* 0x37a0: end  */
    /* 0x37a1: local.get $local_3 */
    /* 0x37a3: local.get $local_5 */
    /* 0x37a5: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x37a8: local.get $local_5 */
    /* 0x37aa: i32.load offset=4, align=2 */
    /* 0x37ad: local.tee $local_4 */
    /* 0x37af: i32.const 1 */
    /* 0x37b1: i32.and  */
    /* 0x37b2: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x37b5: block 0x40 */
    /* 0x37b7: block 0x40 */
    /* 0x37b9: block 0x40 */
    /* 0x37bb: block 0x40 */
    /* 0x37bd: local.get $local_4 */
    /* 0x37bf: i32.const 2 */
    /* 0x37c1: i32.and  */
    /* 0x37c2: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x37c5: i32.const 3736856 */
    /* 0x37ca: i32.load offset=0, align=2 */
    /* 0x37cd: local.get $local_5 */
    /* 0x37cf: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x37d2: i32.const 3736856 */
    /* 0x37d7: local.get $local_3 */
    /* 0x37d9: i32.store offset=0, align=2 */
    /* 0x37dc: i32.const 3736844 */
    /* 0x37e1: i32.const 3736844 */
    /* 0x37e6: i32.load offset=0, align=2 */
    /* 0x37e9: local.get $local_0 */
    /* 0x37eb: i32.add  */
    /* 0x37ec: local.tee $local_0 */
    /* 0x37ee: i32.store offset=0, align=2 */
    /* 0x37f1: local.get $local_3 */
    /* 0x37f3: local.get $local_0 */
    /* 0x37f5: i32.const 1 */
    /* 0x37f7: i32.or  */
    /* 0x37f8: i32.store offset=4, align=2 */
    /* 0x37fb: local.get $local_3 */
    /* 0x37fd: i32.const 3736852 */
    /* 0x3802: i32.load offset=0, align=2 */
    /* 0x3805: i32.ne  */
    if (r0 != 0) { goto 6; }
    /* 0x3808: i32.const 3736840 */
    /* 0x380d: i32.const 0 */
    /* 0x380f: i32.store offset=0, align=2 */
    /* 0x3812: i32.const 3736852 */
    /* 0x3817: i32.const 0 */
    /* 0x3819: i32.store offset=0, align=2 */
    return r0;
    /* 0x381d: end  */
    /* 0x381e: i32.const 3736852 */
    /* 0x3823: i32.load offset=0, align=2 */
    /* 0x3826: local.tee $local_7 */
    /* 0x3828: local.get $local_5 */
    /* 0x382a: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x382d: i32.const 3736852 */
    /* 0x3832: local.get $local_3 */
    /* 0x3834: i32.store offset=0, align=2 */
    /* 0x3837: i32.const 3736840 */
    /* 0x383c: i32.const 3736840 */
    /* 0x3841: i32.load offset=0, align=2 */
    /* 0x3844: local.get $local_0 */
    /* 0x3846: i32.add  */
    /* 0x3847: local.tee $local_0 */
    /* 0x3849: i32.store offset=0, align=2 */
    /* 0x384c: local.get $local_3 */
    /* 0x384e: local.get $local_0 */
    /* 0x3850: i32.const 1 */
    /* 0x3852: i32.or  */
    /* 0x3853: i32.store offset=4, align=2 */
    /* 0x3856: local.get $local_0 */
    /* 0x3858: local.get $local_3 */
    /* 0x385a: i32.add  */
    /* 0x385b: local.get $local_0 */
    /* 0x385d: i32.store offset=0, align=2 */
    return r0;
    /* 0x3861: end  */
    /* 0x3862: local.get $local_4 */
    /* 0x3864: i32.const -8 */
    /* 0x3866: i32.and  */
    /* 0x3867: local.get $local_0 */
    /* 0x3869: i32.add  */
    /* 0x386a: local.set $local_0 */
    /* 0x386c: local.get $local_5 */
    /* 0x386e: i32.load offset=12, align=2 */
    /* 0x3871: local.set $local_1 */
    /* 0x3873: local.get $local_4 */
    /* 0x3875: i32.const 255 */
    /* 0x3878: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x387b: local.get $local_5 */
    /* 0x387d: i32.load offset=8, align=2 */
    /* 0x3880: local.tee $local_2 */
    /* 0x3882: local.get $local_1 */
    /* 0x3884: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3887: i32.const 3736832 */
    /* 0x388c: i32.const 3736832 */
    /* 0x3891: i32.load offset=0, align=2 */
    /* 0x3894: i32.const -2 */
    /* 0x3896: local.get $local_4 */
    /* 0x3898: i32.const 3 */
    /* 0x389a: i32.shr_u  */
    /* 0x389b: i32.rotl  */
    /* 0x389c: i32.and  */
    /* 0x389d: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 5; }
    /* 0x38a2: end  */
    /* 0x38a3: local.get $local_2 */
    /* 0x38a5: local.get $local_1 */
    /* 0x38a7: i32.store offset=12, align=2 */
    /* 0x38aa: local.get $local_1 */
    /* 0x38ac: local.get $local_2 */
    /* 0x38ae: i32.store offset=8, align=2 */
    if (r0 != 0) { goto 4; }
    /* 0x38b3: end  */
    /* 0x38b4: local.get $local_5 */
    /* 0x38b6: i32.load offset=24, align=2 */
    /* 0x38b9: local.set $local_8 */
    /* 0x38bb: local.get $local_1 */
    /* 0x38bd: local.get $local_5 */
    /* 0x38bf: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x38c2: local.get $local_5 */
    /* 0x38c4: i32.load offset=8, align=2 */
    /* 0x38c7: local.tee $local_2 */
    /* 0x38c9: local.get $local_1 */
    /* 0x38cb: i32.store offset=12, align=2 */
    /* 0x38ce: local.get $local_1 */
    /* 0x38d0: local.get $local_2 */
    /* 0x38d2: i32.store offset=8, align=2 */
    if (r0 != 0) { goto 3; }
    /* 0x38d7: end  */
    /* 0x38d8: local.get $local_5 */
    /* 0x38da: i32.load offset=20, align=2 */
    /* 0x38dd: local.tee $local_2 */
    if (r0 != 0) { goto 0x7f; }
    /* 0x38e1: local.get $local_5 */
    /* 0x38e3: i32.const 20 */
    /* 0x38e5: i32.add  */
    /* 0x38e6: else  */
    /* 0x38e7: local.get $local_5 */
    /* 0x38e9: i32.load offset=16, align=2 */
    /* 0x38ec: local.tee $local_2 */
    /* 0x38ee: i32.eqz  */
    if (r0 != 0) { goto 2; }
    /* 0x38f1: local.get $local_5 */
    /* 0x38f3: i32.const 16 */
    /* 0x38f5: i32.add  */
    /* 0x38f6: end  */
    /* 0x38f7: local.set $local_4 */
    /* 0x38f9: loop 0x40 */
    /* 0x38fb: local.get $local_4 */
    /* 0x38fd: local.set $local_6 */
    /* 0x38ff: local.get $local_2 */
    /* 0x3901: local.tee $local_1 */
    /* 0x3903: i32.const 20 */
    /* 0x3905: i32.add  */
    /* 0x3906: local.set $local_4 */
    /* 0x3908: local.get $local_1 */
    /* 0x390a: i32.load offset=20, align=2 */
    /* 0x390d: local.tee $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x3911: local.get $local_1 */
    /* 0x3913: i32.const 16 */
    /* 0x3915: i32.add  */
    /* 0x3916: local.set $local_4 */
    /* 0x3918: local.get $local_1 */
    /* 0x391a: i32.load offset=16, align=2 */
    /* 0x391d: local.tee $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x3921: end  */
    /* 0x3922: local.get $local_6 */
    /* 0x3924: i32.const 0 */
    /* 0x3926: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 2; }
    /* 0x392b: end  */
    /* 0x392c: local.get $local_5 */
    /* 0x392e: local.get $local_4 */
    /* 0x3930: i32.const -2 */
    /* 0x3932: i32.and  */
    /* 0x3933: i32.store offset=4, align=2 */
    /* 0x3936: local.get $local_3 */
    /* 0x3938: local.get $local_0 */
    /* 0x393a: i32.const 1 */
    /* 0x393c: i32.or  */
    /* 0x393d: i32.store offset=4, align=2 */
    /* 0x3940: local.get $local_0 */
    /* 0x3942: local.get $local_3 */
    /* 0x3944: i32.add  */
    /* 0x3945: local.get $local_0 */
    /* 0x3947: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 3; }
    /* 0x394c: end  */
    /* 0x394d: i32.const 0 */
    /* 0x394f: local.set $local_1 */
    /* 0x3951: end  */
    /* 0x3952: local.get $local_8 */
    /* 0x3954: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x3957: block 0x40 */
    /* 0x3959: local.get $local_5 */
    /* 0x395b: i32.load offset=28, align=2 */
    /* 0x395e: local.tee $local_4 */
    /* 0x3960: i32.const 2 */
    /* 0x3962: i32.shl  */
    /* 0x3963: local.tee $local_2 */
    /* 0x3965: i32.load offset=3737136, align=2 */
    /* 0x396b: local.get $local_5 */
    /* 0x396d: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3970: local.get $local_2 */
    /* 0x3972: i32.const 3737136 */
    /* 0x3977: i32.add  */
    /* 0x3978: local.get $local_1 */
    /* 0x397a: i32.store offset=0, align=2 */
    /* 0x397d: local.get $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x3981: i32.const 3736836 */
    /* 0x3986: i32.const 3736836 */
    /* 0x398b: i32.load offset=0, align=2 */
    /* 0x398e: i32.const -2 */
    /* 0x3990: local.get $local_4 */
    /* 0x3992: i32.rotl  */
    /* 0x3993: i32.and  */
    /* 0x3994: i32.store offset=0, align=2 */
    if (r0 != 0) { goto 2; }
    /* 0x3999: end  */
    /* 0x399a: block 0x40 */
    /* 0x399c: local.get $local_5 */
    /* 0x399e: local.get $local_8 */
    /* 0x39a0: i32.load offset=16, align=2 */
    /* 0x39a3: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x39a6: local.get $local_8 */
    /* 0x39a8: local.get $local_1 */
    /* 0x39aa: i32.store offset=16, align=2 */
    if (r0 != 0) { goto 1; }
    /* 0x39af: end  */
    /* 0x39b0: local.get $local_8 */
    /* 0x39b2: local.get $local_1 */
    /* 0x39b4: i32.store offset=20, align=2 */
    /* 0x39b7: end  */
    /* 0x39b8: local.get $local_1 */
    /* 0x39ba: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x39bd: end  */
    /* 0x39be: local.get $local_1 */
    /* 0x39c0: local.get $local_8 */
    /* 0x39c2: i32.store offset=24, align=2 */
    /* 0x39c5: local.get $local_5 */
    /* 0x39c7: i32.load offset=16, align=2 */
    /* 0x39ca: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x39ce: local.get $local_1 */
    /* 0x39d0: local.get $local_2 */
    /* 0x39d2: i32.store offset=16, align=2 */
    /* 0x39d5: local.get $local_2 */
    /* 0x39d7: local.get $local_1 */
    /* 0x39d9: i32.store offset=24, align=2 */
    /* 0x39dc: end  */
    /* 0x39dd: local.get $local_5 */
    /* 0x39df: i32.load offset=20, align=2 */
    /* 0x39e2: local.tee $local_2 */
    /* 0x39e4: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x39e7: local.get $local_1 */
    /* 0x39e9: local.get $local_2 */
    /* 0x39eb: i32.store offset=20, align=2 */
    /* 0x39ee: local.get $local_2 */
    /* 0x39f0: local.get $local_1 */
    /* 0x39f2: i32.store offset=24, align=2 */
    /* 0x39f5: end  */
    /* 0x39f6: local.get $local_3 */
    /* 0x39f8: local.get $local_0 */
    /* 0x39fa: i32.const 1 */
    /* 0x39fc: i32.or  */
    /* 0x39fd: i32.store offset=4, align=2 */
    /* 0x3a00: local.get $local_0 */
    /* 0x3a02: local.get $local_3 */
    /* 0x3a04: i32.add  */
    /* 0x3a05: local.get $local_0 */
    /* 0x3a07: i32.store offset=0, align=2 */
    /* 0x3a0a: local.get $local_3 */
    /* 0x3a0c: local.get $local_7 */
    /* 0x3a0e: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x3a11: i32.const 3736840 */
    /* 0x3a16: local.get $local_0 */
    /* 0x3a18: i32.store offset=0, align=2 */
    return r0;
    /* 0x3a1c: end  */
    /* 0x3a1d: local.get $local_0 */
    /* 0x3a1f: i32.const 255 */
    /* 0x3a22: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3a25: local.get $local_0 */
    /* 0x3a27: i32.const 248 */
    /* 0x3a2a: i32.and  */
    /* 0x3a2b: i32.const 3736872 */
    /* 0x3a30: i32.add  */
    /* 0x3a31: local.set $local_2 */
    /* 0x3a33: block 0x7f */
    /* 0x3a35: i32.const 3736832 */
    /* 0x3a3a: i32.load offset=0, align=2 */
    /* 0x3a3d: local.tee $local_4 */
    /* 0x3a3f: i32.const 1 */
    /* 0x3a41: local.get $local_0 */
    /* 0x3a43: i32.const 3 */
    /* 0x3a45: i32.shr_u  */
    /* 0x3a46: i32.shl  */
    /* 0x3a47: local.tee $local_0 */
    /* 0x3a49: i32.and  */
    /* 0x3a4a: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3a4d: i32.const 3736832 */
    /* 0x3a52: local.get $local_0 */
    /* 0x3a54: local.get $local_4 */
    /* 0x3a56: i32.or  */
    /* 0x3a57: i32.store offset=0, align=2 */
    /* 0x3a5a: local.get $local_2 */
    if (r0 != 0) { goto 1; }
    /* 0x3a5e: end  */
    /* 0x3a5f: local.get $local_2 */
    /* 0x3a61: i32.load offset=8, align=2 */
    /* 0x3a64: end  */
    /* 0x3a65: local.set $local_0 */
    /* 0x3a67: local.get $local_2 */
    /* 0x3a69: local.get $local_3 */
    /* 0x3a6b: i32.store offset=8, align=2 */
    /* 0x3a6e: local.get $local_0 */
    /* 0x3a70: local.get $local_3 */
    /* 0x3a72: i32.store offset=12, align=2 */
    /* 0x3a75: local.get $local_3 */
    /* 0x3a77: local.get $local_2 */
    /* 0x3a79: i32.store offset=12, align=2 */
    /* 0x3a7c: local.get $local_3 */
    /* 0x3a7e: local.get $local_0 */
    /* 0x3a80: i32.store offset=8, align=2 */
    return r0;
    /* 0x3a84: end  */
    /* 0x3a85: i32.const 31 */
    /* 0x3a87: local.set $local_1 */
    /* 0x3a89: local.get $local_0 */
    /* 0x3a8b: i32.const 16777215 */
    /* 0x3a90: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3a93: local.get $local_0 */
    /* 0x3a95: i32.const 38 */
    /* 0x3a97: local.get $local_0 */
    /* 0x3a99: i32.const 8 */
    /* 0x3a9b: i32.shr_u  */
    /* 0x3a9c: wasm.op_0x67  */
    /* 0x3a9d: local.tee $local_2 */
    /* 0x3a9f: i32.sub  */
    /* 0x3aa0: i32.shr_u  */
    /* 0x3aa1: i32.const 1 */
    /* 0x3aa3: i32.and  */
    /* 0x3aa4: local.get $local_2 */
    /* 0x3aa6: i32.const 1 */
    /* 0x3aa8: i32.shl  */
    /* 0x3aa9: i32.or  */
    /* 0x3aaa: i32.const 62 */
    /* 0x3aac: i32.xor  */
    /* 0x3aad: local.set $local_1 */
    /* 0x3aaf: end  */
    /* 0x3ab0: local.get $local_3 */
    /* 0x3ab2: local.get $local_1 */
    /* 0x3ab4: i32.store offset=28, align=2 */
    /* 0x3ab7: local.get $local_3 */
    /* 0x3ab9: i64.const 0x0 */
    /* 0x3abb: i64.store offset=16, align=2 */
    /* 0x3abe: local.get $local_1 */
    /* 0x3ac0: i32.const 2 */
    /* 0x3ac2: i32.shl  */
    /* 0x3ac3: i32.const 3737136 */
    /* 0x3ac8: i32.add  */
    /* 0x3ac9: local.set $local_4 */
    /* 0x3acb: block 0x7f */
    /* 0x3acd: block 0x40 */
    /* 0x3acf: block 0x7f */
    /* 0x3ad1: i32.const 3736836 */
    /* 0x3ad6: i32.load offset=0, align=2 */
    /* 0x3ad9: local.tee $local_6 */
    /* 0x3adb: i32.const 1 */
    /* 0x3add: local.get $local_1 */
    /* 0x3adf: i32.shl  */
    /* 0x3ae0: local.tee $local_2 */
    /* 0x3ae2: i32.and  */
    /* 0x3ae3: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3ae6: i32.const 3736836 */
    /* 0x3aeb: local.get $local_2 */
    /* 0x3aed: local.get $local_6 */
    /* 0x3aef: i32.or  */
    /* 0x3af0: i32.store offset=0, align=2 */
    /* 0x3af3: local.get $local_4 */
    /* 0x3af5: local.get $local_3 */
    /* 0x3af7: i32.store offset=0, align=2 */
    /* 0x3afa: i32.const 24 */
    /* 0x3afc: local.set $local_1 */
    /* 0x3afe: i32.const 8 */
    if (r0 != 0) { goto 1; }
    /* 0x3b02: end  */
    /* 0x3b03: local.get $local_0 */
    /* 0x3b05: i32.const 25 */
    /* 0x3b07: local.get $local_1 */
    /* 0x3b09: i32.const 1 */
    /* 0x3b0b: i32.shr_u  */
    /* 0x3b0c: i32.sub  */
    /* 0x3b0d: i32.const 0 */
    /* 0x3b0f: local.get $local_1 */
    /* 0x3b11: i32.const 31 */
    /* 0x3b13: i32.ne  */
    /* 0x3b14: select  */
    /* 0x3b15: i32.shl  */
    /* 0x3b16: local.set $local_1 */
    /* 0x3b18: local.get $local_4 */
    /* 0x3b1a: i32.load offset=0, align=2 */
    /* 0x3b1d: local.set $local_4 */
    /* 0x3b1f: loop 0x40 */
    /* 0x3b21: local.get $local_4 */
    /* 0x3b23: local.tee $local_2 */
    /* 0x3b25: i32.load offset=4, align=2 */
    /* 0x3b28: i32.const -8 */
    /* 0x3b2a: i32.and  */
    /* 0x3b2b: local.get $local_0 */
    /* 0x3b2d: i32.eq  */
    if (r0 != 0) { goto 2; }
    /* 0x3b30: local.get $local_1 */
    /* 0x3b32: i32.const 29 */
    /* 0x3b34: i32.shr_u  */
    /* 0x3b35: local.set $local_4 */
    /* 0x3b37: local.get $local_1 */
    /* 0x3b39: i32.const 1 */
    /* 0x3b3b: i32.shl  */
    /* 0x3b3c: local.set $local_1 */
    /* 0x3b3e: local.get $local_2 */
    /* 0x3b40: local.get $local_4 */
    /* 0x3b42: i32.const 4 */
    /* 0x3b44: i32.and  */
    /* 0x3b45: i32.add  */
    /* 0x3b46: local.tee $local_6 */
    /* 0x3b48: i32.load offset=16, align=2 */
    /* 0x3b4b: local.tee $local_4 */
    if (r0 != 0) { goto 0; }
    /* 0x3b4f: end  */
    /* 0x3b50: local.get $local_6 */
    /* 0x3b52: local.get $local_3 */
    /* 0x3b54: i32.store offset=16, align=2 */
    /* 0x3b57: i32.const 24 */
    /* 0x3b59: local.set $local_1 */
    /* 0x3b5b: local.get $local_2 */
    /* 0x3b5d: local.set $local_4 */
    /* 0x3b5f: i32.const 8 */
    /* 0x3b61: end  */
    /* 0x3b62: local.set $local_0 */
    /* 0x3b64: local.get $local_3 */
    /* 0x3b66: local.tee $local_2 */
    if (r0 != 0) { goto 1; }
    /* 0x3b6a: end  */
    /* 0x3b6b: local.get $local_2 */
    /* 0x3b6d: i32.load offset=8, align=2 */
    /* 0x3b70: local.tee $local_4 */
    /* 0x3b72: local.get $local_3 */
    /* 0x3b74: i32.store offset=12, align=2 */
    /* 0x3b77: local.get $local_2 */
    /* 0x3b79: local.get $local_3 */
    /* 0x3b7b: i32.store offset=8, align=2 */
    /* 0x3b7e: i32.const 24 */
    /* 0x3b80: local.set $local_0 */
    /* 0x3b82: i32.const 8 */
    /* 0x3b84: local.set $local_1 */
    /* 0x3b86: i32.const 0 */
    /* 0x3b88: end  */
    /* 0x3b89: local.set $local_6 */
    /* 0x3b8b: local.get $local_1 */
    /* 0x3b8d: local.get $local_3 */
    /* 0x3b8f: i32.add  */
    /* 0x3b90: local.get $local_4 */
    /* 0x3b92: i32.store offset=0, align=2 */
    /* 0x3b95: local.get $local_3 */
    /* 0x3b97: local.get $local_2 */
    /* 0x3b99: i32.store offset=12, align=2 */
    /* 0x3b9c: local.get $local_0 */
    /* 0x3b9e: local.get $local_3 */
    /* 0x3ba0: i32.add  */
    /* 0x3ba1: local.get $local_6 */
    /* 0x3ba3: i32.store offset=0, align=2 */
    /* 0x3ba6: i32.const 3736864 */
    /* 0x3bab: i32.const 3736864 */
    /* 0x3bb0: i32.load offset=0, align=2 */
    /* 0x3bb3: i32.const 1 */
    /* 0x3bb5: i32.sub  */
    /* 0x3bb6: local.tee $local_0 */
    /* 0x3bb8: i32.const -1 */
    /* 0x3bba: local.get $local_0 */
    /* 0x3bbc: select  */
    /* 0x3bbd: i32.store offset=0, align=2 */
    /* 0x3bc0: end  */
    return r0;
}