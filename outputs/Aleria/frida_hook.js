/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : /Users/gilles/Applications/Aleria ICO.app/Contents/MacOS/aleria
 * Procedure     : _$s6aleria10AgentUsageC6SourceO2idSSvg @ 0x100001be0 (offset +0x1be0)
 * Signature     : int64_t _$s6aleria10AgentUsageC6SourceO2idSSvg()
 * Architecture  : ARM64 (AArch64) (ABI regs: x0, x1, x2, x3, x4, x5, x6, x7)
 */
'use strict';

const MODULE_NAME = "aleria";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x1be0");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to _$s6aleria10AgentUsageC6SourceO2idSSvg @ " + targetAddr + " (base=" + baseAddr + " + 0x1be0)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] _$s6aleria10AgentUsageC6SourceO2idSSvg @ " + targetAddr);
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
        console.log("└── [ULTRON LEAVE] _$s6aleria10AgentUsageC6SourceO2idSSvg => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

