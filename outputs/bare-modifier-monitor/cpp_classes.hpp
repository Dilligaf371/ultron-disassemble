// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : /Applications/ChatGPT.app/Contents/Resources/native/bare-modifier-monitor
// Classes Found : 54 | Virtual Dispatch Sites: 205
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_130_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000415c (offset +0x0)
};

class PolymoObject_130 {
public:
    const PolymoObject_130_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000415c (offset +0x0)
};

struct PolymoObject_138_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008150 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008184 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000819c (offset +0x158)
};

class PolymoObject_138 {
public:
    const PolymoObject_138_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008150 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008184 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000819c (offset +0x158)
};

struct PolymoObject_1b0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b1e8 (offset +0x160)
};

class PolymoObject_1b0 {
public:
    const PolymoObject_1b0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b1e8 (offset +0x160)
};

struct PolymoObject_1b4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000081ec (offset +0x160)
};

class PolymoObject_1b4 {
public:
    const PolymoObject_1b4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000081ec (offset +0x160)
};

struct PolymoObject_1c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003074 (offset +0x158)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000031f4 (offset +0x8)
};

class PolymoObject_1c {
public:
    const PolymoObject_1c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003074 (offset +0x158)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000031f4 (offset +0x8)
};

struct PolymoObject_1dc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a328 (offset +0x158)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a338 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a440 (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a450 (offset +0x160)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a460 (offset +0x158)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a470 (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a4d8 (offset +0x158)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a528 (offset +0x158)
};

class PolymoObject_1dc {
public:
    const PolymoObject_1dc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a328 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a338 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a440 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a450 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a460 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a470 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a4d8 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000a528 (offset +0x158)
};

struct PolymoObject_204_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b21c (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b250 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b268 (offset +0x158)
};

class PolymoObject_204 {
public:
    const PolymoObject_204_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b21c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b250 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b268 (offset +0x158)
};

struct PolymoObject_208_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008220 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008254 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000826c (offset +0x158)
};

class PolymoObject_208 {
public:
    const PolymoObject_208_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008220 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008254 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000826c (offset +0x158)
};

struct PolymoObject_22c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000329c (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100003300 (offset +0x38)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100003364 (offset +0x38)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000033bc (offset +0x38)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000033f8 (offset +0x38)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000034f4 (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003830 (offset +0x68)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003868 (offset +0x8)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003890 (offset +0x8)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a08 (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a28 (offset +0x8)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a48 (offset +0x8)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a60 (offset +0x8)
};

class PolymoObject_22c {
public:
    const PolymoObject_22c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000329c (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100003300 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100003364 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000033bc (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000033f8 (offset +0x38)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000034f4 (offset +0x158)
    virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003830 (offset +0x68)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003868 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003890 (offset +0x8)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a08 (offset +0x158)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a28 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a48 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003a60 (offset +0x8)
};

struct PolymoObject_280_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b2b8 (offset +0x160)
};

class PolymoObject_280 {
public:
    const PolymoObject_280_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b2b8 (offset +0x160)
};

struct PolymoObject_2d4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b2ec (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b320 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b338 (offset +0x158)
};

class PolymoObject_2d4 {
public:
    const PolymoObject_2d4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b2ec (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b320 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b338 (offset +0x158)
};

struct PolymoObject_334_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000066e0 (offset +0x20)
};

class PolymoObject_334 {
public:
    const PolymoObject_334_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000066e0 (offset +0x20)
};

struct PolymoObject_3b8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d3f0 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d3fc (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d40c (offset +0x158)
};

class PolymoObject_3b8 {
public:
    const PolymoObject_3b8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d3f0 (offset +0x160)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d3fc (offset +0x10)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d40c (offset +0x158)
};

struct PolymoObject_400_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000143c (offset +0x0)
};

class PolymoObject_400 {
public:
    const PolymoObject_400_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000143c (offset +0x0)
};

struct PolymoObject_460_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000896c (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089b0 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089d4 (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089e4 (offset +0x160)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a0c (offset +0x158)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a1c (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a30 (offset +0x160)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a68 (offset +0x158)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a9c (offset +0x160)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008abc (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008acc (offset +0x158)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008aec (offset +0x158)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008afc (offset +0x158)
};

class PolymoObject_460 {
public:
    const PolymoObject_460_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000896c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089b0 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089d4 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000089e4 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a0c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a1c (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a30 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a68 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008a9c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008abc (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008acc (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008aec (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008afc (offset +0x158)
};

struct PolymoObject_484_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d4f0 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d514 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d604 (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d640 (offset +0x160)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d658 (offset +0x158)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d668 (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d6a4 (offset +0x160)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d6f8 (offset +0x160)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d714 (offset +0x160)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d734 (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d744 (offset +0x158)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d754 (offset +0x158)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d764 (offset +0x158)
};

class PolymoObject_484 {
public:
    const PolymoObject_484_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d4f0 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d514 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d604 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d640 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d658 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d668 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d6a4 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d6f8 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d714 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d734 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d744 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d754 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d764 (offset +0x158)
};

struct PolymoObject_4b0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c568 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c5d8 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c84c (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c8c8 (offset +0x158)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c8f4 (offset +0x158)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c984 (offset +0x160)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c9f4 (offset +0x158)
};

class PolymoObject_4b0 {
public:
    const PolymoObject_4b0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c568 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c5d8 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c84c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c8c8 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c8f4 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c984 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c9f4 (offset +0x158)
};

struct PolymoObject_4cc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000155c (offset +0x0)
};

class PolymoObject_4cc {
public:
    const PolymoObject_4cc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000155c (offset +0x0)
};

struct PolymoObject_544_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f560 (offset +0x158)
};

class PolymoObject_544 {
public:
    const PolymoObject_544_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f560 (offset +0x158)
};

struct PolymoObject_590_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000015fc (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001684 (offset +0x20)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000016a8 (offset +0x10)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000016e0 (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001714 (offset +0x10)
};

class PolymoObject_590 {
public:
    const PolymoObject_590_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000015fc (offset +0x18)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001684 (offset +0x20)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000016a8 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000016e0 (offset +0x8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001714 (offset +0x10)
};

struct PolymoObject_5b8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b5f0 (offset +0x160)
};

class PolymoObject_5b8 {
public:
    const PolymoObject_5b8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b5f0 (offset +0x160)
};

struct PolymoObject_5f8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100007660 (offset +0x158)
};

class PolymoObject_5f8 {
public:
    const PolymoObject_5f8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100007660 (offset +0x158)
};

struct PolymoObject_60c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b624 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b658 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b670 (offset +0x158)
};

class PolymoObject_60c {
public:
    const PolymoObject_60c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b624 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b658 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b670 (offset +0x158)
};

struct PolymoObject_614_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100010638 (offset +0x158)
};

class PolymoObject_614 {
public:
    const PolymoObject_614_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100010638 (offset +0x158)
};

struct PolymoObject_6c4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000096ec (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009718 (offset +0x158)
};

class PolymoObject_6c4 {
public:
    const PolymoObject_6c4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000096ec (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009718 (offset +0x158)
};

struct PolymoObject_6e8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000b7b8 (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b96c (offset +0x8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c03c (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c080 (offset +0x158)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0a4 (offset +0x160)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0b4 (offset +0x160)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0dc (offset +0x158)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0ec (offset +0x158)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c100 (offset +0x160)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c138 (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c16c (offset +0x160)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c18c (offset +0x158)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c19c (offset +0x158)
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c1bc (offset +0x158)
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c1cc (offset +0x158)
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c318 (offset +0x158)
};

class PolymoObject_6e8 {
public:
    const PolymoObject_6e8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000b7b8 (offset +0x38)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000b96c (offset +0x8)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c03c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c080 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0a4 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0b4 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0dc (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c0ec (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c100 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c138 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c16c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c18c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c19c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c1bc (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c1cc (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000c318 (offset +0x158)
};

struct PolymoObject_740_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002778 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002784 (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002794 (offset +0x158)
};

class PolymoObject_740 {
public:
    const PolymoObject_740_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002778 (offset +0x160)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002784 (offset +0x10)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002794 (offset +0x158)
};

struct PolymoObject_754_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000178c (offset +0x8)
};

class PolymoObject_754 {
public:
    const PolymoObject_754_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000178c (offset +0x8)
};

struct PolymoObject_764_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f798 (offset +0x30)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f7b8 (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f7d4 (offset +0x38)
};

class PolymoObject_764 {
public:
    const PolymoObject_764_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f798 (offset +0x30)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f7b8 (offset +0x10)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000f7d4 (offset +0x38)
};

struct PolymoObject_828_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002858 (offset +0x0)
};

class PolymoObject_828 {
public:
    const PolymoObject_828_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002858 (offset +0x0)
};

struct PolymoObject_830_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fabc (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fad4 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fb14 (offset +0x158)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fb94 (offset +0x158)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fba4 (offset +0x158)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fd38 (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fd48 (offset +0x158)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100010544 (offset +0x28)
};

class PolymoObject_830 {
public:
    const PolymoObject_830_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fabc (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fad4 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fb14 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fb94 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fba4 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fd38 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000fd48 (offset +0x158)
    virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100010544 (offset +0x28)
};

struct PolymoObject_850_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d8bc (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d908 (offset +0x38)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d940 (offset +0x38)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d970 (offset +0x30)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d998 (offset +0x38)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d9c0 (offset +0x20)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x10000d9d8 (offset +0x20)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d9f8 (offset +0x8)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da10 (offset +0x20)
};

class PolymoObject_850 {
public:
    const PolymoObject_850_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d8bc (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d908 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000d940 (offset +0x38)
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d970 (offset +0x30)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d998 (offset +0x38)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d9c0 (offset +0x20)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x10000d9d8 (offset +0x20)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d9f8 (offset +0x8)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da10 (offset +0x20)
};

struct PolymoObject_88c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000098dc (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009918 (offset +0x160)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009930 (offset +0x158)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009940 (offset +0x158)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000997c (offset +0x160)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000099d0 (offset +0x160)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000099ec (offset +0x160)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a0c (offset +0x158)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a1c (offset +0x158)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a2c (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a3c (offset +0x158)
};

class PolymoObject_88c {
public:
    const PolymoObject_88c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000098dc (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009918 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009930 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009940 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000997c (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000099d0 (offset +0x160)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000099ec (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a0c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a1c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a2c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009a3c (offset +0x158)
};

struct PolymoObject_904_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000abe8 (offset +0x158)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000addc (offset +0x158)
};

class PolymoObject_904 {
public:
    const PolymoObject_904_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000abe8 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000addc (offset +0x158)
};

struct PolymoObject_92c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000049b4 (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000049e4 (offset +0x38)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100004a14 (offset +0x38)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004a6c (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004ab4 (offset +0x8)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004ac4 (offset +0x8)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004af4 (offset +0x10)
};

class PolymoObject_92c {
public:
    const PolymoObject_92c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000049b4 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000049e4 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100004a14 (offset +0x38)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004a6c (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004ab4 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004ac4 (offset +0x8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004af4 (offset +0x10)
};

struct PolymoObject_984_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000139b8 (offset +0x18)
};

class PolymoObject_984 {
public:
    const PolymoObject_984_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000139b8 (offset +0x18)
};

struct PolymoObject_9dc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013a90 (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b04 (offset +0x38)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b3c (offset +0x38)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b9c (offset +0x38)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e00 (offset +0x10)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e1c (offset +0x10)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x100013e3c (offset +0x10)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e60 (offset +0x8)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e74 (offset +0x8)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e9c (offset +0x20)
};

class PolymoObject_9dc {
public:
    const PolymoObject_9dc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013a90 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b04 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b3c (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100013b9c (offset +0x38)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e00 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e1c (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x100013e3c (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e60 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e74 (offset +0x8)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013e9c (offset +0x20)
};

struct PolymoObject_a2c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da3c (offset +0x8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da58 (offset +0x38)
};

class PolymoObject_a2c {
public:
    const PolymoObject_a2c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da3c (offset +0x8)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000da58 (offset +0x38)
};

struct PolymoObject_a68_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ca7c (offset +0x158)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ca98 (offset +0x158)
};

class PolymoObject_a68 {
public:
    const PolymoObject_a68_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ca7c (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ca98 (offset +0x158)
};

struct PolymoObject_b6c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ccdc (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd28 (offset +0x158)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd4c (offset +0x160)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd94 (offset +0x158)
};

class PolymoObject_b6c {
public:
    const PolymoObject_b6c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ccdc (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd28 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd4c (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cd94 (offset +0x158)
};

struct PolymoObject_bcc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009c0c (offset +0x158)
};

class PolymoObject_bcc {
public:
    const PolymoObject_bcc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009c0c (offset +0x158)
};

struct PolymoObject_bd4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_12(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002e5c (offset +0x60)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002fe4 (offset +0x10)
};

class PolymoObject_bd4 {
public:
    const PolymoObject_bd4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_12(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002e5c (offset +0x60)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002fe4 (offset +0x10)
};

struct PolymoObject_c0c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000dd00 (offset +0x158)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e3f0 (offset +0x160)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e410 (offset +0x158)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e448 (offset +0x158)
};

class PolymoObject_c0c {
public:
    const PolymoObject_c0c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000dd00 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e3f0 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e410 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000e448 (offset +0x158)
};

struct PolymoObject_c24_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_56(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008d88 (offset +0x1c0)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008e44 (offset +0x160)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008e90 (offset +0x158)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008ebc (offset +0x160)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_30(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000090ec (offset +0xf0)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009144 (offset +0x158)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_22(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009294 (offset +0xb0)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000093e4 (offset +0x158)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009644 (offset +0x28)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009664 (offset +0x158)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009694 (offset +0x158)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011c48 (offset +0x160)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011c64 (offset +0x158)
};

class PolymoObject_c24 {
public:
    const PolymoObject_c24_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_56(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008d88 (offset +0x1c0)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008e44 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008e90 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100008ebc (offset +0x160)
    virtual int64_t vfunc_slot_30(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000090ec (offset +0xf0)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009144 (offset +0x158)
    virtual int64_t vfunc_slot_22(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009294 (offset +0xb0)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000093e4 (offset +0x158)
    virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009644 (offset +0x28)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009664 (offset +0x158)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009694 (offset +0x158)
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011c48 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011c64 (offset +0x158)
};

struct PolymoObject_c78_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100011cd8 (offset +0x38)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x1 @ 0x100011cf0 (offset +0x38)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011d14 (offset +0x20)
};

class PolymoObject_c78 {
public:
    const PolymoObject_c78_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100011cd8 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x1 @ 0x100011cf0 (offset +0x38)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100011d14 (offset +0x20)
};

struct PolymoObject_d48_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009d64 (offset +0x158)
};

class PolymoObject_d48 {
public:
    const PolymoObject_d48_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009d64 (offset +0x158)
};

struct PolymoObject_d78_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009d94 (offset +0x158)
};

class PolymoObject_d78 {
public:
    const PolymoObject_d78_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100009d94 (offset +0x158)
};

struct PolymoObject_dc8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ce0c (offset +0x158)
};

class PolymoObject_dc8 {
public:
    const PolymoObject_dc8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000ce0c (offset +0x158)
};

struct PolymoObject_e20_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cf80 (offset +0x18)
};

class PolymoObject_e20 {
public:
    const PolymoObject_e20_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000cf80 (offset +0x18)
};

struct PolymoObject_e4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000811c (offset +0x160)
};

class PolymoObject_e4 {
public:
    const PolymoObject_e4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000811c (offset +0x160)
};

struct PolymoObject_e54_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004038 (offset +0x10)
};

class PolymoObject_e54 {
public:
    const PolymoObject_e54_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004038 (offset +0x10)
};

struct PolymoObject_ec0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013ed0 (offset +0x8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013f9c (offset +0x8)
};

class PolymoObject_ec0 {
public:
    const PolymoObject_ec0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013ed0 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100013f9c (offset +0x8)
};

struct PolymoObject_ff0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d018 (offset +0x160)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d044 (offset +0x158)
};

class PolymoObject_ff0 {
public:
    const PolymoObject_ff0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_44(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d018 (offset +0x160)
    virtual int64_t vfunc_slot_43(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000d044 (offset +0x158)
};

struct swift_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::bareModifierCommitDelayMs() (void* this_ptr); // @ 0x100001320
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000132c
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001360
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001368
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000139c
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000013b0
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001470
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000017ec
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001800
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001850
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000018ac
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000018b8
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001904
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000194c
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001958
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019a4
    int64_t (*vslot_16)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019ec
    int64_t (*vslot_17)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019f8
    int64_t (*vslot_18)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a44
    int64_t (*vslot_19)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a8c
    int64_t (*vslot_20)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a94
    int64_t (*vslot_21)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001adc
    int64_t (*vslot_22)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b24
    int64_t (*vslot_23)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b2c
    int64_t (*vslot_24)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b74
    int64_t (*vslot_25)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100001bbc
    int64_t (*vslot_26)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100001c24
    int64_t (*vslot_27)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x100002088
    int64_t (*vslot_28)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x10000211c
    int64_t (*vslot_29)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x10000215c
    int64_t (*vslot_30)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100002204
    int64_t (*vslot_31)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x1000022f0
    int64_t (*vslot_32)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handle::FlagsChanged::_FD5FB8F3991F83E8040D3A5272A98557::eventKeyCode::flags::Int64::NSEvent() (void* this_ptr); // @ 0x1000022f8
    int64_t (*vslot_33)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent() (void* this_ptr); // @ 0x100002740
    int64_t (*vslot_34)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x10000286c
    int64_t (*vslot_35)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x1000028d0
    int64_t (*vslot_36)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100002964
    int64_t (*vslot_37)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x1000029d0
    int64_t (*vslot_38)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x100002b98
    int64_t (*vslot_39)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handleTargetUp::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100002bd4
    int64_t (*vslot_40)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::cancelPress::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000301c
    int64_t (*vslot_41)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000322c
    int64_t (*vslot_42)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100003a80
    int64_t (*vslot_43)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100003aec
    int64_t (*vslot_44)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::requiresKeyDownMonitor() (void* this_ptr); // @ 0x100003b60
    int64_t (*vslot_45)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100003bdc
    int64_t (*vslot_46)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::commitPress::_FD5FB8F3991F83E8040D3A5272A98557::generation() (void* this_ptr); // @ 0x100003e54
    int64_t (*vslot_47)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100004070
    int64_t (*vslot_48)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_queue::Dispatch::asyncAfter::deadline::qos::flags::execute() (void* this_ptr); // @ 0x100004178
    int64_t (*vslot_49)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_queue::Dispatch::asyncAfter::deadline::qos::flags::execute() (void* this_ptr); // @ 0x10000418c
    int64_t (*vslot_50)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::removeKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100004228
    int64_t (*vslot_51)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_queue() (void* this_ptr); // @ 0x100004354
    int64_t (*vslot_52)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000043f0
    int64_t (*vslot_53)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::handle::KeyDown::_FD5FB8F3991F83E8040D3A5272A98557::event::Code::Int64() (void* this_ptr); // @ 0x100004458
    int64_t (*vslot_54)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557::NSEvent() (void* this_ptr); // @ 0x100004654
    int64_t (*vslot_55)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557::NSEvent() (void* this_ptr); // @ 0x100004724
    int64_t (*vslot_56)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x100004788
    int64_t (*vslot_57)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x1000047ac
    int64_t (*vslot_58)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x1000047b0
    int64_t (*vslot_59)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x1000047b4
    int64_t (*vslot_60)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x1000047f4
    int64_t (*vslot_61)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::union() (void* this_ptr); // @ 0x10000482c
    int64_t (*vslot_62)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::intersection() (void* this_ptr); // @ 0x100004868
    int64_t (*vslot_63)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x1000048a4
    int64_t (*vslot_64)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x1000048e0
    int64_t (*vslot_65)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OptionSet::Element::FixedWidthInteger::RawValue::insert::inserted::memberAfterInsert() (void* this_ptr); // @ 0x10000492c
    int64_t (*vslot_66)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x100004b10
    int64_t (*vslot_67)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x100004b4c
    int64_t (*vslot_68)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100004b88
    int64_t (*vslot_69)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100004bc8
    int64_t (*vslot_70)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x100004c08
    int64_t (*vslot_71)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::subtracting() (void* this_ptr); // @ 0x100004c48
    int64_t (*vslot_72)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x100004c5c
    int64_t (*vslot_73)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100004c74
    int64_t (*vslot_74)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100004c8c
    int64_t (*vslot_75)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100004ca4
    int64_t (*vslot_76)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::Element() (void* this_ptr); // @ 0x100004cbc
    int64_t (*vslot_77)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::subtract() (void* this_ptr); // @ 0x100004cf4
    int64_t (*vslot_78)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100004d08
    int64_t (*vslot_79)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100004d34
    int64_t (*vslot_80)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x100004d74
    int64_t (*vslot_81)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::union() (void* this_ptr); // @ 0x100004dac
    int64_t (*vslot_82)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::intersection() (void* this_ptr); // @ 0x100004de8
    int64_t (*vslot_83)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x100004e24
    int64_t (*vslot_84)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x100004e60
    int64_t (*vslot_85)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x100004eac
    int64_t (*vslot_86)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x100004ee8
    int64_t (*vslot_87)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100004f24
    int64_t (*vslot_88)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100004f64
    int64_t (*vslot_89)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x100004fa4
    int64_t (*vslot_90)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::subtracting() (void* this_ptr); // @ 0x100004fe4
    int64_t (*vslot_91)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x100004ff8
    int64_t (*vslot_92)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100005010
    int64_t (*vslot_93)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100005028
    int64_t (*vslot_94)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100005040
    int64_t (*vslot_95)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::Element() (void* this_ptr); // @ 0x100005058
    int64_t (*vslot_96)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::subtract() (void* this_ptr); // @ 0x100005090
    int64_t (*vslot_97)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ee() (void* this_ptr); // @ 0x1000050a4
    int64_t (*vslot_98)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000050ec
    int64_t (*vslot_99)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100005128
    int64_t (*vslot_100)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x100005154
    int64_t (*vslot_101)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x100005184
    int64_t (*vslot_102)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x1000051b0
    int64_t (*vslot_103)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ee() (void* this_ptr); // @ 0x1000051b4
    int64_t (*vslot_104)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000051fc
    int64_t (*vslot_105)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x100005238
    int64_t (*vslot_106)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x100005268
    int64_t (*vslot_107)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100005294
    int64_t (*vslot_108)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x1000052a8
    int64_t (*vslot_109)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100005314
    int64_t (*vslot_110)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100005328
    int64_t (*vslot_111)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x10000533c
    int64_t (*vslot_112)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000053a8
    int64_t (*vslot_113)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000053bc
    int64_t (*vslot_114)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100005428
    int64_t (*vslot_115)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x10000543c
    int64_t (*vslot_116)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x1000054a8
    int64_t (*vslot_117)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x1000054bc
    int64_t (*vslot_118)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x1000054d0
    int64_t (*vslot_119)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000553c
    int64_t (*vslot_120)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100005550
    int64_t (*vslot_121)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x1000055bc
    int64_t (*vslot_122)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt64::FixedWidthInteger() (void* this_ptr); // @ 0x100005628
    int64_t (*vslot_123)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t us::FixedWidthInteger() (void* this_ptr); // @ 0x10000568c
    int64_t (*vslot_124)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x1000056f0
    int64_t (*vslot_125)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x1000056f4
    int64_t (*vslot_126)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _endMutation() (void* this_ptr); // @ 0x10000571c
    int64_t (*vslot_127)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _allocateUninitialized::Dispatch() (void* this_ptr); // @ 0x100005728
    int64_t (*vslot_128)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Dispatch() (void* this_ptr); // @ 0x100005818
    int64_t (*vslot_129)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Dispatch() (void* this_ptr); // @ 0x100005904
    int64_t (*vslot_130)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::__derived_enum_equals() (void* this_ptr); // @ 0x1000059f0
    int64_t (*vslot_131)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hash::into::Hasher() (void* this_ptr); // @ 0x100005ad8
    int64_t (*vslot_132)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hashValue() (void* this_ptr); // @ 0x100005b88
    int64_t (*vslot_133)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005bd0
    int64_t (*vslot_134)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::ee() (void* this_ptr); // @ 0x100005c38
    int64_t (*vslot_135)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hashValue() (void* this_ptr); // @ 0x100005c58
    int64_t (*vslot_136)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hash::into::Hasher() (void* this_ptr); // @ 0x100005c70
    int64_t (*vslot_137)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x100005c88
    int64_t (*vslot_138)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::key::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005c9c
    int64_t (*vslot_139)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::trigger::_062EE8D89A5C907D105C6F75222D1454::Bare::Trigger() (void* this_ptr); // @ 0x100005ca4
    int64_t (*vslot_140)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::emitLine::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005cac
    int64_t (*vslot_141)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005ce0
    int64_t (*vslot_142)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005cf4
    int64_t (*vslot_143)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005d44
    int64_t (*vslot_144)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005da0
    int64_t (*vslot_145)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005dac
    int64_t (*vslot_146)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005e00
    int64_t (*vslot_147)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100005e54
    int64_t (*vslot_148)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100005eb4
    int64_t (*vslot_149)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x10000622c
    int64_t (*vslot_150)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x10000632c
    int64_t (*vslot_151)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::handleFlagsChanged::_062EE8D89A5C907D105C6F75222D1454::eventKeyCode::flags::timestamp::Int64::NSEvent() (void* this_ptr); // @ 0x100006334
    int64_t (*vslot_152)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x10000676c
    int64_t (*vslot_153)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x100006860
    int64_t (*vslot_154)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::keyCodes::_062EE8D89A5C907D105C6F75222D1454::Int64() (void* this_ptr); // @ 0x10000689c
    int64_t (*vslot_155)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::handleOther::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000069c0
    int64_t (*vslot_156)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::modifierFlags::_062EE8D89A5C907D105C6F75222D1454::NSEvent() (void* this_ptr); // @ 0x100006b90
    int64_t (*vslot_157)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::chordModifierFlags::_062EE8D89A5C907D105C6F75222D1454::NSEvent() (void* this_ptr); // @ 0x100006c10
    int64_t (*vslot_158)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::modifierFlag::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100006c60
    int64_t (*vslot_159)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::handleBothDown::_062EE8D89A5C907D105C6F75222D1454::timestamp::nonTarget::Is() (void* this_ptr); // @ 0x100006cc4
    int64_t (*vslot_160)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::handleOneDown::_062EE8D89A5C907D105C6F75222D1454::timestamp::nonTarget::Is() (void* this_ptr); // @ 0x100007054
    int64_t (*vslot_161)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::handleBothUp::_062EE8D89A5C907D105C6F75222D1454::timestamp() (void* this_ptr); // @ 0x100007320
    int64_t (*vslot_162)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::non::KeyWasPressed::_062EE8D89A5C907D105C6F75222D1454::after::before() (void* this_ptr); // @ 0x1000075f8
    int64_t (*vslot_163)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::chordModifierFlags::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000076cc
    int64_t (*vslot_164)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::leftOptionModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007758
    int64_t (*vslot_165)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::rightOptionModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007764
    int64_t (*vslot_166)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::leftShiftModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007770
    int64_t (*vslot_167)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::rightShiftModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x10000777c
    int64_t (*vslot_168)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::leftCommandModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007788
    int64_t (*vslot_169)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::rightCommandModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007794
    int64_t (*vslot_170)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x1000077a0
    int64_t (*vslot_171)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000077dc
    int64_t (*vslot_172)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007914
    int64_t (*vslot_173)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007ad0
    int64_t (*vslot_174)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007af0
    int64_t (*vslot_175)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b08
    int64_t (*vslot_176)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b7c
    int64_t (*vslot_177)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b9c
    int64_t (*vslot_178)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007d04
    int64_t (*vslot_179)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f00
    int64_t (*vslot_180)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f08
    int64_t (*vslot_181)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f0c
    int64_t (*vslot_182)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f14
    int64_t (*vslot_183)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100007f28
    int64_t (*vslot_184)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100007f3c
    int64_t (*vslot_185)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100007f50
    int64_t (*vslot_186)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100007f64
    int64_t (*vslot_187)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100007f78
    int64_t (*vslot_188)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100007f8c
    int64_t (*vslot_189)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x100007fa0
    int64_t (*vslot_190)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100007fb4
    int64_t (*vslot_191)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007fc8
    int64_t (*vslot_192)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007fdc
    int64_t (*vslot_193)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x100008044
    int64_t (*vslot_194)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::key::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x10000806c
    int64_t (*vslot_195)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::modifiers::_8C94E36C253333FA9227D10169F4D14F::NSEventModifierFlags() (void* this_ptr); // @ 0x1000080a0
    int64_t (*vslot_196)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::emitLine::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x1000080a8
    int64_t (*vslot_197)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x1000080dc
    int64_t (*vslot_198)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x1000080e4
    int64_t (*vslot_199)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x100008138
    int64_t (*vslot_200)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x1000081ac
    int64_t (*vslot_201)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x1000081b4
    int64_t (*vslot_202)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x100008208
    int64_t (*vslot_203)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x10000827c
    int64_t (*vslot_204)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x100008298
    int64_t (*vslot_205)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x1000082f8
    int64_t (*vslot_206)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x100008358
    int64_t (*vslot_207)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x100008364
    int64_t (*vslot_208)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x1000083b0
    int64_t (*vslot_209)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags() (void* this_ptr); // @ 0x1000083f8
    int64_t (*vslot_210)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags() (void* this_ptr); // @ 0x100008460
    int64_t (*vslot_211)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x100008b54
    int64_t (*vslot_212)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x100008b70
    int64_t (*vslot_213)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::handle::_8C94E36C253333FA9227D10169F4D14F::Unmanaged::CGEventRef() (void* this_ptr); // @ 0x100008c24
    int64_t (*vslot_214)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x1000096c4
    int64_t (*vslot_215)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x10000972c
    int64_t (*vslot_216)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x1000097c0
    int64_t (*vslot_217)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent() (void* this_ptr); // @ 0x10000982c
    int64_t (*vslot_218)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x10000988c
    int64_t (*vslot_219)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x100009a84
    int64_t (*vslot_220)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor::shortcutModifiers::_8C94E36C253333FA9227D10169F4D14F::NSEventModifierFlags() (void* this_ptr); // @ 0x100009ac0
    int64_t (*vslot_221)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent::cgEvent::CGEventRef() (void* this_ptr); // @ 0x100009bcc
    int64_t (*vslot_222)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x100009c20
    int64_t (*vslot_223)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x100009cb4
    int64_t (*vslot_224)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x100009d48
    int64_t (*vslot_225)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x100009d78
    int64_t (*vslot_226)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x100009da8
    int64_t (*vslot_227)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x100009dcc
    int64_t (*vslot_228)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x100009e60
    int64_t (*vslot_229)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::ee() (void* this_ptr); // @ 0x100009ef4
    int64_t (*vslot_230)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::ee() (void* this_ptr); // @ 0x100009f3c
    int64_t (*vslot_231)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x100009f84
    int64_t (*vslot_232)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x100009fc0
    int64_t (*vslot_233)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x100009fec
    int64_t (*vslot_234)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x10000a018
    int64_t (*vslot_235)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x10000a048
    int64_t (*vslot_236)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x10000a06c
    int64_t (*vslot_237)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x10000a098
    int64_t (*vslot_238)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000a0b4
    int64_t (*vslot_239)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000a0c8
    int64_t (*vslot_240)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x10000a0dc
    int64_t (*vslot_241)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000a0f0
    int64_t (*vslot_242)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x10000a104
    int64_t (*vslot_243)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x10000a170
    int64_t (*vslot_244)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::readQuickChatHotkeyPreferences() (void* this_ptr); // @ 0x10000a1dc
    int64_t (*vslot_245)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSNull() (void* this_ptr); // @ 0x10000a800
    int64_t (*vslot_246)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSNull() (void* this_ptr); // @ 0x10000a860
    int64_t (*vslot_247)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::readQuickChatHotkeyPreferences() (void* this_ptr); // @ 0x10000a904
    int64_t (*vslot_248)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x10000ae90
    int64_t (*vslot_249)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSNumber() (void* this_ptr); // @ 0x10000af04
    int64_t (*vslot_250)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSNull() (void* this_ptr); // @ 0x10000af64
    int64_t (*vslot_251)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000af7c
    int64_t (*vslot_252)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::on::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000afa4
    int64_t (*vslot_253)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::key::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000afd8
    int64_t (*vslot_254)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b00c
    int64_t (*vslot_255)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b028
    int64_t (*vslot_256)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b088
    int64_t (*vslot_257)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b0e8
    int64_t (*vslot_258)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b0fc
    int64_t (*vslot_259)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b14c
    int64_t (*vslot_260)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b1a8
    int64_t (*vslot_261)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b1b0
    int64_t (*vslot_262)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b204
    int64_t (*vslot_263)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b278
    int64_t (*vslot_264)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b280
    int64_t (*vslot_265)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b2d4
    int64_t (*vslot_266)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::persistent::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b348
    int64_t (*vslot_267)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::persistent::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b46c
    int64_t (*vslot_268)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b478
    int64_t (*vslot_269)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b484
    int64_t (*vslot_270)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b4d0
    int64_t (*vslot_271)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b518
    int64_t (*vslot_272)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b520
    int64_t (*vslot_273)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b568
    int64_t (*vslot_274)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b5b0
    int64_t (*vslot_275)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b5b8
    int64_t (*vslot_276)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b60c
    int64_t (*vslot_277)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000b680
    int64_t (*vslot_278)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000b6e8
    int64_t (*vslot_279)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000c3ec
    int64_t (*vslot_280)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000c4a8
    int64_t (*vslot_281)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000c4b0
    int64_t (*vslot_282)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000cb6c
    int64_t (*vslot_283)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::update::_FBBA50E09A10196EED1392F2F03BBA9E::isDown::at() (void* this_ptr); // @ 0x10000cdc8
    int64_t (*vslot_284)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::update::_FBBA50E09A10196EED1392F2F03BBA9E::isDown::at() (void* this_ptr); // @ 0x10000ce20
    int64_t (*vslot_285)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000cff0
    int64_t (*vslot_286)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000d058
    int64_t (*vslot_287)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000d10c
    int64_t (*vslot_288)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000d114
    int64_t (*vslot_289)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSTimer() (void* this_ptr); // @ 0x10000d3b8
    int64_t (*vslot_290)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000d484
    int64_t (*vslot_291)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000d7d4
    int64_t (*vslot_292)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded::UInt16() (void* this_ptr); // @ 0x10000d810
    int64_t (*vslot_293)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t map() (void* this_ptr); // @ 0x10000d850
    int64_t (*vslot_294)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000da7c
    int64_t (*vslot_295)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::flag::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent::Flags() (void* this_ptr); // @ 0x10000daf4
    int64_t (*vslot_296)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000db78
    int64_t (*vslot_297)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::matchesShortcutKey::event::NSEvent() (void* this_ptr); // @ 0x10000dc0c
    int64_t (*vslot_298)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f304
    int64_t (*vslot_299)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t dropFirst::SubSequence() (void* this_ptr); // @ 0x10000f398
    int64_t (*vslot_300)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t FixedWidthInteger::radix() (void* this_ptr); // @ 0x10000f3b0
    int64_t (*vslot_301)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SS() (void* this_ptr); // @ 0x10000f3cc
    int64_t (*vslot_302)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f430
    int64_t (*vslot_303)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10000f458
    int64_t (*vslot_304)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f4cc
    int64_t (*vslot_305)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000f4f4
    int64_t (*vslot_306)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10000f51c
    int64_t (*vslot_307)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSTimer() (void* this_ptr); // @ 0x10000f544
    int64_t (*vslot_308)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SS() (void* this_ptr); // @ 0x10000f574
    int64_t (*vslot_309)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t is::FixedWidthInteger() (void* this_ptr); // @ 0x10000f5d8
    int64_t (*vslot_310)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t sS() (void* this_ptr); // @ 0x10000f63c
    int64_t (*vslot_311)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000f6a0
    int64_t (*vslot_312)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x10000f6c4
    int64_t (*vslot_313)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x10000f6d8
    int64_t (*vslot_314)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000f6ec
    int64_t (*vslot_315)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000f700
    int64_t (*vslot_316)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x10000f714
    int64_t (*vslot_317)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000f728
    int64_t (*vslot_318)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x10000f73c
    int64_t (*vslot_319)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000f750
    int64_t (*vslot_320)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Error() (void* this_ptr); // @ 0x10000f764
    int64_t (*vslot_321)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000f808
    int64_t (*vslot_322)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x10001065c
    int64_t (*vslot_323)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x10001145c
    int64_t (*vslot_324)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000114ac
    int64_t (*vslot_325)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UTF8View() (void* this_ptr); // @ 0x100011528
    int64_t (*vslot_326)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x10001158c
    int64_t (*vslot_327)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode::requiresInputMonitoring::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100011604
    int64_t (*vslot_328)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t print::separator::terminator::St() (void* this_ptr); // @ 0x1000117f0
    int64_t (*vslot_329)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t print::separator::terminator::St::_() (void* this_ptr); // @ 0x10001181c
    int64_t (*vslot_330)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::emitLine() (void* this_ptr); // @ 0x100011848
    int64_t (*vslot_331)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::value::after() (void* this_ptr); // @ 0x10001191c
    int64_t (*vslot_332)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main() (void* this_ptr); // @ 0x100011abc
    int64_t (*vslot_333)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100011b88
    int64_t (*vslot_334)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100011bf0
    int64_t (*vslot_335)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main() (void* this_ptr); // @ 0x100011c24
    int64_t (*vslot_336)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t withExtendedLifetime() (void* this_ptr); // @ 0x100011c78
    int64_t (*vslot_337)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100011d74
    int64_t (*vslot_338)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x100011df0
    int64_t (*vslot_339)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100011e84
    int64_t (*vslot_340)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x100011ef0
    int64_t (*vslot_341)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey::modifierFlag::NSEvent::Flags() (void* this_ptr); // @ 0x100011f68
    int64_t (*vslot_342)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey::keyCodes::Int64() (void* this_ptr); // @ 0x100011f6c
    int64_t (*vslot_343)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey::rawValue() (void* this_ptr); // @ 0x100011f94
    int64_t (*vslot_344)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Element::split::separator::maxSplits::omittingEmptySubsequences::SubSequence() (void* this_ptr); // @ 0x100012ed8
    int64_t (*vslot_345)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Element::split::separator::maxSplits::omittingEmptySubsequences::SubSequence::_() (void* this_ptr); // @ 0x100012eec
    int64_t (*vslot_346)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t te() (void* this_ptr); // @ 0x100012f04
    int64_t (*vslot_347)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::rawValue() (void* this_ptr); // @ 0x100012f1c
    int64_t (*vslot_348)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::rawValue() (void* this_ptr); // @ 0x100013094
    int64_t (*vslot_349)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::ee() (void* this_ptr); // @ 0x10001315c
    int64_t (*vslot_350)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::hashValue() (void* this_ptr); // @ 0x100013170
    int64_t (*vslot_351)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::hash::into::Hasher() (void* this_ptr); // @ 0x1000131ac
    int64_t (*vslot_352)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x1000131f0
    int64_t (*vslot_353)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::rawValue::Raw() (void* this_ptr); // @ 0x100013234
    int64_t (*vslot_354)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey::rawValue::Raw() (void* this_ptr); // @ 0x100013268
    int64_t (*vslot_355)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::rawValue() (void* this_ptr); // @ 0x100013298
    int64_t (*vslot_356)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::rawValue() (void* this_ptr); // @ 0x100013458
    int64_t (*vslot_357)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::ee() (void* this_ptr); // @ 0x10001355c
    int64_t (*vslot_358)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::hashValue() (void* this_ptr); // @ 0x100013570
    int64_t (*vslot_359)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::hash::into::Hasher() (void* this_ptr); // @ 0x1000135ac
    int64_t (*vslot_360)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x1000135f0
    int64_t (*vslot_361)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::rawValue::Raw() (void* this_ptr); // @ 0x100013634
    int64_t (*vslot_362)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier::rawValue::Raw() (void* this_ptr); // @ 0x100013668
    int64_t (*vslot_363)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::__derived_enum_equals() (void* this_ptr); // @ 0x100013698
    int64_t (*vslot_364)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::hash::into::Hasher() (void* this_ptr); // @ 0x1000137c8
    int64_t (*vslot_365)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::hashValue() (void* this_ptr); // @ 0x10001389c
    int64_t (*vslot_366)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::ee() (void* this_ptr); // @ 0x1000138e4
    int64_t (*vslot_367)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::hashValue() (void* this_ptr); // @ 0x100013904
    int64_t (*vslot_368)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::hash::into::Hasher() (void* this_ptr); // @ 0x10001391c
    int64_t (*vslot_369)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x100013934
    int64_t (*vslot_370)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x100013948
    int64_t (*vslot_371)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Never() (void* this_ptr); // @ 0x100013984
    int64_t (*vslot_372)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t map::Element() (void* this_ptr); // @ 0x1000139dc
    int64_t (*vslot_373)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x100014044
    int64_t (*vslot_374)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::bareModifierTrigger::Bare() (void* this_ptr); // @ 0x1000140c8
    int64_t (*vslot_375)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x1000142d4
    int64_t (*vslot_376)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Never() (void* this_ptr); // @ 0x100014310
    int64_t (*vslot_377)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100014534
    int64_t (*vslot_378)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x100014574
    int64_t (*vslot_379)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::union() (void* this_ptr); // @ 0x1000145ac
    int64_t (*vslot_380)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::intersection() (void* this_ptr); // @ 0x1000145e8
    int64_t (*vslot_381)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x100014624
    int64_t (*vslot_382)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x100014660
    int64_t (*vslot_383)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x1000146ac
    int64_t (*vslot_384)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x1000146e8
    int64_t (*vslot_385)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100014724
    int64_t (*vslot_386)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100014764
    int64_t (*vslot_387)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x1000147a4
    int64_t (*vslot_388)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::subtracting() (void* this_ptr); // @ 0x1000147e4
    int64_t (*vslot_389)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x1000147f8
    int64_t (*vslot_390)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100014810
    int64_t (*vslot_391)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100014828
    int64_t (*vslot_392)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100014840
    int64_t (*vslot_393)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::Element() (void* this_ptr); // @ 0x100014858
    int64_t (*vslot_394)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::subtract() (void* this_ptr); // @ 0x100014890
    int64_t (*vslot_395)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::ee() (void* this_ptr); // @ 0x1000148a4
    int64_t (*vslot_396)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000148ec
    int64_t (*vslot_397)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100014928
    int64_t (*vslot_398)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::rawValue() (void* this_ptr); // @ 0x100014954
    int64_t (*vslot_399)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::rawValue::Raw() (void* this_ptr); // @ 0x100014958
    int64_t (*vslot_400)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::rawValue::Raw() (void* this_ptr); // @ 0x100014988
    int64_t (*vslot_401)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::rawValue() (void* this_ptr); // @ 0x1000149b4
    int64_t (*vslot_402)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Never() (void* this_ptr); // @ 0x1000149b8
    int64_t (*vslot_403)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t IndexingIterator() (void* this_ptr); // @ 0x1000149e4
    int64_t (*vslot_404)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Int64() (void* this_ptr); // @ 0x100014a0c
    int64_t (*vslot_405)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Int64() (void* this_ptr); // @ 0x100014a34
    int64_t (*vslot_406)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014aa8
    int64_t (*vslot_407)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014b10
    int64_t (*vslot_408)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100014b78
    int64_t (*vslot_409)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014be0
    int64_t (*vslot_410)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014bf4
    int64_t (*vslot_411)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014c5c
    int64_t (*vslot_412)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014c70
    int64_t (*vslot_413)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100014cd8
    int64_t (*vslot_414)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014cec
    int64_t (*vslot_415)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d28
    int64_t (*vslot_416)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d40
    int64_t (*vslot_417)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d7c
    int64_t (*vslot_418)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014dd0
    int64_t (*vslot_419)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014e0c
    int64_t (*vslot_420)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014f50
    int64_t (*vslot_421)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100015120
    int64_t (*vslot_422)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100015134
    int64_t (*vslot_423)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x10001529c
    int64_t (*vslot_424)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100015498
    int64_t (*vslot_425)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154a0
    int64_t (*vslot_426)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154a4
    int64_t (*vslot_427)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154ac
    int64_t (*vslot_428)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x1000154c0
    int64_t (*vslot_429)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015628
    int64_t (*vslot_430)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015824
    int64_t (*vslot_431)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10001582c
    int64_t (*vslot_432)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015830
    int64_t (*vslot_433)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015838
    int64_t (*vslot_434)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x10001584c
    int64_t (*vslot_435)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015888
    int64_t (*vslot_436)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000158b0
    int64_t (*vslot_437)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015918
    int64_t (*vslot_438)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000159ac
    int64_t (*vslot_439)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015a04
    int64_t (*vslot_440)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015afc
    int64_t (*vslot_441)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cb0
    int64_t (*vslot_442)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cb8
    int64_t (*vslot_443)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cbc
    int64_t (*vslot_444)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cc4
    int64_t (*vslot_445)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100015cd8
    int64_t (*vslot_446)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100015e40
    int64_t (*vslot_447)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x10001603c
    int64_t (*vslot_448)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016044
    int64_t (*vslot_449)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016048
    int64_t (*vslot_450)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016050
    int64_t (*vslot_451)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x100016064
    int64_t (*vslot_452)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x100016078
    int64_t (*vslot_453)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x1000160e4
    int64_t (*vslot_454)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x1000160f8
    int64_t (*vslot_455)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10001610c
    int64_t (*vslot_456)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100016120
    int64_t (*vslot_457)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100016134
    int64_t (*vslot_458)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100016148
    int64_t (*vslot_459)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x10001615c
    int64_t (*vslot_460)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000161c8
    int64_t (*vslot_461)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000161dc
    int64_t (*vslot_462)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x100016248
    int64_t (*vslot_463)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t withExtendedLifetime() (void* this_ptr); // @ 0x1000162b4
    int64_t (*vslot_464)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ee::g() (void* this_ptr); // @ 0x1000162cc
    int64_t (*vslot_465)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ee() (void* this_ptr); // @ 0x100016388
    int64_t (*vslot_466)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ee() (void* this_ptr); // @ 0x100016490
    int64_t (*vslot_467)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x100016638
    int64_t (*vslot_468)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100016660
};

class swift {
public:
    const swift_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t main::bareModifierCommitDelayMs() (void* this_ptr); // @ 0x100001320
    virtual int64_t main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000132c
    virtual int64_t main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001360
    virtual int64_t main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001368
    virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000139c
    virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000013b0
    virtual int64_t main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001470
    virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000017ec
    virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001800
    virtual int64_t main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001850
    virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000018ac
    virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000018b8
    virtual int64_t main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001904
    virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000194c
    virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001958
    virtual int64_t main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019a4
    virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019ec
    virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000019f8
    virtual int64_t main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a44
    virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a8c
    virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001a94
    virtual int64_t main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001adc
    virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b24
    virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b2c
    virtual int64_t main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100001b74
    virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100001bbc
    virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100001c24
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x100002088
    virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x10000211c
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x10000215c
    virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100002204
    virtual int64_t main::BareModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x1000022f0
    virtual int64_t main::BareModifierMonitorSession::handle::FlagsChanged::_FD5FB8F3991F83E8040D3A5272A98557::eventKeyCode::flags::Int64::NSEvent() (void* this_ptr); // @ 0x1000022f8
    virtual int64_t NSEvent() (void* this_ptr); // @ 0x100002740
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x10000286c
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x1000028d0
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100002964
    virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x1000029d0
    virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x100002b98
    virtual int64_t main::BareModifierMonitorSession::handleTargetUp::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100002bd4
    virtual int64_t main::BareModifierMonitorSession::cancelPress::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000301c
    virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x10000322c
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100003a80
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100003aec
    virtual int64_t main::BareModifierTrigger::requiresKeyDownMonitor() (void* this_ptr); // @ 0x100003b60
    virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100003bdc
    virtual int64_t main::BareModifierMonitorSession::commitPress::_FD5FB8F3991F83E8040D3A5272A98557::generation() (void* this_ptr); // @ 0x100003e54
    virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100004070
    virtual int64_t OS_dispatch_queue::Dispatch::asyncAfter::deadline::qos::flags::execute() (void* this_ptr); // @ 0x100004178
    virtual int64_t OS_dispatch_queue::Dispatch::asyncAfter::deadline::qos::flags::execute() (void* this_ptr); // @ 0x10000418c
    virtual int64_t main::BareModifierMonitorSession::removeKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x100004228
    virtual int64_t OS_dispatch_queue() (void* this_ptr); // @ 0x100004354
    virtual int64_t main::BareModifierMonitorSession::handleTargetDown::_FD5FB8F3991F83E8040D3A5272A98557() (void* this_ptr); // @ 0x1000043f0
    virtual int64_t main::BareModifierMonitorSession::handle::KeyDown::_FD5FB8F3991F83E8040D3A5272A98557::event::Code::Int64() (void* this_ptr); // @ 0x100004458
    virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557::NSEvent() (void* this_ptr); // @ 0x100004654
    virtual int64_t main::BareModifierMonitorSession::installKeyDown::IfNeeded::_FD5FB8F3991F83E8040D3A5272A98557::NSEvent() (void* this_ptr); // @ 0x100004724
    virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x100004788
    virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x1000047ac
    virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x1000047b0
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x1000047b4
    virtual int64_t NSEventMask::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x1000047f4
    virtual int64_t NSEventMask::SetAlgebra::union() (void* this_ptr); // @ 0x10000482c
    virtual int64_t NSEventMask::SetAlgebra::intersection() (void* this_ptr); // @ 0x100004868
    virtual int64_t NSEventMask::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x1000048a4
    virtual int64_t NSEventMask::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x1000048e0
    virtual int64_t OptionSet::Element::FixedWidthInteger::RawValue::insert::inserted::memberAfterInsert() (void* this_ptr); // @ 0x10000492c
    virtual int64_t NSEventMask::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x100004b10
    virtual int64_t NSEventMask::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x100004b4c
    virtual int64_t NSEventMask::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100004b88
    virtual int64_t NSEventMask::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100004bc8
    virtual int64_t NSEventMask::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x100004c08
    virtual int64_t NSEventMask::SetAlgebra::subtracting() (void* this_ptr); // @ 0x100004c48
    virtual int64_t NSEventMask::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x100004c5c
    virtual int64_t NSEventMask::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100004c74
    virtual int64_t NSEventMask::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100004c8c
    virtual int64_t NSEventMask::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100004ca4
    virtual int64_t NSEventMask::SetAlgebra::Element() (void* this_ptr); // @ 0x100004cbc
    virtual int64_t NSEventMask::SetAlgebra::subtract() (void* this_ptr); // @ 0x100004cf4
    virtual int64_t NSEventModifierFlags::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100004d08
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100004d34
    virtual int64_t NSEventModifierFlags::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x100004d74
    virtual int64_t NSEventModifierFlags::SetAlgebra::union() (void* this_ptr); // @ 0x100004dac
    virtual int64_t NSEventModifierFlags::SetAlgebra::intersection() (void* this_ptr); // @ 0x100004de8
    virtual int64_t NSEventModifierFlags::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x100004e24
    virtual int64_t NSEventModifierFlags::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x100004e60
    virtual int64_t NSEventModifierFlags::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x100004eac
    virtual int64_t NSEventModifierFlags::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x100004ee8
    virtual int64_t NSEventModifierFlags::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100004f24
    virtual int64_t NSEventModifierFlags::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100004f64
    virtual int64_t NSEventModifierFlags::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x100004fa4
    virtual int64_t NSEventModifierFlags::SetAlgebra::subtracting() (void* this_ptr); // @ 0x100004fe4
    virtual int64_t NSEventModifierFlags::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x100004ff8
    virtual int64_t NSEventModifierFlags::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100005010
    virtual int64_t NSEventModifierFlags::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100005028
    virtual int64_t NSEventModifierFlags::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100005040
    virtual int64_t NSEventModifierFlags::SetAlgebra::Element() (void* this_ptr); // @ 0x100005058
    virtual int64_t NSEventModifierFlags::SetAlgebra::subtract() (void* this_ptr); // @ 0x100005090
    virtual int64_t NSEventMask::ee() (void* this_ptr); // @ 0x1000050a4
    virtual int64_t NSEventMask::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000050ec
    virtual int64_t NSEventMask::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100005128
    virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x100005154
    virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x100005184
    virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x1000051b0
    virtual int64_t NSEventModifierFlags::ee() (void* this_ptr); // @ 0x1000051b4
    virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000051fc
    virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x100005238
    virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x100005268
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100005294
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x1000052a8
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100005314
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100005328
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x10000533c
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000053a8
    virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000053bc
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100005428
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x10000543c
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x1000054a8
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x1000054bc
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x1000054d0
    virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000553c
    virtual int64_t NSEventMask::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100005550
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x1000055bc
    virtual int64_t UInt64::FixedWidthInteger() (void* this_ptr); // @ 0x100005628
    virtual int64_t us::FixedWidthInteger() (void* this_ptr); // @ 0x10000568c
    virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x1000056f0
    virtual int64_t main::BareModifierMonitorSession() (void* this_ptr); // @ 0x1000056f4
    virtual int64_t _endMutation() (void* this_ptr); // @ 0x10000571c
    virtual int64_t _allocateUninitialized::Dispatch() (void* this_ptr); // @ 0x100005728
    virtual int64_t Dispatch() (void* this_ptr); // @ 0x100005818
    virtual int64_t Dispatch() (void* this_ptr); // @ 0x100005904
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::__derived_enum_equals() (void* this_ptr); // @ 0x1000059f0
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hash::into::Hasher() (void* this_ptr); // @ 0x100005ad8
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hashValue() (void* this_ptr); // @ 0x100005b88
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005bd0
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::ee() (void* this_ptr); // @ 0x100005c38
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hashValue() (void* this_ptr); // @ 0x100005c58
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::hash::into::Hasher() (void* this_ptr); // @ 0x100005c70
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x100005c88
    virtual int64_t main::DoubleModifierMonitorSession::key::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005c9c
    virtual int64_t main::DoubleModifierMonitorSession::trigger::_062EE8D89A5C907D105C6F75222D1454::Bare::Trigger() (void* this_ptr); // @ 0x100005ca4
    virtual int64_t main::DoubleModifierMonitorSession::emitLine::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005cac
    virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005ce0
    virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005cf4
    virtual int64_t main::DoubleModifierMonitorSession::flagsChanged::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100005d44
    virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005da0
    virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005dac
    virtual int64_t main::DoubleModifierMonitorSession::state::_062EE8D89A5C907D105C6F75222D1454::State() (void* this_ptr); // @ 0x100005e00
    virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100005e54
    virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x100005eb4
    virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x10000622c
    virtual int64_t main::DoubleModifierMonitorSession::key::trigger::emitLine() (void* this_ptr); // @ 0x10000632c
    virtual int64_t main::DoubleModifierMonitorSession::handleFlagsChanged::_062EE8D89A5C907D105C6F75222D1454::eventKeyCode::flags::timestamp::Int64::NSEvent() (void* this_ptr); // @ 0x100006334
    virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x10000676c
    virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x100006860
    virtual int64_t main::DoubleModifierKey::keyCodes::_062EE8D89A5C907D105C6F75222D1454::Int64() (void* this_ptr); // @ 0x10000689c
    virtual int64_t main::DoubleModifierMonitorSession::handleOther::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000069c0
    virtual int64_t main::DoubleModifierKey::modifierFlags::_062EE8D89A5C907D105C6F75222D1454::NSEvent() (void* this_ptr); // @ 0x100006b90
    virtual int64_t main::chordModifierFlags::_062EE8D89A5C907D105C6F75222D1454::NSEvent() (void* this_ptr); // @ 0x100006c10
    virtual int64_t main::DoubleModifierKey::modifierFlag::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100006c60
    virtual int64_t main::DoubleModifierMonitorSession::handleBothDown::_062EE8D89A5C907D105C6F75222D1454::timestamp::nonTarget::Is() (void* this_ptr); // @ 0x100006cc4
    virtual int64_t main::DoubleModifierMonitorSession::handleOneDown::_062EE8D89A5C907D105C6F75222D1454::timestamp::nonTarget::Is() (void* this_ptr); // @ 0x100007054
    virtual int64_t main::DoubleModifierMonitorSession::handleBothUp::_062EE8D89A5C907D105C6F75222D1454::timestamp() (void* this_ptr); // @ 0x100007320
    virtual int64_t main::DoubleModifierMonitorSession::non::KeyWasPressed::_062EE8D89A5C907D105C6F75222D1454::after::before() (void* this_ptr); // @ 0x1000075f8
    virtual int64_t main::chordModifierFlags::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000076cc
    virtual int64_t main::leftOptionModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007758
    virtual int64_t main::rightOptionModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007764
    virtual int64_t main::leftShiftModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007770
    virtual int64_t main::rightShiftModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x10000777c
    virtual int64_t main::leftCommandModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007788
    virtual int64_t main::rightCommandModifierMask::_062EE8D89A5C907D105C6F75222D1454::NSEvent::Flags() (void* this_ptr); // @ 0x100007794
    virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x1000077a0
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x1000077dc
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007914
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007ad0
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007af0
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b08
    virtual int64_t main::DoubleModifierMonitorSession::State::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b7c
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007b9c
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007d04
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f00
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f08
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f0c
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007f14
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100007f28
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x100007f3c
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100007f50
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100007f64
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100007f78
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x100007f8c
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x100007fa0
    virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100007fb4
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007fc8
    virtual int64_t main::DoubleModifierMonitorSession::PressStatus::_062EE8D89A5C907D105C6F75222D1454() (void* this_ptr); // @ 0x100007fdc
    virtual int64_t main::DoubleModifierMonitorSession() (void* this_ptr); // @ 0x100008044
    virtual int64_t main::NativeKeyHotkeyMonitor::key::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x10000806c
    virtual int64_t main::NativeKeyHotkeyMonitor::modifiers::_8C94E36C253333FA9227D10169F4D14F::NSEventModifierFlags() (void* this_ptr); // @ 0x1000080a0
    virtual int64_t main::NativeKeyHotkeyMonitor::emitLine::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x1000080a8
    virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x1000080dc
    virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x1000080e4
    virtual int64_t main::NativeKeyHotkeyMonitor::tap::_8C94E36C253333FA9227D10169F4D14F::CFMachPortRef() (void* this_ptr); // @ 0x100008138
    virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x1000081ac
    virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x1000081b4
    virtual int64_t main::NativeKeyHotkeyMonitor::source::_8C94E36C253333FA9227D10169F4D14F::CFRunLoopSourceRef() (void* this_ptr); // @ 0x100008208
    virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x10000827c
    virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x100008298
    virtual int64_t main::NativeKeyHotkeyMonitor::consumed::_8C94E36C253333FA9227D10169F4D14F::UInt16() (void* this_ptr); // @ 0x1000082f8
    virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x100008358
    virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x100008364
    virtual int64_t main::NativeKeyHotkeyMonitor::pressed::_8C94E36C253333FA9227D10169F4D14F() (void* this_ptr); // @ 0x1000083b0
    virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags() (void* this_ptr); // @ 0x1000083f8
    virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags() (void* this_ptr); // @ 0x100008460
    virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x100008b54
    virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x100008b70
    virtual int64_t main::NativeKeyHotkeyMonitor::handle::_8C94E36C253333FA9227D10169F4D14F::Unmanaged::CGEventRef() (void* this_ptr); // @ 0x100008c24
    virtual int64_t main::NativeKeyHotkeyMonitor::key::modifiers::emitLine::NSEventModifierFlags::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x1000096c4
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x10000972c
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x1000097c0
    virtual int64_t NSEvent() (void* this_ptr); // @ 0x10000982c
    virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x10000988c
    virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x100009a84
    virtual int64_t main::NativeKeyHotkeyMonitor::shortcutModifiers::_8C94E36C253333FA9227D10169F4D14F::NSEventModifierFlags() (void* this_ptr); // @ 0x100009ac0
    virtual int64_t NSEvent::cgEvent::CGEventRef() (void* this_ptr); // @ 0x100009bcc
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x100009c20
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x100009cb4
    virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x100009d48
    virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x100009d78
    virtual int64_t main::NativeKeyHotkeyMonitor() (void* this_ptr); // @ 0x100009da8
    virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x100009dcc
    virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x100009e60
    virtual int64_t CGEventType::ee() (void* this_ptr); // @ 0x100009ef4
    virtual int64_t NSEventType::ee() (void* this_ptr); // @ 0x100009f3c
    virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x100009f84
    virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x100009fc0
    virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x100009fec
    virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x10000a018
    virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x10000a048
    virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x10000a06c
    virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x10000a098
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000a0b4
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000a0c8
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x10000a0dc
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000a0f0
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x10000a104
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x10000a170
    virtual int64_t main::readQuickChatHotkeyPreferences() (void* this_ptr); // @ 0x10000a1dc
    virtual int64_t NSNull() (void* this_ptr); // @ 0x10000a800
    virtual int64_t NSNull() (void* this_ptr); // @ 0x10000a860
    virtual int64_t main::readQuickChatHotkeyPreferences() (void* this_ptr); // @ 0x10000a904
    virtual int64_t _ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x10000ae90
    virtual int64_t NSNumber() (void* this_ptr); // @ 0x10000af04
    virtual int64_t NSNull() (void* this_ptr); // @ 0x10000af64
    virtual int64_t main::ReleaseModifierMonitor::modifiers::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000af7c
    virtual int64_t main::ReleaseModifierMonitor::on::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000afa4
    virtual int64_t main::ReleaseModifierMonitor::key::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000afd8
    virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b00c
    virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b028
    virtual int64_t main::ReleaseModifierMonitor::keyCode::_FBBA50E09A10196EED1392F2F03BBA9E::UInt16() (void* this_ptr); // @ 0x10000b088
    virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b0e8
    virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b0fc
    virtual int64_t main::ReleaseModifierMonitor::monitor::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b14c
    virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b1a8
    virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b1b0
    virtual int64_t main::ReleaseModifierMonitor::keyTap::_FBBA50E09A10196EED1392F2F03BBA9E::CFMachPortRef() (void* this_ptr); // @ 0x10000b204
    virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b278
    virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b280
    virtual int64_t main::ReleaseModifierMonitor::keyTapSource::_FBBA50E09A10196EED1392F2F03BBA9E::CFRunLoop::Ref() (void* this_ptr); // @ 0x10000b2d4
    virtual int64_t main::ReleaseModifierMonitor::persistent::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b348
    virtual int64_t main::ReleaseModifierMonitor::persistent::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b46c
    virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b478
    virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b484
    virtual int64_t main::ReleaseModifierMonitor::wasDown::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b4d0
    virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b518
    virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b520
    virtual int64_t main::ReleaseModifierMonitor::last::At::_FBBA50E09A10196EED1392F2F03BBA9E() (void* this_ptr); // @ 0x10000b568
    virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b5b0
    virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b5b8
    virtual int64_t main::ReleaseModifierMonitor::pollTimer::_FBBA50E09A10196EED1392F2F03BBA9E::NSTimer() (void* this_ptr); // @ 0x10000b60c
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000b680
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000b6e8
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000c3ec
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000c4a8
    virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000c4b0
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000cb6c
    virtual int64_t main::ReleaseModifierMonitor::update::_FBBA50E09A10196EED1392F2F03BBA9E::isDown::at() (void* this_ptr); // @ 0x10000cdc8
    virtual int64_t main::ReleaseModifierMonitor::update::_FBBA50E09A10196EED1392F2F03BBA9E::isDown::at() (void* this_ptr); // @ 0x10000ce20
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000cff0
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000d058
    virtual int64_t main::ReleaseModifierMonitor::modifiers::key::on() (void* this_ptr); // @ 0x10000d10c
    virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000d114
    virtual int64_t NSTimer() (void* this_ptr); // @ 0x10000d3b8
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000d484
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000d7d4
    virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded::UInt16() (void* this_ptr); // @ 0x10000d810
    virtual int64_t map() (void* this_ptr); // @ 0x10000d850
    virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000da7c
    virtual int64_t main::ReleaseModifier::flag::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent::Flags() (void* this_ptr); // @ 0x10000daf4
    virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000db78
    virtual int64_t main::matchesShortcutKey::event::NSEvent() (void* this_ptr); // @ 0x10000dc0c
    virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f304
    virtual int64_t dropFirst::SubSequence() (void* this_ptr); // @ 0x10000f398
    virtual int64_t FixedWidthInteger::radix() (void* this_ptr); // @ 0x10000f3b0
    virtual int64_t SS() (void* this_ptr); // @ 0x10000f3cc
    virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f430
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10000f458
    virtual int64_t main::ReleaseModifierMonitor::handleEvent::_FBBA50E09A10196EED1392F2F03BBA9E::NSEvent() (void* this_ptr); // @ 0x10000f4cc
    virtual int64_t main::ReleaseModifierMonitor::emitCurrent::IfNeeded() (void* this_ptr); // @ 0x10000f4f4
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10000f51c
    virtual int64_t NSTimer() (void* this_ptr); // @ 0x10000f544
    virtual int64_t SS() (void* this_ptr); // @ 0x10000f574
    virtual int64_t is::FixedWidthInteger() (void* this_ptr); // @ 0x10000f5d8
    virtual int64_t sS() (void* this_ptr); // @ 0x10000f63c
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000f6a0
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x10000f6c4
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x10000f6d8
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000f6ec
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10000f700
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x10000f714
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000f728
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x10000f73c
    virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x10000f750
    virtual int64_t Error() (void* this_ptr); // @ 0x10000f764
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x10000f808
    virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x10001065c
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x10001145c
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000114ac
    virtual int64_t UTF8View() (void* this_ptr); // @ 0x100011528
    virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x10001158c
    virtual int64_t main::MonitorMode::requiresInputMonitoring::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100011604
    virtual int64_t print::separator::terminator::St() (void* this_ptr); // @ 0x1000117f0
    virtual int64_t print::separator::terminator::St::_() (void* this_ptr); // @ 0x10001181c
    virtual int64_t main::emitLine() (void* this_ptr); // @ 0x100011848
    virtual int64_t main::value::after() (void* this_ptr); // @ 0x10001191c
    virtual int64_t main() (void* this_ptr); // @ 0x100011abc
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100011b88
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100011bf0
    virtual int64_t main() (void* this_ptr); // @ 0x100011c24
    virtual int64_t withExtendedLifetime() (void* this_ptr); // @ 0x100011c78
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100011d74
    virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x100011df0
    virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100011e84
    virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x100011ef0
    virtual int64_t main::BareModifierKey::modifierFlag::NSEvent::Flags() (void* this_ptr); // @ 0x100011f68
    virtual int64_t main::BareModifierKey::keyCodes::Int64() (void* this_ptr); // @ 0x100011f6c
    virtual int64_t main::BareModifierKey::rawValue() (void* this_ptr); // @ 0x100011f94
    virtual int64_t Element::split::separator::maxSplits::omittingEmptySubsequences::SubSequence() (void* this_ptr); // @ 0x100012ed8
    virtual int64_t Element::split::separator::maxSplits::omittingEmptySubsequences::SubSequence::_() (void* this_ptr); // @ 0x100012eec
    virtual int64_t te() (void* this_ptr); // @ 0x100012f04
    virtual int64_t main::DoubleModifierKey::rawValue() (void* this_ptr); // @ 0x100012f1c
    virtual int64_t main::DoubleModifierKey::rawValue() (void* this_ptr); // @ 0x100013094
    virtual int64_t main::DoubleModifierKey::ee() (void* this_ptr); // @ 0x10001315c
    virtual int64_t main::DoubleModifierKey::hashValue() (void* this_ptr); // @ 0x100013170
    virtual int64_t main::DoubleModifierKey::hash::into::Hasher() (void* this_ptr); // @ 0x1000131ac
    virtual int64_t main::DoubleModifierKey::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x1000131f0
    virtual int64_t main::DoubleModifierKey::rawValue::Raw() (void* this_ptr); // @ 0x100013234
    virtual int64_t main::DoubleModifierKey::rawValue::Raw() (void* this_ptr); // @ 0x100013268
    virtual int64_t main::ReleaseModifier::rawValue() (void* this_ptr); // @ 0x100013298
    virtual int64_t main::ReleaseModifier::rawValue() (void* this_ptr); // @ 0x100013458
    virtual int64_t main::ReleaseModifier::ee() (void* this_ptr); // @ 0x10001355c
    virtual int64_t main::ReleaseModifier::hashValue() (void* this_ptr); // @ 0x100013570
    virtual int64_t main::ReleaseModifier::hash::into::Hasher() (void* this_ptr); // @ 0x1000135ac
    virtual int64_t main::ReleaseModifier::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x1000135f0
    virtual int64_t main::ReleaseModifier::rawValue::Raw() (void* this_ptr); // @ 0x100013634
    virtual int64_t main::ReleaseModifier::rawValue::Raw() (void* this_ptr); // @ 0x100013668
    virtual int64_t main::BareModifierTrigger::__derived_enum_equals() (void* this_ptr); // @ 0x100013698
    virtual int64_t main::BareModifierTrigger::hash::into::Hasher() (void* this_ptr); // @ 0x1000137c8
    virtual int64_t main::BareModifierTrigger::hashValue() (void* this_ptr); // @ 0x10001389c
    virtual int64_t main::BareModifierTrigger::ee() (void* this_ptr); // @ 0x1000138e4
    virtual int64_t main::BareModifierTrigger::hashValue() (void* this_ptr); // @ 0x100013904
    virtual int64_t main::BareModifierTrigger::hash::into::Hasher() (void* this_ptr); // @ 0x10001391c
    virtual int64_t main::BareModifierTrigger::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x100013934
    virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x100013948
    virtual int64_t Never() (void* this_ptr); // @ 0x100013984
    virtual int64_t map::Element() (void* this_ptr); // @ 0x1000139dc
    virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x100014044
    virtual int64_t main::bareModifierTrigger::Bare() (void* this_ptr); // @ 0x1000140c8
    virtual int64_t main::monitorMode::Monitor() (void* this_ptr); // @ 0x1000142d4
    virtual int64_t Never() (void* this_ptr); // @ 0x100014310
    virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100014534
    virtual int64_t NSJSONWritingOptions::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x100014574
    virtual int64_t NSJSONWritingOptions::SetAlgebra::union() (void* this_ptr); // @ 0x1000145ac
    virtual int64_t NSJSONWritingOptions::SetAlgebra::intersection() (void* this_ptr); // @ 0x1000145e8
    virtual int64_t NSJSONWritingOptions::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x100014624
    virtual int64_t NSJSONWritingOptions::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x100014660
    virtual int64_t NSJSONWritingOptions::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x1000146ac
    virtual int64_t NSJSONWritingOptions::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x1000146e8
    virtual int64_t NSJSONWritingOptions::SetAlgebra::formUnion() (void* this_ptr); // @ 0x100014724
    virtual int64_t NSJSONWritingOptions::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x100014764
    virtual int64_t NSJSONWritingOptions::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x1000147a4
    virtual int64_t NSJSONWritingOptions::SetAlgebra::subtracting() (void* this_ptr); // @ 0x1000147e4
    virtual int64_t NSJSONWritingOptions::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x1000147f8
    virtual int64_t NSJSONWritingOptions::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x100014810
    virtual int64_t NSJSONWritingOptions::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x100014828
    virtual int64_t NSJSONWritingOptions::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x100014840
    virtual int64_t NSJSONWritingOptions::SetAlgebra::Element() (void* this_ptr); // @ 0x100014858
    virtual int64_t NSJSONWritingOptions::SetAlgebra::subtract() (void* this_ptr); // @ 0x100014890
    virtual int64_t NSJSONWritingOptions::ee() (void* this_ptr); // @ 0x1000148a4
    virtual int64_t NSJSONWritingOptions::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x1000148ec
    virtual int64_t NSJSONWritingOptions::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x100014928
    virtual int64_t NSJSONWritingOptions::rawValue() (void* this_ptr); // @ 0x100014954
    virtual int64_t NSJSONWritingOptions::rawValue::Raw() (void* this_ptr); // @ 0x100014958
    virtual int64_t NSJSONWritingOptions::rawValue::Raw() (void* this_ptr); // @ 0x100014988
    virtual int64_t NSJSONWritingOptions::rawValue() (void* this_ptr); // @ 0x1000149b4
    virtual int64_t Never() (void* this_ptr); // @ 0x1000149b8
    virtual int64_t IndexingIterator() (void* this_ptr); // @ 0x1000149e4
    virtual int64_t Int64() (void* this_ptr); // @ 0x100014a0c
    virtual int64_t Int64() (void* this_ptr); // @ 0x100014a34
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014aa8
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014b10
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100014b78
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014be0
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100014bf4
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014c5c
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100014c70
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100014cd8
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014cec
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d28
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d40
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014d7c
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014dd0
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014e0c
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100014f50
    virtual int64_t main::BareModifierKey() (void* this_ptr); // @ 0x100015120
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100015134
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x10001529c
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x100015498
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154a0
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154a4
    virtual int64_t main::DoubleModifierKey() (void* this_ptr); // @ 0x1000154ac
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x1000154c0
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015628
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015824
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x10001582c
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015830
    virtual int64_t main::ReleaseModifier() (void* this_ptr); // @ 0x100015838
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x10001584c
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015888
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000158b0
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015918
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x1000159ac
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015a04
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015afc
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cb0
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cb8
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cbc
    virtual int64_t main::MonitorMode() (void* this_ptr); // @ 0x100015cc4
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100015cd8
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100015e40
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x10001603c
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016044
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016048
    virtual int64_t main::BareModifierTrigger() (void* this_ptr); // @ 0x100016050
    virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x100016064
    virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x100016078
    virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x1000160e4
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x1000160f8
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x10001610c
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x100016120
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x100016134
    virtual int64_t NSJSONWritingOptions::SetAlgebra() (void* this_ptr); // @ 0x100016148
    virtual int64_t NSJSONWritingOptions() (void* this_ptr); // @ 0x10001615c
    virtual int64_t NSJSONWritingOptions::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000161c8
    virtual int64_t NSJSONWritingOptions::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x1000161dc
    virtual int64_t NSJSONWritingOptions::OptionSet() (void* this_ptr); // @ 0x100016248
    virtual int64_t withExtendedLifetime() (void* this_ptr); // @ 0x1000162b4
    virtual int64_t ee::g() (void* this_ptr); // @ 0x1000162cc
    virtual int64_t ee() (void* this_ptr); // @ 0x100016388
    virtual int64_t ee() (void* this_ptr); // @ 0x100016490
    virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x100016638
    virtual int64_t main::ReleaseModifierMonitor() (void* this_ptr); // @ 0x100016660
};

