use crate::types::UltronDisassembledFile;
use anyhow::{anyhow, Result};
use libloading::{Library, Symbol};
use serde_json::{json, Value};
use std::fs;
use std::os::raw::{c_char, c_int};
use std::path::PathBuf;
use std::process::Command;

type LlvmAssembleFn = unsafe extern "C" fn(
    instr: *const c_char,
    triple: *const c_char,
    cpu: *const c_char,
    out_bytes: *mut *mut u8,
    out_len: *mut usize,
) -> c_int;

pub struct UltronLlvmAssembler;

impl UltronLlvmAssembler {
    pub fn find_dylib_path() -> Option<PathBuf> {
        let candidates = [
            PathBuf::from("ultron_disassembler/lib/libLLVMServices.dylib"),
            PathBuf::from("lib/libLLVMServices.dylib"),
        ];
        candidates.into_iter().find(|p| p.exists())
    }

    pub fn assemble(instruction: &str, arch: &str) -> Result<Value> {
        let triple = if arch == "x86_64" {
            "x86_64-apple-macosx14.0.0"
        } else {
            "arm64-apple-macosx14.0.0"
        };

        // Try native libLLVMServices.dylib FFI first
        if let Some(dylib_path) = Self::find_dylib_path() {
            unsafe {
                if let Ok(lib) = Library::new(&dylib_path) {
                    if let Ok(func) = lib.get::<Symbol<LlvmAssembleFn>>(b"llvmservice_assemble_unchecked\0") {
                        let c_instr = std::ffi::CString::new(instruction)?;
                        let c_triple = std::ffi::CString::new(triple)?;
                        let c_cpu = std::ffi::CString::new("")?;
                        let mut out_ptr: *mut u8 = std::ptr::null_mut();
                        let mut out_len: usize = 0;

                        let rc = func(
                            c_instr.as_ptr(),
                            c_triple.as_ptr(),
                            c_cpu.as_ptr(),
                            &mut out_ptr,
                            &mut out_len,
                        );
                        if rc == 0 && !out_ptr.is_null() && out_len > 0 {
                            let slice = std::slice::from_raw_parts(out_ptr, out_len).to_vec();
                            return Ok(json!({
                                "instruction": instruction,
                                "arch": arch,
                                "triple": triple,
                                "engine": "libLLVMServices.dylib (Native Rust FFI)",
                                "bytes_hex": hex::encode(&slice),
                                "byte_length": slice.len(),
                                "bytes": slice,
                            }));
                        }
                    }
                }
            }
        }

        // Fallback to clang assembler
        let tmp_s = "/tmp/ultron_rs_asm.s";
        let tmp_o = "/tmp/ultron_rs_asm.o";
        fs::write(tmp_s, format!(".text\n{}\n", instruction))?;
        let clang_arch = if arch == "x86_64" { "x86_64" } else { "arm64" };
        let status = Command::new("clang")
            .args(["-arch", clang_arch, "-c", tmp_s, "-o", tmp_o])
            .status()?;
        if !status.success() {
            return Err(anyhow!("Failed to assemble instruction: {}", instruction));
        }
        let obj_bytes = fs::read(tmp_o)?;
        if let Ok(goblin::Object::Mach(goblin::mach::Mach::Binary(macho))) = goblin::Object::parse(&obj_bytes) {
            for seg in &macho.segments {
                if let Ok(secs) = seg.sections() {
                    for (sec, data) in secs {
                        if sec.name().unwrap_or("") == "__text" && !data.is_empty() {
                            return Ok(json!({
                                "instruction": instruction,
                                "arch": arch,
                                "triple": triple,
                                "engine": "Apple LLVM clang (Rust Backend)",
                                "bytes_hex": hex::encode(data),
                                "byte_length": data.len(),
                                "bytes": data.to_vec(),
                            }));
                        }
                    }
                }
            }
        }
        Err(anyhow!("No machine bytes produced for instruction"))
    }

    pub fn export_patched_binary(doc: &UltronDisassembledFile, output_path: &str) -> Result<Value> {
        fs::write(output_path, &doc.raw_bytes)?;
        #[cfg(target_os = "macos")]
        {
            use std::os::unix::fs::PermissionsExt;
            if let Ok(meta) = fs::metadata(output_path) {
                let mut perms = meta.permissions();
                perms.set_mode(0o755);
                let _ = fs::set_permissions(output_path, perms);
            }
        }
        let codesign_out = Command::new("codesign")
            .args(["-f", "-s", "-", output_path])
            .output();
        let signed = codesign_out.map(|o| o.status.success()).unwrap_or(false);

        Ok(json!({
            "exported": true,
            "output_path": output_path,
            "size_bytes": doc.raw_bytes.len(),
            "codesigned_adhoc": signed,
        }))
    }
}
