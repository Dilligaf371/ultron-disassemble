/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : /Users/gilles/Downloads/Lumio.app/Contents/MacOS/Lumio
 * Procedure     : flirt_string_length_scan_1edc @ 0x100001edc (offset +0x1edc)
 * Signature     : int64_t flirt_string_length_scan_1edc()
 * Architecture  : ARM64 (AArch64) (ABI regs: x0, x1, x2, x3, x4, x5, x6, x7)
 */
'use strict';

const MODULE_NAME = "Lumio";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x1edc");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to flirt_string_length_scan_1edc @ " + targetAddr + " (base=" + baseAddr + " + 0x1edc)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] flirt_string_length_scan_1edc @ " + targetAddr);
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
        console.log("└── [ULTRON LEAVE] flirt_string_length_scan_1edc => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

