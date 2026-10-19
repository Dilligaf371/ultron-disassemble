// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : samples/ultron_objc_sample
// Classes Found : 2 | Virtual Dispatch Sites: 2
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_a18_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000b00 (offset +0x38)
};

class PolymoObject_a18 {
public:
    const PolymoObject_a18_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_7(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000b00 (offset +0x38)
};

struct PolymoObject_f3c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001110 (offset +0x30)
};

class PolymoObject_f3c {
public:
    const PolymoObject_f3c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_6(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001110 (offset +0x30)
};

