/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesView.o
 * Procedure     : _$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau @ 0x4 (offset +0x4)
 * Signature     : int64_t _$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau()
 * Architecture  : ARM64 (AArch64) (ABI regs: x0, x1, x2, x3, x4, x5, x6, x7)
 */
'use strict';

const MODULE_NAME = "ParticlesView.o";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x4");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to _$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau @ " + targetAddr + " (base=" + baseAddr + " + 0x4)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] _$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau @ " + targetAddr);
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
        console.log("└── [ULTRON LEAVE] _$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

