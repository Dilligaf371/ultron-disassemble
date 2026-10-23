// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : samples/monday_board_5106608109
// Classes Found : 1 | Virtual Dispatch Sites: 4
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_730_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000798 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000007bc (offset +0x20)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000824 (offset +0x10)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000088c (offset +0x8)
};

class PolymoObject_730 {
public:
    const PolymoObject_730_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000798 (offset +0x18)
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000007bc (offset +0x20)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100000824 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x10000088c (offset +0x8)
};

