// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesModel.o
// Classes Found : 10 | Virtual Dispatch Sites: 14
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_230_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x524c (offset +0x0)
};

class PolymoObject_230 {
public:
    const PolymoObject_230_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x524c (offset +0x0)
};

struct PolymoObject_26c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x8280 (offset +0x0)
};

class PolymoObject_26c {
public:
    const PolymoObject_26c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x8280 (offset +0x0)
};

struct PolymoObject_4e4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x3598 (offset +0x0)
};

class PolymoObject_4e4 {
public:
    const PolymoObject_4e4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x3598 (offset +0x0)
};

struct PolymoObject_5cc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x360c (offset +0x0)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x3644 (offset +0x0)
};

class PolymoObject_5cc {
public:
    const PolymoObject_5cc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x360c (offset +0x0)
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x3644 (offset +0x0)
};

struct PolymoObject_66c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x36a4 (offset +0x0)
};

class PolymoObject_66c {
public:
    const PolymoObject_66c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x36a4 (offset +0x0)
};

struct PolymoObject_8e0_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3908 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3924 (offset +0x10)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x3944 (offset +0x10)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3968 (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x397c (offset +0x8)
};

class PolymoObject_8e0 {
public:
    const PolymoObject_8e0_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3908 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3924 (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x9 @ 0x3944 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3968 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x397c (offset +0x8)
};

struct PolymoObject_984_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39a4 (offset +0x20)
};

class PolymoObject_984 {
public:
    const PolymoObject_984_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_4(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39a4 (offset +0x20)
};

struct PolymoObject_9c8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39d8 (offset +0x8)
};

class PolymoObject_9c8 {
public:
    const PolymoObject_9c8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x39d8 (offset +0x8)
};

struct PolymoObject_a90_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3aa4 (offset +0x8)
};

class PolymoObject_a90 {
public:
    const PolymoObject_a90_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x3aa4 (offset +0x8)
};

struct swift_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x28c
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::allCases() (void* this_ptr); // @ 0x2cc
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::rawValue() (void* this_ptr); // @ 0x33c
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::ee() (void* this_ptr); // @ 0x4f4
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::hashValue() (void* this_ptr); // @ 0x508
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::hash::into::Hasher() (void* this_ptr); // @ 0x544
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x588
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::rawValue::Raw() (void* this_ptr); // @ 0x5cc
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::rawValue::Raw() (void* this_ptr); // @ 0x600
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::CaseIterable::allCases::All() (void* this_ptr); // @ 0x630
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x658
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x65c
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x668
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x674
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x678
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x684
    int64_t (*vslot_16)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x694
    int64_t (*vslot_17)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x698
    int64_t (*vslot_18)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x6a4
    int64_t (*vslot_19)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget::count::width::height::budget() (void* this_ptr); // @ 0x6b0
    int64_t (*vslot_20)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::light() (void* this_ptr); // @ 0xad8
    int64_t (*vslot_21)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::light::SIMD3() (void* this_ptr); // @ 0xf54
    int64_t (*vslot_22)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::light::SIMD3() (void* this_ptr); // @ 0xfa4
    int64_t (*vslot_23)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::red() (void* this_ptr); // @ 0xfbc
    int64_t (*vslot_24)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::red::SIMD3() (void* this_ptr); // @ 0x1438
    int64_t (*vslot_25)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::red::SIMD3() (void* this_ptr); // @ 0x1488
    int64_t (*vslot_26)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::green() (void* this_ptr); // @ 0x14a0
    int64_t (*vslot_27)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::green::SIMD3() (void* this_ptr); // @ 0x191c
    int64_t (*vslot_28)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::green::SIMD3() (void* this_ptr); // @ 0x196c
    int64_t (*vslot_29)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::charcoal() (void* this_ptr); // @ 0x1984
    int64_t (*vslot_30)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::charcoal::SIMD3() (void* this_ptr); // @ 0x1e00
    int64_t (*vslot_31)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::charcoal::SIMD3() (void* this_ptr); // @ 0x1e50
    int64_t (*vslot_32)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::back() (void* this_ptr); // @ 0x1e68
    int64_t (*vslot_33)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::back::SIMD3() (void* this_ptr); // @ 0x22e4
    int64_t (*vslot_34)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::back::SIMD3() (void* this_ptr); // @ 0x2334
    int64_t (*vslot_35)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::disc() (void* this_ptr); // @ 0x234c
    int64_t (*vslot_36)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::disc::SIMD3() (void* this_ptr); // @ 0x27c8
    int64_t (*vslot_37)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::disc::SIMD3() (void* this_ptr); // @ 0x2818
    int64_t (*vslot_38)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::alertAccent() (void* this_ptr); // @ 0x2830
    int64_t (*vslot_39)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::alertAccent::SIMD3() (void* this_ptr); // @ 0x2874
    int64_t (*vslot_40)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::alertAccent::SIMD3() (void* this_ptr); // @ 0x28c4
    int64_t (*vslot_41)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::finishedAccent() (void* this_ptr); // @ 0x28dc
    int64_t (*vslot_42)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::finishedAccent::SIMD3() (void* this_ptr); // @ 0x2920
    int64_t (*vslot_43)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::finishedAccent::SIMD3() (void* this_ptr); // @ 0x2970
    int64_t (*vslot_44)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette::color::SIMD3() (void* this_ptr); // @ 0x2988
    int64_t (*vslot_45)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::rawValue() (void* this_ptr); // @ 0x2a4c
    int64_t (*vslot_46)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::allCases() (void* this_ptr); // @ 0x2b38
    int64_t (*vslot_47)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::rawValue() (void* this_ptr); // @ 0x2b98
    int64_t (*vslot_48)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::ee() (void* this_ptr); // @ 0x2c3c
    int64_t (*vslot_49)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::hashValue() (void* this_ptr); // @ 0x2c50
    int64_t (*vslot_50)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::hash::into::Hasher() (void* this_ptr); // @ 0x2c8c
    int64_t (*vslot_51)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x2cd0
    int64_t (*vslot_52)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::rawValue::Raw() (void* this_ptr); // @ 0x2d14
    int64_t (*vslot_53)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::rawValue::Raw() (void* this_ptr); // @ 0x2d40
    int64_t (*vslot_54)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::CaseIterable::allCases::All() (void* this_ptr); // @ 0x2d6c
    int64_t (*vslot_55)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::a() (void* this_ptr); // @ 0x2d94
    int64_t (*vslot_56)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::b() (void* this_ptr); // @ 0x2d98
    int64_t (*vslot_57)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::c() (void* this_ptr); // @ 0x2da0
    int64_t (*vslot_58)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::faceClass() (void* this_ptr); // @ 0x2da8
    int64_t (*vslot_59)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::__derived_struct_equals() (void* this_ptr); // @ 0x2db0
    int64_t (*vslot_60)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::a::b::c::faceClass::iA() (void* this_ptr); // @ 0x2eb0
    int64_t (*vslot_61)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face::ee() (void* this_ptr); // @ 0x2eb4
    int64_t (*vslot_62)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge::a() (void* this_ptr); // @ 0x2ef4
    int64_t (*vslot_63)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge::b() (void* this_ptr); // @ 0x2ef8
    int64_t (*vslot_64)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge::__derived_struct_equals() (void* this_ptr); // @ 0x2f00
    int64_t (*vslot_65)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge::a::b() (void* this_ptr); // @ 0x2f80
    int64_t (*vslot_66)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge::ee() (void* this_ptr); // @ 0x2f84
    int64_t (*vslot_67)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fb4
    int64_t (*vslot_68)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fb8
    int64_t (*vslot_69)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fc4
    int64_t (*vslot_70)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::projectionScale() (void* this_ptr); // @ 0x2fd4
    int64_t (*vslot_71)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::silhouetteRadius() (void* this_ptr); // @ 0x2ffc
    int64_t (*vslot_72)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x3138
    int64_t (*vslot_73)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x313c
    int64_t (*vslot_74)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x3148
    int64_t (*vslot_75)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::vertices() (void* this_ptr); // @ 0x3160
    int64_t (*vslot_76)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::vertices::Face::faces::Edge::edges() (void* this_ptr); // @ 0x31c8
    int64_t (*vslot_77)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::vertices::SIMD3() (void* this_ptr); // @ 0x3218
    int64_t (*vslot_78)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::vertices::SIMD3() (void* this_ptr); // @ 0x3268
    int64_t (*vslot_79)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::faces() (void* this_ptr); // @ 0x3294
    int64_t (*vslot_80)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::faces::Face() (void* this_ptr); // @ 0x32fc
    int64_t (*vslot_81)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::faces::Face() (void* this_ptr); // @ 0x334c
    int64_t (*vslot_82)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::edges() (void* this_ptr); // @ 0x3378
    int64_t (*vslot_83)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::edges::Edge() (void* this_ptr); // @ 0x33e0
    int64_t (*vslot_84)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::edges::Edge() (void* this_ptr); // @ 0x3430
    int64_t (*vslot_85)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::silhouetteRadius::SIMD3() (void* this_ptr); // @ 0x345c
    int64_t (*vslot_86)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t map::Element() (void* this_ptr); // @ 0x34e4
    int64_t (*vslot_87)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SIMD3() (void* this_ptr); // @ 0x3bcc
    int64_t (*vslot_88)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::centroid::SIMD3::Face() (void* this_ptr); // @ 0x3d54
    int64_t (*vslot_89)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::midpoint::SIMD3::Edge() (void* this_ptr); // @ 0x494c
    int64_t (*vslot_90)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F() (void* this_ptr); // @ 0x5204
    int64_t (*vslot_91)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0x5230
    int64_t (*vslot_92)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t IndexingIterator() (void* this_ptr); // @ 0x8154
    int64_t (*vslot_93)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Stride() (void* this_ptr); // @ 0x817c
    int64_t (*vslot_94)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t iS() (void* this_ptr); // @ 0x8208
    int64_t (*vslot_95)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::vertices::Face::faces::Edge::edges() (void* this_ptr); // @ 0xd6b0
    int64_t (*vslot_96)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::joined() (void* this_ptr); // @ 0xd708
    int64_t (*vslot_97)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::HX() (void* this_ptr); // @ 0xdce8
    int64_t (*vslot_98)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::HX() (void* this_ptr); // @ 0xe108
    int64_t (*vslot_99)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SIMD3() (void* this_ptr); // @ 0xe14c
    int64_t (*vslot_100)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::snap::_29ED978E32CEF27ACB882FE93D26464F::SIMD3() (void* this_ptr); // @ 0xe174
    int64_t (*vslot_101)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::centre::it() (void* this_ptr); // @ 0xe354
    int64_t (*vslot_102)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::it() (void* this_ptr); // @ 0xef30
    int64_t (*vslot_103)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::it() (void* this_ptr); // @ 0xf0b4
    int64_t (*vslot_104)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t it() (void* this_ptr); // @ 0xf0e8
    int64_t (*vslot_105)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::classify::_29ED978E32CEF27ACB882FE93D26464F::isFront() (void* this_ptr); // @ 0xf15c
    int64_t (*vslot_106)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_() (void* this_ptr); // @ 0xf370
    int64_t (*vslot_107)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_() (void* this_ptr); // @ 0xf44c
    int64_t (*vslot_108)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0xf474
    int64_t (*vslot_109)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0xf4e8
    int64_t (*vslot_110)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::centroidZ::_29ED978E32CEF27ACB882FE93D26464F::Face::SIMD3() (void* this_ptr); // @ 0xf510
    int64_t (*vslot_111)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0xf5d8
    int64_t (*vslot_112)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0xf69c
    int64_t (*vslot_113)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_TA() (void* this_ptr); // @ 0xf798
    int64_t (*vslot_114)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0xf7c0
    int64_t (*vslot_115)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0xf834
    int64_t (*vslot_116)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t it() (void* this_ptr); // @ 0xf85c
    int64_t (*vslot_117)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t PartialRangeUpTo() (void* this_ptr); // @ 0xf8ac
    int64_t (*vslot_118)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf920
    int64_t (*vslot_119)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf928
    int64_t (*vslot_120)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf930
    int64_t (*vslot_121)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf940
    int64_t (*vslot_122)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf944
    int64_t (*vslot_123)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf94c
    int64_t (*vslot_124)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf954
    int64_t (*vslot_125)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf964
    int64_t (*vslot_126)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf968
    int64_t (*vslot_127)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf970
    int64_t (*vslot_128)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf978
    int64_t (*vslot_129)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf988
    int64_t (*vslot_130)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf98c
    int64_t (*vslot_131)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf994
    int64_t (*vslot_132)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf99c
    int64_t (*vslot_133)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf9ac
    int64_t (*vslot_134)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9b0
    int64_t (*vslot_135)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9b8
    int64_t (*vslot_136)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9c0
    int64_t (*vslot_137)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9d0
    int64_t (*vslot_138)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9d4
    int64_t (*vslot_139)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9dc
    int64_t (*vslot_140)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9e4
    int64_t (*vslot_141)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9f4
    int64_t (*vslot_142)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::count() (void* this_ptr); // @ 0xf9f8
    int64_t (*vslot_143)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::reduceTransparency() (void* this_ptr); // @ 0xfbbc
    int64_t (*vslot_144)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::__derived_struct_equals() (void* this_ptr); // @ 0xfbf8
    int64_t (*vslot_145)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::geometry::weights::pose::accent::rendering::phases::SIMD4::LtcfC() (void* this_ptr); // @ 0x10b74
    int64_t (*vslot_146)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms::ee() (void* this_ptr); // @ 0x10b90
    int64_t (*vslot_147)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10bfc
    int64_t (*vslot_148)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c04
    int64_t (*vslot_149)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c0c
    int64_t (*vslot_150)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c14
    int64_t (*vslot_151)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c24
    int64_t (*vslot_152)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c28
    int64_t (*vslot_153)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c30
    int64_t (*vslot_154)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c38
    int64_t (*vslot_155)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c40
    int64_t (*vslot_156)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c50
    int64_t (*vslot_157)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c54
    int64_t (*vslot_158)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c5c
    int64_t (*vslot_159)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c64
    int64_t (*vslot_160)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c6c
    int64_t (*vslot_161)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c7c
    int64_t (*vslot_162)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c80
    int64_t (*vslot_163)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c88
    int64_t (*vslot_164)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c90
    int64_t (*vslot_165)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c98
    int64_t (*vslot_166)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10ca8
    int64_t (*vslot_167)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cac
    int64_t (*vslot_168)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cb4
    int64_t (*vslot_169)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cbc
    int64_t (*vslot_170)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cc4
    int64_t (*vslot_171)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cd4
    int64_t (*vslot_172)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10cd8
    int64_t (*vslot_173)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10ce0
    int64_t (*vslot_174)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10ce8
    int64_t (*vslot_175)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10cf0
    int64_t (*vslot_176)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10d00
    int64_t (*vslot_177)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d04
    int64_t (*vslot_178)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d0c
    int64_t (*vslot_179)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d14
    int64_t (*vslot_180)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d1c
    int64_t (*vslot_181)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d2c
    int64_t (*vslot_182)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d30
    int64_t (*vslot_183)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d38
    int64_t (*vslot_184)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d40
    int64_t (*vslot_185)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d48
    int64_t (*vslot_186)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d58
    int64_t (*vslot_187)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d5c
    int64_t (*vslot_188)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d64
    int64_t (*vslot_189)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d6c
    int64_t (*vslot_190)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d74
    int64_t (*vslot_191)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d84
    int64_t (*vslot_192)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d88
    int64_t (*vslot_193)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d90
    int64_t (*vslot_194)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d98
    int64_t (*vslot_195)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10da0
    int64_t (*vslot_196)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10db0
    int64_t (*vslot_197)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10db4
    int64_t (*vslot_198)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dbc
    int64_t (*vslot_199)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dc4
    int64_t (*vslot_200)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dcc
    int64_t (*vslot_201)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10ddc
    int64_t (*vslot_202)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::framesPerSecond::for() (void* this_ptr); // @ 0x10de0
    int64_t (*vslot_203)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10eac
    int64_t (*vslot_204)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10eb0
    int64_t (*vslot_205)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10ebc
    int64_t (*vslot_206)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::target::SIMD4() (void* this_ptr); // @ 0x10ed4
    int64_t (*vslot_207)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::step::dt::state::level::reduce() (void* this_ptr); // @ 0x1102c
    int64_t (*vslot_208)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::settled::state::level::time::reduce() (void* this_ptr); // @ 0x115ac
    int64_t (*vslot_209)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x11928
    int64_t (*vslot_210)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::dissolve::reduceTransparency() (void* this_ptr); // @ 0x119b4
    int64_t (*vslot_211)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::uniforms::width::height::budget::pixelScale::reduceTransparency() (void* this_ptr); // @ 0x11b20
    int64_t (*vslot_212)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::__derived_struct_equals() (void* this_ptr); // @ 0x1313c
    int64_t (*vslot_213)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133dc
    int64_t (*vslot_214)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133e4
    int64_t (*vslot_215)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133ec
    int64_t (*vslot_216)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133f4
    int64_t (*vslot_217)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133fc
    int64_t (*vslot_218)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13404
    int64_t (*vslot_219)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1340c
    int64_t (*vslot_220)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13414
    int64_t (*vslot_221)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1341c
    int64_t (*vslot_222)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13424
    int64_t (*vslot_223)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1342c
    int64_t (*vslot_224)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13434
    int64_t (*vslot_225)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13498
    int64_t (*vslot_226)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x134ac
    int64_t (*vslot_227)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState::CaseIterable::AllCases() (void* this_ptr); // @ 0x13514
    int64_t (*vslot_228)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13528
    int64_t (*vslot_229)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x1359c
    int64_t (*vslot_230)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x135b0
    int64_t (*vslot_231)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass::CaseIterable::AllCases() (void* this_ptr); // @ 0x13618
    int64_t (*vslot_232)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x1362c
    int64_t (*vslot_233)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion::ee() (void* this_ptr); // @ 0x136a0
    int64_t (*vslot_234)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13714
    int64_t (*vslot_235)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x1387c
    int64_t (*vslot_236)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a78
    int64_t (*vslot_237)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a80
    int64_t (*vslot_238)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a84
    int64_t (*vslot_239)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a8c
    int64_t (*vslot_240)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesBudget() (void* this_ptr); // @ 0x13aa0
    int64_t (*vslot_241)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesPalette() (void* this_ptr); // @ 0x13ab4
    int64_t (*vslot_242)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13ac8
    int64_t (*vslot_243)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13c30
    int64_t (*vslot_244)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e2c
    int64_t (*vslot_245)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e34
    int64_t (*vslot_246)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e38
    int64_t (*vslot_247)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e40
    int64_t (*vslot_248)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry() (void* this_ptr); // @ 0x13e54
    int64_t (*vslot_249)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13e68
    int64_t (*vslot_250)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13eb8
    int64_t (*vslot_251)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13fb0
    int64_t (*vslot_252)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x14160
    int64_t (*vslot_253)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x14180
    int64_t (*vslot_254)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x1428c
    int64_t (*vslot_255)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x1443c
    int64_t (*vslot_256)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14450
    int64_t (*vslot_257)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x144b8
    int64_t (*vslot_258)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14598
    int64_t (*vslot_259)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14768
    int64_t (*vslot_260)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x1477c
    int64_t (*vslot_261)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x147e4
    int64_t (*vslot_262)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x148c4
    int64_t (*vslot_263)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x14a84
    int64_t (*vslot_264)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x14a98
    int64_t (*vslot_265)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x14b00
    int64_t (*vslot_266)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x14b68
    int64_t (*vslot_267)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _endMutation() (void* this_ptr); // @ 0x14b90
};

class swift {
public:
    const swift_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t _finalizeUninitializedArray() (void* this_ptr); // @ 0x28c
    virtual int64_t Aleria::ParticlesState::allCases() (void* this_ptr); // @ 0x2cc
    virtual int64_t Aleria::ParticlesState::rawValue() (void* this_ptr); // @ 0x33c
    virtual int64_t Aleria::ParticlesState::ee() (void* this_ptr); // @ 0x4f4
    virtual int64_t Aleria::ParticlesState::hashValue() (void* this_ptr); // @ 0x508
    virtual int64_t Aleria::ParticlesState::hash::into::Hasher() (void* this_ptr); // @ 0x544
    virtual int64_t Aleria::ParticlesState::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x588
    virtual int64_t Aleria::ParticlesState::rawValue::Raw() (void* this_ptr); // @ 0x5cc
    virtual int64_t Aleria::ParticlesState::rawValue::Raw() (void* this_ptr); // @ 0x600
    virtual int64_t Aleria::ParticlesState::CaseIterable::allCases::All() (void* this_ptr); // @ 0x630
    virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x658
    virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x65c
    virtual int64_t Aleria::ParticlesBudget::app() (void* this_ptr); // @ 0x668
    virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x674
    virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x678
    virtual int64_t Aleria::ParticlesBudget::preview() (void* this_ptr); // @ 0x684
    virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x694
    virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x698
    virtual int64_t Aleria::ParticlesBudget::floor() (void* this_ptr); // @ 0x6a4
    virtual int64_t Aleria::ParticlesBudget::count::width::height::budget() (void* this_ptr); // @ 0x6b0
    virtual int64_t Aleria::ParticlesPalette::light() (void* this_ptr); // @ 0xad8
    virtual int64_t Aleria::ParticlesPalette::light::SIMD3() (void* this_ptr); // @ 0xf54
    virtual int64_t Aleria::ParticlesPalette::light::SIMD3() (void* this_ptr); // @ 0xfa4
    virtual int64_t Aleria::ParticlesPalette::red() (void* this_ptr); // @ 0xfbc
    virtual int64_t Aleria::ParticlesPalette::red::SIMD3() (void* this_ptr); // @ 0x1438
    virtual int64_t Aleria::ParticlesPalette::red::SIMD3() (void* this_ptr); // @ 0x1488
    virtual int64_t Aleria::ParticlesPalette::green() (void* this_ptr); // @ 0x14a0
    virtual int64_t Aleria::ParticlesPalette::green::SIMD3() (void* this_ptr); // @ 0x191c
    virtual int64_t Aleria::ParticlesPalette::green::SIMD3() (void* this_ptr); // @ 0x196c
    virtual int64_t Aleria::ParticlesPalette::charcoal() (void* this_ptr); // @ 0x1984
    virtual int64_t Aleria::ParticlesPalette::charcoal::SIMD3() (void* this_ptr); // @ 0x1e00
    virtual int64_t Aleria::ParticlesPalette::charcoal::SIMD3() (void* this_ptr); // @ 0x1e50
    virtual int64_t Aleria::ParticlesPalette::back() (void* this_ptr); // @ 0x1e68
    virtual int64_t Aleria::ParticlesPalette::back::SIMD3() (void* this_ptr); // @ 0x22e4
    virtual int64_t Aleria::ParticlesPalette::back::SIMD3() (void* this_ptr); // @ 0x2334
    virtual int64_t Aleria::ParticlesPalette::disc() (void* this_ptr); // @ 0x234c
    virtual int64_t Aleria::ParticlesPalette::disc::SIMD3() (void* this_ptr); // @ 0x27c8
    virtual int64_t Aleria::ParticlesPalette::disc::SIMD3() (void* this_ptr); // @ 0x2818
    virtual int64_t Aleria::ParticlesPalette::alertAccent() (void* this_ptr); // @ 0x2830
    virtual int64_t Aleria::ParticlesPalette::alertAccent::SIMD3() (void* this_ptr); // @ 0x2874
    virtual int64_t Aleria::ParticlesPalette::alertAccent::SIMD3() (void* this_ptr); // @ 0x28c4
    virtual int64_t Aleria::ParticlesPalette::finishedAccent() (void* this_ptr); // @ 0x28dc
    virtual int64_t Aleria::ParticlesPalette::finishedAccent::SIMD3() (void* this_ptr); // @ 0x2920
    virtual int64_t Aleria::ParticlesPalette::finishedAccent::SIMD3() (void* this_ptr); // @ 0x2970
    virtual int64_t Aleria::ParticlesPalette::color::SIMD3() (void* this_ptr); // @ 0x2988
    virtual int64_t Aleria::ParticlesFaceClass::rawValue() (void* this_ptr); // @ 0x2a4c
    virtual int64_t Aleria::ParticlesFaceClass::allCases() (void* this_ptr); // @ 0x2b38
    virtual int64_t Aleria::ParticlesFaceClass::rawValue() (void* this_ptr); // @ 0x2b98
    virtual int64_t Aleria::ParticlesFaceClass::ee() (void* this_ptr); // @ 0x2c3c
    virtual int64_t Aleria::ParticlesFaceClass::hashValue() (void* this_ptr); // @ 0x2c50
    virtual int64_t Aleria::ParticlesFaceClass::hash::into::Hasher() (void* this_ptr); // @ 0x2c8c
    virtual int64_t Aleria::ParticlesFaceClass::_rawHashValue::seed::i_() (void* this_ptr); // @ 0x2cd0
    virtual int64_t Aleria::ParticlesFaceClass::rawValue::Raw() (void* this_ptr); // @ 0x2d14
    virtual int64_t Aleria::ParticlesFaceClass::rawValue::Raw() (void* this_ptr); // @ 0x2d40
    virtual int64_t Aleria::ParticlesFaceClass::CaseIterable::allCases::All() (void* this_ptr); // @ 0x2d6c
    virtual int64_t Aleria::ParticlesGeometry::Face::a() (void* this_ptr); // @ 0x2d94
    virtual int64_t Aleria::ParticlesGeometry::Face::b() (void* this_ptr); // @ 0x2d98
    virtual int64_t Aleria::ParticlesGeometry::Face::c() (void* this_ptr); // @ 0x2da0
    virtual int64_t Aleria::ParticlesGeometry::Face::faceClass() (void* this_ptr); // @ 0x2da8
    virtual int64_t Aleria::ParticlesGeometry::Face::__derived_struct_equals() (void* this_ptr); // @ 0x2db0
    virtual int64_t Aleria::ParticlesGeometry::Face::a::b::c::faceClass::iA() (void* this_ptr); // @ 0x2eb0
    virtual int64_t Aleria::ParticlesGeometry::Face::ee() (void* this_ptr); // @ 0x2eb4
    virtual int64_t Aleria::ParticlesGeometry::Edge::a() (void* this_ptr); // @ 0x2ef4
    virtual int64_t Aleria::ParticlesGeometry::Edge::b() (void* this_ptr); // @ 0x2ef8
    virtual int64_t Aleria::ParticlesGeometry::Edge::__derived_struct_equals() (void* this_ptr); // @ 0x2f00
    virtual int64_t Aleria::ParticlesGeometry::Edge::a::b() (void* this_ptr); // @ 0x2f80
    virtual int64_t Aleria::ParticlesGeometry::Edge::ee() (void* this_ptr); // @ 0x2f84
    virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fb4
    virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fb8
    virtual int64_t Aleria::ParticlesGeometry::markFraction() (void* this_ptr); // @ 0x2fc4
    virtual int64_t Aleria::ParticlesGeometry::projectionScale() (void* this_ptr); // @ 0x2fd4
    virtual int64_t Aleria::ParticlesGeometry::silhouetteRadius() (void* this_ptr); // @ 0x2ffc
    virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x3138
    virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x313c
    virtual int64_t Aleria::ParticlesGeometry::discRadius() (void* this_ptr); // @ 0x3148
    virtual int64_t Aleria::ParticlesGeometry::vertices() (void* this_ptr); // @ 0x3160
    virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::vertices::Face::faces::Edge::edges() (void* this_ptr); // @ 0x31c8
    virtual int64_t Aleria::ParticlesGeometry::vertices::SIMD3() (void* this_ptr); // @ 0x3218
    virtual int64_t Aleria::ParticlesGeometry::vertices::SIMD3() (void* this_ptr); // @ 0x3268
    virtual int64_t Aleria::ParticlesGeometry::faces() (void* this_ptr); // @ 0x3294
    virtual int64_t Aleria::ParticlesGeometry::faces::Face() (void* this_ptr); // @ 0x32fc
    virtual int64_t Aleria::ParticlesGeometry::faces::Face() (void* this_ptr); // @ 0x334c
    virtual int64_t Aleria::ParticlesGeometry::edges() (void* this_ptr); // @ 0x3378
    virtual int64_t Aleria::ParticlesGeometry::edges::Edge() (void* this_ptr); // @ 0x33e0
    virtual int64_t Aleria::ParticlesGeometry::edges::Edge() (void* this_ptr); // @ 0x3430
    virtual int64_t Aleria::ParticlesGeometry::silhouetteRadius::SIMD3() (void* this_ptr); // @ 0x345c
    virtual int64_t map::Element() (void* this_ptr); // @ 0x34e4
    virtual int64_t SIMD3() (void* this_ptr); // @ 0x3bcc
    virtual int64_t Aleria::ParticlesGeometry::centroid::SIMD3::Face() (void* this_ptr); // @ 0x3d54
    virtual int64_t Aleria::ParticlesGeometry::midpoint::SIMD3::Edge() (void* this_ptr); // @ 0x494c
    virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F() (void* this_ptr); // @ 0x5204
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0x5230
    virtual int64_t IndexingIterator() (void* this_ptr); // @ 0x8154
    virtual int64_t Stride() (void* this_ptr); // @ 0x817c
    virtual int64_t iS() (void* this_ptr); // @ 0x8208
    virtual int64_t Aleria::ParticlesGeometry::oriented::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::vertices::Face::faces::Edge::edges() (void* this_ptr); // @ 0xd6b0
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::joined() (void* this_ptr); // @ 0xd708
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::HX() (void* this_ptr); // @ 0xdce8
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::HX() (void* this_ptr); // @ 0xe108
    virtual int64_t SIMD3() (void* this_ptr); // @ 0xe14c
    virtual int64_t Aleria::ParticlesGeometry::snap::_29ED978E32CEF27ACB882FE93D26464F::SIMD3() (void* this_ptr); // @ 0xe174
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::centre::it() (void* this_ptr); // @ 0xe354
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::it() (void* this_ptr); // @ 0xef30
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::it() (void* this_ptr); // @ 0xf0b4
    virtual int64_t it() (void* this_ptr); // @ 0xf0e8
    virtual int64_t Aleria::ParticlesGeometry::classify::_29ED978E32CEF27ACB882FE93D26464F::isFront() (void* this_ptr); // @ 0xf15c
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_() (void* this_ptr); // @ 0xf370
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_() (void* this_ptr); // @ 0xf44c
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0xf474
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0xf4e8
    virtual int64_t Aleria::ParticlesGeometry::centroidZ::_29ED978E32CEF27ACB882FE93D26464F::Face::SIMD3() (void* this_ptr); // @ 0xf510
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0xf5d8
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge() (void* this_ptr); // @ 0xf69c
    virtual int64_t Aleria::ParticlesGeometry::build::_29ED978E32CEF27ACB882FE93D26464F::SIMD3::Face::Edge::_TA() (void* this_ptr); // @ 0xf798
    virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0xf7c0
    virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0xf834
    virtual int64_t it() (void* this_ptr); // @ 0xf85c
    virtual int64_t PartialRangeUpTo() (void* this_ptr); // @ 0xf8ac
    virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf920
    virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf928
    virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf930
    virtual int64_t Aleria::ParticlesUniforms::geometry::SIMD4() (void* this_ptr); // @ 0xf940
    virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf944
    virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf94c
    virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf954
    virtual int64_t Aleria::ParticlesUniforms::weights::SIMD4() (void* this_ptr); // @ 0xf964
    virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf968
    virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf970
    virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf978
    virtual int64_t Aleria::ParticlesUniforms::pose::SIMD4() (void* this_ptr); // @ 0xf988
    virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf98c
    virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf994
    virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf99c
    virtual int64_t Aleria::ParticlesUniforms::accent::SIMD4() (void* this_ptr); // @ 0xf9ac
    virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9b0
    virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9b8
    virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9c0
    virtual int64_t Aleria::ParticlesUniforms::rendering::SIMD4() (void* this_ptr); // @ 0xf9d0
    virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9d4
    virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9dc
    virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9e4
    virtual int64_t Aleria::ParticlesUniforms::phases::SIMD4() (void* this_ptr); // @ 0xf9f4
    virtual int64_t Aleria::ParticlesUniforms::count() (void* this_ptr); // @ 0xf9f8
    virtual int64_t Aleria::ParticlesUniforms::reduceTransparency() (void* this_ptr); // @ 0xfbbc
    virtual int64_t Aleria::ParticlesUniforms::__derived_struct_equals() (void* this_ptr); // @ 0xfbf8
    virtual int64_t Aleria::ParticlesUniforms::geometry::weights::pose::accent::rendering::phases::SIMD4::LtcfC() (void* this_ptr); // @ 0x10b74
    virtual int64_t Aleria::ParticlesUniforms::ee() (void* this_ptr); // @ 0x10b90
    virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10bfc
    virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c04
    virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c0c
    virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c14
    virtual int64_t Aleria::ParticlesMotion::listening() (void* this_ptr); // @ 0x10c24
    virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c28
    virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c30
    virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c38
    virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c40
    virtual int64_t Aleria::ParticlesMotion::thinking() (void* this_ptr); // @ 0x10c50
    virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c54
    virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c5c
    virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c64
    virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c6c
    virtual int64_t Aleria::ParticlesMotion::speaking() (void* this_ptr); // @ 0x10c7c
    virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c80
    virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c88
    virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c90
    virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10c98
    virtual int64_t Aleria::ParticlesMotion::alert() (void* this_ptr); // @ 0x10ca8
    virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cac
    virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cb4
    virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cbc
    virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cc4
    virtual int64_t Aleria::ParticlesMotion::sleep() (void* this_ptr); // @ 0x10cd4
    virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10cd8
    virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10ce0
    virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10ce8
    virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10cf0
    virtual int64_t Aleria::ParticlesMotion::finished() (void* this_ptr); // @ 0x10d00
    virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d04
    virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d0c
    virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d14
    virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d1c
    virtual int64_t Aleria::ParticlesMotion::level() (void* this_ptr); // @ 0x10d2c
    virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d30
    virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d38
    virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d40
    virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d48
    virtual int64_t Aleria::ParticlesMotion::time() (void* this_ptr); // @ 0x10d58
    virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d5c
    virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d64
    virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d6c
    virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d74
    virtual int64_t Aleria::ParticlesMotion::swayPhase() (void* this_ptr); // @ 0x10d84
    virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d88
    virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d90
    virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10d98
    virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10da0
    virtual int64_t Aleria::ParticlesMotion::edgePhase() (void* this_ptr); // @ 0x10db0
    virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10db4
    virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dbc
    virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dc4
    virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10dcc
    virtual int64_t Aleria::ParticlesMotion::driftPhase() (void* this_ptr); // @ 0x10ddc
    virtual int64_t Aleria::ParticlesMotion::framesPerSecond::for() (void* this_ptr); // @ 0x10de0
    virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10eac
    virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10eb0
    virtual int64_t Aleria::ParticlesMotion::maximumStep() (void* this_ptr); // @ 0x10ebc
    virtual int64_t Aleria::ParticlesMotion::target::SIMD4() (void* this_ptr); // @ 0x10ed4
    virtual int64_t Aleria::ParticlesMotion::step::dt::state::level::reduce() (void* this_ptr); // @ 0x1102c
    virtual int64_t Aleria::ParticlesMotion::settled::state::level::time::reduce() (void* this_ptr); // @ 0x115ac
    virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x11928
    virtual int64_t Aleria::ParticlesMotion::dissolve::reduceTransparency() (void* this_ptr); // @ 0x119b4
    virtual int64_t Aleria::ParticlesMotion::uniforms::width::height::budget::pixelScale::reduceTransparency() (void* this_ptr); // @ 0x11b20
    virtual int64_t Aleria::ParticlesMotion::__derived_struct_equals() (void* this_ptr); // @ 0x1313c
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133dc
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133e4
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133ec
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133f4
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x133fc
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13404
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1340c
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13414
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1341c
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13424
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x1342c
    virtual int64_t Aleria::ParticlesMotion::listening::thinking::speaking::alert::sleep::finished::level::time::swayPhase::edge::drift() (void* this_ptr); // @ 0x13434
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13498
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x134ac
    virtual int64_t Aleria::ParticlesState::CaseIterable::AllCases() (void* this_ptr); // @ 0x13514
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13528
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x1359c
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x135b0
    virtual int64_t Aleria::ParticlesFaceClass::CaseIterable::AllCases() (void* this_ptr); // @ 0x13618
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x1362c
    virtual int64_t Aleria::ParticlesMotion::ee() (void* this_ptr); // @ 0x136a0
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13714
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x1387c
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a78
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a80
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a84
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x13a8c
    virtual int64_t Aleria::ParticlesBudget() (void* this_ptr); // @ 0x13aa0
    virtual int64_t Aleria::ParticlesPalette() (void* this_ptr); // @ 0x13ab4
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13ac8
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13c30
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e2c
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e34
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e38
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x13e40
    virtual int64_t Aleria::ParticlesGeometry() (void* this_ptr); // @ 0x13e54
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13e68
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13eb8
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x13fb0
    virtual int64_t Aleria::ParticlesGeometry::Face() (void* this_ptr); // @ 0x14160
    virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x14180
    virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x1428c
    virtual int64_t Aleria::ParticlesGeometry::Edge() (void* this_ptr); // @ 0x1443c
    virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14450
    virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x144b8
    virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14598
    virtual int64_t Aleria::ParticlesUniforms() (void* this_ptr); // @ 0x14768
    virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x1477c
    virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x147e4
    virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x148c4
    virtual int64_t Aleria::ParticlesMotion() (void* this_ptr); // @ 0x14a84
    virtual int64_t Aleria::ParticlesFaceClass() (void* this_ptr); // @ 0x14a98
    virtual int64_t Aleria::ParticlesState() (void* this_ptr); // @ 0x14b00
    virtual int64_t ContiguousArray::Error() (void* this_ptr); // @ 0x14b68
    virtual int64_t _endMutation() (void* this_ptr); // @ 0x14b90
};

