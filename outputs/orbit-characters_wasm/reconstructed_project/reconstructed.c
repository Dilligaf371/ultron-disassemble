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
static const char * const ULTRON_STR_00 = "fizz" /* @ 0x2cd38b */;
static const char * const ULTRON_STR_01 = "Fizz" /* @ 0x2cd390 */;
static const char * const ULTRON_STR_02 = "Decoded native resource exceeds its size limit or is empty" /* @ 0x2cd395 */;
static const char * const ULTRON_STR_03 = "activity" /* @ 0x2cd3d0 */;
static const char * const ULTRON_STR_04 = "applyActivity" /* @ 0x2cd3d9 */;
static const char * const ULTRON_STR_05 = "Truncated fitted accessory identity" /* @ 0x2cd3e7 */;
static const char * const ULTRON_STR_06 = "Headwear opening section has a radial singularity" /* @ 0x2cd40b */;
static const char * const ULTRON_STR_07 = "Invalid GLES draw visibility" /* @ 0x2cd43d */;
static const char * const ULTRON_STR_08 = "Invalid fitted accessory quality" /* @ 0x2cd45a */;
static const char * const ULTRON_STR_09 = "Invalid attachment contact footprint, embedding, axis or quality" /* @ 0x2cd47b */;
static const char * const ULTRON_STR_10 = "Invalid hidden front contact options, hint, or quality" /* @ 0x2cd4bc */;
static const char * const ULTRON_STR_11 = "Invalid character quality" /* @ 0x2cd4f3 */;
static const char * const ULTRON_STR_12 = "Invalid resolved eyewear quality" /* @ 0x2cd50d */;
static const char * const ULTRON_STR_13 = "Invalid resolved face quality" /* @ 0x2cd52e */;
static const char * const ULTRON_STR_14 = "Headphone outfit received an unsupported quality" /* @ 0x2cd54c */;
static const char * const ULTRON_STR_15 = "setQuality" /* @ 0x2cd57d */;
static const char * const ULTRON_STR_16 = "effectiveQuality" /* @ 0x2cd588 */;
static const char * const ULTRON_STR_17 = "GLES skin palette exceeds uniform block capacity" /* @ 0x2cd599 */;
static const char * const ULTRON_STR_18 = "Invalid, unsorted, or duplicate native resource entry" /* @ 0x2cd5ca */;
static const char * const ULTRON_STR_19 = "Invalid resolved contact geometry" /* @ 0x2cd600 */;
static const char * const ULTRON_STR_20 = "An estimated eyewear fit cannot become render geometry" /* @ 0x2cd622 */;
static const char * const ULTRON_STR_21 = "Centered aperture requires neutral pupil geometry" /* @ 0x2cd659 */;
static const char * const ULTRON_STR_22 = "Invalid body mesh geometry" /* @ 0x2cd68b */;
static const char * const ULTRON_STR_23 = "Graphic eye highlight has invalid coating geometry" /* @ 0x2cd6a6 */;
static const char * const ULTRON_STR_24 = "Swept-lid aperture has no main-eye geometry" /* @ 0x2cd6d9 */;
static const char * const ULTRON_STR_25 = "Surface pupil requires prepared white-eye geometry" /* @ 0x2cd705 */;
static const char * const ULTRON_STR_26 = "Frog eye socket requires complete eye geometry" /* @ 0x2cd738 */;
static const char * const ULTRON_STR_27 = "Beret contact lip requires finite geometry" /* @ 0x2cd767 */;
static const char * const ULTRON_STR_28 = "Fitted accessory contains eye closure geometry" /* @ 0x2cd792 */;
static const char * const ULTRON_STR_29 = "Beret rig requires finite bind geometry" /* @ 0x2cd7c1 */;
static const char * const ULTRON_STR_30 = "Clear surfaces must use rigid geometry" /* @ 0x2cd7e9 */;
static const char * const ULTRON_STR_31 = "create_directory" /* @ 0x2cd810 */;

/* ── Forward Declarations ── */
u64 re_d(u64 arg0, u64 arg1, u64 arg2); /* _d @ 0x359d (1573B) */
u64 re_wasm_func_264(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_264 @ 0x3bc3 (99B) */
u64 re_wasm_func_265(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_265 @ 0x3c27 (53B) */
u64 re_wasm_func_266(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_266 @ 0x3c5d (57B) */
u64 re_wasm_func_267(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_267 @ 0x3c98 (129B) */
u64 re_wasm_func_268(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_268 @ 0x3d1a (107B) */
u64 re_wasm_func_269(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_269 @ 0x3d86 (10B) */
u64 re_wasm_func_270(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_270 @ 0x3d91 (50B) */
u64 re_wasm_func_271(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_271 @ 0x3dc5 (219B) */
u64 re_wasm_func_272(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_272 @ 0x3ea1 (11B) */
u64 re_wasm_func_273(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_273 @ 0x3eae (436B) */
u64 re_wasm_func_274(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_274 @ 0x4064 (1401B) */
u64 re_wasm_func_275(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_275 @ 0x45de (60B) */
u64 re_wasm_func_276(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_276 @ 0x461c (220B) */
u64 re_wasm_func_277(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_277 @ 0x46fa (410B) */
u64 re_wasm_func_278(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_278 @ 0x4896 (135B) */
u64 re_wasm_func_279(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_279 @ 0x491f (1277B) */
u64 re_wasm_func_280(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_280 @ 0x4e1d (32B) */
u64 re_wasm_func_281(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_281 @ 0x4e3e (50B) */
u64 re_wasm_func_282(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_282 @ 0x4e72 (211B) */
u64 re_wasm_func_283(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_283 @ 0x4f46 (67B) */
u64 re_wasm_func_284(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_284 @ 0x4f8a (104B) */
u64 re_wasm_func_285(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_285 @ 0x4ff3 (57B) */
u64 re_wasm_func_286(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_286 @ 0x502e (264B) */
u64 re_wasm_func_287(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_287 @ 0x5138 (661B) */
u64 re_wasm_func_288(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_288 @ 0x53ce (45B) */
u64 re_wasm_func_289(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_289 @ 0x53fc (89B) */
u64 re_wasm_func_290(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_290 @ 0x5456 (80B) */
u64 re_wasm_func_291(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_291 @ 0x54a8 (381B) */
u64 re_wasm_func_292(u64 arg0, u64 arg1, u64 arg2); /* wasm_func_292 @ 0x5627 (636B) */

/*
* Reconstructed Procedure: _d (@ 0x359d, 1573 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _d ───
     * int64_t _d(int64_t arg0, int64_t arg1) {
     *     /* 0x35a0: block 0x40 * /
     *     /* 0x35a2: local.get $local_0 * /
     *     /* 0x35a4: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x35a7: local.get $local_0 * /
     *     /* 0x35a9: i32.const 8 * /
     *     /* 0x35ab: i32.sub  * /
     *     /* 0x35ac: local.tee $local_3 * /
     *     /* 0x35ae: local.get $local_0 * /
     *     /* 0x35b0: i32.const 4 * /
     *     /* 0x35b2: i32.sub  * /
     *     /* 0x35b3: i32.load offset=0, align=2 * /
     *     /* 0x35b6: local.tee $local_2 * /
     *     /* 0x35b8: i32.const -8 * /
     *     /* 0x35ba: i32.and  * /
     *     /* 0x35bb: local.tee $local_0 * /
     *     /* 0x35bd: i32.add  * /
     *     /* 0x35be: local.set $local_5 * /
     *     /* 0x35c0: block 0x40 * /
     *     /* 0x35c2: local.get $local_2 * /
     *     /* 0x35c4: i32.const 1 * /
     *     /* 0x35c6: i32.and  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x35c9: local.get $local_2 * /
     *     /* 0x35cb: i32.const 2 * /
     *     /* 0x35cd: i32.and  * /
     *     /* 0x35ce: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x35d1: local.get $local_3 * /
     *     /* 0x35d3: local.get $local_3 * /
     *     /* 0x35d5: i32.load offset=0, align=2 * /
     *     /* 0x35d8: local.tee $local_4 * /
     *     /* 0x35da: i32.sub  * /
     *     /* 0x35db: local.tee $local_3 * /
     *     /* 0x35dd: i32.const 3736848 * /
     *     /* 0x35e2: i32.load offset=0, align=2 * /
     *     /* 0x35e5: i32.lt_u  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x35e8: local.get $local_0 * /
     *     /* 0x35ea: local.get $local_4 * /
     *     /* 0x35ec: i32.add  * /
     *     /* 0x35ed: local.set $local_0 * /
     *     /* 0x35ef: block 0x40 * /
     *     /* 0x35f1: block 0x40 * /
     *     /* 0x35f3: block 0x40 * /
     *     /* 0x35f5: i32.const 3736852 * /
     *     /* 0x35fa: i32.load offset=0, align=2 * /
     *     /* 0x35fd: local.get $local_3 * /
     *     /* 0x35ff: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3602: local.get $local_3 * /
     *     /* 0x3604: i32.load offset=12, align=2 * /
     *     /* 0x3607: local.set $local_1 * /
     *     /* 0x3609: local.get $local_4 * /
     *     /* 0x360b: i32.const 255 * /
     *     /* 0x360e: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3611: local.get $local_1 * /
     *     /* 0x3613: local.get $local_3 * /
     *     /* 0x3615: i32.load offset=8, align=2 * /
     *     /* 0x3618: local.tee $local_2 * /
     *     /* 0x361a: i32.ne  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x361d: i32.const 3736832 * /
     *     /* 0x3622: i32.const 3736832 * /
     *     /* 0x3627: i32.load offset=0, align=2 * /
     *     /* 0x362a: i32.const -2 * /
     *     /* 0x362c: local.get $local_4 * /
     *     /* 0x362e: i32.const 3 * /
     *     /* 0x3630: i32.shr_u  * /
     *     /* 0x3631: i32.rotl  * /
     *     /* 0x3632: i32.and  * /
     *     /* 0x3633: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 5; }
     *     /* 0x3638: end  * /
     *     /* 0x3639: local.get $local_3 * /
     *     /* 0x363b: i32.load offset=24, align=2 * /
     *     /* 0x363e: local.set $local_7 * /
     *     /* 0x3640: local.get $local_1 * /
     *     /* 0x3642: local.get $local_3 * /
     *     /* 0x3644: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3647: local.get $local_3 * /
     *     /* 0x3649: i32.load offset=8, align=2 * /
     *     /* 0x364c: local.tee $local_2 * /
     *     /* 0x364e: local.get $local_1 * /
     *     /* 0x3650: i32.store offset=12, align=2 * /
     *     /* 0x3653: local.get $local_1 * /
     *     /* 0x3655: local.get $local_2 * /
     *     /* 0x3657: i32.store offset=8, align=2 * /
     *     if (r0 != 0) { goto 4; }
     *     /* 0x365c: end  * /
     *     /* 0x365d: local.get $local_3 * /
     *     /* 0x365f: i32.load offset=20, align=2 * /
     *     /* 0x3662: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x7f; }
     *     /* 0x3666: local.get $local_3 * /
     *     /* 0x3668: i32.const 20 * /
     *     /* 0x366a: i32.add  * /
     *     /* 0x366b: else  * /
     *     /* 0x366c: local.get $local_3 * /
     *     /* 0x366e: i32.load offset=16, align=2 * /
     *     /* 0x3671: local.tee $local_2 * /
     *     /* 0x3673: i32.eqz  * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x3676: local.get $local_3 * /
     *     /* 0x3678: i32.const 16 * /
     *     /* 0x367a: i32.add  * /
     *     /* 0x367b: end  * /
     *     /* 0x367c: local.set $local_4 * /
     *     /* 0x367e: loop 0x40 * /
     *     /* 0x3680: local.get $local_4 * /
     *     /* 0x3682: local.set $local_6 * /
     *     /* 0x3684: local.get $local_2 * /
     *     /* 0x3686: local.tee $local_1 * /
     *     /* 0x3688: i32.const 20 * /
     *     /* 0x368a: i32.add  * /
     *     /* 0x368b: local.set $local_4 * /
     *     /* 0x368d: local.get $local_1 * /
     *     /* 0x368f: i32.load offset=20, align=2 * /
     *     /* 0x3692: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3696: local.get $local_1 * /
     *     /* 0x3698: i32.const 16 * /
     *     /* 0x369a: i32.add  * /
     *     /* 0x369b: local.set $local_4 * /
     *     /* 0x369d: local.get $local_1 * /
     *     /* 0x369f: i32.load offset=16, align=2 * /
     *     /* 0x36a2: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x36a6: end  * /
     *     /* 0x36a7: local.get $local_6 * /
     *     /* 0x36a9: i32.const 0 * /
     *     /* 0x36ab: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x36b0: end  * /
     *     /* 0x36b1: local.get $local_5 * /
     *     /* 0x36b3: i32.load offset=4, align=2 * /
     *     /* 0x36b6: local.tee $local_2 * /
     *     /* 0x36b8: i32.const 3 * /
     *     /* 0x36ba: i32.and  * /
     *     /* 0x36bb: i32.const 3 * /
     *     /* 0x36bd: i32.ne  * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x36c0: i32.const 3736840 * /
     *     /* 0x36c5: local.get $local_0 * /
     *     /* 0x36c7: i32.store offset=0, align=2 * /
     *     /* 0x36ca: local.get $local_5 * /
     *     /* 0x36cc: local.get $local_2 * /
     *     /* 0x36ce: i32.const -2 * /
     *     /* 0x36d0: i32.and  * /
     *     /* 0x36d1: i32.store offset=4, align=2 * /
     *     /* 0x36d4: local.get $local_3 * /
     *     /* 0x36d6: local.get $local_0 * /
     *     /* 0x36d8: i32.const 1 * /
     *     /* 0x36da: i32.or  * /
     *     /* 0x36db: i32.store offset=4, align=2 * /
     *     /* 0x36de: local.get $local_5 * /
     *     /* 0x36e0: local.get $local_0 * /
     *     /* 0x36e2: i32.store offset=0, align=2 * /
     *     return r0;
     *     /* 0x36e6: end  * /
     *     /* 0x36e7: local.get $local_2 * /
     *     /* 0x36e9: local.get $local_1 * /
     *     /* 0x36eb: i32.store offset=12, align=2 * /
     *     /* 0x36ee: local.get $local_1 * /
     *     /* 0x36f0: local.get $local_2 * /
     *     /* 0x36f2: i32.store offset=8, align=2 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x36f7: end  * /
     *     /* 0x36f8: i32.const 0 * /
     *     /* 0x36fa: local.set $local_1 * /
     *     /* 0x36fc: end  * /
     *     /* 0x36fd: local.get $local_7 * /
     *     /* 0x36ff: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3702: block 0x40 * /
     *     /* 0x3704: local.get $local_3 * /
     *     /* 0x3706: i32.load offset=28, align=2 * /
     *     /* 0x3709: local.tee $local_4 * /
     *     /* 0x370b: i32.const 2 * /
     *     /* 0x370d: i32.shl  * /
     *     /* 0x370e: local.tee $local_2 * /
     *     /* 0x3710: i32.load offset=3737136, align=2 * /
     *     /* 0x3716: local.get $local_3 * /
     *     /* 0x3718: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x371b: local.get $local_2 * /
     *     /* 0x371d: i32.const 3737136 * /
     *     /* 0x3722: i32.add  * /
     *     /* 0x3723: local.get $local_1 * /
     *     /* 0x3725: i32.store offset=0, align=2 * /
     *     /* 0x3728: local.get $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x372c: i32.const 3736836 * /
     *     /* 0x3731: i32.const 3736836 * /
     *     /* 0x3736: i32.load offset=0, align=2 * /
     *     /* 0x3739: i32.const -2 * /
     *     /* 0x373b: local.get $local_4 * /
     *     /* 0x373d: i32.rotl  * /
     *     /* 0x373e: i32.and  * /
     *     /* 0x373f: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3744: end  * /
     *     /* 0x3745: block 0x40 * /
     *     /* 0x3747: local.get $local_3 * /
     *     /* 0x3749: local.get $local_7 * /
     *     /* 0x374b: i32.load offset=16, align=2 * /
     *     /* 0x374e: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3751: local.get $local_7 * /
     *     /* 0x3753: local.get $local_1 * /
     *     /* 0x3755: i32.store offset=16, align=2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x375a: end  * /
     *     /* 0x375b: local.get $local_7 * /
     *     /* 0x375d: local.get $local_1 * /
     *     /* 0x375f: i32.store offset=20, align=2 * /
     *     /* 0x3762: end  * /
     *     /* 0x3763: local.get $local_1 * /
     *     /* 0x3765: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3768: end  * /
     *     /* 0x3769: local.get $local_1 * /
     *     /* 0x376b: local.get $local_7 * /
     *     /* 0x376d: i32.store offset=24, align=2 * /
     *     /* 0x3770: local.get $local_3 * /
     *     /* 0x3772: i32.load offset=16, align=2 * /
     *     /* 0x3775: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3779: local.get $local_1 * /
     *     /* 0x377b: local.get $local_2 * /
     *     /* 0x377d: i32.store offset=16, align=2 * /
     *     /* 0x3780: local.get $local_2 * /
     *     /* 0x3782: local.get $local_1 * /
     *     /* 0x3784: i32.store offset=24, align=2 * /
     *     /* 0x3787: end  * /
     *     /* 0x3788: local.get $local_3 * /
     *     /* 0x378a: i32.load offset=20, align=2 * /
     *     /* 0x378d: local.tee $local_2 * /
     *     /* 0x378f: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3792: local.get $local_1 * /
     *     /* 0x3794: local.get $local_2 * /
     *     /* 0x3796: i32.store offset=20, align=2 * /
     *     /* 0x3799: local.get $local_2 * /
     *     /* 0x379b: local.get $local_1 * /
     *     /* 0x379d: i32.store offset=24, align=2 * /
     *     /* 0x37a0: end  * /
     *     /* 0x37a1: local.get $local_3 * /
     *     /* 0x37a3: local.get $local_5 * /
     *     /* 0x37a5: i32.ge_u  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x37a8: local.get $local_5 * /
     *     /* 0x37aa: i32.load offset=4, align=2 * /
     *     /* 0x37ad: local.tee $local_4 * /
     *     /* 0x37af: i32.const 1 * /
     *     /* 0x37b1: i32.and  * /
     *     /* 0x37b2: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x37b5: block 0x40 * /
     *     /* 0x37b7: block 0x40 * /
     *     /* 0x37b9: block 0x40 * /
     *     /* 0x37bb: block 0x40 * /
     *     /* 0x37bd: local.get $local_4 * /
     *     /* 0x37bf: i32.const 2 * /
     *     /* 0x37c1: i32.and  * /
     *     /* 0x37c2: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x37c5: i32.const 3736856 * /
     *     /* 0x37ca: i32.load offset=0, align=2 * /
     *     /* 0x37cd: local.get $local_5 * /
     *     /* 0x37cf: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x37d2: i32.const 3736856 * /
     *     /* 0x37d7: local.get $local_3 * /
     *     /* 0x37d9: i32.store offset=0, align=2 * /
     *     /* 0x37dc: i32.const 3736844 * /
     *     /* 0x37e1: i32.const 3736844 * /
     *     /* 0x37e6: i32.load offset=0, align=2 * /
     *     /* 0x37e9: local.get $local_0 * /
     *     /* 0x37eb: i32.add  * /
     *     /* 0x37ec: local.tee $local_0 * /
     *     /* 0x37ee: i32.store offset=0, align=2 * /
     *     /* 0x37f1: local.get $local_3 * /
     *     /* 0x37f3: local.get $local_0 * /
     *     /* 0x37f5: i32.const 1 * /
     *     /* 0x37f7: i32.or  * /
     *     /* 0x37f8: i32.store offset=4, align=2 * /
     *     /* 0x37fb: local.get $local_3 * /
     *     /* 0x37fd: i32.const 3736852 * /
     *     /* 0x3802: i32.load offset=0, align=2 * /
     *     /* 0x3805: i32.ne  * /
     *     if (r0 != 0) { goto 6; }
     *     /* 0x3808: i32.const 3736840 * /
     *     /* 0x380d: i32.const 0 * /
     *     /* 0x380f: i32.store offset=0, align=2 * /
     *     /* 0x3812: i32.const 3736852 * /
     *     /* 0x3817: i32.const 0 * /
     *     /* 0x3819: i32.store offset=0, align=2 * /
     *     return r0;
     *     /* 0x381d: end  * /
     *     /* 0x381e: i32.const 3736852 * /
     *     /* 0x3823: i32.load offset=0, align=2 * /
     *     /* 0x3826: local.tee $local_7 * /
     *     /* 0x3828: local.get $local_5 * /
     *     /* 0x382a: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x382d: i32.const 3736852 * /
     *     /* 0x3832: local.get $local_3 * /
     *     /* 0x3834: i32.store offset=0, align=2 * /
     *     /* 0x3837: i32.const 3736840 * /
     *     /* 0x383c: i32.const 3736840 * /
     *     /* 0x3841: i32.load offset=0, align=2 * /
     *     /* 0x3844: local.get $local_0 * /
     *     /* 0x3846: i32.add  * /
     *     /* 0x3847: local.tee $local_0 * /
     *     /* 0x3849: i32.store offset=0, align=2 * /
     *     /* 0x384c: local.get $local_3 * /
     *     /* 0x384e: local.get $local_0 * /
     *     /* 0x3850: i32.const 1 * /
     *     /* 0x3852: i32.or  * /
     *     /* 0x3853: i32.store offset=4, align=2 * /
     *     /* 0x3856: local.get $local_0 * /
     *     /* 0x3858: local.get $local_3 * /
     *     /* 0x385a: i32.add  * /
     *     /* 0x385b: local.get $local_0 * /
     *     /* 0x385d: i32.store offset=0, align=2 * /
     *     return r0;
     *     /* 0x3861: end  * /
     *     /* 0x3862: local.get $local_4 * /
     *     /* 0x3864: i32.const -8 * /
     *     /* 0x3866: i32.and  * /
     *     /* 0x3867: local.get $local_0 * /
     *     /* 0x3869: i32.add  * /
     *     /* 0x386a: local.set $local_0 * /
     *     /* 0x386c: local.get $local_5 * /
     *     /* 0x386e: i32.load offset=12, align=2 * /
     *     /* 0x3871: local.set $local_1 * /
     *     /* 0x3873: local.get $local_4 * /
     *     /* 0x3875: i32.const 255 * /
     *     /* 0x3878: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x387b: local.get $local_5 * /
     *     /* 0x387d: i32.load offset=8, align=2 * /
     *     /* 0x3880: local.tee $local_2 * /
     *     /* 0x3882: local.get $local_1 * /
     *     /* 0x3884: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3887: i32.const 3736832 * /
     *     /* 0x388c: i32.const 3736832 * /
     *     /* 0x3891: i32.load offset=0, align=2 * /
     *     /* 0x3894: i32.const -2 * /
     *     /* 0x3896: local.get $local_4 * /
     *     /* 0x3898: i32.const 3 * /
     *     /* 0x389a: i32.shr_u  * /
     *     /* 0x389b: i32.rotl  * /
     *     /* 0x389c: i32.and  * /
     *     /* 0x389d: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 5; }
     *     /* 0x38a2: end  * /
     *     /* 0x38a3: local.get $local_2 * /
     *     /* 0x38a5: local.get $local_1 * /
     *     /* 0x38a7: i32.store offset=12, align=2 * /
     *     /* 0x38aa: local.get $local_1 * /
     *     /* 0x38ac: local.get $local_2 * /
     *     /* 0x38ae: i32.store offset=8, align=2 * /
     *     if (r0 != 0) { goto 4; }
     *     /* 0x38b3: end  * /
     *     /* 0x38b4: local.get $local_5 * /
     *     /* 0x38b6: i32.load offset=24, align=2 * /
     *     /* 0x38b9: local.set $local_8 * /
     *     /* 0x38bb: local.get $local_1 * /
     *     /* 0x38bd: local.get $local_5 * /
     *     /* 0x38bf: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x38c2: local.get $local_5 * /
     *     /* 0x38c4: i32.load offset=8, align=2 * /
     *     /* 0x38c7: local.tee $local_2 * /
     *     /* 0x38c9: local.get $local_1 * /
     *     /* 0x38cb: i32.store offset=12, align=2 * /
     *     /* 0x38ce: local.get $local_1 * /
     *     /* 0x38d0: local.get $local_2 * /
     *     /* 0x38d2: i32.store offset=8, align=2 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x38d7: end  * /
     *     /* 0x38d8: local.get $local_5 * /
     *     /* 0x38da: i32.load offset=20, align=2 * /
     *     /* 0x38dd: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x7f; }
     *     /* 0x38e1: local.get $local_5 * /
     *     /* 0x38e3: i32.const 20 * /
     *     /* 0x38e5: i32.add  * /
     *     /* 0x38e6: else  * /
     *     /* 0x38e7: local.get $local_5 * /
     *     /* 0x38e9: i32.load offset=16, align=2 * /
     *     /* 0x38ec: local.tee $local_2 * /
     *     /* 0x38ee: i32.eqz  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x38f1: local.get $local_5 * /
     *     /* 0x38f3: i32.const 16 * /
     *     /* 0x38f5: i32.add  * /
     *     /* 0x38f6: end  * /
     *     /* 0x38f7: local.set $local_4 * /
     *     /* 0x38f9: loop 0x40 * /
     *     /* 0x38fb: local.get $local_4 * /
     *     /* 0x38fd: local.set $local_6 * /
     *     /* 0x38ff: local.get $local_2 * /
     *     /* 0x3901: local.tee $local_1 * /
     *     /* 0x3903: i32.const 20 * /
     *     /* 0x3905: i32.add  * /
     *     /* 0x3906: local.set $local_4 * /
     *     /* 0x3908: local.get $local_1 * /
     *     /* 0x390a: i32.load offset=20, align=2 * /
     *     /* 0x390d: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3911: local.get $local_1 * /
     *     /* 0x3913: i32.const 16 * /
     *     /* 0x3915: i32.add  * /
     *     /* 0x3916: local.set $local_4 * /
     *     /* 0x3918: local.get $local_1 * /
     *     /* 0x391a: i32.load offset=16, align=2 * /
     *     /* 0x391d: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3921: end  * /
     *     /* 0x3922: local.get $local_6 * /
     *     /* 0x3924: i32.const 0 * /
     *     /* 0x3926: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x392b: end  * /
     *     /* 0x392c: local.get $local_5 * /
     *     /* 0x392e: local.get $local_4 * /
     *     /* 0x3930: i32.const -2 * /
     *     /* 0x3932: i32.and  * /
     *     /* 0x3933: i32.store offset=4, align=2 * /
     *     /* 0x3936: local.get $local_3 * /
     *     /* 0x3938: local.get $local_0 * /
     *     /* 0x393a: i32.const 1 * /
     *     /* 0x393c: i32.or  * /
     *     /* 0x393d: i32.store offset=4, align=2 * /
     *     /* 0x3940: local.get $local_0 * /
     *     /* 0x3942: local.get $local_3 * /
     *     /* 0x3944: i32.add  * /
     *     /* 0x3945: local.get $local_0 * /
     *     /* 0x3947: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x394c: end  * /
     *     /* 0x394d: i32.const 0 * /
     *     /* 0x394f: local.set $local_1 * /
     *     /* 0x3951: end  * /
     *     /* 0x3952: local.get $local_8 * /
     *     /* 0x3954: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3957: block 0x40 * /
     *     /* 0x3959: local.get $local_5 * /
     *     /* 0x395b: i32.load offset=28, align=2 * /
     *     /* 0x395e: local.tee $local_4 * /
     *     /* 0x3960: i32.const 2 * /
     *     /* 0x3962: i32.shl  * /
     *     /* 0x3963: local.tee $local_2 * /
     *     /* 0x3965: i32.load offset=3737136, align=2 * /
     *     /* 0x396b: local.get $local_5 * /
     *     /* 0x396d: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3970: local.get $local_2 * /
     *     /* 0x3972: i32.const 3737136 * /
     *     /* 0x3977: i32.add  * /
     *     /* 0x3978: local.get $local_1 * /
     *     /* 0x397a: i32.store offset=0, align=2 * /
     *     /* 0x397d: local.get $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3981: i32.const 3736836 * /
     *     /* 0x3986: i32.const 3736836 * /
     *     /* 0x398b: i32.load offset=0, align=2 * /
     *     /* 0x398e: i32.const -2 * /
     *     /* 0x3990: local.get $local_4 * /
     *     /* 0x3992: i32.rotl  * /
     *     /* 0x3993: i32.and  * /
     *     /* 0x3994: i32.store offset=0, align=2 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3999: end  * /
     *     /* 0x399a: block 0x40 * /
     *     /* 0x399c: local.get $local_5 * /
     *     /* 0x399e: local.get $local_8 * /
     *     /* 0x39a0: i32.load offset=16, align=2 * /
     *     /* 0x39a3: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x39a6: local.get $local_8 * /
     *     /* 0x39a8: local.get $local_1 * /
     *     /* 0x39aa: i32.store offset=16, align=2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x39af: end  * /
     *     /* 0x39b0: local.get $local_8 * /
     *     /* 0x39b2: local.get $local_1 * /
     *     /* 0x39b4: i32.store offset=20, align=2 * /
     *     /* 0x39b7: end  * /
     *     /* 0x39b8: local.get $local_1 * /
     *     /* 0x39ba: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x39bd: end  * /
     *     /* 0x39be: local.get $local_1 * /
     *     /* 0x39c0: local.get $local_8 * /
     *     /* 0x39c2: i32.store offset=24, align=2 * /
     *     /* 0x39c5: local.get $local_5 * /
     *     /* 0x39c7: i32.load offset=16, align=2 * /
     *     /* 0x39ca: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x39ce: local.get $local_1 * /
     *     /* 0x39d0: local.get $local_2 * /
     *     /* 0x39d2: i32.store offset=16, align=2 * /
     *     /* 0x39d5: local.get $local_2 * /
     *     /* 0x39d7: local.get $local_1 * /
     *     /* 0x39d9: i32.store offset=24, align=2 * /
     *     /* 0x39dc: end  * /
     *     /* 0x39dd: local.get $local_5 * /
     *     /* 0x39df: i32.load offset=20, align=2 * /
     *     /* 0x39e2: local.tee $local_2 * /
     *     /* 0x39e4: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x39e7: local.get $local_1 * /
     *     /* 0x39e9: local.get $local_2 * /
     *     /* 0x39eb: i32.store offset=20, align=2 * /
     *     /* 0x39ee: local.get $local_2 * /
     *     /* 0x39f0: local.get $local_1 * /
     *     /* 0x39f2: i32.store offset=24, align=2 * /
     *     /* 0x39f5: end  * /
     *     /* 0x39f6: local.get $local_3 * /
     *     /* 0x39f8: local.get $local_0 * /
     *     /* 0x39fa: i32.const 1 * /
     *     /* 0x39fc: i32.or  * /
     *     /* 0x39fd: i32.store offset=4, align=2 * /
     *     /* 0x3a00: local.get $local_0 * /
     *     /* 0x3a02: local.get $local_3 * /
     *     /* 0x3a04: i32.add  * /
     *     /* 0x3a05: local.get $local_0 * /
     *     /* 0x3a07: i32.store offset=0, align=2 * /
     *     /* 0x3a0a: local.get $local_3 * /
     *     /* 0x3a0c: local.get $local_7 * /
     *     /* 0x3a0e: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3a11: i32.const 3736840 * /
     *     /* 0x3a16: local.get $local_0 * /
     *     /* 0x3a18: i32.store offset=0, align=2 * /
     *     return r0;
     *     /* 0x3a1c: end  * /
     *     /* 0x3a1d: local.get $local_0 * /
     *     /* 0x3a1f: i32.const 255 * /
     *     /* 0x3a22: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3a25: local.get $local_0 * /
     *     /* 0x3a27: i32.const 248 * /
     *     /* 0x3a2a: i32.and  * /
     *     /* 0x3a2b: i32.const 3736872 * /
     *     /* 0x3a30: i32.add  * /
     *     /* 0x3a31: local.set $local_2 * /
     *     /* 0x3a33: block 0x7f * /
     *     /* 0x3a35: i32.const 3736832 * /
     *     /* 0x3a3a: i32.load offset=0, align=2 * /
     *     /* 0x3a3d: local.tee $local_4 * /
     *     /* 0x3a3f: i32.const 1 * /
     *     /* 0x3a41: local.get $local_0 * /
     *     /* 0x3a43: i32.const 3 * /
     *     /* 0x3a45: i32.shr_u  * /
     *     /* 0x3a46: i32.shl  * /
     *     /* 0x3a47: local.tee $local_0 * /
     *     /* 0x3a49: i32.and  * /
     *     /* 0x3a4a: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3a4d: i32.const 3736832 * /
     *     /* 0x3a52: local.get $local_0 * /
     *     /* 0x3a54: local.get $local_4 * /
     *     /* 0x3a56: i32.or  * /
     *     /* 0x3a57: i32.store offset=0, align=2 * /
     *     /* 0x3a5a: local.get $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3a5e: end  * /
     *     /* 0x3a5f: local.get $local_2 * /
     *     /* 0x3a61: i32.load offset=8, align=2 * /
     *     /* 0x3a64: end  * /
     *     /* 0x3a65: local.set $local_0 * /
     *     /* 0x3a67: local.get $local_2 * /
     *     /* 0x3a69: local.get $local_3 * /
     *     /* 0x3a6b: i32.store offset=8, align=2 * /
     *     /* 0x3a6e: local.get $local_0 * /
     *     /* 0x3a70: local.get $local_3 * /
     *     /* 0x3a72: i32.store offset=12, align=2 * /
     *     /* 0x3a75: local.get $local_3 * /
     *     /* 0x3a77: local.get $local_2 * /
     *     /* 0x3a79: i32.store offset=12, align=2 * /
     *     /* 0x3a7c: local.get $local_3 * /
     *     /* 0x3a7e: local.get $local_0 * /
     *     /* 0x3a80: i32.store offset=8, align=2 * /
     *     return r0;
     *     /* 0x3a84: end  * /
     *     /* 0x3a85: i32.const 31 * /
     *     /* 0x3a87: local.set $local_1 * /
     *     /* 0x3a89: local.get $local_0 * /
     *     /* 0x3a8b: i32.const 16777215 * /
     *     /* 0x3a90: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3a93: local.get $local_0 * /
     *     /* 0x3a95: i32.const 38 * /
     *     /* 0x3a97: local.get $local_0 * /
     *     /* 0x3a99: i32.const 8 * /
     *     /* 0x3a9b: i32.shr_u  * /
     *     /* 0x3a9c: wasm.op_0x67  * /
     *     /* 0x3a9d: local.tee $local_2 * /
     *     /* 0x3a9f: i32.sub  * /
     *     /* 0x3aa0: i32.shr_u  * /
     *     /* 0x3aa1: i32.const 1 * /
     *     /* 0x3aa3: i32.and  * /
     *     /* 0x3aa4: local.get $local_2 * /
     *     /* 0x3aa6: i32.const 1 * /
     *     /* 0x3aa8: i32.shl  * /
     *     /* 0x3aa9: i32.or  * /
     *     /* 0x3aaa: i32.const 62 * /
     *     /* 0x3aac: i32.xor  * /
     *     /* 0x3aad: local.set $local_1 * /
     *     /* 0x3aaf: end  * /
     *     /* 0x3ab0: local.get $local_3 * /
     *     /* 0x3ab2: local.get $local_1 * /
     *     /* 0x3ab4: i32.store offset=28, align=2 * /
     *     /* 0x3ab7: local.get $local_3 * /
     *     /* 0x3ab9: i64.const 0x0 * /
     *     /* 0x3abb: i64.store offset=16, align=2 * /
     *     /* 0x3abe: local.get $local_1 * /
     *     /* 0x3ac0: i32.const 2 * /
     *     /* 0x3ac2: i32.shl  * /
     *     /* 0x3ac3: i32.const 3737136 * /
     *     /* 0x3ac8: i32.add  * /
     *     /* 0x3ac9: local.set $local_4 * /
     *     /* 0x3acb: block 0x7f * /
     *     /* 0x3acd: block 0x40 * /
     *     /* 0x3acf: block 0x7f * /
     *     /* 0x3ad1: i32.const 3736836 * /
     *     /* 0x3ad6: i32.load offset=0, align=2 * /
     *     /* 0x3ad9: local.tee $local_6 * /
     *     /* 0x3adb: i32.const 1 * /
     *     /* 0x3add: local.get $local_1 * /
     *     /* 0x3adf: i32.shl  * /
     *     /* 0x3ae0: local.tee $local_2 * /
     *     /* 0x3ae2: i32.and  * /
     *     /* 0x3ae3: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3ae6: i32.const 3736836 * /
     *     /* 0x3aeb: local.get $local_2 * /
     *     /* 0x3aed: local.get $local_6 * /
     *     /* 0x3aef: i32.or  * /
     *     /* 0x3af0: i32.store offset=0, align=2 * /
     *     /* 0x3af3: local.get $local_4 * /
     *     /* 0x3af5: local.get $local_3 * /
     *     /* 0x3af7: i32.store offset=0, align=2 * /
     *     /* 0x3afa: i32.const 24 * /
     *     /* 0x3afc: local.set $local_1 * /
     *     /* 0x3afe: i32.const 8 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3b02: end  * /
     *     /* 0x3b03: local.get $local_0 * /
     *     /* 0x3b05: i32.const 25 * /
     *     /* 0x3b07: local.get $local_1 * /
     *     /* 0x3b09: i32.const 1 * /
     *     /* 0x3b0b: i32.shr_u  * /
     *     /* 0x3b0c: i32.sub  * /
     *     /* 0x3b0d: i32.const 0 * /
     *     /* 0x3b0f: local.get $local_1 * /
     *     /* 0x3b11: i32.const 31 * /
     *     /* 0x3b13: i32.ne  * /
     *     /* 0x3b14: select  * /
     *     /* 0x3b15: i32.shl  * /
     *     /* 0x3b16: local.set $local_1 * /
     *     /* 0x3b18: local.get $local_4 * /
     *     /* 0x3b1a: i32.load offset=0, align=2 * /
     *     /* 0x3b1d: local.set $local_4 * /
     *     /* 0x3b1f: loop 0x40 * /
     *     /* 0x3b21: local.get $local_4 * /
     *     /* 0x3b23: local.tee $local_2 * /
     *     /* 0x3b25: i32.load offset=4, align=2 * /
     *     /* 0x3b28: i32.const -8 * /
     *     /* 0x3b2a: i32.and  * /
     *     /* 0x3b2b: local.get $local_0 * /
     *     /* 0x3b2d: i32.eq  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3b30: local.get $local_1 * /
     *     /* 0x3b32: i32.const 29 * /
     *     /* 0x3b34: i32.shr_u  * /
     *     /* 0x3b35: local.set $local_4 * /
     *     /* 0x3b37: local.get $local_1 * /
     *     /* 0x3b39: i32.const 1 * /
     *     /* 0x3b3b: i32.shl  * /
     *     /* 0x3b3c: local.set $local_1 * /
     *     /* 0x3b3e: local.get $local_2 * /
     *     /* 0x3b40: local.get $local_4 * /
     *     /* 0x3b42: i32.const 4 * /
     *     /* 0x3b44: i32.and  * /
     *     /* 0x3b45: i32.add  * /
     *     /* 0x3b46: local.tee $local_6 * /
     *     /* 0x3b48: i32.load offset=16, align=2 * /
     *     /* 0x3b4b: local.tee $local_4 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3b4f: end  * /
     *     /* 0x3b50: local.get $local_6 * /
     *     /* 0x3b52: local.get $local_3 * /
     *     /* 0x3b54: i32.store offset=16, align=2 * /
     *     /* 0x3b57: i32.const 24 * /
     *     /* 0x3b59: local.set $local_1 * /
     *     /* 0x3b5b: local.get $local_2 * /
     *     /* 0x3b5d: local.set $local_4 * /
     *     /* 0x3b5f: i32.const 8 * /
     *     /* 0x3b61: end  * /
     *     /* 0x3b62: local.set $local_0 * /
     *     /* 0x3b64: local.get $local_3 * /
     *     /* 0x3b66: local.tee $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3b6a: end  * /
     *     /* 0x3b6b: local.get $local_2 * /
     *     /* 0x3b6d: i32.load offset=8, align=2 * /
     *     /* 0x3b70: local.tee $local_4 * /
     *     /* 0x3b72: local.get $local_3 * /
     *     /* 0x3b74: i32.store offset=12, align=2 * /
     *     /* 0x3b77: local.get $local_2 * /
     *     /* 0x3b79: local.get $local_3 * /
     *     /* 0x3b7b: i32.store offset=8, align=2 * /
     *     /* 0x3b7e: i32.const 24 * /
     *     /* 0x3b80: local.set $local_0 * /
     *     /* 0x3b82: i32.const 8 * /
     *     /* 0x3b84: local.set $local_1 * /
     *     /* 0x3b86: i32.const 0 * /
     *     /* 0x3b88: end  * /
     *     /* 0x3b89: local.set $local_6 * /
     *     /* 0x3b8b: local.get $local_1 * /
     *     /* 0x3b8d: local.get $local_3 * /
     *     /* 0x3b8f: i32.add  * /
     *     /* 0x3b90: local.get $local_4 * /
     *     /* 0x3b92: i32.store offset=0, align=2 * /
     *     /* 0x3b95: local.get $local_3 * /
     *     /* 0x3b97: local.get $local_2 * /
     *     /* 0x3b99: i32.store offset=12, align=2 * /
     *     /* 0x3b9c: local.get $local_0 * /
     *     /* 0x3b9e: local.get $local_3 * /
     *     /* 0x3ba0: i32.add  * /
     *     /* 0x3ba1: local.get $local_6 * /
     *     /* 0x3ba3: i32.store offset=0, align=2 * /
     *     /* 0x3ba6: i32.const 3736864 * /
     *     /* 0x3bab: i32.const 3736864 * /
     *     /* 0x3bb0: i32.load offset=0, align=2 * /
     *     /* 0x3bb3: i32.const 1 * /
     *     /* 0x3bb5: i32.sub  * /
     *     /* 0x3bb6: local.tee $local_0 * /
     *     /* 0x3bb8: i32.const -1 * /
     *     /* 0x3bba: local.get $local_0 * /
     *     /* 0x3bbc: select  * /
     *     /* 0x3bbd: i32.store offset=0, align=2 * /
     *     /* 0x3bc0: end  * /
     *     return r0;
     * }
*/
u64 re_d(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x359dULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_264 (@ 0x3bc3, 99 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_264 ───
     * int64_t wasm_func_264(int64_t arg0, int64_t arg1) {
     *     /* 0x3bc6: i32.const 3737328 * /
     *     /* 0x3bcb: i32.const 0 * /
     *     /* 0x3bcd: i32.store offset=0, align=2 * /
     *     /* 0x3bd0: i32.const 1757 * /
     *     /* 0x3bd3: local.get $local_0 * /
     *     /* 0x3bd5: i32.const 27 * /
     *     /* 0x3bd7: i32.add  * /
     *     /* 0x3bd8: i32.const -4 * /
     *     /* 0x3bda: i32.and  * /
     *     /* 0x3bdb: local.tee $local_1 * /
     *     r0 = imp_f(r0, r1);
     *     /* 0x3bdf: local.set $local_0 * /
     *     /* 0x3be1: i32.const 3737328 * /
     *     /* 0x3be6: i32.load offset=0, align=2 * /
     *     /* 0x3be9: local.set $local_2 * /
     *     /* 0x3beb: i32.const 3737328 * /
     *     /* 0x3bf0: i32.const 0 * /
     *     /* 0x3bf2: i32.store offset=0, align=2 * /
     *     /* 0x3bf5: block 0x40 * /
     *     /* 0x3bf7: local.get $local_2 * /
     *     /* 0x3bf9: i32.const 1 * /
     *     /* 0x3bfb: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3bfe: local.get $local_0 * /
     *     /* 0x3c00: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3c03: local.get $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3c07: local.get $local_0 * /
     *     /* 0x3c09: i32.const 0 * /
     *     /* 0x3c0b: local.get $local_1 * /
     *     /* 0x3c0d: wasm.op_0xfc  * /
     *     /* 0x3c0e: end  * /
     *     /* 0x3c0f: unreachable  * /
     *     /* 0x3c10: end  * /
     *     /* 0x3c11: local.get $local_0 * /
     *     /* 0x3c13: i32.const 24 * /
     *     /* 0x3c15: i32.add  * /
     *     return r0;
     *     /* 0x3c17: end  * /
     *     /* 0x3c18: i32.const 0 * /
     *     r0 = imp_k(r0, r1);
     *     r0 = wasm_func_272(r0, r1);
     *     /* 0x3c1f: unreachable  * /
     *     /* 0x3c20: end  * /
     *     r0 = wasm_func_748(r0, r1);
     *     /* 0x3c24: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_264(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3bc3ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: wasm_func_265 (@ 0x3c27, 53 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_265 ───
     * int64_t wasm_func_265(int64_t arg0, int64_t arg1) {
     *     /* 0x3c28: i32.const 3737328 * /
     *     /* 0x3c2d: i32.const 0 * /
     *     /* 0x3c2f: i32.store offset=0, align=2 * /
     *     /* 0x3c32: local.get $local_0 * /
     *     /* 0x3c34: i32.const 24 * /
     *     /* 0x3c36: i32.sub  * /
     *     r0 = wasm_func_1026(r0, r1);
     *     /* 0x3c3a: i32.const 3737328 * /
     *     /* 0x3c3f: i32.load offset=0, align=2 * /
     *     /* 0x3c42: i32.const 3737328 * /
     *     /* 0x3c47: i32.const 0 * /
     *     /* 0x3c49: i32.store offset=0, align=2 * /
     *     /* 0x3c4c: i32.const 1 * /
     *     /* 0x3c4e: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     return r0;
     *     /* 0x3c52: end  * /
     *     /* 0x3c53: i32.const 0 * /
     *     r0 = imp_k(r0, r1);
     *     r0 = wasm_func_272(r0, r1);
     *     /* 0x3c5a: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_265(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3c27ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: wasm_func_266 (@ 0x3c5d, 57 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_266 ───
     * int64_t wasm_func_266(int64_t arg0, int64_t arg1) {
     *     /* 0x3c60: i32.const 1 * /
     *     /* 0x3c62: local.get $local_0 * /
     *     /* 0x3c64: local.get $local_0 * /
     *     /* 0x3c66: i32.const 1 * /
     *     /* 0x3c68: i32.le_u  * /
     *     /* 0x3c69: select  * /
     *     /* 0x3c6a: local.set $local_0 * /
     *     /* 0x3c6c: block 0x40 * /
     *     /* 0x3c6e: loop 0x40 * /
     *     /* 0x3c70: local.get $local_0 * /
     *     r0 = Zd(r0, r1);
     *     /* 0x3c75: local.tee $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3c79: i32.const 3737412 * /
     *     /* 0x3c7e: i32.load offset=0, align=2 * /
     *     /* 0x3c81: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3c85: local.get $local_1 * /
     *     /* 0x3c87: wasm.op_0x11  * /
     *     /* 0x3c88: end  * /
     *     /* 0x3c89: unreachable  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3c8c: end  * /
     *     /* 0x3c8d: end  * /
     *     r0 = wasm_func_1043(r0, r1);
     *     /* 0x3c91: unreachable  * /
     *     /* 0x3c92: end  * /
     *     /* 0x3c93: local.get $local_1 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_266(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3c5dULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_267 (@ 0x3c98, 129 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_267 ───
     * int64_t wasm_func_267(int64_t arg0, int64_t arg1) {
     *     /* 0x3c9b: block 0x40 * /
     *     /* 0x3c9d: block 0x40 * /
     *     /* 0x3c9f: local.get $local_2 * /
     *     /* 0x3ca1: i32.const 4 * /
     *     /* 0x3ca3: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3ca6: local.get $local_0 * /
     *     /* 0x3ca8: local.get $local_1 * /
     *     /* 0x3caa: i32.or  * /
     *     /* 0x3cab: i32.const 3 * /
     *     /* 0x3cad: i32.and  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3cb0: loop 0x40 * /
     *     /* 0x3cb2: local.get $local_0 * /
     *     /* 0x3cb4: i32.load offset=0, align=2 * /
     *     /* 0x3cb7: local.get $local_1 * /
     *     /* 0x3cb9: i32.load offset=0, align=2 * /
     *     /* 0x3cbc: i32.ne  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3cbf: local.get $local_1 * /
     *     /* 0x3cc1: i32.const 4 * /
     *     /* 0x3cc3: i32.add  * /
     *     /* 0x3cc4: local.set $local_1 * /
     *     /* 0x3cc6: local.get $local_0 * /
     *     /* 0x3cc8: i32.const 4 * /
     *     /* 0x3cca: i32.add  * /
     *     /* 0x3ccb: local.set $local_0 * /
     *     /* 0x3ccd: local.get $local_2 * /
     *     /* 0x3ccf: i32.const 4 * /
     *     /* 0x3cd1: i32.sub  * /
     *     /* 0x3cd2: local.tee $local_2 * /
     *     /* 0x3cd4: i32.const 3 * /
     *     /* 0x3cd6: i32.gt_u  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3cd9: end  * /
     *     /* 0x3cda: end  * /
     *     /* 0x3cdb: local.get $local_2 * /
     *     /* 0x3cdd: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3ce0: end  * /
     *     /* 0x3ce1: loop 0x40 * /
     *     /* 0x3ce3: local.get $local_0 * /
     *     /* 0x3ce5: i32.load8_u offset=0, align=0 * /
     *     /* 0x3ce8: local.tee $local_3 * /
     *     /* 0x3cea: local.get $local_1 * /
     *     /* 0x3cec: i32.load8_u offset=0, align=0 * /
     *     /* 0x3cef: local.tee $local_4 * /
     *     /* 0x3cf1: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3cf4: local.get $local_1 * /
     *     /* 0x3cf6: i32.const 1 * /
     *     /* 0x3cf8: i32.add  * /
     *     /* 0x3cf9: local.set $local_1 * /
     *     /* 0x3cfb: local.get $local_0 * /
     *     /* 0x3cfd: i32.const 1 * /
     *     /* 0x3cff: i32.add  * /
     *     /* 0x3d00: local.set $local_0 * /
     *     /* 0x3d02: local.get $local_2 * /
     *     /* 0x3d04: i32.const 1 * /
     *     /* 0x3d06: i32.sub  * /
     *     /* 0x3d07: local.tee $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3d0d: end  * /
     *     /* 0x3d0e: end  * /
     *     /* 0x3d0f: local.get $local_3 * /
     *     /* 0x3d11: local.get $local_4 * /
     *     /* 0x3d13: i32.sub  * /
     *     return r0;
     *     /* 0x3d15: end  * /
     *     /* 0x3d16: i32.const 0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_267(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3c98ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_268 (@ 0x3d1a, 107 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_268 ───
     * int64_t wasm_func_268(int64_t arg0, int64_t arg1) {
     *     /* 0x3d1d: global.get $global_0 * /
     *     /* 0x3d1f: i32.const 16 * /
     *     /* 0x3d21: i32.sub  * /
     *     /* 0x3d22: local.tee $local_5 * /
     *     /* 0x3d24: global.get $global_4 * /
     *     /* 0x3d26: i32.gt_u  * /
     *     /* 0x3d27: local.get $local_5 * /
     *     /* 0x3d29: global.get $global_5 * /
     *     /* 0x3d2b: i32.lt_u  * /
     *     /* 0x3d2c: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3d2f: local.get $local_5 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x3d33: end  * /
     *     /* 0x3d34: local.get $local_5 * /
     *     /* 0x3d36: global.set $global_0 * /
     *     /* 0x3d38: local.get $local_5 * /
     *     /* 0x3d3a: local.get $local_1 * /
     *     /* 0x3d3c: local.get $local_2 * /
     *     /* 0x3d3e: local.get $local_3 * /
     *     /* 0x3d40: local.get $local_4 * /
     *     /* 0x3d42: i64.const 0x8000000000000000 * /
     *     /* 0x3d4d: i64.xor  * /
     *     r0 = wasm_func_279(r0, r1);
     *     /* 0x3d51: local.get $local_5 * /
     *     /* 0x3d53: i64.load offset=0, align=3 * /
     *     /* 0x3d56: local.set $local_1 * /
     *     /* 0x3d58: local.get $local_0 * /
     *     /* 0x3d5a: local.get $local_5 * /
     *     /* 0x3d5c: i64.load offset=8, align=3 * /
     *     /* 0x3d5f: i64.store offset=8, align=3 * /
     *     /* 0x3d62: local.get $local_0 * /
     *     /* 0x3d64: local.get $local_1 * /
     *     /* 0x3d66: i64.store offset=0, align=3 * /
     *     /* 0x3d69: local.get $local_5 * /
     *     /* 0x3d6b: i32.const 16 * /
     *     /* 0x3d6d: i32.add  * /
     *     /* 0x3d6e: local.tee $local_0 * /
     *     /* 0x3d70: global.get $global_4 * /
     *     /* 0x3d72: i32.gt_u  * /
     *     /* 0x3d73: local.get $local_0 * /
     *     /* 0x3d75: global.get $global_5 * /
     *     /* 0x3d77: i32.lt_u  * /
     *     /* 0x3d78: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3d7b: local.get $local_0 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x3d7f: end  * /
     *     /* 0x3d80: local.get $local_0 * /
     *     /* 0x3d82: global.set $global_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_268(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3d1aULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: wasm_func_269 (@ 0x3d86, 10 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_269 ───
     * int64_t wasm_func_269(int64_t arg0, int64_t arg1) {
     *     /* 0x3d87: i32.const 14827 * /
     *     r0 = wasm_func_1248(r0, r1);
     *     /* 0x3d8e: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_269(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3d86ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: wasm_func_270 (@ 0x3d91, 50 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_270 ───
     * int64_t wasm_func_270(int64_t arg0, int64_t arg1) {
     *     /* 0x3d92: local.get $local_0 * /
     *     /* 0x3d94: local.get $local_1 * /
     *     /* 0x3d96: wasm.op_0x2a  * /
     *     /* 0x3d97: block 0x00 * /
     *     /* 0x3d99: local.get $local_2 * /
     *     /* 0x3d9b: wasm.op_0x2a  * /
     *     /* 0x3d9c: block 0x00 * /
     *     /* 0x3d9e: wasm.op_0x92  * /
     *     /* 0x3d9f: wasm.op_0x38  * /
     *     /* 0x3da0: block 0x00 * /
     *     /* 0x3da2: local.get $local_0 * /
     *     /* 0x3da4: local.get $local_1 * /
     *     /* 0x3da6: wasm.op_0x2a  * /
     *     /* 0x3da7: block 0x04 * /
     *     /* 0x3da9: local.get $local_2 * /
     *     /* 0x3dab: wasm.op_0x2a  * /
     *     /* 0x3dac: block 0x04 * /
     *     /* 0x3dae: wasm.op_0x92  * /
     *     /* 0x3daf: wasm.op_0x38  * /
     *     /* 0x3db0: block 0x04 * /
     *     /* 0x3db2: local.get $local_0 * /
     *     /* 0x3db4: local.get $local_1 * /
     *     /* 0x3db6: wasm.op_0x2a  * /
     *     /* 0x3db7: block 0x08 * /
     *     /* 0x3db9: local.get $local_2 * /
     *     /* 0x3dbb: wasm.op_0x2a  * /
     *     /* 0x3dbc: block 0x08 * /
     *     /* 0x3dbe: wasm.op_0x92  * /
     *     /* 0x3dbf: wasm.op_0x38  * /
     *     /* 0x3dc0: block 0x08 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_270(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3d91ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_271 (@ 0x3dc5, 219 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_271 ───
     * int64_t wasm_func_271(int64_t arg0, int64_t arg1) {
     *     /* 0x3dca: i32.const 1 * /
     *     /* 0x3dcc: local.set $local_4 * /
     *     /* 0x3dce: block 0x40 * /
     *     /* 0x3dd0: local.get $local_0 * /
     *     /* 0x3dd2: i64.const 0x0 * /
     *     /* 0x3dd4: i64.ne  * /
     *     /* 0x3dd5: local.get $local_1 * /
     *     /* 0x3dd7: i64.const 0x7fffffffffffffff * /
     *     /* 0x3de2: i64.and  * /
     *     /* 0x3de3: local.tee $local_5 * /
     *     /* 0x3de5: i64.const 0x7fff000000000000 * /
     *     /* 0x3df0: wasm.op_0x56  * /
     *     /* 0x3df1: local.get $local_5 * /
     *     /* 0x3df3: i64.const 0x7fff000000000000 * /
     *     /* 0x3dfe: i64.eq  * /
     *     /* 0x3dff: select  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3e02: local.get $local_2 * /
     *     /* 0x3e04: i64.const 0x0 * /
     *     /* 0x3e06: i64.ne  * /
     *     /* 0x3e07: local.get $local_3 * /
     *     /* 0x3e09: i64.const 0x7fffffffffffffff * /
     *     /* 0x3e14: i64.and  * /
     *     /* 0x3e15: local.tee $local_6 * /
     *     /* 0x3e17: i64.const 0x7fff000000000000 * /
     *     /* 0x3e22: wasm.op_0x56  * /
     *     /* 0x3e23: local.get $local_6 * /
     *     /* 0x3e25: i64.const 0x7fff000000000000 * /
     *     /* 0x3e30: i64.eq  * /
     *     /* 0x3e31: select  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x3e34: local.get $local_0 * /
     *     /* 0x3e36: local.get $local_2 * /
     *     /* 0x3e38: i64.or  * /
     *     /* 0x3e39: local.get $local_5 * /
     *     /* 0x3e3b: local.get $local_6 * /
     *     /* 0x3e3d: i64.or  * /
     *     /* 0x3e3e: i64.or  * /
     *     /* 0x3e3f: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3e42: i32.const 0 * /
     *     return r0;
     *     /* 0x3e45: end  * /
     *     /* 0x3e46: local.get $local_1 * /
     *     /* 0x3e48: local.get $local_3 * /
     *     /* 0x3e4a: i64.and  * /
     *     /* 0x3e4b: i64.const 0x0 * /
     *     /* 0x3e4d: wasm.op_0x59  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3e50: local.get $local_0 * /
     *     /* 0x3e52: local.get $local_2 * /
     *     /* 0x3e54: wasm.op_0x54  * /
     *     /* 0x3e55: local.get $local_1 * /
     *     /* 0x3e57: local.get $local_3 * /
     *     /* 0x3e59: wasm.op_0x53  * /
     *     /* 0x3e5a: local.get $local_1 * /
     *     /* 0x3e5c: local.get $local_3 * /
     *     /* 0x3e5e: i64.eq  * /
     *     /* 0x3e5f: select  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3e62: i32.const -1 * /
     *     return r0;
     *     /* 0x3e65: end  * /
     *     /* 0x3e66: local.get $local_0 * /
     *     /* 0x3e68: local.get $local_2 * /
     *     /* 0x3e6a: i64.xor  * /
     *     /* 0x3e6b: local.get $local_1 * /
     *     /* 0x3e6d: local.get $local_3 * /
     *     /* 0x3e6f: i64.xor  * /
     *     /* 0x3e70: i64.or  * /
     *     /* 0x3e71: i64.const 0x0 * /
     *     /* 0x3e73: i64.ne  * /
     *     return r0;
     *     /* 0x3e75: end  * /
     *     /* 0x3e76: local.get $local_0 * /
     *     /* 0x3e78: local.get $local_2 * /
     *     /* 0x3e7a: wasm.op_0x56  * /
     *     /* 0x3e7b: local.get $local_1 * /
     *     /* 0x3e7d: local.get $local_3 * /
     *     /* 0x3e7f: wasm.op_0x55  * /
     *     /* 0x3e80: local.get $local_1 * /
     *     /* 0x3e82: local.get $local_3 * /
     *     /* 0x3e84: i64.eq  * /
     *     /* 0x3e85: select  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3e88: i32.const -1 * /
     *     return r0;
     *     /* 0x3e8b: end  * /
     *     /* 0x3e8c: local.get $local_0 * /
     *     /* 0x3e8e: local.get $local_2 * /
     *     /* 0x3e90: i64.xor  * /
     *     /* 0x3e91: local.get $local_1 * /
     *     /* 0x3e93: local.get $local_3 * /
     *     /* 0x3e95: i64.xor  * /
     *     /* 0x3e96: i64.or  * /
     *     /* 0x3e97: i64.const 0x0 * /
     *     /* 0x3e99: i64.ne  * /
     *     /* 0x3e9a: local.set $local_4 * /
     *     /* 0x3e9c: end  * /
     *     /* 0x3e9d: local.get $local_4 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_271(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3dc5ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_272 (@ 0x3ea1, 11 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_272 ───
     * int64_t wasm_func_272(int64_t arg0, int64_t arg1) {
     *     /* 0x3ea2: local.get $local_0 * /
     *     r0 = imp_q(r0, r1);
     *     /* 0x3ea6: drop  * /
     *     r0 = wasm_func_748(r0, r1);
     *     /* 0x3eaa: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_272(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3ea1ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_273 (@ 0x3eae, 436 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_273 ───
     * int64_t wasm_func_273(int64_t arg0, int64_t arg1) {
     *     /* 0x3eb3: global.get $global_0 * /
     *     /* 0x3eb5: i32.const 16 * /
     *     /* 0x3eb7: i32.sub  * /
     *     /* 0x3eb8: local.tee $local_3 * /
     *     /* 0x3eba: local.tee $local_1 * /
     *     /* 0x3ebc: global.get $global_4 * /
     *     /* 0x3ebe: i32.gt_u  * /
     *     /* 0x3ebf: local.get $local_1 * /
     *     /* 0x3ec1: global.get $global_5 * /
     *     /* 0x3ec3: i32.lt_u  * /
     *     /* 0x3ec4: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3ec7: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x3ecb: end  * /
     *     /* 0x3ecc: local.get $local_1 * /
     *     /* 0x3ece: global.set $global_0 * /
     *     /* 0x3ed0: block 0x40 * /
     *     /* 0x3ed2: local.get $local_0 * /
     *     /* 0x3ed4: wasm.op_0xbc  * /
     *     /* 0x3ed5: local.tee $local_2 * /
     *     /* 0x3ed7: i32.const 2147483647 * /
     *     /* 0x3edd: i32.and  * /
     *     /* 0x3ede: local.tee $local_1 * /
     *     /* 0x3ee0: i32.const 1061752794 * /
     *     /* 0x3ee6: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3ee9: local.get $local_1 * /
     *     /* 0x3eeb: i32.const 964689920 * /
     *     /* 0x3ef1: i32.lt_u  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3ef4: local.get $local_0 * /
     *     /* 0x3ef6: wasm.op_0xbb  * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x3efa: local.set $local_0 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3efe: end  * /
     *     /* 0x3eff: local.get $local_1 * /
     *     /* 0x3f01: i32.const 1081824209 * /
     *     /* 0x3f07: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f0a: local.get $local_0 * /
     *     /* 0x3f0c: wasm.op_0xbb  * /
     *     /* 0x3f0d: local.set $local_4 * /
     *     /* 0x3f0f: local.get $local_1 * /
     *     /* 0x3f11: i32.const 1075235811 * /
     *     /* 0x3f17: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f1a: local.get $local_2 * /
     *     /* 0x3f1c: i32.const 0 * /
     *     /* 0x3f1e: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f21: local.get $local_4 * /
     *     /* 0x3f23: wasm.op_0x44  * /
     *     /* 0x3f24: wasm.op_0x18  * /
     *     /* 0x3f25: i32.load8_u offset=84, align=68 * /
     *     /* 0x3f28: wasm.op_0xfb  * /
     *     /* 0x3f29: local.set $local_8185 * /
     *     /* 0x3f2c: wasm.op_0xa0  * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x3f30: wasm.op_0x8c  * /
     *     /* 0x3f31: local.set $local_0 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x3f35: end  * /
     *     /* 0x3f36: local.get $local_4 * /
     *     /* 0x3f38: wasm.op_0x44  * /
     *     /* 0x3f39: wasm.op_0x18  * /
     *     /* 0x3f3a: i32.load8_u offset=84, align=68 * /
     *     /* 0x3f3d: wasm.op_0xfb  * /
     *     /* 0x3f3e: local.set $local_34086905 * /
     *     /* 0x3f43: wasm.op_0x87  * /
     *     /* 0x3f44: loop 0x21 * /
     *     /* 0x3f46: unreachable  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3f49: end  * /
     *     /* 0x3f4a: wasm.op_0x44  * /
     *     /* 0x3f4b: wasm.op_0x18  * /
     *     /* 0x3f4c: i32.load8_u offset=84, align=68 * /
     *     /* 0x3f4f: wasm.op_0xfb  * /
     *     /* 0x3f50: local.set $local_9 * /
     *     /* 0x3f52: wasm.op_0xc0  * /
     *     /* 0x3f53: wasm.op_0x44  * /
     *     /* 0x3f54: wasm.op_0x18  * /
     *     /* 0x3f55: i32.load8_u offset=84, align=68 * /
     *     /* 0x3f58: wasm.op_0xfb  * /
     *     /* 0x3f59: local.set $local_9 * /
     *     /* 0x3f5b: wasm.op_0x40  * /
     *     /* 0x3f5c: local.get $local_2 * /
     *     /* 0x3f5e: i32.const 0 * /
     *     /* 0x3f60: i32.ge_s  * /
     *     /* 0x3f61: select  * /
     *     /* 0x3f62: local.get $local_4 * /
     *     /* 0x3f64: wasm.op_0xa0  * /
     *     /* 0x3f65: wasm.op_0x9a  * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x3f69: local.set $local_0 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3f6d: end  * /
     *     /* 0x3f6e: local.get $local_1 * /
     *     /* 0x3f70: i32.const 1088565717 * /
     *     /* 0x3f76: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f79: local.get $local_1 * /
     *     /* 0x3f7b: i32.const 1085271519 * /
     *     /* 0x3f81: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f84: local.get $local_0 * /
     *     /* 0x3f86: wasm.op_0xbb  * /
     *     /* 0x3f87: local.set $local_4 * /
     *     /* 0x3f89: local.get $local_2 * /
     *     /* 0x3f8b: i32.const 0 * /
     *     /* 0x3f8d: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3f90: local.get $local_4 * /
     *     /* 0x3f92: wasm.op_0x44  * /
     *     /* 0x3f93: wasm.op_0xd2  * /
     *     /* 0x3f94: local.set $local_51 * /
     *     /* 0x3f96: wasm.op_0x7f  * /
     *     /* 0x3f97: i64.add  * /
     *     /* 0x3f98: wasm.op_0xd9  * /
     *     /* 0x3f99: wasm.op_0x12  * /
     *     /* 0x3f9a: wasm.op_0x40  * /
     *     /* 0x3f9b: wasm.op_0xa0  * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x3f9f: local.set $local_0 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x3fa3: end  * /
     *     /* 0x3fa4: local.get $local_4 * /
     *     /* 0x3fa6: wasm.op_0x44  * /
     *     /* 0x3fa7: wasm.op_0xd2  * /
     *     /* 0x3fa8: local.set $local_51 * /
     *     /* 0x3faa: wasm.op_0x7f  * /
     *     /* 0x3fab: i64.add  * /
     *     /* 0x3fac: wasm.op_0xd9  * /
     *     /* 0x3fad: wasm.op_0x12  * /
     *     /* 0x3fae: wasm.op_0xc0  * /
     *     /* 0x3faf: wasm.op_0xa0  * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x3fb3: wasm.op_0x8c  * /
     *     /* 0x3fb4: local.set $local_0 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x3fb8: end  * /
     *     /* 0x3fb9: wasm.op_0x44  * /
     *     /* 0x3fba: wasm.op_0x18  * /
     *     /* 0x3fbb: i32.load8_u offset=84, align=68 * /
     *     /* 0x3fbe: wasm.op_0xfb  * /
     *     /* 0x3fbf: local.set $local_25 * /
     *     /* 0x3fc1: wasm.op_0x40  * /
     *     /* 0x3fc2: wasm.op_0x44  * /
     *     /* 0x3fc3: wasm.op_0x18  * /
     *     /* 0x3fc4: i32.load8_u offset=84, align=68 * /
     *     /* 0x3fc7: wasm.op_0xfb  * /
     *     /* 0x3fc8: local.set $local_25 * /
     *     /* 0x3fca: wasm.op_0xc0  * /
     *     /* 0x3fcb: local.get $local_2 * /
     *     /* 0x3fcd: i32.const 0 * /
     *     /* 0x3fcf: i32.lt_s  * /
     *     /* 0x3fd0: select  * /
     *     /* 0x3fd1: local.get $local_0 * /
     *     /* 0x3fd3: wasm.op_0xbb  * /
     *     /* 0x3fd4: wasm.op_0xa0  * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x3fd8: local.set $local_0 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3fdc: end  * /
     *     /* 0x3fdd: local.get $local_1 * /
     *     /* 0x3fdf: i32.const 2139095040 * /
     *     /* 0x3fe5: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x3fe8: local.get $local_0 * /
     *     /* 0x3fea: local.get $local_0 * /
     *     /* 0x3fec: wasm.op_0x93  * /
     *     /* 0x3fed: local.set $local_0 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x3ff1: end  * /
     *     /* 0x3ff2: local.get $local_0 * /
     *     /* 0x3ff4: local.get $local_3 * /
     *     /* 0x3ff6: i32.const 8 * /
     *     /* 0x3ff8: i32.add  * /
     *     r0 = wasm_func_1107(r0, r1);
     *     /* 0x3ffc: local.set $local_1 * /
     *     /* 0x3ffe: local.get $local_3 * /
     *     /* 0x4000: wasm.op_0x2b  * /
     *     /* 0x4001: loop 0x08 * /
     *     /* 0x4003: local.set $local_4 * /
     *     /* 0x4005: block 0x40 * /
     *     /* 0x4007: block 0x40 * /
     *     /* 0x4009: block 0x40 * /
     *     /* 0x400b: block 0x40 * /
     *     /* 0x400d: local.get $local_1 * /
     *     /* 0x400f: i32.const 3 * /
     *     /* 0x4011: i32.and  * /
     *     /* 0x4012: i32.const 1 * /
     *     /* 0x4014: i32.sub  * /
     *     /* 0x4015: wasm.op_0x0e  * /
     *     /* 0x4016: loop 0x01 * /
     *     /* 0x4018: block 0x03 * /
     *     /* 0x401a: unreachable  * /
     *     /* 0x401b: end  * /
     *     /* 0x401c: local.get $local_4 * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x4021: local.set $local_0 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x4025: end  * /
     *     /* 0x4026: local.get $local_4 * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x402b: local.set $local_0 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x402f: end  * /
     *     /* 0x4030: local.get $local_4 * /
     *     /* 0x4032: wasm.op_0x9a  * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x4036: local.set $local_0 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x403a: end  * /
     *     /* 0x403b: local.get $local_4 * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x4040: wasm.op_0x8c  * /
     *     /* 0x4041: local.set $local_0 * /
     *     /* 0x4043: end  * /
     *     /* 0x4044: local.get $local_3 * /
     *     /* 0x4046: i32.const 16 * /
     *     /* 0x4048: i32.add  * /
     *     /* 0x4049: local.tee $local_1 * /
     *     /* 0x404b: global.get $global_4 * /
     *     /* 0x404d: i32.gt_u  * /
     *     /* 0x404e: local.get $local_1 * /
     *     /* 0x4050: global.get $global_5 * /
     *     /* 0x4052: i32.lt_u  * /
     *     /* 0x4053: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4056: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x405a: end  * /
     *     /* 0x405b: local.get $local_1 * /
     *     /* 0x405d: global.set $global_0 * /
     *     /* 0x405f: local.get $local_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_273(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3eaeULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xdULL;
}

/*
* Reconstructed Procedure: wasm_func_274 (@ 0x4064, 1401 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_274 ───
     * int64_t wasm_func_274(int64_t arg0, int64_t arg1) {
     *     /* 0x4069: global.get $global_0 * /
     *     /* 0x406b: i32.const 96 * /
     *     /* 0x406e: i32.sub  * /
     *     /* 0x406f: local.tee $local_5 * /
     *     /* 0x4071: global.get $global_4 * /
     *     /* 0x4073: i32.gt_u  * /
     *     /* 0x4074: local.get $local_5 * /
     *     /* 0x4076: global.get $global_5 * /
     *     /* 0x4078: i32.lt_u  * /
     *     /* 0x4079: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x407c: local.get $local_5 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x4080: end  * /
     *     /* 0x4081: local.get $local_5 * /
     *     /* 0x4083: global.set $global_0 * /
     *     /* 0x4085: local.get $local_4 * /
     *     /* 0x4087: i64.const 0xffffffffffff * /
     *     /* 0x408f: i64.and  * /
     *     /* 0x4090: local.set $local_10 * /
     *     /* 0x4092: local.get $local_2 * /
     *     /* 0x4094: local.get $local_4 * /
     *     /* 0x4096: i64.xor  * /
     *     /* 0x4097: i64.const 0x8000000000000000 * /
     *     /* 0x40a2: i64.and  * /
     *     /* 0x40a3: local.set $local_11 * /
     *     /* 0x40a5: local.get $local_2 * /
     *     /* 0x40a7: i64.const 0xffffffffffff * /
     *     /* 0x40af: i64.and  * /
     *     /* 0x40b0: local.tee $local_12 * /
     *     /* 0x40b2: i64.const 0x20 * /
     *     /* 0x40b4: i64.shr_u  * /
     *     /* 0x40b5: local.set $local_15 * /
     *     /* 0x40b7: local.get $local_4 * /
     *     /* 0x40b9: i64.const 0x30 * /
     *     /* 0x40bb: i64.shr_u  * /
     *     /* 0x40bc: i32.wrap_i64  * /
     *     /* 0x40bd: i32.const 32767 * /
     *     /* 0x40c1: i32.and  * /
     *     /* 0x40c2: local.set $local_7 * /
     *     /* 0x40c4: block 0x40 * /
     *     /* 0x40c6: block 0x40 * /
     *     /* 0x40c8: local.get $local_2 * /
     *     /* 0x40ca: i64.const 0x30 * /
     *     /* 0x40cc: i64.shr_u  * /
     *     /* 0x40cd: i32.wrap_i64  * /
     *     /* 0x40ce: i32.const 32767 * /
     *     /* 0x40d2: i32.and  * /
     *     /* 0x40d3: local.tee $local_9 * /
     *     /* 0x40d5: i32.const 32767 * /
     *     /* 0x40d9: i32.sub  * /
     *     /* 0x40da: i32.const -32766 * /
     *     /* 0x40de: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x40e1: local.get $local_7 * /
     *     /* 0x40e3: i32.const 32767 * /
     *     /* 0x40e7: i32.sub  * /
     *     /* 0x40e8: i32.const -32767 * /
     *     /* 0x40ec: i32.gt_u  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x40ef: end  * /
     *     /* 0x40f0: local.get $local_1 * /
     *     /* 0x40f2: i64.eqz  * /
     *     /* 0x40f3: local.get $local_2 * /
     *     /* 0x40f5: i64.const 0x7fffffffffffffff * /
     *     /* 0x4100: i64.and  * /
     *     /* 0x4101: local.tee $local_13 * /
     *     /* 0x4103: i64.const 0x7fff000000000000 * /
     *     /* 0x410e: wasm.op_0x54  * /
     *     /* 0x410f: local.get $local_13 * /
     *     /* 0x4111: i64.const 0x7fff000000000000 * /
     *     /* 0x411c: i64.eq  * /
     *     /* 0x411d: select  * /
     *     /* 0x411e: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4121: local.get $local_2 * /
     *     /* 0x4123: i64.const 0x800000000000 * /
     *     /* 0x412b: i64.or  * /
     *     /* 0x412c: local.set $local_11 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4130: end  * /
     *     /* 0x4131: local.get $local_3 * /
     *     /* 0x4133: i64.eqz  * /
     *     /* 0x4134: local.get $local_4 * /
     *     /* 0x4136: i64.const 0x7fffffffffffffff * /
     *     /* 0x4141: i64.and  * /
     *     /* 0x4142: local.tee $local_2 * /
     *     /* 0x4144: i64.const 0x7fff000000000000 * /
     *     /* 0x414f: wasm.op_0x54  * /
     *     /* 0x4150: local.get $local_2 * /
     *     /* 0x4152: i64.const 0x7fff000000000000 * /
     *     /* 0x415d: i64.eq  * /
     *     /* 0x415e: select  * /
     *     /* 0x415f: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4162: local.get $local_4 * /
     *     /* 0x4164: i64.const 0x800000000000 * /
     *     /* 0x416c: i64.or  * /
     *     /* 0x416d: local.set $local_11 * /
     *     /* 0x416f: local.get $local_3 * /
     *     /* 0x4171: local.set $local_1 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4175: end  * /
     *     /* 0x4176: local.get $local_1 * /
     *     /* 0x4178: local.get $local_13 * /
     *     /* 0x417a: i64.const 0x7fff000000000000 * /
     *     /* 0x4185: i64.xor  * /
     *     /* 0x4186: i64.or  * /
     *     /* 0x4187: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x418a: local.get $local_2 * /
     *     /* 0x418c: local.get $local_3 * /
     *     /* 0x418e: i64.or  * /
     *     /* 0x418f: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4192: i64.const 0x7fff800000000000 * /
     *     /* 0x419d: local.set $local_11 * /
     *     /* 0x419f: i64.const 0x0 * /
     *     /* 0x41a1: local.set $local_1 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x41a5: end  * /
     *     /* 0x41a6: local.get $local_11 * /
     *     /* 0x41a8: i64.const 0x7fff000000000000 * /
     *     /* 0x41b3: i64.or  * /
     *     /* 0x41b4: local.set $local_11 * /
     *     /* 0x41b6: i64.const 0x0 * /
     *     /* 0x41b8: local.set $local_1 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x41bc: end  * /
     *     /* 0x41bd: local.get $local_3 * /
     *     /* 0x41bf: local.get $local_2 * /
     *     /* 0x41c1: i64.const 0x7fff000000000000 * /
     *     /* 0x41cc: i64.xor  * /
     *     /* 0x41cd: i64.or  * /
     *     /* 0x41ce: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x41d1: local.get $local_1 * /
     *     /* 0x41d3: local.get $local_13 * /
     *     /* 0x41d5: i64.or  * /
     *     /* 0x41d6: i64.const 0x0 * /
     *     /* 0x41d8: local.set $local_1 * /
     *     /* 0x41da: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x41dd: i64.const 0x7fff800000000000 * /
     *     /* 0x41e8: local.set $local_11 * /
     *     if (r0 != 0) { goto 3; }
     *     /* 0x41ec: end  * /
     *     /* 0x41ed: local.get $local_11 * /
     *     /* 0x41ef: i64.const 0x7fff000000000000 * /
     *     /* 0x41fa: i64.or  * /
     *     /* 0x41fb: local.set $local_11 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x41ff: end  * /
     *     /* 0x4200: local.get $local_1 * /
     *     /* 0x4202: local.get $local_13 * /
     *     /* 0x4204: i64.or  * /
     *     /* 0x4205: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4208: i64.const 0x0 * /
     *     /* 0x420a: local.set $local_1 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x420e: end  * /
     *     /* 0x420f: local.get $local_2 * /
     *     /* 0x4211: local.get $local_3 * /
     *     /* 0x4213: i64.or  * /
     *     /* 0x4214: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4217: i64.const 0x0 * /
     *     /* 0x4219: local.set $local_1 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x421d: end  * /
     *     /* 0x421e: local.get $local_13 * /
     *     /* 0x4220: i64.const 0xffffffffffff * /
     *     /* 0x4228: wasm.op_0x58  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x422b: local.get $local_5 * /
     *     /* 0x422d: i32.const 80 * /
     *     /* 0x4230: i32.add  * /
     *     /* 0x4231: local.get $local_1 * /
     *     /* 0x4233: local.get $local_12 * /
     *     /* 0x4235: local.get $local_1 * /
     *     /* 0x4237: local.get $local_12 * /
     *     /* 0x4239: local.get $local_12 * /
     *     /* 0x423b: i64.eqz  * /
     *     /* 0x423c: local.tee $local_6 * /
     *     /* 0x423e: select  * /
     *     /* 0x423f: wasm.op_0x79  * /
     *     /* 0x4240: i64.const 0x40 * /
     *     /* 0x4243: i64.const 0x0 * /
     *     /* 0x4245: local.get $local_6 * /
     *     /* 0x4247: select  * /
     *     /* 0x4248: i64.add  * /
     *     /* 0x4249: i32.wrap_i64  * /
     *     /* 0x424a: local.tee $local_6 * /
     *     /* 0x424c: i32.const 15 * /
     *     /* 0x424e: i32.sub  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4252: i32.const 16 * /
     *     /* 0x4254: local.get $local_6 * /
     *     /* 0x4256: i32.sub  * /
     *     /* 0x4257: local.set $local_6 * /
     *     /* 0x4259: local.get $local_5 * /
     *     /* 0x425b: i64.load offset=88, align=3 * /
     *     /* 0x425e: local.tee $local_12 * /
     *     /* 0x4260: i64.const 0x20 * /
     *     /* 0x4262: i64.shr_u  * /
     *     /* 0x4263: local.set $local_15 * /
     *     /* 0x4265: local.get $local_5 * /
     *     /* 0x4267: i64.load offset=80, align=3 * /
     *     /* 0x426a: local.set $local_1 * /
     *     /* 0x426c: end  * /
     *     /* 0x426d: local.get $local_2 * /
     *     /* 0x426f: i64.const 0xffffffffffff * /
     *     /* 0x4277: wasm.op_0x56  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x427a: local.get $local_5 * /
     *     /* 0x427c: i32.const -64 * /
     *     /* 0x427e: i32.sub  * /
     *     /* 0x427f: local.get $local_3 * /
     *     /* 0x4281: local.get $local_10 * /
     *     /* 0x4283: local.get $local_3 * /
     *     /* 0x4285: local.get $local_10 * /
     *     /* 0x4287: local.get $local_10 * /
     *     /* 0x4289: i64.eqz  * /
     *     /* 0x428a: local.tee $local_8 * /
     *     /* 0x428c: select  * /
     *     /* 0x428d: wasm.op_0x79  * /
     *     /* 0x428e: i64.const 0x40 * /
     *     /* 0x4291: i64.const 0x0 * /
     *     /* 0x4293: local.get $local_8 * /
     *     /* 0x4295: select  * /
     *     /* 0x4296: i64.add  * /
     *     /* 0x4297: i32.wrap_i64  * /
     *     /* 0x4298: local.tee $local_8 * /
     *     /* 0x429a: i32.const 15 * /
     *     /* 0x429c: i32.sub  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x42a0: local.get $local_6 * /
     *     /* 0x42a2: local.get $local_8 * /
     *     /* 0x42a4: i32.sub  * /
     *     /* 0x42a5: i32.const 16 * /
     *     /* 0x42a7: i32.add  * /
     *     /* 0x42a8: local.set $local_6 * /
     *     /* 0x42aa: local.get $local_5 * /
     *     /* 0x42ac: i64.load offset=72, align=3 * /
     *     /* 0x42af: local.set $local_10 * /
     *     /* 0x42b1: local.get $local_5 * /
     *     /* 0x42b3: i64.load offset=64, align=3 * /
     *     /* 0x42b6: local.set $local_3 * /
     *     /* 0x42b8: end  * /
     *     /* 0x42b9: local.get $local_7 * /
     *     /* 0x42bb: local.get $local_9 * /
     *     /* 0x42bd: i32.add  * /
     *     /* 0x42be: local.get $local_6 * /
     *     /* 0x42c0: i32.add  * /
     *     /* 0x42c1: i32.const 16383 * /
     *     /* 0x42c5: i32.sub  * /
     *     /* 0x42c6: local.set $local_6 * /
     *     /* 0x42c8: block 0x40 * /
     *     /* 0x42ca: local.get $local_10 * /
     *     /* 0x42cc: i64.const 0xf * /
     *     /* 0x42ce: i64.shl  * /
     *     /* 0x42cf: local.tee $local_14 * /
     *     /* 0x42d1: i64.const 0x20 * /
     *     /* 0x42d3: i64.shr_u  * /
     *     /* 0x42d4: i64.const 0x80000000 * /
     *     /* 0x42da: i64.or  * /
     *     /* 0x42db: local.tee $local_2 * /
     *     /* 0x42dd: local.get $local_1 * /
     *     /* 0x42df: i64.const 0x20 * /
     *     /* 0x42e1: i64.shr_u  * /
     *     /* 0x42e2: local.tee $local_4 * /
     *     /* 0x42e4: i64.mul  * /
     *     /* 0x42e5: local.tee $local_16 * /
     *     /* 0x42e7: local.get $local_3 * /
     *     /* 0x42e9: i64.const 0xf * /
     *     /* 0x42eb: i64.shl  * /
     *     /* 0x42ec: local.tee $local_17 * /
     *     /* 0x42ee: i64.const 0x20 * /
     *     /* 0x42f0: i64.shr_u  * /
     *     /* 0x42f1: local.tee $local_10 * /
     *     /* 0x42f3: local.get $local_15 * /
     *     /* 0x42f5: i64.const 0x10000 * /
     *     /* 0x42f9: i64.or  * /
     *     /* 0x42fa: local.tee $local_13 * /
     *     /* 0x42fc: i64.mul  * /
     *     /* 0x42fd: i64.add  * /
     *     /* 0x42fe: local.tee $local_15 * /
     *     /* 0x4300: local.get $local_16 * /
     *     /* 0x4302: wasm.op_0x54  * /
     *     /* 0x4303: i64.extend_i32_u  * /
     *     /* 0x4304: local.get $local_15 * /
     *     /* 0x4306: local.get $local_3 * /
     *     /* 0x4308: i64.const 0x31 * /
     *     /* 0x430a: i64.shr_u  * /
     *     /* 0x430b: local.get $local_14 * /
     *     /* 0x430d: i64.or  * /
     *     /* 0x430e: i64.const 0xffffffff * /
     *     /* 0x4314: i64.and  * /
     *     /* 0x4315: local.tee $local_3 * /
     *     /* 0x4317: local.get $local_12 * /
     *     /* 0x4319: i64.const 0xffffffff * /
     *     /* 0x431f: i64.and  * /
     *     /* 0x4320: local.tee $local_12 * /
     *     /* 0x4322: i64.mul  * /
     *     /* 0x4323: i64.add  * /
     *     /* 0x4324: local.tee $local_14 * /
     *     /* 0x4326: local.get $local_15 * /
     *     /* 0x4328: wasm.op_0x54  * /
     *     /* 0x4329: i64.extend_i32_u  * /
     *     /* 0x432a: i64.add  * /
     *     /* 0x432b: local.get $local_2 * /
     *     /* 0x432d: local.get $local_13 * /
     *     /* 0x432f: i64.mul  * /
     *     /* 0x4330: i64.add  * /
     *     /* 0x4331: local.get $local_14 * /
     *     /* 0x4333: local.get $local_14 * /
     *     /* 0x4335: local.get $local_17 * /
     *     /* 0x4337: i64.const 0xffff8000 * /
     *     /* 0x433d: i64.and  * /
     *     /* 0x433e: local.tee $local_15 * /
     *     /* 0x4340: local.get $local_12 * /
     *     /* 0x4342: i64.mul  * /
     *     /* 0x4343: local.tee $local_17 * /
     *     /* 0x4345: local.get $local_4 * /
     *     /* 0x4347: local.get $local_10 * /
     *     /* 0x4349: i64.mul  * /
     *     /* 0x434a: i64.add  * /
     *     /* 0x434b: local.tee $local_16 * /
     *     /* 0x434d: local.get $local_17 * /
     *     /* 0x434f: wasm.op_0x54  * /
     *     /* 0x4350: i64.extend_i32_u  * /
     *     /* 0x4351: local.get $local_16 * /
     *     /* 0x4353: local.get $local_16 * /
     *     /* 0x4355: local.get $local_3 * /
     *     /* 0x4357: local.get $local_1 * /
     *     /* 0x4359: i64.const 0xffffffff * /
     *     /* 0x435f: i64.and  * /
     *     /* 0x4360: local.tee $local_1 * /
     *     /* 0x4362: i64.mul  * /
     *     /* 0x4363: i64.add  * /
     *     /* 0x4364: local.tee $local_16 * /
     *     /* 0x4366: wasm.op_0x56  * /
     *     /* 0x4367: i64.extend_i32_u  * /
     *     /* 0x4368: i64.add  * /
     *     /* 0x4369: i64.add  * /
     *     /* 0x436a: local.tee $local_14 * /
     *     /* 0x436c: wasm.op_0x56  * /
     *     /* 0x436d: i64.extend_i32_u  * /
     *     /* 0x436e: i64.add  * /
     *     /* 0x436f: local.get $local_3 * /
     *     /* 0x4371: local.get $local_13 * /
     *     /* 0x4373: i64.mul  * /
     *     /* 0x4374: local.tee $local_18 * /
     *     /* 0x4376: local.get $local_2 * /
     *     /* 0x4378: local.get $local_12 * /
     *     /* 0x437a: i64.mul  * /
     *     /* 0x437b: i64.add  * /
     *     /* 0x437c: local.tee $local_17 * /
     *     /* 0x437e: local.get $local_18 * /
     *     /* 0x4380: wasm.op_0x54  * /
     *     /* 0x4381: i64.extend_i32_u  * /
     *     /* 0x4382: i64.const 0x20 * /
     *     /* 0x4384: i64.shl  * /
     *     /* 0x4385: local.get $local_17 * /
     *     /* 0x4387: i64.const 0x20 * /
     *     /* 0x4389: i64.shr_u  * /
     *     /* 0x438a: i64.or  * /
     *     /* 0x438b: i64.add  * /
     *     /* 0x438c: local.get $local_14 * /
     *     /* 0x438e: local.get $local_14 * /
     *     /* 0x4390: local.get $local_17 * /
     *     /* 0x4392: i64.const 0x20 * /
     *     /* 0x4394: i64.shl  * /
     *     /* 0x4395: i64.add  * /
     *     /* 0x4396: local.tee $local_14 * /
     *     /* 0x4398: wasm.op_0x56  * /
     *     /* 0x4399: i64.extend_i32_u  * /
     *     /* 0x439a: i64.add  * /
     *     /* 0x439b: local.get $local_14 * /
     *     /* 0x439d: local.get $local_13 * /
     *     /* 0x439f: local.get $local_15 * /
     *     /* 0x43a1: i64.mul  * /
     *     /* 0x43a2: local.tee $local_13 * /
     *     /* 0x43a4: local.get $local_10 * /
     *     /* 0x43a6: local.get $local_12 * /
     *     /* 0x43a8: i64.mul  * /
     *     /* 0x43a9: i64.add  * /
     *     /* 0x43aa: local.tee $local_12 * /
     *     /* 0x43ac: local.get $local_1 * /
     *     /* 0x43ae: local.get $local_2 * /
     *     /* 0x43b0: i64.mul  * /
     *     /* 0x43b1: i64.add  * /
     *     /* 0x43b2: local.tee $local_2 * /
     *     /* 0x43b4: local.get $local_3 * /
     *     /* 0x43b6: local.get $local_4 * /
     *     /* 0x43b8: i64.mul  * /
     *     /* 0x43b9: i64.add  * /
     *     /* 0x43ba: local.tee $local_3 * /
     *     /* 0x43bc: i64.const 0x20 * /
     *     /* 0x43be: i64.shr_u  * /
     *     /* 0x43bf: local.get $local_2 * /
     *     /* 0x43c1: local.get $local_3 * /
     *     /* 0x43c3: wasm.op_0x56  * /
     *     /* 0x43c4: i64.extend_i32_u  * /
     *     /* 0x43c5: local.get $local_12 * /
     *     /* 0x43c7: local.get $local_13 * /
     *     /* 0x43c9: wasm.op_0x54  * /
     *     /* 0x43ca: i64.extend_i32_u  * /
     *     /* 0x43cb: local.get $local_2 * /
     *     /* 0x43cd: local.get $local_12 * /
     *     /* 0x43cf: wasm.op_0x54  * /
     *     /* 0x43d0: i64.extend_i32_u  * /
     *     /* 0x43d1: i64.add  * /
     *     /* 0x43d2: i64.add  * /
     *     /* 0x43d3: i64.const 0x20 * /
     *     /* 0x43d5: i64.shl  * /
     *     /* 0x43d6: i64.or  * /
     *     /* 0x43d7: i64.add  * /
     *     /* 0x43d8: local.tee $local_2 * /
     *     /* 0x43da: local.get $local_14 * /
     *     /* 0x43dc: wasm.op_0x54  * /
     *     /* 0x43dd: i64.extend_i32_u  * /
     *     /* 0x43de: i64.add  * /
     *     /* 0x43df: local.get $local_2 * /
     *     /* 0x43e1: local.get $local_16 * /
     *     /* 0x43e3: local.get $local_4 * /
     *     /* 0x43e5: local.get $local_15 * /
     *     /* 0x43e7: i64.mul  * /
     *     /* 0x43e8: local.tee $local_12 * /
     *     /* 0x43ea: local.get $local_1 * /
     *     /* 0x43ec: local.get $local_10 * /
     *     /* 0x43ee: i64.mul  * /
     *     /* 0x43ef: i64.add  * /
     *     /* 0x43f0: local.tee $local_4 * /
     *     /* 0x43f2: i64.const 0x20 * /
     *     /* 0x43f4: i64.shr_u  * /
     *     /* 0x43f5: local.get $local_4 * /
     *     /* 0x43f7: local.get $local_12 * /
     *     /* 0x43f9: wasm.op_0x54  * /
     *     /* 0x43fa: i64.extend_i32_u  * /
     *     /* 0x43fb: i64.const 0x20 * /
     *     /* 0x43fd: i64.shl  * /
     *     /* 0x43fe: i64.or  * /
     *     /* 0x43ff: i64.add  * /
     *     /* 0x4400: local.tee $local_10 * /
     *     /* 0x4402: local.get $local_16 * /
     *     /* 0x4404: wasm.op_0x54  * /
     *     /* 0x4405: i64.extend_i32_u  * /
     *     /* 0x4406: local.get $local_10 * /
     *     /* 0x4408: local.get $local_3 * /
     *     /* 0x440a: i64.const 0x20 * /
     *     /* 0x440c: i64.shl  * /
     *     /* 0x440d: i64.add  * /
     *     /* 0x440e: local.tee $local_3 * /
     *     /* 0x4410: local.get $local_10 * /
     *     /* 0x4412: wasm.op_0x54  * /
     *     /* 0x4413: i64.extend_i32_u  * /
     *     /* 0x4414: i64.add  * /
     *     /* 0x4415: i64.add  * /
     *     /* 0x4416: local.tee $local_10 * /
     *     /* 0x4418: local.get $local_2 * /
     *     /* 0x441a: wasm.op_0x54  * /
     *     /* 0x441b: i64.extend_i32_u  * /
     *     /* 0x441c: i64.add  * /
     *     /* 0x441d: local.get $local_10 * /
     *     /* 0x441f: local.get $local_3 * /
     *     /* 0x4421: local.get $local_4 * /
     *     /* 0x4423: i64.const 0x20 * /
     *     /* 0x4425: i64.shl  * /
     *     /* 0x4426: local.tee $local_2 * /
     *     /* 0x4428: local.get $local_1 * /
     *     /* 0x442a: local.get $local_15 * /
     *     /* 0x442c: i64.mul  * /
     *     /* 0x442d: i64.add  * /
     *     /* 0x442e: local.tee $local_1 * /
     *     /* 0x4430: local.get $local_2 * /
     *     /* 0x4432: wasm.op_0x54  * /
     *     /* 0x4433: i64.extend_i32_u  * /
     *     /* 0x4434: i64.add  * /
     *     /* 0x4435: local.tee $local_2 * /
     *     /* 0x4437: local.get $local_3 * /
     *     /* 0x4439: wasm.op_0x54  * /
     *     /* 0x443a: i64.extend_i32_u  * /
     *     /* 0x443b: i64.add  * /
     *     /* 0x443c: local.tee $local_4 * /
     *     /* 0x443e: local.get $local_10 * /
     *     /* 0x4440: wasm.op_0x54  * /
     *     /* 0x4441: i64.extend_i32_u  * /
     *     /* 0x4442: i64.add  * /
     *     /* 0x4443: local.tee $local_3 * /
     *     /* 0x4445: i64.const 0x1000000000000 * /
     *     /* 0x444e: i64.and  * /
     *     /* 0x444f: i64.const 0x0 * /
     *     /* 0x4451: i64.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4454: local.get $local_6 * /
     *     /* 0x4456: i32.const 1 * /
     *     /* 0x4458: i32.add  * /
     *     /* 0x4459: local.set $local_6 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x445d: end  * /
     *     /* 0x445e: local.get $local_1 * /
     *     /* 0x4460: i64.const 0x3f * /
     *     /* 0x4462: i64.shr_u  * /
     *     /* 0x4463: local.get $local_3 * /
     *     /* 0x4465: i64.const 0x1 * /
     *     /* 0x4467: i64.shl  * /
     *     /* 0x4468: local.get $local_4 * /
     *     /* 0x446a: i64.const 0x3f * /
     *     /* 0x446c: i64.shr_u  * /
     *     /* 0x446d: i64.or  * /
     *     /* 0x446e: local.set $local_3 * /
     *     /* 0x4470: local.get $local_4 * /
     *     /* 0x4472: i64.const 0x1 * /
     *     /* 0x4474: i64.shl  * /
     *     /* 0x4475: local.get $local_2 * /
     *     /* 0x4477: i64.const 0x3f * /
     *     /* 0x4479: i64.shr_u  * /
     *     /* 0x447a: i64.or  * /
     *     /* 0x447b: local.set $local_4 * /
     *     /* 0x447d: local.get $local_1 * /
     *     /* 0x447f: i64.const 0x1 * /
     *     /* 0x4481: i64.shl  * /
     *     /* 0x4482: local.set $local_1 * /
     *     /* 0x4484: local.get $local_2 * /
     *     /* 0x4486: i64.const 0x1 * /
     *     /* 0x4488: i64.shl  * /
     *     /* 0x4489: i64.or  * /
     *     /* 0x448a: local.set $local_2 * /
     *     /* 0x448c: end  * /
     *     /* 0x448d: local.get $local_6 * /
     *     /* 0x448f: i32.const 32767 * /
     *     /* 0x4493: i32.ge_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4496: local.get $local_11 * /
     *     /* 0x4498: i64.const 0x7fff000000000000 * /
     *     /* 0x44a3: i64.or  * /
     *     /* 0x44a4: local.set $local_11 * /
     *     /* 0x44a6: i64.const 0x0 * /
     *     /* 0x44a8: local.set $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x44ac: end  * /
     *     /* 0x44ad: block 0x7e * /
     *     /* 0x44af: local.get $local_6 * /
     *     /* 0x44b1: i32.const 0 * /
     *     /* 0x44b3: i32.le_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x44b6: i32.const 1 * /
     *     /* 0x44b8: local.get $local_6 * /
     *     /* 0x44ba: i32.sub  * /
     *     /* 0x44bb: local.tee $local_7 * /
     *     /* 0x44bd: i32.const 127 * /
     *     /* 0x44c0: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x44c3: local.get $local_5 * /
     *     /* 0x44c5: i32.const 48 * /
     *     /* 0x44c7: i32.add  * /
     *     /* 0x44c8: local.get $local_1 * /
     *     /* 0x44ca: local.get $local_2 * /
     *     /* 0x44cc: local.get $local_6 * /
     *     /* 0x44ce: i32.const 127 * /
     *     /* 0x44d1: i32.add  * /
     *     /* 0x44d2: local.tee $local_6 * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x44d7: local.get $local_5 * /
     *     /* 0x44d9: i32.const 32 * /
     *     /* 0x44db: i32.add  * /
     *     /* 0x44dc: local.get $local_4 * /
     *     /* 0x44de: local.get $local_3 * /
     *     /* 0x44e0: local.get $local_6 * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x44e5: local.get $local_5 * /
     *     /* 0x44e7: i32.const 16 * /
     *     /* 0x44e9: i32.add  * /
     *     /* 0x44ea: local.get $local_1 * /
     *     /* 0x44ec: local.get $local_2 * /
     *     /* 0x44ee: local.get $local_7 * /
     *     r0 = wasm_func_436(r0, r1);
     *     /* 0x44f3: local.get $local_5 * /
     *     /* 0x44f5: local.get $local_4 * /
     *     /* 0x44f7: local.get $local_3 * /
     *     /* 0x44f9: local.get $local_7 * /
     *     r0 = wasm_func_436(r0, r1);
     *     /* 0x44fe: local.get $local_5 * /
     *     /* 0x4500: i64.load offset=48, align=3 * /
     *     /* 0x4503: local.get $local_5 * /
     *     /* 0x4505: i64.load offset=56, align=3 * /
     *     /* 0x4508: i64.or  * /
     *     /* 0x4509: i64.const 0x0 * /
     *     /* 0x450b: i64.ne  * /
     *     /* 0x450c: i64.extend_i32_u  * /
     *     /* 0x450d: local.get $local_5 * /
     *     /* 0x450f: i64.load offset=32, align=3 * /
     *     /* 0x4512: local.get $local_5 * /
     *     /* 0x4514: i64.load offset=16, align=3 * /
     *     /* 0x4517: i64.or  * /
     *     /* 0x4518: i64.or  * /
     *     /* 0x4519: local.set $local_1 * /
     *     /* 0x451b: local.get $local_5 * /
     *     /* 0x451d: i64.load offset=40, align=3 * /
     *     /* 0x4520: local.get $local_5 * /
     *     /* 0x4522: i64.load offset=24, align=3 * /
     *     /* 0x4525: i64.or  * /
     *     /* 0x4526: local.set $local_2 * /
     *     /* 0x4528: local.get $local_5 * /
     *     /* 0x452a: i64.load offset=0, align=3 * /
     *     /* 0x452d: local.set $local_4 * /
     *     /* 0x452f: local.get $local_5 * /
     *     /* 0x4531: i64.load offset=8, align=3 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4536: end  * /
     *     /* 0x4537: i64.const 0x0 * /
     *     /* 0x4539: local.set $local_1 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x453d: end  * /
     *     /* 0x453e: local.get $local_3 * /
     *     /* 0x4540: i64.const 0xffffffffffff * /
     *     /* 0x4548: i64.and  * /
     *     /* 0x4549: local.get $local_6 * /
     *     /* 0x454b: i64.extend_i32_u  * /
     *     /* 0x454c: i64.const 0x30 * /
     *     /* 0x454e: i64.shl  * /
     *     /* 0x454f: i64.or  * /
     *     /* 0x4550: end  * /
     *     /* 0x4551: local.get $local_11 * /
     *     /* 0x4553: i64.or  * /
     *     /* 0x4554: local.set $local_11 * /
     *     /* 0x4556: local.get $local_1 * /
     *     /* 0x4558: i64.eqz  * /
     *     /* 0x4559: local.get $local_2 * /
     *     /* 0x455b: i64.const 0x0 * /
     *     /* 0x455d: wasm.op_0x59  * /
     *     /* 0x455e: local.get $local_2 * /
     *     /* 0x4560: i64.const 0x8000000000000000 * /
     *     /* 0x456b: i64.eq  * /
     *     /* 0x456c: select  * /
     *     /* 0x456d: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4570: local.get $local_11 * /
     *     /* 0x4572: local.get $local_4 * /
     *     /* 0x4574: i64.const 0x1 * /
     *     /* 0x4576: i64.add  * /
     *     /* 0x4577: local.tee $local_1 * /
     *     /* 0x4579: i64.eqz  * /
     *     /* 0x457a: i64.extend_i32_u  * /
     *     /* 0x457b: i64.add  * /
     *     /* 0x457c: local.set $local_11 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4580: end  * /
     *     /* 0x4581: local.get $local_1 * /
     *     /* 0x4583: local.get $local_2 * /
     *     /* 0x4585: i64.const 0x8000000000000000 * /
     *     /* 0x4590: i64.xor  * /
     *     /* 0x4591: i64.or  * /
     *     /* 0x4592: i64.const 0x0 * /
     *     /* 0x4594: i64.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4597: local.get $local_4 * /
     *     /* 0x4599: local.set $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x459d: end  * /
     *     /* 0x459e: local.get $local_11 * /
     *     /* 0x45a0: local.get $local_4 * /
     *     /* 0x45a2: local.get $local_4 * /
     *     /* 0x45a4: i64.const 0x1 * /
     *     /* 0x45a6: i64.and  * /
     *     /* 0x45a7: i64.add  * /
     *     /* 0x45a8: local.tee $local_1 * /
     *     /* 0x45aa: local.get $local_4 * /
     *     /* 0x45ac: wasm.op_0x54  * /
     *     /* 0x45ad: i64.extend_i32_u  * /
     *     /* 0x45ae: i64.add  * /
     *     /* 0x45af: local.set $local_11 * /
     *     /* 0x45b1: end  * /
     *     /* 0x45b2: local.get $local_0 * /
     *     /* 0x45b4: local.get $local_1 * /
     *     /* 0x45b6: i64.store offset=0, align=3 * /
     *     /* 0x45b9: local.get $local_0 * /
     *     /* 0x45bb: local.get $local_11 * /
     *     /* 0x45bd: i64.store offset=8, align=3 * /
     *     /* 0x45c0: local.get $local_5 * /
     *     /* 0x45c2: i32.const 96 * /
     *     /* 0x45c5: i32.add  * /
     *     /* 0x45c6: local.tee $local_0 * /
     *     /* 0x45c8: global.get $global_4 * /
     *     /* 0x45ca: i32.gt_u  * /
     *     /* 0x45cb: local.get $local_0 * /
     *     /* 0x45cd: global.get $global_5 * /
     *     /* 0x45cf: i32.lt_u  * /
     *     /* 0x45d0: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x45d3: local.get $local_0 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x45d7: end  * /
     *     /* 0x45d8: local.get $local_0 * /
     *     /* 0x45da: global.set $global_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_274(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4064ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x8ULL;
}

/*
* Reconstructed Procedure: wasm_func_275 (@ 0x45de, 60 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_275 ───
     * int64_t wasm_func_275(int64_t arg0, int64_t arg1) {
     *     /* 0x45e1: local.get $local_0 * /
     *     /* 0x45e3: i32.load offset=12, align=2 * /
     *     /* 0x45e6: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x45ea: local.get $local_0 * /
     *     /* 0x45ec: local.get $local_1 * /
     *     /* 0x45ee: i32.store offset=16, align=2 * /
     *     /* 0x45f1: local.get $local_0 * /
     *     /* 0x45f3: i32.load offset=20, align=2 * /
     *     /* 0x45f6: drop  * /
     *     /* 0x45f7: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x45fc: end  * /
     *     /* 0x45fd: local.get $local_0 * /
     *     /* 0x45ff: i32.load offset=0, align=2 * /
     *     /* 0x4602: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4606: local.get $local_0 * /
     *     /* 0x4608: local.get $local_1 * /
     *     /* 0x460a: i32.store offset=4, align=2 * /
     *     /* 0x460d: local.get $local_0 * /
     *     /* 0x460f: i32.load offset=8, align=2 * /
     *     /* 0x4612: drop  * /
     *     /* 0x4613: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4618: end  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_275(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x45deULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_276 (@ 0x461c, 220 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_276 ───
     * int64_t wasm_func_276(int64_t arg0, int64_t arg1) {
     *     /* 0x461f: block 0x40 * /
     *     /* 0x4621: block 0x40 * /
     *     /* 0x4623: block 0x40 * /
     *     /* 0x4625: block 0x40 * /
     *     /* 0x4627: local.get $local_0 * /
     *     /* 0x4629: i32.load offset=4, align=2 * /
     *     /* 0x462c: local.get $local_0 * /
     *     /* 0x462e: i32.load offset=8, align=2 * /
     *     /* 0x4631: local.tee $local_2 * /
     *     /* 0x4633: i32.sub  * /
     *     /* 0x4634: i32.const 3 * /
     *     /* 0x4636: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4639: i32.const 8 * /
     *     r0 = wasm_func_264(r0, r1);
     *     /* 0x463e: local.set $local_0 * /
     *     /* 0x4640: i32.const 3737328 * /
     *     /* 0x4645: i32.const 0 * /
     *     /* 0x4647: i32.store offset=0, align=2 * /
     *     /* 0x464a: i32.const 216 * /
     *     /* 0x464d: local.get $local_0 * /
     *     /* 0x464f: i32.const 32684 * /
     *     r0 = imp_c(r0, r1);
     *     /* 0x4655: local.set $local_1 * /
     *     /* 0x4657: i32.const 3737328 * /
     *     /* 0x465c: i32.load offset=0, align=2 * /
     *     /* 0x465f: i32.const 3737328 * /
     *     /* 0x4664: i32.const 0 * /
     *     /* 0x4666: i32.store offset=0, align=2 * /
     *     /* 0x4669: i32.const 1 * /
     *     /* 0x466b: i32.ne  * /
     *     if (r0 != 0) { goto 4; }
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4670: end  * /
     *     /* 0x4671: local.get $local_0 * /
     *     /* 0x4673: local.get $local_2 * /
     *     /* 0x4675: i32.const 4 * /
     *     /* 0x4677: i32.add  * /
     *     /* 0x4678: i32.store offset=8, align=2 * /
     *     /* 0x467b: local.get $local_1 * /
     *     /* 0x467d: local.get $local_0 * /
     *     /* 0x467f: i32.load offset=0, align=2 * /
     *     /* 0x4682: local.get $local_2 * /
     *     /* 0x4684: i32.add  * /
     *     /* 0x4685: i32.load offset=0, align=0 * /
     *     /* 0x4688: local.tee $local_0 * /
     *     /* 0x468a: i32.store offset=0, align=2 * /
     *     /* 0x468d: local.get $local_0 * /
     *     /* 0x468f: i32.const 1 * /
     *     /* 0x4691: i32.shl  * /
     *     /* 0x4692: i32.const -16777216 * /
     *     /* 0x4697: i32.lt_u  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x469a: i32.const 8 * /
     *     r0 = wasm_func_264(r0, r1);
     *     /* 0x469f: local.set $local_0 * /
     *     /* 0x46a1: i32.const 3737328 * /
     *     /* 0x46a6: i32.const 0 * /
     *     /* 0x46a8: i32.store offset=0, align=2 * /
     *     /* 0x46ab: i32.const 216 * /
     *     /* 0x46ae: local.get $local_0 * /
     *     /* 0x46b0: i32.const 6567 * /
     *     r0 = imp_c(r0, r1);
     *     /* 0x46b5: local.set $local_1 * /
     *     /* 0x46b7: i32.const 3737328 * /
     *     /* 0x46bc: i32.load offset=0, align=2 * /
     *     /* 0x46bf: i32.const 3737328 * /
     *     /* 0x46c4: i32.const 0 * /
     *     /* 0x46c6: i32.store offset=0, align=2 * /
     *     /* 0x46c9: i32.const 1 * /
     *     /* 0x46cb: i32.ne  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x46ce: end  * /
     *     r0 = imp_a(r0, r1);
     *     /* 0x46d1: local.get $local_0 * /
     *     r0 = wasm_func_265(r0, r1);
     *     r0 = imp_h(r0, r1);
     *     /* 0x46d8: unreachable  * /
     *     /* 0x46d9: end  * /
     *     return r0;
     *     /* 0x46db: end  * /
     *     /* 0x46dc: local.get $local_1 * /
     *     /* 0x46de: i32.const 3706656 * /
     *     /* 0x46e3: i32.const 191 * /
     *     r0 = imp_n(r0, r1);
     *     /* 0x46e8: unreachable  * /
     *     /* 0x46e9: end  * /
     *     /* 0x46ea: local.get $local_1 * /
     *     /* 0x46ec: i32.const 3706656 * /
     *     /* 0x46f1: i32.const 191 * /
     *     r0 = imp_n(r0, r1);
     *     /* 0x46f6: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_276(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x461cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: wasm_func_277 (@ 0x46fa, 410 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_277 ───
     * int64_t wasm_func_277(int64_t arg0, int64_t arg1) {
     *     /* 0x46ff: global.get $global_0 * /
     *     /* 0x4701: i32.const 16 * /
     *     /* 0x4703: i32.sub  * /
     *     /* 0x4704: local.tee $local_3 * /
     *     /* 0x4706: local.tee $local_1 * /
     *     /* 0x4708: global.get $global_4 * /
     *     /* 0x470a: i32.gt_u  * /
     *     /* 0x470b: local.get $local_1 * /
     *     /* 0x470d: global.get $global_5 * /
     *     /* 0x470f: i32.lt_u  * /
     *     /* 0x4710: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4713: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x4717: end  * /
     *     /* 0x4718: local.get $local_1 * /
     *     /* 0x471a: global.set $global_0 * /
     *     /* 0x471c: block 0x7d * /
     *     /* 0x471e: local.get $local_0 * /
     *     /* 0x4720: wasm.op_0xbc  * /
     *     /* 0x4721: local.tee $local_2 * /
     *     /* 0x4723: i32.const 2147483647 * /
     *     /* 0x4729: i32.and  * /
     *     /* 0x472a: local.tee $local_1 * /
     *     /* 0x472c: i32.const 1061752794 * /
     *     /* 0x4732: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4735: wasm.op_0x43  * /
     *     /* 0x4736: unreachable  * /
     *     /* 0x4737: unreachable  * /
     *     /* 0x4738: wasm.op_0x80  * /
     *     /* 0x4739: wasm.op_0x3f  * /
     *     /* 0x473a: local.get $local_1 * /
     *     /* 0x473c: i32.const 964689920 * /
     *     /* 0x4742: i32.lt_u  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4745: drop  * /
     *     /* 0x4746: local.get $local_0 * /
     *     /* 0x4748: wasm.op_0xbb  * /
     *     r0 = wasm_func_391(r0, r1);
     *     if (r0 != 0) { goto 1; }
     *     /* 0x474e: end  * /
     *     /* 0x474f: local.get $local_1 * /
     *     /* 0x4751: i32.const 1081824209 * /
     *     /* 0x4757: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x475a: local.get $local_1 * /
     *     /* 0x475c: i32.const 1075235812 * /
     *     /* 0x4762: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4765: wasm.op_0x44  * /
     *     /* 0x4766: wasm.op_0x18  * /
     *     /* 0x4767: i32.load8_u offset=84, align=68 * /
     *     /* 0x476a: wasm.op_0xfb  * /
     *     /* 0x476b: local.set $local_9 * /
     *     /* 0x476d: wasm.op_0x40  * /
     *     /* 0x476e: wasm.op_0x44  * /
     *     /* 0x476f: wasm.op_0x18  * /
     *     /* 0x4770: i32.load8_u offset=84, align=68 * /
     *     /* 0x4773: wasm.op_0xfb  * /
     *     /* 0x4774: local.set $local_9 * /
     *     /* 0x4776: wasm.op_0xc0  * /
     *     /* 0x4777: local.get $local_2 * /
     *     /* 0x4779: i32.const 0 * /
     *     /* 0x477b: i32.lt_s  * /
     *     /* 0x477c: select  * /
     *     /* 0x477d: local.get $local_0 * /
     *     /* 0x477f: wasm.op_0xbb  * /
     *     /* 0x4780: wasm.op_0xa0  * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x4784: wasm.op_0x8c  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4787: end  * /
     *     /* 0x4788: local.get $local_0 * /
     *     /* 0x478a: wasm.op_0xbb  * /
     *     /* 0x478b: local.set $local_4 * /
     *     /* 0x478d: local.get $local_2 * /
     *     /* 0x478f: i32.const 0 * /
     *     /* 0x4791: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4794: local.get $local_4 * /
     *     /* 0x4796: wasm.op_0x44  * /
     *     /* 0x4797: wasm.op_0x18  * /
     *     /* 0x4798: i32.load8_u offset=84, align=68 * /
     *     /* 0x479b: wasm.op_0xfb  * /
     *     /* 0x479c: local.set $local_8185 * /
     *     /* 0x479f: wasm.op_0xa0  * /
     *     r0 = wasm_func_390(r0, r1);
     *     if (r0 != 0) { goto 2; }
     *     /* 0x47a5: end  * /
     *     /* 0x47a6: wasm.op_0x44  * /
     *     /* 0x47a7: wasm.op_0x18  * /
     *     /* 0x47a8: i32.load8_u offset=84, align=68 * /
     *     /* 0x47ab: wasm.op_0xfb  * /
     *     /* 0x47ac: local.set $local_8185 * /
     *     /* 0x47af: local.get $local_4 * /
     *     /* 0x47b1: wasm.op_0xa1  * /
     *     r0 = wasm_func_390(r0, r1);
     *     if (r0 != 0) { goto 1; }
     *     /* 0x47b7: end  * /
     *     /* 0x47b8: local.get $local_1 * /
     *     /* 0x47ba: i32.const 1088565717 * /
     *     /* 0x47c0: i32.le_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x47c3: local.get $local_1 * /
     *     /* 0x47c5: i32.const 1085271520 * /
     *     /* 0x47cb: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x47ce: wasm.op_0x44  * /
     *     /* 0x47cf: wasm.op_0x18  * /
     *     /* 0x47d0: i32.load8_u offset=84, align=68 * /
     *     /* 0x47d3: wasm.op_0xfb  * /
     *     /* 0x47d4: local.set $local_25 * /
     *     /* 0x47d6: wasm.op_0x40  * /
     *     /* 0x47d7: wasm.op_0x44  * /
     *     /* 0x47d8: wasm.op_0x18  * /
     *     /* 0x47d9: i32.load8_u offset=84, align=68 * /
     *     /* 0x47dc: wasm.op_0xfb  * /
     *     /* 0x47dd: local.set $local_25 * /
     *     /* 0x47df: wasm.op_0xc0  * /
     *     /* 0x47e0: local.get $local_2 * /
     *     /* 0x47e2: i32.const 0 * /
     *     /* 0x47e4: i32.lt_s  * /
     *     /* 0x47e5: select  * /
     *     /* 0x47e6: local.get $local_0 * /
     *     /* 0x47e8: wasm.op_0xbb  * /
     *     /* 0x47e9: wasm.op_0xa0  * /
     *     r0 = wasm_func_391(r0, r1);
     *     if (r0 != 0) { goto 2; }
     *     /* 0x47ef: end  * /
     *     /* 0x47f0: local.get $local_2 * /
     *     /* 0x47f2: i32.const 0 * /
     *     /* 0x47f4: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x47f7: wasm.op_0x44  * /
     *     /* 0x47f8: wasm.op_0xd2  * /
     *     /* 0x47f9: local.set $local_51 * /
     *     /* 0x47fb: wasm.op_0x7f  * /
     *     /* 0x47fc: i64.add  * /
     *     /* 0x47fd: wasm.op_0xd9  * /
     *     /* 0x47fe: wasm.op_0x12  * /
     *     /* 0x47ff: wasm.op_0xc0  * /
     *     /* 0x4800: local.get $local_0 * /
     *     /* 0x4802: wasm.op_0xbb  * /
     *     /* 0x4803: wasm.op_0xa1  * /
     *     r0 = wasm_func_390(r0, r1);
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4809: end  * /
     *     /* 0x480a: local.get $local_0 * /
     *     /* 0x480c: wasm.op_0xbb  * /
     *     /* 0x480d: wasm.op_0x44  * /
     *     /* 0x480e: wasm.op_0xd2  * /
     *     /* 0x480f: local.set $local_51 * /
     *     /* 0x4811: wasm.op_0x7f  * /
     *     /* 0x4812: i64.add  * /
     *     /* 0x4813: wasm.op_0xd9  * /
     *     /* 0x4814: wasm.op_0x12  * /
     *     /* 0x4815: wasm.op_0xc0  * /
     *     /* 0x4816: wasm.op_0xa0  * /
     *     r0 = wasm_func_390(r0, r1);
     *     if (r0 != 0) { goto 1; }
     *     /* 0x481c: end  * /
     *     /* 0x481d: local.get $local_0 * /
     *     /* 0x481f: local.get $local_0 * /
     *     /* 0x4821: wasm.op_0x93  * /
     *     /* 0x4822: local.get $local_1 * /
     *     /* 0x4824: i32.const 2139095040 * /
     *     /* 0x482a: i32.ge_u  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x482d: drop  * /
     *     /* 0x482e: local.get $local_0 * /
     *     /* 0x4830: local.get $local_3 * /
     *     /* 0x4832: i32.const 8 * /
     *     /* 0x4834: i32.add  * /
     *     r0 = wasm_func_1107(r0, r1);
     *     /* 0x4838: local.set $local_1 * /
     *     /* 0x483a: local.get $local_3 * /
     *     /* 0x483c: wasm.op_0x2b  * /
     *     /* 0x483d: loop 0x08 * /
     *     /* 0x483f: local.set $local_4 * /
     *     /* 0x4841: block 0x40 * /
     *     /* 0x4843: block 0x40 * /
     *     /* 0x4845: block 0x40 * /
     *     /* 0x4847: block 0x40 * /
     *     /* 0x4849: local.get $local_1 * /
     *     /* 0x484b: i32.const 3 * /
     *     /* 0x484d: i32.and  * /
     *     /* 0x484e: i32.const 1 * /
     *     /* 0x4850: i32.sub  * /
     *     /* 0x4851: wasm.op_0x0e  * /
     *     /* 0x4852: loop 0x01 * /
     *     /* 0x4854: block 0x03 * /
     *     /* 0x4856: unreachable  * /
     *     /* 0x4857: end  * /
     *     /* 0x4858: local.get $local_4 * /
     *     r0 = wasm_func_391(r0, r1);
     *     if (r0 != 0) { goto 3; }
     *     /* 0x485f: end  * /
     *     /* 0x4860: local.get $local_4 * /
     *     /* 0x4862: wasm.op_0x9a  * /
     *     r0 = wasm_func_390(r0, r1);
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4868: end  * /
     *     /* 0x4869: local.get $local_4 * /
     *     r0 = wasm_func_391(r0, r1);
     *     /* 0x486e: wasm.op_0x8c  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4871: end  * /
     *     /* 0x4872: local.get $local_4 * /
     *     r0 = wasm_func_390(r0, r1);
     *     /* 0x4877: end  * /
     *     /* 0x4878: local.get $local_3 * /
     *     /* 0x487a: i32.const 16 * /
     *     /* 0x487c: i32.add  * /
     *     /* 0x487d: local.tee $local_1 * /
     *     /* 0x487f: global.get $global_4 * /
     *     /* 0x4881: i32.gt_u  * /
     *     /* 0x4882: local.get $local_1 * /
     *     /* 0x4884: global.get $global_5 * /
     *     /* 0x4886: i32.lt_u  * /
     *     /* 0x4887: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x488a: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x488e: end  * /
     *     /* 0x488f: local.get $local_1 * /
     *     /* 0x4891: global.set $global_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_277(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x46faULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xeULL;
}

/*
* Reconstructed Procedure: wasm_func_278 (@ 0x4896, 135 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_278 ───
     * int64_t wasm_func_278(int64_t arg0, int64_t arg1) {
     *     /* 0x4899: local.get $local_0 * /
     *     /* 0x489b: i32.load offset=12, align=2 * /
     *     /* 0x489e: local.tee $local_3 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x48a2: local.get $local_3 * /
     *     /* 0x48a4: local.tee $local_1 * /
     *     /* 0x48a6: local.get $local_0 * /
     *     /* 0x48a8: i32.load offset=16, align=2 * /
     *     /* 0x48ab: local.tee $local_2 * /
     *     /* 0x48ad: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x48b0: loop 0x40 * /
     *     /* 0x48b2: local.get $local_2 * /
     *     /* 0x48b4: i32.const 12 * /
     *     /* 0x48b6: i32.sub  * /
     *     /* 0x48b7: local.tee $local_1 * /
     *     /* 0x48b9: i32.load offset=0, align=2 * /
     *     /* 0x48bc: local.tee $local_4 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x48c0: local.get $local_2 * /
     *     /* 0x48c2: i32.const 8 * /
     *     /* 0x48c4: i32.sub  * /
     *     /* 0x48c5: local.get $local_4 * /
     *     /* 0x48c7: i32.store offset=0, align=2 * /
     *     /* 0x48ca: local.get $local_2 * /
     *     /* 0x48cc: i32.const 4 * /
     *     /* 0x48ce: i32.sub  * /
     *     /* 0x48cf: i32.load offset=0, align=2 * /
     *     /* 0x48d2: drop  * /
     *     /* 0x48d3: local.get $local_4 * /
     *     r0 = _d(r0, r1);
     *     /* 0x48d8: end  * /
     *     /* 0x48d9: local.get $local_1 * /
     *     /* 0x48db: local.tee $local_2 * /
     *     /* 0x48dd: local.get $local_3 * /
     *     /* 0x48df: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x48e2: end  * /
     *     /* 0x48e3: local.get $local_0 * /
     *     /* 0x48e5: i32.load offset=12, align=2 * /
     *     /* 0x48e8: local.set $local_1 * /
     *     /* 0x48ea: end  * /
     *     /* 0x48eb: local.get $local_0 * /
     *     /* 0x48ed: local.get $local_3 * /
     *     /* 0x48ef: i32.store offset=16, align=2 * /
     *     /* 0x48f2: local.get $local_0 * /
     *     /* 0x48f4: i32.load offset=20, align=2 * /
     *     /* 0x48f7: drop  * /
     *     /* 0x48f8: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x48fd: end  * /
     *     /* 0x48fe: local.get $local_0 * /
     *     /* 0x4900: i32.load offset=0, align=2 * /
     *     /* 0x4903: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4907: local.get $local_0 * /
     *     /* 0x4909: local.get $local_1 * /
     *     /* 0x490b: i32.store offset=4, align=2 * /
     *     /* 0x490e: local.get $local_0 * /
     *     /* 0x4910: i32.load offset=8, align=2 * /
     *     /* 0x4913: drop  * /
     *     /* 0x4914: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4919: end  * /
     *     /* 0x491a: local.get $local_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_278(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4896ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: wasm_func_279 (@ 0x491f, 1277 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_279 ───
     * int64_t wasm_func_279(int64_t arg0, int64_t arg1) {
     *     /* 0x4924: global.get $global_0 * /
     *     /* 0x4926: i32.const 112 * /
     *     /* 0x4929: i32.sub  * /
     *     /* 0x492a: local.tee $local_6 * /
     *     /* 0x492c: local.tee $local_5 * /
     *     /* 0x492e: global.get $global_4 * /
     *     /* 0x4930: i32.gt_u  * /
     *     /* 0x4931: local.get $local_5 * /
     *     /* 0x4933: global.get $global_5 * /
     *     /* 0x4935: i32.lt_u  * /
     *     /* 0x4936: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4939: local.get $local_5 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x493d: end  * /
     *     /* 0x493e: local.get $local_5 * /
     *     /* 0x4940: global.set $global_0 * /
     *     /* 0x4942: local.get $local_4 * /
     *     /* 0x4944: i64.const 0x7fffffffffffffff * /
     *     /* 0x494f: i64.and  * /
     *     /* 0x4950: local.set $local_9 * /
     *     /* 0x4952: block 0x40 * /
     *     /* 0x4954: block 0x40 * /
     *     /* 0x4956: local.get $local_1 * /
     *     /* 0x4958: i64.eqz  * /
     *     /* 0x4959: local.tee $local_5 * /
     *     /* 0x495b: local.get $local_2 * /
     *     /* 0x495d: i64.const 0x7fffffffffffffff * /
     *     /* 0x4968: i64.and  * /
     *     /* 0x4969: local.tee $local_10 * /
     *     /* 0x496b: i64.const 0x7fff000000000000 * /
     *     /* 0x4976: i64.sub  * /
     *     /* 0x4977: i64.const 0x8001000000000000 * /
     *     /* 0x4982: wasm.op_0x54  * /
     *     /* 0x4983: local.get $local_10 * /
     *     /* 0x4985: i64.eqz  * /
     *     /* 0x4986: select  * /
     *     /* 0x4987: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x498a: local.get $local_3 * /
     *     /* 0x498c: i64.const 0x0 * /
     *     /* 0x498e: i64.ne  * /
     *     /* 0x498f: local.get $local_9 * /
     *     /* 0x4991: i64.const 0x7fff000000000000 * /
     *     /* 0x499c: i64.sub  * /
     *     /* 0x499d: local.tee $local_11 * /
     *     /* 0x499f: i64.const 0x8001000000000000 * /
     *     /* 0x49aa: wasm.op_0x56  * /
     *     /* 0x49ab: local.get $local_11 * /
     *     /* 0x49ad: i64.const 0x8001000000000000 * /
     *     /* 0x49b8: i64.eq  * /
     *     /* 0x49b9: select  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x49bc: end  * /
     *     /* 0x49bd: local.get $local_5 * /
     *     /* 0x49bf: local.get $local_10 * /
     *     /* 0x49c1: i64.const 0x7fff000000000000 * /
     *     /* 0x49cc: wasm.op_0x54  * /
     *     /* 0x49cd: local.get $local_10 * /
     *     /* 0x49cf: i64.const 0x7fff000000000000 * /
     *     /* 0x49da: i64.eq  * /
     *     /* 0x49db: select  * /
     *     /* 0x49dc: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x49df: local.get $local_2 * /
     *     /* 0x49e1: i64.const 0x800000000000 * /
     *     /* 0x49e9: i64.or  * /
     *     /* 0x49ea: local.set $local_4 * /
     *     /* 0x49ec: local.get $local_1 * /
     *     /* 0x49ee: local.set $local_3 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x49f2: end  * /
     *     /* 0x49f3: local.get $local_3 * /
     *     /* 0x49f5: i64.eqz  * /
     *     /* 0x49f6: local.get $local_9 * /
     *     /* 0x49f8: i64.const 0x7fff000000000000 * /
     *     /* 0x4a03: wasm.op_0x54  * /
     *     /* 0x4a04: local.get $local_9 * /
     *     /* 0x4a06: i64.const 0x7fff000000000000 * /
     *     /* 0x4a11: i64.eq  * /
     *     /* 0x4a12: select  * /
     *     /* 0x4a13: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4a16: local.get $local_4 * /
     *     /* 0x4a18: i64.const 0x800000000000 * /
     *     /* 0x4a20: i64.or  * /
     *     /* 0x4a21: local.set $local_4 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4a25: end  * /
     *     /* 0x4a26: local.get $local_1 * /
     *     /* 0x4a28: local.get $local_10 * /
     *     /* 0x4a2a: i64.const 0x7fff000000000000 * /
     *     /* 0x4a35: i64.xor  * /
     *     /* 0x4a36: i64.or  * /
     *     /* 0x4a37: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4a3a: i64.const 0x7fff800000000000 * /
     *     /* 0x4a45: local.get $local_2 * /
     *     /* 0x4a47: local.get $local_1 * /
     *     /* 0x4a49: local.get $local_3 * /
     *     /* 0x4a4b: i64.xor  * /
     *     /* 0x4a4c: local.get $local_2 * /
     *     /* 0x4a4e: local.get $local_4 * /
     *     /* 0x4a50: i64.xor  * /
     *     /* 0x4a51: i64.const 0x8000000000000000 * /
     *     /* 0x4a5c: i64.xor  * /
     *     /* 0x4a5d: i64.or  * /
     *     /* 0x4a5e: i64.eqz  * /
     *     /* 0x4a5f: local.tee $local_5 * /
     *     /* 0x4a61: select  * /
     *     /* 0x4a62: local.set $local_4 * /
     *     /* 0x4a64: i64.const 0x0 * /
     *     /* 0x4a66: local.get $local_1 * /
     *     /* 0x4a68: local.get $local_5 * /
     *     /* 0x4a6a: select  * /
     *     /* 0x4a6b: local.set $local_3 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4a6f: end  * /
     *     /* 0x4a70: local.get $local_3 * /
     *     /* 0x4a72: local.get $local_9 * /
     *     /* 0x4a74: i64.const 0x7fff000000000000 * /
     *     /* 0x4a7f: i64.xor  * /
     *     /* 0x4a80: i64.or  * /
     *     /* 0x4a81: i64.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4a84: local.get $local_1 * /
     *     /* 0x4a86: local.get $local_10 * /
     *     /* 0x4a88: i64.or  * /
     *     /* 0x4a89: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4a8c: local.get $local_3 * /
     *     /* 0x4a8e: local.get $local_9 * /
     *     /* 0x4a90: i64.or  * /
     *     /* 0x4a91: i64.const 0x0 * /
     *     /* 0x4a93: i64.ne  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4a96: local.get $local_1 * /
     *     /* 0x4a98: local.get $local_3 * /
     *     /* 0x4a9a: i64.and  * /
     *     /* 0x4a9b: local.set $local_3 * /
     *     /* 0x4a9d: local.get $local_2 * /
     *     /* 0x4a9f: local.get $local_4 * /
     *     /* 0x4aa1: i64.and  * /
     *     /* 0x4aa2: local.set $local_4 * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4aa6: end  * /
     *     /* 0x4aa7: local.get $local_3 * /
     *     /* 0x4aa9: local.get $local_9 * /
     *     /* 0x4aab: i64.or  * /
     *     /* 0x4aac: i64.const 0x0 * /
     *     /* 0x4aae: i64.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4ab1: local.get $local_1 * /
     *     /* 0x4ab3: local.set $local_3 * /
     *     /* 0x4ab5: local.get $local_2 * /
     *     /* 0x4ab7: local.set $local_4 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4abb: end  * /
     *     /* 0x4abc: local.get $local_3 * /
     *     /* 0x4abe: local.get $local_1 * /
     *     /* 0x4ac0: local.get $local_1 * /
     *     /* 0x4ac2: local.get $local_3 * /
     *     /* 0x4ac4: wasm.op_0x54  * /
     *     /* 0x4ac5: local.get $local_9 * /
     *     /* 0x4ac7: local.get $local_10 * /
     *     /* 0x4ac9: wasm.op_0x56  * /
     *     /* 0x4aca: local.get $local_9 * /
     *     /* 0x4acc: local.get $local_10 * /
     *     /* 0x4ace: i64.eq  * /
     *     /* 0x4acf: select  * /
     *     /* 0x4ad0: local.tee $local_8 * /
     *     /* 0x4ad2: select  * /
     *     /* 0x4ad3: local.set $local_10 * /
     *     /* 0x4ad5: local.get $local_4 * /
     *     /* 0x4ad7: local.get $local_2 * /
     *     /* 0x4ad9: local.get $local_8 * /
     *     /* 0x4adb: select  * /
     *     /* 0x4adc: local.tee $local_12 * /
     *     /* 0x4ade: i64.const 0xffffffffffff * /
     *     /* 0x4ae6: i64.and  * /
     *     /* 0x4ae7: local.set $local_9 * /
     *     /* 0x4ae9: local.get $local_2 * /
     *     /* 0x4aeb: local.get $local_4 * /
     *     /* 0x4aed: local.get $local_8 * /
     *     /* 0x4aef: select  * /
     *     /* 0x4af0: local.tee $local_11 * /
     *     /* 0x4af2: i64.const 0x30 * /
     *     /* 0x4af4: i64.shr_u  * /
     *     /* 0x4af5: i32.wrap_i64  * /
     *     /* 0x4af6: i32.const 32767 * /
     *     /* 0x4afa: i32.and  * /
     *     /* 0x4afb: local.set $local_7 * /
     *     /* 0x4afd: local.get $local_12 * /
     *     /* 0x4aff: i64.const 0x30 * /
     *     /* 0x4b01: i64.shr_u  * /
     *     /* 0x4b02: i32.wrap_i64  * /
     *     /* 0x4b03: i32.const 32767 * /
     *     /* 0x4b07: i32.and  * /
     *     /* 0x4b08: local.tee $local_5 * /
     *     /* 0x4b0a: i32.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4b0d: local.get $local_6 * /
     *     /* 0x4b0f: i32.const 96 * /
     *     /* 0x4b12: i32.add  * /
     *     /* 0x4b13: local.get $local_10 * /
     *     /* 0x4b15: local.get $local_9 * /
     *     /* 0x4b17: local.get $local_10 * /
     *     /* 0x4b19: local.get $local_9 * /
     *     /* 0x4b1b: local.get $local_9 * /
     *     /* 0x4b1d: i64.eqz  * /
     *     /* 0x4b1e: local.tee $local_5 * /
     *     /* 0x4b20: select  * /
     *     /* 0x4b21: wasm.op_0x79  * /
     *     /* 0x4b22: i64.const 0x40 * /
     *     /* 0x4b25: i64.const 0x0 * /
     *     /* 0x4b27: local.get $local_5 * /
     *     /* 0x4b29: select  * /
     *     /* 0x4b2a: i64.add  * /
     *     /* 0x4b2b: i32.wrap_i64  * /
     *     /* 0x4b2c: local.tee $local_5 * /
     *     /* 0x4b2e: i32.const 15 * /
     *     /* 0x4b30: i32.sub  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4b34: local.get $local_6 * /
     *     /* 0x4b36: i64.load offset=104, align=3 * /
     *     /* 0x4b39: local.set $local_9 * /
     *     /* 0x4b3b: local.get $local_6 * /
     *     /* 0x4b3d: i64.load offset=96, align=3 * /
     *     /* 0x4b40: local.set $local_10 * /
     *     /* 0x4b42: i32.const 16 * /
     *     /* 0x4b44: local.get $local_5 * /
     *     /* 0x4b46: i32.sub  * /
     *     /* 0x4b47: local.set $local_5 * /
     *     /* 0x4b49: end  * /
     *     /* 0x4b4a: local.get $local_1 * /
     *     /* 0x4b4c: local.get $local_3 * /
     *     /* 0x4b4e: local.get $local_8 * /
     *     /* 0x4b50: select  * /
     *     /* 0x4b51: local.set $local_3 * /
     *     /* 0x4b53: local.get $local_11 * /
     *     /* 0x4b55: i64.const 0xffffffffffff * /
     *     /* 0x4b5d: i64.and  * /
     *     /* 0x4b5e: local.set $local_1 * /
     *     /* 0x4b60: local.get $local_7 * /
     *     if (r0 != 0) { goto 0x7e; }
     *     /* 0x4b64: local.get $local_1 * /
     *     /* 0x4b66: else  * /
     *     /* 0x4b67: local.get $local_6 * /
     *     /* 0x4b69: i32.const 80 * /
     *     /* 0x4b6c: i32.add  * /
     *     /* 0x4b6d: local.get $local_3 * /
     *     /* 0x4b6f: local.get $local_1 * /
     *     /* 0x4b71: local.get $local_3 * /
     *     /* 0x4b73: local.get $local_1 * /
     *     /* 0x4b75: local.get $local_1 * /
     *     /* 0x4b77: i64.eqz  * /
     *     /* 0x4b78: local.tee $local_7 * /
     *     /* 0x4b7a: select  * /
     *     /* 0x4b7b: wasm.op_0x79  * /
     *     /* 0x4b7c: i64.const 0x40 * /
     *     /* 0x4b7f: i64.const 0x0 * /
     *     /* 0x4b81: local.get $local_7 * /
     *     /* 0x4b83: select  * /
     *     /* 0x4b84: i64.add  * /
     *     /* 0x4b85: i32.wrap_i64  * /
     *     /* 0x4b86: local.tee $local_7 * /
     *     /* 0x4b88: i32.const 15 * /
     *     /* 0x4b8a: i32.sub  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4b8e: i32.const 16 * /
     *     /* 0x4b90: local.get $local_7 * /
     *     /* 0x4b92: i32.sub  * /
     *     /* 0x4b93: local.set $local_7 * /
     *     /* 0x4b95: local.get $local_6 * /
     *     /* 0x4b97: i64.load offset=80, align=3 * /
     *     /* 0x4b9a: local.set $local_3 * /
     *     /* 0x4b9c: local.get $local_6 * /
     *     /* 0x4b9e: i64.load offset=88, align=3 * /
     *     /* 0x4ba1: end  * /
     *     /* 0x4ba2: i64.const 0x3 * /
     *     /* 0x4ba4: i64.shl  * /
     *     /* 0x4ba5: local.get $local_3 * /
     *     /* 0x4ba7: i64.const 0x3d * /
     *     /* 0x4ba9: i64.shr_u  * /
     *     /* 0x4baa: i64.or  * /
     *     /* 0x4bab: i64.const 0x8000000000000 * /
     *     /* 0x4bb4: i64.or  * /
     *     /* 0x4bb5: local.set $local_1 * /
     *     /* 0x4bb7: local.get $local_9 * /
     *     /* 0x4bb9: i64.const 0x3 * /
     *     /* 0x4bbb: i64.shl  * /
     *     /* 0x4bbc: local.get $local_10 * /
     *     /* 0x4bbe: i64.const 0x3d * /
     *     /* 0x4bc0: i64.shr_u  * /
     *     /* 0x4bc1: i64.or  * /
     *     /* 0x4bc2: local.get $local_2 * /
     *     /* 0x4bc4: local.get $local_4 * /
     *     /* 0x4bc6: i64.xor  * /
     *     /* 0x4bc7: local.set $local_4 * /
     *     /* 0x4bc9: block 0x7e * /
     *     /* 0x4bcb: local.get $local_3 * /
     *     /* 0x4bcd: i64.const 0x3 * /
     *     /* 0x4bcf: i64.shl  * /
     *     /* 0x4bd0: local.tee $local_2 * /
     *     /* 0x4bd2: local.get $local_5 * /
     *     /* 0x4bd4: local.get $local_7 * /
     *     /* 0x4bd6: i32.eq  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4bd9: drop  * /
     *     /* 0x4bda: local.get $local_5 * /
     *     /* 0x4bdc: local.get $local_7 * /
     *     /* 0x4bde: i32.sub  * /
     *     /* 0x4bdf: local.tee $local_7 * /
     *     /* 0x4be1: i32.const 127 * /
     *     /* 0x4be4: i32.gt_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4be7: i64.const 0x0 * /
     *     /* 0x4be9: local.set $local_1 * /
     *     /* 0x4beb: i64.const 0x1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4bef: end  * /
     *     /* 0x4bf0: local.get $local_6 * /
     *     /* 0x4bf2: i32.const -64 * /
     *     /* 0x4bf4: i32.sub  * /
     *     /* 0x4bf5: local.get $local_2 * /
     *     /* 0x4bf7: local.get $local_1 * /
     *     /* 0x4bf9: i32.const 128 * /
     *     /* 0x4bfc: local.get $local_7 * /
     *     /* 0x4bfe: i32.sub  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4c02: local.get $local_6 * /
     *     /* 0x4c04: i32.const 48 * /
     *     /* 0x4c06: i32.add  * /
     *     /* 0x4c07: local.get $local_2 * /
     *     /* 0x4c09: local.get $local_1 * /
     *     /* 0x4c0b: local.get $local_7 * /
     *     r0 = wasm_func_436(r0, r1);
     *     /* 0x4c10: local.get $local_6 * /
     *     /* 0x4c12: i64.load offset=56, align=3 * /
     *     /* 0x4c15: local.set $local_1 * /
     *     /* 0x4c17: local.get $local_6 * /
     *     /* 0x4c19: i64.load offset=48, align=3 * /
     *     /* 0x4c1c: local.get $local_6 * /
     *     /* 0x4c1e: i64.load offset=64, align=3 * /
     *     /* 0x4c21: local.get $local_6 * /
     *     /* 0x4c23: i64.load offset=72, align=3 * /
     *     /* 0x4c26: i64.or  * /
     *     /* 0x4c27: i64.const 0x0 * /
     *     /* 0x4c29: i64.ne  * /
     *     /* 0x4c2a: i64.extend_i32_u  * /
     *     /* 0x4c2b: i64.or  * /
     *     /* 0x4c2c: end  * /
     *     /* 0x4c2d: local.set $local_9 * /
     *     /* 0x4c2f: i64.const 0x8000000000000 * /
     *     /* 0x4c38: i64.or  * /
     *     /* 0x4c39: local.set $local_11 * /
     *     /* 0x4c3b: local.get $local_10 * /
     *     /* 0x4c3d: i64.const 0x3 * /
     *     /* 0x4c3f: i64.shl  * /
     *     /* 0x4c40: local.set $local_10 * /
     *     /* 0x4c42: block 0x40 * /
     *     /* 0x4c44: local.get $local_4 * /
     *     /* 0x4c46: i64.const 0x0 * /
     *     /* 0x4c48: wasm.op_0x53  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4c4b: i64.const 0x0 * /
     *     /* 0x4c4d: local.set $local_3 * /
     *     /* 0x4c4f: i64.const 0x0 * /
     *     /* 0x4c51: local.set $local_4 * /
     *     /* 0x4c53: local.get $local_9 * /
     *     /* 0x4c55: local.get $local_10 * /
     *     /* 0x4c57: i64.xor  * /
     *     /* 0x4c58: local.get $local_1 * /
     *     /* 0x4c5a: local.get $local_11 * /
     *     /* 0x4c5c: i64.xor  * /
     *     /* 0x4c5d: i64.or  * /
     *     /* 0x4c5e: i64.eqz  * /
     *     if (r0 != 0) { goto 2; }
     *     /* 0x4c61: local.get $local_10 * /
     *     /* 0x4c63: local.get $local_9 * /
     *     /* 0x4c65: i64.sub  * /
     *     /* 0x4c66: local.set $local_2 * /
     *     /* 0x4c68: local.get $local_11 * /
     *     /* 0x4c6a: local.get $local_1 * /
     *     /* 0x4c6c: i64.sub  * /
     *     /* 0x4c6d: local.get $local_9 * /
     *     /* 0x4c6f: local.get $local_10 * /
     *     /* 0x4c71: wasm.op_0x56  * /
     *     /* 0x4c72: i64.extend_i32_u  * /
     *     /* 0x4c73: i64.sub  * /
     *     /* 0x4c74: local.tee $local_4 * /
     *     /* 0x4c76: i64.const 0x7ffffffffffff * /
     *     /* 0x4c7f: wasm.op_0x56  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4c82: local.get $local_6 * /
     *     /* 0x4c84: i32.const 32 * /
     *     /* 0x4c86: i32.add  * /
     *     /* 0x4c87: local.get $local_2 * /
     *     /* 0x4c89: local.get $local_4 * /
     *     /* 0x4c8b: local.get $local_2 * /
     *     /* 0x4c8d: local.get $local_4 * /
     *     /* 0x4c8f: local.get $local_4 * /
     *     /* 0x4c91: i64.eqz  * /
     *     /* 0x4c92: local.tee $local_7 * /
     *     /* 0x4c94: select  * /
     *     /* 0x4c95: wasm.op_0x79  * /
     *     /* 0x4c96: i64.const 0x40 * /
     *     /* 0x4c99: i64.const 0x0 * /
     *     /* 0x4c9b: local.get $local_7 * /
     *     /* 0x4c9d: select  * /
     *     /* 0x4c9e: i64.or  * /
     *     /* 0x4c9f: i32.wrap_i64  * /
     *     /* 0x4ca0: i32.const 12 * /
     *     /* 0x4ca2: i32.sub  * /
     *     /* 0x4ca3: local.tee $local_7 * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4ca8: local.get $local_5 * /
     *     /* 0x4caa: local.get $local_7 * /
     *     /* 0x4cac: i32.sub  * /
     *     /* 0x4cad: local.set $local_5 * /
     *     /* 0x4caf: local.get $local_6 * /
     *     /* 0x4cb1: i64.load offset=40, align=3 * /
     *     /* 0x4cb4: local.set $local_4 * /
     *     /* 0x4cb6: local.get $local_6 * /
     *     /* 0x4cb8: i64.load offset=32, align=3 * /
     *     /* 0x4cbb: local.set $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4cbf: end  * /
     *     /* 0x4cc0: local.get $local_9 * /
     *     /* 0x4cc2: local.get $local_10 * /
     *     /* 0x4cc4: i64.add  * /
     *     /* 0x4cc5: local.tee $local_2 * /
     *     /* 0x4cc7: local.get $local_9 * /
     *     /* 0x4cc9: wasm.op_0x54  * /
     *     /* 0x4cca: i64.extend_i32_u  * /
     *     /* 0x4ccb: local.get $local_1 * /
     *     /* 0x4ccd: local.get $local_11 * /
     *     /* 0x4ccf: i64.add  * /
     *     /* 0x4cd0: i64.add  * /
     *     /* 0x4cd1: local.tee $local_4 * /
     *     /* 0x4cd3: i64.const 0x10000000000000 * /
     *     /* 0x4cdc: i64.and  * /
     *     /* 0x4cdd: i64.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4ce0: local.get $local_9 * /
     *     /* 0x4ce2: i64.const 0x1 * /
     *     /* 0x4ce4: i64.and  * /
     *     /* 0x4ce5: local.get $local_4 * /
     *     /* 0x4ce7: i64.const 0x3f * /
     *     /* 0x4ce9: i64.shl  * /
     *     /* 0x4cea: local.get $local_2 * /
     *     /* 0x4cec: i64.const 0x1 * /
     *     /* 0x4cee: i64.shr_u  * /
     *     /* 0x4cef: i64.or  * /
     *     /* 0x4cf0: i64.or  * /
     *     /* 0x4cf1: local.set $local_2 * /
     *     /* 0x4cf3: local.get $local_5 * /
     *     /* 0x4cf5: i32.const 1 * /
     *     /* 0x4cf7: i32.add  * /
     *     /* 0x4cf8: local.set $local_5 * /
     *     /* 0x4cfa: local.get $local_4 * /
     *     /* 0x4cfc: i64.const 0x1 * /
     *     /* 0x4cfe: i64.shr_u  * /
     *     /* 0x4cff: local.set $local_4 * /
     *     /* 0x4d01: end  * /
     *     /* 0x4d02: local.get $local_12 * /
     *     /* 0x4d04: i64.const 0x8000000000000000 * /
     *     /* 0x4d0f: i64.and  * /
     *     /* 0x4d10: local.set $local_3 * /
     *     /* 0x4d12: local.get $local_5 * /
     *     /* 0x4d14: i32.const 32767 * /
     *     /* 0x4d18: i32.ge_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4d1b: local.get $local_3 * /
     *     /* 0x4d1d: i64.const 0x7fff000000000000 * /
     *     /* 0x4d28: i64.or  * /
     *     /* 0x4d29: local.set $local_4 * /
     *     /* 0x4d2b: i64.const 0x0 * /
     *     /* 0x4d2d: local.set $local_3 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4d31: end  * /
     *     /* 0x4d32: i32.const 0 * /
     *     /* 0x4d34: local.set $local_7 * /
     *     /* 0x4d36: block 0x40 * /
     *     /* 0x4d38: local.get $local_5 * /
     *     /* 0x4d3a: i32.const 0 * /
     *     /* 0x4d3c: i32.gt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4d3f: local.get $local_5 * /
     *     /* 0x4d41: local.set $local_7 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4d45: end  * /
     *     /* 0x4d46: local.get $local_6 * /
     *     /* 0x4d48: i32.const 16 * /
     *     /* 0x4d4a: i32.add  * /
     *     /* 0x4d4b: local.get $local_2 * /
     *     /* 0x4d4d: local.get $local_4 * /
     *     /* 0x4d4f: local.get $local_5 * /
     *     /* 0x4d51: i32.const 127 * /
     *     /* 0x4d54: i32.add  * /
     *     r0 = wasm_func_351(r0, r1);
     *     /* 0x4d58: local.get $local_6 * /
     *     /* 0x4d5a: local.get $local_2 * /
     *     /* 0x4d5c: local.get $local_4 * /
     *     /* 0x4d5e: i32.const 1 * /
     *     /* 0x4d60: local.get $local_5 * /
     *     /* 0x4d62: i32.sub  * /
     *     r0 = wasm_func_436(r0, r1);
     *     /* 0x4d66: local.get $local_6 * /
     *     /* 0x4d68: i64.load offset=0, align=3 * /
     *     /* 0x4d6b: local.get $local_6 * /
     *     /* 0x4d6d: i64.load offset=16, align=3 * /
     *     /* 0x4d70: local.get $local_6 * /
     *     /* 0x4d72: i64.load offset=24, align=3 * /
     *     /* 0x4d75: i64.or  * /
     *     /* 0x4d76: i64.const 0x0 * /
     *     /* 0x4d78: i64.ne  * /
     *     /* 0x4d79: i64.extend_i32_u  * /
     *     /* 0x4d7a: i64.or  * /
     *     /* 0x4d7b: local.set $local_2 * /
     *     /* 0x4d7d: local.get $local_6 * /
     *     /* 0x4d7f: i64.load offset=8, align=3 * /
     *     /* 0x4d82: local.set $local_4 * /
     *     /* 0x4d84: end  * /
     *     /* 0x4d85: local.get $local_4 * /
     *     /* 0x4d87: i64.const 0x3d * /
     *     /* 0x4d89: i64.shl  * /
     *     /* 0x4d8a: local.get $local_2 * /
     *     /* 0x4d8c: i64.const 0x3 * /
     *     /* 0x4d8e: i64.shr_u  * /
     *     /* 0x4d8f: i64.or  * /
     *     /* 0x4d90: local.set $local_1 * /
     *     /* 0x4d92: local.get $local_4 * /
     *     /* 0x4d94: i64.const 0x3 * /
     *     /* 0x4d96: i64.shr_u  * /
     *     /* 0x4d97: i64.const 0xffffffffffff * /
     *     /* 0x4d9f: i64.and  * /
     *     /* 0x4da0: local.get $local_7 * /
     *     /* 0x4da2: i64.extend_i32_u  * /
     *     /* 0x4da3: i64.const 0x30 * /
     *     /* 0x4da5: i64.shl  * /
     *     /* 0x4da6: i64.or  * /
     *     /* 0x4da7: local.get $local_3 * /
     *     /* 0x4da9: i64.or  * /
     *     /* 0x4daa: local.set $local_4 * /
     *     /* 0x4dac: block 0x40 * /
     *     /* 0x4dae: block 0x40 * /
     *     /* 0x4db0: local.get $local_2 * /
     *     /* 0x4db2: i32.wrap_i64  * /
     *     /* 0x4db3: i32.const 7 * /
     *     /* 0x4db5: i32.and  * /
     *     /* 0x4db6: local.tee $local_5 * /
     *     /* 0x4db8: i32.const 4 * /
     *     /* 0x4dba: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4dbd: local.get $local_4 * /
     *     /* 0x4dbf: local.get $local_1 * /
     *     /* 0x4dc1: local.get $local_1 * /
     *     /* 0x4dc3: local.get $local_5 * /
     *     /* 0x4dc5: i32.const 4 * /
     *     /* 0x4dc7: i32.gt_u  * /
     *     /* 0x4dc8: i64.extend_i32_u  * /
     *     /* 0x4dc9: i64.add  * /
     *     /* 0x4dca: local.tee $local_3 * /
     *     /* 0x4dcc: wasm.op_0x56  * /
     *     /* 0x4dcd: i64.extend_i32_u  * /
     *     /* 0x4dce: i64.add  * /
     *     /* 0x4dcf: local.set $local_4 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4dd3: end  * /
     *     /* 0x4dd4: local.get $local_4 * /
     *     /* 0x4dd6: local.get $local_1 * /
     *     /* 0x4dd8: local.get $local_1 * /
     *     /* 0x4dda: local.get $local_1 * /
     *     /* 0x4ddc: i64.const 0x1 * /
     *     /* 0x4dde: i64.and  * /
     *     /* 0x4ddf: i64.add  * /
     *     /* 0x4de0: local.tee $local_3 * /
     *     /* 0x4de2: wasm.op_0x56  * /
     *     /* 0x4de3: i64.extend_i32_u  * /
     *     /* 0x4de4: i64.add  * /
     *     /* 0x4de5: local.set $local_4 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4de9: end  * /
     *     /* 0x4dea: local.get $local_5 * /
     *     /* 0x4dec: i32.eqz  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4def: end  * /
     *     /* 0x4df0: end  * /
     *     /* 0x4df1: local.get $local_0 * /
     *     /* 0x4df3: local.get $local_3 * /
     *     /* 0x4df5: i64.store offset=0, align=3 * /
     *     /* 0x4df8: local.get $local_0 * /
     *     /* 0x4dfa: local.get $local_4 * /
     *     /* 0x4dfc: i64.store offset=8, align=3 * /
     *     /* 0x4dff: local.get $local_6 * /
     *     /* 0x4e01: i32.const 112 * /
     *     /* 0x4e04: i32.add  * /
     *     /* 0x4e05: local.tee $local_0 * /
     *     /* 0x4e07: global.get $global_4 * /
     *     /* 0x4e09: i32.gt_u  * /
     *     /* 0x4e0a: local.get $local_0 * /
     *     /* 0x4e0c: global.get $global_5 * /
     *     /* 0x4e0e: i32.lt_u  * /
     *     /* 0x4e0f: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4e12: local.get $local_0 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x4e16: end  * /
     *     /* 0x4e17: local.get $local_0 * /
     *     /* 0x4e19: global.set $global_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_279(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x491fULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: wasm_func_280 (@ 0x4e1d, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_280 ───
     * int64_t wasm_func_280(int64_t arg0, int64_t arg1) {
     *     /* 0x4e20: i32.const 4 * /
     *     r0 = wasm_func_264(r0, r1);
     *     /* 0x4e25: local.tee $local_0 * /
     *     /* 0x4e27: i32.const 3706464 * /
     *     /* 0x4e2c: i32.store offset=0, align=2 * /
     *     /* 0x4e2f: local.get $local_0 * /
     *     /* 0x4e31: i32.const 3706500 * /
     *     /* 0x4e36: i32.const 224 * /
     *     r0 = imp_n(r0, r1);
     *     /* 0x4e3b: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_280(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4e1dULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_281 (@ 0x4e3e, 50 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_281 ───
     * int64_t wasm_func_281(int64_t arg0, int64_t arg1) {
     *     /* 0x4e3f: local.get $local_0 * /
     *     /* 0x4e41: local.get $local_1 * /
     *     /* 0x4e43: wasm.op_0x2a  * /
     *     /* 0x4e44: block 0x00 * /
     *     /* 0x4e46: local.get $local_2 * /
     *     /* 0x4e48: wasm.op_0x2a  * /
     *     /* 0x4e49: block 0x00 * /
     *     /* 0x4e4b: wasm.op_0x93  * /
     *     /* 0x4e4c: wasm.op_0x38  * /
     *     /* 0x4e4d: block 0x00 * /
     *     /* 0x4e4f: local.get $local_0 * /
     *     /* 0x4e51: local.get $local_1 * /
     *     /* 0x4e53: wasm.op_0x2a  * /
     *     /* 0x4e54: block 0x04 * /
     *     /* 0x4e56: local.get $local_2 * /
     *     /* 0x4e58: wasm.op_0x2a  * /
     *     /* 0x4e59: block 0x04 * /
     *     /* 0x4e5b: wasm.op_0x93  * /
     *     /* 0x4e5c: wasm.op_0x38  * /
     *     /* 0x4e5d: block 0x04 * /
     *     /* 0x4e5f: local.get $local_0 * /
     *     /* 0x4e61: local.get $local_1 * /
     *     /* 0x4e63: wasm.op_0x2a  * /
     *     /* 0x4e64: block 0x08 * /
     *     /* 0x4e66: local.get $local_2 * /
     *     /* 0x4e68: wasm.op_0x2a  * /
     *     /* 0x4e69: block 0x08 * /
     *     /* 0x4e6b: wasm.op_0x93  * /
     *     /* 0x4e6c: wasm.op_0x38  * /
     *     /* 0x4e6d: block 0x08 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_281(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4e3eULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_282 (@ 0x4e72, 211 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_282 ───
     * int64_t wasm_func_282(int64_t arg0, int64_t arg1) {
     *     /* 0x4e77: i32.const -1 * /
     *     /* 0x4e79: local.set $local_4 * /
     *     /* 0x4e7b: block 0x40 * /
     *     /* 0x4e7d: local.get $local_0 * /
     *     /* 0x4e7f: i64.const 0x0 * /
     *     /* 0x4e81: i64.ne  * /
     *     /* 0x4e82: local.get $local_1 * /
     *     /* 0x4e84: i64.const 0x7fffffffffffffff * /
     *     /* 0x4e8f: i64.and  * /
     *     /* 0x4e90: local.tee $local_5 * /
     *     /* 0x4e92: i64.const 0x7fff000000000000 * /
     *     /* 0x4e9d: wasm.op_0x56  * /
     *     /* 0x4e9e: local.get $local_5 * /
     *     /* 0x4ea0: i64.const 0x7fff000000000000 * /
     *     /* 0x4eab: i64.eq  * /
     *     /* 0x4eac: select  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4eaf: local.get $local_2 * /
     *     /* 0x4eb1: i64.const 0x0 * /
     *     /* 0x4eb3: i64.ne  * /
     *     /* 0x4eb4: local.get $local_3 * /
     *     /* 0x4eb6: i64.const 0x7fffffffffffffff * /
     *     /* 0x4ec1: i64.and  * /
     *     /* 0x4ec2: local.tee $local_6 * /
     *     /* 0x4ec4: i64.const 0x7fff000000000000 * /
     *     /* 0x4ecf: wasm.op_0x56  * /
     *     /* 0x4ed0: local.get $local_6 * /
     *     /* 0x4ed2: i64.const 0x7fff000000000000 * /
     *     /* 0x4edd: i64.eq  * /
     *     /* 0x4ede: select  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4ee1: local.get $local_0 * /
     *     /* 0x4ee3: local.get $local_2 * /
     *     /* 0x4ee5: i64.or  * /
     *     /* 0x4ee6: local.get $local_5 * /
     *     /* 0x4ee8: local.get $local_6 * /
     *     /* 0x4eea: i64.or  * /
     *     /* 0x4eeb: i64.or  * /
     *     /* 0x4eec: i64.eqz  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4eef: i32.const 0 * /
     *     return r0;
     *     /* 0x4ef2: end  * /
     *     /* 0x4ef3: local.get $local_1 * /
     *     /* 0x4ef5: local.get $local_3 * /
     *     /* 0x4ef7: i64.and  * /
     *     /* 0x4ef8: i64.const 0x0 * /
     *     /* 0x4efa: wasm.op_0x59  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4efd: local.get $local_0 * /
     *     /* 0x4eff: local.get $local_2 * /
     *     /* 0x4f01: wasm.op_0x54  * /
     *     /* 0x4f02: local.get $local_1 * /
     *     /* 0x4f04: local.get $local_3 * /
     *     /* 0x4f06: wasm.op_0x53  * /
     *     /* 0x4f07: local.get $local_1 * /
     *     /* 0x4f09: local.get $local_3 * /
     *     /* 0x4f0b: i64.eq  * /
     *     /* 0x4f0c: select  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4f0f: local.get $local_0 * /
     *     /* 0x4f11: local.get $local_2 * /
     *     /* 0x4f13: i64.xor  * /
     *     /* 0x4f14: local.get $local_1 * /
     *     /* 0x4f16: local.get $local_3 * /
     *     /* 0x4f18: i64.xor  * /
     *     /* 0x4f19: i64.or  * /
     *     /* 0x4f1a: i64.const 0x0 * /
     *     /* 0x4f1c: i64.ne  * /
     *     return r0;
     *     /* 0x4f1e: end  * /
     *     /* 0x4f1f: local.get $local_0 * /
     *     /* 0x4f21: local.get $local_2 * /
     *     /* 0x4f23: wasm.op_0x56  * /
     *     /* 0x4f24: local.get $local_1 * /
     *     /* 0x4f26: local.get $local_3 * /
     *     /* 0x4f28: wasm.op_0x55  * /
     *     /* 0x4f29: local.get $local_1 * /
     *     /* 0x4f2b: local.get $local_3 * /
     *     /* 0x4f2d: i64.eq  * /
     *     /* 0x4f2e: select  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x4f31: local.get $local_0 * /
     *     /* 0x4f33: local.get $local_2 * /
     *     /* 0x4f35: i64.xor  * /
     *     /* 0x4f36: local.get $local_1 * /
     *     /* 0x4f38: local.get $local_3 * /
     *     /* 0x4f3a: i64.xor  * /
     *     /* 0x4f3b: i64.or  * /
     *     /* 0x4f3c: i64.const 0x0 * /
     *     /* 0x4f3e: i64.ne  * /
     *     /* 0x4f3f: local.set $local_4 * /
     *     /* 0x4f41: end  * /
     *     /* 0x4f42: local.get $local_4 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_282(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4e72ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_283 (@ 0x4f46, 67 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_283 ───
     * int64_t wasm_func_283(int64_t arg0, int64_t arg1) {
     *     /* 0x4f47: block 0x40 * /
     *     /* 0x4f49: local.get $local_0 * /
     *     /* 0x4f4b: i32.load offset=4, align=2 * /
     *     /* 0x4f4e: local.tee $local_0 * /
     *     /* 0x4f50: i32.const 9 * /
     *     /* 0x4f52: i32.ge_u  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4f55: i32.const 3737328 * /
     *     /* 0x4f5a: i32.const 0 * /
     *     /* 0x4f5c: i32.store offset=0, align=2 * /
     *     /* 0x4f5f: i32.const 89 * /
     *     /* 0x4f62: local.get $local_0 * /
     *     r0 = imp_i(r0, r1);
     *     /* 0x4f66: i32.const 3737328 * /
     *     /* 0x4f6b: i32.load offset=0, align=2 * /
     *     /* 0x4f6e: i32.const 3737328 * /
     *     /* 0x4f73: i32.const 0 * /
     *     /* 0x4f75: i32.store offset=0, align=2 * /
     *     /* 0x4f78: i32.const 1 * /
     *     /* 0x4f7a: i32.eq  * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x4f7d: end  * /
     *     return r0;
     *     /* 0x4f7f: end  * /
     *     /* 0x4f80: i32.const 0 * /
     *     r0 = imp_k(r0, r1);
     *     r0 = wasm_func_272(r0, r1);
     *     /* 0x4f87: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_283(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4f46ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: wasm_func_284 (@ 0x4f8a, 104 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_284 ───
     * int64_t wasm_func_284(int64_t arg0, int64_t arg1) {
     *     /* 0x4f8b: local.get $local_0 * /
     *     /* 0x4f8d: i32.load8_s offset=47, align=0 * /
     *     /* 0x4f90: i32.const 0 * /
     *     /* 0x4f92: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4f95: local.get $local_0 * /
     *     /* 0x4f97: i32.load offset=44, align=2 * /
     *     /* 0x4f9a: drop  * /
     *     /* 0x4f9b: local.get $local_0 * /
     *     /* 0x4f9d: i32.load offset=36, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4fa3: end  * /
     *     /* 0x4fa4: local.get $local_0 * /
     *     /* 0x4fa6: i32.load8_s offset=35, align=0 * /
     *     /* 0x4fa9: i32.const 0 * /
     *     /* 0x4fab: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4fae: local.get $local_0 * /
     *     /* 0x4fb0: i32.load offset=32, align=2 * /
     *     /* 0x4fb3: drop  * /
     *     /* 0x4fb4: local.get $local_0 * /
     *     /* 0x4fb6: i32.load offset=24, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4fbc: end  * /
     *     /* 0x4fbd: local.get $local_0 * /
     *     /* 0x4fbf: i32.load8_s offset=23, align=0 * /
     *     /* 0x4fc2: i32.const 0 * /
     *     /* 0x4fc4: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4fc7: local.get $local_0 * /
     *     /* 0x4fc9: i32.load offset=20, align=2 * /
     *     /* 0x4fcc: drop  * /
     *     /* 0x4fcd: local.get $local_0 * /
     *     /* 0x4fcf: i32.load offset=12, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4fd5: end  * /
     *     /* 0x4fd6: local.get $local_0 * /
     *     /* 0x4fd8: i32.load8_s offset=11, align=0 * /
     *     /* 0x4fdb: i32.const 0 * /
     *     /* 0x4fdd: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x4fe0: local.get $local_0 * /
     *     /* 0x4fe2: i32.load offset=8, align=2 * /
     *     /* 0x4fe5: drop  * /
     *     /* 0x4fe6: local.get $local_0 * /
     *     /* 0x4fe8: i32.load offset=0, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x4fee: end  * /
     *     /* 0x4fef: local.get $local_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_284(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4f8aULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: wasm_func_285 (@ 0x4ff3, 57 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_285 ───
     * int64_t wasm_func_285(int64_t arg0, int64_t arg1) {
     *     /* 0x4ff6: block 0x40 * /
     *     /* 0x4ff8: local.get $local_0 * /
     *     /* 0x4ffa: i32.load offset=0, align=2 * /
     *     /* 0x4ffd: i32.const 1 * /
     *     /* 0x4fff: i32.shl  * /
     *     /* 0x5000: i32.const -16777217 * /
     *     /* 0x5005: i32.gt_u  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5008: local.get $local_0 * /
     *     /* 0x500a: i32.load offset=4, align=2 * /
     *     /* 0x500d: i32.const 1 * /
     *     /* 0x500f: i32.shl  * /
     *     /* 0x5010: i32.const -16777217 * /
     *     /* 0x5015: i32.gt_u  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5018: local.get $local_0 * /
     *     /* 0x501a: i32.load offset=8, align=2 * /
     *     /* 0x501d: i32.const 1 * /
     *     /* 0x501f: i32.shl  * /
     *     /* 0x5020: i32.const -16777216 * /
     *     /* 0x5025: i32.lt_u  * /
     *     /* 0x5026: local.set $local_1 * /
     *     /* 0x5028: end  * /
     *     /* 0x5029: local.get $local_1 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_285(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4ff3ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_286 (@ 0x502e, 264 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_286 ───
     * int64_t wasm_func_286(int64_t arg0, int64_t arg1) {
     *     /* 0x5031: global.get $global_0 * /
     *     /* 0x5033: i32.const 16 * /
     *     /* 0x5035: i32.sub  * /
     *     /* 0x5036: local.tee $local_4 * /
     *     /* 0x5038: local.tee $local_1 * /
     *     /* 0x503a: global.get $global_4 * /
     *     /* 0x503c: i32.gt_u  * /
     *     /* 0x503d: local.get $local_1 * /
     *     /* 0x503f: global.get $global_5 * /
     *     /* 0x5041: i32.lt_u  * /
     *     /* 0x5042: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5045: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x5049: end  * /
     *     /* 0x504a: local.get $local_1 * /
     *     /* 0x504c: global.set $global_0 * /
     *     /* 0x504e: local.get $local_0 * /
     *     /* 0x5050: i32.load offset=44, align=2 * /
     *     /* 0x5053: local.tee $local_3 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5057: local.get $local_3 * /
     *     /* 0x5059: local.tee $local_1 * /
     *     /* 0x505b: local.get $local_0 * /
     *     /* 0x505d: i32.load offset=48, align=2 * /
     *     /* 0x5060: local.tee $local_2 * /
     *     /* 0x5062: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5065: loop 0x40 * /
     *     /* 0x5067: local.get $local_4 * /
     *     /* 0x5069: local.get $local_2 * /
     *     /* 0x506b: i32.const 12 * /
     *     /* 0x506d: i32.sub  * /
     *     /* 0x506e: i32.store offset=8, align=2 * /
     *     /* 0x5071: local.get $local_4 * /
     *     /* 0x5073: i32.const 8 * /
     *     /* 0x5075: i32.add  * /
     *     r0 = wasm_func_373(r0, r1);
     *     /* 0x5079: local.get $local_3 * /
     *     /* 0x507b: local.get $local_2 * /
     *     /* 0x507d: i32.const 16 * /
     *     /* 0x507f: i32.sub  * /
     *     /* 0x5080: local.tee $local_2 * /
     *     /* 0x5082: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5085: end  * /
     *     /* 0x5086: local.get $local_0 * /
     *     /* 0x5088: i32.load offset=44, align=2 * /
     *     /* 0x508b: local.set $local_1 * /
     *     /* 0x508d: end  * /
     *     /* 0x508e: local.get $local_0 * /
     *     /* 0x5090: local.get $local_3 * /
     *     /* 0x5092: i32.store offset=48, align=2 * /
     *     /* 0x5095: local.get $local_0 * /
     *     /* 0x5097: i32.load offset=52, align=2 * /
     *     /* 0x509a: drop  * /
     *     /* 0x509b: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x50a0: end  * /
     *     /* 0x50a1: local.get $local_4 * /
     *     /* 0x50a3: local.get $local_0 * /
     *     /* 0x50a5: i32.const 28 * /
     *     /* 0x50a7: i32.add  * /
     *     /* 0x50a8: i32.store offset=12, align=2 * /
     *     /* 0x50ab: local.get $local_4 * /
     *     /* 0x50ad: i32.const 12 * /
     *     /* 0x50af: i32.add  * /
     *     r0 = wasm_func_373(r0, r1);
     *     /* 0x50b3: local.get $local_0 * /
     *     /* 0x50b5: i32.load offset=16, align=2 * /
     *     /* 0x50b8: local.tee $local_3 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x50bc: local.get $local_3 * /
     *     /* 0x50be: local.tee $local_1 * /
     *     /* 0x50c0: local.get $local_0 * /
     *     /* 0x50c2: i32.load offset=20, align=2 * /
     *     /* 0x50c5: local.tee $local_2 * /
     *     /* 0x50c7: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x50ca: loop 0x40 * /
     *     /* 0x50cc: local.get $local_2 * /
     *     /* 0x50ce: i32.const 12 * /
     *     /* 0x50d0: i32.sub  * /
     *     /* 0x50d1: local.tee $local_1 * /
     *     /* 0x50d3: i32.load offset=0, align=2 * /
     *     /* 0x50d6: local.tee $local_5 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x50da: local.get $local_2 * /
     *     /* 0x50dc: i32.const 8 * /
     *     /* 0x50de: i32.sub  * /
     *     /* 0x50df: local.get $local_5 * /
     *     /* 0x50e1: i32.store offset=0, align=2 * /
     *     /* 0x50e4: local.get $local_2 * /
     *     /* 0x50e6: i32.const 4 * /
     *     /* 0x50e8: i32.sub  * /
     *     /* 0x50e9: i32.load offset=0, align=2 * /
     *     /* 0x50ec: drop  * /
     *     /* 0x50ed: local.get $local_5 * /
     *     r0 = _d(r0, r1);
     *     /* 0x50f2: end  * /
     *     /* 0x50f3: local.get $local_1 * /
     *     /* 0x50f5: local.tee $local_2 * /
     *     /* 0x50f7: local.get $local_3 * /
     *     /* 0x50f9: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x50fc: end  * /
     *     /* 0x50fd: local.get $local_0 * /
     *     /* 0x50ff: i32.load offset=16, align=2 * /
     *     /* 0x5102: local.set $local_1 * /
     *     /* 0x5104: end  * /
     *     /* 0x5105: local.get $local_0 * /
     *     /* 0x5107: local.get $local_3 * /
     *     /* 0x5109: i32.store offset=20, align=2 * /
     *     /* 0x510c: local.get $local_0 * /
     *     /* 0x510e: i32.load offset=24, align=2 * /
     *     /* 0x5111: drop  * /
     *     /* 0x5112: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5117: end  * /
     *     /* 0x5118: local.get $local_4 * /
     *     /* 0x511a: i32.const 16 * /
     *     /* 0x511c: i32.add  * /
     *     /* 0x511d: local.tee $local_1 * /
     *     /* 0x511f: global.get $global_4 * /
     *     /* 0x5121: i32.gt_u  * /
     *     /* 0x5122: local.get $local_1 * /
     *     /* 0x5124: global.get $global_5 * /
     *     /* 0x5126: i32.lt_u  * /
     *     /* 0x5127: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x512a: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x512e: end  * /
     *     /* 0x512f: local.get $local_1 * /
     *     /* 0x5131: global.set $global_0 * /
     *     /* 0x5133: local.get $local_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_286(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x502eULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: wasm_func_287 (@ 0x5138, 661 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_287 ───
     * int64_t wasm_func_287(int64_t arg0, int64_t arg1) {
     *     /* 0x513b: local.get $local_0 * /
     *     /* 0x513d: i32.load8_s offset=707, align=0 * /
     *     /* 0x5141: i32.const 0 * /
     *     /* 0x5143: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5146: local.get $local_0 * /
     *     /* 0x5148: i32.load offset=704, align=2 * /
     *     /* 0x514c: drop  * /
     *     /* 0x514d: local.get $local_0 * /
     *     /* 0x514f: i32.load offset=696, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5156: end  * /
     *     /* 0x5157: local.get $local_0 * /
     *     /* 0x5159: i32.load offset=680, align=2 * /
     *     /* 0x515d: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5161: local.get $local_1 * /
     *     /* 0x5163: local.set $local_2 * /
     *     /* 0x5165: local.get $local_0 * /
     *     /* 0x5167: i32.load offset=684, align=2 * /
     *     /* 0x516b: local.tee $local_3 * /
     *     /* 0x516d: local.get $local_1 * /
     *     /* 0x516f: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5172: loop 0x40 * /
     *     /* 0x5174: local.get $local_3 * /
     *     /* 0x5176: i32.const 40 * /
     *     /* 0x5178: i32.sub  * /
     *     /* 0x5179: i32.load offset=0, align=2 * /
     *     /* 0x517c: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5180: local.get $local_3 * /
     *     /* 0x5182: i32.const 36 * /
     *     /* 0x5184: i32.sub  * /
     *     /* 0x5185: local.get $local_2 * /
     *     /* 0x5187: i32.store offset=0, align=2 * /
     *     /* 0x518a: local.get $local_3 * /
     *     /* 0x518c: i32.const 32 * /
     *     /* 0x518e: i32.sub  * /
     *     /* 0x518f: i32.load offset=0, align=2 * /
     *     /* 0x5192: drop  * /
     *     /* 0x5193: local.get $local_2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5198: end  * /
     *     /* 0x5199: local.get $local_1 * /
     *     /* 0x519b: local.get $local_3 * /
     *     /* 0x519d: i32.const 44 * /
     *     /* 0x519f: i32.sub  * /
     *     /* 0x51a0: local.tee $local_3 * /
     *     /* 0x51a2: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x51a5: end  * /
     *     /* 0x51a6: local.get $local_0 * /
     *     /* 0x51a8: i32.load offset=680, align=2 * /
     *     /* 0x51ac: local.set $local_2 * /
     *     /* 0x51ae: end  * /
     *     /* 0x51af: local.get $local_0 * /
     *     /* 0x51b1: local.get $local_1 * /
     *     /* 0x51b3: i32.store offset=684, align=2 * /
     *     /* 0x51b7: local.get $local_0 * /
     *     /* 0x51b9: i32.load offset=688, align=2 * /
     *     /* 0x51bd: drop  * /
     *     /* 0x51be: local.get $local_2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x51c3: end  * /
     *     /* 0x51c4: block 0x40 * /
     *     /* 0x51c6: local.get $local_0 * /
     *     /* 0x51c8: i32.load offset=676, align=2 * /
     *     /* 0x51cc: local.tee $local_1 * /
     *     /* 0x51ce: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x51d1: local.get $local_1 * /
     *     /* 0x51d3: local.get $local_1 * /
     *     /* 0x51d5: i32.load offset=4, align=2 * /
     *     /* 0x51d8: local.tee $local_2 * /
     *     /* 0x51da: i32.const 1 * /
     *     /* 0x51dc: i32.sub  * /
     *     /* 0x51dd: i32.store offset=4, align=2 * /
     *     /* 0x51e0: local.get $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x51e4: local.get $local_1 * /
     *     /* 0x51e6: local.get $local_1 * /
     *     /* 0x51e8: i32.load offset=0, align=2 * /
     *     /* 0x51eb: i32.load offset=8, align=2 * /
     *     /* 0x51ee: wasm.op_0x11  * /
     *     /* 0x51ef: unreachable  * /
     *     /* 0x51f0: unreachable  * /
     *     /* 0x51f1: block 0x40 * /
     *     /* 0x51f3: local.get $local_1 * /
     *     /* 0x51f5: i32.load offset=8, align=2 * /
     *     /* 0x51f8: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x51fc: local.get $local_1 * /
     *     /* 0x51fe: local.get $local_2 * /
     *     /* 0x5200: i32.const 1 * /
     *     /* 0x5202: i32.sub  * /
     *     /* 0x5203: i32.store offset=8, align=2 * /
     *     /* 0x5206: local.get $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x520a: end  * /
     *     /* 0x520b: local.get $local_1 * /
     *     /* 0x520d: local.get $local_1 * /
     *     /* 0x520f: i32.load offset=0, align=2 * /
     *     /* 0x5212: i32.load offset=16, align=2 * /
     *     /* 0x5215: wasm.op_0x11  * /
     *     /* 0x5216: unreachable  * /
     *     /* 0x5217: unreachable  * /
     *     /* 0x5218: end  * /
     *     /* 0x5219: end  * /
     *     /* 0x521a: block 0x40 * /
     *     /* 0x521c: local.get $local_0 * /
     *     /* 0x521e: i32.load8_u offset=668, align=0 * /
     *     /* 0x5222: i32.const 1 * /
     *     /* 0x5224: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5227: local.get $local_0 * /
     *     /* 0x5229: i32.load offset=656, align=2 * /
     *     /* 0x522d: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5231: local.get $local_0 * /
     *     /* 0x5233: local.get $local_1 * /
     *     /* 0x5235: i32.store offset=660, align=2 * /
     *     /* 0x5239: local.get $local_0 * /
     *     /* 0x523b: i32.load offset=664, align=2 * /
     *     /* 0x523f: drop  * /
     *     /* 0x5240: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5245: end  * /
     *     /* 0x5246: local.get $local_0 * /
     *     /* 0x5248: i32.load8_s offset=579, align=0 * /
     *     /* 0x524c: i32.const 0 * /
     *     /* 0x524e: i32.ge_s  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5251: local.get $local_0 * /
     *     /* 0x5253: i32.load offset=576, align=2 * /
     *     /* 0x5257: drop  * /
     *     /* 0x5258: local.get $local_0 * /
     *     /* 0x525a: i32.load offset=568, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5261: end  * /
     *     /* 0x5262: block 0x40 * /
     *     /* 0x5264: local.get $local_0 * /
     *     /* 0x5266: i32.load offset=564, align=2 * /
     *     /* 0x526a: local.tee $local_1 * /
     *     /* 0x526c: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x526f: local.get $local_1 * /
     *     /* 0x5271: local.get $local_1 * /
     *     /* 0x5273: i32.load offset=4, align=2 * /
     *     /* 0x5276: local.tee $local_2 * /
     *     /* 0x5278: i32.const 1 * /
     *     /* 0x527a: i32.sub  * /
     *     /* 0x527b: i32.store offset=4, align=2 * /
     *     /* 0x527e: local.get $local_2 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5282: local.get $local_1 * /
     *     /* 0x5284: local.get $local_1 * /
     *     /* 0x5286: i32.load offset=0, align=2 * /
     *     /* 0x5289: i32.load offset=8, align=2 * /
     *     /* 0x528c: wasm.op_0x11  * /
     *     /* 0x528d: unreachable  * /
     *     /* 0x528e: unreachable  * /
     *     /* 0x528f: block 0x40 * /
     *     /* 0x5291: local.get $local_1 * /
     *     /* 0x5293: i32.load offset=8, align=2 * /
     *     /* 0x5296: local.tee $local_2 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x529a: local.get $local_1 * /
     *     /* 0x529c: local.get $local_2 * /
     *     /* 0x529e: i32.const 1 * /
     *     /* 0x52a0: i32.sub  * /
     *     /* 0x52a1: i32.store offset=8, align=2 * /
     *     /* 0x52a4: local.get $local_2 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x52a8: end  * /
     *     /* 0x52a9: local.get $local_1 * /
     *     /* 0x52ab: local.get $local_1 * /
     *     /* 0x52ad: i32.load offset=0, align=2 * /
     *     /* 0x52b0: i32.load offset=16, align=2 * /
     *     /* 0x52b3: wasm.op_0x11  * /
     *     /* 0x52b4: unreachable  * /
     *     /* 0x52b5: unreachable  * /
     *     /* 0x52b6: end  * /
     *     /* 0x52b7: end  * /
     *     /* 0x52b8: block 0x40 * /
     *     /* 0x52ba: local.get $local_0 * /
     *     /* 0x52bc: i32.load8_u offset=556, align=0 * /
     *     /* 0x52c0: i32.const 1 * /
     *     /* 0x52c2: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x52c5: local.get $local_0 * /
     *     /* 0x52c7: i32.load offset=544, align=2 * /
     *     /* 0x52cb: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x52cf: local.get $local_0 * /
     *     /* 0x52d1: local.get $local_1 * /
     *     /* 0x52d3: i32.store offset=548, align=2 * /
     *     /* 0x52d7: local.get $local_0 * /
     *     /* 0x52d9: i32.load offset=552, align=2 * /
     *     /* 0x52dd: drop  * /
     *     /* 0x52de: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x52e3: end  * /
     *     /* 0x52e4: local.get $local_0 * /
     *     /* 0x52e6: i32.load8_s offset=459, align=0 * /
     *     /* 0x52ea: i32.const 0 * /
     *     /* 0x52ec: i32.ge_s  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x52ef: local.get $local_0 * /
     *     /* 0x52f1: i32.load offset=456, align=2 * /
     *     /* 0x52f5: drop  * /
     *     /* 0x52f6: local.get $local_0 * /
     *     /* 0x52f8: i32.load offset=448, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x52ff: end  * /
     *     /* 0x5300: local.get $local_0 * /
     *     /* 0x5302: i32.load offset=408, align=2 * /
     *     /* 0x5306: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x530a: local.get $local_0 * /
     *     /* 0x530c: local.get $local_1 * /
     *     /* 0x530e: i32.store offset=412, align=2 * /
     *     /* 0x5312: local.get $local_0 * /
     *     /* 0x5314: i32.load offset=416, align=2 * /
     *     /* 0x5318: drop  * /
     *     /* 0x5319: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x531e: end  * /
     *     /* 0x531f: local.get $local_0 * /
     *     /* 0x5321: i32.load offset=368, align=2 * /
     *     /* 0x5325: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5329: local.get $local_0 * /
     *     /* 0x532b: local.get $local_1 * /
     *     /* 0x532d: i32.store offset=372, align=2 * /
     *     /* 0x5331: local.get $local_0 * /
     *     /* 0x5333: i32.load offset=376, align=2 * /
     *     /* 0x5337: drop  * /
     *     /* 0x5338: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x533d: end  * /
     *     /* 0x533e: local.get $local_0 * /
     *     /* 0x5340: i32.load offset=156, align=2 * /
     *     /* 0x5344: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5348: local.get $local_0 * /
     *     /* 0x534a: local.get $local_1 * /
     *     /* 0x534c: i32.store offset=160, align=2 * /
     *     /* 0x5350: local.get $local_0 * /
     *     /* 0x5352: i32.load offset=164, align=2 * /
     *     /* 0x5356: drop  * /
     *     /* 0x5357: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x535c: end  * /
     *     /* 0x535d: local.get $local_0 * /
     *     /* 0x535f: i32.load offset=116, align=2 * /
     *     /* 0x5362: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5366: local.get $local_0 * /
     *     /* 0x5368: local.get $local_1 * /
     *     /* 0x536a: i32.store offset=120, align=2 * /
     *     /* 0x536d: local.get $local_0 * /
     *     /* 0x536f: i32.load offset=124, align=2 * /
     *     /* 0x5372: drop  * /
     *     /* 0x5373: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5378: end  * /
     *     /* 0x5379: local.get $local_0 * /
     *     /* 0x537b: i32.load8_s offset=115, align=0 * /
     *     /* 0x537e: i32.const 0 * /
     *     /* 0x5380: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5383: local.get $local_0 * /
     *     /* 0x5385: i32.load offset=112, align=2 * /
     *     /* 0x5388: drop  * /
     *     /* 0x5389: local.get $local_0 * /
     *     /* 0x538b: i32.load offset=104, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5391: end  * /
     *     /* 0x5392: local.get $local_0 * /
     *     /* 0x5394: i32.load offset=12, align=2 * /
     *     /* 0x5397: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x539b: local.get $local_0 * /
     *     /* 0x539d: local.get $local_1 * /
     *     /* 0x539f: i32.store offset=16, align=2 * /
     *     /* 0x53a2: local.get $local_0 * /
     *     /* 0x53a4: i32.load offset=20, align=2 * /
     *     /* 0x53a7: drop  * /
     *     /* 0x53a8: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x53ad: end  * /
     *     /* 0x53ae: local.get $local_0 * /
     *     /* 0x53b0: i32.load offset=0, align=2 * /
     *     /* 0x53b3: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x53b7: local.get $local_0 * /
     *     /* 0x53b9: local.get $local_1 * /
     *     /* 0x53bb: i32.store offset=4, align=2 * /
     *     /* 0x53be: local.get $local_0 * /
     *     /* 0x53c0: i32.load offset=8, align=2 * /
     *     /* 0x53c3: drop  * /
     *     /* 0x53c4: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x53c9: end  * /
     *     /* 0x53ca: local.get $local_0 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_287(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x5138ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xeULL;
}

/*
* Reconstructed Procedure: wasm_func_288 (@ 0x53ce, 45 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_288 ───
     * int64_t wasm_func_288(int64_t arg0, int64_t arg1) {
     *     /* 0x53cf: i32.const 3737328 * /
     *     /* 0x53d4: i32.const 0 * /
     *     /* 0x53d6: i32.store offset=0, align=2 * /
     *     /* 0x53d9: i32.const 3737328 * /
     *     /* 0x53de: i32.load offset=0, align=2 * /
     *     /* 0x53e1: i32.const 3737328 * /
     *     /* 0x53e6: i32.const 0 * /
     *     /* 0x53e8: i32.store offset=0, align=2 * /
     *     /* 0x53eb: i32.const 1 * /
     *     /* 0x53ed: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     return r0;
     *     /* 0x53f1: end  * /
     *     /* 0x53f2: i32.const 0 * /
     *     r0 = imp_k(r0, r1);
     *     r0 = wasm_func_272(r0, r1);
     *     /* 0x53f9: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_288(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x53ceULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_289 (@ 0x53fc, 89 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_289 ───
     * int64_t wasm_func_289(int64_t arg0, int64_t arg1) {
     *     /* 0x53ff: block 0x40 * /
     *     /* 0x5401: local.get $local_0 * /
     *     /* 0x5403: i32.load offset=4, align=2 * /
     *     /* 0x5406: local.tee $local_0 * /
     *     /* 0x5408: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x540b: local.get $local_0 * /
     *     /* 0x540d: local.get $local_0 * /
     *     /* 0x540f: i32.load offset=4, align=2 * /
     *     /* 0x5412: local.tee $local_1 * /
     *     /* 0x5414: i32.const 1 * /
     *     /* 0x5416: i32.sub  * /
     *     /* 0x5417: i32.store offset=4, align=2 * /
     *     /* 0x541a: local.get $local_1 * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x541e: local.get $local_0 * /
     *     /* 0x5420: local.get $local_0 * /
     *     /* 0x5422: i32.load offset=0, align=2 * /
     *     /* 0x5425: i32.load offset=8, align=2 * /
     *     /* 0x5428: wasm.op_0x11  * /
     *     /* 0x5429: unreachable  * /
     *     /* 0x542a: unreachable  * /
     *     /* 0x542b: block 0x40 * /
     *     /* 0x542d: local.get $local_0 * /
     *     /* 0x542f: i32.load offset=8, align=2 * /
     *     /* 0x5432: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5436: local.get $local_0 * /
     *     /* 0x5438: local.get $local_1 * /
     *     /* 0x543a: i32.const 1 * /
     *     /* 0x543c: i32.sub  * /
     *     /* 0x543d: i32.store offset=8, align=2 * /
     *     /* 0x5440: local.get $local_1 * /
     *     if (r0 != 0) { goto 1; }
     *     /* 0x5444: end  * /
     *     /* 0x5445: local.get $local_0 * /
     *     /* 0x5447: local.get $local_0 * /
     *     /* 0x5449: i32.load offset=0, align=2 * /
     *     /* 0x544c: i32.load offset=16, align=2 * /
     *     /* 0x544f: wasm.op_0x11  * /
     *     /* 0x5450: unreachable  * /
     *     /* 0x5451: unreachable  * /
     *     /* 0x5452: end  * /
     *     /* 0x5453: end  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_289(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x53fcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: wasm_func_290 (@ 0x5456, 80 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_290 ───
     * int64_t wasm_func_290(int64_t arg0, int64_t arg1) {
     *     /* 0x5459: block 0x40 * /
     *     /* 0x545b: local.get $local_0 * /
     *     /* 0x545d: i32.load8_u offset=284, align=0 * /
     *     /* 0x5461: i32.const 1 * /
     *     /* 0x5463: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5466: local.get $local_0 * /
     *     /* 0x5468: i32.load offset=224, align=2 * /
     *     /* 0x546c: local.tee $local_1 * /
     *     /* 0x546e: i32.eqz  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5471: local.get $local_0 * /
     *     /* 0x5473: local.get $local_1 * /
     *     /* 0x5475: i32.store offset=228, align=2 * /
     *     /* 0x5479: local.get $local_0 * /
     *     /* 0x547b: i32.load offset=232, align=2 * /
     *     /* 0x547f: drop  * /
     *     /* 0x5480: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5485: end  * /
     *     /* 0x5486: local.get $local_0 * /
     *     /* 0x5488: i32.load offset=208, align=2 * /
     *     /* 0x548c: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5490: local.get $local_0 * /
     *     /* 0x5492: local.get $local_1 * /
     *     /* 0x5494: i32.store offset=212, align=2 * /
     *     /* 0x5498: local.get $local_0 * /
     *     /* 0x549a: i32.load offset=216, align=2 * /
     *     /* 0x549e: drop  * /
     *     /* 0x549f: local.get $local_1 * /
     *     r0 = _d(r0, r1);
     *     /* 0x54a4: end  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_290(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x5456ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: wasm_func_291 (@ 0x54a8, 381 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_291 ───
     * int64_t wasm_func_291(int64_t arg0, int64_t arg1) {
     *     /* 0x54ab: global.get $global_0 * /
     *     /* 0x54ad: i32.const 16 * /
     *     /* 0x54af: i32.sub  * /
     *     /* 0x54b0: local.tee $local_4 * /
     *     /* 0x54b2: local.tee $local_1 * /
     *     /* 0x54b4: global.get $global_4 * /
     *     /* 0x54b6: i32.gt_u  * /
     *     /* 0x54b7: local.get $local_1 * /
     *     /* 0x54b9: global.get $global_5 * /
     *     /* 0x54bb: i32.lt_u  * /
     *     /* 0x54bc: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x54bf: local.get $local_1 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x54c3: end  * /
     *     /* 0x54c4: local.get $local_1 * /
     *     /* 0x54c6: global.set $global_0 * /
     *     /* 0x54c8: local.get $local_0 * /
     *     /* 0x54ca: i32.load8_u offset=392, align=0 * /
     *     /* 0x54ce: i32.const 1 * /
     *     /* 0x54d0: i32.eq  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x54d3: local.get $local_0 * /
     *     /* 0x54d5: i32.const 88 * /
     *     /* 0x54d8: i32.add  * /
     *     r0 = wasm_func_377(r0, r1);
     *     /* 0x54dc: end  * /
     *     /* 0x54dd: local.get $local_0 * /
     *     /* 0x54df: i32.load offset=76, align=2 * /
     *     /* 0x54e2: local.set $local_1 * /
     *     /* 0x54e4: i32.const 3737328 * /
     *     /* 0x54e9: i32.const 0 * /
     *     /* 0x54eb: i32.store offset=0, align=2 * /
     *     /* 0x54ee: local.get $local_4 * /
     *     /* 0x54f0: local.get $local_0 * /
     *     /* 0x54f2: i32.const 72 * /
     *     /* 0x54f5: i32.add  * /
     *     /* 0x54f6: i32.store offset=12, align=2 * /
     *     /* 0x54f9: i32.const 176 * /
     *     /* 0x54fc: local.get $local_4 * /
     *     /* 0x54fe: i32.const 12 * /
     *     /* 0x5500: i32.add  * /
     *     /* 0x5501: local.get $local_1 * /
     *     r0 = imp_e(r0, r1);
     *     /* 0x5505: i32.const 3737328 * /
     *     /* 0x550a: i32.load offset=0, align=2 * /
     *     /* 0x550d: i32.const 3737328 * /
     *     /* 0x5512: i32.const 0 * /
     *     /* 0x5514: i32.store offset=0, align=2 * /
     *     /* 0x5517: i32.const 1 * /
     *     /* 0x5519: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x551c: local.get $local_0 * /
     *     /* 0x551e: i32.load offset=60, align=2 * /
     *     /* 0x5521: local.tee $local_1 * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5525: local.get $local_1 * /
     *     /* 0x5527: local.set $local_2 * /
     *     /* 0x5529: local.get $local_0 * /
     *     /* 0x552b: i32.load offset=64, align=2 * /
     *     /* 0x552e: local.tee $local_3 * /
     *     /* 0x5530: local.get $local_1 * /
     *     /* 0x5532: i32.ne  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5535: loop 0x40 * /
     *     /* 0x5537: local.get $local_3 * /
     *     /* 0x5539: i32.const 12 * /
     *     /* 0x553b: i32.sub  * /
     *     /* 0x553c: local.set $local_2 * /
     *     /* 0x553e: local.get $local_3 * /
     *     /* 0x5540: i32.const 1 * /
     *     /* 0x5542: i32.sub  * /
     *     /* 0x5543: i32.load8_s offset=0, align=0 * /
     *     /* 0x5546: i32.const 0 * /
     *     /* 0x5548: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x554b: local.get $local_3 * /
     *     /* 0x554d: i32.const 4 * /
     *     /* 0x554f: i32.sub  * /
     *     /* 0x5550: i32.load offset=0, align=2 * /
     *     /* 0x5553: drop  * /
     *     /* 0x5554: local.get $local_2 * /
     *     /* 0x5556: i32.load offset=0, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x555c: end  * /
     *     /* 0x555d: local.get $local_2 * /
     *     /* 0x555f: local.tee $local_3 * /
     *     /* 0x5561: local.get $local_1 * /
     *     /* 0x5563: i32.ne  * /
     *     if (r0 != 0) { goto 0; }
     *     /* 0x5566: end  * /
     *     /* 0x5567: local.get $local_0 * /
     *     /* 0x5569: i32.load offset=60, align=2 * /
     *     /* 0x556c: local.set $local_2 * /
     *     /* 0x556e: end  * /
     *     /* 0x556f: local.get $local_0 * /
     *     /* 0x5571: local.get $local_1 * /
     *     /* 0x5573: i32.store offset=64, align=2 * /
     *     /* 0x5576: local.get $local_0 * /
     *     /* 0x5578: i32.load offset=68, align=2 * /
     *     /* 0x557b: drop  * /
     *     /* 0x557c: local.get $local_2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x5581: end  * /
     *     /* 0x5582: local.get $local_0 * /
     *     /* 0x5584: i32.load8_s offset=59, align=0 * /
     *     /* 0x5587: i32.const 0 * /
     *     /* 0x5589: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x558c: local.get $local_0 * /
     *     /* 0x558e: i32.load offset=56, align=2 * /
     *     /* 0x5591: drop  * /
     *     /* 0x5592: local.get $local_0 * /
     *     /* 0x5594: i32.load offset=48, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x559a: end  * /
     *     /* 0x559b: local.get $local_0 * /
     *     /* 0x559d: i32.load8_s offset=47, align=0 * /
     *     /* 0x55a0: i32.const 0 * /
     *     /* 0x55a2: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x55a5: local.get $local_0 * /
     *     /* 0x55a7: i32.load offset=44, align=2 * /
     *     /* 0x55aa: drop  * /
     *     /* 0x55ab: local.get $local_0 * /
     *     /* 0x55ad: i32.load offset=36, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x55b3: end  * /
     *     /* 0x55b4: local.get $local_0 * /
     *     /* 0x55b6: i32.load8_s offset=35, align=0 * /
     *     /* 0x55b9: i32.const 0 * /
     *     /* 0x55bb: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x55be: local.get $local_0 * /
     *     /* 0x55c0: i32.load offset=32, align=2 * /
     *     /* 0x55c3: drop  * /
     *     /* 0x55c4: local.get $local_0 * /
     *     /* 0x55c6: i32.load offset=24, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x55cc: end  * /
     *     /* 0x55cd: local.get $local_0 * /
     *     /* 0x55cf: i32.load8_s offset=23, align=0 * /
     *     /* 0x55d2: i32.const 0 * /
     *     /* 0x55d4: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x55d7: local.get $local_0 * /
     *     /* 0x55d9: i32.load offset=20, align=2 * /
     *     /* 0x55dc: drop  * /
     *     /* 0x55dd: local.get $local_0 * /
     *     /* 0x55df: i32.load offset=12, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x55e5: end  * /
     *     /* 0x55e6: local.get $local_0 * /
     *     /* 0x55e8: i32.load8_s offset=11, align=0 * /
     *     /* 0x55eb: i32.const 0 * /
     *     /* 0x55ed: i32.lt_s  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x55f0: local.get $local_0 * /
     *     /* 0x55f2: i32.load offset=8, align=2 * /
     *     /* 0x55f5: drop  * /
     *     /* 0x55f6: local.get $local_0 * /
     *     /* 0x55f8: i32.load offset=0, align=2 * /
     *     r0 = _d(r0, r1);
     *     /* 0x55fe: end  * /
     *     /* 0x55ff: local.get $local_4 * /
     *     /* 0x5601: i32.const 16 * /
     *     /* 0x5603: i32.add  * /
     *     /* 0x5604: local.tee $local_0 * /
     *     /* 0x5606: global.get $global_4 * /
     *     /* 0x5608: i32.gt_u  * /
     *     /* 0x5609: local.get $local_0 * /
     *     /* 0x560b: global.get $global_5 * /
     *     /* 0x560d: i32.lt_u  * /
     *     /* 0x560e: i32.or  * /
     *     if (r0 != 0) { goto 0x40; }
     *     /* 0x5611: local.get $local_0 * /
     *     r0 = imp_d(r0, r1);
     *     /* 0x5615: end  * /
     *     /* 0x5616: local.get $local_0 * /
     *     /* 0x5618: global.set $global_0 * /
     *     return r0;
     *     /* 0x561b: end  * /
     *     /* 0x561c: i32.const 0 * /
     *     r0 = imp_k(r0, r1);
     *     r0 = wasm_func_272(r0, r1);
     *     /* 0x5623: unreachable  * /
     *     return r0;
     * }
*/
u64 re_wasm_func_291(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x54a8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0xdULL;
}

/*
* Reconstructed Procedure: wasm_func_292 (@ 0x5627, 636 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // wasm_func_292 ───
     * int64_t wasm_func_292(int64_t arg0, int64_t arg1) {
     *     /* 0x562a: local.get $local_1 * /
     *     /* 0x562c: wasm.op_0x2a  * /
     *     /* 0x562d: block 0x30 * /
     *     /* 0x562f: local.set $local_9 * /
     *     /* 0x5631: local.get $local_1 * /
     *     /* 0x5633: wasm.op_0x2a  * /
     *     /* 0x5634: block 0x20 * /
     *     /* 0x5636: local.set $local_10 * /
     *     /* 0x5638: local.get $local_1 * /
     *     /* 0x563a: wasm.op_0x2a  * /
     *     /* 0x563b: block 0x00 * /
     *     /* 0x563d: local.set $local_11 * /
     *     /* 0x563f: local.get $local_1 * /
     *     /* 0x5641: wasm.op_0x2a  * /
     *     /* 0x5642: block 0x10 * /
     *     /* 0x5644: local.set $local_12 * /
     *     /* 0x5646: local.get $local_1 * /
     *     /* 0x5648: wasm.op_0x2a  * /
     *     /* 0x5649: block 0x34 * /
     *     /* 0x564b: local.set $local_13 * /
     *     /* 0x564d: local.get $local_1 * /
     *     /* 0x564f: wasm.op_0x2a  * /
     *     /* 0x5650: block 0x24 * /
     *     /* 0x5652: local.set $local_14 * /
     *     /* 0x5654: local.get $local_1 * /
     *     /* 0x5656: wasm.op_0x2a  * /
     *     /* 0x5657: block 0x04 * /
     *     /* 0x5659: local.set $local_15 * /
     *     /* 0x565b: local.get $local_1 * /
     *     /* 0x565d: wasm.op_0x2a  * /
     *     /* 0x565e: block 0x14 * /
     *     /* 0x5660: local.set $local_16 * /
     *     /* 0x5662: local.get $local_1 * /
     *     /* 0x5664: wasm.op_0x2a  * /
     *     /* 0x5665: block 0x38 * /
     *     /* 0x5667: local.set $local_17 * /
     *     /* 0x5669: local.get $local_1 * /
     *     /* 0x566b: wasm.op_0x2a  * /
     *     /* 0x566c: block 0x28 * /
     *     /* 0x566e: local.set $local_18 * /
     *     /* 0x5670: local.get $local_1 * /
     *     /* 0x5672: wasm.op_0x2a  * /
     *     /* 0x5673: block 0x08 * /
     *     /* 0x5675: local.set $local_19 * /
     *     /* 0x5677: local.get $local_1 * /
     *     /* 0x5679: wasm.op_0x2a  * /
     *     /* 0x567a: block 0x18 * /
     *     /* 0x567c: local.set $local_20 * /
     *     /* 0x567e: local.get $local_0 * /
     *     /* 0x5680: local.get $local_2 * /
     *     /* 0x5682: wasm.op_0x2a  * /
     *     /* 0x5683: block 0x00 * /
     *     /* 0x5685: local.tee $local_3 * /
     *     /* 0x5687: local.get $local_1 * /
     *     /* 0x5689: wasm.op_0x2a  * /
     *     /* 0x568a: block 0x0c * /
     *     /* 0x568c: local.tee $local_7 * /
     *     /* 0x568e: wasm.op_0x94  * /
     *     /* 0x568f: local.get $local_2 * /
     *     /* 0x5691: wasm.op_0x2a  * /
     *     /* 0x5692: block 0x04 * /
     *     /* 0x5694: local.tee $local_4 * /
     *     /* 0x5696: local.get $local_1 * /
     *     /* 0x5698: wasm.op_0x2a  * /
     *     /* 0x5699: block 0x1c * /
     *     /* 0x569b: local.tee $local_8 * /
     *     /* 0x569d: wasm.op_0x94  * /
     *     /* 0x569e: wasm.op_0x92  * /
     *     /* 0x569f: local.get $local_2 * /
     *     /* 0x56a1: wasm.op_0x2a  * /
     *     /* 0x56a2: block 0x08 * /
     *     /* 0x56a4: local.tee $local_5 * /
     *     /* 0x56a6: local.get $local_1 * /
     *     /* 0x56a8: wasm.op_0x2a  * /
     *     /* 0x56a9: block 0x2c * /
     *     /* 0x56ab: local.tee $local_21 * /
     *     /* 0x56ad: wasm.op_0x94  * /
     *     /* 0x56ae: wasm.op_0x92  * /
     *     /* 0x56af: local.get $local_2 * /
     *     /* 0x56b1: wasm.op_0x2a  * /
     *     /* 0x56b2: block 0x0c * /
     *     /* 0x56b4: local.tee $local_6 * /
     *     /* 0x56b6: local.get $local_1 * /
     *     /* 0x56b8: wasm.op_0x2a  * /
     *     /* 0x56b9: block 0x3c * /
     *     /* 0x56bb: local.tee $local_22 * /
     *     /* 0x56bd: wasm.op_0x94  * /
     *     /* 0x56be: wasm.op_0x92  * /
     *     /* 0x56bf: wasm.op_0x38  * /
     *     /* 0x56c0: block 0x0c * /
     *     /* 0x56c2: local.get $local_0 * /
     *     /* 0x56c4: local.get $local_3 * /
     *     /* 0x56c6: local.get $local_19 * /
     *     /* 0x56c8: wasm.op_0x94  * /
     *     /* 0x56c9: local.get $local_4 * /
     *     /* 0x56cb: local.get $local_20 * /
     *     /* 0x56cd: wasm.op_0x94  * /
     *     /* 0x56ce: wasm.op_0x92  * /
     *     /* 0x56cf: local.get $local_5 * /
     *     /* 0x56d1: local.get $local_18 * /
     *     /* 0x56d3: wasm.op_0x94  * /
     *     /* 0x56d4: wasm.op_0x92  * /
     *     /* 0x56d5: local.get $local_6 * /
     *     /* 0x56d7: local.get $local_17 * /
     *     /* 0x56d9: wasm.op_0x94  * /
     *     /* 0x56da: wasm.op_0x92  * /
     *     /* 0x56db: wasm.op_0x38  * /
     *     /* 0x56dc: block 0x08 * /
     *     /* 0x56de: local.get $local_0 * /
     *     /* 0x56e0: local.get $local_3 * /
     *     /* 0x56e2: local.get $local_15 * /
     *     /* 0x56e4: wasm.op_0x94  * /
     *     /* 0x56e5: local.get $local_4 * /
     *     /* 0x56e7: local.get $local_16 * /
     *     /* 0x56e9: wasm.op_0x94  * /
     *     /* 0x56ea: wasm.op_0x92  * /
     *     /* 0x56eb: local.get $local_5 * /
     *     /* 0x56ed: local.get $local_14 * /
     *     /* 0x56ef: wasm.op_0x94  * /
     *     /* 0x56f0: wasm.op_0x92  * /
     *     /* 0x56f1: local.get $local_6 * /
     *     /* 0x56f3: local.get $local_13 * /
     *     /* 0x56f5: wasm.op_0x94  * /
     *     /* 0x56f6: wasm.op_0x92  * /
     *     /* 0x56f7: wasm.op_0x38  * /
     *     /* 0x56f8: block 0x04 * /
     *     /* 0x56fa: local.get $local_0 * /
     *     /* 0x56fc: local.get $local_3 * /
     *     /* 0x56fe: local.get $local_11 * /
     *     /* 0x5700: wasm.op_0x94  * /
     *     /* 0x5701: local.get $local_4 * /
     *     /* 0x5703: local.get $local_12 * /
     *     /* 0x5705: wasm.op_0x94  * /
     *     /* 0x5706: wasm.op_0x92  * /
     *     /* 0x5707: local.get $local_5 * /
     *     /* 0x5709: local.get $local_10 * /
     *     /* 0x570b: wasm.op_0x94  * /
     *     /* 0x570c: wasm.op_0x92  * /
     *     /* 0x570d: local.get $local_6 * /
     *     /* 0x570f: local.get $local_9 * /
     *     /* 0x5711: wasm.op_0x94  * /
     *     /* 0x5712: wasm.op_0x92  * /
     *     /* 0x5713: wasm.op_0x38  * /
     *     /* 0x5714: block 0x00 * /
     *     /* 0x5716: local.get $local_0 * /
     *     /* 0x5718: local.get $local_7 * /
     *     /* 0x571a: local.get $local_2 * /
     *     /* 0x571c: wasm.op_0x2a  * /
     *     /* 0x571d: block 0x10 * /
     *     /* 0x571f: local.tee $local_3 * /
     *     /* 0x5721: wasm.op_0x94  * /
     *     /* 0x5722: local.get $local_8 * /
     *     /* 0x5724: local.get $local_2 * /
     *     /* 0x5726: wasm.op_0x2a  * /
     *     /* 0x5727: block 0x14 * /
     *     /* 0x5729: local.tee $local_4 * /
     *     /* 0x572b: wasm.op_0x94  * /
     *     /* 0x572c: wasm.op_0x92  * /
     *     /* 0x572d: local.get $local_21 * /
     *     /* 0x572f: local.get $local_2 * /
     *     /* 0x5731: wasm.op_0x2a  * /
     *     /* 0x5732: block 0x18 * /
     *     /* 0x5734: local.tee $local_5 * /
     *     /* 0x5736: wasm.op_0x94  * /
     *     /* 0x5737: wasm.op_0x92  * /
     *     /* 0x5738: local.get $local_22 * /
     *     /* 0x573a: local.get $local_2 * /
     *     /* 0x573c: wasm.op_0x2a  * /
     *     /* 0x573d: block 0x1c * /
     *     /* 0x573f: local.tee $local_6 * /
     *     /* 0x5741: wasm.op_0x94  * /
     *     /* 0x5742: wasm.op_0x92  * /
     *     /* 0x5743: wasm.op_0x38  * /
     *     /* 0x5744: block 0x1c * /
     *     /* 0x5746: local.get $local_0 * /
     *     /* 0x5748: local.get $local_3 * /
     *     /* 0x574a: local.get $local_19 * /
     *     /* 0x574c: wasm.op_0x94  * /
     *     /* 0x574d: local.get $local_4 * /
     *     /* 0x574f: local.get $local_20 * /
     *     /* 0x5751: wasm.op_0x94  * /
     *     /* 0x5752: wasm.op_0x92  * /
     *     /* 0x5753: local.get $local_5 * /
     *     /* 0x5755: local.get $local_18 * /
     *     /* 0x5757: wasm.op_0x94  * /
     *     /* 0x5758: wasm.op_0x92  * /
     *     /* 0x5759: local.get $local_6 * /
     *     /* 0x575b: local.get $local_17 * /
     *     /* 0x575d: wasm.op_0x94  * /
     *     /* 0x575e: wasm.op_0x92  * /
     *     /* 0x575f: wasm.op_0x38  * /
     *     /* 0x5760: block 0x18 * /
     *     /* 0x5762: local.get $local_0 * /
     *     /* 0x5764: local.get $local_3 * /
     *     /* 0x5766: local.get $local_15 * /
     *     /* 0x5768: wasm.op_0x94  * /
     *     /* 0x5769: local.get $local_4 * /
     *     /* 0x576b: local.get $local_16 * /
     *     /* 0x576d: wasm.op_0x94  * /
     *     /* 0x576e: wasm.op_0x92  * /
     *     /* 0x576f: local.get $local_5 * /
     *     /* 0x5771: local.get $local_14 * /
     *     /* 0x5773: wasm.op_0x94  * /
     *     /* 0x5774: wasm.op_0x92  * /
     *     /* 0x5775: local.get $local_6 * /
     *     /* 0x5777: local.get $local_13 * /
     *     /* 0x5779: wasm.op_0x94  * /
     *     /* 0x577a: wasm.op_0x92  * /
     *     /* 0x577b: wasm.op_0x38  * /
     *     /* 0x577c: block 0x14 * /
     *     /* 0x577e: local.get $local_0 * /
     *     /* 0x5780: local.get $local_3 * /
     *     /* 0x5782: local.get $local_11 * /
     *     /* 0x5784: wasm.op_0x94  * /
     *     /* 0x5785: local.get $local_4 * /
     *     /* 0x5787: local.get $local_12 * /
     *     /* 0x5789: wasm.op_0x94  * /
     *     /* 0x578a: wasm.op_0x92  * /
     *     /* 0x578b: local.get $local_5 * /
     *     /* 0x578d: local.get $local_10 * /
     *     /* 0x578f: wasm.op_0x94  * /
     *     /* 0x5790: wasm.op_0x92  * /
     *     /* 0x5791: local.get $local_6 * /
     *     /* 0x5793: local.get $local_9 * /
     *     /* 0x5795: wasm.op_0x94  * /
     *     /* 0x5796: wasm.op_0x92  * /
     *     /* 0x5797: wasm.op_0x38  * /
     *     /* 0x5798: block 0x10 * /
     *     /* 0x579a: local.get $local_0 * /
     *     /* 0x579c: local.get $local_7 * /
     *     /* 0x579e: local.get $local_2 * /
     *     /* 0x57a0: wasm.op_0x2a  * /
     *     /* 0x57a1: block 0x20 * /
     *     /* 0x57a3: local.tee $local_3 * /
     *     /* 0x57a5: wasm.op_0x94  * /
     *     /* 0x57a6: local.get $local_8 * /
     *     /* 0x57a8: local.get $local_2 * /
     *     /* 0x57aa: wasm.op_0x2a  * /
     *     /* 0x57ab: block 0x24 * /
     *     /* 0x57ad: local.tee $local_4 * /
     *     /* 0x57af: wasm.op_0x94  * /
     *     /* 0x57b0: wasm.op_0x92  * /
     *     /* 0x57b1: local.get $local_21 * /
     *     /* 0x57b3: local.get $local_2 * /
     *     /* 0x57b5: wasm.op_0x2a  * /
     *     /* 0x57b6: block 0x28 * /
     *     /* 0x57b8: local.tee $local_5 * /
     *     /* 0x57ba: wasm.op_0x94  * /
     *     /* 0x57bb: wasm.op_0x92  * /
     *     /* 0x57bc: local.get $local_22 * /
     *     /* 0x57be: local.get $local_2 * /
     *     /* 0x57c0: wasm.op_0x2a  * /
     *     /* 0x57c1: block 0x2c * /
     *     /* 0x57c3: local.tee $local_6 * /
     *     /* 0x57c5: wasm.op_0x94  * /
     *     /* 0x57c6: wasm.op_0x92  * /
     *     /* 0x57c7: wasm.op_0x38  * /
     *     /* 0x57c8: block 0x2c * /
     *     /* 0x57ca: local.get $local_0 * /
     *     /* 0x57cc: local.get $local_3 * /
     *     /* 0x57ce: local.get $local_19 * /
     *     /* 0x57d0: wasm.op_0x94  * /
     *     /* 0x57d1: local.get $local_4 * /
     *     /* 0x57d3: local.get $local_20 * /
     *     /* 0x57d5: wasm.op_0x94  * /
     *     /* 0x57d6: wasm.op_0x92  * /
     *     /* 0x57d7: local.get $local_5 * /
     *     /* 0x57d9: local.get $local_18 * /
     *     /* 0x57db: wasm.op_0x94  * /
     *     /* 0x57dc: wasm.op_0x92  * /
     *     /* 0x57dd: local.get $local_6 * /
     *     /* 0x57df: local.get $local_17 * /
     *     /* 0x57e1: wasm.op_0x94  * /
     *     /* 0x57e2: wasm.op_0x92  * /
     *     /* 0x57e3: wasm.op_0x38  * /
     *     /* 0x57e4: block 0x28 * /
     *     /* 0x57e6: local.get $local_0 * /
     *     /* 0x57e8: local.get $local_3 * /
     *     /* 0x57ea: local.get $local_15 * /
     *     /* 0x57ec: wasm.op_0x94  * /
     *     /* 0x57ed: local.get $local_4 * /
     *     /* 0x57ef: local.get $local_16 * /
     *     /* 0x57f1: wasm.op_0x94  * /
     *     /* 0x57f2: wasm.op_0x92  * /
     *     /* 0x57f3: local.get $local_5 * /
     *     /* 0x57f5: local.get $local_14 * /
     *     /* 0x57f7: wasm.op_0x94  * /
     *     /* 0x57f8: wasm.op_0x92  * /
     *     /* 0x57f9: local.get $local_6 * /
     *     /* 0x57fb: local.get $local_13 * /
     *     /* 0x57fd: wasm.op_0x94  * /
     *     /* 0x57fe: wasm.op_0x92  * /
     *     /* 0x57ff: wasm.op_0x38  * /
     *     /* 0x5800: block 0x24 * /
     *     /* 0x5802: local.get $local_0 * /
     *     /* 0x5804: local.get $local_3 * /
     *     /* 0x5806: local.get $local_11 * /
     *     /* 0x5808: wasm.op_0x94  * /
     *     /* 0x5809: local.get $local_4 * /
     *     /* 0x580b: local.get $local_12 * /
     *     /* 0x580d: wasm.op_0x94  * /
     *     /* 0x580e: wasm.op_0x92  * /
     *     /* 0x580f: local.get $local_5 * /
     *     /* 0x5811: local.get $local_10 * /
     *     /* 0x5813: wasm.op_0x94  * /
     *     /* 0x5814: wasm.op_0x92  * /
     *     /* 0x5815: local.get $local_6 * /
     *     /* 0x5817: local.get $local_9 * /
     *     /* 0x5819: wasm.op_0x94  * /
     *     /* 0x581a: wasm.op_0x92  * /
     *     /* 0x581b: wasm.op_0x38  * /
     *     /* 0x581c: block 0x20 * /
     *     /* 0x581e: local.get $local_0 * /
     *     /* 0x5820: local.get $local_7 * /
     *     /* 0x5822: local.get $local_2 * /
     *     /* 0x5824: wasm.op_0x2a  * /
     *     /* 0x5825: block 0x30 * /
     *     /* 0x5827: local.tee $local_3 * /
     *     /* 0x5829: wasm.op_0x94  * /
     *     /* 0x582a: local.get $local_8 * /
     *     /* 0x582c: local.get $local_2 * /
     *     /* 0x582e: wasm.op_0x2a  * /
     *     /* 0x582f: block 0x34 * /
     *     /* 0x5831: local.tee $local_7 * /
     *     /* 0x5833: wasm.op_0x94  * /
     *     /* 0x5834: wasm.op_0x92  * /
     *     /* 0x5835: local.get $local_21 * /
     *     /* 0x5837: local.get $local_2 * /
     *     /* 0x5839: wasm.op_0x2a  * /
     *     /* 0x583a: block 0x38 * /
     *     /* 0x583c: local.tee $local_4 * /
     *     /* 0x583e: wasm.op_0x94  * /
     *     /* 0x583f: wasm.op_0x92  * /
     *     /* 0x5840: local.get $local_22 * /
     *     /* 0x5842: local.get $local_2 * /
     *     /* 0x5844: wasm.op_0x2a  * /
     *     /* 0x5845: block 0x3c * /
     *     /* 0x5847: local.tee $local_8 * /
     *     /* 0x5849: wasm.op_0x94  * /
     *     /* 0x584a: wasm.op_0x92  * /
     *     /* 0x584b: wasm.op_0x38  * /
     *     /* 0x584c: block 0x3c * /
     *     /* 0x584e: local.get $local_0 * /
     *     /* 0x5850: local.get $local_3 * /
     *     /* 0x5852: local.get $local_19 * /
     *     /* 0x5854: wasm.op_0x94  * /
     *     /* 0x5855: local.get $local_7 * /
     *     /* 0x5857: local.get $local_20 * /
     *     /* 0x5859: wasm.op_0x94  * /
     *     /* 0x585a: wasm.op_0x92  * /
     *     /* 0x585b: local.get $local_4 * /
     *     /* 0x585d: local.get $local_18 * /
     *     /* 0x585f: wasm.op_0x94  * /
     *     /* 0x5860: wasm.op_0x92  * /
     *     /* 0x5861: local.get $local_8 * /
     *     /* 0x5863: local.get $local_17 * /
     *     /* 0x5865: wasm.op_0x94  * /
     *     /* 0x5866: wasm.op_0x92  * /
     *     /* 0x5867: wasm.op_0x38  * /
     *     /* 0x5868: block 0x38 * /
     *     /* 0x586a: local.get $local_0 * /
     *     /* 0x586c: local.get $local_3 * /
     *     /* 0x586e: local.get $local_15 * /
     *     /* 0x5870: wasm.op_0x94  * /
     *     /* 0x5871: local.get $local_7 * /
     *     /* 0x5873: local.get $local_16 * /
     *     /* 0x5875: wasm.op_0x94  * /
     *     /* 0x5876: wasm.op_0x92  * /
     *     /* 0x5877: local.get $local_4 * /
     *     /* 0x5879: local.get $local_14 * /
     *     /* 0x587b: wasm.op_0x94  * /
     *     /* 0x587c: wasm.op_0x92  * /
     *     /* 0x587d: local.get $local_8 * /
     *     /* 0x587f: local.get $local_13 * /
     *     /* 0x5881: wasm.op_0x94  * /
     *     /* 0x5882: wasm.op_0x92  * /
     *     /* 0x5883: wasm.op_0x38  * /
     *     /* 0x5884: block 0x34 * /
     *     /* 0x5886: local.get $local_0 * /
     *     /* 0x5888: local.get $local_3 * /
     *     /* 0x588a: local.get $local_11 * /
     *     /* 0x588c: wasm.op_0x94  * /
     *     /* 0x588d: local.get $local_7 * /
     *     /* 0x588f: local.get $local_12 * /
     *     /* 0x5891: wasm.op_0x94  * /
     *     /* 0x5892: wasm.op_0x92  * /
     *     /* 0x5893: local.get $local_4 * /
     *     /* 0x5895: local.get $local_10 * /
     *     /* 0x5897: wasm.op_0x94  * /
     *     /* 0x5898: wasm.op_0x92  * /
     *     /* 0x5899: local.get $local_8 * /
     *     /* 0x589b: local.get $local_9 * /
     *     /* 0x589d: wasm.op_0x94  * /
     *     /* 0x589e: wasm.op_0x92  * /
     *     /* 0x589f: wasm.op_0x38  * /
     *     /* 0x58a0: block 0x30 * /
     *     return r0;
     * }
*/
u64 re_wasm_func_292(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x5627ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: orbit-characters.wasm | Format: WebAssembly (.wasm) | Procs: 2062\n");
    u64 res = re_d(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine '_d' (@ 0x359d) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}
