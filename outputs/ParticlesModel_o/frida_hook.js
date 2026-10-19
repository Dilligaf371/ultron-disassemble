/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesModel.o
 * Procedure     : flirt_cxx_exception_landing_pad_8c @ 0x8c (offset +0x8c)
 * Signature     : int64_t flirt_cxx_exception_landing_pad_8c()
 * Architecture  : ARM64 (AArch64) (ABI regs: x0, x1, x2, x3, x4, x5, x6, x7)
 */
'use strict';

const MODULE_NAME = "ParticlesModel.o";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x8c");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to flirt_cxx_exception_landing_pad_8c @ " + targetAddr + " (base=" + baseAddr + " + 0x8c)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] flirt_cxx_exception_landing_pad_8c @ " + targetAddr);
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
        console.log("└── [ULTRON LEAVE] flirt_cxx_exception_landing_pad_8c => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

