/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : samples/monday_board_5106608109
 * Procedure     : _dispatch_monday_workos_opcode @ 0x100000588 (offset +0x588)
 * Signature     : int64_t _dispatch_monday_workos_opcode()
 * Architecture  : ARM64 (AArch64) (ABI regs: x0, x1, x2, x3, x4, x5, x6, x7)
 */
'use strict';

const MODULE_NAME = "monday_board_5106608109";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x588");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to _dispatch_monday_workos_opcode @ " + targetAddr + " (base=" + baseAddr + " + 0x588)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] _dispatch_monday_workos_opcode @ " + targetAddr);
        console.log("│   arg0 = " + args[0] + " | arg1 = " + args[1] + " | arg2 = " + args[2] + " | arg3 = " + args[3]);
        console.log("│   Registers: " + JSON.stringify(this.context));

        try {
            if (!args[0].isNull() && args[0].compare(ptr("0x10000")) > 0) {
                console.log("│   Hexdump(arg0, 64):\n" + hexdump(args[0], { offset: 0, length: 64, header: true, ansi: false }));
            }
        } catch (_) {}

        console.log("│   Backtrace:\n│     " + Thread.backtrace(this.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join("\n│     "));
    },
    onLeave(retval) {
        console.log("└── [ULTRON LEAVE] _dispatch_monday_workos_opcode => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

