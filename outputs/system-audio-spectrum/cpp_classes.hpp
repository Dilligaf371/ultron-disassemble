// ============================================================================
// ULTRON DISASSEMBLE v4.0 — C++ RTTI, VTABLE & CLASS HIERARCHY RECONSTRUCTION
// Target Binary : /Applications/ChatGPT.app/Contents/Resources/native/system-audio-spectrum
// Classes Found : 18 | Virtual Dispatch Sites: 43
// ============================================================================
#pragma once
#include <cstdint>

struct PolymoObject_124_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x100004148 (offset +0x0)
};

class PolymoObject_124 {
public:
    const PolymoObject_124_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x100004148 (offset +0x0)
};

struct PolymoObject_224_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002280 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000022a4 (offset +0x18)
};

class PolymoObject_224 {
public:
    const PolymoObject_224_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002280 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000022a4 (offset +0x18)
};

struct PolymoObject_2d8_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000131c (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001354 (offset +0x18)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x24 @ 0x100001514 (offset +0x8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x10000152c (offset +0x8)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x24 @ 0x10000166c (offset +0x10)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x10000167c (offset +0x10)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x10000180c (offset +0x0)
};

class PolymoObject_2d8 {
public:
    const PolymoObject_2d8_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x10000131c (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001354 (offset +0x18)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x24 @ 0x100001514 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x10000152c (offset +0x8)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x24 @ 0x10000166c (offset +0x10)
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x10000167c (offset +0x10)
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x10000180c (offset +0x0)
};

struct PolymoObject_404_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x1000044f0 (offset +0x0)
};

class PolymoObject_404 {
public:
    const PolymoObject_404_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x1000044f0 (offset +0x0)
};

struct PolymoObject_44c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000034a8 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000034e4 (offset +0x18)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003584 (offset +0x0)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000035ac (offset +0x8)
};

class PolymoObject_44c {
public:
    const PolymoObject_44c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000034a8 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000034e4 (offset +0x18)
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003584 (offset +0x0)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000035ac (offset +0x8)
};

struct PolymoObject_4ac_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002580 (offset +0x8)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000026c4 (offset +0x18)
};

class PolymoObject_4ac {
public:
    const PolymoObject_4ac_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100002580 (offset +0x8)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000026c4 (offset +0x18)
};

struct PolymoObject_5d4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003628 (offset +0x10)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000036c4 (offset +0x8)
};

class PolymoObject_5d4 {
public:
    const PolymoObject_5d4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003628 (offset +0x10)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x1000036c4 (offset +0x8)
};

struct PolymoObject_6f4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004730 (offset +0x10)
};

class PolymoObject_6f4 {
public:
    const PolymoObject_6f4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_2(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004730 (offset +0x10)
};

struct PolymoObject_81c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x25 @ 0x10000386c (offset +0x0)
};

class PolymoObject_81c {
public:
    const PolymoObject_81c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x25 @ 0x10000386c (offset +0x0)
};

struct PolymoObject_88c_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000038f0 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003928 (offset +0x8)
};

class PolymoObject_88c {
public:
    const PolymoObject_88c_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x1000038f0 (offset +0x18)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003928 (offset +0x8)
};

struct PolymoObject_9e4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x1000019fc (offset +0x0)
};

class PolymoObject_9e4 {
public:
    const PolymoObject_9e4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x19 @ 0x1000019fc (offset +0x0)
};

struct PolymoObject_ac4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004af8 (offset +0x8)
};

class PolymoObject_ac4 {
public:
    const PolymoObject_ac4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100004af8 (offset +0x8)
};

struct PolymoObject_ad4_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001b18 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001b50 (offset +0x18)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001d4c (offset +0x8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001d5c (offset +0x8)
};

class PolymoObject_ad4 {
public:
    const PolymoObject_ad4_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001b18 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001b50 (offset +0x18)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001d4c (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001d5c (offset +0x8)
};

struct PolymoObject_b30_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002b74 (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002bb0 (offset +0x18)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002bf4 (offset +0x18)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002c2c (offset +0x18)
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x100002d3c (offset +0x68)
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x100002dd0 (offset +0x68)
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003110 (offset +0x8)
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003120 (offset +0x8)
};

class PolymoObject_b30 {
public:
    const PolymoObject_b30_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002b74 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002bb0 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002bf4 (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100002c2c (offset +0x18)
    virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x100002d3c (offset +0x68)
    virtual int64_t vfunc_slot_13(void* this_ptr, int64_t arg1); // Indirect blr x22 @ 0x100002dd0 (offset +0x68)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003110 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100003120 (offset +0x8)
};

struct PolymoObject_b74_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x1 @ 0x100004b94 (offset +0x0)
};

class PolymoObject_b74 {
public:
    const PolymoObject_b74_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x1 @ 0x100004b94 (offset +0x0)
};

struct PolymoObject_d80_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x100001dac (offset +0x0)
};

class PolymoObject_d80 {
public:
    const PolymoObject_d80_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_0(void* this_ptr, int64_t arg1); // Indirect blr x21 @ 0x100001dac (offset +0x0)
};

struct PolymoObject_dcc_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001e1c (offset +0x18)
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001e54 (offset +0x18)
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001fb8 (offset +0x8)
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001fc8 (offset +0x8)
};

class PolymoObject_dcc {
public:
    const PolymoObject_dcc_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001e1c (offset +0x18)
    virtual int64_t vfunc_slot_3(void* this_ptr, int64_t arg1); // Indirect blr x16 @ 0x100001e54 (offset +0x18)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001fb8 (offset +0x8)
    virtual int64_t vfunc_slot_1(void* this_ptr, int64_t arg1); // Indirect blr x8 @ 0x100001fc8 (offset +0x8)
};

struct swift_VTable {
    int64_t (*vslot_0)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x1000019a4
    int64_t (*vslot_1)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::finish() (void* this_ptr); // @ 0x1000019c4
    int64_t (*vslot_2)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler() (void* this_ptr); // @ 0x100001a10
    int64_t (*vslot_3)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::NSFileHandle() (void* this_ptr); // @ 0x100001ad4
    int64_t (*vslot_4)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t NSFileHandle() (void* this_ptr); // @ 0x100001d80
    int64_t (*vslot_5)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main() (void* this_ptr); // @ 0x100001dcc
    int64_t (*vslot_6)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::emit::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100001fec
    int64_t (*vslot_7)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (void* this_ptr); // @ 0x100002224
    int64_t (*vslot_8)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop() (void* this_ptr); // @ 0x100002a6c
    int64_t (*vslot_9)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain() (void* this_ptr); // @ 0x100002b20
    int64_t (*vslot_10)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code() (void* this_ptr); // @ 0x100002b24
    int64_t (*vslot_11)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo() (void* this_ptr); // @ 0x100002b28
    int64_t (*vslot_12)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError() (void* this_ptr); // @ 0x100002b2c
    int64_t (*vslot_13)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100002b30
    int64_t (*vslot_14)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x1000031a4
    int64_t (*vslot_15)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100003270
    int64_t (*vslot_16)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100003290
    int64_t (*vslot_17)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x1000032c4
    int64_t (*vslot_18)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioBufferList() (void* this_ptr); // @ 0x10000330c
    int64_t (*vslot_19)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioBufferList() (void* this_ptr); // @ 0x100003338
    int64_t (*vslot_20)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x10000338c
    int64_t (*vslot_21)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x1000033ac
    int64_t (*vslot_22)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x1000033e8
    int64_t (*vslot_23)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::consume() (void* this_ptr); // @ 0x10000344c
    int64_t (*vslot_24)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x10000381c
    int64_t (*vslot_25)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::publish() (void* this_ptr); // @ 0x10000388c
    int64_t (*vslot_26)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x100004160
    int64_t (*vslot_27)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t __RawDictionaryStorage::find::_HashTable::Bucket::bucket::found() (void* this_ptr); // @ 0x100004290
    int64_t (*vslot_28)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t __RawDictionaryStorage::find::hashValue::_HashTable::Bucket::bucket::found() (void* this_ptr); // @ 0x1000042f4
    int64_t (*vslot_29)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _ArrayBuffer::_consumeAndCreateNew() (void* this_ptr); // @ 0x1000043a0
    int64_t (*vslot_30)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _ArrayBuffer::_consumeAndCreateNew() (void* this_ptr); // @ 0x1000043cc
    int64_t (*vslot_31)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t ContiguousArray::_createNewBuffer::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x1000043e0
    int64_t (*vslot_32)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t _ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x100004404
    int64_t (*vslot_33)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t dictionaryLiteral() (void* this_ptr); // @ 0x100004510
    int64_t (*vslot_34)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x1000046b4
    int64_t (*vslot_35)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main() (void* this_ptr); // @ 0x100004764
    int64_t (*vslot_36)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t OS_dispatch_source() (void* this_ptr); // @ 0x1000049c8
    int64_t (*vslot_37)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error() (void* this_ptr); // @ 0x100004a08
    int64_t (*vslot_38)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (void* this_ptr); // @ 0x100004a6c
    int64_t (*vslot_39)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t IndexingIterator::CoreAudio::UnsafeMutable::BufferListPointer() (void* this_ptr); // @ 0x100004ac4
    int64_t (*vslot_40)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Element::max::ArraySlice::Tf4x_() (void* this_ptr); // @ 0x100004b0c
    int64_t (*vslot_41)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t Dispatch() (void* this_ptr); // @ 0x100004b74
    int64_t (*vslot_42)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t CollectionOfOne::UInt8::Foundation::ContiguousBytes() (void* this_ptr); // @ 0x100004bb4
    int64_t (*vslot_43)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004bf8
    int64_t (*vslot_44)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d30
    int64_t (*vslot_45)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d34
    int64_t (*vslot_46)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d3c
    int64_t (*vslot_47)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d70
    int64_t (*vslot_48)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004dd8
    int64_t (*vslot_49)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e14
    int64_t (*vslot_50)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e5c
    int64_t (*vslot_51)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e9c
    int64_t (*vslot_52)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004eb8
    int64_t (*vslot_53)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004ed8
    int64_t (*vslot_54)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004f00
    int64_t (*vslot_55)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioTimeStampFlags() (void* this_ptr); // @ 0x100004f14
    int64_t (*vslot_56)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SMPTETime() (void* this_ptr); // @ 0x100004f3c
    int64_t (*vslot_57)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SMPTETimeFlags() (void* this_ptr); // @ 0x100004f50
    int64_t (*vslot_58)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SMPTETimeType() (void* this_ptr); // @ 0x100004f64
    int64_t (*vslot_59)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100004f78
    int64_t (*vslot_60)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100004ff4
    int64_t (*vslot_61)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t SMPTETime() (void* this_ptr); // @ 0x100004ff8
    int64_t (*vslot_62)(void* this_ptr, int64_t a0, int64_t a1); // virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004ffc
};

class swift {
public:
    const swift_VTable* vptr; // +0x00 (Itanium / MSVC ABI vtable pointer)
    uint64_t instance_flags; // +0x08
    void*    internal_state; // +0x10

    // Reconstructed Virtual Methods:
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x1000019a4
    virtual int64_t main::finish() (void* this_ptr); // @ 0x1000019c4
    virtual int64_t OS_dispatch_source::Dispatch::setEventHandler::qos::flags::handler() (void* this_ptr); // @ 0x100001a10
    virtual int64_t main::NSFileHandle() (void* this_ptr); // @ 0x100001ad4
    virtual int64_t NSFileHandle() (void* this_ptr); // @ 0x100001d80
    virtual int64_t main() (void* this_ptr); // @ 0x100001dcc
    virtual int64_t main::emit::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100001fec
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (void* this_ptr); // @ 0x100002224
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::stop() (void* this_ptr); // @ 0x100002a6c
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_domain() (void* this_ptr); // @ 0x100002b20
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_code() (void* this_ptr); // @ 0x100002b24
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_userInfo() (void* this_ptr); // @ 0x100002b28
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error::_getEmbeddedNSError() (void* this_ptr); // @ 0x100002b2c
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100002b30
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x1000031a4
    virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100003270
    virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100003290
    virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x1000032c4
    virtual int64_t AudioBufferList() (void* this_ptr); // @ 0x10000330c
    virtual int64_t AudioBufferList() (void* this_ptr); // @ 0x100003338
    virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x10000338c
    virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x1000033ac
    virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x1000033e8
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::consume() (void* this_ptr); // @ 0x10000344c
    virtual int64_t AudioTimeStamp() (void* this_ptr); // @ 0x10000381c
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::publish() (void* this_ptr); // @ 0x10000388c
    virtual int64_t _ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x100004160
    virtual int64_t __RawDictionaryStorage::find::_HashTable::Bucket::bucket::found() (void* this_ptr); // @ 0x100004290
    virtual int64_t __RawDictionaryStorage::find::hashValue::_HashTable::Bucket::bucket::found() (void* this_ptr); // @ 0x1000042f4
    virtual int64_t _ArrayBuffer::_consumeAndCreateNew() (void* this_ptr); // @ 0x1000043a0
    virtual int64_t _ArrayBuffer::_consumeAndCreateNew() (void* this_ptr); // @ 0x1000043cc
    virtual int64_t ContiguousArray::_createNewBuffer::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x1000043e0
    virtual int64_t _ArrayBuffer::_consumeAndCreateNew::bufferIsUnique::minimumCapacity::growForAppend() (void* this_ptr); // @ 0x100004404
    virtual int64_t dictionaryLiteral() (void* this_ptr); // @ 0x100004510
    virtual int64_t Foundation::Data::_Representation() (void* this_ptr); // @ 0x1000046b4
    virtual int64_t main() (void* this_ptr); // @ 0x100004764
    virtual int64_t OS_dispatch_source() (void* this_ptr); // @ 0x1000049c8
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC::Error() (void* this_ptr); // @ 0x100004a08
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC::start() (void* this_ptr); // @ 0x100004a6c
    virtual int64_t IndexingIterator::CoreAudio::UnsafeMutable::BufferListPointer() (void* this_ptr); // @ 0x100004ac4
    virtual int64_t Element::max::ArraySlice::Tf4x_() (void* this_ptr); // @ 0x100004b0c
    virtual int64_t Dispatch() (void* this_ptr); // @ 0x100004b74
    virtual int64_t CollectionOfOne::UInt8::Foundation::ContiguousBytes() (void* this_ptr); // @ 0x100004bb4
    virtual int64_t main::SystemAudioSpectrum::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004bf8
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d30
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d34
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d3c
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004d70
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004dd8
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e14
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e5c
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004e9c
    virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004eb8
    virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004ed8
    virtual int64_t AudioBuffer() (void* this_ptr); // @ 0x100004f00
    virtual int64_t AudioTimeStampFlags() (void* this_ptr); // @ 0x100004f14
    virtual int64_t SMPTETime() (void* this_ptr); // @ 0x100004f3c
    virtual int64_t SMPTETimeFlags() (void* this_ptr); // @ 0x100004f50
    virtual int64_t SMPTETimeType() (void* this_ptr); // @ 0x100004f64
    virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100004f78
    virtual int64_t AudioStreamBasicDescription() (void* this_ptr); // @ 0x100004ff4
    virtual int64_t SMPTETime() (void* this_ptr); // @ 0x100004ff8
    virtual int64_t main::CaptureFailure::_12232F587A4C5CD8B1EEDF696793::FC() (void* this_ptr); // @ 0x100004ffc
};

