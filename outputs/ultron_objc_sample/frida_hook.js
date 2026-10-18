/**
 * ULTRON DISASSEMBLE v2.3 — Auto-Generated Frida Objective-C Hook
 * Target Binary : samples/ultron_objc_sample
 * Target Method : -[UltronSentinelCore initWithKey:rounds:] @ 0x100000a18 (offset +0xa18)
 * Architecture  : ARM64 (AArch64)
 */
'use strict';

const MODULE_NAME = "ultron_objc_sample";
const baseAddr = Module.findBaseAddress(MODULE_NAME) || Process.enumerateModules()[0].base;

if (ObjC.available && ObjC.classes["UltronSentinelCore"]) {
    const targetClass = ObjC.classes["UltronSentinelCore"];
    const methodKey = "- initWithKey:rounds:";
    const method = targetClass[methodKey];

    if (method && method.implementation) {
        console.log("[ULTRON] Hooking ObjC " + methodKey + " @ " + method.implementation);
        Interceptor.attach(method.implementation, {
            onEnter(args) {
                const receiver = new ObjC.Object(args[0]);
                const selector = ObjC.selectorAsString(args[1]);
                console.log("\n┌── [ULTRON ObjC ENTER] " + receiver.$className + " " + selector);
            console.log('  arg[0] =', new ObjC.Object(args[2]).toString());
            console.log('  arg[1] =', new ObjC.Object(args[3]).toString());
                console.log("  Backtrace:\n  " + Thread.backtrace(this.context, Backtracer.ACCURATE)
                    .map(DebugSymbol.fromAddress).join("\n  "));
            },
            onLeave(retval) {
                console.log("└── [ULTRON ObjC LEAVE] -[UltronSentinelCore initWithKey:rounds:] => retval=" + retval);
            }
        });
    }
} else {
    // Fallback to raw address hook if ObjC runtime metadata is stripped
    const targetPtr = baseAddr.add(ptr("0xa18"));
    Interceptor.attach(targetPtr, {
        onEnter(args) {
            console.log("[ULTRON RAW ENTER] -[UltronSentinelCore initWithKey:rounds:] @ " + targetPtr + " x0=" + args[0] + " x1=" + args[1]);
        },
        onLeave(retval) {
            console.log("[ULTRON RAW LEAVE] -[UltronSentinelCore initWithKey:rounds:] => " + retval);
        }
    });
}

