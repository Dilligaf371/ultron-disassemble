/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Native Interceptor Script
 * Target Binary : /Users/gilles/.gemini/antigravity/brain/9d4f7005-e3a0-4b0b-9c59-b3cebb4935ab/scratch/asar_dot/orbit-characters.wasm
 * Procedure     : _d @ 0x359d (offset +0x259d)
 * Signature     : void _d(i32 local_0)
 * Architecture  : WebAssembly VM (ABI regs: rdi, rsi, rdx, rcx, r8, r9)
 */
'use strict';

const MODULE_NAME = "orbit-characters.wasm";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;
const targetOffset = ptr("0x259d");
const targetAddr = baseAddr.add(targetOffset);

console.log("[ULTRON] Attaching to _d @ " + targetAddr + " (base=" + baseAddr + " + 0x259d)");

Interceptor.attach(targetAddr, {
    onEnter(args) {
        this.arg0 = args[0];
        this.arg1 = args[1];
        this.arg2 = args[2];
        this.arg3 = args[3];

        console.log("\n┌── [ULTRON ENTER] _d @ " + targetAddr);
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
        console.log("└── [ULTRON LEAVE] _d => retval = " + retval + " (" + retval.toInt32() + ")");
    }
});

