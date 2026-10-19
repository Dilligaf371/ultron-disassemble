// ============================================================================
// ULTRON DISASSEMBLE v4.0 — OS TYPE LIBRARY (.TIL) & PROPAGATED SIGNATURES
// Target Binary     : /Applications/ChatGPT.app/Contents/Resources/native/system-audio-spectrum
// Embedded OS Signatures: 39 (POSIX / Darwin / CoreFoundation / Security / BSD)
// Typed Procedures  : 247
// ============================================================================
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>

typedef struct UltronContext UltronContext;

int64_t reconstructed_entry_main(id receiver_self, SEL selector_cmd); // @ 0x1000012d8
void* re_flirt_memmove_overlap_safe_1870(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x100001870
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC(int64_t arg0, int64_t arg1); // @ 0x1000019a4
int64_t re_swift__main__finish(int64_t arg0, int64_t arg1); // @ 0x1000019c4
int64_t re_sIeg_IeyB_TR(UltronContext* ctx_ptr); // @ 0x1000019e4
int64_t re_swift__OS_dispatch_source__Dispatch__setEventHandler__qos__flags__handler(const uint8_t* input_buf); // @ 0x100001a10
int64_t re_swift__main__NSFileHandle(id receiver_self, SEL selector_cmd); // @ 0x100001ad4
int64_t re_swift__NSFileHandle(UltronContext* ctx_ptr); // @ 0x100001d80
int64_t re_swift__main(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100001dcc
int64_t re_swift__main__emit___12232F587A4C5CD8B1EEDF696793__FC(id receiver_self, SEL selector_cmd, size_t nbytes); // @ 0x100001fec
int64_t re_flirt_objc_retain_release_thunk_2220(int64_t arg0, int64_t arg1); // @ 0x100002220
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC__start(id receiver_self, SEL selector_cmd); // @ 0x100002224
void* re_flirt_fast_memcpy_vec_24ac(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x1000024ac
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC__stop(int64_t arg0, int64_t arg1); // @ 0x100002a6c
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC__Error___domain(int64_t arg0, int64_t arg1); // @ 0x100002b20
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC__Error___code(int64_t arg0, int64_t arg1); // @ 0x100002b24
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC__Error___userInfo(int64_t arg0, int64_t arg1); // @ 0x100002b28
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC__Error___getEmbeddedNSError(int64_t arg0, int64_t arg1); // @ 0x100002b2c
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC(id receiver_self, SEL selector_cmd); // @ 0x100002b30
int64_t re_sme_runtime_helper_100003184(int64_t arg0, int64_t arg1); // @ 0x100003184
int64_t re_block_copy_helper(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100003188
int64_t re_block_destroy_helper(UltronContext* ctx_ptr); // @ 0x10000319c
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC(const uint8_t* input_buf); // @ 0x1000031a4
int64_t re_swift_noop_void_return(int64_t arg0, int64_t arg1); // @ 0x100003258
void* re_swift_memcpy40_8(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x10000325c
int64_t re_swift__AudioStreamBasicDescription(UltronContext* ctx_ptr); // @ 0x100003270
int64_t re_neural__s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1); // @ 0x100003288
int64_t re_swift__AudioStreamBasicDescription(UltronContext* ctx_ptr); // @ 0x100003290
int64_t re_swift__AudioStreamBasicDescription(int64_t arg0, int64_t arg1); // @ 0x1000032c4
void* re_swift_memcpy24_8(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x1000032d8
int64_t re_flirt_string_length_scan_32ec(UltronContext* ctx_ptr); // @ 0x1000032ec
int64_t re_neural__s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1); // @ 0x100003304
int64_t re_swift__AudioBufferList(UltronContext* ctx_ptr); // @ 0x10000330c
int64_t re_swift__AudioBufferList(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100003338
void* re_swift_memcpy64_8(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x100003378
int64_t re_swift__AudioTimeStamp(UltronContext* ctx_ptr); // @ 0x10000338c
int64_t re_neural__s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1); // @ 0x1000033a4
int64_t re_swift__AudioTimeStamp(UltronContext* ctx_ptr); // @ 0x1000033ac
int64_t re_swift__AudioTimeStamp(int64_t arg0, int64_t arg1); // @ 0x1000033e8
int64_t re_swift_instantiateConcreteTypeFromMangledNameV2(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x1000033fc
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC__consume(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x10000344c
void* re_flirt_fast_memcpy_vec_35d4(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x1000035d4
int64_t re_swift__AudioTimeStamp(UltronContext* ctx_ptr); // @ 0x10000381c
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC__publish(id receiver_self, SEL selector_cmd); // @ 0x10000388c
int64_t re_flirt_objc_retain_release_thunk_40e0(int64_t arg0, int64_t arg1); // @ 0x1000040e0
int64_t re_sSbIegy_SbIeyBy_TR(UltronContext* ctx_ptr); // @ 0x100004124
int64_t re_swift___ArrayBuffer___consumeAndCreateNew__bufferIsUnique__minimumCapacity__growForAppend(const uint8_t* input_buf); // @ 0x100004160
int64_t re_sme_runtime_helper_10000428c(int64_t arg0, int64_t arg1); // @ 0x10000428c
int64_t re_swift____RawDictionaryStorage__find___HashTable__Bucket__bucket__found(int64_t arg0, int64_t arg1); // @ 0x100004290
int64_t re_swift____RawDictionaryStorage__find__hashValue___HashTable__Bucket__bucket__found(int64_t arg0, int64_t arg1); // @ 0x1000042f4
int64_t re_swift___ArrayBuffer___consumeAndCreateNew(UltronContext* ctx_ptr); // @ 0x1000043a0
int64_t re_swift___ArrayBuffer___consumeAndCreateNew(UltronContext* ctx_ptr); // @ 0x1000043cc
int64_t re_swift__ContiguousArray___createNewBuffer__bufferIsUnique__minimumCapacity__growForAppend(int64_t arg0, int64_t arg1); // @ 0x1000043e0
int64_t re_swift___ArrayBuffer___consumeAndCreateNew__bufferIsUnique__minimumCapacity__growForAppend(int64_t arg0, int64_t arg1); // @ 0x100004404
int64_t re_sme_runtime_helper_10000450c(int64_t arg0, int64_t arg1); // @ 0x10000450c
int64_t re_swift__dictionaryLiteral(UltronContext* ctx_ptr); // @ 0x100004510
int64_t re_sme_runtime_helper_100004614(int64_t arg0, int64_t arg1); // @ 0x100004614
int64_t re_swift_instantiateConcreteTypeFromMangledNameAbstractV2(UltronContext* ctx_ptr); // @ 0x10000461c
int64_t re_flirt_swift_bridge_object_retain_462c(const uint8_t* input_buf); // @ 0x10000462c
int64_t re_swift_project_boxed_opaque_existential_1(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004670
int64_t re_swift_destroy_boxed_opaque_existential_1(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004694
int64_t re_swift__Foundation__Data___Representation(int64_t arg0, int64_t arg1); // @ 0x1000046b4
int64_t re_sSS_yptWOc(UltronContext* ctx_ptr); // @ 0x1000046f4
int64_t re_sypWOb(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004744
int64_t re_flirt_dyld_stub_binder_trampoline_4754(int64_t arg0, int64_t arg1); // @ 0x100004754
int64_t re_swift__main(int64_t arg0, int64_t arg1); // @ 0x100004764
void* re_flirt_fast_memcpy_vec_47b4(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x1000047b4
int64_t re_swift__OS_dispatch_source(const uint8_t* input_buf); // @ 0x1000049c8
ssize_t re_flirt_pthread_mutex_scoped_lock_49d8(int fd, void* out_buf, size_t nbytes); // @ 0x1000049d8
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC__Error(int64_t arg0, int64_t arg1); // @ 0x100004a08
int64_t re_flirt_security_audit_command_exec_4a18(int64_t arg0, int64_t arg1); // @ 0x100004a18
int64_t re_flirt_cxx_exception_landing_pad_4a48(int64_t arg0, int64_t arg1); // @ 0x100004a48
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC__start(int64_t arg0, int64_t arg1); // @ 0x100004a6c
int64_t re_swift__IndexingIterator__CoreAudio__UnsafeMutable__BufferListPointer(UltronContext* ctx_ptr); // @ 0x100004ac4
int64_t re_swift__Element__max__ArraySlice__Tf4x(int64_t arg0, int64_t arg1); // @ 0x100004b0c
int64_t re_flirt_matrix_nested_solver_kernel_4b20(UltronContext* ctx_ptr); // @ 0x100004b20
int64_t re_sme_runtime_helper_100004b6c(int64_t arg0, int64_t arg1); // @ 0x100004b6c
int64_t re_swift__Dispatch(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004b74
int64_t re_swift__CollectionOfOne__UInt8__Foundation__ContiguousBytes(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004bb4
int64_t re_swift__main__SystemAudioSpectrum___12232F587A4C5CD8B1EEDF696793__FC(id receiver_self, SEL selector_cmd); // @ 0x100004bf8
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(int64_t arg0, int64_t arg1); // @ 0x100004d30
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(UltronContext* ctx_ptr); // @ 0x100004d34
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(const uint8_t* input_buf); // @ 0x100004d3c
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004d70
void* re_swift_memcpy20_8(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x100004dc4
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(UltronContext* ctx_ptr, const uint8_t* input_buf); // @ 0x100004dd8
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(UltronContext* ctx_ptr); // @ 0x100004e14
int64_t re_sme_runtime_helper_100004e34(int64_t arg0, int64_t arg1); // @ 0x100004e34
int64_t re_flirt_string_length_scan_4e40(UltronContext* ctx_ptr); // @ 0x100004e40
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(int64_t arg0, int64_t arg1); // @ 0x100004e5c
void* re_flirt_byte_memset_loop_4e6c(void* dst_buf, int fill_byte, size_t byte_len); // @ 0x100004e6c
void* re_flirt_byte_memset_loop_4e88(void* dst_buf, int fill_byte, size_t byte_len); // @ 0x100004e88
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(int64_t arg0, int64_t arg1); // @ 0x100004e9c
void* re_swift_memcpy16_8(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x100004eac
int64_t re_swift__AudioBuffer(UltronContext* ctx_ptr); // @ 0x100004eb8
int64_t re_neural__s4main22ReleaseModifierMonitorC9pollTimer33_FBBA50E09A10196EED1392F2F03BBA9ELLSo7NSTimerCSgvpfi(int64_t arg0, int64_t arg1); // @ 0x100004ed0
int64_t re_swift__AudioBuffer(UltronContext* ctx_ptr); // @ 0x100004ed8
int64_t re_swift__AudioBuffer(int64_t arg0, int64_t arg1); // @ 0x100004f00
int64_t re_swift__AudioTimeStampFlags(int64_t arg0, int64_t arg1); // @ 0x100004f14
void* re_swift_memcpy24_4(void* dst_buf, const void* src_buf, size_t byte_len); // @ 0x100004f28
int64_t re_swift__SMPTETime(int64_t arg0, int64_t arg1); // @ 0x100004f3c
int64_t re_swift__SMPTETimeFlags(int64_t arg0, int64_t arg1); // @ 0x100004f50
int64_t re_swift__SMPTETimeType(int64_t arg0, int64_t arg1); // @ 0x100004f64
int64_t re_swift__AudioStreamBasicDescription(const uint8_t* input_buf); // @ 0x100004f78
ssize_t re_flirt_pthread_mutex_scoped_lock_4f8c(int fd, void* out_buf, size_t nbytes); // @ 0x100004f8c
int64_t re_block_copy_helper_1(int64_t arg0, int64_t arg1); // @ 0x100004fbc
int64_t re_block_copy_helper_4(int64_t arg0, int64_t arg1); // @ 0x100004fc0
int64_t re_block_copy_helper_7(int64_t arg0, int64_t arg1); // @ 0x100004fc4
int64_t re_block_copy_helper_10(int64_t arg0, int64_t arg1); // @ 0x100004fc8
int64_t re_block_copy_helper_16(int64_t arg0, int64_t arg1); // @ 0x100004fcc
int64_t re_block_copy_helper_19(int64_t arg0, int64_t arg1); // @ 0x100004fd0
int64_t re_block_copy_helper_26(int64_t arg0, int64_t arg1); // @ 0x100004fd4
int64_t re_block_destroy_helper_2(int64_t arg0, int64_t arg1); // @ 0x100004fd8
int64_t re_block_destroy_helper_5(int64_t arg0, int64_t arg1); // @ 0x100004fdc
int64_t re_block_destroy_helper_8(int64_t arg0, int64_t arg1); // @ 0x100004fe0
int64_t re_block_destroy_helper_11(int64_t arg0, int64_t arg1); // @ 0x100004fe4
int64_t re_block_destroy_helper_17(int64_t arg0, int64_t arg1); // @ 0x100004fe8
int64_t re_block_destroy_helper_20(int64_t arg0, int64_t arg1); // @ 0x100004fec
int64_t re_block_destroy_helper_27(int64_t arg0, int64_t arg1); // @ 0x100004ff0
int64_t re_swift__AudioStreamBasicDescription(int64_t arg0, int64_t arg1); // @ 0x100004ff4
int64_t re_swift__SMPTETime(int64_t arg0, int64_t arg1); // @ 0x100004ff8
int64_t re_swift__main__CaptureFailure___12232F587A4C5CD8B1EEDF696793__FC(int64_t arg0, int64_t arg1); // @ 0x100004ffc
int64_t re_flirt_dyld_stub_binder_trampoline_5000(const uint8_t* input_buf); // @ 0x100005000
int64_t re_flirt_dyld_stub_binder_trampoline_500c(const uint8_t* input_buf); // @ 0x10000500c
int64_t re_flirt_dyld_stub_binder_trampoline_5018(const uint8_t* input_buf); // @ 0x100005018
int64_t re_flirt_dyld_stub_binder_trampoline_5024(const uint8_t* input_buf); // @ 0x100005024
int64_t re_flirt_dyld_stub_binder_trampoline_5030(const uint8_t* input_buf); // @ 0x100005030
int64_t re_flirt_dyld_stub_binder_trampoline_503c(const uint8_t* input_buf); // @ 0x10000503c
int64_t re_flirt_dyld_stub_binder_trampoline_5048(const uint8_t* input_buf); // @ 0x100005048
int64_t re_flirt_dyld_stub_binder_trampoline_5054(const uint8_t* input_buf); // @ 0x100005054
int64_t re_flirt_dyld_stub_binder_trampoline_5060(const uint8_t* input_buf); // @ 0x100005060
int64_t re_flirt_dyld_stub_binder_trampoline_506c(const uint8_t* input_buf); // @ 0x10000506c
int64_t re_flirt_dyld_stub_binder_trampoline_5078(const uint8_t* input_buf); // @ 0x100005078
int64_t re_flirt_dyld_stub_binder_trampoline_5084(const uint8_t* input_buf); // @ 0x100005084
int64_t re_flirt_dyld_stub_binder_trampoline_5090(const uint8_t* input_buf); // @ 0x100005090
int64_t re_flirt_dyld_stub_binder_trampoline_509c(const uint8_t* input_buf); // @ 0x10000509c
int64_t re_flirt_dyld_stub_binder_trampoline_50a8(const uint8_t* input_buf); // @ 0x1000050a8
int64_t re_flirt_dyld_stub_binder_trampoline_50b4(const uint8_t* input_buf); // @ 0x1000050b4
int64_t re_flirt_dyld_stub_binder_trampoline_50c0(const uint8_t* input_buf); // @ 0x1000050c0
int64_t re_flirt_dyld_stub_binder_trampoline_50cc(const uint8_t* input_buf); // @ 0x1000050cc
int64_t re_flirt_dyld_stub_binder_trampoline_50d8(const uint8_t* input_buf); // @ 0x1000050d8
int64_t re_flirt_dyld_stub_binder_trampoline_50e4(const uint8_t* input_buf); // @ 0x1000050e4
int64_t re_flirt_dyld_stub_binder_trampoline_50f0(const uint8_t* input_buf); // @ 0x1000050f0
int64_t re_flirt_dyld_stub_binder_trampoline_50fc(const uint8_t* input_buf); // @ 0x1000050fc
int64_t re_flirt_dyld_stub_binder_trampoline_5108(const uint8_t* input_buf); // @ 0x100005108
int64_t re_flirt_dyld_stub_binder_trampoline_5114(const uint8_t* input_buf); // @ 0x100005114
int64_t re_flirt_dyld_stub_binder_trampoline_5120(const uint8_t* input_buf); // @ 0x100005120
int64_t re_flirt_dyld_stub_binder_trampoline_512c(const uint8_t* input_buf); // @ 0x10000512c
int64_t re_flirt_dyld_stub_binder_trampoline_5138(const uint8_t* input_buf); // @ 0x100005138
int64_t re_flirt_dyld_stub_binder_trampoline_5144(const uint8_t* input_buf); // @ 0x100005144
int64_t re_flirt_dyld_stub_binder_trampoline_5150(const uint8_t* input_buf); // @ 0x100005150
int64_t re_flirt_dyld_stub_binder_trampoline_515c(const uint8_t* input_buf); // @ 0x10000515c
int64_t re_flirt_dyld_stub_binder_trampoline_5168(const uint8_t* input_buf); // @ 0x100005168
int64_t re_flirt_dyld_stub_binder_trampoline_5174(const uint8_t* input_buf); // @ 0x100005174
int64_t re_flirt_dyld_stub_binder_trampoline_5180(const uint8_t* input_buf); // @ 0x100005180
int64_t re_flirt_dyld_stub_binder_trampoline_518c(const uint8_t* input_buf); // @ 0x10000518c
int64_t re_flirt_dyld_stub_binder_trampoline_5198(const uint8_t* input_buf); // @ 0x100005198
int64_t re_flirt_dyld_stub_binder_trampoline_51a4(const uint8_t* input_buf); // @ 0x1000051a4
int64_t re_flirt_dyld_stub_binder_trampoline_51b0(const uint8_t* input_buf); // @ 0x1000051b0
int64_t re_flirt_dyld_stub_binder_trampoline_51bc(const uint8_t* input_buf); // @ 0x1000051bc
int64_t re_flirt_dyld_stub_binder_trampoline_51c8(const uint8_t* input_buf); // @ 0x1000051c8
int64_t re_flirt_dyld_stub_binder_trampoline_51d4(const uint8_t* input_buf); // @ 0x1000051d4
int64_t re_flirt_dyld_stub_binder_trampoline_51e0(const uint8_t* input_buf); // @ 0x1000051e0
int64_t re_flirt_dyld_stub_binder_trampoline_51ec(const uint8_t* input_buf); // @ 0x1000051ec
int64_t re_flirt_dyld_stub_binder_trampoline_51f8(const uint8_t* input_buf); // @ 0x1000051f8
int64_t re_flirt_dyld_stub_binder_trampoline_5234(const uint8_t* input_buf); // @ 0x100005234
int64_t re_flirt_dyld_stub_binder_trampoline_5240(const uint8_t* input_buf); // @ 0x100005240
int64_t re_flirt_dyld_stub_binder_trampoline_524c(const uint8_t* input_buf); // @ 0x10000524c
int64_t re_flirt_dyld_stub_binder_trampoline_5258(const uint8_t* input_buf); // @ 0x100005258
int64_t re_flirt_dyld_stub_binder_trampoline_5264(const uint8_t* input_buf); // @ 0x100005264
int64_t re_flirt_dyld_stub_binder_trampoline_5270(const uint8_t* input_buf); // @ 0x100005270
int64_t re_flirt_dyld_stub_binder_trampoline_527c(const uint8_t* input_buf); // @ 0x10000527c
int64_t re_flirt_dyld_stub_binder_trampoline_5288(const uint8_t* input_buf); // @ 0x100005288
int64_t re_flirt_dyld_stub_binder_trampoline_5294(const uint8_t* input_buf); // @ 0x100005294
int64_t re_flirt_dyld_stub_binder_trampoline_52a0(const uint8_t* input_buf); // @ 0x1000052a0
int64_t re_flirt_dyld_stub_binder_trampoline_52ac(const uint8_t* input_buf); // @ 0x1000052ac
int64_t re_flirt_dyld_stub_binder_trampoline_52b8(const uint8_t* input_buf); // @ 0x1000052b8
int64_t re_flirt_dyld_stub_binder_trampoline_52c4(const uint8_t* input_buf); // @ 0x1000052c4
int64_t re_flirt_dyld_stub_binder_trampoline_52d0(const uint8_t* input_buf); // @ 0x1000052d0
int64_t re_flirt_dyld_stub_binder_trampoline_52dc(const uint8_t* input_buf); // @ 0x1000052dc
int64_t re_flirt_dyld_stub_binder_trampoline_52e8(const uint8_t* input_buf); // @ 0x1000052e8
int64_t re_flirt_dyld_stub_binder_trampoline_52f4(const uint8_t* input_buf); // @ 0x1000052f4
int64_t re_flirt_dyld_stub_binder_trampoline_5300(const uint8_t* input_buf); // @ 0x100005300
int64_t re_flirt_dyld_stub_binder_trampoline_530c(const uint8_t* input_buf); // @ 0x10000530c
int64_t re_flirt_dyld_stub_binder_trampoline_5318(const uint8_t* input_buf); // @ 0x100005318
int64_t re_flirt_dyld_stub_binder_trampoline_5324(const uint8_t* input_buf); // @ 0x100005324
int64_t re_flirt_dyld_stub_binder_trampoline_5330(const uint8_t* input_buf); // @ 0x100005330
int64_t re_flirt_dyld_stub_binder_trampoline_533c(const uint8_t* input_buf); // @ 0x10000533c
int64_t re_flirt_dyld_stub_binder_trampoline_5348(const uint8_t* input_buf); // @ 0x100005348
int64_t re_flirt_dyld_stub_binder_trampoline_5354(const uint8_t* input_buf); // @ 0x100005354
int64_t re_flirt_dyld_stub_binder_trampoline_5360(const uint8_t* input_buf); // @ 0x100005360
int64_t re_flirt_dyld_stub_binder_trampoline_536c(const uint8_t* input_buf); // @ 0x10000536c
int64_t re_flirt_dyld_stub_binder_trampoline_5378(const uint8_t* input_buf); // @ 0x100005378
int64_t re_flirt_dyld_stub_binder_trampoline_5384(const uint8_t* input_buf); // @ 0x100005384
int64_t re_flirt_dyld_stub_binder_trampoline_5390(const uint8_t* input_buf); // @ 0x100005390
int64_t re_flirt_dyld_stub_binder_trampoline_539c(const uint8_t* input_buf); // @ 0x10000539c
int64_t re_flirt_dyld_stub_binder_trampoline_53a8(const uint8_t* input_buf); // @ 0x1000053a8
int64_t re_flirt_dyld_stub_binder_trampoline_53b4(const uint8_t* input_buf); // @ 0x1000053b4
int64_t re_flirt_dyld_stub_binder_trampoline_53c0(const uint8_t* input_buf); // @ 0x1000053c0
int64_t re_flirt_dyld_stub_binder_trampoline_53cc(const uint8_t* input_buf); // @ 0x1000053cc
int64_t re_flirt_dyld_stub_binder_trampoline_53d8(const uint8_t* input_buf); // @ 0x1000053d8
int64_t re_flirt_dyld_stub_binder_trampoline_53fc(const uint8_t* input_buf); // @ 0x1000053fc
int64_t re_flirt_dyld_stub_binder_trampoline_5408(const uint8_t* input_buf); // @ 0x100005408
int64_t re_flirt_dyld_stub_binder_trampoline_5414(const uint8_t* input_buf); // @ 0x100005414
int64_t re_flirt_dyld_stub_binder_trampoline_5420(const uint8_t* input_buf); // @ 0x100005420
int64_t re_flirt_dyld_stub_binder_trampoline_542c(const uint8_t* input_buf); // @ 0x10000542c
int64_t re_flirt_dyld_stub_binder_trampoline_5438(const uint8_t* input_buf); // @ 0x100005438
int64_t re_flirt_dyld_stub_binder_trampoline_5444(const uint8_t* input_buf); // @ 0x100005444
int64_t re_flirt_dyld_stub_binder_trampoline_5450(const uint8_t* input_buf); // @ 0x100005450
int64_t re_flirt_dyld_stub_binder_trampoline_545c(const uint8_t* input_buf); // @ 0x10000545c
int64_t re_flirt_dyld_stub_binder_trampoline_5468(const uint8_t* input_buf); // @ 0x100005468
int64_t re_flirt_dyld_stub_binder_trampoline_5474(const uint8_t* input_buf); // @ 0x100005474
int64_t re_flirt_dyld_stub_binder_trampoline_5480(const uint8_t* input_buf); // @ 0x100005480
int64_t re_flirt_dyld_stub_binder_trampoline_548c(const uint8_t* input_buf); // @ 0x10000548c
int64_t re_flirt_dyld_stub_binder_trampoline_5498(const uint8_t* input_buf); // @ 0x100005498
int64_t re_flirt_dyld_stub_binder_trampoline_54a4(const uint8_t* input_buf); // @ 0x1000054a4
int64_t re_flirt_dyld_stub_binder_trampoline_54b0(const uint8_t* input_buf); // @ 0x1000054b0
int64_t re_flirt_dyld_stub_binder_trampoline_54bc(const uint8_t* input_buf); // @ 0x1000054bc
int64_t re_flirt_dyld_stub_binder_trampoline_54c8(const uint8_t* input_buf); // @ 0x1000054c8
int64_t re_flirt_dyld_stub_binder_trampoline_54d4(const uint8_t* input_buf); // @ 0x1000054d4
int64_t re_flirt_dyld_stub_binder_trampoline_54e0(const uint8_t* input_buf); // @ 0x1000054e0
int64_t re_flirt_dyld_stub_binder_trampoline_54ec(const uint8_t* input_buf); // @ 0x1000054ec
int64_t re_flirt_dyld_stub_binder_trampoline_54f8(const uint8_t* input_buf); // @ 0x1000054f8
int64_t re_flirt_dyld_stub_binder_trampoline_5504(const uint8_t* input_buf); // @ 0x100005504
int64_t re_flirt_dyld_stub_binder_trampoline_5510(const uint8_t* input_buf); // @ 0x100005510
int64_t re_flirt_dyld_stub_binder_trampoline_551c(const uint8_t* input_buf); // @ 0x10000551c
int64_t re_flirt_dyld_stub_binder_trampoline_5528(const uint8_t* input_buf); // @ 0x100005528
int64_t re_flirt_dyld_stub_binder_trampoline_5534(const uint8_t* input_buf); // @ 0x100005534
int64_t re_flirt_dyld_stub_binder_trampoline_5540(const uint8_t* input_buf); // @ 0x100005540
int64_t re_flirt_dyld_stub_binder_trampoline_554c(const uint8_t* input_buf); // @ 0x10000554c
int64_t re_flirt_dyld_stub_binder_trampoline_5558(const uint8_t* input_buf); // @ 0x100005558
id re_objc_msgSend_UUID(id receiver_self, SEL selector_cmd); // @ 0x100005580
id re_objc_msgSend_availableData(id receiver_self, SEL selector_cmd); // @ 0x1000055a0
id re_objc_msgSend_dataWithJSONObject_options_error(id receiver_self, SEL selector_cmd); // @ 0x1000055c0
id re_objc_msgSend_fileHandleWithStandardInput(id receiver_self, SEL selector_cmd); // @ 0x1000055e0
id re_objc_msgSend_fileHandleWithStandardOutput(id receiver_self, SEL selector_cmd); // @ 0x100005600
id re_objc_msgSend_init(id receiver_self, SEL selector_cmd); // @ 0x100005620
id re_objc_msgSend_lock(id receiver_self, SEL selector_cmd); // @ 0x100005640
id re_objc_msgSend_mainRunLoop(id receiver_self, SEL selector_cmd); // @ 0x100005660
id re_objc_msgSend_run(id receiver_self, SEL selector_cmd); // @ 0x100005680
id re_objc_msgSend_setMuteBehavior(id receiver_self, SEL selector_cmd); // @ 0x1000056a0
id re_objc_msgSend_setName(id receiver_self, SEL selector_cmd); // @ 0x1000056c0
id re_objc_msgSend_setPrivate(id receiver_self, SEL selector_cmd); // @ 0x1000056e0
id re_objc_msgSend_setReadabilityHandler(id receiver_self, SEL selector_cmd); // @ 0x100005700
id re_objc_msgSend_tryLock(id receiver_self, SEL selector_cmd); // @ 0x100005720
id re_objc_msgSend_unlock(id receiver_self, SEL selector_cmd); // @ 0x100005740
id re_objc_msgSend_writeData(id receiver_self, SEL selector_cmd, size_t nbytes); // @ 0x100005760
