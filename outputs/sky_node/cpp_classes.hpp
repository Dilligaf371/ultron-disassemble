// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : /Applications/ChatGPT.app/Contents/Resources/native/sky.node
// Classes Found : 100 | Virtual Dispatch Sites: 256
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_104_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x181bc (offset +0x10)
};

class PolymoObject_104 {
public:
    const PolymoObject_104_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x181bc (offset +0x10)
};

struct PolymoObject_110_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x141a4 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16170 (offset +0x10)
};

class PolymoObject_110 {
public:
    const PolymoObject_110_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x141a4 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16170 (offset +0x10)
};

struct PolymoObject_14_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39030 (offset +0x10)
};

class PolymoObject_14 {
public:
    const PolymoObject_14_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39030 (offset +0x10)
};

struct PolymoObject_140_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40170 (offset +0x0)
};

class PolymoObject_140 {
public:
    const PolymoObject_140_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40170 (offset +0x0)
};

struct PolymoObject_168_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b1d4 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b25c (offset +0x20)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b280 (offset +0x10)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b2b8 (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b2ec (offset +0x10)
};

class PolymoObject_168 {
public:
    const PolymoObject_168_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b1d4 (offset +0x18)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b25c (offset +0x20)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b280 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b2b8 (offset +0x8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b2ec (offset +0x10)
};

struct PolymoObject_174_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0xb19c (offset +0x0)
};

class PolymoObject_174 {
public:
    const PolymoObject_174_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0xb19c (offset +0x0)
};

struct PolymoObject_1ac_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x31e0 (offset +0x0)
};

class PolymoObject_1ac {
public:
    const PolymoObject_1ac_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x31e0 (offset +0x0)
};

struct PolymoObject_1b4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4329c (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x432ec (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43404 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43474 (offset +0x268)
};

class PolymoObject_1b4 {
public:
    const PolymoObject_1b4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4329c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x432ec (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43404 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43474 (offset +0x268)
};

struct PolymoObject_26c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x20 @ 0x32d8 (offset +0x0)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b53c (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b604 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b770 (offset +0x268)
};

class PolymoObject_26c {
public:
    const PolymoObject_26c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x20 @ 0x32d8 (offset +0x0)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b53c (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b604 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b770 (offset +0x268)
};

struct PolymoObject_278_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d374 (offset +0x10)
};

class PolymoObject_278 {
public:
    const PolymoObject_278_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d374 (offset +0x10)
};

struct PolymoObject_2ac_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x432c (offset +0x0)
};

class PolymoObject_2ac {
public:
    const PolymoObject_2ac_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x432c (offset +0x0)
};

struct PolymoObject_2dc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a3b0 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a3d8 (offset +0x10)
};

class PolymoObject_2dc {
public:
    const PolymoObject_2dc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a3b0 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a3d8 (offset +0x10)
};

struct PolymoObject_2f0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a320 (offset +0x268)
};

class PolymoObject_2f0 {
public:
    const PolymoObject_2f0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a320 (offset +0x268)
};

struct PolymoObject_32c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b364 (offset +0x8)
};

class PolymoObject_32c {
public:
    const PolymoObject_32c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b364 (offset +0x8)
};

struct PolymoObject_380_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_454(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x153f4 (offset +0xe30)
};

class PolymoObject_380 {
public:
    const PolymoObject_380_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_454(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x153f4 (offset +0xe30)
};

struct PolymoObject_39c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c4d0 (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c550 (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c5a0 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c5e0 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c7a8 (offset +0x270)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_17(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cce4 (offset +0x88)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cd3c (offset +0x270)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3ce7c (offset +0x270)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3ceac (offset +0x270)
};

class PolymoObject_39c {
public:
    const PolymoObject_39c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c4d0 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c550 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c5a0 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c5e0 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c7a8 (offset +0x270)
    virtual int64_t vfunc_slot_17(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cce4 (offset +0x88)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cd3c (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3ce7c (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3ceac (offset +0x270)
};

struct PolymoObject_3a0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4545c (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4549c (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45520 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45560 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4568c (offset +0x268)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4570c (offset +0x268)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45774 (offset +0x268)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4580c (offset +0x270)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45878 (offset +0x268)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x458bc (offset +0x268)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45984 (offset +0x268)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45ad8 (offset +0x268)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45b3c (offset +0x268)
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45cf4 (offset +0x268)
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45d10 (offset +0x268)
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45d2c (offset +0x268)
};

class PolymoObject_3a0 {
public:
    const PolymoObject_3a0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4545c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4549c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45520 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45560 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4568c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4570c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45774 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4580c (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45878 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x458bc (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45984 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45ad8 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45b3c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45cf4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45d10 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45d2c (offset +0x268)
};

struct PolymoObject_3c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x4b094 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b0b4 (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b11c (offset +0x8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b12c (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b180 (offset +0x8)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b190 (offset +0x8)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b1d0 (offset +0x8)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b1e0 (offset +0x8)
};

class PolymoObject_3c {
public:
    const PolymoObject_3c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x4b094 (offset +0x1d8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b0b4 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b11c (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b12c (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b180 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b190 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b1d0 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4b1e0 (offset +0x8)
};

struct PolymoObject_3cc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b404 (offset +0x270)
};

class PolymoObject_3cc {
public:
    const PolymoObject_3cc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b404 (offset +0x270)
};

struct PolymoObject_414_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f44c (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f458 (offset +0x8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f470 (offset +0x268)
};

class PolymoObject_414 {
public:
    const PolymoObject_414_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f44c (offset +0x270)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f458 (offset +0x8)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f470 (offset +0x268)
};

struct PolymoObject_420_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b438 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b46c (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b484 (offset +0x268)
};

class PolymoObject_420 {
public:
    const PolymoObject_420_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b438 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b46c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b484 (offset +0x268)
};

struct PolymoObject_424_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x44a4 (offset +0x0)
};

class PolymoObject_424 {
public:
    const PolymoObject_424_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x44a4 (offset +0x0)
};

struct PolymoObject_448_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x15488 (offset +0x10)
};

class PolymoObject_448 {
public:
    const PolymoObject_448_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x15488 (offset +0x10)
};

struct PolymoObject_454_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_10(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x494cc (offset +0x50)
};

class PolymoObject_454 {
public:
    const PolymoObject_454_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_10(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x494cc (offset +0x50)
};

struct PolymoObject_49c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b4d4 (offset +0x270)
};

class PolymoObject_49c {
public:
    const PolymoObject_49c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b4d4 (offset +0x270)
};

struct PolymoObject_4ac_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f62c (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f678 (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f6bc (offset +0x270)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f754 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f79c (offset +0x270)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f83c (offset +0x268)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f890 (offset +0x268)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f984 (offset +0x270)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f9d4 (offset +0x268)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f9f8 (offset +0x268)
};

class PolymoObject_4ac {
public:
    const PolymoObject_4ac_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f62c (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f678 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f6bc (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f754 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f79c (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f83c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f890 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f984 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f9d4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f9f8 (offset +0x268)
};

struct PolymoObject_4c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a124 (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a134 (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a190 (offset +0x268)
};

class PolymoObject_4c {
public:
    const PolymoObject_4c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a124 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a134 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a190 (offset +0x268)
};

struct PolymoObject_4f0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b508 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b53c (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b554 (offset +0x268)
};

class PolymoObject_4f0 {
public:
    const PolymoObject_4f0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b508 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b53c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b554 (offset +0x268)
};

struct PolymoObject_508_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3d9a0 (offset +0x268)
};

class PolymoObject_508 {
public:
    const PolymoObject_508_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3d9a0 (offset +0x268)
};

struct PolymoObject_510_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a688 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a6d4 (offset +0x10)
};

class PolymoObject_510 {
public:
    const PolymoObject_510_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a688 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a6d4 (offset +0x10)
};

struct PolymoObject_530_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1b60c (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x435f8 (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4381c (offset +0x268)
};

class PolymoObject_530 {
public:
    const PolymoObject_530_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1b60c (offset +0x10)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x435f8 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4381c (offset +0x268)
};

struct PolymoObject_588_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a5cc (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a5e4 (offset +0x268)
};

class PolymoObject_588 {
public:
    const PolymoObject_588_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a5cc (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a5e4 (offset +0x268)
};

struct PolymoObject_5c8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4648 (offset +0x0)
};

class PolymoObject_5c8 {
public:
    const PolymoObject_5c8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4648 (offset +0x0)
};

struct PolymoObject_5dc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17604 (offset +0x10)
};

class PolymoObject_5dc {
public:
    const PolymoObject_5dc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17604 (offset +0x10)
};

struct PolymoObject_5ec_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x497cc (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49870 (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49934 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49944 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49984 (offset +0x268)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x499f4 (offset +0x268)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b34 (offset +0x268)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b44 (offset +0x268)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b54 (offset +0x268)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b78 (offset +0x268)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b88 (offset +0x268)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49bac (offset +0x268)
};

class PolymoObject_5ec {
public:
    const PolymoObject_5ec_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x497cc (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49870 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49934 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49944 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49984 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x499f4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b34 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b44 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b54 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b78 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49b88 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49bac (offset +0x268)
};

struct PolymoObject_614_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41630 (offset +0x268)
};

class PolymoObject_614 {
public:
    const PolymoObject_614_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41630 (offset +0x268)
};

struct PolymoObject_628_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_8(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x3967c (offset +0x40)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a648 (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a66c (offset +0x268)
};

class PolymoObject_628 {
public:
    const PolymoObject_628_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_8(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x3967c (offset +0x40)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a648 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4a66c (offset +0x268)
};

struct PolymoObject_644_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41660 (offset +0x268)
};

class PolymoObject_644 {
public:
    const PolymoObject_644_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41660 (offset +0x268)
};

struct PolymoObject_654_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1869c (offset +0x10)
};

class PolymoObject_654 {
public:
    const PolymoObject_654_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1869c (offset +0x10)
};

struct PolymoObject_6f8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x14760 (offset +0x10)
};

class PolymoObject_6f8 {
public:
    const PolymoObject_6f8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x14760 (offset +0x10)
};

struct PolymoObject_704_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17730 (offset +0x10)
};

class PolymoObject_704 {
public:
    const PolymoObject_704_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17730 (offset +0x10)
};

struct PolymoObject_728_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46790 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46960 (offset +0x8)
};

class PolymoObject_728 {
public:
    const PolymoObject_728_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46790 (offset +0x1d8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46960 (offset +0x8)
};

struct PolymoObject_76c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x4824 (offset +0x0)
};

class PolymoObject_76c {
public:
    const PolymoObject_76c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x4824 (offset +0x0)
};

struct PolymoObject_78_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x450d0 (offset +0x1d8)
};

class PolymoObject_78 {
public:
    const PolymoObject_78_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x450d0 (offset +0x1d8)
};

struct PolymoObject_7a8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17874 (offset +0x10)
};

class PolymoObject_7a8 {
public:
    const PolymoObject_7a8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17874 (offset +0x10)
};

struct PolymoObject_7ac_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3a7cc (offset +0x0)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3a800 (offset +0x0)
};

class PolymoObject_7ac {
public:
    const PolymoObject_7ac_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3a7cc (offset +0x0)
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3a800 (offset +0x0)
};

struct PolymoObject_7bc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x407fc (offset +0x8)
};

class PolymoObject_7bc {
public:
    const PolymoObject_7bc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x407fc (offset +0x8)
};

struct PolymoObject_838_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x168b8 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16994 (offset +0x10)
};

class PolymoObject_838 {
public:
    const PolymoObject_838_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x168b8 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16994 (offset +0x10)
};

struct PolymoObject_87c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a8f8 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a964 (offset +0x10)
};

class PolymoObject_87c {
public:
    const PolymoObject_87c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a8f8 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a964 (offset +0x10)
};

struct PolymoObject_8e0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x21b50 (offset +0x10)
};

class PolymoObject_8e0 {
public:
    const PolymoObject_8e0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x21b50 (offset +0x10)
};

struct PolymoObject_958_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x179a0 (offset +0x10)
};

class PolymoObject_958 {
public:
    const PolymoObject_958_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x179a0 (offset +0x10)
};

struct PolymoObject_964_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42a18 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42a8c (offset +0x1d8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42ac4 (offset +0x1d8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42b24 (offset +0x1d8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42d88 (offset +0x10)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42da4 (offset +0x10)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x42dc4 (offset +0x10)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42de8 (offset +0x8)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42dfc (offset +0x8)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42e24 (offset +0x20)
};

class PolymoObject_964 {
public:
    const PolymoObject_964_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42a18 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42a8c (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42ac4 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x42b24 (offset +0x1d8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42d88 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42da4 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x42dc4 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42de8 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42dfc (offset +0x8)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42e24 (offset +0x20)
};

struct PolymoObject_978_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46998 (offset +0x8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x469cc (offset +0x8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46a04 (offset +0x8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46a3c (offset +0x8)
};

class PolymoObject_978 {
public:
    const PolymoObject_978_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46998 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x469cc (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46a04 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46a3c (offset +0x8)
};

struct PolymoObject_97c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d9e4 (offset +0x10)
};

class PolymoObject_97c {
public:
    const PolymoObject_97c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d9e4 (offset +0x10)
};

struct PolymoObject_9a0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x439d4 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a08 (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a54 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a88 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a98 (offset +0x268)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43ad4 (offset +0x268)
};

class PolymoObject_9a0 {
public:
    const PolymoObject_9a0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x439d4 (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a08 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a54 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a88 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43a98 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x43ad4 (offset +0x268)
};

struct PolymoObject_9c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x390fc (offset +0x38)
};

class PolymoObject_9c {
public:
    const PolymoObject_9c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x390fc (offset +0x38)
};

struct PolymoObject_9f0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x37a0c (offset +0x1d8)
};

class PolymoObject_9f0 {
public:
    const PolymoObject_9f0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x37a0c (offset +0x1d8)
};

struct PolymoObject_9fc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x25f48 (offset +0x10)
};

class PolymoObject_9fc {
public:
    const PolymoObject_9fc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x25f48 (offset +0x10)
};

struct PolymoObject_a04_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x19aa8 (offset +0x10)
};

class PolymoObject_a04 {
public:
    const PolymoObject_a04_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x19aa8 (offset +0x10)
};

struct PolymoObject_a14_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2ec78 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2ec94 (offset +0x10)
};

class PolymoObject_a14 {
public:
    const PolymoObject_a14_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2ec78 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2ec94 (offset +0x10)
};

struct PolymoObject_a28_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40ab0 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40ae0 (offset +0x1d8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40b10 (offset +0x1d8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40b68 (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bb0 (offset +0x8)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bc0 (offset +0x8)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bf0 (offset +0x10)
};

class PolymoObject_a28 {
public:
    const PolymoObject_a28_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40ab0 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40ae0 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x40b10 (offset +0x1d8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40b68 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bb0 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bc0 (offset +0x8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x40bf0 (offset +0x10)
};

struct PolymoObject_a38_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fa78 (offset +0x268)
};

class PolymoObject_a38 {
public:
    const PolymoObject_a38_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fa78 (offset +0x268)
};

struct PolymoObject_a4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b134 (offset +0x0)
};

class PolymoObject_a4 {
public:
    const PolymoObject_a4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b134 (offset +0x0)
};

struct PolymoObject_a8c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fab4 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fae0 (offset +0x268)
};

class PolymoObject_a8c {
public:
    const PolymoObject_a8c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fab4 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fae0 (offset +0x268)
};

struct PolymoObject_aa0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c174 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1b8 (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1dc (offset +0x270)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1ec (offset +0x270)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c214 (offset +0x268)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c224 (offset +0x268)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c238 (offset +0x270)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c270 (offset +0x268)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2a4 (offset +0x270)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2c4 (offset +0x268)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2d4 (offset +0x268)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2f4 (offset +0x268)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c304 (offset +0x268)
};

class PolymoObject_aa0 {
public:
    const PolymoObject_aa0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c174 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1b8 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1dc (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c1ec (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c214 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c224 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c238 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c270 (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2a4 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2c4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2d4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c2f4 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3c304 (offset +0x268)
};

struct PolymoObject_af4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb48 (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb84 (offset +0x270)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb9c (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fbac (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fbe8 (offset +0x270)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc3c (offset +0x270)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc58 (offset +0x270)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc78 (offset +0x268)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc88 (offset +0x268)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc98 (offset +0x268)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fca8 (offset +0x268)
};

class PolymoObject_af4 {
public:
    const PolymoObject_af4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb48 (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb84 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fb9c (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fbac (offset +0x268)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fbe8 (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc3c (offset +0x270)
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc58 (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc78 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc88 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fc98 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3fca8 (offset +0x268)
};

struct PolymoObject_b1c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1ac6c (offset +0x10)
};

class PolymoObject_b1c {
public:
    const PolymoObject_b1c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1ac6c (offset +0x10)
};

struct PolymoObject_b80_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bb8 (offset +0x30)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bd8 (offset +0x20)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bf4 (offset +0x38)
};

class PolymoObject_b80 {
public:
    const PolymoObject_b80_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bb8 (offset +0x30)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bd8 (offset +0x20)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47bf4 (offset +0x38)
};

struct PolymoObject_bb8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x21fc0 (offset +0x10)
};

class PolymoObject_bb8 {
public:
    const PolymoObject_bb8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x21fc0 (offset +0x10)
};

struct PolymoObject_bd0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x19c24 (offset +0x10)
};

class PolymoObject_bd0 {
public:
    const PolymoObject_bd0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x19c24 (offset +0x10)
};

struct PolymoObject_bfc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d064 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d0a4 (offset +0x10)
};

class PolymoObject_bfc {
public:
    const PolymoObject_bfc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d064 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1d0a4 (offset +0x10)
};

struct PolymoObject_c3c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47c70 (offset +0x30)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47c8c (offset +0x8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49d54 (offset +0x268)
};

class PolymoObject_c3c {
public:
    const PolymoObject_c3c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47c70 (offset +0x30)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47c8c (offset +0x8)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49d54 (offset +0x268)
};

struct PolymoObject_cd0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16d74 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16da8 (offset +0x10)
};

class PolymoObject_cd0 {
public:
    const PolymoObject_cd0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16d74 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x16da8 (offset +0x10)
};

struct PolymoObject_d0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a150 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a198 (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a1cc (offset +0x10)
};

class PolymoObject_d0 {
public:
    const PolymoObject_d0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a150 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a198 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1a1cc (offset +0x10)
};

struct PolymoObject_d00_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1adb0 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1adc8 (offset +0x10)
};

class PolymoObject_d00 {
public:
    const PolymoObject_d00_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1adb0 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1adc8 (offset +0x10)
};

struct PolymoObject_d1c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39d5c (offset +0x30)
};

class PolymoObject_d1c {
public:
    const PolymoObject_d1c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39d5c (offset +0x30)
};

struct PolymoObject_d68_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x38d9c (offset +0x0)
};

class PolymoObject_d68 {
public:
    const PolymoObject_d68_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x38d9c (offset +0x0)
};

struct PolymoObject_d70_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f3c8 (offset +0x18)
};

class PolymoObject_d70 {
public:
    const PolymoObject_d70_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3f3c8 (offset +0x18)
};

struct PolymoObject_d84_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49d98 (offset +0x268)
};

class PolymoObject_d84 {
public:
    const PolymoObject_d84_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x49d98 (offset +0x268)
};

struct PolymoObject_d9c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39db0 (offset +0x28)
};

class PolymoObject_d9c {
public:
    const PolymoObject_d9c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_5(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39db0 (offset +0x28)
};

struct PolymoObject_da8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x26dd4 (offset +0x10)
};

class PolymoObject_da8 {
public:
    const PolymoObject_da8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x26dd4 (offset +0x10)
};

struct PolymoObject_dbc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4addc (offset +0x270)
};

class PolymoObject_dbc {
public:
    const PolymoObject_dbc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4addc (offset +0x270)
};

struct PolymoObject_dc0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45de8 (offset +0x268)
};

class PolymoObject_dc0 {
public:
    const PolymoObject_dc0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45de8 (offset +0x268)
};

struct PolymoObject_dcc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2efa0 (offset +0x10)
};

class PolymoObject_dcc {
public:
    const PolymoObject_dcc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x2efa0 (offset +0x10)
};

struct PolymoObject_df0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x45e48 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x45e7c (offset +0x1d8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45ea0 (offset +0x20)
};

class PolymoObject_df0 {
public:
    const PolymoObject_df0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x45e48 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x45e7c (offset +0x1d8)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x45ea0 (offset +0x20)
};

struct PolymoObject_dfc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x26e34 (offset +0x10)
};

class PolymoObject_dfc {
public:
    const PolymoObject_dfc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x26e34 (offset +0x10)
};

struct PolymoObject_e38_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46ec8 (offset +0x1d8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46f28 (offset +0x1d8)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46f5c (offset +0x1d8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46fc8 (offset +0x268)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47034 (offset +0x268)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x470ec (offset +0x268)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47284 (offset +0x268)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4729c (offset +0x20)
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x472b8 (offset +0x38)
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x472d8 (offset +0x38)
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47300 (offset +0x30)
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47354 (offset +0x8)
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47448 (offset +0x268)
};

class PolymoObject_e38 {
public:
    const PolymoObject_e38_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46ec8 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46f28 (offset +0x1d8)
    virtual int64_t vfunc_slot_59(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x46f5c (offset +0x1d8)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x46fc8 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47034 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x470ec (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47284 (offset +0x268)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4729c (offset +0x20)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x472b8 (offset +0x38)
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x472d8 (offset +0x38)
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47300 (offset +0x30)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47354 (offset +0x8)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x47448 (offset +0x268)
};

struct PolymoObject_e48_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42e58 (offset +0x8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42f24 (offset +0x8)
};

class PolymoObject_e48 {
public:
    const PolymoObject_e48_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42e58 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x42f24 (offset +0x8)
};

struct PolymoObject_e70_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x15e84 (offset +0x10)
};

class PolymoObject_e70 {
public:
    const PolymoObject_e70_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x15e84 (offset +0x10)
};

struct PolymoObject_eb0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4aed0 (offset +0x270)
};

class PolymoObject_eb0 {
public:
    const PolymoObject_eb0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x4aed0 (offset +0x270)
};

struct PolymoObject_ed0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cf7c (offset +0x270)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cf98 (offset +0x268)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cff0 (offset +0x268)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_9(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3d4a4 (offset +0x48)
};

class PolymoObject_ed0 {
public:
    const PolymoObject_ed0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_78(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cf7c (offset +0x270)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cf98 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3cff0 (offset +0x268)
    virtual int64_t vfunc_slot_9(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3d4a4 (offset +0x48)
};

struct PolymoObject_edc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10ef0 (offset +0x0)
};

class PolymoObject_edc {
public:
    const PolymoObject_edc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10ef0 (offset +0x0)
};

struct PolymoObject_ef8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17f84 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x18038 (offset +0x10)
};

class PolymoObject_ef8 {
public:
    const PolymoObject_ef8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x17f84 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x18038 (offset +0x10)
};

struct PolymoObject_f10_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41f98 (offset +0x268)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41fe8 (offset +0x268)
};

class PolymoObject_f10 {
public:
    const PolymoObject_f10_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41f98 (offset +0x268)
    virtual int64_t vfunc_slot_77(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x41fe8 (offset +0x268)
};

struct PolymoObject_f48_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x171bc (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1efec (offset +0x10)
};

class PolymoObject_f48 {
public:
    const PolymoObject_f48_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x171bc (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1efec (offset +0x10)
};

struct PolymoObject_f5c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10fa4 (offset +0x30)
};

class PolymoObject_f5c {
public:
    const PolymoObject_f5c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10fa4 (offset +0x30)
};

struct PolymoObject_fd8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b014 (offset +0x0)
};

class PolymoObject_fd8 {
public:
    const PolymoObject_fd8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3b014 (offset +0x0)
};

struct PolymoObject_fe4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39000 (offset +0x20)
};

class PolymoObject_fe4 {
public:
    const PolymoObject_fe4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39000 (offset +0x20)
};

struct PolymoObject_ff8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x11004 (offset +0x0)
};

class PolymoObject_ff8 {
public:
    const PolymoObject_ff8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x11004 (offset +0x0)
};

struct swift_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af38
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::emitLine::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af40
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af74
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af88
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b048
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b3c4
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b3cc
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b420
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b494
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b49c
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b4f0
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b564
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b588
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b5d4
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b630
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b63c
    int64_t (*vslot_16)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b688
    int64_t (*vslot_17)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b6d0
    int64_t (*vslot_18)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b6dc
    int64_t (*vslot_19)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b728
    int64_t (*vslot_20)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b770
    int64_t (*vslot_21)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::captureModifierFlags::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3b7f8
    int64_t (*vslot_22)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x3b848
    int64_t (*vslot_23)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x3b8dc
    int64_t (*vslot_24)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x3b948
    int64_t (*vslot_25)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b9b4
    int64_t (*vslot_26)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3ba00
    int64_t (*vslot_27)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine() (void* this_ptr); // @ 0x3ba48
    int64_t (*vslot_28)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine() (void* this_ptr); // @ 0x3baa0
    int64_t (*vslot_29)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x3c35c
    int64_t (*vslot_30)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::NSEvent() (void* this_ptr); // @ 0x3c39c
    int64_t (*vslot_31)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::captureDictationKey::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3ced0
    int64_t (*vslot_32)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::keyToken::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3d508
    int64_t (*vslot_33)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::captureKeyCodes::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3dd20
    int64_t (*vslot_34)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::handle::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3dd70
    int64_t (*vslot_35)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent() (void* this_ptr); // @ 0x3f414
    int64_t (*vslot_36)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x3f490
    int64_t (*vslot_37)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x3f4ac
    int64_t (*vslot_38)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent::cgEvent::CGEventRef() (void* this_ptr); // @ 0x3fa38
    int64_t (*vslot_39)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x3fa8c
    int64_t (*vslot_40)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x3faf4
    int64_t (*vslot_41)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x3fdb4
    int64_t (*vslot_42)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::handle::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent::$defer() (void* this_ptr); // @ 0x3fdf0
    int64_t (*vslot_43)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::captureModifierFlags::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3feb8
    int64_t (*vslot_44)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x3ff44
    int64_t (*vslot_45)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x3ffd8
    int64_t (*vslot_46)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::NSEvent() (void* this_ptr); // @ 0x400bc
    int64_t (*vslot_47)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x40254
    int64_t (*vslot_48)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x402e8
    int64_t (*vslot_49)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UnicodeScalarView() (void* this_ptr); // @ 0x404e8
    int64_t (*vslot_50)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t DefaultStringInterpolation() (void* this_ptr); // @ 0x4054c
    int64_t (*vslot_51)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::captureKeyCodes::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x40574
    int64_t (*vslot_52)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x40620
    int64_t (*vslot_53)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x40708
    int64_t (*vslot_54)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x407bc
    int64_t (*vslot_55)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x40824
    int64_t (*vslot_56)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x40864
    int64_t (*vslot_57)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x40868
    int64_t (*vslot_58)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t removeAll::keepingCapacity() (void* this_ptr); // @ 0x4086c
    int64_t (*vslot_59)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x40884
    int64_t (*vslot_60)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x408b0
    int64_t (*vslot_61)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x408f0
    int64_t (*vslot_62)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::union() (void* this_ptr); // @ 0x40928
    int64_t (*vslot_63)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::intersection() (void* this_ptr); // @ 0x40964
    int64_t (*vslot_64)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x409a0
    int64_t (*vslot_65)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x409dc
    int64_t (*vslot_66)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OptionSet::Element::FixedWidthInteger::RawValue::insert::inserted::memberAfterInsert() (void* this_ptr); // @ 0x40a28
    int64_t (*vslot_67)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x40c0c
    int64_t (*vslot_68)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x40c48
    int64_t (*vslot_69)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formUnion() (void* this_ptr); // @ 0x40c84
    int64_t (*vslot_70)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x40cc4
    int64_t (*vslot_71)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x40d04
    int64_t (*vslot_72)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::subtracting() (void* this_ptr); // @ 0x40d44
    int64_t (*vslot_73)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x40d58
    int64_t (*vslot_74)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x40d70
    int64_t (*vslot_75)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x40d88
    int64_t (*vslot_76)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x40da0
    int64_t (*vslot_77)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::Element() (void* this_ptr); // @ 0x40db8
    int64_t (*vslot_78)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::subtract() (void* this_ptr); // @ 0x40df0
    int64_t (*vslot_79)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::ee() (void* this_ptr); // @ 0x40e04
    int64_t (*vslot_80)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::ee() (void* this_ptr); // @ 0x40e4c
    int64_t (*vslot_81)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x40e94
    int64_t (*vslot_82)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x40ed4
    int64_t (*vslot_83)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::union() (void* this_ptr); // @ 0x40f0c
    int64_t (*vslot_84)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::intersection() (void* this_ptr); // @ 0x40f48
    int64_t (*vslot_85)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x40f84
    int64_t (*vslot_86)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x40fc0
    int64_t (*vslot_87)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x4100c
    int64_t (*vslot_88)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x41048
    int64_t (*vslot_89)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formUnion() (void* this_ptr); // @ 0x41084
    int64_t (*vslot_90)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x410c4
    int64_t (*vslot_91)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x41104
    int64_t (*vslot_92)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::subtracting() (void* this_ptr); // @ 0x41144
    int64_t (*vslot_93)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x41158
    int64_t (*vslot_94)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x41170
    int64_t (*vslot_95)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x41188
    int64_t (*vslot_96)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x411a0
    int64_t (*vslot_97)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::Element() (void* this_ptr); // @ 0x411b8
    int64_t (*vslot_98)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::subtract() (void* this_ptr); // @ 0x411f0
    int64_t (*vslot_99)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x41204
    int64_t (*vslot_100)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x41234
    int64_t (*vslot_101)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x41260
    int64_t (*vslot_102)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ee() (void* this_ptr); // @ 0x41264
    int64_t (*vslot_103)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x412ac
    int64_t (*vslot_104)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x412e8
    int64_t (*vslot_105)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x41318
    int64_t (*vslot_106)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x4133c
    int64_t (*vslot_107)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x41368
    int64_t (*vslot_108)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x41384
    int64_t (*vslot_109)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x413c0
    int64_t (*vslot_110)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x413ec
    int64_t (*vslot_111)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ee() (void* this_ptr); // @ 0x41418
    int64_t (*vslot_112)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x41460
    int64_t (*vslot_113)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x4149c
    int64_t (*vslot_114)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x414c8
    int64_t (*vslot_115)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x414f8
    int64_t (*vslot_116)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x41524
    int64_t (*vslot_117)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt16() (void* this_ptr); // @ 0x41528
    int64_t (*vslot_118)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt16() (void* this_ptr); // @ 0x41550
    int64_t (*vslot_119)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt16() (void* this_ptr); // @ 0x415c4
    int64_t (*vslot_120)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x41614
    int64_t (*vslot_121)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x41644
    int64_t (*vslot_122)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x416c0
    int64_t (*vslot_123)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x4170c
    int64_t (*vslot_124)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x41718
    int64_t (*vslot_125)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x417ac
    int64_t (*vslot_126)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x41840
    int64_t (*vslot_127)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x41854
    int64_t (*vslot_128)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x418c0
    int64_t (*vslot_129)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x418d4
    int64_t (*vslot_130)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask() (void* this_ptr); // @ 0x418e8
    int64_t (*vslot_131)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41954
    int64_t (*vslot_132)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41968
    int64_t (*vslot_133)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x419d4
    int64_t (*vslot_134)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x419e8
    int64_t (*vslot_135)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41a54
    int64_t (*vslot_136)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41a68
    int64_t (*vslot_137)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x41ad4
    int64_t (*vslot_138)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x41ae8
    int64_t (*vslot_139)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x41b54
    int64_t (*vslot_140)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t us::FixedWidthInteger() (void* this_ptr); // @ 0x41b68
    int64_t (*vslot_141)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x41bcc
    int64_t (*vslot_142)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt64::FixedWidthInteger() (void* this_ptr); // @ 0x41c38
    int64_t (*vslot_143)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEventType() (void* this_ptr); // @ 0x41c9c
    int64_t (*vslot_144)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x41d08
    int64_t (*vslot_145)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x41d30
    int64_t (*vslot_146)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x41dc4
    int64_t (*vslot_147)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSEvent() (void* this_ptr); // @ 0x41e30
    int64_t (*vslot_148)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _endMutation() (void* this_ptr); // @ 0x41e90
    int64_t (*vslot_149)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGEventType() (void* this_ptr); // @ 0x41e9c
    int64_t (*vslot_150)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x41f08
    int64_t (*vslot_151)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x41f10
    int64_t (*vslot_152)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x42114
    int64_t (*vslot_153)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::windowInfo::CFStringRef() (void* this_ptr); // @ 0x42170
    int64_t (*vslot_154)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t map::Element() (void* this_ptr); // @ 0x42964
    int64_t (*vslot_155)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef() (void* this_ptr); // @ 0x42fcc
    int64_t (*vslot_156)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::_ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x43040
    int64_t (*vslot_157)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef() (void* this_ptr); // @ 0x430b4
    int64_t (*vslot_158)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef() (void* this_ptr); // @ 0x43148
    int64_t (*vslot_159)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::window::for::UInt32() (void* this_ptr); // @ 0x431b4
    int64_t (*vslot_160)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32() (void* this_ptr); // @ 0x43528
    int64_t (*vslot_161)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32() (void* this_ptr); // @ 0x43530
    int64_t (*vslot_162)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32::NSScreen() (void* this_ptr); // @ 0x438b0
    int64_t (*vslot_163)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect::CoreGraphics::height::CGFloat() (void* this_ptr); // @ 0x43964
    int64_t (*vslot_164)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect::SkyNative::optionalDictionaryRepresentation::CFDictionaryRef::_8B1D00FFB3C5EB26B7F2469A9D470D0C() (void* this_ptr); // @ 0x439a0
    int64_t (*vslot_165)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43b3c
    int64_t (*vslot_166)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43bd4
    int64_t (*vslot_167)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSDictionary() (void* this_ptr); // @ 0x43c08
    int64_t (*vslot_168)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSScreen() (void* this_ptr); // @ 0x43c68
    int64_t (*vslot_169)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32::NSScreen() (void* this_ptr); // @ 0x43cc8
    int64_t (*vslot_170)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSScreen() (void* this_ptr); // @ 0x43cf4
    int64_t (*vslot_171)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSScreen() (void* this_ptr); // @ 0x43d68
    int64_t (*vslot_172)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::id::UInt32() (void* this_ptr); // @ 0x43d90
    int64_t (*vslot_173)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::ownerPID::Int32() (void* this_ptr); // @ 0x43d98
    int64_t (*vslot_174)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::bounds::CGRect() (void* this_ptr); // @ 0x43da0
    int64_t (*vslot_175)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::level::Int32() (void* this_ptr); // @ 0x43db4
    int64_t (*vslot_176)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::name() (void* this_ptr); // @ 0x43dbc
    int64_t (*vslot_177)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::ownerName() (void* this_ptr); // @ 0x43df0
    int64_t (*vslot_178)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::isOnscreen() (void* this_ptr); // @ 0x43e24
    int64_t (*vslot_179)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e2c
    int64_t (*vslot_180)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e68
    int64_t (*vslot_181)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e98
    int64_t (*vslot_182)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43f30
    int64_t (*vslot_183)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x4401c
    int64_t (*vslot_184)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x440c0
    int64_t (*vslot_185)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x441f0
    int64_t (*vslot_186)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x443cc
    int64_t (*vslot_187)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect() (void* this_ptr); // @ 0x443e0
    int64_t (*vslot_188)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect() (void* this_ptr); // @ 0x44434
    int64_t (*vslot_189)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect() (void* this_ptr); // @ 0x4453c
    int64_t (*vslot_190)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect() (void* this_ptr); // @ 0x446ec
    int64_t (*vslot_191)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::hashValue() (void* this_ptr); // @ 0x44780
    int64_t (*vslot_192)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::hash::into::Hasher() (void* this_ptr); // @ 0x447c4
    int64_t (*vslot_193)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4480c
    int64_t (*vslot_194)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::ee() (void* this_ptr); // @ 0x44820
    int64_t (*vslot_195)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef::CoreFoundation::_CFObject() (void* this_ptr); // @ 0x44878
    int64_t (*vslot_196)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef() (void* this_ptr); // @ 0x4488c
    int64_t (*vslot_197)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CFStringRef() (void* this_ptr); // @ 0x448a0
    int64_t (*vslot_198)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x4490c
    int64_t (*vslot_199)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGSize() (void* this_ptr); // @ 0x44940
    int64_t (*vslot_200)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGSize() (void* this_ptr); // @ 0x44a4c
    int64_t (*vslot_201)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGSize() (void* this_ptr); // @ 0x44bfc
    int64_t (*vslot_202)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGPoint() (void* this_ptr); // @ 0x44c90
    int64_t (*vslot_203)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGPoint() (void* this_ptr); // @ 0x44d9c
    int64_t (*vslot_204)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGPoint() (void* this_ptr); // @ 0x44f4c
    int64_t (*vslot_205)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyFrontmostWindowJSON::Int8() (void* this_ptr); // @ 0x44ff4
    int64_t (*vslot_206)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyFrontmostWindowJSON::Int8() (void* this_ptr); // @ 0x45078
    int64_t (*vslot_207)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x453a0
    int64_t (*vslot_208)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ObjectiveC::autoreleasepool::invoking::Error() (void* this_ptr); // @ 0x45df0
    int64_t (*vslot_209)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::bundleIdentifier() (void* this_ptr); // @ 0x45ee0
    int64_t (*vslot_210)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::iconSmallDataURL() (void* this_ptr); // @ 0x45f14
    int64_t (*vslot_211)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::name() (void* this_ptr); // @ 0x45f48
    int64_t (*vslot_212)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::windowTitle() (void* this_ptr); // @ 0x45f7c
    int64_t (*vslot_213)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::stringValue() (void* this_ptr); // @ 0x45fb0
    int64_t (*vslot_214)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::intValue() (void* this_ptr); // @ 0x46268
    int64_t (*vslot_215)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::__derived_enum_equals() (void* this_ptr); // @ 0x46280
    int64_t (*vslot_216)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hash::into::Hasher() (void* this_ptr); // @ 0x463b0
    int64_t (*vslot_217)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hashValue() (void* this_ptr); // @ 0x46484
    int64_t (*vslot_218)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::intValue() (void* this_ptr); // @ 0x464cc
    int64_t (*vslot_219)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::stringValue() (void* this_ptr); // @ 0x464e8
    int64_t (*vslot_220)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::ee() (void* this_ptr); // @ 0x465ec
    int64_t (*vslot_221)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hashValue() (void* this_ptr); // @ 0x4660c
    int64_t (*vslot_222)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hash::into::Hasher() (void* this_ptr); // @ 0x46624
    int64_t (*vslot_223)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4663c
    int64_t (*vslot_224)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46650
    int64_t (*vslot_225)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46668
    int64_t (*vslot_226)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46690
    int64_t (*vslot_227)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x466a8
    int64_t (*vslot_228)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomDebugStringConvertible::debugDescription() (void* this_ptr); // @ 0x466d0
    int64_t (*vslot_229)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomStringConvertible::description() (void* this_ptr); // @ 0x466fc
    int64_t (*vslot_230)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::encode::to::Encoder() (void* this_ptr); // @ 0x46728
    int64_t (*vslot_231)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::encode::to::Encoder() (void* this_ptr); // @ 0x46a64
    int64_t (*vslot_232)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x46ad4
    int64_t (*vslot_233)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x46b4c
    int64_t (*vslot_234)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::allWindows::CGWindow() (void* this_ptr); // @ 0x46c08
    int64_t (*vslot_235)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x46ce8
    int64_t (*vslot_236)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t IndexingIterator::SkyNative::CGWindow() (void* this_ptr); // @ 0x46d5c
    int64_t (*vslot_237)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSRunningApplication() (void* this_ptr); // @ 0x46d84
    int64_t (*vslot_238)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current::CGWindow() (void* this_ptr); // @ 0x46de4
    int64_t (*vslot_239)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::frontmostApp::window::NSRunningApplication::CGWindow() (void* this_ptr); // @ 0x46e38
    int64_t (*vslot_240)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSRunningApplication::processIdentifier::Int32() (void* this_ptr); // @ 0x47490
    int64_t (*vslot_241)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x47538
    int64_t (*vslot_242)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x475cc
    int64_t (*vslot_243)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current::CGWindow() (void* this_ptr); // @ 0x47638
    int64_t (*vslot_244)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47660
    int64_t (*vslot_245)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x476d4
    int64_t (*vslot_246)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x476fc
    int64_t (*vslot_247)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x47764
    int64_t (*vslot_248)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x477cc
    int64_t (*vslot_249)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x47860
    int64_t (*vslot_250)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::allWindows::CGWindow() (void* this_ptr); // @ 0x478cc
    int64_t (*vslot_251)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow::_ArrayProtocol() (void* this_ptr); // @ 0x479f0
    int64_t (*vslot_252)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47a64
    int64_t (*vslot_253)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47ab0
    int64_t (*vslot_254)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::URL() (void* this_ptr); // @ 0x47b80
    int64_t (*vslot_255)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::URL() (void* this_ptr); // @ 0x47c3c
    int64_t (*vslot_256)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47ca4
    int64_t (*vslot_257)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47d50
    int64_t (*vslot_258)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47d9c
    int64_t (*vslot_259)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47dd8
    int64_t (*vslot_260)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47e20
    int64_t (*vslot_261)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47ecc
    int64_t (*vslot_262)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47fd4
    int64_t (*vslot_263)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x48074
    int64_t (*vslot_264)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x481b4
    int64_t (*vslot_265)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x48394
    int64_t (*vslot_266)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x483b4
    int64_t (*vslot_267)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x4851c
    int64_t (*vslot_268)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48718
    int64_t (*vslot_269)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48720
    int64_t (*vslot_270)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48724
    int64_t (*vslot_271)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x4872c
    int64_t (*vslot_272)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::rawValue::UInt32() (void* this_ptr); // @ 0x48740
    int64_t (*vslot_273)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy::ee() (void* this_ptr); // @ 0x48744
    int64_t (*vslot_274)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x4878c
    int64_t (*vslot_275)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x487cc
    int64_t (*vslot_276)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::union() (void* this_ptr); // @ 0x48804
    int64_t (*vslot_277)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::intersection() (void* this_ptr); // @ 0x48840
    int64_t (*vslot_278)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x4887c
    int64_t (*vslot_279)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x488b8
    int64_t (*vslot_280)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x48904
    int64_t (*vslot_281)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x48940
    int64_t (*vslot_282)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::formUnion() (void* this_ptr); // @ 0x4897c
    int64_t (*vslot_283)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x489bc
    int64_t (*vslot_284)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x489fc
    int64_t (*vslot_285)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::subtracting() (void* this_ptr); // @ 0x48a3c
    int64_t (*vslot_286)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x48a50
    int64_t (*vslot_287)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x48a68
    int64_t (*vslot_288)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x48a80
    int64_t (*vslot_289)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x48a98
    int64_t (*vslot_290)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::Element() (void* this_ptr); // @ 0x48ab0
    int64_t (*vslot_291)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::subtract() (void* this_ptr); // @ 0x48ae8
    int64_t (*vslot_292)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy::rawValue::Raw() (void* this_ptr); // @ 0x48afc
    int64_t (*vslot_293)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy::rawValue() (void* this_ptr); // @ 0x48b2c
    int64_t (*vslot_294)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy::rawValue::Raw() (void* this_ptr); // @ 0x48b50
    int64_t (*vslot_295)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy::rawValue() (void* this_ptr); // @ 0x48b7c
    int64_t (*vslot_296)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::ee() (void* this_ptr); // @ 0x48b98
    int64_t (*vslot_297)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x48be0
    int64_t (*vslot_298)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48c1c
    int64_t (*vslot_299)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::rawValue::Raw() (void* this_ptr); // @ 0x48c48
    int64_t (*vslot_300)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::rawValue::Raw() (void* this_ptr); // @ 0x48c78
    int64_t (*vslot_301)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48ca4
    int64_t (*vslot_302)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48cb8
    int64_t (*vslot_303)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48d24
    int64_t (*vslot_304)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x48d38
    int64_t (*vslot_305)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48d4c
    int64_t (*vslot_306)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x48db8
    int64_t (*vslot_307)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x48dcc
    int64_t (*vslot_308)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48e38
    int64_t (*vslot_309)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomDebugStringConvertible() (void* this_ptr); // @ 0x48e4c
    int64_t (*vslot_310)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48eb4
    int64_t (*vslot_311)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomStringConvertible() (void* this_ptr); // @ 0x48ec8
    int64_t (*vslot_312)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48f30
    int64_t (*vslot_313)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48f44
    int64_t (*vslot_314)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x48fac
    int64_t (*vslot_315)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption::rawValue::UInt32() (void* this_ptr); // @ 0x49018
    int64_t (*vslot_316)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x49044
    int64_t (*vslot_317)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t UInt32::FixedWidthInteger() (void* this_ptr); // @ 0x490b0
    int64_t (*vslot_318)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x49160
    int64_t (*vslot_319)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x491c8
    int64_t (*vslot_320)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyIconSmallDataURLForAppPath::Int8() (void* this_ptr); // @ 0x49254
    int64_t (*vslot_321)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyIconSmallDataURLForAppPath::Int8() (void* this_ptr); // @ 0x49284
    int64_t (*vslot_322)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x492b4
    int64_t (*vslot_323)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x492f0
    int64_t (*vslot_324)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyIconMediumDataURLForAppPath::Int8() (void* this_ptr); // @ 0x493b8
    int64_t (*vslot_325)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::skyIconMediumDataURLForAppPath::Int8() (void* this_ptr); // @ 0x493e8
    int64_t (*vslot_326)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x49418
    int64_t (*vslot_327)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x49454
    int64_t (*vslot_328)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495ac
    int64_t (*vslot_329)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495b0
    int64_t (*vslot_330)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495bc
    int64_t (*vslot_331)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495cc
    int64_t (*vslot_332)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495d0
    int64_t (*vslot_333)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495dc
    int64_t (*vslot_334)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x495ec
    int64_t (*vslot_335)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x49c0c
    int64_t (*vslot_336)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x49c3c
    int64_t (*vslot_337)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGImageAlphaInfo::rawValue::UInt32() (void* this_ptr); // @ 0x49da8
    int64_t (*vslot_338)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGContextRef::CoreGraphics::draw::in::byTiling::CGImage() (void* this_ptr); // @ 0x49e18
    int64_t (*vslot_339)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRep() (void* this_ptr); // @ 0x49e24
    int64_t (*vslot_340)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRep::cg() (void* this_ptr); // @ 0x49e84
    int64_t (*vslot_341)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x49ec0
    int64_t (*vslot_342)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x49f54
    int64_t (*vslot_343)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::Data::base64EncodedString::options::NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x49fc0
    int64_t (*vslot_344)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_queue() (void* this_ptr); // @ 0x49fec
    int64_t (*vslot_345)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a04c
    int64_t (*vslot_346)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a1c4
    int64_t (*vslot_347)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a218
    int64_t (*vslot_348)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a248
    int64_t (*vslot_349)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGImageRef() (void* this_ptr); // @ 0x4a25c
    int64_t (*vslot_350)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRep::cg() (void* this_ptr); // @ 0x4a2f0
    int64_t (*vslot_351)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_bridgeTo::C::_::CType() (void* this_ptr); // @ 0x4a334
    int64_t (*vslot_352)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_forceBridgeFrom::C::result::_::CType() (void* this_ptr); // @ 0x4a36c
    int64_t (*vslot_353)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_conditionallyBridgeFrom::C::result::_::CType() (void* this_ptr); // @ 0x4a3b4
    int64_t (*vslot_354)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_unconditionallyBridgeFrom::C::_::CType() (void* this_ptr); // @ 0x4a400
    int64_t (*vslot_355)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::hashValue() (void* this_ptr); // @ 0x4a448
    int64_t (*vslot_356)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::hash::into::Hasher() (void* this_ptr); // @ 0x4a484
    int64_t (*vslot_357)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4a4c8
    int64_t (*vslot_358)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::ee() (void* this_ptr); // @ 0x4a50c
    int64_t (*vslot_359)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::rawValue::Raw() (void* this_ptr); // @ 0x4a554
    int64_t (*vslot_360)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::rawValue() (void* this_ptr); // @ 0x4a588
    int64_t (*vslot_361)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::rawValue::Raw() (void* this_ptr); // @ 0x4a5f8
    int64_t (*vslot_362)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::rawValue() (void* this_ptr); // @ 0x4a628
    int64_t (*vslot_363)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_HasCustomAnyHashableRepresentation::_to() (void* this_ptr); // @ 0x4a684
    int64_t (*vslot_364)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper() (void* this_ptr); // @ 0x4a6cc
    int64_t (*vslot_365)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a6e0
    int64_t (*vslot_366)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper::_HasCustomAnyHashableRepresentation() (void* this_ptr); // @ 0x4a74c
    int64_t (*vslot_367)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_HasCustomAnyHashableRepresentation() (void* this_ptr); // @ 0x4a760
    int64_t (*vslot_368)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a7cc
    int64_t (*vslot_369)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a7e0
    int64_t (*vslot_370)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper() (void* this_ptr); // @ 0x4a84c
    int64_t (*vslot_371)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Ss::_ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x4a8b8
    int64_t (*vslot_372)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _allocateUninitialized::NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x4a91c
    int64_t (*vslot_373)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x4a9f0
    int64_t (*vslot_374)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize() (void* this_ptr); // @ 0x4aa84
    int64_t (*vslot_375)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize::CGSize() (void* this_ptr); // @ 0x4aa88
    int64_t (*vslot_376)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize::CGSize() (void* this_ptr); // @ 0x4aa94
    int64_t (*vslot_377)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize() (void* this_ptr); // @ 0x4aaa0
    int64_t (*vslot_378)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aaa4
    int64_t (*vslot_379)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aab0
    int64_t (*vslot_380)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing() (void* this_ptr); // @ 0x4aab8
    int64_t (*vslot_381)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aabc
    int64_t (*vslot_382)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aac8
    int64_t (*vslot_383)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize() (void* this_ptr); // @ 0x4aad0
    int64_t (*vslot_384)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aad4
    int64_t (*vslot_385)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aae0
    int64_t (*vslot_386)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize() (void* this_ptr); // @ 0x4aae8
    int64_t (*vslot_387)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize::CGSize() (void* this_ptr); // @ 0x4aaec
    int64_t (*vslot_388)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize::CGSize() (void* this_ptr); // @ 0x4aaf8
    int64_t (*vslot_389)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap() (void* this_ptr); // @ 0x4ab04
    int64_t (*vslot_390)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab08
    int64_t (*vslot_391)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab14
    int64_t (*vslot_392)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab1c
    int64_t (*vslot_393)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab20
    int64_t (*vslot_394)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab2c
    int64_t (*vslot_395)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize() (void* this_ptr); // @ 0x4ab38
    int64_t (*vslot_396)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize::CGSize() (void* this_ptr); // @ 0x4ab3c
    int64_t (*vslot_397)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize::CGSize() (void* this_ptr); // @ 0x4ab48
    int64_t (*vslot_398)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset() (void* this_ptr); // @ 0x4ab60
    int64_t (*vslot_399)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab64
    int64_t (*vslot_400)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab70
    int64_t (*vslot_401)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset() (void* this_ptr); // @ 0x4ab78
    int64_t (*vslot_402)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab7c
    int64_t (*vslot_403)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab88
    int64_t (*vslot_404)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset() (void* this_ptr); // @ 0x4ab90
    int64_t (*vslot_405)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab94
    int64_t (*vslot_406)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aba0
    int64_t (*vslot_407)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius() (void* this_ptr); // @ 0x4aba8
    int64_t (*vslot_408)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abac
    int64_t (*vslot_409)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abb8
    int64_t (*vslot_410)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize() (void* this_ptr); // @ 0x4abc0
    int64_t (*vslot_411)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize::CGSize() (void* this_ptr); // @ 0x4abc4
    int64_t (*vslot_412)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize::CGSize() (void* this_ptr); // @ 0x4abd0
    int64_t (*vslot_413)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset() (void* this_ptr); // @ 0x4abdc
    int64_t (*vslot_414)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abe0
    int64_t (*vslot_415)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abec
    int64_t (*vslot_416)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset() (void* this_ptr); // @ 0x4abf4
    int64_t (*vslot_417)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abf8
    int64_t (*vslot_418)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac04
    int64_t (*vslot_419)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing() (void* this_ptr); // @ 0x4ac0c
    int64_t (*vslot_420)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac10
    int64_t (*vslot_421)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac1c
    int64_t (*vslot_422)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize() (void* this_ptr); // @ 0x4ac24
    int64_t (*vslot_423)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac28
    int64_t (*vslot_424)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac34
    int64_t (*vslot_425)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset() (void* this_ptr); // @ 0x4ac3c
    int64_t (*vslot_426)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac40
    int64_t (*vslot_427)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac4c
    int64_t (*vslot_428)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing() (void* this_ptr); // @ 0x4ac54
    int64_t (*vslot_429)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac58
    int64_t (*vslot_430)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac64
    int64_t (*vslot_431)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse() (void* this_ptr); // @ 0x4ac6c
    int64_t (*vslot_432)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSColor() (void* this_ptr); // @ 0x4acc0
    int64_t (*vslot_433)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSColor::srgbRed::green::blue::alpha::CoreGraphics::CGFloat::Itc() (void* this_ptr); // @ 0x4ad20
    int64_t (*vslot_434)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse::NSColor() (void* this_ptr); // @ 0x4ad6c
    int64_t (*vslot_435)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse::NSColor() (void* this_ptr); // @ 0x4adbc
    int64_t (*vslot_436)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory() (void* this_ptr); // @ 0x4adf0
    int64_t (*vslot_437)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory::NSColor() (void* this_ptr); // @ 0x4ae60
    int64_t (*vslot_438)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory::NSColor() (void* this_ptr); // @ 0x4aeb0
    int64_t (*vslot_439)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemAppIconStack::_9A98D77A68D38AE72B97FD13555B0A53::width::imageCount::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aee4
    int64_t (*vslot_440)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4afd8
    int64_t (*vslot_441)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4b03c
    int64_t (*vslot_442)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t iS() (void* this_ptr); // @ 0x4b208
    int64_t (*vslot_443)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemAppIconStack::_9A98D77A68D38AE72B97FD13555B0A53::draw::in::startingAt::CoreGraphics::CGFloat::NSImage::CGRect() (void* this_ptr); // @ 0x4b26c
    int64_t (*vslot_444)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSImage() (void* this_ptr); // @ 0x4b7b8
    int64_t (*vslot_445)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSImage() (void* this_ptr); // @ 0x4b82c
    int64_t (*vslot_446)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t EnumeratedSequence::Iterator::NSImage() (void* this_ptr); // @ 0x4b8a0
    int64_t (*vslot_447)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b8c8
    int64_t (*vslot_448)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ReversedCollection::Iterator::NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b93c
    int64_t (*vslot_449)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b964
    int64_t (*vslot_450)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CGRect::CoreGraphics::minY::CGFloat() (void* this_ptr); // @ 0x4b98c
    int64_t (*vslot_451)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSImage() (void* this_ptr); // @ 0x4b9c8
    int64_t (*vslot_452)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4ba28
    int64_t (*vslot_453)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bb54
    int64_t (*vslot_454)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4bbdc
    int64_t (*vslot_455)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4bbf0
    int64_t (*vslot_456)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4bc2c
    int64_t (*vslot_457)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4bc94
    int64_t (*vslot_458)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4bcd8
    int64_t (*vslot_459)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4bd1c
    int64_t (*vslot_460)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4bd50
    int64_t (*vslot_461)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4bd80
    int64_t (*vslot_462)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bdec
    int64_t (*vslot_463)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bf64
    int64_t (*vslot_464)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c02c
    int64_t (*vslot_465)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c1ec
    int64_t (*vslot_466)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c2f0
    int64_t (*vslot_467)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c468
    int64_t (*vslot_468)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c530
    int64_t (*vslot_469)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c544
    int64_t (*vslot_470)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c580
    int64_t (*vslot_471)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4c5e8
    int64_t (*vslot_472)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4c62c
    int64_t (*vslot_473)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c670
    int64_t (*vslot_474)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c6a4
    int64_t (*vslot_475)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4c6d4
    int64_t (*vslot_476)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c740
    int64_t (*vslot_477)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c754
    int64_t (*vslot_478)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c790
    int64_t (*vslot_479)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4c7f8
    int64_t (*vslot_480)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4c83c
    int64_t (*vslot_481)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c880
    int64_t (*vslot_482)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c8b4
    int64_t (*vslot_483)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4c8e4
    int64_t (*vslot_484)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c950
    int64_t (*vslot_485)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c964
    int64_t (*vslot_486)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c9a0
    int64_t (*vslot_487)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4ca08
    int64_t (*vslot_488)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4ca4c
    int64_t (*vslot_489)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4ca90
    int64_t (*vslot_490)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4cac4
    int64_t (*vslot_491)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::from::Decoder() (void* this_ptr); // @ 0x4caf4
    int64_t (*vslot_492)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4cb68
    int64_t (*vslot_493)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::assetFileName() (void* this_ptr); // @ 0x4cbd4
    int64_t (*vslot_494)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::fallbackSymbol() (void* this_ptr); // @ 0x4cc5c
    int64_t (*vslot_495)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::__derived_enum_equals() (void* this_ptr); // @ 0x4cce4
    int64_t (*vslot_496)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4cd80
    int64_t (*vslot_497)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4ce08
    int64_t (*vslot_498)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4ce50
    int64_t (*vslot_499)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4ceb8
    int64_t (*vslot_500)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4ced8
    int64_t (*vslot_501)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4cef0
    int64_t (*vslot_502)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4cf08
    int64_t (*vslot_503)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemEvent::_9A98D77A68D38AE72B97FD13555B0A53::Kind::rawValue() (void* this_ptr); // @ 0x4cf1c
    int64_t (*vslot_504)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SkyNative::StatusItemEvent::_9A98D77A68D38AE72B97FD13555B0A53::Kind::rawValue() (void* this_ptr); // @ 0x4d360
};

class swift {
public:
    const swift_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af38
    virtual int64_t SkyNative::ModifierCaptureSession::emitLine::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af40
    virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af74
    virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3af88
    virtual int64_t SkyNative::ModifierCaptureSession::monitor::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b048
    virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b3c4
    virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b3cc
    virtual int64_t SkyNative::ModifierCaptureSession::dictationTap::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFMachPortRef() (void* this_ptr); // @ 0x3b420
    virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b494
    virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b49c
    virtual int64_t SkyNative::ModifierCaptureSession::dictationSource::_6BE182A09CFD1AA5D5FFECE42D8644C2::CFRunLoop::Ref() (void* this_ptr); // @ 0x3b4f0
    virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b564
    virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b588
    virtual int64_t SkyNative::ModifierCaptureSession::keys::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3b5d4
    virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b630
    virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b63c
    virtual int64_t SkyNative::ModifierCaptureSession::hasOrdinaryKey::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b688
    virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b6d0
    virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b6dc
    virtual int64_t SkyNative::ModifierCaptureSession::fnIsDown::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b728
    virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b770
    virtual int64_t SkyNative::captureModifierFlags::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3b7f8
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x3b848
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x3b8dc
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x3b948
    virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3b9b4
    virtual int64_t SkyNative::ModifierCaptureSession::waitingForRelease::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3ba00
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine() (void* this_ptr); // @ 0x3ba48
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine() (void* this_ptr); // @ 0x3baa0
    virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x3c35c
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::NSEvent() (void* this_ptr); // @ 0x3c39c
    virtual int64_t SkyNative::ModifierCaptureSession::captureDictationKey::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3ced0
    virtual int64_t SkyNative::ModifierCaptureSession::keyToken::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3d508
    virtual int64_t SkyNative::captureKeyCodes::_6BE182A09CFD1AA5D5FFECE42D8644C2::UInt16() (void* this_ptr); // @ 0x3dd20
    virtual int64_t SkyNative::ModifierCaptureSession::handle::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent() (void* this_ptr); // @ 0x3dd70
    virtual int64_t NSEvent() (void* this_ptr); // @ 0x3f414
    virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x3f490
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x3f4ac
    virtual int64_t NSEvent::cgEvent::CGEventRef() (void* this_ptr); // @ 0x3fa38
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::Unmanaged::CGEventRef::OpaquePointer() (void* this_ptr); // @ 0x3fa8c
    virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x3faf4
    virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x3fdb4
    virtual int64_t SkyNative::ModifierCaptureSession::handle::_6BE182A09CFD1AA5D5FFECE42D8644C2::NSEvent::$defer() (void* this_ptr); // @ 0x3fdf0
    virtual int64_t SkyNative::captureModifierFlags::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x3feb8
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x3ff44
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x3ffd8
    virtual int64_t SkyNative::ModifierCaptureSession::windowNumber::emitLine::NSEvent() (void* this_ptr); // @ 0x400bc
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x40254
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x402e8
    virtual int64_t UnicodeScalarView() (void* this_ptr); // @ 0x404e8
    virtual int64_t DefaultStringInterpolation() (void* this_ptr); // @ 0x4054c
    virtual int64_t SkyNative::captureKeyCodes::_6BE182A09CFD1AA5D5FFECE42D8644C2() (void* this_ptr); // @ 0x40574
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x40620
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x40708
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x407bc
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x40824
    virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x40864
    virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x40868
    virtual int64_t removeAll::keepingCapacity() (void* this_ptr); // @ 0x4086c
    virtual int64_t NSEventModifierFlags::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x40884
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x408b0
    virtual int64_t NSEventModifierFlags::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x408f0
    virtual int64_t NSEventModifierFlags::SetAlgebra::union() (void* this_ptr); // @ 0x40928
    virtual int64_t NSEventModifierFlags::SetAlgebra::intersection() (void* this_ptr); // @ 0x40964
    virtual int64_t NSEventModifierFlags::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x409a0
    virtual int64_t NSEventModifierFlags::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x409dc
    virtual int64_t OptionSet::Element::FixedWidthInteger::RawValue::insert::inserted::memberAfterInsert() (void* this_ptr); // @ 0x40a28
    virtual int64_t NSEventModifierFlags::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x40c0c
    virtual int64_t NSEventModifierFlags::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x40c48
    virtual int64_t NSEventModifierFlags::SetAlgebra::formUnion() (void* this_ptr); // @ 0x40c84
    virtual int64_t NSEventModifierFlags::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x40cc4
    virtual int64_t NSEventModifierFlags::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x40d04
    virtual int64_t NSEventModifierFlags::SetAlgebra::subtracting() (void* this_ptr); // @ 0x40d44
    virtual int64_t NSEventModifierFlags::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x40d58
    virtual int64_t NSEventModifierFlags::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x40d70
    virtual int64_t NSEventModifierFlags::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x40d88
    virtual int64_t NSEventModifierFlags::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x40da0
    virtual int64_t NSEventModifierFlags::SetAlgebra::Element() (void* this_ptr); // @ 0x40db8
    virtual int64_t NSEventModifierFlags::SetAlgebra::subtract() (void* this_ptr); // @ 0x40df0
    virtual int64_t NSEventType::ee() (void* this_ptr); // @ 0x40e04
    virtual int64_t CGEventType::ee() (void* this_ptr); // @ 0x40e4c
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x40e94
    virtual int64_t NSEventMask::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x40ed4
    virtual int64_t NSEventMask::SetAlgebra::union() (void* this_ptr); // @ 0x40f0c
    virtual int64_t NSEventMask::SetAlgebra::intersection() (void* this_ptr); // @ 0x40f48
    virtual int64_t NSEventMask::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x40f84
    virtual int64_t NSEventMask::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x40fc0
    virtual int64_t NSEventMask::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x4100c
    virtual int64_t NSEventMask::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x41048
    virtual int64_t NSEventMask::SetAlgebra::formUnion() (void* this_ptr); // @ 0x41084
    virtual int64_t NSEventMask::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x410c4
    virtual int64_t NSEventMask::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x41104
    virtual int64_t NSEventMask::SetAlgebra::subtracting() (void* this_ptr); // @ 0x41144
    virtual int64_t NSEventMask::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x41158
    virtual int64_t NSEventMask::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x41170
    virtual int64_t NSEventMask::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x41188
    virtual int64_t NSEventMask::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x411a0
    virtual int64_t NSEventMask::SetAlgebra::Element() (void* this_ptr); // @ 0x411b8
    virtual int64_t NSEventMask::SetAlgebra::subtract() (void* this_ptr); // @ 0x411f0
    virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x41204
    virtual int64_t NSEventModifierFlags::rawValue::Raw() (void* this_ptr); // @ 0x41234
    virtual int64_t NSEventModifierFlags::rawValue() (void* this_ptr); // @ 0x41260
    virtual int64_t NSEventModifierFlags::ee() (void* this_ptr); // @ 0x41264
    virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x412ac
    virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x412e8
    virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x41318
    virtual int64_t NSEventType::rawValue::Raw() (void* this_ptr); // @ 0x4133c
    virtual int64_t NSEventType::rawValue() (void* this_ptr); // @ 0x41368
    virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x41384
    virtual int64_t CGEventType::rawValue::UInt32() (void* this_ptr); // @ 0x413c0
    virtual int64_t CGEventType::rawValue::Raw() (void* this_ptr); // @ 0x413ec
    virtual int64_t NSEventMask::ee() (void* this_ptr); // @ 0x41418
    virtual int64_t NSEventMask::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x41460
    virtual int64_t NSEventMask::OptionSet::rawValue::Raw() (void* this_ptr); // @ 0x4149c
    virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x414c8
    virtual int64_t NSEventMask::rawValue::Raw() (void* this_ptr); // @ 0x414f8
    virtual int64_t NSEventMask::rawValue::UInt64() (void* this_ptr); // @ 0x41524
    virtual int64_t UInt16() (void* this_ptr); // @ 0x41528
    virtual int64_t UInt16() (void* this_ptr); // @ 0x41550
    virtual int64_t UInt16() (void* this_ptr); // @ 0x415c4
    virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x41614
    virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x41644
    virtual int64_t SkyNative::ModifierCaptureSession() (void* this_ptr); // @ 0x416c0
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x4170c
    virtual int64_t CFRunLoopSourceRef() (void* this_ptr); // @ 0x41718
    virtual int64_t CFMachPortRef() (void* this_ptr); // @ 0x417ac
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x41840
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x41854
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x418c0
    virtual int64_t NSEventMask::SetAlgebra() (void* this_ptr); // @ 0x418d4
    virtual int64_t NSEventMask() (void* this_ptr); // @ 0x418e8
    virtual int64_t NSEventMask::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41954
    virtual int64_t NSEventMask::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41968
    virtual int64_t NSEventModifierFlags::SetAlgebra() (void* this_ptr); // @ 0x419d4
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x419e8
    virtual int64_t NSEventModifierFlags::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41a54
    virtual int64_t NSEventModifierFlags::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x41a68
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x41ad4
    virtual int64_t NSEventModifierFlags() (void* this_ptr); // @ 0x41ae8
    virtual int64_t NSEventModifierFlags::OptionSet() (void* this_ptr); // @ 0x41b54
    virtual int64_t us::FixedWidthInteger() (void* this_ptr); // @ 0x41b68
    virtual int64_t NSEventMask::OptionSet() (void* this_ptr); // @ 0x41bcc
    virtual int64_t UInt64::FixedWidthInteger() (void* this_ptr); // @ 0x41c38
    virtual int64_t NSEventType() (void* this_ptr); // @ 0x41c9c
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x41d08
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x41d30
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x41dc4
    virtual int64_t NSEvent() (void* this_ptr); // @ 0x41e30
    virtual int64_t _endMutation() (void* this_ptr); // @ 0x41e90
    virtual int64_t CGEventType() (void* this_ptr); // @ 0x41e9c
    virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x41f08
    virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x41f10
    virtual int64_t SkyNative::CGWindow::allWindows::relativeToWindow() (void* this_ptr); // @ 0x42114
    virtual int64_t SkyNative::CGWindow::windowInfo::CFStringRef() (void* this_ptr); // @ 0x42170
    virtual int64_t map::Element() (void* this_ptr); // @ 0x42964
    virtual int64_t CFStringRef() (void* this_ptr); // @ 0x42fcc
    virtual int64_t CFStringRef::_ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x43040
    virtual int64_t CFStringRef() (void* this_ptr); // @ 0x430b4
    virtual int64_t CFStringRef() (void* this_ptr); // @ 0x43148
    virtual int64_t SkyNative::CGWindow::window::for::UInt32() (void* this_ptr); // @ 0x431b4
    virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32() (void* this_ptr); // @ 0x43528
    virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32() (void* this_ptr); // @ 0x43530
    virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32::NSScreen() (void* this_ptr); // @ 0x438b0
    virtual int64_t CGRect::CoreGraphics::height::CGFloat() (void* this_ptr); // @ 0x43964
    virtual int64_t CGRect::SkyNative::optionalDictionaryRepresentation::CFDictionaryRef::_8B1D00FFB3C5EB26B7F2469A9D470D0C() (void* this_ptr); // @ 0x439a0
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43b3c
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43bd4
    virtual int64_t NSDictionary() (void* this_ptr); // @ 0x43c08
    virtual int64_t NSScreen() (void* this_ptr); // @ 0x43c68
    virtual int64_t SkyNative::CGWindow::window::at::belowWindowID::CGPoint::UInt32::NSScreen() (void* this_ptr); // @ 0x43cc8
    virtual int64_t NSScreen() (void* this_ptr); // @ 0x43cf4
    virtual int64_t NSScreen() (void* this_ptr); // @ 0x43d68
    virtual int64_t SkyNative::CGWindow::id::UInt32() (void* this_ptr); // @ 0x43d90
    virtual int64_t SkyNative::CGWindow::ownerPID::Int32() (void* this_ptr); // @ 0x43d98
    virtual int64_t SkyNative::CGWindow::bounds::CGRect() (void* this_ptr); // @ 0x43da0
    virtual int64_t SkyNative::CGWindow::level::Int32() (void* this_ptr); // @ 0x43db4
    virtual int64_t SkyNative::CGWindow::name() (void* this_ptr); // @ 0x43dbc
    virtual int64_t SkyNative::CGWindow::ownerName() (void* this_ptr); // @ 0x43df0
    virtual int64_t SkyNative::CGWindow::isOnscreen() (void* this_ptr); // @ 0x43e24
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e2c
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e68
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43e98
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x43f30
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x4401c
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x440c0
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x441f0
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x443cc
    virtual int64_t CGRect() (void* this_ptr); // @ 0x443e0
    virtual int64_t CGRect() (void* this_ptr); // @ 0x44434
    virtual int64_t CGRect() (void* this_ptr); // @ 0x4453c
    virtual int64_t CGRect() (void* this_ptr); // @ 0x446ec
    virtual int64_t CFStringRef::hashValue() (void* this_ptr); // @ 0x44780
    virtual int64_t CFStringRef::hash::into::Hasher() (void* this_ptr); // @ 0x447c4
    virtual int64_t CFStringRef::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4480c
    virtual int64_t CFStringRef::ee() (void* this_ptr); // @ 0x44820
    virtual int64_t CFStringRef::CoreFoundation::_CFObject() (void* this_ptr); // @ 0x44878
    virtual int64_t CFStringRef() (void* this_ptr); // @ 0x4488c
    virtual int64_t CFStringRef() (void* this_ptr); // @ 0x448a0
    virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x4490c
    virtual int64_t CGSize() (void* this_ptr); // @ 0x44940
    virtual int64_t CGSize() (void* this_ptr); // @ 0x44a4c
    virtual int64_t CGSize() (void* this_ptr); // @ 0x44bfc
    virtual int64_t CGPoint() (void* this_ptr); // @ 0x44c90
    virtual int64_t CGPoint() (void* this_ptr); // @ 0x44d9c
    virtual int64_t CGPoint() (void* this_ptr); // @ 0x44f4c
    virtual int64_t SkyNative::skyFrontmostWindowJSON::Int8() (void* this_ptr); // @ 0x44ff4
    virtual int64_t SkyNative::skyFrontmostWindowJSON::Int8() (void* this_ptr); // @ 0x45078
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x453a0
    virtual int64_t ObjectiveC::autoreleasepool::invoking::Error() (void* this_ptr); // @ 0x45df0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::bundleIdentifier() (void* this_ptr); // @ 0x45ee0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::iconSmallDataURL() (void* this_ptr); // @ 0x45f14
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::name() (void* this_ptr); // @ 0x45f48
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::windowTitle() (void* this_ptr); // @ 0x45f7c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::stringValue() (void* this_ptr); // @ 0x45fb0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::intValue() (void* this_ptr); // @ 0x46268
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::__derived_enum_equals() (void* this_ptr); // @ 0x46280
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hash::into::Hasher() (void* this_ptr); // @ 0x463b0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hashValue() (void* this_ptr); // @ 0x46484
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::intValue() (void* this_ptr); // @ 0x464cc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::stringValue() (void* this_ptr); // @ 0x464e8
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::ee() (void* this_ptr); // @ 0x465ec
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hashValue() (void* this_ptr); // @ 0x4660c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::hash::into::Hasher() (void* this_ptr); // @ 0x46624
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4663c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46650
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46668
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x46690
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x466a8
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomDebugStringConvertible::debugDescription() (void* this_ptr); // @ 0x466d0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomStringConvertible::description() (void* this_ptr); // @ 0x466fc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::encode::to::Encoder() (void* this_ptr); // @ 0x46728
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::encode::to::Encoder() (void* this_ptr); // @ 0x46a64
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x46ad4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current() (void* this_ptr); // @ 0x46b4c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::allWindows::CGWindow() (void* this_ptr); // @ 0x46c08
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x46ce8
    virtual int64_t IndexingIterator::SkyNative::CGWindow() (void* this_ptr); // @ 0x46d5c
    virtual int64_t NSRunningApplication() (void* this_ptr); // @ 0x46d84
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current::CGWindow() (void* this_ptr); // @ 0x46de4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::frontmostApp::window::NSRunningApplication::CGWindow() (void* this_ptr); // @ 0x46e38
    virtual int64_t NSRunningApplication::processIdentifier::Int32() (void* this_ptr); // @ 0x47490
    virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x47538
    virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x475cc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::current::CGWindow() (void* this_ptr); // @ 0x47638
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47660
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x476d4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x476fc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x47764
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x477cc
    virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x47860
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::allWindows::CGWindow() (void* this_ptr); // @ 0x478cc
    virtual int64_t SkyNative::CGWindow::_ArrayProtocol() (void* this_ptr); // @ 0x479f0
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47a64
    virtual int64_t SkyNative::CGWindow() (void* this_ptr); // @ 0x47ab0
    virtual int64_t Foundation::URL() (void* this_ptr); // @ 0x47b80
    virtual int64_t Foundation::URL() (void* this_ptr); // @ 0x47c3c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47ca4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47d50
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47d9c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47dd8
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47e20
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47ecc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x47fd4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x48074
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x481b4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x48394
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x483b4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x4851c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48718
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48720
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48724
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x4872c
    virtual int64_t CGWindowListOption::rawValue::UInt32() (void* this_ptr); // @ 0x48740
    virtual int64_t NSApplicationActivationPolicy::ee() (void* this_ptr); // @ 0x48744
    virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x4878c
    virtual int64_t CGWindowListOption::SetAlgebra::contains::Element() (void* this_ptr); // @ 0x487cc
    virtual int64_t CGWindowListOption::SetAlgebra::union() (void* this_ptr); // @ 0x48804
    virtual int64_t CGWindowListOption::SetAlgebra::intersection() (void* this_ptr); // @ 0x48840
    virtual int64_t CGWindowListOption::SetAlgebra::symmetricDifference() (void* this_ptr); // @ 0x4887c
    virtual int64_t CGWindowListOption::SetAlgebra::insert::inserted::Element::memberAfterInsert() (void* this_ptr); // @ 0x488b8
    virtual int64_t CGWindowListOption::SetAlgebra::remove::Element() (void* this_ptr); // @ 0x48904
    virtual int64_t CGWindowListOption::SetAlgebra::update::with::Element() (void* this_ptr); // @ 0x48940
    virtual int64_t CGWindowListOption::SetAlgebra::formUnion() (void* this_ptr); // @ 0x4897c
    virtual int64_t CGWindowListOption::SetAlgebra::formIntersection() (void* this_ptr); // @ 0x489bc
    virtual int64_t CGWindowListOption::SetAlgebra::formSymmetricDifference() (void* this_ptr); // @ 0x489fc
    virtual int64_t CGWindowListOption::SetAlgebra::subtracting() (void* this_ptr); // @ 0x48a3c
    virtual int64_t CGWindowListOption::SetAlgebra::isSubset::of() (void* this_ptr); // @ 0x48a50
    virtual int64_t CGWindowListOption::SetAlgebra::isDisjoint::with() (void* this_ptr); // @ 0x48a68
    virtual int64_t CGWindowListOption::SetAlgebra::isSuperset::of() (void* this_ptr); // @ 0x48a80
    virtual int64_t CGWindowListOption::SetAlgebra::isEmpty() (void* this_ptr); // @ 0x48a98
    virtual int64_t CGWindowListOption::SetAlgebra::Element() (void* this_ptr); // @ 0x48ab0
    virtual int64_t CGWindowListOption::SetAlgebra::subtract() (void* this_ptr); // @ 0x48ae8
    virtual int64_t NSApplicationActivationPolicy::rawValue::Raw() (void* this_ptr); // @ 0x48afc
    virtual int64_t NSApplicationActivationPolicy::rawValue() (void* this_ptr); // @ 0x48b2c
    virtual int64_t NSApplicationActivationPolicy::rawValue::Raw() (void* this_ptr); // @ 0x48b50
    virtual int64_t NSApplicationActivationPolicy::rawValue() (void* this_ptr); // @ 0x48b7c
    virtual int64_t CGWindowListOption::ee() (void* this_ptr); // @ 0x48b98
    virtual int64_t CGWindowListOption::ExpressibleByArrayLiteral::array() (void* this_ptr); // @ 0x48be0
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48c1c
    virtual int64_t CGWindowListOption::rawValue::Raw() (void* this_ptr); // @ 0x48c48
    virtual int64_t CGWindowListOption::rawValue::Raw() (void* this_ptr); // @ 0x48c78
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48ca4
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48cb8
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48d24
    virtual int64_t CGWindowListOption::SetAlgebra() (void* this_ptr); // @ 0x48d38
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x48d4c
    virtual int64_t CGWindowListOption::SetAlgebra::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x48db8
    virtual int64_t CGWindowListOption::ExpressibleByArrayLiteral() (void* this_ptr); // @ 0x48dcc
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48e38
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomDebugStringConvertible() (void* this_ptr); // @ 0x48e4c
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48eb4
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys::CustomStringConvertible() (void* this_ptr); // @ 0x48ec8
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48f30
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53::CodingKeys() (void* this_ptr); // @ 0x48f44
    virtual int64_t NSApplicationActivationPolicy() (void* this_ptr); // @ 0x48fac
    virtual int64_t CGWindowListOption::rawValue::UInt32() (void* this_ptr); // @ 0x49018
    virtual int64_t CGWindowListOption() (void* this_ptr); // @ 0x49044
    virtual int64_t UInt32::FixedWidthInteger() (void* this_ptr); // @ 0x490b0
    virtual int64_t SkyNative::FrontmostWindow::_26AA0A7465C7872B6FD8E5562DB35A53() (void* this_ptr); // @ 0x49160
    virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x491c8
    virtual int64_t SkyNative::skyIconSmallDataURLForAppPath::Int8() (void* this_ptr); // @ 0x49254
    virtual int64_t SkyNative::skyIconSmallDataURLForAppPath::Int8() (void* this_ptr); // @ 0x49284
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x492b4
    virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x492f0
    virtual int64_t SkyNative::skyIconMediumDataURLForAppPath::Int8() (void* this_ptr); // @ 0x493b8
    virtual int64_t SkyNative::skyIconMediumDataURLForAppPath::Int8() (void* this_ptr); // @ 0x493e8
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x49418
    virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x49454
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495ac
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495b0
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495bc
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495cc
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495d0
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495dc
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x495ec
    virtual int64_t SkyNative::iconDataURLForAppPath::_7EB943B94F67BE408A4870ABA1CFF45D::make::URL::Int8() (void* this_ptr); // @ 0x49c0c
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x49c3c
    virtual int64_t CGImageAlphaInfo::rawValue::UInt32() (void* this_ptr); // @ 0x49da8
    virtual int64_t CGContextRef::CoreGraphics::draw::in::byTiling::CGImage() (void* this_ptr); // @ 0x49e18
    virtual int64_t NSBitmapImageRep() (void* this_ptr); // @ 0x49e24
    virtual int64_t NSBitmapImageRep::cg() (void* this_ptr); // @ 0x49e84
    virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x49ec0
    virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x49f54
    virtual int64_t Foundation::Data::base64EncodedString::options::NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x49fc0
    virtual int64_t OS_dispatch_queue() (void* this_ptr); // @ 0x49fec
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a04c
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a1c4
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a218
    virtual int64_t SkyNative() (void* this_ptr); // @ 0x4a248
    virtual int64_t CGImageRef() (void* this_ptr); // @ 0x4a25c
    virtual int64_t NSBitmapImageRep::cg() (void* this_ptr); // @ 0x4a2f0
    virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_bridgeTo::C::_::CType() (void* this_ptr); // @ 0x4a334
    virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_forceBridgeFrom::C::result::_::CType() (void* this_ptr); // @ 0x4a36c
    virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_conditionallyBridgeFrom::C::result::_::CType() (void* this_ptr); // @ 0x4a3b4
    virtual int64_t NSBitmapImageRepPropertyKey::_ObjectiveCBridgeable::_unconditionallyBridgeFrom::C::_::CType() (void* this_ptr); // @ 0x4a400
    virtual int64_t NSBitmapImageRepPropertyKey::hashValue() (void* this_ptr); // @ 0x4a448
    virtual int64_t NSBitmapImageRepPropertyKey::hash::into::Hasher() (void* this_ptr); // @ 0x4a484
    virtual int64_t NSBitmapImageRepPropertyKey::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4a4c8
    virtual int64_t NSBitmapImageRepPropertyKey::ee() (void* this_ptr); // @ 0x4a50c
    virtual int64_t NSBitmapImageRepPropertyKey::rawValue::Raw() (void* this_ptr); // @ 0x4a554
    virtual int64_t NSBitmapImageRepPropertyKey::rawValue() (void* this_ptr); // @ 0x4a588
    virtual int64_t NSBitmapImageRepPropertyKey::rawValue::Raw() (void* this_ptr); // @ 0x4a5f8
    virtual int64_t NSBitmapImageRepPropertyKey::rawValue() (void* this_ptr); // @ 0x4a628
    virtual int64_t NSBitmapImageRepPropertyKey::_HasCustomAnyHashableRepresentation::_to() (void* this_ptr); // @ 0x4a684
    virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper() (void* this_ptr); // @ 0x4a6cc
    virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a6e0
    virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper::_HasCustomAnyHashableRepresentation() (void* this_ptr); // @ 0x4a74c
    virtual int64_t NSBitmapImageRepPropertyKey::_HasCustomAnyHashableRepresentation() (void* this_ptr); // @ 0x4a760
    virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a7cc
    virtual int64_t NSBitmapImageRepPropertyKey() (void* this_ptr); // @ 0x4a7e0
    virtual int64_t NSBitmapImageRepPropertyKey::_SwiftNewtypeWrapper() (void* this_ptr); // @ 0x4a84c
    virtual int64_t Ss::_ObjectiveCBridgeable::Foundation() (void* this_ptr); // @ 0x4a8b8
    virtual int64_t _allocateUninitialized::NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x4a91c
    virtual int64_t NSDataBase64EncodingOptions() (void* this_ptr); // @ 0x4a9f0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize() (void* this_ptr); // @ 0x4aa84
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize::CGSize() (void* this_ptr); // @ 0x4aa88
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIconSize::CGSize() (void* this_ptr); // @ 0x4aa94
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize() (void* this_ptr); // @ 0x4aaa0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aaa4
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aab0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing() (void* this_ptr); // @ 0x4aab8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aabc
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::statusIndicatorSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aac8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize() (void* this_ptr); // @ 0x4aad0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aad4
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuIconPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aae0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize() (void* this_ptr); // @ 0x4aae8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize::CGSize() (void* this_ptr); // @ 0x4aaec
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconSize::CGSize() (void* this_ptr); // @ 0x4aaf8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap() (void* this_ptr); // @ 0x4ab04
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab08
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::menuAppIconOverlap::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab14
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab1c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab20
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::maximumRecent::Count() (void* this_ptr); // @ 0x4ab2c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize() (void* this_ptr); // @ 0x4ab38
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize::CGSize() (void* this_ptr); // @ 0x4ab3c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSize::CGSize() (void* this_ptr); // @ 0x4ab48
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset() (void* this_ptr); // @ 0x4ab60
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab64
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab70
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset() (void* this_ptr); // @ 0x4ab78
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab7c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionHorizontalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab88
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset() (void* this_ptr); // @ 0x4ab90
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ab94
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionVerticalInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aba0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius() (void* this_ptr); // @ 0x4aba8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abac
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowSelectionCornerRadius::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abb8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize() (void* this_ptr); // @ 0x4abc0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize::CGSize() (void* this_ptr); // @ 0x4abc4
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconSize::CGSize() (void* this_ptr); // @ 0x4abd0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset() (void* this_ptr); // @ 0x4abdc
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abe0
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abec
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset() (void* this_ptr); // @ 0x4abf4
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4abf8
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowComputerUseIconInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac04
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing() (void* this_ptr); // @ 0x4ac0c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac10
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowTitleSpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac1c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize() (void* this_ptr); // @ 0x4ac24
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac28
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronPointSize::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac34
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset() (void* this_ptr); // @ 0x4ac3c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac40
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowChevronTrailingInset::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac4c
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing() (void* this_ptr); // @ 0x4ac54
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac58
    virtual int64_t SkyNative::StatusItemLayout::_9A98D77A68D38AE72B97FD13555B0A53::featureRowAccessorySpacing::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4ac64
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse() (void* this_ptr); // @ 0x4ac6c
    virtual int64_t NSColor() (void* this_ptr); // @ 0x4acc0
    virtual int64_t NSColor::srgbRed::green::blue::alpha::CoreGraphics::CGFloat::Itc() (void* this_ptr); // @ 0x4ad20
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse::NSColor() (void* this_ptr); // @ 0x4ad6c
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerUse::NSColor() (void* this_ptr); // @ 0x4adbc
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory() (void* this_ptr); // @ 0x4adf0
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory::NSColor() (void* this_ptr); // @ 0x4ae60
    virtual int64_t SkyNative::StatusItemColor::_9A98D77A68D38AE72B97FD13555B0A53::computerHistory::NSColor() (void* this_ptr); // @ 0x4aeb0
    virtual int64_t SkyNative::StatusItemAppIconStack::_9A98D77A68D38AE72B97FD13555B0A53::width::imageCount::CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4aee4
    virtual int64_t CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4afd8
    virtual int64_t CoreGraphics::CGFloat() (void* this_ptr); // @ 0x4b03c
    virtual int64_t iS() (void* this_ptr); // @ 0x4b208
    virtual int64_t SkyNative::StatusItemAppIconStack::_9A98D77A68D38AE72B97FD13555B0A53::draw::in::startingAt::CoreGraphics::CGFloat::NSImage::CGRect() (void* this_ptr); // @ 0x4b26c
    virtual int64_t NSImage() (void* this_ptr); // @ 0x4b7b8
    virtual int64_t NSImage() (void* this_ptr); // @ 0x4b82c
    virtual int64_t EnumeratedSequence::Iterator::NSImage() (void* this_ptr); // @ 0x4b8a0
    virtual int64_t NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b8c8
    virtual int64_t ReversedCollection::Iterator::NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b93c
    virtual int64_t NSImage::image::CGRect::rect() (void* this_ptr); // @ 0x4b964
    virtual int64_t CGRect::CoreGraphics::minY::CGFloat() (void* this_ptr); // @ 0x4b98c
    virtual int64_t NSImage() (void* this_ptr); // @ 0x4b9c8
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4ba28
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bb54
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4bbdc
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4bbf0
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4bc2c
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4bc94
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4bcd8
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4bd1c
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4bd50
    virtual int64_t SkyNative::StatusItemObservationScope::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4bd80
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bdec
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4bf64
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c02c
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c1ec
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c2f0
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue() (void* this_ptr); // @ 0x4c468
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c530
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c544
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c580
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4c5e8
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4c62c
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c670
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c6a4
    virtual int64_t SkyNative::StatusItemPauseDuration::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4c6d4
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c740
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c754
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c790
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4c7f8
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4c83c
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c880
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4c8b4
    virtual int64_t SkyNative::StatusItemClearHistoryScope::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4c8e4
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4c950
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4c964
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4c9a0
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4ca08
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4ca4c
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4ca90
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::rawValue::Raw() (void* this_ptr); // @ 0x4cac4
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::from::Decoder() (void* this_ptr); // @ 0x4caf4
    virtual int64_t SkyNative::StatusItemRecorderState::_9A98D77A68D38AE72B97FD13555B0A53::encode::to::Encoder() (void* this_ptr); // @ 0x4cb68
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::assetFileName() (void* this_ptr); // @ 0x4cbd4
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::fallbackSymbol() (void* this_ptr); // @ 0x4cc5c
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::__derived_enum_equals() (void* this_ptr); // @ 0x4cce4
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4cd80
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4ce08
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53() (void* this_ptr); // @ 0x4ce50
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::ee() (void* this_ptr); // @ 0x4ceb8
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hashValue() (void* this_ptr); // @ 0x4ced8
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::hash::into::Hasher() (void* this_ptr); // @ 0x4cef0
    virtual int64_t SkyNative::StatusItemFeatureIcon::_9A98D77A68D38AE72B97FD13555B0A53::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x4cf08
    virtual int64_t SkyNative::StatusItemEvent::_9A98D77A68D38AE72B97FD13555B0A53::Kind::rawValue() (void* this_ptr); // @ 0x4cf1c
    virtual int64_t SkyNative::StatusItemEvent::_9A98D77A68D38AE72B97FD13555B0A53::Kind::rawValue() (void* this_ptr); // @ 0x4d360
};

