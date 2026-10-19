/* ============================================================================
* ULTRON DISASSEMBLE v4.0 — AUTO-RECOVERED MEMORY STRUCTURES & CLASS LAYOUTS
* Synthesized via Constraint-Based Base-Register + Offset Dereference Analysis
* ============================================================================ */

#pragma once
#include <stdint.h>
#include <stdbool.h>

typedef struct AutoStruct_EntryFrame {
    uint64_t         saved_fp;       // +0x00
    void*            saved_lr;       // +0x08
    uint64_t         local_var_10;   // +0x10
    uint32_t         status_code_18; // +0x18
} AutoStruct_EntryFrame; // sizeof = 0x20
