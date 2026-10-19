/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Users/gilles/.gemini/antigravity/brain/9d4f7005-e3a0-4b0b-9c59-b3cebb4935ab/scratch/asar_dot/orbit-characters.wasm
* Format : WebAssembly (.wasm) (wasm32)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── _d @ 0x359d (1 basic blocks) ──
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

// ── wasm_func_264 @ 0x3bc3 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_264 ───
int64_t wasm_func_264(int64_t arg0, int64_t arg1) {
    /* 0x3bc6: i32.const 3737328 */
    /* 0x3bcb: i32.const 0 */
    /* 0x3bcd: i32.store offset=0, align=2 */
    /* 0x3bd0: i32.const 1757 */
    /* 0x3bd3: local.get $local_0 */
    /* 0x3bd5: i32.const 27 */
    /* 0x3bd7: i32.add  */
    /* 0x3bd8: i32.const -4 */
    /* 0x3bda: i32.and  */
    /* 0x3bdb: local.tee $local_1 */
    r0 = imp_f(r0, r1);
    /* 0x3bdf: local.set $local_0 */
    /* 0x3be1: i32.const 3737328 */
    /* 0x3be6: i32.load offset=0, align=2 */
    /* 0x3be9: local.set $local_2 */
    /* 0x3beb: i32.const 3737328 */
    /* 0x3bf0: i32.const 0 */
    /* 0x3bf2: i32.store offset=0, align=2 */
    /* 0x3bf5: block 0x40 */
    /* 0x3bf7: local.get $local_2 */
    /* 0x3bf9: i32.const 1 */
    /* 0x3bfb: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3bfe: local.get $local_0 */
    /* 0x3c00: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x3c03: local.get $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x3c07: local.get $local_0 */
    /* 0x3c09: i32.const 0 */
    /* 0x3c0b: local.get $local_1 */
    /* 0x3c0d: wasm.op_0xfc  */
    /* 0x3c0e: end  */
    /* 0x3c0f: unreachable  */
    /* 0x3c10: end  */
    /* 0x3c11: local.get $local_0 */
    /* 0x3c13: i32.const 24 */
    /* 0x3c15: i32.add  */
    return r0;
    /* 0x3c17: end  */
    /* 0x3c18: i32.const 0 */
    r0 = imp_k(r0, r1);
    r0 = wasm_func_272(r0, r1);
    /* 0x3c1f: unreachable  */
    /* 0x3c20: end  */
    r0 = wasm_func_748(r0, r1);
    /* 0x3c24: unreachable  */
    return r0;
}

// ── wasm_func_265 @ 0x3c27 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_265 ───
int64_t wasm_func_265(int64_t arg0, int64_t arg1) {
    /* 0x3c28: i32.const 3737328 */
    /* 0x3c2d: i32.const 0 */
    /* 0x3c2f: i32.store offset=0, align=2 */
    /* 0x3c32: local.get $local_0 */
    /* 0x3c34: i32.const 24 */
    /* 0x3c36: i32.sub  */
    r0 = wasm_func_1026(r0, r1);
    /* 0x3c3a: i32.const 3737328 */
    /* 0x3c3f: i32.load offset=0, align=2 */
    /* 0x3c42: i32.const 3737328 */
    /* 0x3c47: i32.const 0 */
    /* 0x3c49: i32.store offset=0, align=2 */
    /* 0x3c4c: i32.const 1 */
    /* 0x3c4e: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    return r0;
    /* 0x3c52: end  */
    /* 0x3c53: i32.const 0 */
    r0 = imp_k(r0, r1);
    r0 = wasm_func_272(r0, r1);
    /* 0x3c5a: unreachable  */
    return r0;
}

// ── wasm_func_266 @ 0x3c5d (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_266 ───
int64_t wasm_func_266(int64_t arg0, int64_t arg1) {
    /* 0x3c60: i32.const 1 */
    /* 0x3c62: local.get $local_0 */
    /* 0x3c64: local.get $local_0 */
    /* 0x3c66: i32.const 1 */
    /* 0x3c68: i32.le_u  */
    /* 0x3c69: select  */
    /* 0x3c6a: local.set $local_0 */
    /* 0x3c6c: block 0x40 */
    /* 0x3c6e: loop 0x40 */
    /* 0x3c70: local.get $local_0 */
    r0 = Zd(r0, r1);
    /* 0x3c75: local.tee $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x3c79: i32.const 3737412 */
    /* 0x3c7e: i32.load offset=0, align=2 */
    /* 0x3c81: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x3c85: local.get $local_1 */
    /* 0x3c87: wasm.op_0x11  */
    /* 0x3c88: end  */
    /* 0x3c89: unreachable  */
    if (r0 != 0) { goto 1; }
    /* 0x3c8c: end  */
    /* 0x3c8d: end  */
    r0 = wasm_func_1043(r0, r1);
    /* 0x3c91: unreachable  */
    /* 0x3c92: end  */
    /* 0x3c93: local.get $local_1 */
    return r0;
}

// ── wasm_func_267 @ 0x3c98 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_267 ───
int64_t wasm_func_267(int64_t arg0, int64_t arg1) {
    /* 0x3c9b: block 0x40 */
    /* 0x3c9d: block 0x40 */
    /* 0x3c9f: local.get $local_2 */
    /* 0x3ca1: i32.const 4 */
    /* 0x3ca3: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3ca6: local.get $local_0 */
    /* 0x3ca8: local.get $local_1 */
    /* 0x3caa: i32.or  */
    /* 0x3cab: i32.const 3 */
    /* 0x3cad: i32.and  */
    if (r0 != 0) { goto 1; }
    /* 0x3cb0: loop 0x40 */
    /* 0x3cb2: local.get $local_0 */
    /* 0x3cb4: i32.load offset=0, align=2 */
    /* 0x3cb7: local.get $local_1 */
    /* 0x3cb9: i32.load offset=0, align=2 */
    /* 0x3cbc: i32.ne  */
    if (r0 != 0) { goto 2; }
    /* 0x3cbf: local.get $local_1 */
    /* 0x3cc1: i32.const 4 */
    /* 0x3cc3: i32.add  */
    /* 0x3cc4: local.set $local_1 */
    /* 0x3cc6: local.get $local_0 */
    /* 0x3cc8: i32.const 4 */
    /* 0x3cca: i32.add  */
    /* 0x3ccb: local.set $local_0 */
    /* 0x3ccd: local.get $local_2 */
    /* 0x3ccf: i32.const 4 */
    /* 0x3cd1: i32.sub  */
    /* 0x3cd2: local.tee $local_2 */
    /* 0x3cd4: i32.const 3 */
    /* 0x3cd6: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x3cd9: end  */
    /* 0x3cda: end  */
    /* 0x3cdb: local.get $local_2 */
    /* 0x3cdd: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x3ce0: end  */
    /* 0x3ce1: loop 0x40 */
    /* 0x3ce3: local.get $local_0 */
    /* 0x3ce5: i32.load8_u offset=0, align=0 */
    /* 0x3ce8: local.tee $local_3 */
    /* 0x3cea: local.get $local_1 */
    /* 0x3cec: i32.load8_u offset=0, align=0 */
    /* 0x3cef: local.tee $local_4 */
    /* 0x3cf1: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3cf4: local.get $local_1 */
    /* 0x3cf6: i32.const 1 */
    /* 0x3cf8: i32.add  */
    /* 0x3cf9: local.set $local_1 */
    /* 0x3cfb: local.get $local_0 */
    /* 0x3cfd: i32.const 1 */
    /* 0x3cff: i32.add  */
    /* 0x3d00: local.set $local_0 */
    /* 0x3d02: local.get $local_2 */
    /* 0x3d04: i32.const 1 */
    /* 0x3d06: i32.sub  */
    /* 0x3d07: local.tee $local_2 */
    if (r0 != 0) { goto 1; }
    if (r0 != 0) { goto 2; }
    /* 0x3d0d: end  */
    /* 0x3d0e: end  */
    /* 0x3d0f: local.get $local_3 */
    /* 0x3d11: local.get $local_4 */
    /* 0x3d13: i32.sub  */
    return r0;
    /* 0x3d15: end  */
    /* 0x3d16: i32.const 0 */
    return r0;
}

// ── wasm_func_268 @ 0x3d1a (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_268 ───
int64_t wasm_func_268(int64_t arg0, int64_t arg1) {
    /* 0x3d1d: global.get $global_0 */
    /* 0x3d1f: i32.const 16 */
    /* 0x3d21: i32.sub  */
    /* 0x3d22: local.tee $local_5 */
    /* 0x3d24: global.get $global_4 */
    /* 0x3d26: i32.gt_u  */
    /* 0x3d27: local.get $local_5 */
    /* 0x3d29: global.get $global_5 */
    /* 0x3d2b: i32.lt_u  */
    /* 0x3d2c: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3d2f: local.get $local_5 */
    r0 = imp_d(r0, r1);
    /* 0x3d33: end  */
    /* 0x3d34: local.get $local_5 */
    /* 0x3d36: global.set $global_0 */
    /* 0x3d38: local.get $local_5 */
    /* 0x3d3a: local.get $local_1 */
    /* 0x3d3c: local.get $local_2 */
    /* 0x3d3e: local.get $local_3 */
    /* 0x3d40: local.get $local_4 */
    /* 0x3d42: i64.const 0x8000000000000000 */
    /* 0x3d4d: i64.xor  */
    r0 = wasm_func_279(r0, r1);
    /* 0x3d51: local.get $local_5 */
    /* 0x3d53: i64.load offset=0, align=3 */
    /* 0x3d56: local.set $local_1 */
    /* 0x3d58: local.get $local_0 */
    /* 0x3d5a: local.get $local_5 */
    /* 0x3d5c: i64.load offset=8, align=3 */
    /* 0x3d5f: i64.store offset=8, align=3 */
    /* 0x3d62: local.get $local_0 */
    /* 0x3d64: local.get $local_1 */
    /* 0x3d66: i64.store offset=0, align=3 */
    /* 0x3d69: local.get $local_5 */
    /* 0x3d6b: i32.const 16 */
    /* 0x3d6d: i32.add  */
    /* 0x3d6e: local.tee $local_0 */
    /* 0x3d70: global.get $global_4 */
    /* 0x3d72: i32.gt_u  */
    /* 0x3d73: local.get $local_0 */
    /* 0x3d75: global.get $global_5 */
    /* 0x3d77: i32.lt_u  */
    /* 0x3d78: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3d7b: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x3d7f: end  */
    /* 0x3d80: local.get $local_0 */
    /* 0x3d82: global.set $global_0 */
    return r0;
}

// ── wasm_func_269 @ 0x3d86 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_269 ───
int64_t wasm_func_269(int64_t arg0, int64_t arg1) {
    /* 0x3d87: i32.const 14827 */
    r0 = wasm_func_1248(r0, r1);
    /* 0x3d8e: unreachable  */
    return r0;
}

// ── wasm_func_270 @ 0x3d91 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_270 ───
int64_t wasm_func_270(int64_t arg0, int64_t arg1) {
    /* 0x3d92: local.get $local_0 */
    /* 0x3d94: local.get $local_1 */
    /* 0x3d96: wasm.op_0x2a  */
    /* 0x3d97: block 0x00 */
    /* 0x3d99: local.get $local_2 */
    /* 0x3d9b: wasm.op_0x2a  */
    /* 0x3d9c: block 0x00 */
    /* 0x3d9e: wasm.op_0x92  */
    /* 0x3d9f: wasm.op_0x38  */
    /* 0x3da0: block 0x00 */
    /* 0x3da2: local.get $local_0 */
    /* 0x3da4: local.get $local_1 */
    /* 0x3da6: wasm.op_0x2a  */
    /* 0x3da7: block 0x04 */
    /* 0x3da9: local.get $local_2 */
    /* 0x3dab: wasm.op_0x2a  */
    /* 0x3dac: block 0x04 */
    /* 0x3dae: wasm.op_0x92  */
    /* 0x3daf: wasm.op_0x38  */
    /* 0x3db0: block 0x04 */
    /* 0x3db2: local.get $local_0 */
    /* 0x3db4: local.get $local_1 */
    /* 0x3db6: wasm.op_0x2a  */
    /* 0x3db7: block 0x08 */
    /* 0x3db9: local.get $local_2 */
    /* 0x3dbb: wasm.op_0x2a  */
    /* 0x3dbc: block 0x08 */
    /* 0x3dbe: wasm.op_0x92  */
    /* 0x3dbf: wasm.op_0x38  */
    /* 0x3dc0: block 0x08 */
    return r0;
}

// ── wasm_func_271 @ 0x3dc5 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_271 ───
int64_t wasm_func_271(int64_t arg0, int64_t arg1) {
    /* 0x3dca: i32.const 1 */
    /* 0x3dcc: local.set $local_4 */
    /* 0x3dce: block 0x40 */
    /* 0x3dd0: local.get $local_0 */
    /* 0x3dd2: i64.const 0x0 */
    /* 0x3dd4: i64.ne  */
    /* 0x3dd5: local.get $local_1 */
    /* 0x3dd7: i64.const 0x7fffffffffffffff */
    /* 0x3de2: i64.and  */
    /* 0x3de3: local.tee $local_5 */
    /* 0x3de5: i64.const 0x7fff000000000000 */
    /* 0x3df0: wasm.op_0x56  */
    /* 0x3df1: local.get $local_5 */
    /* 0x3df3: i64.const 0x7fff000000000000 */
    /* 0x3dfe: i64.eq  */
    /* 0x3dff: select  */
    if (r0 != 0) { goto 0; }
    /* 0x3e02: local.get $local_2 */
    /* 0x3e04: i64.const 0x0 */
    /* 0x3e06: i64.ne  */
    /* 0x3e07: local.get $local_3 */
    /* 0x3e09: i64.const 0x7fffffffffffffff */
    /* 0x3e14: i64.and  */
    /* 0x3e15: local.tee $local_6 */
    /* 0x3e17: i64.const 0x7fff000000000000 */
    /* 0x3e22: wasm.op_0x56  */
    /* 0x3e23: local.get $local_6 */
    /* 0x3e25: i64.const 0x7fff000000000000 */
    /* 0x3e30: i64.eq  */
    /* 0x3e31: select  */
    if (r0 != 0) { goto 0; }
    /* 0x3e34: local.get $local_0 */
    /* 0x3e36: local.get $local_2 */
    /* 0x3e38: i64.or  */
    /* 0x3e39: local.get $local_5 */
    /* 0x3e3b: local.get $local_6 */
    /* 0x3e3d: i64.or  */
    /* 0x3e3e: i64.or  */
    /* 0x3e3f: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3e42: i32.const 0 */
    return r0;
    /* 0x3e45: end  */
    /* 0x3e46: local.get $local_1 */
    /* 0x3e48: local.get $local_3 */
    /* 0x3e4a: i64.and  */
    /* 0x3e4b: i64.const 0x0 */
    /* 0x3e4d: wasm.op_0x59  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3e50: local.get $local_0 */
    /* 0x3e52: local.get $local_2 */
    /* 0x3e54: wasm.op_0x54  */
    /* 0x3e55: local.get $local_1 */
    /* 0x3e57: local.get $local_3 */
    /* 0x3e59: wasm.op_0x53  */
    /* 0x3e5a: local.get $local_1 */
    /* 0x3e5c: local.get $local_3 */
    /* 0x3e5e: i64.eq  */
    /* 0x3e5f: select  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3e62: i32.const -1 */
    return r0;
    /* 0x3e65: end  */
    /* 0x3e66: local.get $local_0 */
    /* 0x3e68: local.get $local_2 */
    /* 0x3e6a: i64.xor  */
    /* 0x3e6b: local.get $local_1 */
    /* 0x3e6d: local.get $local_3 */
    /* 0x3e6f: i64.xor  */
    /* 0x3e70: i64.or  */
    /* 0x3e71: i64.const 0x0 */
    /* 0x3e73: i64.ne  */
    return r0;
    /* 0x3e75: end  */
    /* 0x3e76: local.get $local_0 */
    /* 0x3e78: local.get $local_2 */
    /* 0x3e7a: wasm.op_0x56  */
    /* 0x3e7b: local.get $local_1 */
    /* 0x3e7d: local.get $local_3 */
    /* 0x3e7f: wasm.op_0x55  */
    /* 0x3e80: local.get $local_1 */
    /* 0x3e82: local.get $local_3 */
    /* 0x3e84: i64.eq  */
    /* 0x3e85: select  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3e88: i32.const -1 */
    return r0;
    /* 0x3e8b: end  */
    /* 0x3e8c: local.get $local_0 */
    /* 0x3e8e: local.get $local_2 */
    /* 0x3e90: i64.xor  */
    /* 0x3e91: local.get $local_1 */
    /* 0x3e93: local.get $local_3 */
    /* 0x3e95: i64.xor  */
    /* 0x3e96: i64.or  */
    /* 0x3e97: i64.const 0x0 */
    /* 0x3e99: i64.ne  */
    /* 0x3e9a: local.set $local_4 */
    /* 0x3e9c: end  */
    /* 0x3e9d: local.get $local_4 */
    return r0;
}

// ── wasm_func_272 @ 0x3ea1 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_272 ───
int64_t wasm_func_272(int64_t arg0, int64_t arg1) {
    /* 0x3ea2: local.get $local_0 */
    r0 = imp_q(r0, r1);
    /* 0x3ea6: drop  */
    r0 = wasm_func_748(r0, r1);
    /* 0x3eaa: unreachable  */
    return r0;
}

// ── wasm_func_273 @ 0x3eae (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_273 ───
int64_t wasm_func_273(int64_t arg0, int64_t arg1) {
    /* 0x3eb3: global.get $global_0 */
    /* 0x3eb5: i32.const 16 */
    /* 0x3eb7: i32.sub  */
    /* 0x3eb8: local.tee $local_3 */
    /* 0x3eba: local.tee $local_1 */
    /* 0x3ebc: global.get $global_4 */
    /* 0x3ebe: i32.gt_u  */
    /* 0x3ebf: local.get $local_1 */
    /* 0x3ec1: global.get $global_5 */
    /* 0x3ec3: i32.lt_u  */
    /* 0x3ec4: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3ec7: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x3ecb: end  */
    /* 0x3ecc: local.get $local_1 */
    /* 0x3ece: global.set $global_0 */
    /* 0x3ed0: block 0x40 */
    /* 0x3ed2: local.get $local_0 */
    /* 0x3ed4: wasm.op_0xbc  */
    /* 0x3ed5: local.tee $local_2 */
    /* 0x3ed7: i32.const 2147483647 */
    /* 0x3edd: i32.and  */
    /* 0x3ede: local.tee $local_1 */
    /* 0x3ee0: i32.const 1061752794 */
    /* 0x3ee6: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3ee9: local.get $local_1 */
    /* 0x3eeb: i32.const 964689920 */
    /* 0x3ef1: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x3ef4: local.get $local_0 */
    /* 0x3ef6: wasm.op_0xbb  */
    r0 = wasm_func_390(r0, r1);
    /* 0x3efa: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x3efe: end  */
    /* 0x3eff: local.get $local_1 */
    /* 0x3f01: i32.const 1081824209 */
    /* 0x3f07: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f0a: local.get $local_0 */
    /* 0x3f0c: wasm.op_0xbb  */
    /* 0x3f0d: local.set $local_4 */
    /* 0x3f0f: local.get $local_1 */
    /* 0x3f11: i32.const 1075235811 */
    /* 0x3f17: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f1a: local.get $local_2 */
    /* 0x3f1c: i32.const 0 */
    /* 0x3f1e: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f21: local.get $local_4 */
    /* 0x3f23: wasm.op_0x44  */
    /* 0x3f24: wasm.op_0x18  */
    /* 0x3f25: i32.load8_u offset=84, align=68 */
    /* 0x3f28: wasm.op_0xfb  */
    /* 0x3f29: local.set $local_8185 */
    /* 0x3f2c: wasm.op_0xa0  */
    r0 = wasm_func_391(r0, r1);
    /* 0x3f30: wasm.op_0x8c  */
    /* 0x3f31: local.set $local_0 */
    if (r0 != 0) { goto 3; }
    /* 0x3f35: end  */
    /* 0x3f36: local.get $local_4 */
    /* 0x3f38: wasm.op_0x44  */
    /* 0x3f39: wasm.op_0x18  */
    /* 0x3f3a: i32.load8_u offset=84, align=68 */
    /* 0x3f3d: wasm.op_0xfb  */
    /* 0x3f3e: local.set $local_34086905 */
    /* 0x3f43: wasm.op_0x87  */
    /* 0x3f44: loop 0x21 */
    /* 0x3f46: unreachable  */
    if (r0 != 0) { goto 2; }
    /* 0x3f49: end  */
    /* 0x3f4a: wasm.op_0x44  */
    /* 0x3f4b: wasm.op_0x18  */
    /* 0x3f4c: i32.load8_u offset=84, align=68 */
    /* 0x3f4f: wasm.op_0xfb  */
    /* 0x3f50: local.set $local_9 */
    /* 0x3f52: wasm.op_0xc0  */
    /* 0x3f53: wasm.op_0x44  */
    /* 0x3f54: wasm.op_0x18  */
    /* 0x3f55: i32.load8_u offset=84, align=68 */
    /* 0x3f58: wasm.op_0xfb  */
    /* 0x3f59: local.set $local_9 */
    /* 0x3f5b: wasm.op_0x40  */
    /* 0x3f5c: local.get $local_2 */
    /* 0x3f5e: i32.const 0 */
    /* 0x3f60: i32.ge_s  */
    /* 0x3f61: select  */
    /* 0x3f62: local.get $local_4 */
    /* 0x3f64: wasm.op_0xa0  */
    /* 0x3f65: wasm.op_0x9a  */
    r0 = wasm_func_390(r0, r1);
    /* 0x3f69: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x3f6d: end  */
    /* 0x3f6e: local.get $local_1 */
    /* 0x3f70: i32.const 1088565717 */
    /* 0x3f76: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f79: local.get $local_1 */
    /* 0x3f7b: i32.const 1085271519 */
    /* 0x3f81: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f84: local.get $local_0 */
    /* 0x3f86: wasm.op_0xbb  */
    /* 0x3f87: local.set $local_4 */
    /* 0x3f89: local.get $local_2 */
    /* 0x3f8b: i32.const 0 */
    /* 0x3f8d: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3f90: local.get $local_4 */
    /* 0x3f92: wasm.op_0x44  */
    /* 0x3f93: wasm.op_0xd2  */
    /* 0x3f94: local.set $local_51 */
    /* 0x3f96: wasm.op_0x7f  */
    /* 0x3f97: i64.add  */
    /* 0x3f98: wasm.op_0xd9  */
    /* 0x3f99: wasm.op_0x12  */
    /* 0x3f9a: wasm.op_0x40  */
    /* 0x3f9b: wasm.op_0xa0  */
    r0 = wasm_func_391(r0, r1);
    /* 0x3f9f: local.set $local_0 */
    if (r0 != 0) { goto 3; }
    /* 0x3fa3: end  */
    /* 0x3fa4: local.get $local_4 */
    /* 0x3fa6: wasm.op_0x44  */
    /* 0x3fa7: wasm.op_0xd2  */
    /* 0x3fa8: local.set $local_51 */
    /* 0x3faa: wasm.op_0x7f  */
    /* 0x3fab: i64.add  */
    /* 0x3fac: wasm.op_0xd9  */
    /* 0x3fad: wasm.op_0x12  */
    /* 0x3fae: wasm.op_0xc0  */
    /* 0x3faf: wasm.op_0xa0  */
    r0 = wasm_func_391(r0, r1);
    /* 0x3fb3: wasm.op_0x8c  */
    /* 0x3fb4: local.set $local_0 */
    if (r0 != 0) { goto 2; }
    /* 0x3fb8: end  */
    /* 0x3fb9: wasm.op_0x44  */
    /* 0x3fba: wasm.op_0x18  */
    /* 0x3fbb: i32.load8_u offset=84, align=68 */
    /* 0x3fbe: wasm.op_0xfb  */
    /* 0x3fbf: local.set $local_25 */
    /* 0x3fc1: wasm.op_0x40  */
    /* 0x3fc2: wasm.op_0x44  */
    /* 0x3fc3: wasm.op_0x18  */
    /* 0x3fc4: i32.load8_u offset=84, align=68 */
    /* 0x3fc7: wasm.op_0xfb  */
    /* 0x3fc8: local.set $local_25 */
    /* 0x3fca: wasm.op_0xc0  */
    /* 0x3fcb: local.get $local_2 */
    /* 0x3fcd: i32.const 0 */
    /* 0x3fcf: i32.lt_s  */
    /* 0x3fd0: select  */
    /* 0x3fd1: local.get $local_0 */
    /* 0x3fd3: wasm.op_0xbb  */
    /* 0x3fd4: wasm.op_0xa0  */
    r0 = wasm_func_390(r0, r1);
    /* 0x3fd8: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x3fdc: end  */
    /* 0x3fdd: local.get $local_1 */
    /* 0x3fdf: i32.const 2139095040 */
    /* 0x3fe5: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x3fe8: local.get $local_0 */
    /* 0x3fea: local.get $local_0 */
    /* 0x3fec: wasm.op_0x93  */
    /* 0x3fed: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x3ff1: end  */
    /* 0x3ff2: local.get $local_0 */
    /* 0x3ff4: local.get $local_3 */
    /* 0x3ff6: i32.const 8 */
    /* 0x3ff8: i32.add  */
    r0 = wasm_func_1107(r0, r1);
    /* 0x3ffc: local.set $local_1 */
    /* 0x3ffe: local.get $local_3 */
    /* 0x4000: wasm.op_0x2b  */
    /* 0x4001: loop 0x08 */
    /* 0x4003: local.set $local_4 */
    /* 0x4005: block 0x40 */
    /* 0x4007: block 0x40 */
    /* 0x4009: block 0x40 */
    /* 0x400b: block 0x40 */
    /* 0x400d: local.get $local_1 */
    /* 0x400f: i32.const 3 */
    /* 0x4011: i32.and  */
    /* 0x4012: i32.const 1 */
    /* 0x4014: i32.sub  */
    /* 0x4015: wasm.op_0x0e  */
    /* 0x4016: loop 0x01 */
    /* 0x4018: block 0x03 */
    /* 0x401a: unreachable  */
    /* 0x401b: end  */
    /* 0x401c: local.get $local_4 */
    r0 = wasm_func_390(r0, r1);
    /* 0x4021: local.set $local_0 */
    if (r0 != 0) { goto 3; }
    /* 0x4025: end  */
    /* 0x4026: local.get $local_4 */
    r0 = wasm_func_391(r0, r1);
    /* 0x402b: local.set $local_0 */
    if (r0 != 0) { goto 2; }
    /* 0x402f: end  */
    /* 0x4030: local.get $local_4 */
    /* 0x4032: wasm.op_0x9a  */
    r0 = wasm_func_390(r0, r1);
    /* 0x4036: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x403a: end  */
    /* 0x403b: local.get $local_4 */
    r0 = wasm_func_391(r0, r1);
    /* 0x4040: wasm.op_0x8c  */
    /* 0x4041: local.set $local_0 */
    /* 0x4043: end  */
    /* 0x4044: local.get $local_3 */
    /* 0x4046: i32.const 16 */
    /* 0x4048: i32.add  */
    /* 0x4049: local.tee $local_1 */
    /* 0x404b: global.get $global_4 */
    /* 0x404d: i32.gt_u  */
    /* 0x404e: local.get $local_1 */
    /* 0x4050: global.get $global_5 */
    /* 0x4052: i32.lt_u  */
    /* 0x4053: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4056: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x405a: end  */
    /* 0x405b: local.get $local_1 */
    /* 0x405d: global.set $global_0 */
    /* 0x405f: local.get $local_0 */
    return r0;
}

// ── wasm_func_274 @ 0x4064 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_274 ───
int64_t wasm_func_274(int64_t arg0, int64_t arg1) {
    /* 0x4069: global.get $global_0 */
    /* 0x406b: i32.const 96 */
    /* 0x406e: i32.sub  */
    /* 0x406f: local.tee $local_5 */
    /* 0x4071: global.get $global_4 */
    /* 0x4073: i32.gt_u  */
    /* 0x4074: local.get $local_5 */
    /* 0x4076: global.get $global_5 */
    /* 0x4078: i32.lt_u  */
    /* 0x4079: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x407c: local.get $local_5 */
    r0 = imp_d(r0, r1);
    /* 0x4080: end  */
    /* 0x4081: local.get $local_5 */
    /* 0x4083: global.set $global_0 */
    /* 0x4085: local.get $local_4 */
    /* 0x4087: i64.const 0xffffffffffff */
    /* 0x408f: i64.and  */
    /* 0x4090: local.set $local_10 */
    /* 0x4092: local.get $local_2 */
    /* 0x4094: local.get $local_4 */
    /* 0x4096: i64.xor  */
    /* 0x4097: i64.const 0x8000000000000000 */
    /* 0x40a2: i64.and  */
    /* 0x40a3: local.set $local_11 */
    /* 0x40a5: local.get $local_2 */
    /* 0x40a7: i64.const 0xffffffffffff */
    /* 0x40af: i64.and  */
    /* 0x40b0: local.tee $local_12 */
    /* 0x40b2: i64.const 0x20 */
    /* 0x40b4: i64.shr_u  */
    /* 0x40b5: local.set $local_15 */
    /* 0x40b7: local.get $local_4 */
    /* 0x40b9: i64.const 0x30 */
    /* 0x40bb: i64.shr_u  */
    /* 0x40bc: i32.wrap_i64  */
    /* 0x40bd: i32.const 32767 */
    /* 0x40c1: i32.and  */
    /* 0x40c2: local.set $local_7 */
    /* 0x40c4: block 0x40 */
    /* 0x40c6: block 0x40 */
    /* 0x40c8: local.get $local_2 */
    /* 0x40ca: i64.const 0x30 */
    /* 0x40cc: i64.shr_u  */
    /* 0x40cd: i32.wrap_i64  */
    /* 0x40ce: i32.const 32767 */
    /* 0x40d2: i32.and  */
    /* 0x40d3: local.tee $local_9 */
    /* 0x40d5: i32.const 32767 */
    /* 0x40d9: i32.sub  */
    /* 0x40da: i32.const -32766 */
    /* 0x40de: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x40e1: local.get $local_7 */
    /* 0x40e3: i32.const 32767 */
    /* 0x40e7: i32.sub  */
    /* 0x40e8: i32.const -32767 */
    /* 0x40ec: i32.gt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x40ef: end  */
    /* 0x40f0: local.get $local_1 */
    /* 0x40f2: i64.eqz  */
    /* 0x40f3: local.get $local_2 */
    /* 0x40f5: i64.const 0x7fffffffffffffff */
    /* 0x4100: i64.and  */
    /* 0x4101: local.tee $local_13 */
    /* 0x4103: i64.const 0x7fff000000000000 */
    /* 0x410e: wasm.op_0x54  */
    /* 0x410f: local.get $local_13 */
    /* 0x4111: i64.const 0x7fff000000000000 */
    /* 0x411c: i64.eq  */
    /* 0x411d: select  */
    /* 0x411e: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4121: local.get $local_2 */
    /* 0x4123: i64.const 0x800000000000 */
    /* 0x412b: i64.or  */
    /* 0x412c: local.set $local_11 */
    if (r0 != 0) { goto 2; }
    /* 0x4130: end  */
    /* 0x4131: local.get $local_3 */
    /* 0x4133: i64.eqz  */
    /* 0x4134: local.get $local_4 */
    /* 0x4136: i64.const 0x7fffffffffffffff */
    /* 0x4141: i64.and  */
    /* 0x4142: local.tee $local_2 */
    /* 0x4144: i64.const 0x7fff000000000000 */
    /* 0x414f: wasm.op_0x54  */
    /* 0x4150: local.get $local_2 */
    /* 0x4152: i64.const 0x7fff000000000000 */
    /* 0x415d: i64.eq  */
    /* 0x415e: select  */
    /* 0x415f: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4162: local.get $local_4 */
    /* 0x4164: i64.const 0x800000000000 */
    /* 0x416c: i64.or  */
    /* 0x416d: local.set $local_11 */
    /* 0x416f: local.get $local_3 */
    /* 0x4171: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x4175: end  */
    /* 0x4176: local.get $local_1 */
    /* 0x4178: local.get $local_13 */
    /* 0x417a: i64.const 0x7fff000000000000 */
    /* 0x4185: i64.xor  */
    /* 0x4186: i64.or  */
    /* 0x4187: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x418a: local.get $local_2 */
    /* 0x418c: local.get $local_3 */
    /* 0x418e: i64.or  */
    /* 0x418f: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4192: i64.const 0x7fff800000000000 */
    /* 0x419d: local.set $local_11 */
    /* 0x419f: i64.const 0x0 */
    /* 0x41a1: local.set $local_1 */
    if (r0 != 0) { goto 3; }
    /* 0x41a5: end  */
    /* 0x41a6: local.get $local_11 */
    /* 0x41a8: i64.const 0x7fff000000000000 */
    /* 0x41b3: i64.or  */
    /* 0x41b4: local.set $local_11 */
    /* 0x41b6: i64.const 0x0 */
    /* 0x41b8: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x41bc: end  */
    /* 0x41bd: local.get $local_3 */
    /* 0x41bf: local.get $local_2 */
    /* 0x41c1: i64.const 0x7fff000000000000 */
    /* 0x41cc: i64.xor  */
    /* 0x41cd: i64.or  */
    /* 0x41ce: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x41d1: local.get $local_1 */
    /* 0x41d3: local.get $local_13 */
    /* 0x41d5: i64.or  */
    /* 0x41d6: i64.const 0x0 */
    /* 0x41d8: local.set $local_1 */
    /* 0x41da: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x41dd: i64.const 0x7fff800000000000 */
    /* 0x41e8: local.set $local_11 */
    if (r0 != 0) { goto 3; }
    /* 0x41ec: end  */
    /* 0x41ed: local.get $local_11 */
    /* 0x41ef: i64.const 0x7fff000000000000 */
    /* 0x41fa: i64.or  */
    /* 0x41fb: local.set $local_11 */
    if (r0 != 0) { goto 2; }
    /* 0x41ff: end  */
    /* 0x4200: local.get $local_1 */
    /* 0x4202: local.get $local_13 */
    /* 0x4204: i64.or  */
    /* 0x4205: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4208: i64.const 0x0 */
    /* 0x420a: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x420e: end  */
    /* 0x420f: local.get $local_2 */
    /* 0x4211: local.get $local_3 */
    /* 0x4213: i64.or  */
    /* 0x4214: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4217: i64.const 0x0 */
    /* 0x4219: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x421d: end  */
    /* 0x421e: local.get $local_13 */
    /* 0x4220: i64.const 0xffffffffffff */
    /* 0x4228: wasm.op_0x58  */
    if (r0 != 0) { goto 0x40; }
    /* 0x422b: local.get $local_5 */
    /* 0x422d: i32.const 80 */
    /* 0x4230: i32.add  */
    /* 0x4231: local.get $local_1 */
    /* 0x4233: local.get $local_12 */
    /* 0x4235: local.get $local_1 */
    /* 0x4237: local.get $local_12 */
    /* 0x4239: local.get $local_12 */
    /* 0x423b: i64.eqz  */
    /* 0x423c: local.tee $local_6 */
    /* 0x423e: select  */
    /* 0x423f: wasm.op_0x79  */
    /* 0x4240: i64.const 0x40 */
    /* 0x4243: i64.const 0x0 */
    /* 0x4245: local.get $local_6 */
    /* 0x4247: select  */
    /* 0x4248: i64.add  */
    /* 0x4249: i32.wrap_i64  */
    /* 0x424a: local.tee $local_6 */
    /* 0x424c: i32.const 15 */
    /* 0x424e: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x4252: i32.const 16 */
    /* 0x4254: local.get $local_6 */
    /* 0x4256: i32.sub  */
    /* 0x4257: local.set $local_6 */
    /* 0x4259: local.get $local_5 */
    /* 0x425b: i64.load offset=88, align=3 */
    /* 0x425e: local.tee $local_12 */
    /* 0x4260: i64.const 0x20 */
    /* 0x4262: i64.shr_u  */
    /* 0x4263: local.set $local_15 */
    /* 0x4265: local.get $local_5 */
    /* 0x4267: i64.load offset=80, align=3 */
    /* 0x426a: local.set $local_1 */
    /* 0x426c: end  */
    /* 0x426d: local.get $local_2 */
    /* 0x426f: i64.const 0xffffffffffff */
    /* 0x4277: wasm.op_0x56  */
    if (r0 != 0) { goto 0; }
    /* 0x427a: local.get $local_5 */
    /* 0x427c: i32.const -64 */
    /* 0x427e: i32.sub  */
    /* 0x427f: local.get $local_3 */
    /* 0x4281: local.get $local_10 */
    /* 0x4283: local.get $local_3 */
    /* 0x4285: local.get $local_10 */
    /* 0x4287: local.get $local_10 */
    /* 0x4289: i64.eqz  */
    /* 0x428a: local.tee $local_8 */
    /* 0x428c: select  */
    /* 0x428d: wasm.op_0x79  */
    /* 0x428e: i64.const 0x40 */
    /* 0x4291: i64.const 0x0 */
    /* 0x4293: local.get $local_8 */
    /* 0x4295: select  */
    /* 0x4296: i64.add  */
    /* 0x4297: i32.wrap_i64  */
    /* 0x4298: local.tee $local_8 */
    /* 0x429a: i32.const 15 */
    /* 0x429c: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x42a0: local.get $local_6 */
    /* 0x42a2: local.get $local_8 */
    /* 0x42a4: i32.sub  */
    /* 0x42a5: i32.const 16 */
    /* 0x42a7: i32.add  */
    /* 0x42a8: local.set $local_6 */
    /* 0x42aa: local.get $local_5 */
    /* 0x42ac: i64.load offset=72, align=3 */
    /* 0x42af: local.set $local_10 */
    /* 0x42b1: local.get $local_5 */
    /* 0x42b3: i64.load offset=64, align=3 */
    /* 0x42b6: local.set $local_3 */
    /* 0x42b8: end  */
    /* 0x42b9: local.get $local_7 */
    /* 0x42bb: local.get $local_9 */
    /* 0x42bd: i32.add  */
    /* 0x42be: local.get $local_6 */
    /* 0x42c0: i32.add  */
    /* 0x42c1: i32.const 16383 */
    /* 0x42c5: i32.sub  */
    /* 0x42c6: local.set $local_6 */
    /* 0x42c8: block 0x40 */
    /* 0x42ca: local.get $local_10 */
    /* 0x42cc: i64.const 0xf */
    /* 0x42ce: i64.shl  */
    /* 0x42cf: local.tee $local_14 */
    /* 0x42d1: i64.const 0x20 */
    /* 0x42d3: i64.shr_u  */
    /* 0x42d4: i64.const 0x80000000 */
    /* 0x42da: i64.or  */
    /* 0x42db: local.tee $local_2 */
    /* 0x42dd: local.get $local_1 */
    /* 0x42df: i64.const 0x20 */
    /* 0x42e1: i64.shr_u  */
    /* 0x42e2: local.tee $local_4 */
    /* 0x42e4: i64.mul  */
    /* 0x42e5: local.tee $local_16 */
    /* 0x42e7: local.get $local_3 */
    /* 0x42e9: i64.const 0xf */
    /* 0x42eb: i64.shl  */
    /* 0x42ec: local.tee $local_17 */
    /* 0x42ee: i64.const 0x20 */
    /* 0x42f0: i64.shr_u  */
    /* 0x42f1: local.tee $local_10 */
    /* 0x42f3: local.get $local_15 */
    /* 0x42f5: i64.const 0x10000 */
    /* 0x42f9: i64.or  */
    /* 0x42fa: local.tee $local_13 */
    /* 0x42fc: i64.mul  */
    /* 0x42fd: i64.add  */
    /* 0x42fe: local.tee $local_15 */
    /* 0x4300: local.get $local_16 */
    /* 0x4302: wasm.op_0x54  */
    /* 0x4303: i64.extend_i32_u  */
    /* 0x4304: local.get $local_15 */
    /* 0x4306: local.get $local_3 */
    /* 0x4308: i64.const 0x31 */
    /* 0x430a: i64.shr_u  */
    /* 0x430b: local.get $local_14 */
    /* 0x430d: i64.or  */
    /* 0x430e: i64.const 0xffffffff */
    /* 0x4314: i64.and  */
    /* 0x4315: local.tee $local_3 */
    /* 0x4317: local.get $local_12 */
    /* 0x4319: i64.const 0xffffffff */
    /* 0x431f: i64.and  */
    /* 0x4320: local.tee $local_12 */
    /* 0x4322: i64.mul  */
    /* 0x4323: i64.add  */
    /* 0x4324: local.tee $local_14 */
    /* 0x4326: local.get $local_15 */
    /* 0x4328: wasm.op_0x54  */
    /* 0x4329: i64.extend_i32_u  */
    /* 0x432a: i64.add  */
    /* 0x432b: local.get $local_2 */
    /* 0x432d: local.get $local_13 */
    /* 0x432f: i64.mul  */
    /* 0x4330: i64.add  */
    /* 0x4331: local.get $local_14 */
    /* 0x4333: local.get $local_14 */
    /* 0x4335: local.get $local_17 */
    /* 0x4337: i64.const 0xffff8000 */
    /* 0x433d: i64.and  */
    /* 0x433e: local.tee $local_15 */
    /* 0x4340: local.get $local_12 */
    /* 0x4342: i64.mul  */
    /* 0x4343: local.tee $local_17 */
    /* 0x4345: local.get $local_4 */
    /* 0x4347: local.get $local_10 */
    /* 0x4349: i64.mul  */
    /* 0x434a: i64.add  */
    /* 0x434b: local.tee $local_16 */
    /* 0x434d: local.get $local_17 */
    /* 0x434f: wasm.op_0x54  */
    /* 0x4350: i64.extend_i32_u  */
    /* 0x4351: local.get $local_16 */
    /* 0x4353: local.get $local_16 */
    /* 0x4355: local.get $local_3 */
    /* 0x4357: local.get $local_1 */
    /* 0x4359: i64.const 0xffffffff */
    /* 0x435f: i64.and  */
    /* 0x4360: local.tee $local_1 */
    /* 0x4362: i64.mul  */
    /* 0x4363: i64.add  */
    /* 0x4364: local.tee $local_16 */
    /* 0x4366: wasm.op_0x56  */
    /* 0x4367: i64.extend_i32_u  */
    /* 0x4368: i64.add  */
    /* 0x4369: i64.add  */
    /* 0x436a: local.tee $local_14 */
    /* 0x436c: wasm.op_0x56  */
    /* 0x436d: i64.extend_i32_u  */
    /* 0x436e: i64.add  */
    /* 0x436f: local.get $local_3 */
    /* 0x4371: local.get $local_13 */
    /* 0x4373: i64.mul  */
    /* 0x4374: local.tee $local_18 */
    /* 0x4376: local.get $local_2 */
    /* 0x4378: local.get $local_12 */
    /* 0x437a: i64.mul  */
    /* 0x437b: i64.add  */
    /* 0x437c: local.tee $local_17 */
    /* 0x437e: local.get $local_18 */
    /* 0x4380: wasm.op_0x54  */
    /* 0x4381: i64.extend_i32_u  */
    /* 0x4382: i64.const 0x20 */
    /* 0x4384: i64.shl  */
    /* 0x4385: local.get $local_17 */
    /* 0x4387: i64.const 0x20 */
    /* 0x4389: i64.shr_u  */
    /* 0x438a: i64.or  */
    /* 0x438b: i64.add  */
    /* 0x438c: local.get $local_14 */
    /* 0x438e: local.get $local_14 */
    /* 0x4390: local.get $local_17 */
    /* 0x4392: i64.const 0x20 */
    /* 0x4394: i64.shl  */
    /* 0x4395: i64.add  */
    /* 0x4396: local.tee $local_14 */
    /* 0x4398: wasm.op_0x56  */
    /* 0x4399: i64.extend_i32_u  */
    /* 0x439a: i64.add  */
    /* 0x439b: local.get $local_14 */
    /* 0x439d: local.get $local_13 */
    /* 0x439f: local.get $local_15 */
    /* 0x43a1: i64.mul  */
    /* 0x43a2: local.tee $local_13 */
    /* 0x43a4: local.get $local_10 */
    /* 0x43a6: local.get $local_12 */
    /* 0x43a8: i64.mul  */
    /* 0x43a9: i64.add  */
    /* 0x43aa: local.tee $local_12 */
    /* 0x43ac: local.get $local_1 */
    /* 0x43ae: local.get $local_2 */
    /* 0x43b0: i64.mul  */
    /* 0x43b1: i64.add  */
    /* 0x43b2: local.tee $local_2 */
    /* 0x43b4: local.get $local_3 */
    /* 0x43b6: local.get $local_4 */
    /* 0x43b8: i64.mul  */
    /* 0x43b9: i64.add  */
    /* 0x43ba: local.tee $local_3 */
    /* 0x43bc: i64.const 0x20 */
    /* 0x43be: i64.shr_u  */
    /* 0x43bf: local.get $local_2 */
    /* 0x43c1: local.get $local_3 */
    /* 0x43c3: wasm.op_0x56  */
    /* 0x43c4: i64.extend_i32_u  */
    /* 0x43c5: local.get $local_12 */
    /* 0x43c7: local.get $local_13 */
    /* 0x43c9: wasm.op_0x54  */
    /* 0x43ca: i64.extend_i32_u  */
    /* 0x43cb: local.get $local_2 */
    /* 0x43cd: local.get $local_12 */
    /* 0x43cf: wasm.op_0x54  */
    /* 0x43d0: i64.extend_i32_u  */
    /* 0x43d1: i64.add  */
    /* 0x43d2: i64.add  */
    /* 0x43d3: i64.const 0x20 */
    /* 0x43d5: i64.shl  */
    /* 0x43d6: i64.or  */
    /* 0x43d7: i64.add  */
    /* 0x43d8: local.tee $local_2 */
    /* 0x43da: local.get $local_14 */
    /* 0x43dc: wasm.op_0x54  */
    /* 0x43dd: i64.extend_i32_u  */
    /* 0x43de: i64.add  */
    /* 0x43df: local.get $local_2 */
    /* 0x43e1: local.get $local_16 */
    /* 0x43e3: local.get $local_4 */
    /* 0x43e5: local.get $local_15 */
    /* 0x43e7: i64.mul  */
    /* 0x43e8: local.tee $local_12 */
    /* 0x43ea: local.get $local_1 */
    /* 0x43ec: local.get $local_10 */
    /* 0x43ee: i64.mul  */
    /* 0x43ef: i64.add  */
    /* 0x43f0: local.tee $local_4 */
    /* 0x43f2: i64.const 0x20 */
    /* 0x43f4: i64.shr_u  */
    /* 0x43f5: local.get $local_4 */
    /* 0x43f7: local.get $local_12 */
    /* 0x43f9: wasm.op_0x54  */
    /* 0x43fa: i64.extend_i32_u  */
    /* 0x43fb: i64.const 0x20 */
    /* 0x43fd: i64.shl  */
    /* 0x43fe: i64.or  */
    /* 0x43ff: i64.add  */
    /* 0x4400: local.tee $local_10 */
    /* 0x4402: local.get $local_16 */
    /* 0x4404: wasm.op_0x54  */
    /* 0x4405: i64.extend_i32_u  */
    /* 0x4406: local.get $local_10 */
    /* 0x4408: local.get $local_3 */
    /* 0x440a: i64.const 0x20 */
    /* 0x440c: i64.shl  */
    /* 0x440d: i64.add  */
    /* 0x440e: local.tee $local_3 */
    /* 0x4410: local.get $local_10 */
    /* 0x4412: wasm.op_0x54  */
    /* 0x4413: i64.extend_i32_u  */
    /* 0x4414: i64.add  */
    /* 0x4415: i64.add  */
    /* 0x4416: local.tee $local_10 */
    /* 0x4418: local.get $local_2 */
    /* 0x441a: wasm.op_0x54  */
    /* 0x441b: i64.extend_i32_u  */
    /* 0x441c: i64.add  */
    /* 0x441d: local.get $local_10 */
    /* 0x441f: local.get $local_3 */
    /* 0x4421: local.get $local_4 */
    /* 0x4423: i64.const 0x20 */
    /* 0x4425: i64.shl  */
    /* 0x4426: local.tee $local_2 */
    /* 0x4428: local.get $local_1 */
    /* 0x442a: local.get $local_15 */
    /* 0x442c: i64.mul  */
    /* 0x442d: i64.add  */
    /* 0x442e: local.tee $local_1 */
    /* 0x4430: local.get $local_2 */
    /* 0x4432: wasm.op_0x54  */
    /* 0x4433: i64.extend_i32_u  */
    /* 0x4434: i64.add  */
    /* 0x4435: local.tee $local_2 */
    /* 0x4437: local.get $local_3 */
    /* 0x4439: wasm.op_0x54  */
    /* 0x443a: i64.extend_i32_u  */
    /* 0x443b: i64.add  */
    /* 0x443c: local.tee $local_4 */
    /* 0x443e: local.get $local_10 */
    /* 0x4440: wasm.op_0x54  */
    /* 0x4441: i64.extend_i32_u  */
    /* 0x4442: i64.add  */
    /* 0x4443: local.tee $local_3 */
    /* 0x4445: i64.const 0x1000000000000 */
    /* 0x444e: i64.and  */
    /* 0x444f: i64.const 0x0 */
    /* 0x4451: i64.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4454: local.get $local_6 */
    /* 0x4456: i32.const 1 */
    /* 0x4458: i32.add  */
    /* 0x4459: local.set $local_6 */
    if (r0 != 0) { goto 1; }
    /* 0x445d: end  */
    /* 0x445e: local.get $local_1 */
    /* 0x4460: i64.const 0x3f */
    /* 0x4462: i64.shr_u  */
    /* 0x4463: local.get $local_3 */
    /* 0x4465: i64.const 0x1 */
    /* 0x4467: i64.shl  */
    /* 0x4468: local.get $local_4 */
    /* 0x446a: i64.const 0x3f */
    /* 0x446c: i64.shr_u  */
    /* 0x446d: i64.or  */
    /* 0x446e: local.set $local_3 */
    /* 0x4470: local.get $local_4 */
    /* 0x4472: i64.const 0x1 */
    /* 0x4474: i64.shl  */
    /* 0x4475: local.get $local_2 */
    /* 0x4477: i64.const 0x3f */
    /* 0x4479: i64.shr_u  */
    /* 0x447a: i64.or  */
    /* 0x447b: local.set $local_4 */
    /* 0x447d: local.get $local_1 */
    /* 0x447f: i64.const 0x1 */
    /* 0x4481: i64.shl  */
    /* 0x4482: local.set $local_1 */
    /* 0x4484: local.get $local_2 */
    /* 0x4486: i64.const 0x1 */
    /* 0x4488: i64.shl  */
    /* 0x4489: i64.or  */
    /* 0x448a: local.set $local_2 */
    /* 0x448c: end  */
    /* 0x448d: local.get $local_6 */
    /* 0x448f: i32.const 32767 */
    /* 0x4493: i32.ge_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4496: local.get $local_11 */
    /* 0x4498: i64.const 0x7fff000000000000 */
    /* 0x44a3: i64.or  */
    /* 0x44a4: local.set $local_11 */
    /* 0x44a6: i64.const 0x0 */
    /* 0x44a8: local.set $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x44ac: end  */
    /* 0x44ad: block 0x7e */
    /* 0x44af: local.get $local_6 */
    /* 0x44b1: i32.const 0 */
    /* 0x44b3: i32.le_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x44b6: i32.const 1 */
    /* 0x44b8: local.get $local_6 */
    /* 0x44ba: i32.sub  */
    /* 0x44bb: local.tee $local_7 */
    /* 0x44bd: i32.const 127 */
    /* 0x44c0: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x44c3: local.get $local_5 */
    /* 0x44c5: i32.const 48 */
    /* 0x44c7: i32.add  */
    /* 0x44c8: local.get $local_1 */
    /* 0x44ca: local.get $local_2 */
    /* 0x44cc: local.get $local_6 */
    /* 0x44ce: i32.const 127 */
    /* 0x44d1: i32.add  */
    /* 0x44d2: local.tee $local_6 */
    r0 = wasm_func_351(r0, r1);
    /* 0x44d7: local.get $local_5 */
    /* 0x44d9: i32.const 32 */
    /* 0x44db: i32.add  */
    /* 0x44dc: local.get $local_4 */
    /* 0x44de: local.get $local_3 */
    /* 0x44e0: local.get $local_6 */
    r0 = wasm_func_351(r0, r1);
    /* 0x44e5: local.get $local_5 */
    /* 0x44e7: i32.const 16 */
    /* 0x44e9: i32.add  */
    /* 0x44ea: local.get $local_1 */
    /* 0x44ec: local.get $local_2 */
    /* 0x44ee: local.get $local_7 */
    r0 = wasm_func_436(r0, r1);
    /* 0x44f3: local.get $local_5 */
    /* 0x44f5: local.get $local_4 */
    /* 0x44f7: local.get $local_3 */
    /* 0x44f9: local.get $local_7 */
    r0 = wasm_func_436(r0, r1);
    /* 0x44fe: local.get $local_5 */
    /* 0x4500: i64.load offset=48, align=3 */
    /* 0x4503: local.get $local_5 */
    /* 0x4505: i64.load offset=56, align=3 */
    /* 0x4508: i64.or  */
    /* 0x4509: i64.const 0x0 */
    /* 0x450b: i64.ne  */
    /* 0x450c: i64.extend_i32_u  */
    /* 0x450d: local.get $local_5 */
    /* 0x450f: i64.load offset=32, align=3 */
    /* 0x4512: local.get $local_5 */
    /* 0x4514: i64.load offset=16, align=3 */
    /* 0x4517: i64.or  */
    /* 0x4518: i64.or  */
    /* 0x4519: local.set $local_1 */
    /* 0x451b: local.get $local_5 */
    /* 0x451d: i64.load offset=40, align=3 */
    /* 0x4520: local.get $local_5 */
    /* 0x4522: i64.load offset=24, align=3 */
    /* 0x4525: i64.or  */
    /* 0x4526: local.set $local_2 */
    /* 0x4528: local.get $local_5 */
    /* 0x452a: i64.load offset=0, align=3 */
    /* 0x452d: local.set $local_4 */
    /* 0x452f: local.get $local_5 */
    /* 0x4531: i64.load offset=8, align=3 */
    if (r0 != 0) { goto 2; }
    /* 0x4536: end  */
    /* 0x4537: i64.const 0x0 */
    /* 0x4539: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x453d: end  */
    /* 0x453e: local.get $local_3 */
    /* 0x4540: i64.const 0xffffffffffff */
    /* 0x4548: i64.and  */
    /* 0x4549: local.get $local_6 */
    /* 0x454b: i64.extend_i32_u  */
    /* 0x454c: i64.const 0x30 */
    /* 0x454e: i64.shl  */
    /* 0x454f: i64.or  */
    /* 0x4550: end  */
    /* 0x4551: local.get $local_11 */
    /* 0x4553: i64.or  */
    /* 0x4554: local.set $local_11 */
    /* 0x4556: local.get $local_1 */
    /* 0x4558: i64.eqz  */
    /* 0x4559: local.get $local_2 */
    /* 0x455b: i64.const 0x0 */
    /* 0x455d: wasm.op_0x59  */
    /* 0x455e: local.get $local_2 */
    /* 0x4560: i64.const 0x8000000000000000 */
    /* 0x456b: i64.eq  */
    /* 0x456c: select  */
    /* 0x456d: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4570: local.get $local_11 */
    /* 0x4572: local.get $local_4 */
    /* 0x4574: i64.const 0x1 */
    /* 0x4576: i64.add  */
    /* 0x4577: local.tee $local_1 */
    /* 0x4579: i64.eqz  */
    /* 0x457a: i64.extend_i32_u  */
    /* 0x457b: i64.add  */
    /* 0x457c: local.set $local_11 */
    if (r0 != 0) { goto 1; }
    /* 0x4580: end  */
    /* 0x4581: local.get $local_1 */
    /* 0x4583: local.get $local_2 */
    /* 0x4585: i64.const 0x8000000000000000 */
    /* 0x4590: i64.xor  */
    /* 0x4591: i64.or  */
    /* 0x4592: i64.const 0x0 */
    /* 0x4594: i64.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4597: local.get $local_4 */
    /* 0x4599: local.set $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x459d: end  */
    /* 0x459e: local.get $local_11 */
    /* 0x45a0: local.get $local_4 */
    /* 0x45a2: local.get $local_4 */
    /* 0x45a4: i64.const 0x1 */
    /* 0x45a6: i64.and  */
    /* 0x45a7: i64.add  */
    /* 0x45a8: local.tee $local_1 */
    /* 0x45aa: local.get $local_4 */
    /* 0x45ac: wasm.op_0x54  */
    /* 0x45ad: i64.extend_i32_u  */
    /* 0x45ae: i64.add  */
    /* 0x45af: local.set $local_11 */
    /* 0x45b1: end  */
    /* 0x45b2: local.get $local_0 */
    /* 0x45b4: local.get $local_1 */
    /* 0x45b6: i64.store offset=0, align=3 */
    /* 0x45b9: local.get $local_0 */
    /* 0x45bb: local.get $local_11 */
    /* 0x45bd: i64.store offset=8, align=3 */
    /* 0x45c0: local.get $local_5 */
    /* 0x45c2: i32.const 96 */
    /* 0x45c5: i32.add  */
    /* 0x45c6: local.tee $local_0 */
    /* 0x45c8: global.get $global_4 */
    /* 0x45ca: i32.gt_u  */
    /* 0x45cb: local.get $local_0 */
    /* 0x45cd: global.get $global_5 */
    /* 0x45cf: i32.lt_u  */
    /* 0x45d0: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x45d3: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x45d7: end  */
    /* 0x45d8: local.get $local_0 */
    /* 0x45da: global.set $global_0 */
    return r0;
}

// ── wasm_func_275 @ 0x45de (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_275 ───
int64_t wasm_func_275(int64_t arg0, int64_t arg1) {
    /* 0x45e1: local.get $local_0 */
    /* 0x45e3: i32.load offset=12, align=2 */
    /* 0x45e6: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x45ea: local.get $local_0 */
    /* 0x45ec: local.get $local_1 */
    /* 0x45ee: i32.store offset=16, align=2 */
    /* 0x45f1: local.get $local_0 */
    /* 0x45f3: i32.load offset=20, align=2 */
    /* 0x45f6: drop  */
    /* 0x45f7: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x45fc: end  */
    /* 0x45fd: local.get $local_0 */
    /* 0x45ff: i32.load offset=0, align=2 */
    /* 0x4602: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x4606: local.get $local_0 */
    /* 0x4608: local.get $local_1 */
    /* 0x460a: i32.store offset=4, align=2 */
    /* 0x460d: local.get $local_0 */
    /* 0x460f: i32.load offset=8, align=2 */
    /* 0x4612: drop  */
    /* 0x4613: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x4618: end  */
    return r0;
}

// ── wasm_func_276 @ 0x461c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_276 ───
int64_t wasm_func_276(int64_t arg0, int64_t arg1) {
    /* 0x461f: block 0x40 */
    /* 0x4621: block 0x40 */
    /* 0x4623: block 0x40 */
    /* 0x4625: block 0x40 */
    /* 0x4627: local.get $local_0 */
    /* 0x4629: i32.load offset=4, align=2 */
    /* 0x462c: local.get $local_0 */
    /* 0x462e: i32.load offset=8, align=2 */
    /* 0x4631: local.tee $local_2 */
    /* 0x4633: i32.sub  */
    /* 0x4634: i32.const 3 */
    /* 0x4636: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4639: i32.const 8 */
    r0 = wasm_func_264(r0, r1);
    /* 0x463e: local.set $local_0 */
    /* 0x4640: i32.const 3737328 */
    /* 0x4645: i32.const 0 */
    /* 0x4647: i32.store offset=0, align=2 */
    /* 0x464a: i32.const 216 */
    /* 0x464d: local.get $local_0 */
    /* 0x464f: i32.const 32684 */
    r0 = imp_c(r0, r1);
    /* 0x4655: local.set $local_1 */
    /* 0x4657: i32.const 3737328 */
    /* 0x465c: i32.load offset=0, align=2 */
    /* 0x465f: i32.const 3737328 */
    /* 0x4664: i32.const 0 */
    /* 0x4666: i32.store offset=0, align=2 */
    /* 0x4669: i32.const 1 */
    /* 0x466b: i32.ne  */
    if (r0 != 0) { goto 4; }
    if (r0 != 0) { goto 1; }
    /* 0x4670: end  */
    /* 0x4671: local.get $local_0 */
    /* 0x4673: local.get $local_2 */
    /* 0x4675: i32.const 4 */
    /* 0x4677: i32.add  */
    /* 0x4678: i32.store offset=8, align=2 */
    /* 0x467b: local.get $local_1 */
    /* 0x467d: local.get $local_0 */
    /* 0x467f: i32.load offset=0, align=2 */
    /* 0x4682: local.get $local_2 */
    /* 0x4684: i32.add  */
    /* 0x4685: i32.load offset=0, align=0 */
    /* 0x4688: local.tee $local_0 */
    /* 0x468a: i32.store offset=0, align=2 */
    /* 0x468d: local.get $local_0 */
    /* 0x468f: i32.const 1 */
    /* 0x4691: i32.shl  */
    /* 0x4692: i32.const -16777216 */
    /* 0x4697: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x469a: i32.const 8 */
    r0 = wasm_func_264(r0, r1);
    /* 0x469f: local.set $local_0 */
    /* 0x46a1: i32.const 3737328 */
    /* 0x46a6: i32.const 0 */
    /* 0x46a8: i32.store offset=0, align=2 */
    /* 0x46ab: i32.const 216 */
    /* 0x46ae: local.get $local_0 */
    /* 0x46b0: i32.const 6567 */
    r0 = imp_c(r0, r1);
    /* 0x46b5: local.set $local_1 */
    /* 0x46b7: i32.const 3737328 */
    /* 0x46bc: i32.load offset=0, align=2 */
    /* 0x46bf: i32.const 3737328 */
    /* 0x46c4: i32.const 0 */
    /* 0x46c6: i32.store offset=0, align=2 */
    /* 0x46c9: i32.const 1 */
    /* 0x46cb: i32.ne  */
    if (r0 != 0) { goto 2; }
    /* 0x46ce: end  */
    r0 = imp_a(r0, r1);
    /* 0x46d1: local.get $local_0 */
    r0 = wasm_func_265(r0, r1);
    r0 = imp_h(r0, r1);
    /* 0x46d8: unreachable  */
    /* 0x46d9: end  */
    return r0;
    /* 0x46db: end  */
    /* 0x46dc: local.get $local_1 */
    /* 0x46de: i32.const 3706656 */
    /* 0x46e3: i32.const 191 */
    r0 = imp_n(r0, r1);
    /* 0x46e8: unreachable  */
    /* 0x46e9: end  */
    /* 0x46ea: local.get $local_1 */
    /* 0x46ec: i32.const 3706656 */
    /* 0x46f1: i32.const 191 */
    r0 = imp_n(r0, r1);
    /* 0x46f6: unreachable  */
    return r0;
}

// ── wasm_func_277 @ 0x46fa (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_277 ───
int64_t wasm_func_277(int64_t arg0, int64_t arg1) {
    /* 0x46ff: global.get $global_0 */
    /* 0x4701: i32.const 16 */
    /* 0x4703: i32.sub  */
    /* 0x4704: local.tee $local_3 */
    /* 0x4706: local.tee $local_1 */
    /* 0x4708: global.get $global_4 */
    /* 0x470a: i32.gt_u  */
    /* 0x470b: local.get $local_1 */
    /* 0x470d: global.get $global_5 */
    /* 0x470f: i32.lt_u  */
    /* 0x4710: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4713: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x4717: end  */
    /* 0x4718: local.get $local_1 */
    /* 0x471a: global.set $global_0 */
    /* 0x471c: block 0x7d */
    /* 0x471e: local.get $local_0 */
    /* 0x4720: wasm.op_0xbc  */
    /* 0x4721: local.tee $local_2 */
    /* 0x4723: i32.const 2147483647 */
    /* 0x4729: i32.and  */
    /* 0x472a: local.tee $local_1 */
    /* 0x472c: i32.const 1061752794 */
    /* 0x4732: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4735: wasm.op_0x43  */
    /* 0x4736: unreachable  */
    /* 0x4737: unreachable  */
    /* 0x4738: wasm.op_0x80  */
    /* 0x4739: wasm.op_0x3f  */
    /* 0x473a: local.get $local_1 */
    /* 0x473c: i32.const 964689920 */
    /* 0x4742: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x4745: drop  */
    /* 0x4746: local.get $local_0 */
    /* 0x4748: wasm.op_0xbb  */
    r0 = wasm_func_391(r0, r1);
    if (r0 != 0) { goto 1; }
    /* 0x474e: end  */
    /* 0x474f: local.get $local_1 */
    /* 0x4751: i32.const 1081824209 */
    /* 0x4757: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x475a: local.get $local_1 */
    /* 0x475c: i32.const 1075235812 */
    /* 0x4762: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4765: wasm.op_0x44  */
    /* 0x4766: wasm.op_0x18  */
    /* 0x4767: i32.load8_u offset=84, align=68 */
    /* 0x476a: wasm.op_0xfb  */
    /* 0x476b: local.set $local_9 */
    /* 0x476d: wasm.op_0x40  */
    /* 0x476e: wasm.op_0x44  */
    /* 0x476f: wasm.op_0x18  */
    /* 0x4770: i32.load8_u offset=84, align=68 */
    /* 0x4773: wasm.op_0xfb  */
    /* 0x4774: local.set $local_9 */
    /* 0x4776: wasm.op_0xc0  */
    /* 0x4777: local.get $local_2 */
    /* 0x4779: i32.const 0 */
    /* 0x477b: i32.lt_s  */
    /* 0x477c: select  */
    /* 0x477d: local.get $local_0 */
    /* 0x477f: wasm.op_0xbb  */
    /* 0x4780: wasm.op_0xa0  */
    r0 = wasm_func_391(r0, r1);
    /* 0x4784: wasm.op_0x8c  */
    if (r0 != 0) { goto 2; }
    /* 0x4787: end  */
    /* 0x4788: local.get $local_0 */
    /* 0x478a: wasm.op_0xbb  */
    /* 0x478b: local.set $local_4 */
    /* 0x478d: local.get $local_2 */
    /* 0x478f: i32.const 0 */
    /* 0x4791: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4794: local.get $local_4 */
    /* 0x4796: wasm.op_0x44  */
    /* 0x4797: wasm.op_0x18  */
    /* 0x4798: i32.load8_u offset=84, align=68 */
    /* 0x479b: wasm.op_0xfb  */
    /* 0x479c: local.set $local_8185 */
    /* 0x479f: wasm.op_0xa0  */
    r0 = wasm_func_390(r0, r1);
    if (r0 != 0) { goto 2; }
    /* 0x47a5: end  */
    /* 0x47a6: wasm.op_0x44  */
    /* 0x47a7: wasm.op_0x18  */
    /* 0x47a8: i32.load8_u offset=84, align=68 */
    /* 0x47ab: wasm.op_0xfb  */
    /* 0x47ac: local.set $local_8185 */
    /* 0x47af: local.get $local_4 */
    /* 0x47b1: wasm.op_0xa1  */
    r0 = wasm_func_390(r0, r1);
    if (r0 != 0) { goto 1; }
    /* 0x47b7: end  */
    /* 0x47b8: local.get $local_1 */
    /* 0x47ba: i32.const 1088565717 */
    /* 0x47c0: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x47c3: local.get $local_1 */
    /* 0x47c5: i32.const 1085271520 */
    /* 0x47cb: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x47ce: wasm.op_0x44  */
    /* 0x47cf: wasm.op_0x18  */
    /* 0x47d0: i32.load8_u offset=84, align=68 */
    /* 0x47d3: wasm.op_0xfb  */
    /* 0x47d4: local.set $local_25 */
    /* 0x47d6: wasm.op_0x40  */
    /* 0x47d7: wasm.op_0x44  */
    /* 0x47d8: wasm.op_0x18  */
    /* 0x47d9: i32.load8_u offset=84, align=68 */
    /* 0x47dc: wasm.op_0xfb  */
    /* 0x47dd: local.set $local_25 */
    /* 0x47df: wasm.op_0xc0  */
    /* 0x47e0: local.get $local_2 */
    /* 0x47e2: i32.const 0 */
    /* 0x47e4: i32.lt_s  */
    /* 0x47e5: select  */
    /* 0x47e6: local.get $local_0 */
    /* 0x47e8: wasm.op_0xbb  */
    /* 0x47e9: wasm.op_0xa0  */
    r0 = wasm_func_391(r0, r1);
    if (r0 != 0) { goto 2; }
    /* 0x47ef: end  */
    /* 0x47f0: local.get $local_2 */
    /* 0x47f2: i32.const 0 */
    /* 0x47f4: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x47f7: wasm.op_0x44  */
    /* 0x47f8: wasm.op_0xd2  */
    /* 0x47f9: local.set $local_51 */
    /* 0x47fb: wasm.op_0x7f  */
    /* 0x47fc: i64.add  */
    /* 0x47fd: wasm.op_0xd9  */
    /* 0x47fe: wasm.op_0x12  */
    /* 0x47ff: wasm.op_0xc0  */
    /* 0x4800: local.get $local_0 */
    /* 0x4802: wasm.op_0xbb  */
    /* 0x4803: wasm.op_0xa1  */
    r0 = wasm_func_390(r0, r1);
    if (r0 != 0) { goto 2; }
    /* 0x4809: end  */
    /* 0x480a: local.get $local_0 */
    /* 0x480c: wasm.op_0xbb  */
    /* 0x480d: wasm.op_0x44  */
    /* 0x480e: wasm.op_0xd2  */
    /* 0x480f: local.set $local_51 */
    /* 0x4811: wasm.op_0x7f  */
    /* 0x4812: i64.add  */
    /* 0x4813: wasm.op_0xd9  */
    /* 0x4814: wasm.op_0x12  */
    /* 0x4815: wasm.op_0xc0  */
    /* 0x4816: wasm.op_0xa0  */
    r0 = wasm_func_390(r0, r1);
    if (r0 != 0) { goto 1; }
    /* 0x481c: end  */
    /* 0x481d: local.get $local_0 */
    /* 0x481f: local.get $local_0 */
    /* 0x4821: wasm.op_0x93  */
    /* 0x4822: local.get $local_1 */
    /* 0x4824: i32.const 2139095040 */
    /* 0x482a: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x482d: drop  */
    /* 0x482e: local.get $local_0 */
    /* 0x4830: local.get $local_3 */
    /* 0x4832: i32.const 8 */
    /* 0x4834: i32.add  */
    r0 = wasm_func_1107(r0, r1);
    /* 0x4838: local.set $local_1 */
    /* 0x483a: local.get $local_3 */
    /* 0x483c: wasm.op_0x2b  */
    /* 0x483d: loop 0x08 */
    /* 0x483f: local.set $local_4 */
    /* 0x4841: block 0x40 */
    /* 0x4843: block 0x40 */
    /* 0x4845: block 0x40 */
    /* 0x4847: block 0x40 */
    /* 0x4849: local.get $local_1 */
    /* 0x484b: i32.const 3 */
    /* 0x484d: i32.and  */
    /* 0x484e: i32.const 1 */
    /* 0x4850: i32.sub  */
    /* 0x4851: wasm.op_0x0e  */
    /* 0x4852: loop 0x01 */
    /* 0x4854: block 0x03 */
    /* 0x4856: unreachable  */
    /* 0x4857: end  */
    /* 0x4858: local.get $local_4 */
    r0 = wasm_func_391(r0, r1);
    if (r0 != 0) { goto 3; }
    /* 0x485f: end  */
    /* 0x4860: local.get $local_4 */
    /* 0x4862: wasm.op_0x9a  */
    r0 = wasm_func_390(r0, r1);
    if (r0 != 0) { goto 2; }
    /* 0x4868: end  */
    /* 0x4869: local.get $local_4 */
    r0 = wasm_func_391(r0, r1);
    /* 0x486e: wasm.op_0x8c  */
    if (r0 != 0) { goto 1; }
    /* 0x4871: end  */
    /* 0x4872: local.get $local_4 */
    r0 = wasm_func_390(r0, r1);
    /* 0x4877: end  */
    /* 0x4878: local.get $local_3 */
    /* 0x487a: i32.const 16 */
    /* 0x487c: i32.add  */
    /* 0x487d: local.tee $local_1 */
    /* 0x487f: global.get $global_4 */
    /* 0x4881: i32.gt_u  */
    /* 0x4882: local.get $local_1 */
    /* 0x4884: global.get $global_5 */
    /* 0x4886: i32.lt_u  */
    /* 0x4887: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x488a: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x488e: end  */
    /* 0x488f: local.get $local_1 */
    /* 0x4891: global.set $global_0 */
    return r0;
}

// ── wasm_func_278 @ 0x4896 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_278 ───
int64_t wasm_func_278(int64_t arg0, int64_t arg1) {
    /* 0x4899: local.get $local_0 */
    /* 0x489b: i32.load offset=12, align=2 */
    /* 0x489e: local.tee $local_3 */
    if (r0 != 0) { goto 0x40; }
    /* 0x48a2: local.get $local_3 */
    /* 0x48a4: local.tee $local_1 */
    /* 0x48a6: local.get $local_0 */
    /* 0x48a8: i32.load offset=16, align=2 */
    /* 0x48ab: local.tee $local_2 */
    /* 0x48ad: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x48b0: loop 0x40 */
    /* 0x48b2: local.get $local_2 */
    /* 0x48b4: i32.const 12 */
    /* 0x48b6: i32.sub  */
    /* 0x48b7: local.tee $local_1 */
    /* 0x48b9: i32.load offset=0, align=2 */
    /* 0x48bc: local.tee $local_4 */
    if (r0 != 0) { goto 0x40; }
    /* 0x48c0: local.get $local_2 */
    /* 0x48c2: i32.const 8 */
    /* 0x48c4: i32.sub  */
    /* 0x48c5: local.get $local_4 */
    /* 0x48c7: i32.store offset=0, align=2 */
    /* 0x48ca: local.get $local_2 */
    /* 0x48cc: i32.const 4 */
    /* 0x48ce: i32.sub  */
    /* 0x48cf: i32.load offset=0, align=2 */
    /* 0x48d2: drop  */
    /* 0x48d3: local.get $local_4 */
    r0 = _d(r0, r1);
    /* 0x48d8: end  */
    /* 0x48d9: local.get $local_1 */
    /* 0x48db: local.tee $local_2 */
    /* 0x48dd: local.get $local_3 */
    /* 0x48df: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x48e2: end  */
    /* 0x48e3: local.get $local_0 */
    /* 0x48e5: i32.load offset=12, align=2 */
    /* 0x48e8: local.set $local_1 */
    /* 0x48ea: end  */
    /* 0x48eb: local.get $local_0 */
    /* 0x48ed: local.get $local_3 */
    /* 0x48ef: i32.store offset=16, align=2 */
    /* 0x48f2: local.get $local_0 */
    /* 0x48f4: i32.load offset=20, align=2 */
    /* 0x48f7: drop  */
    /* 0x48f8: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x48fd: end  */
    /* 0x48fe: local.get $local_0 */
    /* 0x4900: i32.load offset=0, align=2 */
    /* 0x4903: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x4907: local.get $local_0 */
    /* 0x4909: local.get $local_1 */
    /* 0x490b: i32.store offset=4, align=2 */
    /* 0x490e: local.get $local_0 */
    /* 0x4910: i32.load offset=8, align=2 */
    /* 0x4913: drop  */
    /* 0x4914: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x4919: end  */
    /* 0x491a: local.get $local_0 */
    return r0;
}

// ── wasm_func_279 @ 0x491f (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_279 ───
int64_t wasm_func_279(int64_t arg0, int64_t arg1) {
    /* 0x4924: global.get $global_0 */
    /* 0x4926: i32.const 112 */
    /* 0x4929: i32.sub  */
    /* 0x492a: local.tee $local_6 */
    /* 0x492c: local.tee $local_5 */
    /* 0x492e: global.get $global_4 */
    /* 0x4930: i32.gt_u  */
    /* 0x4931: local.get $local_5 */
    /* 0x4933: global.get $global_5 */
    /* 0x4935: i32.lt_u  */
    /* 0x4936: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4939: local.get $local_5 */
    r0 = imp_d(r0, r1);
    /* 0x493d: end  */
    /* 0x493e: local.get $local_5 */
    /* 0x4940: global.set $global_0 */
    /* 0x4942: local.get $local_4 */
    /* 0x4944: i64.const 0x7fffffffffffffff */
    /* 0x494f: i64.and  */
    /* 0x4950: local.set $local_9 */
    /* 0x4952: block 0x40 */
    /* 0x4954: block 0x40 */
    /* 0x4956: local.get $local_1 */
    /* 0x4958: i64.eqz  */
    /* 0x4959: local.tee $local_5 */
    /* 0x495b: local.get $local_2 */
    /* 0x495d: i64.const 0x7fffffffffffffff */
    /* 0x4968: i64.and  */
    /* 0x4969: local.tee $local_10 */
    /* 0x496b: i64.const 0x7fff000000000000 */
    /* 0x4976: i64.sub  */
    /* 0x4977: i64.const 0x8001000000000000 */
    /* 0x4982: wasm.op_0x54  */
    /* 0x4983: local.get $local_10 */
    /* 0x4985: i64.eqz  */
    /* 0x4986: select  */
    /* 0x4987: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x498a: local.get $local_3 */
    /* 0x498c: i64.const 0x0 */
    /* 0x498e: i64.ne  */
    /* 0x498f: local.get $local_9 */
    /* 0x4991: i64.const 0x7fff000000000000 */
    /* 0x499c: i64.sub  */
    /* 0x499d: local.tee $local_11 */
    /* 0x499f: i64.const 0x8001000000000000 */
    /* 0x49aa: wasm.op_0x56  */
    /* 0x49ab: local.get $local_11 */
    /* 0x49ad: i64.const 0x8001000000000000 */
    /* 0x49b8: i64.eq  */
    /* 0x49b9: select  */
    if (r0 != 0) { goto 1; }
    /* 0x49bc: end  */
    /* 0x49bd: local.get $local_5 */
    /* 0x49bf: local.get $local_10 */
    /* 0x49c1: i64.const 0x7fff000000000000 */
    /* 0x49cc: wasm.op_0x54  */
    /* 0x49cd: local.get $local_10 */
    /* 0x49cf: i64.const 0x7fff000000000000 */
    /* 0x49da: i64.eq  */
    /* 0x49db: select  */
    /* 0x49dc: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x49df: local.get $local_2 */
    /* 0x49e1: i64.const 0x800000000000 */
    /* 0x49e9: i64.or  */
    /* 0x49ea: local.set $local_4 */
    /* 0x49ec: local.get $local_1 */
    /* 0x49ee: local.set $local_3 */
    if (r0 != 0) { goto 2; }
    /* 0x49f2: end  */
    /* 0x49f3: local.get $local_3 */
    /* 0x49f5: i64.eqz  */
    /* 0x49f6: local.get $local_9 */
    /* 0x49f8: i64.const 0x7fff000000000000 */
    /* 0x4a03: wasm.op_0x54  */
    /* 0x4a04: local.get $local_9 */
    /* 0x4a06: i64.const 0x7fff000000000000 */
    /* 0x4a11: i64.eq  */
    /* 0x4a12: select  */
    /* 0x4a13: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4a16: local.get $local_4 */
    /* 0x4a18: i64.const 0x800000000000 */
    /* 0x4a20: i64.or  */
    /* 0x4a21: local.set $local_4 */
    if (r0 != 0) { goto 2; }
    /* 0x4a25: end  */
    /* 0x4a26: local.get $local_1 */
    /* 0x4a28: local.get $local_10 */
    /* 0x4a2a: i64.const 0x7fff000000000000 */
    /* 0x4a35: i64.xor  */
    /* 0x4a36: i64.or  */
    /* 0x4a37: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4a3a: i64.const 0x7fff800000000000 */
    /* 0x4a45: local.get $local_2 */
    /* 0x4a47: local.get $local_1 */
    /* 0x4a49: local.get $local_3 */
    /* 0x4a4b: i64.xor  */
    /* 0x4a4c: local.get $local_2 */
    /* 0x4a4e: local.get $local_4 */
    /* 0x4a50: i64.xor  */
    /* 0x4a51: i64.const 0x8000000000000000 */
    /* 0x4a5c: i64.xor  */
    /* 0x4a5d: i64.or  */
    /* 0x4a5e: i64.eqz  */
    /* 0x4a5f: local.tee $local_5 */
    /* 0x4a61: select  */
    /* 0x4a62: local.set $local_4 */
    /* 0x4a64: i64.const 0x0 */
    /* 0x4a66: local.get $local_1 */
    /* 0x4a68: local.get $local_5 */
    /* 0x4a6a: select  */
    /* 0x4a6b: local.set $local_3 */
    if (r0 != 0) { goto 2; }
    /* 0x4a6f: end  */
    /* 0x4a70: local.get $local_3 */
    /* 0x4a72: local.get $local_9 */
    /* 0x4a74: i64.const 0x7fff000000000000 */
    /* 0x4a7f: i64.xor  */
    /* 0x4a80: i64.or  */
    /* 0x4a81: i64.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x4a84: local.get $local_1 */
    /* 0x4a86: local.get $local_10 */
    /* 0x4a88: i64.or  */
    /* 0x4a89: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4a8c: local.get $local_3 */
    /* 0x4a8e: local.get $local_9 */
    /* 0x4a90: i64.or  */
    /* 0x4a91: i64.const 0x0 */
    /* 0x4a93: i64.ne  */
    if (r0 != 0) { goto 2; }
    /* 0x4a96: local.get $local_1 */
    /* 0x4a98: local.get $local_3 */
    /* 0x4a9a: i64.and  */
    /* 0x4a9b: local.set $local_3 */
    /* 0x4a9d: local.get $local_2 */
    /* 0x4a9f: local.get $local_4 */
    /* 0x4aa1: i64.and  */
    /* 0x4aa2: local.set $local_4 */
    if (r0 != 0) { goto 2; }
    /* 0x4aa6: end  */
    /* 0x4aa7: local.get $local_3 */
    /* 0x4aa9: local.get $local_9 */
    /* 0x4aab: i64.or  */
    /* 0x4aac: i64.const 0x0 */
    /* 0x4aae: i64.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x4ab1: local.get $local_1 */
    /* 0x4ab3: local.set $local_3 */
    /* 0x4ab5: local.get $local_2 */
    /* 0x4ab7: local.set $local_4 */
    if (r0 != 0) { goto 1; }
    /* 0x4abb: end  */
    /* 0x4abc: local.get $local_3 */
    /* 0x4abe: local.get $local_1 */
    /* 0x4ac0: local.get $local_1 */
    /* 0x4ac2: local.get $local_3 */
    /* 0x4ac4: wasm.op_0x54  */
    /* 0x4ac5: local.get $local_9 */
    /* 0x4ac7: local.get $local_10 */
    /* 0x4ac9: wasm.op_0x56  */
    /* 0x4aca: local.get $local_9 */
    /* 0x4acc: local.get $local_10 */
    /* 0x4ace: i64.eq  */
    /* 0x4acf: select  */
    /* 0x4ad0: local.tee $local_8 */
    /* 0x4ad2: select  */
    /* 0x4ad3: local.set $local_10 */
    /* 0x4ad5: local.get $local_4 */
    /* 0x4ad7: local.get $local_2 */
    /* 0x4ad9: local.get $local_8 */
    /* 0x4adb: select  */
    /* 0x4adc: local.tee $local_12 */
    /* 0x4ade: i64.const 0xffffffffffff */
    /* 0x4ae6: i64.and  */
    /* 0x4ae7: local.set $local_9 */
    /* 0x4ae9: local.get $local_2 */
    /* 0x4aeb: local.get $local_4 */
    /* 0x4aed: local.get $local_8 */
    /* 0x4aef: select  */
    /* 0x4af0: local.tee $local_11 */
    /* 0x4af2: i64.const 0x30 */
    /* 0x4af4: i64.shr_u  */
    /* 0x4af5: i32.wrap_i64  */
    /* 0x4af6: i32.const 32767 */
    /* 0x4afa: i32.and  */
    /* 0x4afb: local.set $local_7 */
    /* 0x4afd: local.get $local_12 */
    /* 0x4aff: i64.const 0x30 */
    /* 0x4b01: i64.shr_u  */
    /* 0x4b02: i32.wrap_i64  */
    /* 0x4b03: i32.const 32767 */
    /* 0x4b07: i32.and  */
    /* 0x4b08: local.tee $local_5 */
    /* 0x4b0a: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4b0d: local.get $local_6 */
    /* 0x4b0f: i32.const 96 */
    /* 0x4b12: i32.add  */
    /* 0x4b13: local.get $local_10 */
    /* 0x4b15: local.get $local_9 */
    /* 0x4b17: local.get $local_10 */
    /* 0x4b19: local.get $local_9 */
    /* 0x4b1b: local.get $local_9 */
    /* 0x4b1d: i64.eqz  */
    /* 0x4b1e: local.tee $local_5 */
    /* 0x4b20: select  */
    /* 0x4b21: wasm.op_0x79  */
    /* 0x4b22: i64.const 0x40 */
    /* 0x4b25: i64.const 0x0 */
    /* 0x4b27: local.get $local_5 */
    /* 0x4b29: select  */
    /* 0x4b2a: i64.add  */
    /* 0x4b2b: i32.wrap_i64  */
    /* 0x4b2c: local.tee $local_5 */
    /* 0x4b2e: i32.const 15 */
    /* 0x4b30: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x4b34: local.get $local_6 */
    /* 0x4b36: i64.load offset=104, align=3 */
    /* 0x4b39: local.set $local_9 */
    /* 0x4b3b: local.get $local_6 */
    /* 0x4b3d: i64.load offset=96, align=3 */
    /* 0x4b40: local.set $local_10 */
    /* 0x4b42: i32.const 16 */
    /* 0x4b44: local.get $local_5 */
    /* 0x4b46: i32.sub  */
    /* 0x4b47: local.set $local_5 */
    /* 0x4b49: end  */
    /* 0x4b4a: local.get $local_1 */
    /* 0x4b4c: local.get $local_3 */
    /* 0x4b4e: local.get $local_8 */
    /* 0x4b50: select  */
    /* 0x4b51: local.set $local_3 */
    /* 0x4b53: local.get $local_11 */
    /* 0x4b55: i64.const 0xffffffffffff */
    /* 0x4b5d: i64.and  */
    /* 0x4b5e: local.set $local_1 */
    /* 0x4b60: local.get $local_7 */
    if (r0 != 0) { goto 0x7e; }
    /* 0x4b64: local.get $local_1 */
    /* 0x4b66: else  */
    /* 0x4b67: local.get $local_6 */
    /* 0x4b69: i32.const 80 */
    /* 0x4b6c: i32.add  */
    /* 0x4b6d: local.get $local_3 */
    /* 0x4b6f: local.get $local_1 */
    /* 0x4b71: local.get $local_3 */
    /* 0x4b73: local.get $local_1 */
    /* 0x4b75: local.get $local_1 */
    /* 0x4b77: i64.eqz  */
    /* 0x4b78: local.tee $local_7 */
    /* 0x4b7a: select  */
    /* 0x4b7b: wasm.op_0x79  */
    /* 0x4b7c: i64.const 0x40 */
    /* 0x4b7f: i64.const 0x0 */
    /* 0x4b81: local.get $local_7 */
    /* 0x4b83: select  */
    /* 0x4b84: i64.add  */
    /* 0x4b85: i32.wrap_i64  */
    /* 0x4b86: local.tee $local_7 */
    /* 0x4b88: i32.const 15 */
    /* 0x4b8a: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x4b8e: i32.const 16 */
    /* 0x4b90: local.get $local_7 */
    /* 0x4b92: i32.sub  */
    /* 0x4b93: local.set $local_7 */
    /* 0x4b95: local.get $local_6 */
    /* 0x4b97: i64.load offset=80, align=3 */
    /* 0x4b9a: local.set $local_3 */
    /* 0x4b9c: local.get $local_6 */
    /* 0x4b9e: i64.load offset=88, align=3 */
    /* 0x4ba1: end  */
    /* 0x4ba2: i64.const 0x3 */
    /* 0x4ba4: i64.shl  */
    /* 0x4ba5: local.get $local_3 */
    /* 0x4ba7: i64.const 0x3d */
    /* 0x4ba9: i64.shr_u  */
    /* 0x4baa: i64.or  */
    /* 0x4bab: i64.const 0x8000000000000 */
    /* 0x4bb4: i64.or  */
    /* 0x4bb5: local.set $local_1 */
    /* 0x4bb7: local.get $local_9 */
    /* 0x4bb9: i64.const 0x3 */
    /* 0x4bbb: i64.shl  */
    /* 0x4bbc: local.get $local_10 */
    /* 0x4bbe: i64.const 0x3d */
    /* 0x4bc0: i64.shr_u  */
    /* 0x4bc1: i64.or  */
    /* 0x4bc2: local.get $local_2 */
    /* 0x4bc4: local.get $local_4 */
    /* 0x4bc6: i64.xor  */
    /* 0x4bc7: local.set $local_4 */
    /* 0x4bc9: block 0x7e */
    /* 0x4bcb: local.get $local_3 */
    /* 0x4bcd: i64.const 0x3 */
    /* 0x4bcf: i64.shl  */
    /* 0x4bd0: local.tee $local_2 */
    /* 0x4bd2: local.get $local_5 */
    /* 0x4bd4: local.get $local_7 */
    /* 0x4bd6: i32.eq  */
    if (r0 != 0) { goto 0; }
    /* 0x4bd9: drop  */
    /* 0x4bda: local.get $local_5 */
    /* 0x4bdc: local.get $local_7 */
    /* 0x4bde: i32.sub  */
    /* 0x4bdf: local.tee $local_7 */
    /* 0x4be1: i32.const 127 */
    /* 0x4be4: i32.gt_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4be7: i64.const 0x0 */
    /* 0x4be9: local.set $local_1 */
    /* 0x4beb: i64.const 0x1 */
    if (r0 != 0) { goto 1; }
    /* 0x4bef: end  */
    /* 0x4bf0: local.get $local_6 */
    /* 0x4bf2: i32.const -64 */
    /* 0x4bf4: i32.sub  */
    /* 0x4bf5: local.get $local_2 */
    /* 0x4bf7: local.get $local_1 */
    /* 0x4bf9: i32.const 128 */
    /* 0x4bfc: local.get $local_7 */
    /* 0x4bfe: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x4c02: local.get $local_6 */
    /* 0x4c04: i32.const 48 */
    /* 0x4c06: i32.add  */
    /* 0x4c07: local.get $local_2 */
    /* 0x4c09: local.get $local_1 */
    /* 0x4c0b: local.get $local_7 */
    r0 = wasm_func_436(r0, r1);
    /* 0x4c10: local.get $local_6 */
    /* 0x4c12: i64.load offset=56, align=3 */
    /* 0x4c15: local.set $local_1 */
    /* 0x4c17: local.get $local_6 */
    /* 0x4c19: i64.load offset=48, align=3 */
    /* 0x4c1c: local.get $local_6 */
    /* 0x4c1e: i64.load offset=64, align=3 */
    /* 0x4c21: local.get $local_6 */
    /* 0x4c23: i64.load offset=72, align=3 */
    /* 0x4c26: i64.or  */
    /* 0x4c27: i64.const 0x0 */
    /* 0x4c29: i64.ne  */
    /* 0x4c2a: i64.extend_i32_u  */
    /* 0x4c2b: i64.or  */
    /* 0x4c2c: end  */
    /* 0x4c2d: local.set $local_9 */
    /* 0x4c2f: i64.const 0x8000000000000 */
    /* 0x4c38: i64.or  */
    /* 0x4c39: local.set $local_11 */
    /* 0x4c3b: local.get $local_10 */
    /* 0x4c3d: i64.const 0x3 */
    /* 0x4c3f: i64.shl  */
    /* 0x4c40: local.set $local_10 */
    /* 0x4c42: block 0x40 */
    /* 0x4c44: local.get $local_4 */
    /* 0x4c46: i64.const 0x0 */
    /* 0x4c48: wasm.op_0x53  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4c4b: i64.const 0x0 */
    /* 0x4c4d: local.set $local_3 */
    /* 0x4c4f: i64.const 0x0 */
    /* 0x4c51: local.set $local_4 */
    /* 0x4c53: local.get $local_9 */
    /* 0x4c55: local.get $local_10 */
    /* 0x4c57: i64.xor  */
    /* 0x4c58: local.get $local_1 */
    /* 0x4c5a: local.get $local_11 */
    /* 0x4c5c: i64.xor  */
    /* 0x4c5d: i64.or  */
    /* 0x4c5e: i64.eqz  */
    if (r0 != 0) { goto 2; }
    /* 0x4c61: local.get $local_10 */
    /* 0x4c63: local.get $local_9 */
    /* 0x4c65: i64.sub  */
    /* 0x4c66: local.set $local_2 */
    /* 0x4c68: local.get $local_11 */
    /* 0x4c6a: local.get $local_1 */
    /* 0x4c6c: i64.sub  */
    /* 0x4c6d: local.get $local_9 */
    /* 0x4c6f: local.get $local_10 */
    /* 0x4c71: wasm.op_0x56  */
    /* 0x4c72: i64.extend_i32_u  */
    /* 0x4c73: i64.sub  */
    /* 0x4c74: local.tee $local_4 */
    /* 0x4c76: i64.const 0x7ffffffffffff */
    /* 0x4c7f: wasm.op_0x56  */
    if (r0 != 0) { goto 1; }
    /* 0x4c82: local.get $local_6 */
    /* 0x4c84: i32.const 32 */
    /* 0x4c86: i32.add  */
    /* 0x4c87: local.get $local_2 */
    /* 0x4c89: local.get $local_4 */
    /* 0x4c8b: local.get $local_2 */
    /* 0x4c8d: local.get $local_4 */
    /* 0x4c8f: local.get $local_4 */
    /* 0x4c91: i64.eqz  */
    /* 0x4c92: local.tee $local_7 */
    /* 0x4c94: select  */
    /* 0x4c95: wasm.op_0x79  */
    /* 0x4c96: i64.const 0x40 */
    /* 0x4c99: i64.const 0x0 */
    /* 0x4c9b: local.get $local_7 */
    /* 0x4c9d: select  */
    /* 0x4c9e: i64.or  */
    /* 0x4c9f: i32.wrap_i64  */
    /* 0x4ca0: i32.const 12 */
    /* 0x4ca2: i32.sub  */
    /* 0x4ca3: local.tee $local_7 */
    r0 = wasm_func_351(r0, r1);
    /* 0x4ca8: local.get $local_5 */
    /* 0x4caa: local.get $local_7 */
    /* 0x4cac: i32.sub  */
    /* 0x4cad: local.set $local_5 */
    /* 0x4caf: local.get $local_6 */
    /* 0x4cb1: i64.load offset=40, align=3 */
    /* 0x4cb4: local.set $local_4 */
    /* 0x4cb6: local.get $local_6 */
    /* 0x4cb8: i64.load offset=32, align=3 */
    /* 0x4cbb: local.set $local_2 */
    if (r0 != 0) { goto 1; }
    /* 0x4cbf: end  */
    /* 0x4cc0: local.get $local_9 */
    /* 0x4cc2: local.get $local_10 */
    /* 0x4cc4: i64.add  */
    /* 0x4cc5: local.tee $local_2 */
    /* 0x4cc7: local.get $local_9 */
    /* 0x4cc9: wasm.op_0x54  */
    /* 0x4cca: i64.extend_i32_u  */
    /* 0x4ccb: local.get $local_1 */
    /* 0x4ccd: local.get $local_11 */
    /* 0x4ccf: i64.add  */
    /* 0x4cd0: i64.add  */
    /* 0x4cd1: local.tee $local_4 */
    /* 0x4cd3: i64.const 0x10000000000000 */
    /* 0x4cdc: i64.and  */
    /* 0x4cdd: i64.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x4ce0: local.get $local_9 */
    /* 0x4ce2: i64.const 0x1 */
    /* 0x4ce4: i64.and  */
    /* 0x4ce5: local.get $local_4 */
    /* 0x4ce7: i64.const 0x3f */
    /* 0x4ce9: i64.shl  */
    /* 0x4cea: local.get $local_2 */
    /* 0x4cec: i64.const 0x1 */
    /* 0x4cee: i64.shr_u  */
    /* 0x4cef: i64.or  */
    /* 0x4cf0: i64.or  */
    /* 0x4cf1: local.set $local_2 */
    /* 0x4cf3: local.get $local_5 */
    /* 0x4cf5: i32.const 1 */
    /* 0x4cf7: i32.add  */
    /* 0x4cf8: local.set $local_5 */
    /* 0x4cfa: local.get $local_4 */
    /* 0x4cfc: i64.const 0x1 */
    /* 0x4cfe: i64.shr_u  */
    /* 0x4cff: local.set $local_4 */
    /* 0x4d01: end  */
    /* 0x4d02: local.get $local_12 */
    /* 0x4d04: i64.const 0x8000000000000000 */
    /* 0x4d0f: i64.and  */
    /* 0x4d10: local.set $local_3 */
    /* 0x4d12: local.get $local_5 */
    /* 0x4d14: i32.const 32767 */
    /* 0x4d18: i32.ge_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4d1b: local.get $local_3 */
    /* 0x4d1d: i64.const 0x7fff000000000000 */
    /* 0x4d28: i64.or  */
    /* 0x4d29: local.set $local_4 */
    /* 0x4d2b: i64.const 0x0 */
    /* 0x4d2d: local.set $local_3 */
    if (r0 != 0) { goto 1; }
    /* 0x4d31: end  */
    /* 0x4d32: i32.const 0 */
    /* 0x4d34: local.set $local_7 */
    /* 0x4d36: block 0x40 */
    /* 0x4d38: local.get $local_5 */
    /* 0x4d3a: i32.const 0 */
    /* 0x4d3c: i32.gt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4d3f: local.get $local_5 */
    /* 0x4d41: local.set $local_7 */
    if (r0 != 0) { goto 1; }
    /* 0x4d45: end  */
    /* 0x4d46: local.get $local_6 */
    /* 0x4d48: i32.const 16 */
    /* 0x4d4a: i32.add  */
    /* 0x4d4b: local.get $local_2 */
    /* 0x4d4d: local.get $local_4 */
    /* 0x4d4f: local.get $local_5 */
    /* 0x4d51: i32.const 127 */
    /* 0x4d54: i32.add  */
    r0 = wasm_func_351(r0, r1);
    /* 0x4d58: local.get $local_6 */
    /* 0x4d5a: local.get $local_2 */
    /* 0x4d5c: local.get $local_4 */
    /* 0x4d5e: i32.const 1 */
    /* 0x4d60: local.get $local_5 */
    /* 0x4d62: i32.sub  */
    r0 = wasm_func_436(r0, r1);
    /* 0x4d66: local.get $local_6 */
    /* 0x4d68: i64.load offset=0, align=3 */
    /* 0x4d6b: local.get $local_6 */
    /* 0x4d6d: i64.load offset=16, align=3 */
    /* 0x4d70: local.get $local_6 */
    /* 0x4d72: i64.load offset=24, align=3 */
    /* 0x4d75: i64.or  */
    /* 0x4d76: i64.const 0x0 */
    /* 0x4d78: i64.ne  */
    /* 0x4d79: i64.extend_i32_u  */
    /* 0x4d7a: i64.or  */
    /* 0x4d7b: local.set $local_2 */
    /* 0x4d7d: local.get $local_6 */
    /* 0x4d7f: i64.load offset=8, align=3 */
    /* 0x4d82: local.set $local_4 */
    /* 0x4d84: end  */
    /* 0x4d85: local.get $local_4 */
    /* 0x4d87: i64.const 0x3d */
    /* 0x4d89: i64.shl  */
    /* 0x4d8a: local.get $local_2 */
    /* 0x4d8c: i64.const 0x3 */
    /* 0x4d8e: i64.shr_u  */
    /* 0x4d8f: i64.or  */
    /* 0x4d90: local.set $local_1 */
    /* 0x4d92: local.get $local_4 */
    /* 0x4d94: i64.const 0x3 */
    /* 0x4d96: i64.shr_u  */
    /* 0x4d97: i64.const 0xffffffffffff */
    /* 0x4d9f: i64.and  */
    /* 0x4da0: local.get $local_7 */
    /* 0x4da2: i64.extend_i32_u  */
    /* 0x4da3: i64.const 0x30 */
    /* 0x4da5: i64.shl  */
    /* 0x4da6: i64.or  */
    /* 0x4da7: local.get $local_3 */
    /* 0x4da9: i64.or  */
    /* 0x4daa: local.set $local_4 */
    /* 0x4dac: block 0x40 */
    /* 0x4dae: block 0x40 */
    /* 0x4db0: local.get $local_2 */
    /* 0x4db2: i32.wrap_i64  */
    /* 0x4db3: i32.const 7 */
    /* 0x4db5: i32.and  */
    /* 0x4db6: local.tee $local_5 */
    /* 0x4db8: i32.const 4 */
    /* 0x4dba: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4dbd: local.get $local_4 */
    /* 0x4dbf: local.get $local_1 */
    /* 0x4dc1: local.get $local_1 */
    /* 0x4dc3: local.get $local_5 */
    /* 0x4dc5: i32.const 4 */
    /* 0x4dc7: i32.gt_u  */
    /* 0x4dc8: i64.extend_i32_u  */
    /* 0x4dc9: i64.add  */
    /* 0x4dca: local.tee $local_3 */
    /* 0x4dcc: wasm.op_0x56  */
    /* 0x4dcd: i64.extend_i32_u  */
    /* 0x4dce: i64.add  */
    /* 0x4dcf: local.set $local_4 */
    if (r0 != 0) { goto 1; }
    /* 0x4dd3: end  */
    /* 0x4dd4: local.get $local_4 */
    /* 0x4dd6: local.get $local_1 */
    /* 0x4dd8: local.get $local_1 */
    /* 0x4dda: local.get $local_1 */
    /* 0x4ddc: i64.const 0x1 */
    /* 0x4dde: i64.and  */
    /* 0x4ddf: i64.add  */
    /* 0x4de0: local.tee $local_3 */
    /* 0x4de2: wasm.op_0x56  */
    /* 0x4de3: i64.extend_i32_u  */
    /* 0x4de4: i64.add  */
    /* 0x4de5: local.set $local_4 */
    if (r0 != 0) { goto 1; }
    /* 0x4de9: end  */
    /* 0x4dea: local.get $local_5 */
    /* 0x4dec: i32.eqz  */
    if (r0 != 0) { goto 1; }
    /* 0x4def: end  */
    /* 0x4df0: end  */
    /* 0x4df1: local.get $local_0 */
    /* 0x4df3: local.get $local_3 */
    /* 0x4df5: i64.store offset=0, align=3 */
    /* 0x4df8: local.get $local_0 */
    /* 0x4dfa: local.get $local_4 */
    /* 0x4dfc: i64.store offset=8, align=3 */
    /* 0x4dff: local.get $local_6 */
    /* 0x4e01: i32.const 112 */
    /* 0x4e04: i32.add  */
    /* 0x4e05: local.tee $local_0 */
    /* 0x4e07: global.get $global_4 */
    /* 0x4e09: i32.gt_u  */
    /* 0x4e0a: local.get $local_0 */
    /* 0x4e0c: global.get $global_5 */
    /* 0x4e0e: i32.lt_u  */
    /* 0x4e0f: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4e12: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x4e16: end  */
    /* 0x4e17: local.get $local_0 */
    /* 0x4e19: global.set $global_0 */
    return r0;
}

// ── wasm_func_280 @ 0x4e1d (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_280 ───
int64_t wasm_func_280(int64_t arg0, int64_t arg1) {
    /* 0x4e20: i32.const 4 */
    r0 = wasm_func_264(r0, r1);
    /* 0x4e25: local.tee $local_0 */
    /* 0x4e27: i32.const 3706464 */
    /* 0x4e2c: i32.store offset=0, align=2 */
    /* 0x4e2f: local.get $local_0 */
    /* 0x4e31: i32.const 3706500 */
    /* 0x4e36: i32.const 224 */
    r0 = imp_n(r0, r1);
    /* 0x4e3b: unreachable  */
    return r0;
}

// ── wasm_func_281 @ 0x4e3e (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_281 ───
int64_t wasm_func_281(int64_t arg0, int64_t arg1) {
    /* 0x4e3f: local.get $local_0 */
    /* 0x4e41: local.get $local_1 */
    /* 0x4e43: wasm.op_0x2a  */
    /* 0x4e44: block 0x00 */
    /* 0x4e46: local.get $local_2 */
    /* 0x4e48: wasm.op_0x2a  */
    /* 0x4e49: block 0x00 */
    /* 0x4e4b: wasm.op_0x93  */
    /* 0x4e4c: wasm.op_0x38  */
    /* 0x4e4d: block 0x00 */
    /* 0x4e4f: local.get $local_0 */
    /* 0x4e51: local.get $local_1 */
    /* 0x4e53: wasm.op_0x2a  */
    /* 0x4e54: block 0x04 */
    /* 0x4e56: local.get $local_2 */
    /* 0x4e58: wasm.op_0x2a  */
    /* 0x4e59: block 0x04 */
    /* 0x4e5b: wasm.op_0x93  */
    /* 0x4e5c: wasm.op_0x38  */
    /* 0x4e5d: block 0x04 */
    /* 0x4e5f: local.get $local_0 */
    /* 0x4e61: local.get $local_1 */
    /* 0x4e63: wasm.op_0x2a  */
    /* 0x4e64: block 0x08 */
    /* 0x4e66: local.get $local_2 */
    /* 0x4e68: wasm.op_0x2a  */
    /* 0x4e69: block 0x08 */
    /* 0x4e6b: wasm.op_0x93  */
    /* 0x4e6c: wasm.op_0x38  */
    /* 0x4e6d: block 0x08 */
    return r0;
}

// ── wasm_func_282 @ 0x4e72 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_282 ───
int64_t wasm_func_282(int64_t arg0, int64_t arg1) {
    /* 0x4e77: i32.const -1 */
    /* 0x4e79: local.set $local_4 */
    /* 0x4e7b: block 0x40 */
    /* 0x4e7d: local.get $local_0 */
    /* 0x4e7f: i64.const 0x0 */
    /* 0x4e81: i64.ne  */
    /* 0x4e82: local.get $local_1 */
    /* 0x4e84: i64.const 0x7fffffffffffffff */
    /* 0x4e8f: i64.and  */
    /* 0x4e90: local.tee $local_5 */
    /* 0x4e92: i64.const 0x7fff000000000000 */
    /* 0x4e9d: wasm.op_0x56  */
    /* 0x4e9e: local.get $local_5 */
    /* 0x4ea0: i64.const 0x7fff000000000000 */
    /* 0x4eab: i64.eq  */
    /* 0x4eac: select  */
    if (r0 != 0) { goto 0; }
    /* 0x4eaf: local.get $local_2 */
    /* 0x4eb1: i64.const 0x0 */
    /* 0x4eb3: i64.ne  */
    /* 0x4eb4: local.get $local_3 */
    /* 0x4eb6: i64.const 0x7fffffffffffffff */
    /* 0x4ec1: i64.and  */
    /* 0x4ec2: local.tee $local_6 */
    /* 0x4ec4: i64.const 0x7fff000000000000 */
    /* 0x4ecf: wasm.op_0x56  */
    /* 0x4ed0: local.get $local_6 */
    /* 0x4ed2: i64.const 0x7fff000000000000 */
    /* 0x4edd: i64.eq  */
    /* 0x4ede: select  */
    if (r0 != 0) { goto 0; }
    /* 0x4ee1: local.get $local_0 */
    /* 0x4ee3: local.get $local_2 */
    /* 0x4ee5: i64.or  */
    /* 0x4ee6: local.get $local_5 */
    /* 0x4ee8: local.get $local_6 */
    /* 0x4eea: i64.or  */
    /* 0x4eeb: i64.or  */
    /* 0x4eec: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4eef: i32.const 0 */
    return r0;
    /* 0x4ef2: end  */
    /* 0x4ef3: local.get $local_1 */
    /* 0x4ef5: local.get $local_3 */
    /* 0x4ef7: i64.and  */
    /* 0x4ef8: i64.const 0x0 */
    /* 0x4efa: wasm.op_0x59  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4efd: local.get $local_0 */
    /* 0x4eff: local.get $local_2 */
    /* 0x4f01: wasm.op_0x54  */
    /* 0x4f02: local.get $local_1 */
    /* 0x4f04: local.get $local_3 */
    /* 0x4f06: wasm.op_0x53  */
    /* 0x4f07: local.get $local_1 */
    /* 0x4f09: local.get $local_3 */
    /* 0x4f0b: i64.eq  */
    /* 0x4f0c: select  */
    if (r0 != 0) { goto 1; }
    /* 0x4f0f: local.get $local_0 */
    /* 0x4f11: local.get $local_2 */
    /* 0x4f13: i64.xor  */
    /* 0x4f14: local.get $local_1 */
    /* 0x4f16: local.get $local_3 */
    /* 0x4f18: i64.xor  */
    /* 0x4f19: i64.or  */
    /* 0x4f1a: i64.const 0x0 */
    /* 0x4f1c: i64.ne  */
    return r0;
    /* 0x4f1e: end  */
    /* 0x4f1f: local.get $local_0 */
    /* 0x4f21: local.get $local_2 */
    /* 0x4f23: wasm.op_0x56  */
    /* 0x4f24: local.get $local_1 */
    /* 0x4f26: local.get $local_3 */
    /* 0x4f28: wasm.op_0x55  */
    /* 0x4f29: local.get $local_1 */
    /* 0x4f2b: local.get $local_3 */
    /* 0x4f2d: i64.eq  */
    /* 0x4f2e: select  */
    if (r0 != 0) { goto 0; }
    /* 0x4f31: local.get $local_0 */
    /* 0x4f33: local.get $local_2 */
    /* 0x4f35: i64.xor  */
    /* 0x4f36: local.get $local_1 */
    /* 0x4f38: local.get $local_3 */
    /* 0x4f3a: i64.xor  */
    /* 0x4f3b: i64.or  */
    /* 0x4f3c: i64.const 0x0 */
    /* 0x4f3e: i64.ne  */
    /* 0x4f3f: local.set $local_4 */
    /* 0x4f41: end  */
    /* 0x4f42: local.get $local_4 */
    return r0;
}

// ── wasm_func_283 @ 0x4f46 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_283 ───
int64_t wasm_func_283(int64_t arg0, int64_t arg1) {
    /* 0x4f47: block 0x40 */
    /* 0x4f49: local.get $local_0 */
    /* 0x4f4b: i32.load offset=4, align=2 */
    /* 0x4f4e: local.tee $local_0 */
    /* 0x4f50: i32.const 9 */
    /* 0x4f52: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4f55: i32.const 3737328 */
    /* 0x4f5a: i32.const 0 */
    /* 0x4f5c: i32.store offset=0, align=2 */
    /* 0x4f5f: i32.const 89 */
    /* 0x4f62: local.get $local_0 */
    r0 = imp_i(r0, r1);
    /* 0x4f66: i32.const 3737328 */
    /* 0x4f6b: i32.load offset=0, align=2 */
    /* 0x4f6e: i32.const 3737328 */
    /* 0x4f73: i32.const 0 */
    /* 0x4f75: i32.store offset=0, align=2 */
    /* 0x4f78: i32.const 1 */
    /* 0x4f7a: i32.eq  */
    if (r0 != 0) { goto 1; }
    /* 0x4f7d: end  */
    return r0;
    /* 0x4f7f: end  */
    /* 0x4f80: i32.const 0 */
    r0 = imp_k(r0, r1);
    r0 = wasm_func_272(r0, r1);
    /* 0x4f87: unreachable  */
    return r0;
}

// ── wasm_func_284 @ 0x4f8a (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_284 ───
int64_t wasm_func_284(int64_t arg0, int64_t arg1) {
    /* 0x4f8b: local.get $local_0 */
    /* 0x4f8d: i32.load8_s offset=47, align=0 */
    /* 0x4f90: i32.const 0 */
    /* 0x4f92: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4f95: local.get $local_0 */
    /* 0x4f97: i32.load offset=44, align=2 */
    /* 0x4f9a: drop  */
    /* 0x4f9b: local.get $local_0 */
    /* 0x4f9d: i32.load offset=36, align=2 */
    r0 = _d(r0, r1);
    /* 0x4fa3: end  */
    /* 0x4fa4: local.get $local_0 */
    /* 0x4fa6: i32.load8_s offset=35, align=0 */
    /* 0x4fa9: i32.const 0 */
    /* 0x4fab: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4fae: local.get $local_0 */
    /* 0x4fb0: i32.load offset=32, align=2 */
    /* 0x4fb3: drop  */
    /* 0x4fb4: local.get $local_0 */
    /* 0x4fb6: i32.load offset=24, align=2 */
    r0 = _d(r0, r1);
    /* 0x4fbc: end  */
    /* 0x4fbd: local.get $local_0 */
    /* 0x4fbf: i32.load8_s offset=23, align=0 */
    /* 0x4fc2: i32.const 0 */
    /* 0x4fc4: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4fc7: local.get $local_0 */
    /* 0x4fc9: i32.load offset=20, align=2 */
    /* 0x4fcc: drop  */
    /* 0x4fcd: local.get $local_0 */
    /* 0x4fcf: i32.load offset=12, align=2 */
    r0 = _d(r0, r1);
    /* 0x4fd5: end  */
    /* 0x4fd6: local.get $local_0 */
    /* 0x4fd8: i32.load8_s offset=11, align=0 */
    /* 0x4fdb: i32.const 0 */
    /* 0x4fdd: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x4fe0: local.get $local_0 */
    /* 0x4fe2: i32.load offset=8, align=2 */
    /* 0x4fe5: drop  */
    /* 0x4fe6: local.get $local_0 */
    /* 0x4fe8: i32.load offset=0, align=2 */
    r0 = _d(r0, r1);
    /* 0x4fee: end  */
    /* 0x4fef: local.get $local_0 */
    return r0;
}

// ── wasm_func_285 @ 0x4ff3 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_285 ───
int64_t wasm_func_285(int64_t arg0, int64_t arg1) {
    /* 0x4ff6: block 0x40 */
    /* 0x4ff8: local.get $local_0 */
    /* 0x4ffa: i32.load offset=0, align=2 */
    /* 0x4ffd: i32.const 1 */
    /* 0x4fff: i32.shl  */
    /* 0x5000: i32.const -16777217 */
    /* 0x5005: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x5008: local.get $local_0 */
    /* 0x500a: i32.load offset=4, align=2 */
    /* 0x500d: i32.const 1 */
    /* 0x500f: i32.shl  */
    /* 0x5010: i32.const -16777217 */
    /* 0x5015: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x5018: local.get $local_0 */
    /* 0x501a: i32.load offset=8, align=2 */
    /* 0x501d: i32.const 1 */
    /* 0x501f: i32.shl  */
    /* 0x5020: i32.const -16777216 */
    /* 0x5025: i32.lt_u  */
    /* 0x5026: local.set $local_1 */
    /* 0x5028: end  */
    /* 0x5029: local.get $local_1 */
    return r0;
}

// ── wasm_func_286 @ 0x502e (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_286 ───
int64_t wasm_func_286(int64_t arg0, int64_t arg1) {
    /* 0x5031: global.get $global_0 */
    /* 0x5033: i32.const 16 */
    /* 0x5035: i32.sub  */
    /* 0x5036: local.tee $local_4 */
    /* 0x5038: local.tee $local_1 */
    /* 0x503a: global.get $global_4 */
    /* 0x503c: i32.gt_u  */
    /* 0x503d: local.get $local_1 */
    /* 0x503f: global.get $global_5 */
    /* 0x5041: i32.lt_u  */
    /* 0x5042: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5045: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x5049: end  */
    /* 0x504a: local.get $local_1 */
    /* 0x504c: global.set $global_0 */
    /* 0x504e: local.get $local_0 */
    /* 0x5050: i32.load offset=44, align=2 */
    /* 0x5053: local.tee $local_3 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5057: local.get $local_3 */
    /* 0x5059: local.tee $local_1 */
    /* 0x505b: local.get $local_0 */
    /* 0x505d: i32.load offset=48, align=2 */
    /* 0x5060: local.tee $local_2 */
    /* 0x5062: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5065: loop 0x40 */
    /* 0x5067: local.get $local_4 */
    /* 0x5069: local.get $local_2 */
    /* 0x506b: i32.const 12 */
    /* 0x506d: i32.sub  */
    /* 0x506e: i32.store offset=8, align=2 */
    /* 0x5071: local.get $local_4 */
    /* 0x5073: i32.const 8 */
    /* 0x5075: i32.add  */
    r0 = wasm_func_373(r0, r1);
    /* 0x5079: local.get $local_3 */
    /* 0x507b: local.get $local_2 */
    /* 0x507d: i32.const 16 */
    /* 0x507f: i32.sub  */
    /* 0x5080: local.tee $local_2 */
    /* 0x5082: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x5085: end  */
    /* 0x5086: local.get $local_0 */
    /* 0x5088: i32.load offset=44, align=2 */
    /* 0x508b: local.set $local_1 */
    /* 0x508d: end  */
    /* 0x508e: local.get $local_0 */
    /* 0x5090: local.get $local_3 */
    /* 0x5092: i32.store offset=48, align=2 */
    /* 0x5095: local.get $local_0 */
    /* 0x5097: i32.load offset=52, align=2 */
    /* 0x509a: drop  */
    /* 0x509b: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x50a0: end  */
    /* 0x50a1: local.get $local_4 */
    /* 0x50a3: local.get $local_0 */
    /* 0x50a5: i32.const 28 */
    /* 0x50a7: i32.add  */
    /* 0x50a8: i32.store offset=12, align=2 */
    /* 0x50ab: local.get $local_4 */
    /* 0x50ad: i32.const 12 */
    /* 0x50af: i32.add  */
    r0 = wasm_func_373(r0, r1);
    /* 0x50b3: local.get $local_0 */
    /* 0x50b5: i32.load offset=16, align=2 */
    /* 0x50b8: local.tee $local_3 */
    if (r0 != 0) { goto 0x40; }
    /* 0x50bc: local.get $local_3 */
    /* 0x50be: local.tee $local_1 */
    /* 0x50c0: local.get $local_0 */
    /* 0x50c2: i32.load offset=20, align=2 */
    /* 0x50c5: local.tee $local_2 */
    /* 0x50c7: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x50ca: loop 0x40 */
    /* 0x50cc: local.get $local_2 */
    /* 0x50ce: i32.const 12 */
    /* 0x50d0: i32.sub  */
    /* 0x50d1: local.tee $local_1 */
    /* 0x50d3: i32.load offset=0, align=2 */
    /* 0x50d6: local.tee $local_5 */
    if (r0 != 0) { goto 0x40; }
    /* 0x50da: local.get $local_2 */
    /* 0x50dc: i32.const 8 */
    /* 0x50de: i32.sub  */
    /* 0x50df: local.get $local_5 */
    /* 0x50e1: i32.store offset=0, align=2 */
    /* 0x50e4: local.get $local_2 */
    /* 0x50e6: i32.const 4 */
    /* 0x50e8: i32.sub  */
    /* 0x50e9: i32.load offset=0, align=2 */
    /* 0x50ec: drop  */
    /* 0x50ed: local.get $local_5 */
    r0 = _d(r0, r1);
    /* 0x50f2: end  */
    /* 0x50f3: local.get $local_1 */
    /* 0x50f5: local.tee $local_2 */
    /* 0x50f7: local.get $local_3 */
    /* 0x50f9: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x50fc: end  */
    /* 0x50fd: local.get $local_0 */
    /* 0x50ff: i32.load offset=16, align=2 */
    /* 0x5102: local.set $local_1 */
    /* 0x5104: end  */
    /* 0x5105: local.get $local_0 */
    /* 0x5107: local.get $local_3 */
    /* 0x5109: i32.store offset=20, align=2 */
    /* 0x510c: local.get $local_0 */
    /* 0x510e: i32.load offset=24, align=2 */
    /* 0x5111: drop  */
    /* 0x5112: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x5117: end  */
    /* 0x5118: local.get $local_4 */
    /* 0x511a: i32.const 16 */
    /* 0x511c: i32.add  */
    /* 0x511d: local.tee $local_1 */
    /* 0x511f: global.get $global_4 */
    /* 0x5121: i32.gt_u  */
    /* 0x5122: local.get $local_1 */
    /* 0x5124: global.get $global_5 */
    /* 0x5126: i32.lt_u  */
    /* 0x5127: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x512a: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x512e: end  */
    /* 0x512f: local.get $local_1 */
    /* 0x5131: global.set $global_0 */
    /* 0x5133: local.get $local_0 */
    return r0;
}

// ── wasm_func_287 @ 0x5138 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_287 ───
int64_t wasm_func_287(int64_t arg0, int64_t arg1) {
    /* 0x513b: local.get $local_0 */
    /* 0x513d: i32.load8_s offset=707, align=0 */
    /* 0x5141: i32.const 0 */
    /* 0x5143: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5146: local.get $local_0 */
    /* 0x5148: i32.load offset=704, align=2 */
    /* 0x514c: drop  */
    /* 0x514d: local.get $local_0 */
    /* 0x514f: i32.load offset=696, align=2 */
    r0 = _d(r0, r1);
    /* 0x5156: end  */
    /* 0x5157: local.get $local_0 */
    /* 0x5159: i32.load offset=680, align=2 */
    /* 0x515d: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5161: local.get $local_1 */
    /* 0x5163: local.set $local_2 */
    /* 0x5165: local.get $local_0 */
    /* 0x5167: i32.load offset=684, align=2 */
    /* 0x516b: local.tee $local_3 */
    /* 0x516d: local.get $local_1 */
    /* 0x516f: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5172: loop 0x40 */
    /* 0x5174: local.get $local_3 */
    /* 0x5176: i32.const 40 */
    /* 0x5178: i32.sub  */
    /* 0x5179: i32.load offset=0, align=2 */
    /* 0x517c: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5180: local.get $local_3 */
    /* 0x5182: i32.const 36 */
    /* 0x5184: i32.sub  */
    /* 0x5185: local.get $local_2 */
    /* 0x5187: i32.store offset=0, align=2 */
    /* 0x518a: local.get $local_3 */
    /* 0x518c: i32.const 32 */
    /* 0x518e: i32.sub  */
    /* 0x518f: i32.load offset=0, align=2 */
    /* 0x5192: drop  */
    /* 0x5193: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x5198: end  */
    /* 0x5199: local.get $local_1 */
    /* 0x519b: local.get $local_3 */
    /* 0x519d: i32.const 44 */
    /* 0x519f: i32.sub  */
    /* 0x51a0: local.tee $local_3 */
    /* 0x51a2: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x51a5: end  */
    /* 0x51a6: local.get $local_0 */
    /* 0x51a8: i32.load offset=680, align=2 */
    /* 0x51ac: local.set $local_2 */
    /* 0x51ae: end  */
    /* 0x51af: local.get $local_0 */
    /* 0x51b1: local.get $local_1 */
    /* 0x51b3: i32.store offset=684, align=2 */
    /* 0x51b7: local.get $local_0 */
    /* 0x51b9: i32.load offset=688, align=2 */
    /* 0x51bd: drop  */
    /* 0x51be: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x51c3: end  */
    /* 0x51c4: block 0x40 */
    /* 0x51c6: local.get $local_0 */
    /* 0x51c8: i32.load offset=676, align=2 */
    /* 0x51cc: local.tee $local_1 */
    /* 0x51ce: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x51d1: local.get $local_1 */
    /* 0x51d3: local.get $local_1 */
    /* 0x51d5: i32.load offset=4, align=2 */
    /* 0x51d8: local.tee $local_2 */
    /* 0x51da: i32.const 1 */
    /* 0x51dc: i32.sub  */
    /* 0x51dd: i32.store offset=4, align=2 */
    /* 0x51e0: local.get $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x51e4: local.get $local_1 */
    /* 0x51e6: local.get $local_1 */
    /* 0x51e8: i32.load offset=0, align=2 */
    /* 0x51eb: i32.load offset=8, align=2 */
    /* 0x51ee: wasm.op_0x11  */
    /* 0x51ef: unreachable  */
    /* 0x51f0: unreachable  */
    /* 0x51f1: block 0x40 */
    /* 0x51f3: local.get $local_1 */
    /* 0x51f5: i32.load offset=8, align=2 */
    /* 0x51f8: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x51fc: local.get $local_1 */
    /* 0x51fe: local.get $local_2 */
    /* 0x5200: i32.const 1 */
    /* 0x5202: i32.sub  */
    /* 0x5203: i32.store offset=8, align=2 */
    /* 0x5206: local.get $local_2 */
    if (r0 != 0) { goto 1; }
    /* 0x520a: end  */
    /* 0x520b: local.get $local_1 */
    /* 0x520d: local.get $local_1 */
    /* 0x520f: i32.load offset=0, align=2 */
    /* 0x5212: i32.load offset=16, align=2 */
    /* 0x5215: wasm.op_0x11  */
    /* 0x5216: unreachable  */
    /* 0x5217: unreachable  */
    /* 0x5218: end  */
    /* 0x5219: end  */
    /* 0x521a: block 0x40 */
    /* 0x521c: local.get $local_0 */
    /* 0x521e: i32.load8_u offset=668, align=0 */
    /* 0x5222: i32.const 1 */
    /* 0x5224: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x5227: local.get $local_0 */
    /* 0x5229: i32.load offset=656, align=2 */
    /* 0x522d: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5231: local.get $local_0 */
    /* 0x5233: local.get $local_1 */
    /* 0x5235: i32.store offset=660, align=2 */
    /* 0x5239: local.get $local_0 */
    /* 0x523b: i32.load offset=664, align=2 */
    /* 0x523f: drop  */
    /* 0x5240: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x5245: end  */
    /* 0x5246: local.get $local_0 */
    /* 0x5248: i32.load8_s offset=579, align=0 */
    /* 0x524c: i32.const 0 */
    /* 0x524e: i32.ge_s  */
    if (r0 != 0) { goto 0; }
    /* 0x5251: local.get $local_0 */
    /* 0x5253: i32.load offset=576, align=2 */
    /* 0x5257: drop  */
    /* 0x5258: local.get $local_0 */
    /* 0x525a: i32.load offset=568, align=2 */
    r0 = _d(r0, r1);
    /* 0x5261: end  */
    /* 0x5262: block 0x40 */
    /* 0x5264: local.get $local_0 */
    /* 0x5266: i32.load offset=564, align=2 */
    /* 0x526a: local.tee $local_1 */
    /* 0x526c: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x526f: local.get $local_1 */
    /* 0x5271: local.get $local_1 */
    /* 0x5273: i32.load offset=4, align=2 */
    /* 0x5276: local.tee $local_2 */
    /* 0x5278: i32.const 1 */
    /* 0x527a: i32.sub  */
    /* 0x527b: i32.store offset=4, align=2 */
    /* 0x527e: local.get $local_2 */
    if (r0 != 0) { goto 0; }
    /* 0x5282: local.get $local_1 */
    /* 0x5284: local.get $local_1 */
    /* 0x5286: i32.load offset=0, align=2 */
    /* 0x5289: i32.load offset=8, align=2 */
    /* 0x528c: wasm.op_0x11  */
    /* 0x528d: unreachable  */
    /* 0x528e: unreachable  */
    /* 0x528f: block 0x40 */
    /* 0x5291: local.get $local_1 */
    /* 0x5293: i32.load offset=8, align=2 */
    /* 0x5296: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x529a: local.get $local_1 */
    /* 0x529c: local.get $local_2 */
    /* 0x529e: i32.const 1 */
    /* 0x52a0: i32.sub  */
    /* 0x52a1: i32.store offset=8, align=2 */
    /* 0x52a4: local.get $local_2 */
    if (r0 != 0) { goto 1; }
    /* 0x52a8: end  */
    /* 0x52a9: local.get $local_1 */
    /* 0x52ab: local.get $local_1 */
    /* 0x52ad: i32.load offset=0, align=2 */
    /* 0x52b0: i32.load offset=16, align=2 */
    /* 0x52b3: wasm.op_0x11  */
    /* 0x52b4: unreachable  */
    /* 0x52b5: unreachable  */
    /* 0x52b6: end  */
    /* 0x52b7: end  */
    /* 0x52b8: block 0x40 */
    /* 0x52ba: local.get $local_0 */
    /* 0x52bc: i32.load8_u offset=556, align=0 */
    /* 0x52c0: i32.const 1 */
    /* 0x52c2: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x52c5: local.get $local_0 */
    /* 0x52c7: i32.load offset=544, align=2 */
    /* 0x52cb: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x52cf: local.get $local_0 */
    /* 0x52d1: local.get $local_1 */
    /* 0x52d3: i32.store offset=548, align=2 */
    /* 0x52d7: local.get $local_0 */
    /* 0x52d9: i32.load offset=552, align=2 */
    /* 0x52dd: drop  */
    /* 0x52de: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x52e3: end  */
    /* 0x52e4: local.get $local_0 */
    /* 0x52e6: i32.load8_s offset=459, align=0 */
    /* 0x52ea: i32.const 0 */
    /* 0x52ec: i32.ge_s  */
    if (r0 != 0) { goto 0; }
    /* 0x52ef: local.get $local_0 */
    /* 0x52f1: i32.load offset=456, align=2 */
    /* 0x52f5: drop  */
    /* 0x52f6: local.get $local_0 */
    /* 0x52f8: i32.load offset=448, align=2 */
    r0 = _d(r0, r1);
    /* 0x52ff: end  */
    /* 0x5300: local.get $local_0 */
    /* 0x5302: i32.load offset=408, align=2 */
    /* 0x5306: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x530a: local.get $local_0 */
    /* 0x530c: local.get $local_1 */
    /* 0x530e: i32.store offset=412, align=2 */
    /* 0x5312: local.get $local_0 */
    /* 0x5314: i32.load offset=416, align=2 */
    /* 0x5318: drop  */
    /* 0x5319: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x531e: end  */
    /* 0x531f: local.get $local_0 */
    /* 0x5321: i32.load offset=368, align=2 */
    /* 0x5325: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5329: local.get $local_0 */
    /* 0x532b: local.get $local_1 */
    /* 0x532d: i32.store offset=372, align=2 */
    /* 0x5331: local.get $local_0 */
    /* 0x5333: i32.load offset=376, align=2 */
    /* 0x5337: drop  */
    /* 0x5338: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x533d: end  */
    /* 0x533e: local.get $local_0 */
    /* 0x5340: i32.load offset=156, align=2 */
    /* 0x5344: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5348: local.get $local_0 */
    /* 0x534a: local.get $local_1 */
    /* 0x534c: i32.store offset=160, align=2 */
    /* 0x5350: local.get $local_0 */
    /* 0x5352: i32.load offset=164, align=2 */
    /* 0x5356: drop  */
    /* 0x5357: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x535c: end  */
    /* 0x535d: local.get $local_0 */
    /* 0x535f: i32.load offset=116, align=2 */
    /* 0x5362: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5366: local.get $local_0 */
    /* 0x5368: local.get $local_1 */
    /* 0x536a: i32.store offset=120, align=2 */
    /* 0x536d: local.get $local_0 */
    /* 0x536f: i32.load offset=124, align=2 */
    /* 0x5372: drop  */
    /* 0x5373: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x5378: end  */
    /* 0x5379: local.get $local_0 */
    /* 0x537b: i32.load8_s offset=115, align=0 */
    /* 0x537e: i32.const 0 */
    /* 0x5380: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5383: local.get $local_0 */
    /* 0x5385: i32.load offset=112, align=2 */
    /* 0x5388: drop  */
    /* 0x5389: local.get $local_0 */
    /* 0x538b: i32.load offset=104, align=2 */
    r0 = _d(r0, r1);
    /* 0x5391: end  */
    /* 0x5392: local.get $local_0 */
    /* 0x5394: i32.load offset=12, align=2 */
    /* 0x5397: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x539b: local.get $local_0 */
    /* 0x539d: local.get $local_1 */
    /* 0x539f: i32.store offset=16, align=2 */
    /* 0x53a2: local.get $local_0 */
    /* 0x53a4: i32.load offset=20, align=2 */
    /* 0x53a7: drop  */
    /* 0x53a8: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x53ad: end  */
    /* 0x53ae: local.get $local_0 */
    /* 0x53b0: i32.load offset=0, align=2 */
    /* 0x53b3: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x53b7: local.get $local_0 */
    /* 0x53b9: local.get $local_1 */
    /* 0x53bb: i32.store offset=4, align=2 */
    /* 0x53be: local.get $local_0 */
    /* 0x53c0: i32.load offset=8, align=2 */
    /* 0x53c3: drop  */
    /* 0x53c4: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x53c9: end  */
    /* 0x53ca: local.get $local_0 */
    return r0;
}

// ── wasm_func_288 @ 0x53ce (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_288 ───
int64_t wasm_func_288(int64_t arg0, int64_t arg1) {
    /* 0x53cf: i32.const 3737328 */
    /* 0x53d4: i32.const 0 */
    /* 0x53d6: i32.store offset=0, align=2 */
    /* 0x53d9: i32.const 3737328 */
    /* 0x53de: i32.load offset=0, align=2 */
    /* 0x53e1: i32.const 3737328 */
    /* 0x53e6: i32.const 0 */
    /* 0x53e8: i32.store offset=0, align=2 */
    /* 0x53eb: i32.const 1 */
    /* 0x53ed: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    return r0;
    /* 0x53f1: end  */
    /* 0x53f2: i32.const 0 */
    r0 = imp_k(r0, r1);
    r0 = wasm_func_272(r0, r1);
    /* 0x53f9: unreachable  */
    return r0;
}

// ── wasm_func_289 @ 0x53fc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_289 ───
int64_t wasm_func_289(int64_t arg0, int64_t arg1) {
    /* 0x53ff: block 0x40 */
    /* 0x5401: local.get $local_0 */
    /* 0x5403: i32.load offset=4, align=2 */
    /* 0x5406: local.tee $local_0 */
    /* 0x5408: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x540b: local.get $local_0 */
    /* 0x540d: local.get $local_0 */
    /* 0x540f: i32.load offset=4, align=2 */
    /* 0x5412: local.tee $local_1 */
    /* 0x5414: i32.const 1 */
    /* 0x5416: i32.sub  */
    /* 0x5417: i32.store offset=4, align=2 */
    /* 0x541a: local.get $local_1 */
    if (r0 != 0) { goto 0; }
    /* 0x541e: local.get $local_0 */
    /* 0x5420: local.get $local_0 */
    /* 0x5422: i32.load offset=0, align=2 */
    /* 0x5425: i32.load offset=8, align=2 */
    /* 0x5428: wasm.op_0x11  */
    /* 0x5429: unreachable  */
    /* 0x542a: unreachable  */
    /* 0x542b: block 0x40 */
    /* 0x542d: local.get $local_0 */
    /* 0x542f: i32.load offset=8, align=2 */
    /* 0x5432: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5436: local.get $local_0 */
    /* 0x5438: local.get $local_1 */
    /* 0x543a: i32.const 1 */
    /* 0x543c: i32.sub  */
    /* 0x543d: i32.store offset=8, align=2 */
    /* 0x5440: local.get $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x5444: end  */
    /* 0x5445: local.get $local_0 */
    /* 0x5447: local.get $local_0 */
    /* 0x5449: i32.load offset=0, align=2 */
    /* 0x544c: i32.load offset=16, align=2 */
    /* 0x544f: wasm.op_0x11  */
    /* 0x5450: unreachable  */
    /* 0x5451: unreachable  */
    /* 0x5452: end  */
    /* 0x5453: end  */
    return r0;
}

// ── wasm_func_290 @ 0x5456 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_290 ───
int64_t wasm_func_290(int64_t arg0, int64_t arg1) {
    /* 0x5459: block 0x40 */
    /* 0x545b: local.get $local_0 */
    /* 0x545d: i32.load8_u offset=284, align=0 */
    /* 0x5461: i32.const 1 */
    /* 0x5463: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x5466: local.get $local_0 */
    /* 0x5468: i32.load offset=224, align=2 */
    /* 0x546c: local.tee $local_1 */
    /* 0x546e: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x5471: local.get $local_0 */
    /* 0x5473: local.get $local_1 */
    /* 0x5475: i32.store offset=228, align=2 */
    /* 0x5479: local.get $local_0 */
    /* 0x547b: i32.load offset=232, align=2 */
    /* 0x547f: drop  */
    /* 0x5480: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x5485: end  */
    /* 0x5486: local.get $local_0 */
    /* 0x5488: i32.load offset=208, align=2 */
    /* 0x548c: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5490: local.get $local_0 */
    /* 0x5492: local.get $local_1 */
    /* 0x5494: i32.store offset=212, align=2 */
    /* 0x5498: local.get $local_0 */
    /* 0x549a: i32.load offset=216, align=2 */
    /* 0x549e: drop  */
    /* 0x549f: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x54a4: end  */
    return r0;
}

// ── wasm_func_291 @ 0x54a8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_291 ───
int64_t wasm_func_291(int64_t arg0, int64_t arg1) {
    /* 0x54ab: global.get $global_0 */
    /* 0x54ad: i32.const 16 */
    /* 0x54af: i32.sub  */
    /* 0x54b0: local.tee $local_4 */
    /* 0x54b2: local.tee $local_1 */
    /* 0x54b4: global.get $global_4 */
    /* 0x54b6: i32.gt_u  */
    /* 0x54b7: local.get $local_1 */
    /* 0x54b9: global.get $global_5 */
    /* 0x54bb: i32.lt_u  */
    /* 0x54bc: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x54bf: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x54c3: end  */
    /* 0x54c4: local.get $local_1 */
    /* 0x54c6: global.set $global_0 */
    /* 0x54c8: local.get $local_0 */
    /* 0x54ca: i32.load8_u offset=392, align=0 */
    /* 0x54ce: i32.const 1 */
    /* 0x54d0: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x54d3: local.get $local_0 */
    /* 0x54d5: i32.const 88 */
    /* 0x54d8: i32.add  */
    r0 = wasm_func_377(r0, r1);
    /* 0x54dc: end  */
    /* 0x54dd: local.get $local_0 */
    /* 0x54df: i32.load offset=76, align=2 */
    /* 0x54e2: local.set $local_1 */
    /* 0x54e4: i32.const 3737328 */
    /* 0x54e9: i32.const 0 */
    /* 0x54eb: i32.store offset=0, align=2 */
    /* 0x54ee: local.get $local_4 */
    /* 0x54f0: local.get $local_0 */
    /* 0x54f2: i32.const 72 */
    /* 0x54f5: i32.add  */
    /* 0x54f6: i32.store offset=12, align=2 */
    /* 0x54f9: i32.const 176 */
    /* 0x54fc: local.get $local_4 */
    /* 0x54fe: i32.const 12 */
    /* 0x5500: i32.add  */
    /* 0x5501: local.get $local_1 */
    r0 = imp_e(r0, r1);
    /* 0x5505: i32.const 3737328 */
    /* 0x550a: i32.load offset=0, align=2 */
    /* 0x550d: i32.const 3737328 */
    /* 0x5512: i32.const 0 */
    /* 0x5514: i32.store offset=0, align=2 */
    /* 0x5517: i32.const 1 */
    /* 0x5519: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x551c: local.get $local_0 */
    /* 0x551e: i32.load offset=60, align=2 */
    /* 0x5521: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x5525: local.get $local_1 */
    /* 0x5527: local.set $local_2 */
    /* 0x5529: local.get $local_0 */
    /* 0x552b: i32.load offset=64, align=2 */
    /* 0x552e: local.tee $local_3 */
    /* 0x5530: local.get $local_1 */
    /* 0x5532: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5535: loop 0x40 */
    /* 0x5537: local.get $local_3 */
    /* 0x5539: i32.const 12 */
    /* 0x553b: i32.sub  */
    /* 0x553c: local.set $local_2 */
    /* 0x553e: local.get $local_3 */
    /* 0x5540: i32.const 1 */
    /* 0x5542: i32.sub  */
    /* 0x5543: i32.load8_s offset=0, align=0 */
    /* 0x5546: i32.const 0 */
    /* 0x5548: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x554b: local.get $local_3 */
    /* 0x554d: i32.const 4 */
    /* 0x554f: i32.sub  */
    /* 0x5550: i32.load offset=0, align=2 */
    /* 0x5553: drop  */
    /* 0x5554: local.get $local_2 */
    /* 0x5556: i32.load offset=0, align=2 */
    r0 = _d(r0, r1);
    /* 0x555c: end  */
    /* 0x555d: local.get $local_2 */
    /* 0x555f: local.tee $local_3 */
    /* 0x5561: local.get $local_1 */
    /* 0x5563: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x5566: end  */
    /* 0x5567: local.get $local_0 */
    /* 0x5569: i32.load offset=60, align=2 */
    /* 0x556c: local.set $local_2 */
    /* 0x556e: end  */
    /* 0x556f: local.get $local_0 */
    /* 0x5571: local.get $local_1 */
    /* 0x5573: i32.store offset=64, align=2 */
    /* 0x5576: local.get $local_0 */
    /* 0x5578: i32.load offset=68, align=2 */
    /* 0x557b: drop  */
    /* 0x557c: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x5581: end  */
    /* 0x5582: local.get $local_0 */
    /* 0x5584: i32.load8_s offset=59, align=0 */
    /* 0x5587: i32.const 0 */
    /* 0x5589: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x558c: local.get $local_0 */
    /* 0x558e: i32.load offset=56, align=2 */
    /* 0x5591: drop  */
    /* 0x5592: local.get $local_0 */
    /* 0x5594: i32.load offset=48, align=2 */
    r0 = _d(r0, r1);
    /* 0x559a: end  */
    /* 0x559b: local.get $local_0 */
    /* 0x559d: i32.load8_s offset=47, align=0 */
    /* 0x55a0: i32.const 0 */
    /* 0x55a2: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x55a5: local.get $local_0 */
    /* 0x55a7: i32.load offset=44, align=2 */
    /* 0x55aa: drop  */
    /* 0x55ab: local.get $local_0 */
    /* 0x55ad: i32.load offset=36, align=2 */
    r0 = _d(r0, r1);
    /* 0x55b3: end  */
    /* 0x55b4: local.get $local_0 */
    /* 0x55b6: i32.load8_s offset=35, align=0 */
    /* 0x55b9: i32.const 0 */
    /* 0x55bb: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x55be: local.get $local_0 */
    /* 0x55c0: i32.load offset=32, align=2 */
    /* 0x55c3: drop  */
    /* 0x55c4: local.get $local_0 */
    /* 0x55c6: i32.load offset=24, align=2 */
    r0 = _d(r0, r1);
    /* 0x55cc: end  */
    /* 0x55cd: local.get $local_0 */
    /* 0x55cf: i32.load8_s offset=23, align=0 */
    /* 0x55d2: i32.const 0 */
    /* 0x55d4: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x55d7: local.get $local_0 */
    /* 0x55d9: i32.load offset=20, align=2 */
    /* 0x55dc: drop  */
    /* 0x55dd: local.get $local_0 */
    /* 0x55df: i32.load offset=12, align=2 */
    r0 = _d(r0, r1);
    /* 0x55e5: end  */
    /* 0x55e6: local.get $local_0 */
    /* 0x55e8: i32.load8_s offset=11, align=0 */
    /* 0x55eb: i32.const 0 */
    /* 0x55ed: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x55f0: local.get $local_0 */
    /* 0x55f2: i32.load offset=8, align=2 */
    /* 0x55f5: drop  */
    /* 0x55f6: local.get $local_0 */
    /* 0x55f8: i32.load offset=0, align=2 */
    r0 = _d(r0, r1);
    /* 0x55fe: end  */
    /* 0x55ff: local.get $local_4 */
    /* 0x5601: i32.const 16 */
    /* 0x5603: i32.add  */
    /* 0x5604: local.tee $local_0 */
    /* 0x5606: global.get $global_4 */
    /* 0x5608: i32.gt_u  */
    /* 0x5609: local.get $local_0 */
    /* 0x560b: global.get $global_5 */
    /* 0x560d: i32.lt_u  */
    /* 0x560e: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5611: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x5615: end  */
    /* 0x5616: local.get $local_0 */
    /* 0x5618: global.set $global_0 */
    return r0;
    /* 0x561b: end  */
    /* 0x561c: i32.const 0 */
    r0 = imp_k(r0, r1);
    r0 = wasm_func_272(r0, r1);
    /* 0x5623: unreachable  */
    return r0;
}

// ── wasm_func_292 @ 0x5627 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_292 ───
int64_t wasm_func_292(int64_t arg0, int64_t arg1) {
    /* 0x562a: local.get $local_1 */
    /* 0x562c: wasm.op_0x2a  */
    /* 0x562d: block 0x30 */
    /* 0x562f: local.set $local_9 */
    /* 0x5631: local.get $local_1 */
    /* 0x5633: wasm.op_0x2a  */
    /* 0x5634: block 0x20 */
    /* 0x5636: local.set $local_10 */
    /* 0x5638: local.get $local_1 */
    /* 0x563a: wasm.op_0x2a  */
    /* 0x563b: block 0x00 */
    /* 0x563d: local.set $local_11 */
    /* 0x563f: local.get $local_1 */
    /* 0x5641: wasm.op_0x2a  */
    /* 0x5642: block 0x10 */
    /* 0x5644: local.set $local_12 */
    /* 0x5646: local.get $local_1 */
    /* 0x5648: wasm.op_0x2a  */
    /* 0x5649: block 0x34 */
    /* 0x564b: local.set $local_13 */
    /* 0x564d: local.get $local_1 */
    /* 0x564f: wasm.op_0x2a  */
    /* 0x5650: block 0x24 */
    /* 0x5652: local.set $local_14 */
    /* 0x5654: local.get $local_1 */
    /* 0x5656: wasm.op_0x2a  */
    /* 0x5657: block 0x04 */
    /* 0x5659: local.set $local_15 */
    /* 0x565b: local.get $local_1 */
    /* 0x565d: wasm.op_0x2a  */
    /* 0x565e: block 0x14 */
    /* 0x5660: local.set $local_16 */
    /* 0x5662: local.get $local_1 */
    /* 0x5664: wasm.op_0x2a  */
    /* 0x5665: block 0x38 */
    /* 0x5667: local.set $local_17 */
    /* 0x5669: local.get $local_1 */
    /* 0x566b: wasm.op_0x2a  */
    /* 0x566c: block 0x28 */
    /* 0x566e: local.set $local_18 */
    /* 0x5670: local.get $local_1 */
    /* 0x5672: wasm.op_0x2a  */
    /* 0x5673: block 0x08 */
    /* 0x5675: local.set $local_19 */
    /* 0x5677: local.get $local_1 */
    /* 0x5679: wasm.op_0x2a  */
    /* 0x567a: block 0x18 */
    /* 0x567c: local.set $local_20 */
    /* 0x567e: local.get $local_0 */
    /* 0x5680: local.get $local_2 */
    /* 0x5682: wasm.op_0x2a  */
    /* 0x5683: block 0x00 */
    /* 0x5685: local.tee $local_3 */
    /* 0x5687: local.get $local_1 */
    /* 0x5689: wasm.op_0x2a  */
    /* 0x568a: block 0x0c */
    /* 0x568c: local.tee $local_7 */
    /* 0x568e: wasm.op_0x94  */
    /* 0x568f: local.get $local_2 */
    /* 0x5691: wasm.op_0x2a  */
    /* 0x5692: block 0x04 */
    /* 0x5694: local.tee $local_4 */
    /* 0x5696: local.get $local_1 */
    /* 0x5698: wasm.op_0x2a  */
    /* 0x5699: block 0x1c */
    /* 0x569b: local.tee $local_8 */
    /* 0x569d: wasm.op_0x94  */
    /* 0x569e: wasm.op_0x92  */
    /* 0x569f: local.get $local_2 */
    /* 0x56a1: wasm.op_0x2a  */
    /* 0x56a2: block 0x08 */
    /* 0x56a4: local.tee $local_5 */
    /* 0x56a6: local.get $local_1 */
    /* 0x56a8: wasm.op_0x2a  */
    /* 0x56a9: block 0x2c */
    /* 0x56ab: local.tee $local_21 */
    /* 0x56ad: wasm.op_0x94  */
    /* 0x56ae: wasm.op_0x92  */
    /* 0x56af: local.get $local_2 */
    /* 0x56b1: wasm.op_0x2a  */
    /* 0x56b2: block 0x0c */
    /* 0x56b4: local.tee $local_6 */
    /* 0x56b6: local.get $local_1 */
    /* 0x56b8: wasm.op_0x2a  */
    /* 0x56b9: block 0x3c */
    /* 0x56bb: local.tee $local_22 */
    /* 0x56bd: wasm.op_0x94  */
    /* 0x56be: wasm.op_0x92  */
    /* 0x56bf: wasm.op_0x38  */
    /* 0x56c0: block 0x0c */
    /* 0x56c2: local.get $local_0 */
    /* 0x56c4: local.get $local_3 */
    /* 0x56c6: local.get $local_19 */
    /* 0x56c8: wasm.op_0x94  */
    /* 0x56c9: local.get $local_4 */
    /* 0x56cb: local.get $local_20 */
    /* 0x56cd: wasm.op_0x94  */
    /* 0x56ce: wasm.op_0x92  */
    /* 0x56cf: local.get $local_5 */
    /* 0x56d1: local.get $local_18 */
    /* 0x56d3: wasm.op_0x94  */
    /* 0x56d4: wasm.op_0x92  */
    /* 0x56d5: local.get $local_6 */
    /* 0x56d7: local.get $local_17 */
    /* 0x56d9: wasm.op_0x94  */
    /* 0x56da: wasm.op_0x92  */
    /* 0x56db: wasm.op_0x38  */
    /* 0x56dc: block 0x08 */
    /* 0x56de: local.get $local_0 */
    /* 0x56e0: local.get $local_3 */
    /* 0x56e2: local.get $local_15 */
    /* 0x56e4: wasm.op_0x94  */
    /* 0x56e5: local.get $local_4 */
    /* 0x56e7: local.get $local_16 */
    /* 0x56e9: wasm.op_0x94  */
    /* 0x56ea: wasm.op_0x92  */
    /* 0x56eb: local.get $local_5 */
    /* 0x56ed: local.get $local_14 */
    /* 0x56ef: wasm.op_0x94  */
    /* 0x56f0: wasm.op_0x92  */
    /* 0x56f1: local.get $local_6 */
    /* 0x56f3: local.get $local_13 */
    /* 0x56f5: wasm.op_0x94  */
    /* 0x56f6: wasm.op_0x92  */
    /* 0x56f7: wasm.op_0x38  */
    /* 0x56f8: block 0x04 */
    /* 0x56fa: local.get $local_0 */
    /* 0x56fc: local.get $local_3 */
    /* 0x56fe: local.get $local_11 */
    /* 0x5700: wasm.op_0x94  */
    /* 0x5701: local.get $local_4 */
    /* 0x5703: local.get $local_12 */
    /* 0x5705: wasm.op_0x94  */
    /* 0x5706: wasm.op_0x92  */
    /* 0x5707: local.get $local_5 */
    /* 0x5709: local.get $local_10 */
    /* 0x570b: wasm.op_0x94  */
    /* 0x570c: wasm.op_0x92  */
    /* 0x570d: local.get $local_6 */
    /* 0x570f: local.get $local_9 */
    /* 0x5711: wasm.op_0x94  */
    /* 0x5712: wasm.op_0x92  */
    /* 0x5713: wasm.op_0x38  */
    /* 0x5714: block 0x00 */
    /* 0x5716: local.get $local_0 */
    /* 0x5718: local.get $local_7 */
    /* 0x571a: local.get $local_2 */
    /* 0x571c: wasm.op_0x2a  */
    /* 0x571d: block 0x10 */
    /* 0x571f: local.tee $local_3 */
    /* 0x5721: wasm.op_0x94  */
    /* 0x5722: local.get $local_8 */
    /* 0x5724: local.get $local_2 */
    /* 0x5726: wasm.op_0x2a  */
    /* 0x5727: block 0x14 */
    /* 0x5729: local.tee $local_4 */
    /* 0x572b: wasm.op_0x94  */
    /* 0x572c: wasm.op_0x92  */
    /* 0x572d: local.get $local_21 */
    /* 0x572f: local.get $local_2 */
    /* 0x5731: wasm.op_0x2a  */
    /* 0x5732: block 0x18 */
    /* 0x5734: local.tee $local_5 */
    /* 0x5736: wasm.op_0x94  */
    /* 0x5737: wasm.op_0x92  */
    /* 0x5738: local.get $local_22 */
    /* 0x573a: local.get $local_2 */
    /* 0x573c: wasm.op_0x2a  */
    /* 0x573d: block 0x1c */
    /* 0x573f: local.tee $local_6 */
    /* 0x5741: wasm.op_0x94  */
    /* 0x5742: wasm.op_0x92  */
    /* 0x5743: wasm.op_0x38  */
    /* 0x5744: block 0x1c */
    /* 0x5746: local.get $local_0 */
    /* 0x5748: local.get $local_3 */
    /* 0x574a: local.get $local_19 */
    /* 0x574c: wasm.op_0x94  */
    /* 0x574d: local.get $local_4 */
    /* 0x574f: local.get $local_20 */
    /* 0x5751: wasm.op_0x94  */
    /* 0x5752: wasm.op_0x92  */
    /* 0x5753: local.get $local_5 */
    /* 0x5755: local.get $local_18 */
    /* 0x5757: wasm.op_0x94  */
    /* 0x5758: wasm.op_0x92  */
    /* 0x5759: local.get $local_6 */
    /* 0x575b: local.get $local_17 */
    /* 0x575d: wasm.op_0x94  */
    /* 0x575e: wasm.op_0x92  */
    /* 0x575f: wasm.op_0x38  */
    /* 0x5760: block 0x18 */
    /* 0x5762: local.get $local_0 */
    /* 0x5764: local.get $local_3 */
    /* 0x5766: local.get $local_15 */
    /* 0x5768: wasm.op_0x94  */
    /* 0x5769: local.get $local_4 */
    /* 0x576b: local.get $local_16 */
    /* 0x576d: wasm.op_0x94  */
    /* 0x576e: wasm.op_0x92  */
    /* 0x576f: local.get $local_5 */
    /* 0x5771: local.get $local_14 */
    /* 0x5773: wasm.op_0x94  */
    /* 0x5774: wasm.op_0x92  */
    /* 0x5775: local.get $local_6 */
    /* 0x5777: local.get $local_13 */
    /* 0x5779: wasm.op_0x94  */
    /* 0x577a: wasm.op_0x92  */
    /* 0x577b: wasm.op_0x38  */
    /* 0x577c: block 0x14 */
    /* 0x577e: local.get $local_0 */
    /* 0x5780: local.get $local_3 */
    /* 0x5782: local.get $local_11 */
    /* 0x5784: wasm.op_0x94  */
    /* 0x5785: local.get $local_4 */
    /* 0x5787: local.get $local_12 */
    /* 0x5789: wasm.op_0x94  */
    /* 0x578a: wasm.op_0x92  */
    /* 0x578b: local.get $local_5 */
    /* 0x578d: local.get $local_10 */
    /* 0x578f: wasm.op_0x94  */
    /* 0x5790: wasm.op_0x92  */
    /* 0x5791: local.get $local_6 */
    /* 0x5793: local.get $local_9 */
    /* 0x5795: wasm.op_0x94  */
    /* 0x5796: wasm.op_0x92  */
    /* 0x5797: wasm.op_0x38  */
    /* 0x5798: block 0x10 */
    /* 0x579a: local.get $local_0 */
    /* 0x579c: local.get $local_7 */
    /* 0x579e: local.get $local_2 */
    /* 0x57a0: wasm.op_0x2a  */
    /* 0x57a1: block 0x20 */
    /* 0x57a3: local.tee $local_3 */
    /* 0x57a5: wasm.op_0x94  */
    /* 0x57a6: local.get $local_8 */
    /* 0x57a8: local.get $local_2 */
    /* 0x57aa: wasm.op_0x2a  */
    /* 0x57ab: block 0x24 */
    /* 0x57ad: local.tee $local_4 */
    /* 0x57af: wasm.op_0x94  */
    /* 0x57b0: wasm.op_0x92  */
    /* 0x57b1: local.get $local_21 */
    /* 0x57b3: local.get $local_2 */
    /* 0x57b5: wasm.op_0x2a  */
    /* 0x57b6: block 0x28 */
    /* 0x57b8: local.tee $local_5 */
    /* 0x57ba: wasm.op_0x94  */
    /* 0x57bb: wasm.op_0x92  */
    /* 0x57bc: local.get $local_22 */
    /* 0x57be: local.get $local_2 */
    /* 0x57c0: wasm.op_0x2a  */
    /* 0x57c1: block 0x2c */
    /* 0x57c3: local.tee $local_6 */
    /* 0x57c5: wasm.op_0x94  */
    /* 0x57c6: wasm.op_0x92  */
    /* 0x57c7: wasm.op_0x38  */
    /* 0x57c8: block 0x2c */
    /* 0x57ca: local.get $local_0 */
    /* 0x57cc: local.get $local_3 */
    /* 0x57ce: local.get $local_19 */
    /* 0x57d0: wasm.op_0x94  */
    /* 0x57d1: local.get $local_4 */
    /* 0x57d3: local.get $local_20 */
    /* 0x57d5: wasm.op_0x94  */
    /* 0x57d6: wasm.op_0x92  */
    /* 0x57d7: local.get $local_5 */
    /* 0x57d9: local.get $local_18 */
    /* 0x57db: wasm.op_0x94  */
    /* 0x57dc: wasm.op_0x92  */
    /* 0x57dd: local.get $local_6 */
    /* 0x57df: local.get $local_17 */
    /* 0x57e1: wasm.op_0x94  */
    /* 0x57e2: wasm.op_0x92  */
    /* 0x57e3: wasm.op_0x38  */
    /* 0x57e4: block 0x28 */
    /* 0x57e6: local.get $local_0 */
    /* 0x57e8: local.get $local_3 */
    /* 0x57ea: local.get $local_15 */
    /* 0x57ec: wasm.op_0x94  */
    /* 0x57ed: local.get $local_4 */
    /* 0x57ef: local.get $local_16 */
    /* 0x57f1: wasm.op_0x94  */
    /* 0x57f2: wasm.op_0x92  */
    /* 0x57f3: local.get $local_5 */
    /* 0x57f5: local.get $local_14 */
    /* 0x57f7: wasm.op_0x94  */
    /* 0x57f8: wasm.op_0x92  */
    /* 0x57f9: local.get $local_6 */
    /* 0x57fb: local.get $local_13 */
    /* 0x57fd: wasm.op_0x94  */
    /* 0x57fe: wasm.op_0x92  */
    /* 0x57ff: wasm.op_0x38  */
    /* 0x5800: block 0x24 */
    /* 0x5802: local.get $local_0 */
    /* 0x5804: local.get $local_3 */
    /* 0x5806: local.get $local_11 */
    /* 0x5808: wasm.op_0x94  */
    /* 0x5809: local.get $local_4 */
    /* 0x580b: local.get $local_12 */
    /* 0x580d: wasm.op_0x94  */
    /* 0x580e: wasm.op_0x92  */
    /* 0x580f: local.get $local_5 */
    /* 0x5811: local.get $local_10 */
    /* 0x5813: wasm.op_0x94  */
    /* 0x5814: wasm.op_0x92  */
    /* 0x5815: local.get $local_6 */
    /* 0x5817: local.get $local_9 */
    /* 0x5819: wasm.op_0x94  */
    /* 0x581a: wasm.op_0x92  */
    /* 0x581b: wasm.op_0x38  */
    /* 0x581c: block 0x20 */
    /* 0x581e: local.get $local_0 */
    /* 0x5820: local.get $local_7 */
    /* 0x5822: local.get $local_2 */
    /* 0x5824: wasm.op_0x2a  */
    /* 0x5825: block 0x30 */
    /* 0x5827: local.tee $local_3 */
    /* 0x5829: wasm.op_0x94  */
    /* 0x582a: local.get $local_8 */
    /* 0x582c: local.get $local_2 */
    /* 0x582e: wasm.op_0x2a  */
    /* 0x582f: block 0x34 */
    /* 0x5831: local.tee $local_7 */
    /* 0x5833: wasm.op_0x94  */
    /* 0x5834: wasm.op_0x92  */
    /* 0x5835: local.get $local_21 */
    /* 0x5837: local.get $local_2 */
    /* 0x5839: wasm.op_0x2a  */
    /* 0x583a: block 0x38 */
    /* 0x583c: local.tee $local_4 */
    /* 0x583e: wasm.op_0x94  */
    /* 0x583f: wasm.op_0x92  */
    /* 0x5840: local.get $local_22 */
    /* 0x5842: local.get $local_2 */
    /* 0x5844: wasm.op_0x2a  */
    /* 0x5845: block 0x3c */
    /* 0x5847: local.tee $local_8 */
    /* 0x5849: wasm.op_0x94  */
    /* 0x584a: wasm.op_0x92  */
    /* 0x584b: wasm.op_0x38  */
    /* 0x584c: block 0x3c */
    /* 0x584e: local.get $local_0 */
    /* 0x5850: local.get $local_3 */
    /* 0x5852: local.get $local_19 */
    /* 0x5854: wasm.op_0x94  */
    /* 0x5855: local.get $local_7 */
    /* 0x5857: local.get $local_20 */
    /* 0x5859: wasm.op_0x94  */
    /* 0x585a: wasm.op_0x92  */
    /* 0x585b: local.get $local_4 */
    /* 0x585d: local.get $local_18 */
    /* 0x585f: wasm.op_0x94  */
    /* 0x5860: wasm.op_0x92  */
    /* 0x5861: local.get $local_8 */
    /* 0x5863: local.get $local_17 */
    /* 0x5865: wasm.op_0x94  */
    /* 0x5866: wasm.op_0x92  */
    /* 0x5867: wasm.op_0x38  */
    /* 0x5868: block 0x38 */
    /* 0x586a: local.get $local_0 */
    /* 0x586c: local.get $local_3 */
    /* 0x586e: local.get $local_15 */
    /* 0x5870: wasm.op_0x94  */
    /* 0x5871: local.get $local_7 */
    /* 0x5873: local.get $local_16 */
    /* 0x5875: wasm.op_0x94  */
    /* 0x5876: wasm.op_0x92  */
    /* 0x5877: local.get $local_4 */
    /* 0x5879: local.get $local_14 */
    /* 0x587b: wasm.op_0x94  */
    /* 0x587c: wasm.op_0x92  */
    /* 0x587d: local.get $local_8 */
    /* 0x587f: local.get $local_13 */
    /* 0x5881: wasm.op_0x94  */
    /* 0x5882: wasm.op_0x92  */
    /* 0x5883: wasm.op_0x38  */
    /* 0x5884: block 0x34 */
    /* 0x5886: local.get $local_0 */
    /* 0x5888: local.get $local_3 */
    /* 0x588a: local.get $local_11 */
    /* 0x588c: wasm.op_0x94  */
    /* 0x588d: local.get $local_7 */
    /* 0x588f: local.get $local_12 */
    /* 0x5891: wasm.op_0x94  */
    /* 0x5892: wasm.op_0x92  */
    /* 0x5893: local.get $local_4 */
    /* 0x5895: local.get $local_10 */
    /* 0x5897: wasm.op_0x94  */
    /* 0x5898: wasm.op_0x92  */
    /* 0x5899: local.get $local_8 */
    /* 0x589b: local.get $local_9 */
    /* 0x589d: wasm.op_0x94  */
    /* 0x589e: wasm.op_0x92  */
    /* 0x589f: wasm.op_0x38  */
    /* 0x58a0: block 0x30 */
    return r0;
}

// ── wasm_func_293 @ 0x58a5 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_293 ───
int64_t wasm_func_293(int64_t arg0, int64_t arg1) {
    /* 0x58aa: global.get $global_0 */
    /* 0x58ac: i32.const 336 */
    /* 0x58af: i32.sub  */
    /* 0x58b0: local.tee $local_5 */
    /* 0x58b2: global.get $global_4 */
    /* 0x58b4: i32.gt_u  */
    /* 0x58b5: local.get $local_5 */
    /* 0x58b7: global.get $global_5 */
    /* 0x58b9: i32.lt_u  */
    /* 0x58ba: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x58bd: local.get $local_5 */
    r0 = imp_d(r0, r1);
    /* 0x58c1: end  */
    /* 0x58c2: local.get $local_5 */
    /* 0x58c4: global.set $global_0 */
    /* 0x58c6: local.get $local_4 */
    /* 0x58c8: i64.const 0xffffffffffff */
    /* 0x58d0: i64.and  */
    /* 0x58d1: local.set $local_11 */
    /* 0x58d3: local.get $local_2 */
    /* 0x58d5: i64.const 0xffffffffffff */
    /* 0x58dd: i64.and  */
    /* 0x58de: local.set $local_10 */
    /* 0x58e0: local.get $local_2 */
    /* 0x58e2: local.get $local_4 */
    /* 0x58e4: i64.xor  */
    /* 0x58e5: i64.const 0x8000000000000000 */
    /* 0x58f0: i64.and  */
    /* 0x58f1: local.set $local_12 */
    /* 0x58f3: local.get $local_4 */
    /* 0x58f5: i64.const 0x30 */
    /* 0x58f7: i64.shr_u  */
    /* 0x58f8: i32.wrap_i64  */
    /* 0x58f9: i32.const 32767 */
    /* 0x58fd: i32.and  */
    /* 0x58fe: local.set $local_7 */
    /* 0x5900: block 0x40 */
    /* 0x5902: block 0x40 */
    /* 0x5904: local.get $local_2 */
    /* 0x5906: i64.const 0x30 */
    /* 0x5908: i64.shr_u  */
    /* 0x5909: i32.wrap_i64  */
    /* 0x590a: i32.const 32767 */
    /* 0x590e: i32.and  */
    /* 0x590f: local.tee $local_8 */
    /* 0x5911: i32.const 32767 */
    /* 0x5915: i32.sub  */
    /* 0x5916: i32.const -32766 */
    /* 0x591a: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x591d: local.get $local_7 */
    /* 0x591f: i32.const 32767 */
    /* 0x5923: i32.sub  */
    /* 0x5924: i32.const -32767 */
    /* 0x5928: i32.gt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x592b: end  */
    /* 0x592c: local.get $local_1 */
    /* 0x592e: i64.eqz  */
    /* 0x592f: local.get $local_2 */
    /* 0x5931: i64.const 0x7fffffffffffffff */
    /* 0x593c: i64.and  */
    /* 0x593d: local.tee $local_14 */
    /* 0x593f: i64.const 0x7fff000000000000 */
    /* 0x594a: wasm.op_0x54  */
    /* 0x594b: local.get $local_14 */
    /* 0x594d: i64.const 0x7fff000000000000 */
    /* 0x5958: i64.eq  */
    /* 0x5959: select  */
    /* 0x595a: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x595d: local.get $local_2 */
    /* 0x595f: i64.const 0x800000000000 */
    /* 0x5967: i64.or  */
    /* 0x5968: local.set $local_12 */
    if (r0 != 0) { goto 2; }
    /* 0x596c: end  */
    /* 0x596d: local.get $local_3 */
    /* 0x596f: i64.eqz  */
    /* 0x5970: local.get $local_4 */
    /* 0x5972: i64.const 0x7fffffffffffffff */
    /* 0x597d: i64.and  */
    /* 0x597e: local.tee $local_2 */
    /* 0x5980: i64.const 0x7fff000000000000 */
    /* 0x598b: wasm.op_0x54  */
    /* 0x598c: local.get $local_2 */
    /* 0x598e: i64.const 0x7fff000000000000 */
    /* 0x5999: i64.eq  */
    /* 0x599a: select  */
    /* 0x599b: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x599e: local.get $local_4 */
    /* 0x59a0: i64.const 0x800000000000 */
    /* 0x59a8: i64.or  */
    /* 0x59a9: local.set $local_12 */
    /* 0x59ab: local.get $local_3 */
    /* 0x59ad: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x59b1: end  */
    /* 0x59b2: local.get $local_1 */
    /* 0x59b4: local.get $local_14 */
    /* 0x59b6: i64.const 0x7fff000000000000 */
    /* 0x59c1: i64.xor  */
    /* 0x59c2: i64.or  */
    /* 0x59c3: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x59c6: local.get $local_3 */
    /* 0x59c8: local.get $local_2 */
    /* 0x59ca: i64.const 0x7fff000000000000 */
    /* 0x59d5: i64.xor  */
    /* 0x59d6: i64.or  */
    /* 0x59d7: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x59da: i64.const 0x0 */
    /* 0x59dc: local.set $local_1 */
    /* 0x59de: i64.const 0x7fff800000000000 */
    /* 0x59e9: local.set $local_12 */
    if (r0 != 0) { goto 3; }
    /* 0x59ed: end  */
    /* 0x59ee: local.get $local_12 */
    /* 0x59f0: i64.const 0x7fff000000000000 */
    /* 0x59fb: i64.or  */
    /* 0x59fc: local.set $local_12 */
    /* 0x59fe: i64.const 0x0 */
    /* 0x5a00: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x5a04: end  */
    /* 0x5a05: local.get $local_3 */
    /* 0x5a07: local.get $local_2 */
    /* 0x5a09: i64.const 0x7fff000000000000 */
    /* 0x5a14: i64.xor  */
    /* 0x5a15: i64.or  */
    /* 0x5a16: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5a19: i64.const 0x0 */
    /* 0x5a1b: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x5a1f: end  */
    /* 0x5a20: local.get $local_1 */
    /* 0x5a22: local.get $local_14 */
    /* 0x5a24: i64.or  */
    /* 0x5a25: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5a28: i64.const 0x7fff800000000000 */
    /* 0x5a33: local.get $local_12 */
    /* 0x5a35: local.get $local_2 */
    /* 0x5a37: local.get $local_3 */
    /* 0x5a39: i64.or  */
    /* 0x5a3a: i64.eqz  */
    /* 0x5a3b: select  */
    /* 0x5a3c: local.set $local_12 */
    /* 0x5a3e: i64.const 0x0 */
    /* 0x5a40: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x5a44: end  */
    /* 0x5a45: local.get $local_2 */
    /* 0x5a47: local.get $local_3 */
    /* 0x5a49: i64.or  */
    /* 0x5a4a: i64.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5a4d: local.get $local_12 */
    /* 0x5a4f: i64.const 0x7fff000000000000 */
    /* 0x5a5a: i64.or  */
    /* 0x5a5b: local.set $local_12 */
    /* 0x5a5d: i64.const 0x0 */
    /* 0x5a5f: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x5a63: end  */
    /* 0x5a64: local.get $local_14 */
    /* 0x5a66: i64.const 0xffffffffffff */
    /* 0x5a6e: wasm.op_0x58  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5a71: local.get $local_5 */
    /* 0x5a73: i32.const 320 */
    /* 0x5a76: i32.add  */
    /* 0x5a77: local.get $local_1 */
    /* 0x5a79: local.get $local_10 */
    /* 0x5a7b: local.get $local_1 */
    /* 0x5a7d: local.get $local_10 */
    /* 0x5a7f: local.get $local_10 */
    /* 0x5a81: i64.eqz  */
    /* 0x5a82: local.tee $local_6 */
    /* 0x5a84: select  */
    /* 0x5a85: wasm.op_0x79  */
    /* 0x5a86: i64.const 0x40 */
    /* 0x5a89: i64.const 0x0 */
    /* 0x5a8b: local.get $local_6 */
    /* 0x5a8d: select  */
    /* 0x5a8e: i64.add  */
    /* 0x5a8f: i32.wrap_i64  */
    /* 0x5a90: local.tee $local_6 */
    /* 0x5a92: i32.const 15 */
    /* 0x5a94: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x5a98: i32.const 16 */
    /* 0x5a9a: local.get $local_6 */
    /* 0x5a9c: i32.sub  */
    /* 0x5a9d: local.set $local_6 */
    /* 0x5a9f: local.get $local_5 */
    /* 0x5aa1: i64.load offset=328, align=3 */
    /* 0x5aa5: local.set $local_10 */
    /* 0x5aa7: local.get $local_5 */
    /* 0x5aa9: i64.load offset=320, align=3 */
    /* 0x5aad: local.set $local_1 */
    /* 0x5aaf: end  */
    /* 0x5ab0: local.get $local_2 */
    /* 0x5ab2: i64.const 0xffffffffffff */
    /* 0x5aba: wasm.op_0x56  */
    if (r0 != 0) { goto 0; }
    /* 0x5abd: local.get $local_5 */
    /* 0x5abf: i32.const 304 */
    /* 0x5ac2: i32.add  */
    /* 0x5ac3: local.get $local_3 */
    /* 0x5ac5: local.get $local_11 */
    /* 0x5ac7: local.get $local_3 */
    /* 0x5ac9: local.get $local_11 */
    /* 0x5acb: local.get $local_11 */
    /* 0x5acd: i64.eqz  */
    /* 0x5ace: local.tee $local_9 */
    /* 0x5ad0: select  */
    /* 0x5ad1: wasm.op_0x79  */
    /* 0x5ad2: i64.const 0x40 */
    /* 0x5ad5: i64.const 0x0 */
    /* 0x5ad7: local.get $local_9 */
    /* 0x5ad9: select  */
    /* 0x5ada: i64.add  */
    /* 0x5adb: i32.wrap_i64  */
    /* 0x5adc: local.tee $local_9 */
    /* 0x5ade: i32.const 15 */
    /* 0x5ae0: i32.sub  */
    r0 = wasm_func_351(r0, r1);
    /* 0x5ae4: local.get $local_6 */
    /* 0x5ae6: local.get $local_9 */
    /* 0x5ae8: i32.add  */
    /* 0x5ae9: i32.const 16 */
    /* 0x5aeb: i32.sub  */
    /* 0x5aec: local.set $local_6 */
    /* 0x5aee: local.get $local_5 */
    /* 0x5af0: i64.load offset=312, align=3 */
    /* 0x5af4: local.set $local_11 */
    /* 0x5af6: local.get $local_5 */
    /* 0x5af8: i64.load offset=304, align=3 */
    /* 0x5afc: local.set $local_3 */
    /* 0x5afe: end  */
    /* 0x5aff: local.get $local_5 */
    /* 0x5b01: i32.const 288 */
    /* 0x5b04: i32.add  */
    /* 0x5b05: local.get $local_11 */
    /* 0x5b07: i64.const 0x1000000000000 */
    /* 0x5b10: i64.or  */
    /* 0x5b11: local.tee $local_18 */
    /* 0x5b13: i64.const 0xf */
    /* 0x5b15: i64.shl  */
    /* 0x5b16: local.get $local_3 */
    /* 0x5b18: i64.const 0x31 */
    /* 0x5b1a: i64.shr_u  */
    /* 0x5b1b: i64.or  */
    /* 0x5b1c: local.tee $local_2 */
    /* 0x5b1e: i64.const 0x0 */
    /* 0x5b20: i64.const 0x7504f33300000000 */
    /* 0x5b2b: local.get $local_2 */
    /* 0x5b2d: i64.sub  */
    /* 0x5b2e: local.tee $local_4 */
    /* 0x5b30: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5b35: local.get $local_5 */
    /* 0x5b37: i32.const 272 */
    /* 0x5b3a: i32.add  */
    /* 0x5b3b: i64.const 0x0 */
    /* 0x5b3d: local.get $local_5 */
    /* 0x5b3f: i64.load offset=296, align=3 */
    /* 0x5b43: i64.sub  */
    /* 0x5b44: i64.const 0x0 */
    /* 0x5b46: local.get $local_4 */
    /* 0x5b48: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5b4d: local.get $local_5 */
    /* 0x5b4f: i32.const 256 */
    /* 0x5b52: i32.add  */
    /* 0x5b53: local.get $local_5 */
    /* 0x5b55: i64.load offset=280, align=3 */
    /* 0x5b59: i64.const 0x1 */
    /* 0x5b5b: i64.shl  */
    /* 0x5b5c: local.get $local_5 */
    /* 0x5b5e: i64.load offset=272, align=3 */
    /* 0x5b62: i64.const 0x3f */
    /* 0x5b64: i64.shr_u  */
    /* 0x5b65: i64.or  */
    /* 0x5b66: local.tee $local_4 */
    /* 0x5b68: i64.const 0x0 */
    /* 0x5b6a: local.get $local_2 */
    /* 0x5b6c: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5b71: local.get $local_5 */
    /* 0x5b73: i32.const 240 */
    /* 0x5b76: i32.add  */
    /* 0x5b77: i64.const 0x0 */
    /* 0x5b79: local.get $local_5 */
    /* 0x5b7b: i64.load offset=264, align=3 */
    /* 0x5b7f: i64.sub  */
    /* 0x5b80: i64.const 0x0 */
    /* 0x5b82: local.get $local_4 */
    /* 0x5b84: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5b89: local.get $local_5 */
    /* 0x5b8b: i32.const 224 */
    /* 0x5b8e: i32.add  */
    /* 0x5b8f: local.get $local_5 */
    /* 0x5b91: i64.load offset=248, align=3 */
    /* 0x5b95: i64.const 0x1 */
    /* 0x5b97: i64.shl  */
    /* 0x5b98: local.get $local_5 */
    /* 0x5b9a: i64.load offset=240, align=3 */
    /* 0x5b9e: i64.const 0x3f */
    /* 0x5ba0: i64.shr_u  */
    /* 0x5ba1: i64.or  */
    /* 0x5ba2: local.tee $local_4 */
    /* 0x5ba4: i64.const 0x0 */
    /* 0x5ba6: local.get $local_2 */
    /* 0x5ba8: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5bad: local.get $local_5 */
    /* 0x5baf: i32.const 208 */
    /* 0x5bb2: i32.add  */
    /* 0x5bb3: i64.const 0x0 */
    /* 0x5bb5: local.get $local_5 */
    /* 0x5bb7: i64.load offset=232, align=3 */
    /* 0x5bbb: i64.sub  */
    /* 0x5bbc: i64.const 0x0 */
    /* 0x5bbe: local.get $local_4 */
    /* 0x5bc0: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5bc5: local.get $local_5 */
    /* 0x5bc7: i32.const 192 */
    /* 0x5bca: i32.add  */
    /* 0x5bcb: local.get $local_5 */
    /* 0x5bcd: i64.load offset=216, align=3 */
    /* 0x5bd1: i64.const 0x1 */
    /* 0x5bd3: i64.shl  */
    /* 0x5bd4: local.get $local_5 */
    /* 0x5bd6: i64.load offset=208, align=3 */
    /* 0x5bda: i64.const 0x3f */
    /* 0x5bdc: i64.shr_u  */
    /* 0x5bdd: i64.or  */
    /* 0x5bde: local.tee $local_4 */
    /* 0x5be0: i64.const 0x0 */
    /* 0x5be2: local.get $local_2 */
    /* 0x5be4: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5be9: local.get $local_5 */
    /* 0x5beb: i32.const 176 */
    /* 0x5bee: i32.add  */
    /* 0x5bef: i64.const 0x0 */
    /* 0x5bf1: local.get $local_5 */
    /* 0x5bf3: i64.load offset=200, align=3 */
    /* 0x5bf7: i64.sub  */
    /* 0x5bf8: i64.const 0x0 */
    /* 0x5bfa: local.get $local_4 */
    /* 0x5bfc: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5c01: local.get $local_5 */
    /* 0x5c03: i32.const 160 */
    /* 0x5c06: i32.add  */
    /* 0x5c07: local.get $local_2 */
    /* 0x5c09: i64.const 0x0 */
    /* 0x5c0b: local.get $local_5 */
    /* 0x5c0d: i64.load offset=184, align=3 */
    /* 0x5c11: i64.const 0x1 */
    /* 0x5c13: i64.shl  */
    /* 0x5c14: local.get $local_5 */
    /* 0x5c16: i64.load offset=176, align=3 */
    /* 0x5c1a: i64.const 0x3f */
    /* 0x5c1c: i64.shr_u  */
    /* 0x5c1d: i64.or  */
    /* 0x5c1e: i64.const 0x1 */
    /* 0x5c20: i64.sub  */
    /* 0x5c21: local.tee $local_2 */
    /* 0x5c23: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5c28: local.get $local_5 */
    /* 0x5c2a: i32.const 144 */
    /* 0x5c2d: i32.add  */
    /* 0x5c2e: local.get $local_3 */
    /* 0x5c30: i64.const 0xf */
    /* 0x5c32: i64.shl  */
    /* 0x5c33: i64.const 0x0 */
    /* 0x5c35: local.get $local_2 */
    /* 0x5c37: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5c3c: local.get $local_5 */
    /* 0x5c3e: i32.const 112 */
    /* 0x5c41: i32.add  */
    /* 0x5c42: local.get $local_2 */
    /* 0x5c44: i64.const 0x0 */
    /* 0x5c46: i64.const 0x0 */
    /* 0x5c48: local.get $local_5 */
    /* 0x5c4a: i64.load offset=168, align=3 */
    /* 0x5c4e: local.get $local_5 */
    /* 0x5c50: i64.load offset=160, align=3 */
    /* 0x5c54: local.tee $local_14 */
    /* 0x5c56: local.get $local_5 */
    /* 0x5c58: i64.load offset=152, align=3 */
    /* 0x5c5c: i64.add  */
    /* 0x5c5d: local.tee $local_4 */
    /* 0x5c5f: local.get $local_14 */
    /* 0x5c61: wasm.op_0x54  */
    /* 0x5c62: i64.extend_i32_u  */
    /* 0x5c63: i64.add  */
    /* 0x5c64: local.get $local_4 */
    /* 0x5c66: i64.const 0x1 */
    /* 0x5c68: wasm.op_0x56  */
    /* 0x5c69: i64.extend_i32_u  */
    /* 0x5c6a: i64.add  */
    /* 0x5c6b: i64.sub  */
    /* 0x5c6c: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5c71: local.get $local_5 */
    /* 0x5c73: i32.const 128 */
    /* 0x5c76: i32.add  */
    /* 0x5c77: i64.const 0x1 */
    /* 0x5c79: local.get $local_4 */
    /* 0x5c7b: i64.sub  */
    /* 0x5c7c: i64.const 0x0 */
    /* 0x5c7e: local.get $local_2 */
    /* 0x5c80: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5c85: local.get $local_6 */
    /* 0x5c87: local.get $local_8 */
    /* 0x5c89: local.get $local_7 */
    /* 0x5c8b: i32.sub  */
    /* 0x5c8c: i32.add  */
    /* 0x5c8d: local.tee $local_8 */
    /* 0x5c8f: i32.const 16383 */
    /* 0x5c93: i32.add  */
    /* 0x5c94: local.set $local_6 */
    /* 0x5c96: block 0x7e */
    /* 0x5c98: local.get $local_5 */
    /* 0x5c9a: i64.load offset=112, align=3 */
    /* 0x5c9d: local.tee $local_19 */
    /* 0x5c9f: i64.const 0x1 */
    /* 0x5ca1: i64.shl  */
    /* 0x5ca2: local.tee $local_13 */
    /* 0x5ca4: local.get $local_5 */
    /* 0x5ca6: i64.load offset=136, align=3 */
    /* 0x5caa: local.tee $local_15 */
    /* 0x5cac: i64.const 0x1 */
    /* 0x5cae: i64.shl  */
    /* 0x5caf: local.get $local_5 */
    /* 0x5cb1: i64.load offset=128, align=3 */
    /* 0x5cb5: i64.const 0x3f */
    /* 0x5cb7: i64.shr_u  */
    /* 0x5cb8: i64.or  */
    /* 0x5cb9: i64.add  */
    /* 0x5cba: local.tee $local_16 */
    /* 0x5cbc: i64.const 0x3667 */
    /* 0x5cc0: i64.sub  */
    /* 0x5cc1: local.tee $local_20 */
    /* 0x5cc3: i64.const 0x20 */
    /* 0x5cc5: i64.shr_u  */
    /* 0x5cc6: local.tee $local_2 */
    /* 0x5cc8: local.get $local_10 */
    /* 0x5cca: i64.const 0x1000000000000 */
    /* 0x5cd3: i64.or  */
    /* 0x5cd4: local.tee $local_21 */
    /* 0x5cd6: i64.const 0x1 */
    /* 0x5cd8: i64.shl  */
    /* 0x5cd9: local.tee $local_22 */
    /* 0x5cdb: i64.const 0x20 */
    /* 0x5cdd: i64.shr_u  */
    /* 0x5cde: local.tee $local_4 */
    /* 0x5ce0: i64.mul  */
    /* 0x5ce1: local.tee $local_17 */
    /* 0x5ce3: local.get $local_1 */
    /* 0x5ce5: i64.const 0x1 */
    /* 0x5ce7: i64.shl  */
    /* 0x5ce8: local.tee $local_14 */
    /* 0x5cea: i64.const 0x20 */
    /* 0x5cec: i64.shr_u  */
    /* 0x5ced: local.tee $local_11 */
    /* 0x5cef: local.get $local_16 */
    /* 0x5cf1: local.get $local_20 */
    /* 0x5cf3: wasm.op_0x56  */
    /* 0x5cf4: i64.extend_i32_u  */
    /* 0x5cf5: local.get $local_13 */
    /* 0x5cf7: local.get $local_16 */
    /* 0x5cf9: wasm.op_0x56  */
    /* 0x5cfa: i64.extend_i32_u  */
    /* 0x5cfb: local.get $local_5 */
    /* 0x5cfd: i64.load offset=120, align=3 */
    /* 0x5d00: i64.const 0x1 */
    /* 0x5d02: i64.shl  */
    /* 0x5d03: local.get $local_19 */
    /* 0x5d05: i64.const 0x3f */
    /* 0x5d07: i64.shr_u  */
    /* 0x5d08: i64.or  */
    /* 0x5d09: local.get $local_15 */
    /* 0x5d0b: i64.const 0x3f */
    /* 0x5d0d: i64.shr_u  */
    /* 0x5d0e: i64.add  */
    /* 0x5d0f: i64.add  */
    /* 0x5d10: i64.add  */
    /* 0x5d11: i64.const 0x1 */
    /* 0x5d13: i64.sub  */
    /* 0x5d14: local.tee $local_19 */
    /* 0x5d16: i64.const 0x20 */
    /* 0x5d18: i64.shr_u  */
    /* 0x5d19: local.tee $local_16 */
    /* 0x5d1b: i64.mul  */
    /* 0x5d1c: i64.add  */
    /* 0x5d1d: local.tee $local_13 */
    /* 0x5d1f: local.get $local_17 */
    /* 0x5d21: wasm.op_0x54  */
    /* 0x5d22: i64.extend_i32_u  */
    /* 0x5d23: local.get $local_13 */
    /* 0x5d25: local.get $local_13 */
    /* 0x5d27: local.get $local_19 */
    /* 0x5d29: i64.const 0xffffffff */
    /* 0x5d2f: i64.and  */
    /* 0x5d30: local.tee $local_19 */
    /* 0x5d32: local.get $local_1 */
    /* 0x5d34: i64.const 0x3f */
    /* 0x5d36: i64.shr_u  */
    /* 0x5d37: local.tee $local_23 */
    /* 0x5d39: local.get $local_10 */
    /* 0x5d3b: i64.const 0x1 */
    /* 0x5d3d: i64.shl  */
    /* 0x5d3e: i64.or  */
    /* 0x5d3f: i64.const 0xffffffff */
    /* 0x5d45: i64.and  */
    /* 0x5d46: local.tee $local_10 */
    /* 0x5d48: i64.mul  */
    /* 0x5d49: i64.add  */
    /* 0x5d4a: local.tee $local_13 */
    /* 0x5d4c: wasm.op_0x56  */
    /* 0x5d4d: i64.extend_i32_u  */
    /* 0x5d4e: i64.add  */
    /* 0x5d4f: local.get $local_4 */
    /* 0x5d51: local.get $local_16 */
    /* 0x5d53: i64.mul  */
    /* 0x5d54: i64.add  */
    /* 0x5d55: local.get $local_4 */
    /* 0x5d57: local.get $local_19 */
    /* 0x5d59: i64.mul  */
    /* 0x5d5a: local.tee $local_17 */
    /* 0x5d5c: local.get $local_10 */
    /* 0x5d5e: local.get $local_16 */
    /* 0x5d60: i64.mul  */
    /* 0x5d61: i64.add  */
    /* 0x5d62: local.tee $local_15 */
    /* 0x5d64: local.get $local_17 */
    /* 0x5d66: wasm.op_0x54  */
    /* 0x5d67: i64.extend_i32_u  */
    /* 0x5d68: i64.const 0x20 */
    /* 0x5d6a: i64.shl  */
    /* 0x5d6b: local.get $local_15 */
    /* 0x5d6d: i64.const 0x20 */
    /* 0x5d6f: i64.shr_u  */
    /* 0x5d70: i64.or  */
    /* 0x5d71: i64.add  */
    /* 0x5d72: local.get $local_13 */
    /* 0x5d74: local.get $local_15 */
    /* 0x5d76: i64.const 0x20 */
    /* 0x5d78: i64.shl  */
    /* 0x5d79: i64.add  */
    /* 0x5d7a: local.tee $local_15 */
    /* 0x5d7c: local.get $local_13 */
    /* 0x5d7e: wasm.op_0x54  */
    /* 0x5d7f: i64.extend_i32_u  */
    /* 0x5d80: i64.add  */
    /* 0x5d81: local.get $local_15 */
    /* 0x5d83: local.get $local_15 */
    /* 0x5d85: local.get $local_20 */
    /* 0x5d87: i64.const 0xffffffff */
    /* 0x5d8d: i64.and  */
    /* 0x5d8e: local.tee $local_20 */
    /* 0x5d90: local.get $local_10 */
    /* 0x5d92: i64.mul  */
    /* 0x5d93: local.tee $local_13 */
    /* 0x5d95: local.get $local_2 */
    /* 0x5d97: local.get $local_11 */
    /* 0x5d99: i64.mul  */
    /* 0x5d9a: i64.add  */
    /* 0x5d9b: local.tee $local_17 */
    /* 0x5d9d: local.get $local_13 */
    /* 0x5d9f: wasm.op_0x54  */
    /* 0x5da0: i64.extend_i32_u  */
    /* 0x5da1: local.get $local_17 */
    /* 0x5da3: local.get $local_17 */
    /* 0x5da5: local.get $local_19 */
    /* 0x5da7: local.get $local_14 */
    /* 0x5da9: i64.const 0xfffffffe */
    /* 0x5daf: i64.and  */
    /* 0x5db0: local.tee $local_13 */
    /* 0x5db2: i64.mul  */
    /* 0x5db3: i64.add  */
    /* 0x5db4: local.tee $local_17 */
    /* 0x5db6: wasm.op_0x56  */
    /* 0x5db7: i64.extend_i32_u  */
    /* 0x5db8: i64.add  */
    /* 0x5db9: i64.add  */
    /* 0x5dba: local.tee $local_15 */
    /* 0x5dbc: wasm.op_0x56  */
    /* 0x5dbd: i64.extend_i32_u  */
    /* 0x5dbe: i64.add  */
    /* 0x5dbf: local.get $local_15 */
    /* 0x5dc1: local.get $local_4 */
    /* 0x5dc3: local.get $local_20 */
    /* 0x5dc5: i64.mul  */
    /* 0x5dc6: local.tee $local_24 */
    /* 0x5dc8: local.get $local_13 */
    /* 0x5dca: local.get $local_16 */
    /* 0x5dcc: i64.mul  */
    /* 0x5dcd: i64.add  */
    /* 0x5dce: local.tee $local_4 */
    /* 0x5dd0: local.get $local_2 */
    /* 0x5dd2: local.get $local_10 */
    /* 0x5dd4: i64.mul  */
    /* 0x5dd5: i64.add  */
    /* 0x5dd6: local.tee $local_10 */
    /* 0x5dd8: local.get $local_11 */
    /* 0x5dda: local.get $local_19 */
    /* 0x5ddc: i64.mul  */
    /* 0x5ddd: i64.add  */
    /* 0x5dde: local.tee $local_16 */
    /* 0x5de0: i64.const 0x20 */
    /* 0x5de2: i64.shr_u  */
    /* 0x5de3: local.get $local_10 */
    /* 0x5de5: local.get $local_16 */
    /* 0x5de7: wasm.op_0x56  */
    /* 0x5de8: i64.extend_i32_u  */
    /* 0x5de9: local.get $local_4 */
    /* 0x5deb: local.get $local_24 */
    /* 0x5ded: wasm.op_0x54  */
    /* 0x5dee: i64.extend_i32_u  */
    /* 0x5def: local.get $local_4 */
    /* 0x5df1: local.get $local_10 */
    /* 0x5df3: wasm.op_0x56  */
    /* 0x5df4: i64.extend_i32_u  */
    /* 0x5df5: i64.add  */
    /* 0x5df6: i64.add  */
    /* 0x5df7: i64.const 0x20 */
    /* 0x5df9: i64.shl  */
    /* 0x5dfa: i64.or  */
    /* 0x5dfb: i64.add  */
    /* 0x5dfc: local.tee $local_4 */
    /* 0x5dfe: local.get $local_15 */
    /* 0x5e00: wasm.op_0x54  */
    /* 0x5e01: i64.extend_i32_u  */
    /* 0x5e02: i64.add  */
    /* 0x5e03: local.get $local_4 */
    /* 0x5e05: local.get $local_4 */
    /* 0x5e07: local.get $local_17 */
    /* 0x5e09: local.get $local_2 */
    /* 0x5e0b: local.get $local_13 */
    /* 0x5e0d: i64.mul  */
    /* 0x5e0e: local.tee $local_10 */
    /* 0x5e10: local.get $local_11 */
    /* 0x5e12: local.get $local_20 */
    /* 0x5e14: i64.mul  */
    /* 0x5e15: i64.add  */
    /* 0x5e16: local.tee $local_2 */
    /* 0x5e18: i64.const 0x20 */
    /* 0x5e1a: i64.shr_u  */
    /* 0x5e1b: local.get $local_2 */
    /* 0x5e1d: local.get $local_10 */
    /* 0x5e1f: wasm.op_0x54  */
    /* 0x5e20: i64.extend_i32_u  */
    /* 0x5e21: i64.const 0x20 */
    /* 0x5e23: i64.shl  */
    /* 0x5e24: i64.or  */
    /* 0x5e25: i64.add  */
    /* 0x5e26: local.tee $local_10 */
    /* 0x5e28: local.get $local_17 */
    /* 0x5e2a: wasm.op_0x54  */
    /* 0x5e2b: i64.extend_i32_u  */
    /* 0x5e2c: local.get $local_10 */
    /* 0x5e2e: local.get $local_10 */
    /* 0x5e30: local.get $local_16 */
    /* 0x5e32: i64.const 0x20 */
    /* 0x5e34: i64.shl  */
    /* 0x5e35: i64.add  */
    /* 0x5e36: local.tee $local_10 */
    /* 0x5e38: wasm.op_0x56  */
    /* 0x5e39: i64.extend_i32_u  */
    /* 0x5e3a: i64.add  */
    /* 0x5e3b: i64.add  */
    /* 0x5e3c: local.tee $local_4 */
    /* 0x5e3e: wasm.op_0x56  */
    /* 0x5e3f: i64.extend_i32_u  */
    /* 0x5e40: i64.add  */
    /* 0x5e41: local.get $local_4 */
    /* 0x5e43: local.get $local_4 */
    /* 0x5e45: local.get $local_10 */
    /* 0x5e47: local.get $local_2 */
    /* 0x5e49: i64.const 0x20 */
    /* 0x5e4b: i64.shl  */
    /* 0x5e4c: local.tee $local_2 */
    /* 0x5e4e: local.get $local_13 */
    /* 0x5e50: local.get $local_20 */
    /* 0x5e52: i64.mul  */
    /* 0x5e53: i64.add  */
    /* 0x5e54: local.get $local_2 */
    /* 0x5e56: wasm.op_0x54  */
    /* 0x5e57: i64.extend_i32_u  */
    /* 0x5e58: i64.const 0xffffffffffffffff */
    /* 0x5e5a: i64.xor  */
    /* 0x5e5b: local.tee $local_2 */
    /* 0x5e5d: wasm.op_0x56  */
    /* 0x5e5e: local.get $local_2 */
    /* 0x5e60: local.get $local_10 */
    /* 0x5e62: i64.ne  */
    /* 0x5e63: i32.and  */
    /* 0x5e64: i64.extend_i32_u  */
    /* 0x5e65: i64.add  */
    /* 0x5e66: local.tee $local_4 */
    /* 0x5e68: wasm.op_0x56  */
    /* 0x5e69: i64.extend_i32_u  */
    /* 0x5e6a: i64.add  */
    /* 0x5e6b: local.tee $local_2 */
    /* 0x5e6d: i64.const 0x1ffffffffffff */
    /* 0x5e76: wasm.op_0x58  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5e79: local.get $local_22 */
    /* 0x5e7b: local.get $local_23 */
    /* 0x5e7d: i64.or  */
    /* 0x5e7e: local.set $local_21 */
    /* 0x5e80: local.get $local_5 */
    /* 0x5e82: i32.const 80 */
    /* 0x5e85: i32.add  */
    /* 0x5e86: local.get $local_4 */
    /* 0x5e88: local.get $local_2 */
    /* 0x5e8a: i64.const 0x1000000000000 */
    /* 0x5e93: wasm.op_0x54  */
    /* 0x5e94: local.tee $local_7 */
    /* 0x5e96: i64.extend_i32_u  */
    /* 0x5e97: local.tee $local_11 */
    /* 0x5e99: i64.shl  */
    /* 0x5e9a: local.tee $local_10 */
    /* 0x5e9c: local.get $local_2 */
    /* 0x5e9e: local.get $local_11 */
    /* 0x5ea0: i64.shl  */
    /* 0x5ea1: local.get $local_4 */
    /* 0x5ea3: i64.const 0x1 */
    /* 0x5ea5: i64.shr_u  */
    /* 0x5ea6: local.get $local_7 */
    /* 0x5ea8: i32.const 63 */
    /* 0x5eaa: i32.xor  */
    /* 0x5eab: i64.extend_i32_u  */
    /* 0x5eac: i64.shr_u  */
    /* 0x5ead: i64.or  */
    /* 0x5eae: local.tee $local_4 */
    /* 0x5eb0: local.get $local_3 */
    /* 0x5eb2: local.get $local_18 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5eb7: local.get $local_8 */
    /* 0x5eb9: i32.const 16382 */
    /* 0x5ebd: i32.add  */
    /* 0x5ebe: local.get $local_6 */
    /* 0x5ec0: local.get $local_7 */
    /* 0x5ec2: select  */
    /* 0x5ec3: i32.const 1 */
    /* 0x5ec5: i32.sub  */
    /* 0x5ec6: local.set $local_6 */
    /* 0x5ec8: local.get $local_1 */
    /* 0x5eca: i64.const 0x31 */
    /* 0x5ecc: i64.shl  */
    /* 0x5ecd: local.get $local_5 */
    /* 0x5ecf: i64.load offset=88, align=3 */
    /* 0x5ed2: i64.sub  */
    /* 0x5ed3: local.get $local_5 */
    /* 0x5ed5: i64.load offset=80, align=3 */
    /* 0x5ed8: local.tee $local_1 */
    /* 0x5eda: i64.const 0x0 */
    /* 0x5edc: i64.ne  */
    /* 0x5edd: i64.extend_i32_u  */
    /* 0x5ede: i64.sub  */
    /* 0x5edf: local.set $local_11 */
    /* 0x5ee1: i64.const 0x0 */
    /* 0x5ee3: local.get $local_1 */
    /* 0x5ee5: i64.sub  */
    if (r0 != 0) { goto 1; }
    /* 0x5ee8: end  */
    /* 0x5ee9: local.get $local_5 */
    /* 0x5eeb: i32.const 96 */
    /* 0x5eee: i32.add  */
    /* 0x5eef: local.get $local_2 */
    /* 0x5ef1: i64.const 0x3f */
    /* 0x5ef3: i64.shl  */
    /* 0x5ef4: local.get $local_4 */
    /* 0x5ef6: i64.const 0x1 */
    /* 0x5ef8: i64.shr_u  */
    /* 0x5ef9: i64.or  */
    /* 0x5efa: local.tee $local_10 */
    /* 0x5efc: local.get $local_2 */
    /* 0x5efe: i64.const 0x1 */
    /* 0x5f00: i64.shr_u  */
    /* 0x5f01: local.tee $local_4 */
    /* 0x5f03: local.get $local_3 */
    /* 0x5f05: local.get $local_18 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5f0a: local.get $local_1 */
    /* 0x5f0c: i64.const 0x30 */
    /* 0x5f0e: i64.shl  */
    /* 0x5f0f: local.get $local_5 */
    /* 0x5f11: i64.load offset=104, align=3 */
    /* 0x5f14: i64.sub  */
    /* 0x5f15: local.get $local_5 */
    /* 0x5f17: i64.load offset=96, align=3 */
    /* 0x5f1a: local.tee $local_2 */
    /* 0x5f1c: i64.const 0x0 */
    /* 0x5f1e: i64.ne  */
    /* 0x5f1f: i64.extend_i32_u  */
    /* 0x5f20: i64.sub  */
    /* 0x5f21: local.set $local_11 */
    /* 0x5f23: local.get $local_1 */
    /* 0x5f25: local.set $local_14 */
    /* 0x5f27: i64.const 0x0 */
    /* 0x5f29: local.get $local_2 */
    /* 0x5f2b: i64.sub  */
    /* 0x5f2c: end  */
    /* 0x5f2d: local.set $local_2 */
    /* 0x5f2f: local.get $local_6 */
    /* 0x5f31: i32.const 32767 */
    /* 0x5f35: i32.ge_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5f38: local.get $local_12 */
    /* 0x5f3a: i64.const 0x7fff000000000000 */
    /* 0x5f45: i64.or  */
    /* 0x5f46: local.set $local_12 */
    /* 0x5f48: i64.const 0x0 */
    /* 0x5f4a: local.set $local_1 */
    if (r0 != 0) { goto 1; }
    /* 0x5f4e: end  */
    /* 0x5f4f: block 0x7e */
    /* 0x5f51: local.get $local_6 */
    /* 0x5f53: i32.const 0 */
    /* 0x5f55: i32.gt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5f58: local.get $local_11 */
    /* 0x5f5a: i64.const 0x1 */
    /* 0x5f5c: i64.shl  */
    /* 0x5f5d: local.get $local_2 */
    /* 0x5f5f: i64.const 0x3f */
    /* 0x5f61: i64.shr_u  */
    /* 0x5f62: i64.or  */
    /* 0x5f63: local.set $local_1 */
    /* 0x5f65: local.get $local_4 */
    /* 0x5f67: i64.const 0xffffffffffff */
    /* 0x5f6f: i64.and  */
    /* 0x5f70: local.get $local_6 */
    /* 0x5f72: i64.extend_i32_u  */
    /* 0x5f73: i64.const 0x30 */
    /* 0x5f75: i64.shl  */
    /* 0x5f76: i64.or  */
    /* 0x5f77: local.set $local_11 */
    /* 0x5f79: local.get $local_2 */
    /* 0x5f7b: i64.const 0x1 */
    /* 0x5f7d: i64.shl  */
    if (r0 != 0) { goto 1; }
    /* 0x5f80: end  */
    /* 0x5f81: local.get $local_6 */
    /* 0x5f83: i32.const -113 */
    /* 0x5f86: i32.le_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x5f89: i64.const 0x0 */
    /* 0x5f8b: local.set $local_1 */
    if (r0 != 0) { goto 2; }
    /* 0x5f8f: end  */
    /* 0x5f90: local.get $local_5 */
    /* 0x5f92: i32.const -64 */
    /* 0x5f94: i32.sub  */
    /* 0x5f95: local.get $local_10 */
    /* 0x5f97: local.get $local_4 */
    /* 0x5f99: i32.const 1 */
    /* 0x5f9b: local.get $local_6 */
    /* 0x5f9d: i32.sub  */
    r0 = wasm_func_436(r0, r1);
    /* 0x5fa1: local.get $local_5 */
    /* 0x5fa3: i32.const 48 */
    /* 0x5fa5: i32.add  */
    /* 0x5fa6: local.get $local_14 */
    /* 0x5fa8: local.get $local_21 */
    /* 0x5faa: local.get $local_6 */
    /* 0x5fac: i32.const 112 */
    /* 0x5faf: i32.add  */
    r0 = wasm_func_351(r0, r1);
    /* 0x5fb3: local.get $local_5 */
    /* 0x5fb5: i32.const 32 */
    /* 0x5fb7: i32.add  */
    /* 0x5fb8: local.get $local_3 */
    /* 0x5fba: local.get $local_18 */
    /* 0x5fbc: local.get $local_5 */
    /* 0x5fbe: i64.load offset=64, align=3 */
    /* 0x5fc1: local.tee $local_10 */
    /* 0x5fc3: local.get $local_5 */
    /* 0x5fc5: i64.load offset=72, align=3 */
    /* 0x5fc8: local.tee $local_11 */
    r0 = wasm_func_329(r0, r1);
    /* 0x5fcd: local.get $local_5 */
    /* 0x5fcf: i64.load offset=56, align=3 */
    /* 0x5fd2: local.get $local_5 */
    /* 0x5fd4: i64.load offset=40, align=3 */
    /* 0x5fd7: i64.const 0x1 */
    /* 0x5fd9: i64.shl  */
    /* 0x5fda: local.get $local_5 */
    /* 0x5fdc: i64.load offset=32, align=3 */
    /* 0x5fdf: local.tee $local_1 */
    /* 0x5fe1: i64.const 0x3f */
    /* 0x5fe3: i64.shr_u  */
    /* 0x5fe4: i64.or  */
    /* 0x5fe5: i64.sub  */
    /* 0x5fe6: local.get $local_5 */
    /* 0x5fe8: i64.load offset=48, align=3 */
    /* 0x5feb: local.tee $local_2 */
    /* 0x5fed: local.get $local_1 */
    /* 0x5fef: i64.const 0x1 */
    /* 0x5ff1: i64.shl  */
    /* 0x5ff2: local.tee $local_4 */
    /* 0x5ff4: wasm.op_0x54  */
    /* 0x5ff5: i64.extend_i32_u  */
    /* 0x5ff6: i64.sub  */
    /* 0x5ff7: local.set $local_1 */
    /* 0x5ff9: local.get $local_2 */
    /* 0x5ffb: local.get $local_4 */
    /* 0x5ffd: i64.sub  */
    /* 0x5ffe: end  */
    /* 0x5fff: local.set $local_2 */
    /* 0x6001: local.get $local_5 */
    /* 0x6003: i32.const 16 */
    /* 0x6005: i32.add  */
    /* 0x6006: local.get $local_3 */
    /* 0x6008: local.get $local_18 */
    /* 0x600a: i64.const 0x3 */
    /* 0x600c: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x6011: local.get $local_5 */
    /* 0x6013: local.get $local_3 */
    /* 0x6015: local.get $local_18 */
    /* 0x6017: i64.const 0x5 */
    /* 0x6019: i64.const 0x0 */
    r0 = wasm_func_329(r0, r1);
    /* 0x601e: local.get $local_11 */
    /* 0x6020: local.get $local_10 */
    /* 0x6022: local.get $local_3 */
    /* 0x6024: local.get $local_10 */
    /* 0x6026: i64.const 0x1 */
    /* 0x6028: i64.and  */
    /* 0x6029: local.tee $local_3 */
    /* 0x602b: local.get $local_2 */
    /* 0x602d: i64.add  */
    /* 0x602e: local.tee $local_2 */
    /* 0x6030: wasm.op_0x54  */
    /* 0x6031: local.get $local_1 */
    /* 0x6033: local.get $local_2 */
    /* 0x6035: local.get $local_3 */
    /* 0x6037: wasm.op_0x54  */
    /* 0x6038: i64.extend_i32_u  */
    /* 0x6039: i64.add  */
    /* 0x603a: local.tee $local_1 */
    /* 0x603c: local.get $local_18 */
    /* 0x603e: wasm.op_0x56  */
    /* 0x603f: local.get $local_1 */
    /* 0x6041: local.get $local_18 */
    /* 0x6043: i64.eq  */
    /* 0x6044: select  */
    /* 0x6045: i64.extend_i32_u  */
    /* 0x6046: i64.add  */
    /* 0x6047: local.tee $local_3 */
    /* 0x6049: local.get $local_10 */
    /* 0x604b: wasm.op_0x54  */
    /* 0x604c: i64.extend_i32_u  */
    /* 0x604d: i64.add  */
    /* 0x604e: local.tee $local_4 */
    /* 0x6050: local.get $local_3 */
    /* 0x6052: local.get $local_3 */
    /* 0x6054: local.get $local_4 */
    /* 0x6056: i64.const 0x7fff000000000000 */
    /* 0x6061: wasm.op_0x54  */
    /* 0x6062: local.get $local_2 */
    /* 0x6064: local.get $local_5 */
    /* 0x6066: i64.load offset=16, align=3 */
    /* 0x6069: wasm.op_0x56  */
    /* 0x606a: local.get $local_1 */
    /* 0x606c: local.get $local_5 */
    /* 0x606e: i64.load offset=24, align=3 */
    /* 0x6071: local.tee $local_4 */
    /* 0x6073: wasm.op_0x56  */
    /* 0x6074: local.get $local_1 */
    /* 0x6076: local.get $local_4 */
    /* 0x6078: i64.eq  */
    /* 0x6079: select  */
    /* 0x607a: i32.and  */
    /* 0x607b: i64.extend_i32_u  */
    /* 0x607c: i64.add  */
    /* 0x607d: local.tee $local_3 */
    /* 0x607f: wasm.op_0x56  */
    /* 0x6080: i64.extend_i32_u  */
    /* 0x6081: i64.add  */
    /* 0x6082: local.tee $local_4 */
    /* 0x6084: local.get $local_3 */
    /* 0x6086: local.get $local_4 */
    /* 0x6088: i64.const 0x7fff000000000000 */
    /* 0x6093: wasm.op_0x54  */
    /* 0x6094: local.get $local_2 */
    /* 0x6096: local.get $local_5 */
    /* 0x6098: i64.load offset=0, align=3 */
    /* 0x609b: wasm.op_0x56  */
    /* 0x609c: local.get $local_1 */
    /* 0x609e: local.get $local_5 */
    /* 0x60a0: i64.load offset=8, align=3 */
    /* 0x60a3: local.tee $local_2 */
    /* 0x60a5: wasm.op_0x56  */
    /* 0x60a6: local.get $local_1 */
    /* 0x60a8: local.get $local_2 */
    /* 0x60aa: i64.eq  */
    /* 0x60ab: select  */
    /* 0x60ac: i32.and  */
    /* 0x60ad: i64.extend_i32_u  */
    /* 0x60ae: i64.add  */
    /* 0x60af: local.tee $local_1 */
    /* 0x60b1: local.get $local_3 */
    /* 0x60b3: wasm.op_0x54  */
    /* 0x60b4: i64.extend_i32_u  */
    /* 0x60b5: i64.add  */
    /* 0x60b6: local.get $local_12 */
    /* 0x60b8: i64.or  */
    /* 0x60b9: local.set $local_12 */
    /* 0x60bb: end  */
    /* 0x60bc: local.get $local_0 */
    /* 0x60be: local.get $local_1 */
    /* 0x60c0: i64.store offset=0, align=3 */
    /* 0x60c3: local.get $local_0 */
    /* 0x60c5: local.get $local_12 */
    /* 0x60c7: i64.store offset=8, align=3 */
    /* 0x60ca: local.get $local_5 */
    /* 0x60cc: i32.const 336 */
    /* 0x60cf: i32.add  */
    /* 0x60d0: local.tee $local_0 */
    /* 0x60d2: global.get $global_4 */
    /* 0x60d4: i32.gt_u  */
    /* 0x60d5: local.get $local_0 */
    /* 0x60d7: global.get $global_5 */
    /* 0x60d9: i32.lt_u  */
    /* 0x60da: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x60dd: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x60e1: end  */
    /* 0x60e2: local.get $local_0 */
    /* 0x60e4: global.set $global_0 */
    return r0;
}

// ── wasm_func_294 @ 0x60e9 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_294 ───
int64_t wasm_func_294(int64_t arg0, int64_t arg1) {
    /* 0x60ee: global.get $global_0 */
    /* 0x60f0: i32.const 16 */
    /* 0x60f2: i32.sub  */
    /* 0x60f3: local.tee $local_1 */
    /* 0x60f5: global.get $global_4 */
    /* 0x60f7: i32.gt_u  */
    /* 0x60f8: local.get $local_1 */
    /* 0x60fa: global.get $global_5 */
    /* 0x60fc: i32.lt_u  */
    /* 0x60fd: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6100: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x6104: end  */
    /* 0x6105: local.get $local_1 */
    /* 0x6107: global.set $global_0 */
    /* 0x6109: block 0x7c */
    /* 0x610b: local.get $local_0 */
    /* 0x610d: wasm.op_0xbd  */
    /* 0x610e: i64.const 0x20 */
    /* 0x6110: i64.shr_u  */
    /* 0x6111: i32.wrap_i64  */
    /* 0x6112: i32.const 2147483647 */
    /* 0x6118: i32.and  */
    /* 0x6119: local.tee $local_2 */
    /* 0x611b: i32.const 1072243195 */
    /* 0x6121: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6124: wasm.op_0x44  */
    /* 0x6125: unreachable  */
    /* 0x6126: unreachable  */
    /* 0x6127: unreachable  */
    /* 0x6128: unreachable  */
    /* 0x6129: unreachable  */
    /* 0x612a: unreachable  */
    /* 0x612b: wasm.op_0xf0  */
    /* 0x612c: wasm.op_0x3f  */
    /* 0x612d: local.get $local_2 */
    /* 0x612f: i32.const 1044816030 */
    /* 0x6135: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x6138: drop  */
    /* 0x6139: local.get $local_0 */
    /* 0x613b: wasm.op_0x44  */
    /* 0x613c: unreachable  */
    /* 0x613d: unreachable  */
    /* 0x613e: unreachable  */
    /* 0x613f: unreachable  */
    /* 0x6140: unreachable  */
    /* 0x6141: unreachable  */
    /* 0x6142: unreachable  */
    /* 0x6143: unreachable  */
    r0 = wasm_func_539(r0, r1);
    if (r0 != 0) { goto 1; }
    /* 0x6149: end  */
    /* 0x614a: local.get $local_0 */
    /* 0x614c: local.get $local_0 */
    /* 0x614e: wasm.op_0xa1  */
    /* 0x614f: local.get $local_2 */
    /* 0x6151: i32.const 2146435072 */
    /* 0x6157: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x615a: drop  */
    /* 0x615b: local.get $local_0 */
    /* 0x615d: local.get $local_1 */
    r0 = wasm_func_772(r0, r1);
    /* 0x6162: local.set $local_2 */
    /* 0x6164: local.get $local_1 */
    /* 0x6166: wasm.op_0x2b  */
    /* 0x6167: loop 0x08 */
    /* 0x6169: local.set $local_0 */
    /* 0x616b: local.get $local_1 */
    /* 0x616d: wasm.op_0x2b  */
    /* 0x616e: loop 0x00 */
    /* 0x6170: local.set $local_3 */
    /* 0x6172: block 0x40 */
    /* 0x6174: block 0x40 */
    /* 0x6176: block 0x40 */
    /* 0x6178: block 0x40 */
    /* 0x617a: local.get $local_2 */
    /* 0x617c: i32.const 3 */
    /* 0x617e: i32.and  */
    /* 0x617f: i32.const 1 */
    /* 0x6181: i32.sub  */
    /* 0x6182: wasm.op_0x0e  */
    /* 0x6183: loop 0x01 */
    /* 0x6185: block 0x03 */
    /* 0x6187: unreachable  */
    /* 0x6188: end  */
    /* 0x6189: local.get $local_3 */
    /* 0x618b: local.get $local_0 */
    r0 = wasm_func_539(r0, r1);
    if (r0 != 0) { goto 3; }
    /* 0x6192: end  */
    /* 0x6193: local.get $local_3 */
    /* 0x6195: local.get $local_0 */
    /* 0x6197: i32.const 1 */
    r0 = wasm_func_538(r0, r1);
    /* 0x619c: wasm.op_0x9a  */
    if (r0 != 0) { goto 2; }
    /* 0x619f: end  */
    /* 0x61a0: local.get $local_3 */
    /* 0x61a2: local.get $local_0 */
    r0 = wasm_func_539(r0, r1);
    /* 0x61a7: wasm.op_0x9a  */
    if (r0 != 0) { goto 1; }
    /* 0x61aa: end  */
    /* 0x61ab: local.get $local_3 */
    /* 0x61ad: local.get $local_0 */
    /* 0x61af: i32.const 1 */
    r0 = wasm_func_538(r0, r1);
    /* 0x61b4: end  */
    /* 0x61b5: local.get $local_1 */
    /* 0x61b7: i32.const 16 */
    /* 0x61b9: i32.add  */
    /* 0x61ba: local.tee $local_1 */
    /* 0x61bc: global.get $global_4 */
    /* 0x61be: i32.gt_u  */
    /* 0x61bf: local.get $local_1 */
    /* 0x61c1: global.get $global_5 */
    /* 0x61c3: i32.lt_u  */
    /* 0x61c4: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x61c7: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x61cb: end  */
    /* 0x61cc: local.get $local_1 */
    /* 0x61ce: global.set $global_0 */
    return r0;
}

// ── wasm_func_295 @ 0x61d2 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_295 ───
int64_t wasm_func_295(int64_t arg0, int64_t arg1) {
    /* 0x61d5: local.get $local_1 */
    /* 0x61d7: i32.load8_u offset=24, align=0 */
    /* 0x61da: i32.const 1 */
    /* 0x61dc: i32.eq  */
    if (r0 != 0) { goto 0x40; }
    /* 0x61df: local.get $local_1 */
    /* 0x61e1: wasm.op_0x2a  */
    /* 0x61e2: block 0x08 */
    /* 0x61e4: local.get $local_1 */
    /* 0x61e6: wasm.op_0x2a  */
    /* 0x61e7: block 0x14 */
    /* 0x61e9: wasm.op_0x92  */
    /* 0x61ea: wasm.op_0x43  */
    /* 0x61eb: unreachable  */
    /* 0x61ec: unreachable  */
    /* 0x61ed: unreachable  */
    /* 0x61ee: wasm.op_0x3f  */
    /* 0x61ef: wasm.op_0x94  */
    /* 0x61f0: local.set $local_4 */
    /* 0x61f2: local.get $local_1 */
    /* 0x61f4: wasm.op_0x2a  */
    /* 0x61f5: block 0x04 */
    /* 0x61f7: local.get $local_1 */
    /* 0x61f9: wasm.op_0x2a  */
    /* 0x61fa: block 0x10 */
    /* 0x61fc: wasm.op_0x92  */
    /* 0x61fd: wasm.op_0x43  */
    /* 0x61fe: unreachable  */
    /* 0x61ff: unreachable  */
    /* 0x6200: unreachable  */
    /* 0x6201: wasm.op_0x3f  */
    /* 0x6202: wasm.op_0x94  */
    /* 0x6203: local.set $local_3 */
    /* 0x6205: local.get $local_1 */
    /* 0x6207: wasm.op_0x2a  */
    /* 0x6208: block 0x00 */
    /* 0x620a: local.get $local_1 */
    /* 0x620c: wasm.op_0x2a  */
    /* 0x620d: block 0x0c */
    /* 0x620f: wasm.op_0x92  */
    /* 0x6210: wasm.op_0x43  */
    /* 0x6211: unreachable  */
    /* 0x6212: unreachable  */
    /* 0x6213: unreachable  */
    /* 0x6214: wasm.op_0x3f  */
    /* 0x6215: wasm.op_0x94  */
    /* 0x6216: local.set $local_2 */
    /* 0x6218: end  */
    /* 0x6219: local.get $local_0 */
    /* 0x621b: local.get $local_4 */
    /* 0x621d: wasm.op_0x38  */
    /* 0x621e: block 0x08 */
    /* 0x6220: local.get $local_0 */
    /* 0x6222: local.get $local_3 */
    /* 0x6224: wasm.op_0x38  */
    /* 0x6225: block 0x04 */
    /* 0x6227: local.get $local_0 */
    /* 0x6229: local.get $local_2 */
    /* 0x622b: wasm.op_0x38  */
    /* 0x622c: block 0x00 */
    return r0;
}

// ── wasm_func_296 @ 0x6231 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_296 ───
int64_t wasm_func_296(int64_t arg0, int64_t arg1) {
    /* 0x6236: global.get $global_0 */
    /* 0x6238: i32.const 16 */
    /* 0x623a: i32.sub  */
    /* 0x623b: local.tee $local_1 */
    /* 0x623d: global.get $global_4 */
    /* 0x623f: i32.gt_u  */
    /* 0x6240: local.get $local_1 */
    /* 0x6242: global.get $global_5 */
    /* 0x6244: i32.lt_u  */
    /* 0x6245: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6248: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x624c: end  */
    /* 0x624d: local.get $local_1 */
    /* 0x624f: global.set $global_0 */
    /* 0x6251: block 0x40 */
    /* 0x6253: local.get $local_0 */
    /* 0x6255: wasm.op_0xbd  */
    /* 0x6256: i64.const 0x20 */
    /* 0x6258: i64.shr_u  */
    /* 0x6259: i32.wrap_i64  */
    /* 0x625a: i32.const 2147483647 */
    /* 0x6260: i32.and  */
    /* 0x6261: local.tee $local_2 */
    /* 0x6263: i32.const 1072243195 */
    /* 0x6269: i32.le_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x626c: local.get $local_2 */
    /* 0x626e: i32.const 1045430272 */
    /* 0x6274: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x6277: local.get $local_0 */
    /* 0x6279: wasm.op_0x44  */
    /* 0x627a: unreachable  */
    /* 0x627b: unreachable  */
    /* 0x627c: unreachable  */
    /* 0x627d: unreachable  */
    /* 0x627e: unreachable  */
    /* 0x627f: unreachable  */
    /* 0x6280: unreachable  */
    /* 0x6281: unreachable  */
    /* 0x6282: i32.const 0 */
    r0 = wasm_func_538(r0, r1);
    /* 0x6287: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x628b: end  */
    /* 0x628c: local.get $local_2 */
    /* 0x628e: i32.const 2146435072 */
    /* 0x6294: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6297: local.get $local_0 */
    /* 0x6299: local.get $local_0 */
    /* 0x629b: wasm.op_0xa1  */
    /* 0x629c: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x62a0: end  */
    /* 0x62a1: local.get $local_0 */
    /* 0x62a3: local.get $local_1 */
    r0 = wasm_func_772(r0, r1);
    /* 0x62a8: local.set $local_2 */
    /* 0x62aa: local.get $local_1 */
    /* 0x62ac: wasm.op_0x2b  */
    /* 0x62ad: loop 0x08 */
    /* 0x62af: local.set $local_0 */
    /* 0x62b1: local.get $local_1 */
    /* 0x62b3: wasm.op_0x2b  */
    /* 0x62b4: loop 0x00 */
    /* 0x62b6: local.set $local_3 */
    /* 0x62b8: block 0x40 */
    /* 0x62ba: block 0x40 */
    /* 0x62bc: block 0x40 */
    /* 0x62be: block 0x40 */
    /* 0x62c0: local.get $local_2 */
    /* 0x62c2: i32.const 3 */
    /* 0x62c4: i32.and  */
    /* 0x62c5: i32.const 1 */
    /* 0x62c7: i32.sub  */
    /* 0x62c8: wasm.op_0x0e  */
    /* 0x62c9: loop 0x01 */
    /* 0x62cb: block 0x03 */
    /* 0x62cd: unreachable  */
    /* 0x62ce: end  */
    /* 0x62cf: local.get $local_3 */
    /* 0x62d1: local.get $local_0 */
    /* 0x62d3: i32.const 1 */
    r0 = wasm_func_538(r0, r1);
    /* 0x62d8: local.set $local_0 */
    if (r0 != 0) { goto 3; }
    /* 0x62dc: end  */
    /* 0x62dd: local.get $local_3 */
    /* 0x62df: local.get $local_0 */
    r0 = wasm_func_539(r0, r1);
    /* 0x62e4: local.set $local_0 */
    if (r0 != 0) { goto 2; }
    /* 0x62e8: end  */
    /* 0x62e9: local.get $local_3 */
    /* 0x62eb: local.get $local_0 */
    /* 0x62ed: i32.const 1 */
    r0 = wasm_func_538(r0, r1);
    /* 0x62f2: wasm.op_0x9a  */
    /* 0x62f3: local.set $local_0 */
    if (r0 != 0) { goto 1; }
    /* 0x62f7: end  */
    /* 0x62f8: local.get $local_3 */
    /* 0x62fa: local.get $local_0 */
    r0 = wasm_func_539(r0, r1);
    /* 0x62ff: wasm.op_0x9a  */
    /* 0x6300: local.set $local_0 */
    /* 0x6302: end  */
    /* 0x6303: local.get $local_1 */
    /* 0x6305: i32.const 16 */
    /* 0x6307: i32.add  */
    /* 0x6308: local.tee $local_1 */
    /* 0x630a: global.get $global_4 */
    /* 0x630c: i32.gt_u  */
    /* 0x630d: local.get $local_1 */
    /* 0x630f: global.get $global_5 */
    /* 0x6311: i32.lt_u  */
    /* 0x6312: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6315: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x6319: end  */
    /* 0x631a: local.get $local_1 */
    /* 0x631c: global.set $global_0 */
    /* 0x631e: local.get $local_0 */
    return r0;
}

// ── wasm_func_297 @ 0x6322 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_297 ───
int64_t wasm_func_297(int64_t arg0, int64_t arg1) {
    /* 0x6325: local.get $local_0 */
    /* 0x6327: i32.load offset=0, align=2 */
    /* 0x632a: local.tee $local_3 */
    if (r0 != 0) { goto 0x40; }
    /* 0x632e: local.get $local_3 */
    /* 0x6330: local.tee $local_1 */
    /* 0x6332: local.get $local_0 */
    /* 0x6334: i32.load offset=4, align=2 */
    /* 0x6337: local.tee $local_2 */
    /* 0x6339: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x633c: loop 0x40 */
    /* 0x633e: local.get $local_2 */
    /* 0x6340: i32.const 12 */
    /* 0x6342: i32.sub  */
    /* 0x6343: local.tee $local_1 */
    /* 0x6345: i32.load offset=0, align=2 */
    /* 0x6348: local.tee $local_4 */
    if (r0 != 0) { goto 0x40; }
    /* 0x634c: local.get $local_2 */
    /* 0x634e: i32.const 8 */
    /* 0x6350: i32.sub  */
    /* 0x6351: local.get $local_4 */
    /* 0x6353: i32.store offset=0, align=2 */
    /* 0x6356: local.get $local_2 */
    /* 0x6358: i32.const 4 */
    /* 0x635a: i32.sub  */
    /* 0x635b: i32.load offset=0, align=2 */
    /* 0x635e: drop  */
    /* 0x635f: local.get $local_4 */
    r0 = _d(r0, r1);
    /* 0x6364: end  */
    /* 0x6365: local.get $local_1 */
    /* 0x6367: local.tee $local_2 */
    /* 0x6369: local.get $local_3 */
    /* 0x636b: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x636e: end  */
    /* 0x636f: local.get $local_0 */
    /* 0x6371: i32.load offset=0, align=2 */
    /* 0x6374: local.set $local_1 */
    /* 0x6376: end  */
    /* 0x6377: local.get $local_0 */
    /* 0x6379: local.get $local_3 */
    /* 0x637b: i32.store offset=4, align=2 */
    /* 0x637e: local.get $local_0 */
    /* 0x6380: i32.load offset=8, align=2 */
    /* 0x6383: drop  */
    /* 0x6384: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x6389: end  */
    return r0;
}

// ── wasm_func_298 @ 0x638c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_298 ───
int64_t wasm_func_298(int64_t arg0, int64_t arg1) {
    /* 0x638f: global.get $global_0 */
    /* 0x6391: i32.const 32 */
    /* 0x6393: i32.sub  */
    /* 0x6394: local.tee $local_1 */
    /* 0x6396: global.get $global_4 */
    /* 0x6398: i32.gt_u  */
    /* 0x6399: local.get $local_1 */
    /* 0x639b: global.get $global_5 */
    /* 0x639d: i32.lt_u  */
    /* 0x639e: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x63a1: local.get $local_1 */
    r0 = imp_d(r0, r1);
    /* 0x63a5: end  */
    /* 0x63a6: local.get $local_1 */
    /* 0x63a8: global.set $global_0 */
    /* 0x63aa: local.get $local_1 */
    /* 0x63ac: local.get $local_1 */
    /* 0x63ae: i32.load offset=28, align=2 */
    /* 0x63b1: i32.store offset=16, align=2 */
    /* 0x63b4: local.get $local_1 */
    /* 0x63b6: local.get $local_1 */
    /* 0x63b8: i64.load offset=20, align=2 */
    /* 0x63bb: i64.store offset=8, align=3 */
    /* 0x63be: local.get $local_0 */
    /* 0x63c0: local.get $local_1 */
    /* 0x63c2: i32.const 8 */
    /* 0x63c4: i32.add  */
    r0 = wasm_func_534(r0, r1);
    /* 0x63c8: local.get $local_1 */
    /* 0x63ca: i32.const 32 */
    /* 0x63cc: i32.add  */
    /* 0x63cd: local.tee $local_0 */
    /* 0x63cf: global.get $global_4 */
    /* 0x63d1: i32.gt_u  */
    /* 0x63d2: local.get $local_0 */
    /* 0x63d4: global.get $global_5 */
    /* 0x63d6: i32.lt_u  */
    /* 0x63d7: i32.or  */
    if (r0 != 0) { goto 0x40; }
    /* 0x63da: local.get $local_0 */
    r0 = imp_d(r0, r1);
    /* 0x63de: end  */
    /* 0x63df: local.get $local_0 */
    /* 0x63e1: global.set $global_0 */
    return r0;
}

// ── wasm_func_299 @ 0x63e6 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_299 ───
int64_t wasm_func_299(int64_t arg0, int64_t arg1) {
    /* 0x63ed: local.get $local_0 */
    /* 0x63ef: wasm.op_0x8b  */
    /* 0x63f0: local.tee $local_4 */
    /* 0x63f2: local.get $local_1 */
    /* 0x63f4: wasm.op_0x8b  */
    /* 0x63f5: local.tee $local_5 */
    /* 0x63f7: local.get $local_4 */
    /* 0x63f9: wasm.op_0xbc  */
    /* 0x63fa: local.get $local_5 */
    /* 0x63fc: wasm.op_0xbc  */
    /* 0x63fd: i32.lt_u  */
    /* 0x63fe: local.tee $local_2 */
    /* 0x6400: select  */
    /* 0x6401: local.tee $local_1 */
    /* 0x6403: wasm.op_0xbc  */
    /* 0x6404: local.tee $local_3 */
    /* 0x6406: i32.const 2139095040 */
    /* 0x640c: i32.ne  */
    if (r0 != 0) { goto 0x7d; }
    /* 0x640f: block 0x40 */
    /* 0x6411: block 0x40 */
    /* 0x6413: local.get $local_5 */
    /* 0x6415: local.get $local_4 */
    /* 0x6417: local.get $local_2 */
    /* 0x6419: select  */
    /* 0x641a: local.tee $local_0 */
    /* 0x641c: wasm.op_0xbc  */
    /* 0x641d: local.tee $local_2 */
    /* 0x641f: i32.const 2139095039 */
    /* 0x6425: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x6428: local.get $local_3 */
    /* 0x642a: i32.eqz  */
    if (r0 != 0) { goto 0; }
    /* 0x642d: local.get $local_2 */
    /* 0x642f: local.get $local_3 */
    /* 0x6431: i32.sub  */
    /* 0x6432: i32.const 209715200 */
    /* 0x6438: i32.lt_u  */
    if (r0 != 0) { goto 1; }
    /* 0x643b: end  */
    /* 0x643c: local.get $local_4 */
    /* 0x643e: local.get $local_5 */
    /* 0x6440: wasm.op_0x92  */
    return r0;
    /* 0x6442: end  */
    /* 0x6443: block 0x7d */
    /* 0x6445: local.get $local_2 */
    /* 0x6447: i32.const 1568669696 */
    /* 0x644d: i32.ge_u  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6450: local.get $local_1 */
    /* 0x6452: wasm.op_0x43  */
    /* 0x6453: unreachable  */
    /* 0x6454: unreachable  */
    /* 0x6455: wasm.op_0x80  */
    /* 0x6456: wasm.op_0x12  */
    /* 0x6457: wasm.op_0x94  */
    /* 0x6458: local.set $local_1 */
    /* 0x645a: local.get $local_0 */
    /* 0x645c: wasm.op_0x43  */
    /* 0x645d: unreachable  */
    /* 0x645e: unreachable  */
    /* 0x645f: wasm.op_0x80  */
    /* 0x6460: wasm.op_0x12  */
    /* 0x6461: wasm.op_0x94  */
    /* 0x6462: local.set $local_0 */
    /* 0x6464: wasm.op_0x43  */
    /* 0x6465: unreachable  */
    /* 0x6466: unreachable  */
    /* 0x6467: wasm.op_0x80  */
    /* 0x6468: i32.mul  */
    if (r0 != 0) { goto 1; }
    /* 0x646b: end  */
    /* 0x646c: wasm.op_0x43  */
    /* 0x646d: unreachable  */
    /* 0x646e: unreachable  */
    /* 0x646f: wasm.op_0x80  */
    /* 0x6470: wasm.op_0x3f  */
    /* 0x6471: local.get $local_3 */
    /* 0x6473: i32.const 562036735 */
    /* 0x6479: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x647c: drop  */
    /* 0x647d: local.get $local_1 */
    /* 0x647f: wasm.op_0x43  */
    /* 0x6480: unreachable  */
    /* 0x6481: unreachable  */
    /* 0x6482: wasm.op_0x80  */
    /* 0x6483: i32.mul  */
    /* 0x6484: wasm.op_0x94  */
    /* 0x6485: local.set $local_1 */
    /* 0x6487: local.get $local_0 */
    /* 0x6489: wasm.op_0x43  */
    /* 0x648a: unreachable  */
    /* 0x648b: unreachable  */
    /* 0x648c: wasm.op_0x80  */
    /* 0x648d: i32.mul  */
    /* 0x648e: wasm.op_0x94  */
    /* 0x648f: local.set $local_0 */
    /* 0x6491: wasm.op_0x43  */
    /* 0x6492: unreachable  */
    /* 0x6493: unreachable  */
    /* 0x6494: wasm.op_0x80  */
    /* 0x6495: wasm.op_0x12  */
    /* 0x6496: end  */
    /* 0x6497: local.get $local_0 */
    /* 0x6499: wasm.op_0xbb  */
    /* 0x649a: local.tee $local_6 */
    /* 0x649c: local.get $local_6 */
    /* 0x649e: wasm.op_0xa2  */
    /* 0x649f: local.get $local_1 */
    /* 0x64a1: wasm.op_0xbb  */
    /* 0x64a2: local.tee $local_6 */
    /* 0x64a4: local.get $local_6 */
    /* 0x64a6: wasm.op_0xa2  */
    /* 0x64a7: wasm.op_0xa0  */
    /* 0x64a8: wasm.op_0xb6  */
    /* 0x64a9: wasm.op_0x91  */
    /* 0x64aa: wasm.op_0x94  */
    /* 0x64ab: else  */
    /* 0x64ac: local.get $local_1 */
    /* 0x64ae: end  */
    return r0;
}

// ── wasm_func_300 @ 0x64b2 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_300 ───
int64_t wasm_func_300(int64_t arg0, int64_t arg1) {
    /* 0x64b5: block 0x40 */
    /* 0x64b7: local.get $local_1 */
    /* 0x64b9: i32.load8_u offset=24, align=0 */
    /* 0x64bc: i32.const 1 */
    /* 0x64be: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x64c1: block 0x40 */
    /* 0x64c3: local.get $local_1 */
    /* 0x64c5: wasm.op_0x2a  */
    /* 0x64c6: block 0x00 */
    /* 0x64c8: local.tee $local_2 */
    /* 0x64ca: wasm.op_0xbc  */
    /* 0x64cb: i32.const 1 */
    /* 0x64cd: i32.shl  */
    /* 0x64ce: i32.const -16777217 */
    /* 0x64d3: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x64d6: local.get $local_1 */
    /* 0x64d8: wasm.op_0x2a  */
    /* 0x64d9: block 0x04 */
    /* 0x64db: local.tee $local_4 */
    /* 0x64dd: wasm.op_0xbc  */
    /* 0x64de: i32.const 1 */
    /* 0x64e0: i32.shl  */
    /* 0x64e1: i32.const -16777216 */
    /* 0x64e6: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x64e9: local.get $local_1 */
    /* 0x64eb: wasm.op_0x2a  */
    /* 0x64ec: block 0x08 */
    /* 0x64ee: local.tee $local_5 */
    /* 0x64f0: wasm.op_0xbc  */
    /* 0x64f1: i32.const 1 */
    /* 0x64f3: i32.shl  */
    /* 0x64f4: i32.const -16777216 */
    /* 0x64f9: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x64fc: local.get $local_0 */
    /* 0x64fe: i32.load8_u offset=24, align=0 */
    /* 0x6501: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x6504: local.get $local_0 */
    /* 0x6506: local.get $local_5 */
    /* 0x6508: wasm.op_0x38  */
    /* 0x6509: block 0x14 */
    /* 0x650b: local.get $local_0 */
    /* 0x650d: local.get $local_4 */
    /* 0x650f: wasm.op_0x38  */
    /* 0x6510: block 0x10 */
    /* 0x6512: local.get $local_0 */
    /* 0x6514: local.get $local_2 */
    /* 0x6516: wasm.op_0x38  */
    /* 0x6517: block 0x0c */
    /* 0x6519: local.get $local_0 */
    /* 0x651b: i32.const 1 */
    /* 0x651d: i32.store8 offset=24, align=0 */
    /* 0x6520: local.get $local_0 */
    /* 0x6522: local.get $local_5 */
    /* 0x6524: wasm.op_0x38  */
    /* 0x6525: block 0x08 */
    /* 0x6527: local.get $local_0 */
    /* 0x6529: local.get $local_4 */
    /* 0x652b: wasm.op_0x38  */
    /* 0x652c: block 0x04 */
    /* 0x652e: local.get $local_0 */
    /* 0x6530: local.get $local_2 */
    /* 0x6532: wasm.op_0x38  */
    /* 0x6533: block 0x00 */
    if (r0 != 0) { goto 1; }
    /* 0x6537: end  */
    /* 0x6538: local.get $local_0 */
    /* 0x653a: local.get $local_5 */
    /* 0x653c: local.get $local_0 */
    /* 0x653e: wasm.op_0x2a  */
    /* 0x653f: block 0x08 */
    /* 0x6541: local.tee $local_3 */
    /* 0x6543: local.get $local_3 */
    /* 0x6545: local.get $local_5 */
    /* 0x6547: wasm.op_0x5e  */
    /* 0x6548: select  */
    /* 0x6549: wasm.op_0x38  */
    /* 0x654a: block 0x08 */
    /* 0x654c: local.get $local_0 */
    /* 0x654e: local.get $local_4 */
    /* 0x6550: local.get $local_0 */
    /* 0x6552: wasm.op_0x2a  */
    /* 0x6553: block 0x04 */
    /* 0x6555: local.tee $local_3 */
    /* 0x6557: local.get $local_3 */
    /* 0x6559: local.get $local_4 */
    /* 0x655b: wasm.op_0x5e  */
    /* 0x655c: select  */
    /* 0x655d: wasm.op_0x38  */
    /* 0x655e: block 0x04 */
    /* 0x6560: local.get $local_0 */
    /* 0x6562: local.get $local_2 */
    /* 0x6564: local.get $local_0 */
    /* 0x6566: wasm.op_0x2a  */
    /* 0x6567: block 0x00 */
    /* 0x6569: local.tee $local_3 */
    /* 0x656b: local.get $local_2 */
    /* 0x656d: local.get $local_3 */
    /* 0x656f: wasm.op_0x5d  */
    /* 0x6570: select  */
    /* 0x6571: wasm.op_0x38  */
    /* 0x6572: block 0x00 */
    /* 0x6574: local.get $local_0 */
    /* 0x6576: local.get $local_2 */
    /* 0x6578: local.get $local_0 */
    /* 0x657a: wasm.op_0x2a  */
    /* 0x657b: block 0x0c */
    /* 0x657d: local.tee $local_3 */
    /* 0x657f: local.get $local_2 */
    /* 0x6581: local.get $local_3 */
    /* 0x6583: wasm.op_0x5e  */
    /* 0x6584: select  */
    /* 0x6585: wasm.op_0x38  */
    /* 0x6586: block 0x0c */
    /* 0x6588: local.get $local_0 */
    /* 0x658a: local.get $local_4 */
    /* 0x658c: local.get $local_0 */
    /* 0x658e: wasm.op_0x2a  */
    /* 0x658f: block 0x10 */
    /* 0x6591: local.tee $local_2 */
    /* 0x6593: local.get $local_2 */
    /* 0x6595: local.get $local_4 */
    /* 0x6597: wasm.op_0x5d  */
    /* 0x6598: select  */
    /* 0x6599: wasm.op_0x38  */
    /* 0x659a: block 0x10 */
    /* 0x659c: local.get $local_0 */
    /* 0x659e: local.get $local_5 */
    /* 0x65a0: local.get $local_0 */
    /* 0x65a2: wasm.op_0x2a  */
    /* 0x65a3: block 0x14 */
    /* 0x65a5: local.tee $local_2 */
    /* 0x65a7: local.get $local_2 */
    /* 0x65a9: local.get $local_5 */
    /* 0x65ab: wasm.op_0x5d  */
    /* 0x65ac: select  */
    /* 0x65ad: wasm.op_0x38  */
    /* 0x65ae: block 0x14 */
    /* 0x65b0: end  */
    /* 0x65b1: local.get $local_1 */
    /* 0x65b3: wasm.op_0x2a  */
    /* 0x65b4: block 0x0c */
    /* 0x65b6: local.tee $local_2 */
    /* 0x65b8: wasm.op_0xbc  */
    /* 0x65b9: i32.const 1 */
    /* 0x65bb: i32.shl  */
    /* 0x65bc: i32.const -16777217 */
    /* 0x65c1: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x65c4: local.get $local_1 */
    /* 0x65c6: wasm.op_0x2a  */
    /* 0x65c7: block 0x10 */
    /* 0x65c9: local.tee $local_4 */
    /* 0x65cb: wasm.op_0xbc  */
    /* 0x65cc: i32.const 1 */
    /* 0x65ce: i32.shl  */
    /* 0x65cf: i32.const -16777216 */
    /* 0x65d4: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x65d7: local.get $local_1 */
    /* 0x65d9: wasm.op_0x2a  */
    /* 0x65da: block 0x14 */
    /* 0x65dc: local.tee $local_5 */
    /* 0x65de: wasm.op_0xbc  */
    /* 0x65df: i32.const 1 */
    /* 0x65e1: i32.shl  */
    /* 0x65e2: i32.const -16777216 */
    /* 0x65e7: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x65ea: local.get $local_0 */
    /* 0x65ec: i32.load8_u offset=24, align=0 */
    /* 0x65ef: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x65f2: local.get $local_0 */
    /* 0x65f4: local.get $local_5 */
    /* 0x65f6: wasm.op_0x38  */
    /* 0x65f7: block 0x14 */
    /* 0x65f9: local.get $local_0 */
    /* 0x65fb: local.get $local_4 */
    /* 0x65fd: wasm.op_0x38  */
    /* 0x65fe: block 0x10 */
    /* 0x6600: local.get $local_0 */
    /* 0x6602: local.get $local_2 */
    /* 0x6604: wasm.op_0x38  */
    /* 0x6605: block 0x0c */
    /* 0x6607: local.get $local_0 */
    /* 0x6609: i32.const 1 */
    /* 0x660b: i32.store8 offset=24, align=0 */
    /* 0x660e: local.get $local_0 */
    /* 0x6610: local.get $local_5 */
    /* 0x6612: wasm.op_0x38  */
    /* 0x6613: block 0x08 */
    /* 0x6615: local.get $local_0 */
    /* 0x6617: local.get $local_4 */
    /* 0x6619: wasm.op_0x38  */
    /* 0x661a: block 0x04 */
    /* 0x661c: local.get $local_0 */
    /* 0x661e: local.get $local_2 */
    /* 0x6620: wasm.op_0x38  */
    /* 0x6621: block 0x00 */
    return r0;
    /* 0x6624: end  */
    /* 0x6625: local.get $local_0 */
    /* 0x6627: local.get $local_5 */
    /* 0x6629: local.get $local_0 */
    /* 0x662b: wasm.op_0x2a  */
    /* 0x662c: block 0x08 */
    /* 0x662e: local.tee $local_3 */
    /* 0x6630: local.get $local_3 */
    /* 0x6632: local.get $local_5 */
    /* 0x6634: wasm.op_0x5e  */
    /* 0x6635: select  */
    /* 0x6636: wasm.op_0x38  */
    /* 0x6637: block 0x08 */
    /* 0x6639: local.get $local_0 */
    /* 0x663b: local.get $local_4 */
    /* 0x663d: local.get $local_0 */
    /* 0x663f: wasm.op_0x2a  */
    /* 0x6640: block 0x04 */
    /* 0x6642: local.tee $local_3 */
    /* 0x6644: local.get $local_3 */
    /* 0x6646: local.get $local_4 */
    /* 0x6648: wasm.op_0x5e  */
    /* 0x6649: select  */
    /* 0x664a: wasm.op_0x38  */
    /* 0x664b: block 0x04 */
    /* 0x664d: local.get $local_0 */
    /* 0x664f: local.get $local_2 */
    /* 0x6651: local.get $local_0 */
    /* 0x6653: wasm.op_0x2a  */
    /* 0x6654: block 0x00 */
    /* 0x6656: local.tee $local_3 */
    /* 0x6658: local.get $local_2 */
    /* 0x665a: local.get $local_3 */
    /* 0x665c: wasm.op_0x5d  */
    /* 0x665d: select  */
    /* 0x665e: wasm.op_0x38  */
    /* 0x665f: block 0x00 */
    /* 0x6661: local.get $local_0 */
    /* 0x6663: local.get $local_2 */
    /* 0x6665: local.get $local_0 */
    /* 0x6667: wasm.op_0x2a  */
    /* 0x6668: block 0x0c */
    /* 0x666a: local.tee $local_3 */
    /* 0x666c: local.get $local_2 */
    /* 0x666e: local.get $local_3 */
    /* 0x6670: wasm.op_0x5e  */
    /* 0x6671: select  */
    /* 0x6672: wasm.op_0x38  */
    /* 0x6673: block 0x0c */
    /* 0x6675: local.get $local_0 */
    /* 0x6677: local.get $local_4 */
    /* 0x6679: local.get $local_0 */
    /* 0x667b: wasm.op_0x2a  */
    /* 0x667c: block 0x10 */
    /* 0x667e: local.tee $local_2 */
    /* 0x6680: local.get $local_2 */
    /* 0x6682: local.get $local_4 */
    /* 0x6684: wasm.op_0x5d  */
    /* 0x6685: select  */
    /* 0x6686: wasm.op_0x38  */
    /* 0x6687: block 0x10 */
    /* 0x6689: local.get $local_0 */
    /* 0x668b: local.get $local_5 */
    /* 0x668d: local.get $local_0 */
    /* 0x668f: wasm.op_0x2a  */
    /* 0x6690: block 0x14 */
    /* 0x6692: local.tee $local_2 */
    /* 0x6694: local.get $local_2 */
    /* 0x6696: local.get $local_5 */
    /* 0x6698: wasm.op_0x5d  */
    /* 0x6699: select  */
    /* 0x669a: wasm.op_0x38  */
    /* 0x669b: block 0x14 */
    /* 0x669d: end  */
    return r0;
}

// ── wasm_func_301 @ 0x66a1 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_301 ───
int64_t wasm_func_301(int64_t arg0, int64_t arg1) {
    /* 0x66a4: block 0x40 */
    /* 0x66a6: local.get $local_1 */
    /* 0x66a8: wasm.op_0x2a  */
    /* 0x66a9: block 0x00 */
    /* 0x66ab: local.tee $local_2 */
    /* 0x66ad: wasm.op_0xbc  */
    /* 0x66ae: i32.const 1 */
    /* 0x66b0: i32.shl  */
    /* 0x66b1: i32.const -16777217 */
    /* 0x66b6: i32.gt_u  */
    if (r0 != 0) { goto 0; }
    /* 0x66b9: local.get $local_1 */
    /* 0x66bb: wasm.op_0x2a  */
    /* 0x66bc: block 0x04 */
    /* 0x66be: local.tee $local_4 */
    /* 0x66c0: wasm.op_0xbc  */
    /* 0x66c1: i32.const 1 */
    /* 0x66c3: i32.shl  */
    /* 0x66c4: i32.const -16777216 */
    /* 0x66c9: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x66cc: local.get $local_1 */
    /* 0x66ce: wasm.op_0x2a  */
    /* 0x66cf: block 0x08 */
    /* 0x66d1: local.tee $local_5 */
    /* 0x66d3: wasm.op_0xbc  */
    /* 0x66d4: i32.const 1 */
    /* 0x66d6: i32.shl  */
    /* 0x66d7: i32.const -16777216 */
    /* 0x66dc: i32.ge_u  */
    if (r0 != 0) { goto 0; }
    /* 0x66df: local.get $local_0 */
    /* 0x66e1: i32.load8_u offset=24, align=0 */
    /* 0x66e4: i32.eqz  */
    if (r0 != 0) { goto 0x40; }
    /* 0x66e7: local.get $local_0 */
    /* 0x66e9: local.get $local_1 */
    /* 0x66eb: i32.load offset=8, align=2 */
    /* 0x66ee: i32.store offset=20, align=2 */
    /* 0x66f1: local.get $local_0 */
    /* 0x66f3: local.get $local_1 */
    /* 0x66f5: i64.load offset=0, align=2 */
    /* 0x66f8: i64.store offset=12, align=2 */
    /* 0x66fb: local.get $local_0 */
    /* 0x66fd: local.get $local_1 */
    /* 0x66ff: i64.load offset=0, align=2 */
    /* 0x6702: i64.store offset=0, align=2 */
    /* 0x6705: local.get $local_0 */
    /* 0x6707: local.get $local_1 */
    /* 0x6709: i32.load offset=8, align=2 */
    /* 0x670c: i32.store offset=8, align=2 */
    /* 0x670f: local.get $local_0 */
    /* 0x6711: i32.const 1 */
    /* 0x6713: i32.store8 offset=24, align=0 */
    return r0;
    /* 0x6717: end  */
    /* 0x6718: local.get $local_0 */
    /* 0x671a: local.get $local_5 */
    /* 0x671c: local.get $local_0 */
    /* 0x671e: wasm.op_0x2a  */
    /* 0x671f: block 0x08 */
    /* 0x6721: local.tee $local_3 */
    /* 0x6723: local.get $local_3 */
    /* 0x6725: local.get $local_5 */
    /* 0x6727: wasm.op_0x5e  */
    /* 0x6728: select  */
    /* 0x6729: wasm.op_0x38  */
    /* 0x672a: block 0x08 */
    /* 0x672c: local.get $local_0 */
    /* 0x672e: local.get $local_4 */
    /* 0x6730: local.get $local_0 */
    /* 0x6732: wasm.op_0x2a  */
    /* 0x6733: block 0x04 */
    /* 0x6735: local.tee $local_3 */
    /* 0x6737: local.get $local_3 */
    /* 0x6739: local.get $local_4 */
    /* 0x673b: wasm.op_0x5e  */
    /* 0x673c: select  */
    /* 0x673d: wasm.op_0x38  */
    /* 0x673e: block 0x04 */
    /* 0x6740: local.get $local_0 */
    /* 0x6742: local.get $local_2 */
    /* 0x6744: local.get $local_0 */
    /* 0x6746: wasm.op_0x2a  */
    /* 0x6747: block 0x00 */
    /* 0x6749: local.tee $local_3 */
    /* 0x674b: local.get $local_2 */
    /* 0x674d: local.get $local_3 */
    /* 0x674f: wasm.op_0x5d  */
    /* 0x6750: select  */
    /* 0x6751: wasm.op_0x38  */
    /* 0x6752: block 0x00 */
    /* 0x6754: local.get $local_0 */
    /* 0x6756: local.get $local_2 */
    /* 0x6758: local.get $local_0 */
    /* 0x675a: wasm.op_0x2a  */
    /* 0x675b: block 0x0c */
    /* 0x675d: local.tee $local_3 */
    /* 0x675f: local.get $local_2 */
    /* 0x6761: local.get $local_3 */
    /* 0x6763: wasm.op_0x5e  */
    /* 0x6764: select  */
    /* 0x6765: wasm.op_0x38  */
    /* 0x6766: block 0x0c */
    /* 0x6768: local.get $local_0 */
    /* 0x676a: local.get $local_4 */
    /* 0x676c: local.get $local_0 */
    /* 0x676e: wasm.op_0x2a  */
    /* 0x676f: block 0x10 */
    /* 0x6771: local.tee $local_2 */
    /* 0x6773: local.get $local_2 */
    /* 0x6775: local.get $local_4 */
    /* 0x6777: wasm.op_0x5d  */
    /* 0x6778: select  */
    /* 0x6779: wasm.op_0x38  */
    /* 0x677a: block 0x10 */
    /* 0x677c: local.get $local_0 */
    /* 0x677e: local.get $local_5 */
    /* 0x6780: local.get $local_0 */
    /* 0x6782: wasm.op_0x2a  */
    /* 0x6783: block 0x14 */
    /* 0x6785: local.tee $local_2 */
    /* 0x6787: local.get $local_2 */
    /* 0x6789: local.get $local_5 */
    /* 0x678b: wasm.op_0x5d  */
    /* 0x678c: select  */
    /* 0x678d: wasm.op_0x38  */
    /* 0x678e: block 0x14 */
    /* 0x6790: end  */
    return r0;
}

// ── wasm_func_302 @ 0x6794 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_302 ───
int64_t wasm_func_302(int64_t arg0, int64_t arg1) {
    /* 0x6797: local.get $local_0 */
    /* 0x6799: i32.load offset=160, align=2 */
    /* 0x679d: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x67a1: local.get $local_0 */
    /* 0x67a3: local.get $local_1 */
    /* 0x67a5: i32.store offset=164, align=2 */
    /* 0x67a9: local.get $local_0 */
    /* 0x67ab: i32.load offset=168, align=2 */
    /* 0x67af: drop  */
    /* 0x67b0: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x67b5: end  */
    /* 0x67b6: local.get $local_0 */
    /* 0x67b8: i32.load8_s offset=75, align=0 */
    /* 0x67bb: i32.const 0 */
    /* 0x67bd: i32.lt_s  */
    if (r0 != 0) { goto 0x40; }
    /* 0x67c0: local.get $local_0 */
    /* 0x67c2: i32.load offset=72, align=2 */
    /* 0x67c5: drop  */
    /* 0x67c6: local.get $local_0 */
    /* 0x67c8: i32.load offset=64, align=2 */
    r0 = _d(r0, r1);
    /* 0x67ce: end  */
    /* 0x67cf: local.get $local_0 */
    /* 0x67d1: i32.load offset=52, align=2 */
    /* 0x67d4: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x67d8: local.get $local_1 */
    /* 0x67da: local.set $local_2 */
    /* 0x67dc: local.get $local_0 */
    /* 0x67de: i32.load offset=56, align=2 */
    /* 0x67e1: local.tee $local_3 */
    /* 0x67e3: local.get $local_1 */
    /* 0x67e5: i32.ne  */
    if (r0 != 0) { goto 0x40; }
    /* 0x67e8: loop 0x40 */
    /* 0x67ea: local.get $local_3 */
    /* 0x67ec: i32.const 16 */
    /* 0x67ee: i32.sub  */
    /* 0x67ef: i32.load offset=0, align=2 */
    /* 0x67f2: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x67f6: local.get $local_3 */
    /* 0x67f8: i32.const 12 */
    /* 0x67fa: i32.sub  */
    /* 0x67fb: local.get $local_2 */
    /* 0x67fd: i32.store offset=0, align=2 */
    /* 0x6800: local.get $local_3 */
    /* 0x6802: i32.const 8 */
    /* 0x6804: i32.sub  */
    /* 0x6805: i32.load offset=0, align=2 */
    /* 0x6808: drop  */
    /* 0x6809: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x680e: end  */
    /* 0x680f: local.get $local_3 */
    /* 0x6811: i32.const 28 */
    /* 0x6813: i32.sub  */
    /* 0x6814: i32.load offset=0, align=2 */
    /* 0x6817: local.tee $local_2 */
    if (r0 != 0) { goto 0x40; }
    /* 0x681b: local.get $local_3 */
    /* 0x681d: i32.const 24 */
    /* 0x681f: i32.sub  */
    /* 0x6820: local.get $local_2 */
    /* 0x6822: i32.store offset=0, align=2 */
    /* 0x6825: local.get $local_3 */
    /* 0x6827: i32.const 20 */
    /* 0x6829: i32.sub  */
    /* 0x682a: i32.load offset=0, align=2 */
    /* 0x682d: drop  */
    /* 0x682e: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x6833: end  */
    /* 0x6834: local.get $local_1 */
    /* 0x6836: local.get $local_3 */
    /* 0x6838: i32.const 104 */
    /* 0x683b: i32.sub  */
    /* 0x683c: local.tee $local_3 */
    /* 0x683e: i32.ne  */
    if (r0 != 0) { goto 0; }
    /* 0x6841: end  */
    /* 0x6842: local.get $local_0 */
    /* 0x6844: i32.load offset=52, align=2 */
    /* 0x6847: local.set $local_2 */
    /* 0x6849: end  */
    /* 0x684a: local.get $local_0 */
    /* 0x684c: local.get $local_1 */
    /* 0x684e: i32.store offset=56, align=2 */
    /* 0x6851: local.get $local_0 */
    /* 0x6853: i32.load offset=60, align=2 */
    /* 0x6856: drop  */
    /* 0x6857: local.get $local_2 */
    r0 = _d(r0, r1);
    /* 0x685c: end  */
    /* 0x685d: local.get $local_0 */
    /* 0x685f: i32.load offset=12, align=2 */
    /* 0x6862: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x6866: local.get $local_0 */
    /* 0x6868: local.get $local_1 */
    /* 0x686a: i32.store offset=16, align=2 */
    /* 0x686d: local.get $local_0 */
    /* 0x686f: i32.load offset=20, align=2 */
    /* 0x6872: drop  */
    /* 0x6873: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x6878: end  */
    /* 0x6879: local.get $local_0 */
    /* 0x687b: i32.load offset=0, align=2 */
    /* 0x687e: local.tee $local_1 */
    if (r0 != 0) { goto 0x40; }
    /* 0x6882: local.get $local_0 */
    /* 0x6884: local.get $local_1 */
    /* 0x6886: i32.store offset=4, align=2 */
    /* 0x6889: local.get $local_0 */
    /* 0x688b: i32.load offset=8, align=2 */
    /* 0x688e: drop  */
    /* 0x688f: local.get $local_1 */
    r0 = _d(r0, r1);
    /* 0x6894: end  */
    /* 0x6895: local.get $local_0 */
    return r0;
}

