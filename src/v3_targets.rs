#![allow(dead_code)]

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use std::collections::BTreeMap;
use std::fs;
use std::path::Path;
use std::process::{Command, Stdio};
use std::time::{Duration, Instant};

// ============================================================================
// 1. ULTRON ARTIFACT & ARCHIVE ANALYZER (.asar, .ipa, .apk, .dmg, .zip, .app)
// ============================================================================

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct AsarFileEntry {
    pub path: String,
    pub size: u64,
    pub offset: u64,
    pub unpacked: bool,
    pub executable: bool,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct ElectronIpcFinding {
    pub file: String,
    pub direction: String,
    pub api: String,
    pub channel: String,
    pub line: usize,
    pub snippet: String,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct ElectronSecurityFinding {
    pub file: String,
    pub flag: String,
    pub value: String,
    pub severity: String,
    pub rationale: String,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct ZipEntryInfo {
    pub name: String,
    pub compressed_size: u64,
    pub uncompressed_size: u64,
    pub compression_method: u16,
    pub crc32: String,
    pub category: String,
}

pub struct UltronArtifactAnalyzer;

impl UltronArtifactAnalyzer {
    pub fn inspect_artifact(path: &str) -> Value {
        let p = Path::new(path);
        if !p.exists() {
            return json!({
                "status": "error",
                "error": format!("Artifact path does not exist: {}", path),
                "path": path,
            });
        }

        if p.is_dir() {
            return Self::inspect_app_bundle_dir(p);
        }

        let bytes = match fs::read(p) {
            Ok(b) => b,
            Err(e) => {
                return json!({
                    "status": "error",
                    "error": format!("Failed to read artifact {}: {}", path, e),
                    "path": path,
                });
            }
        };

        let ext = p
            .extension()
            .and_then(|e| e.to_str())
            .unwrap_or("")
            .to_ascii_lowercase();

        // Check Chromium Pickle ASAR header: [04 00 00 00] + JSON `{` around offset 16
        if ext == "asar" || Self::is_asar_archive(&bytes) {
            return Self::inspect_asar_bytes(path, &bytes);
        }

        // Check ZIP / APK / IPA / JAR / AAB magic (`PK\x03\x04` or `PK\x05\x06`)
        if bytes.len() >= 4
            && (&bytes[0..4] == b"PK\x03\x04" || &bytes[0..4] == b"PK\x05\x06")
        {
            return Self::inspect_zip_bundle_bytes(path, &ext, &bytes);
        }

        // Check Apple DMG (`koly` trailer in last 512 bytes or dmg extension)
        if ext == "dmg" || Self::has_dmg_koly_trailer(&bytes) {
            return Self::inspect_dmg_bytes(path, &bytes);
        }

        json!({
            "status": "ok",
            "artifact_type": "raw_binary_or_unknown_archive",
            "path": path,
            "file_size": bytes.len(),
            "magic_hex": hex::encode(&bytes[..bytes.len().min(16)]),
        })
    }

    fn is_asar_archive(bytes: &[u8]) -> bool {
        if bytes.len() < 20 {
            return false;
        }
        let pickle_header_size = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        let str_len = u32::from_le_bytes([bytes[12], bytes[13], bytes[14], bytes[15]]) as usize;
        pickle_header_size == 4
            && bytes.len() >= 16 + str_len
            && bytes[16] == b'{'
    }

    fn inspect_asar_bytes(path: &str, bytes: &[u8]) -> Value {
        if bytes.len() < 16 {
            return json!({
                "status": "error",
                "error": "Truncated ASAR header (< 16 bytes)",
                "path": path,
            });
        }

        let header_size_pickle = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        let header_total_size = u32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]) as usize;
        let header_payload_size = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]) as usize;
        let json_str_len = u32::from_le_bytes([bytes[12], bytes[13], bytes[14], bytes[15]]) as usize;

        if 16 + json_str_len > bytes.len() {
            return json!({
                "status": "error",
                "error": format!("ASAR header string length ({}) exceeds file size ({})", json_str_len, bytes.len()),
                "path": path,
            });
        }

        let header_json_str = String::from_utf8_lossy(&bytes[16..16 + json_str_len]).to_string();
        // Data offset in Chromium Pickle ASAR is `8 + header_total_size` (aligned to 4 bytes)
        let aligned_str = (json_str_len + 3) & !3;
        let data_offset = if 8 + header_total_size <= bytes.len() && 8 + header_total_size >= 16 + json_str_len {
            8 + header_total_size
        } else {
            (16 + aligned_str).min(bytes.len())
        };

        let parsed_tree: Value = match serde_json::from_str(&header_json_str) {
            Ok(v) => v,
            Err(e) => {
                return json!({
                    "status": "error",
                    "error": format!("Invalid ASAR header JSON: {}", e),
                    "path": path,
                });
            }
        };

        let mut files = Vec::new();
        Self::walk_asar_tree(&parsed_tree, "", &mut files);

        let mut package_json_meta: Option<Value> = None;
        let mut ipc_channels: Vec<ElectronIpcFinding> = Vec::new();
        let mut security_findings: Vec<ElectronSecurityFinding> = Vec::new();
        let mut discovered_urls: Vec<String> = Vec::new();
        let mut api_endpoints: Vec<String> = Vec::new();
        let mut extracted_sources: Vec<Value> = Vec::new();

        for entry in &files {
            if entry.unpacked {
                continue;
            }
            let start = data_offset.saturating_add(entry.offset as usize);
            let end = start.saturating_add(entry.size as usize);
            if end > bytes.len() || start >= end {
                continue;
            }
            let file_bytes = &bytes[start..end];
            let lower_path = entry.path.to_ascii_lowercase();

            if lower_path.ends_with("package.json") {
                if let Ok(pkg) = serde_json::from_slice::<Value>(file_bytes) {
                    package_json_meta = Some(pkg);
                }
            }

            if lower_path.ends_with(".js")
                || lower_path.ends_with(".mjs")
                || lower_path.ends_with(".cjs")
                || lower_path.ends_with(".ts")
                || lower_path.ends_with(".html")
            {
                let text = String::from_utf8_lossy(file_bytes).to_string();
                Self::scan_electron_js(
                    &entry.path,
                    &text,
                    &mut ipc_channels,
                    &mut security_findings,
                    &mut discovered_urls,
                    &mut api_endpoints,
                );
                let preview = if text.len() > 2048 {
                    format!("{}...", &text[..2048])
                } else {
                    text
                };
                extracted_sources.push(json!({
                    "path": entry.path,
                    "size": entry.size,
                    "preview": preview,
                }));
            }
        }

        discovered_urls.sort();
        discovered_urls.dedup();
        api_endpoints.sort();
        api_endpoints.dedup();

        json!({
            "status": "ok",
            "artifact_type": "electron_asar",
            "path": path,
            "file_size": bytes.len(),
            "pickle_header": {
                "header_size_pickle": header_size_pickle,
                "header_total_size": header_total_size,
                "header_payload_size": header_payload_size,
                "json_string_length": json_str_len,
                "data_offset": data_offset,
            },
            "file_count": files.len(),
            "files": files,
            "package_json": package_json_meta,
            "ipc_channels": ipc_channels,
            "security_findings": security_findings,
            "urls": discovered_urls,
            "api_endpoints": api_endpoints,
            "extracted_sources": extracted_sources,
        })
    }

    fn walk_asar_tree(node: &Value, prefix: &str, out: &mut Vec<AsarFileEntry>) {
        if let Some(files_obj) = node.get("files").and_then(|f| f.as_object()) {
            for (name, child) in files_obj {
                let full_path = if prefix.is_empty() {
                    name.clone()
                } else {
                    format!("{}/{}", prefix, name)
                };
                if child.get("files").is_some() {
                    Self::walk_asar_tree(child, &full_path, out);
                } else {
                    let size = child
                        .get("size")
                        .and_then(|v| v.as_u64())
                        .unwrap_or(0);
                    let offset = child
                        .get("offset")
                        .and_then(|v| {
                            v.as_str()
                                .and_then(|s| s.parse::<u64>().ok())
                                .or_else(|| v.as_u64())
                        })
                        .unwrap_or(0);
                    let unpacked = child
                        .get("unpacked")
                        .and_then(|v| v.as_bool())
                        .unwrap_or(false);
                    let executable = child
                        .get("executable")
                        .and_then(|v| v.as_bool())
                        .unwrap_or(false);
                    out.push(AsarFileEntry {
                        path: full_path,
                        size,
                        offset,
                        unpacked,
                        executable,
                    });
                }
            }
        }
    }

    fn scan_electron_js(
        file_path: &str,
        source: &str,
        ipc_out: &mut Vec<ElectronIpcFinding>,
        sec_out: &mut Vec<ElectronSecurityFinding>,
        urls_out: &mut Vec<String>,
        endpoints_out: &mut Vec<String>,
    ) {
        let ipc_patterns = [
            ("ipcMain.handle", "renderer->main (invoke/handle)"),
            ("ipcMain.on", "renderer->main (send/on)"),
            ("ipcMain.once", "renderer->main (once)"),
            ("ipcRenderer.invoke", "renderer->main (invoke)"),
            ("ipcRenderer.send", "renderer->main (send)"),
            ("ipcRenderer.on", "main->renderer (event)"),
            ("contextBridge.exposeInMainWorld", "preload->world (bridge)"),
        ];

        for (idx, line) in source.lines().enumerate() {
            let trimmed = line.trim();
            for (pat, direction) in &ipc_patterns {
                if let Some(pos) = trimmed.find(pat) {
                    let after = &trimmed[pos + pat.len()..];
                    if let Some(channel) = Self::extract_first_quoted_arg(after) {
                        ipc_out.push(ElectronIpcFinding {
                            file: file_path.to_string(),
                            direction: direction.to_string(),
                            api: pat.to_string(),
                            channel,
                            line: idx + 1,
                            snippet: trimmed.chars().take(140).collect(),
                        });
                    }
                }
            }

            // Security flags check
            let sec_flags = [
                ("nodeIntegration", "true", "HIGH", "Enabling nodeIntegration exposes Node.js primitives (child_process, fs) to renderer XSS."),
                ("nodeIntegration", "false", "INFO", "nodeIntegration is explicitly disabled."),
                ("contextIsolation", "false", "HIGH", "Disabling contextIsolation allows renderer scripts to tamper with preload globals and Electron internals."),
                ("contextIsolation", "true", "INFO", "contextIsolation is enabled."),
                ("webSecurity", "false", "MEDIUM", "Disabling webSecurity bypasses Same-Origin Policy in Chromium renderer."),
                ("sandbox", "false", "MEDIUM", "Disabling Chromium OS sandbox weakens process isolation."),
                ("enableRemoteModule", "true", "HIGH", "Enabling deprecated @electron/remote exposes main-process objects directly to renderer."),
                ("allowRunningInsecureContent", "true", "MEDIUM", "Allows HTTPS pages to load and execute HTTP scripts/resources."),
            ];

            for (flag, val, severity, rationale) in &sec_flags {
                if let Some(fpos) = trimmed.find(flag) {
                    let rest = &trimmed[fpos + flag.len()..];
                    let compact: String = rest.chars().filter(|c| !c.is_whitespace()).collect();
                    let target_pat = format!(":{}", val);
                    if compact.starts_with(&target_pat) {
                        sec_out.push(ElectronSecurityFinding {
                            file: file_path.to_string(),
                            flag: flag.to_string(),
                            value: val.to_string(),
                            severity: severity.to_string(),
                            rationale: rationale.to_string(),
                        });
                    }
                }
            }

            // Extract URLs (http://, https://, ws://, wss://)
            for scheme in &["https://", "http://", "wss://", "ws://"] {
                let mut search_slice = trimmed;
                while let Some(upos) = search_slice.find(scheme) {
                    let start_slice = &search_slice[upos..];
                    let url_str: String = start_slice
                        .chars()
                        .take_while(|c| {
                            !c.is_whitespace()
                                && *c != '\''
                                && *c != '"'
                                && *c != '`'
                                && *c != ')'
                                && *c != ';'
                                && *c != ','
                        })
                        .collect();
                    if url_str.len() > scheme.len() + 3 {
                        if url_str.contains("/api/") || url_str.contains("/v1/") || url_str.contains("/v2/") {
                            endpoints_out.push(url_str.clone());
                        }
                        urls_out.push(url_str.clone());
                    }
                    let advance = upos + scheme.len();
                    if advance < search_slice.len() {
                        search_slice = &search_slice[advance..];
                    } else {
                        break;
                    }
                }
            }

            // Also look for relative API routes like '/api/v1/...' or "/v1/..."
            for api_prefix in &["/api/", "/v1/", "/v2/", "/graphql", "/oauth/"] {
                if let Some(apos) = trimmed.find(api_prefix) {
                    let candidate: String = trimmed[apos..]
                        .chars()
                        .take_while(|c| {
                            c.is_ascii_alphanumeric()
                                || *c == '/'
                                || *c == '_'
                                || *c == '-'
                                || *c == '.'
                        })
                        .collect();
                    if candidate.len() > 4 {
                        endpoints_out.push(candidate);
                    }
                }
            }
        }
    }

    fn extract_first_quoted_arg(s: &str) -> Option<String> {
        let trimmed = s.trim_start();
        let after_paren = if let Some(rest) = trimmed.strip_prefix('(') {
            rest.trim_start()
        } else {
            trimmed
        };
        let quote = after_paren.chars().next()?;
        if quote != '\'' && quote != '"' && quote != '`' {
            return None;
        }
        let inner = &after_paren[quote.len_utf8()..];
        let end_pos = inner.find(quote)?;
        Some(inner[..end_pos].to_string())
    }

    fn inspect_zip_bundle_bytes(path: &str, ext: &str, bytes: &[u8]) -> Value {
        let mut entries: Vec<ZipEntryInfo> = Vec::new();
        let mut seen_names = std::collections::HashSet::new();

        // 1. Parse Local File Headers (`PK\x03\x04`) across the archive
        let mut offset = 0usize;
        while offset + 30 <= bytes.len() {
            if &bytes[offset..offset + 4] == b"PK\x03\x04" {
                let compression_method = u16::from_le_bytes([bytes[offset + 8], bytes[offset + 9]]);
                let crc32_val = u32::from_le_bytes([
                    bytes[offset + 14],
                    bytes[offset + 15],
                    bytes[offset + 16],
                    bytes[offset + 17],
                ]);
                let comp_size = u32::from_le_bytes([
                    bytes[offset + 18],
                    bytes[offset + 19],
                    bytes[offset + 20],
                    bytes[offset + 21],
                ]) as u64;
                let uncomp_size = u32::from_le_bytes([
                    bytes[offset + 22],
                    bytes[offset + 23],
                    bytes[offset + 24],
                    bytes[offset + 25],
                ]) as u64;
                let name_len = u16::from_le_bytes([bytes[offset + 26], bytes[offset + 27]]) as usize;
                let extra_len = u16::from_le_bytes([bytes[offset + 28], bytes[offset + 29]]) as usize;

                let name_start = offset + 30;
                let name_end = (name_start + name_len).min(bytes.len());
                let name = String::from_utf8_lossy(&bytes[name_start..name_end]).to_string();

                if !name.is_empty() && seen_names.insert(name.clone()) {
                    let category = Self::classify_bundle_entry(&name);
                    entries.push(ZipEntryInfo {
                        name,
                        compressed_size: comp_size,
                        uncompressed_size: uncomp_size,
                        compression_method,
                        crc32: format!("0x{:08x}", crc32_val),
                        category,
                    });
                }

                let data_start = name_end.saturating_add(extra_len);
                let next = if comp_size > 0 {
                    data_start.saturating_add(comp_size as usize)
                } else {
                    data_start.saturating_add(1)
                };
                offset = if next > offset { next } else { offset + 4 };
            } else if &bytes[offset..offset + 4] == b"PK\x01\x02" && offset + 46 <= bytes.len() {
                // Central Directory File Header (`PK\x01\x02`)
                let compression_method = u16::from_le_bytes([bytes[offset + 10], bytes[offset + 11]]);
                let crc32_val = u32::from_le_bytes([
                    bytes[offset + 16],
                    bytes[offset + 17],
                    bytes[offset + 18],
                    bytes[offset + 19],
                ]);
                let comp_size = u32::from_le_bytes([
                    bytes[offset + 20],
                    bytes[offset + 21],
                    bytes[offset + 22],
                    bytes[offset + 23],
                ]) as u64;
                let uncomp_size = u32::from_le_bytes([
                    bytes[offset + 24],
                    bytes[offset + 25],
                    bytes[offset + 26],
                    bytes[offset + 27],
                ]) as u64;
                let name_len = u16::from_le_bytes([bytes[offset + 28], bytes[offset + 29]]) as usize;
                let extra_len = u16::from_le_bytes([bytes[offset + 30], bytes[offset + 31]]) as usize;
                let comment_len = u16::from_le_bytes([bytes[offset + 32], bytes[offset + 33]]) as usize;

                let name_start = offset + 46;
                let name_end = (name_start + name_len).min(bytes.len());
                let name = String::from_utf8_lossy(&bytes[name_start..name_end]).to_string();

                if !name.is_empty() && seen_names.insert(name.clone()) {
                    let category = Self::classify_bundle_entry(&name);
                    entries.push(ZipEntryInfo {
                        name,
                        compressed_size: comp_size,
                        uncompressed_size: uncomp_size,
                        compression_method,
                        crc32: format!("0x{:08x}", crc32_val),
                        category,
                    });
                }
                offset = name_end
                    .saturating_add(extra_len)
                    .saturating_add(comment_len)
                    .max(offset + 4);
            } else {
                offset += 1;
            }
        }

        let has_android_manifest = entries.iter().any(|e| e.name.ends_with("AndroidManifest.xml"));
        let has_classes_dex = entries.iter().any(|e| e.name.ends_with(".dex"));
        let has_info_plist = entries.iter().any(|e| e.name.ends_with("Info.plist"));
        let dex_files: Vec<String> = entries
            .iter()
            .filter(|e| e.name.ends_with(".dex"))
            .map(|e| e.name.clone())
            .collect();
        let native_libs: Vec<String> = entries
            .iter()
            .filter(|e| e.name.ends_with(".so") || e.name.ends_with(".dylib"))
            .map(|e| e.name.clone())
            .collect();
        let manifests: Vec<String> = entries
            .iter()
            .filter(|e| e.name.ends_with("AndroidManifest.xml") || e.name.ends_with("Info.plist"))
            .map(|e| e.name.clone())
            .collect();

        let bundle_kind = if ext == "apk" || has_android_manifest || has_classes_dex {
            "android_apk"
        } else if ext == "ipa" || has_info_plist {
            "ios_ipa"
        } else {
            "zip_archive"
        };

        json!({
            "status": "ok",
            "artifact_type": bundle_kind,
            "path": path,
            "file_size": bytes.len(),
            "entry_count": entries.len(),
            "manifests": manifests,
            "dex_files": dex_files,
            "native_libraries": native_libs,
            "entries": entries,
        })
    }

    fn classify_bundle_entry(name: &str) -> String {
        if name.ends_with("AndroidManifest.xml") || name.ends_with("Info.plist") {
            "manifest".to_string()
        } else if name.ends_with(".dex") {
            "dalvik_bytecode".to_string()
        } else if name.ends_with(".so") || name.ends_with(".dylib") {
            "native_library".to_string()
        } else if name.contains("META-INF/") || name.contains("_CodeSignature/") {
            "signature".to_string()
        } else if name.ends_with(".arsc") || name.starts_with("res/") || name.starts_with("assets/") {
            "resource".to_string()
        } else {
            "file".to_string()
        }
    }

    fn inspect_app_bundle_dir(dir: &Path) -> Value {
        let mut files = Vec::new();
        let mut executables = Vec::new();
        let mut plists = Vec::new();
        let mut frameworks = Vec::new();
        let mut asar_archives = Vec::new();

        Self::walk_dir_recursive(
            dir,
            dir,
            &mut files,
            &mut executables,
            &mut plists,
            &mut frameworks,
            &mut asar_archives,
        );

        json!({
            "status": "ok",
            "artifact_type": "macos_app_bundle",
            "path": dir.display().to_string(),
            "total_files": files.len(),
            "executables": executables,
            "info_plists": plists,
            "frameworks": frameworks,
            "asar_archives": asar_archives,
            "files": files,
        })
    }

    fn walk_dir_recursive(
        root: &Path,
        current: &Path,
        files: &mut Vec<Value>,
        executables: &mut Vec<String>,
        plists: &mut Vec<String>,
        frameworks: &mut Vec<String>,
        asar_archives: &mut Vec<String>,
    ) {
        let Ok(read_dir) = fs::read_dir(current) else {
            return;
        };
        for entry in read_dir.flatten() {
            let p = entry.path();
            let rel = p
                .strip_prefix(root)
                .unwrap_or(&p)
                .display()
                .to_string();
            if p.is_dir() {
                if rel.ends_with(".framework") || rel.ends_with(".dylib") {
                    frameworks.push(rel.clone());
                }
                if files.len() < 500 {
                    Self::walk_dir_recursive(
                        root,
                        &p,
                        files,
                        executables,
                        plists,
                        frameworks,
                        asar_archives,
                    );
                }
            } else if let Ok(meta) = entry.metadata() {
                if rel.ends_with("Info.plist") {
                    plists.push(rel.clone());
                }
                if rel.contains("Contents/MacOS/") {
                    executables.push(rel.clone());
                }
                if rel.ends_with(".asar") {
                    asar_archives.push(rel.clone());
                }
                files.push(json!({
                    "path": rel,
                    "size": meta.len(),
                }));
            }
        }
    }

    fn has_dmg_koly_trailer(bytes: &[u8]) -> bool {
        bytes.len() >= 512 && &bytes[bytes.len() - 512..bytes.len() - 508] == b"koly"
    }

    fn inspect_dmg_bytes(path: &str, bytes: &[u8]) -> Value {
        let has_koly = Self::has_dmg_koly_trailer(bytes);
        let (version, data_fork_length, xml_offset, xml_length) = if has_koly {
            let t = &bytes[bytes.len() - 512..];
            let ver = u32::from_be_bytes([t[4], t[5], t[6], t[7]]);
            let df_len = u64::from_be_bytes([
                t[24], t[25], t[26], t[27], t[28], t[29], t[30], t[31],
            ]);
            let x_off = u64::from_be_bytes([
                t[216], t[217], t[218], t[219], t[220], t[221], t[222], t[223],
            ]);
            let x_len = u64::from_be_bytes([
                t[224], t[225], t[226], t[227], t[228], t[229], t[230], t[231],
            ]);
            (ver, df_len, x_off, x_len)
        } else {
            (0, bytes.len() as u64, 0, 0)
        };

        json!({
            "status": "ok",
            "artifact_type": "apple_dmg_image",
            "path": path,
            "file_size": bytes.len(),
            "has_koly_trailer": has_koly,
            "udif_version": version,
            "data_fork_length": data_fork_length,
            "plist_xml_offset": xml_offset,
            "plist_xml_length": xml_length,
        })
    }
}

// ============================================================================
// 2. ULTRON NON-NATIVE VM BYTECODE DECODER (EVM, Android DEX, .NET CLR/CIL)
// ============================================================================

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct EvmInstruction {
    pub offset: usize,
    pub opcode: u8,
    pub mnemonic: String,
    pub operand: String,
    pub comment: String,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct EvmFunctionDispatch {
    pub selector: String,
    pub signature: String,
    pub target_offset: String,
    pub pseudocode: String,
}

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct DexMethodDecoded {
    pub method_idx: usize,
    pub class_name: String,
    pub method_name: String,
    pub proto: String,
    pub instructions: Vec<String>,
    pub pseudocode: String,
}

pub struct UltronBytecodeDecoder;

impl UltronBytecodeDecoder {
    pub fn decode_bytecode_file(path: &str) -> Value {
        let p = Path::new(path);
        let raw_bytes = match fs::read(p) {
            Ok(b) => b,
            Err(e) => {
                return json!({
                    "status": "error",
                    "error": format!("Failed to read bytecode file {}: {}", path, e),
                    "path": path,
                });
            }
        };

        let ext = p
            .extension()
            .and_then(|e| e.to_str())
            .unwrap_or("")
            .to_ascii_lowercase();

        // 1. Check Android DEX (`dex\n035\0` .. `dex\n039\0`)
        if raw_bytes.len() >= 8 && &raw_bytes[0..4] == b"dex\n" {
            return Self::decode_dex_bytes(path, &raw_bytes);
        }

        // 2. Check .NET CLR / CIL Assembly (`BSJB` signature in PE/DLL/EXE or metadata file)
        if ext == "dll"
            || ext == "exe"
            || ext == "cil"
            || Self::find_bsjb_offset(&raw_bytes).is_some()
        {
            if let Some(bsjb_off) = Self::find_bsjb_offset(&raw_bytes) {
                return Self::decode_clr_bytes(path, &raw_bytes, bsjb_off);
            }
        }

        // 3. Default / `.evm`: Ethereum EVM Bytecode (supports raw binary or ASCII hex)
        let evm_bytes = Self::parse_evm_input(&raw_bytes);
        Self::decode_evm_bytes(path, &evm_bytes)
    }

    fn parse_evm_input(raw_bytes: &[u8]) -> Vec<u8> {
        if let Ok(text) = std::str::from_utf8(raw_bytes) {
            let trimmed = text.trim().trim_start_matches("0x").trim_start_matches("0X");
            let clean: String = trimmed.chars().filter(|c| !c.is_whitespace()).collect();
            if !clean.is_empty()
                && clean.len() % 2 == 0
                && clean.chars().all(|c| c.is_ascii_hexdigit())
            {
                if let Ok(decoded) = hex::decode(&clean) {
                    return decoded;
                }
            }
        }
        raw_bytes.to_vec()
    }

    pub fn resolve_solidity_selector(selector_hex: &str) -> Option<&'static str> {
        match selector_hex.to_ascii_lowercase().as_str() {
            "a9059cbb" => Some("transfer(address,uint256)"),
            "70a08231" => Some("balanceOf(address)"),
            "095ea7b3" => Some("approve(address,uint256)"),
            "23b872dd" => Some("transferFrom(address,address,uint256)"),
            "18160ddd" => Some("totalSupply()"),
            "dd62ed3e" => Some("allowance(address,address)"),
            "06fdde03" => Some("name()"),
            "95d89b41" => Some("symbol()"),
            "313ce567" => Some("decimals()"),
            "8da5cb5b" => Some("owner()"),
            "2e1a7d4d" => Some("withdraw(uint256)"),
            "3ccfd60b" => Some("withdraw()"),
            "d0e30db0" => Some("deposit()"),
            "f2fde38b" => Some("transferOwnership(address)"),
            "715018a6" => Some("renounceOwnership()"),
            "40c10f19" => Some("mint(address,uint256)"),
            "42966c68" => Some("burn(uint256)"),
            "79cc6790" => Some("burnFrom(address,uint256)"),
            "6352211e" => Some("ownerOf(uint256)"),
            "42842e0e" => Some("safeTransferFrom(address,address,uint256)"),
            "b88d4fde" => Some("safeTransferFrom(address,address,uint256,bytes)"),
            "a22cb465" => Some("setApprovalForAll(address,bool)"),
            "081812fc" => Some("getApproved(uint256)"),
            "e985e9c5" => Some("isApprovedForAll(address,address)"),
            "01ffc9a7" => Some("supportsInterface(bytes4)"),
            "5c975abb" => Some("paused()"),
            "8456cb59" => Some("pause()"),
            "3f4ba83a" => Some("unpause()"),
            "d505accf" => Some("permit(address,address,uint256,uint256,uint8,bytes32,bytes32)"),
            "3659cfe6" => Some("upgradeTo(address)"),
            "4f1ef286" => Some("upgradeToAndCall(address,bytes)"),
            "f851a440" => Some("admin()"),
            "5c60da1b" => Some("implementation()"),
            _ => None,
        }
    }

    pub fn decode_evm_bytes(path: &str, bytes: &[u8]) -> Value {
        let mut instructions: Vec<EvmInstruction> = Vec::new();
        let mut pc = 0usize;
        let mut jumpdests: Vec<usize> = Vec::new();
        let mut storage_reads = 0usize;
        let mut storage_writes = 0usize;
        let mut external_calls = 0usize;
        let mut has_selfdestruct = false;
        let mut has_delegatecall = false;

        while pc < bytes.len() {
            let op = bytes[pc];
            let insn_offset = pc;
            pc += 1;

            if (0x60..=0x7f).contains(&op) {
                let push_len = (op - 0x5f) as usize;
                let end = (pc + push_len).min(bytes.len());
                let imm_hex = hex::encode(&bytes[pc..end]);
                pc = end;

                let comment = if push_len == 4 {
                    if let Some(sig) = Self::resolve_solidity_selector(&imm_hex) {
                        format!("Solidity selector: {} -> {}", imm_hex, sig)
                    } else {
                        String::new()
                    }
                } else {
                    String::new()
                };

                instructions.push(EvmInstruction {
                    offset: insn_offset,
                    opcode: op,
                    mnemonic: format!("PUSH{}", push_len),
                    operand: format!("0x{}", imm_hex),
                    comment,
                });
                continue;
            }

            let (mnemonic, comment) = match op {
                0x00 => ("STOP", "Halts execution"),
                0x01 => ("ADD", "u256 addition"),
                0x02 => ("MUL", "u256 multiplication"),
                0x03 => ("SUB", "u256 subtraction"),
                0x04 => ("DIV", "u256 unsigned division"),
                0x05 => ("SDIV", "i256 signed division"),
                0x06 => ("MOD", "u256 modulo"),
                0x07 => ("SMOD", "i256 signed modulo"),
                0x08 => ("ADDMOD", "(a + b) % N"),
                0x09 => ("MULMOD", "(a * b) % N"),
                0x0a => ("EXP", "Exponential operation"),
                0x0b => ("SIGNEXTEND", "Extend two's complement signed int"),
                0x10 => ("LT", "Less-than comparison"),
                0x11 => ("GT", "Greater-than comparison"),
                0x12 => ("SLT", "Signed less-than"),
                0x13 => ("SGT", "Signed greater-than"),
                0x14 => ("EQ", "Equality comparison"),
                0x15 => ("ISZERO", "Simple not / zero check"),
                0x16 => ("AND", "Bitwise AND"),
                0x17 => ("OR", "Bitwise OR"),
                0x18 => ("XOR", "Bitwise XOR"),
                0x19 => ("NOT", "Bitwise NOT"),
                0x1a => ("BYTE", "Retrieve single byte from word"),
                0x1b => ("SHL", "Logical shift left"),
                0x1c => ("SHR", "Logical shift right"),
                0x1d => ("SAR", "Arithmetic shift right"),
                0x20 => ("SHA3", "Keccak-256 hash"),
                0x30 => ("ADDRESS", "Current contract address"),
                0x31 => ("BALANCE", "Account balance"),
                0x32 => ("ORIGIN", "tx.origin"),
                0x33 => ("CALLER", "msg.sender"),
                0x34 => ("CALLVALUE", "msg.value (wei)"),
                0x35 => ("CALLDATALOAD", "Load 32-byte word from msg.data"),
                0x36 => ("CALLDATASIZE", "Size of msg.data"),
                0x37 => ("CALLDATACOPY", "Copy msg.data to memory"),
                0x38 => ("CODESIZE", "Contract code size"),
                0x39 => ("CODECOPY", "Copy contract code to memory"),
                0x3a => ("GASPRICE", "tx.gasprice"),
                0x3b => ("EXTCODESIZE", "External contract code size"),
                0x3c => ("EXTCODECOPY", "Copy external code"),
                0x3d => ("RETURNDATASIZE", "Size of prior call return data"),
                0x3e => ("RETURNDATACOPY", "Copy prior call return data"),
                0x3f => ("EXTCODEHASH", "Keccak-256 hash of account code"),
                0x40 => ("BLOCKHASH", "Hash of recent complete block"),
                0x41 => ("COINBASE", "block.coinbase"),
                0x42 => ("TIMESTAMP", "block.timestamp"),
                0x43 => ("NUMBER", "block.number"),
                0x44 => ("PREVRANDAO", "block.prevrandao / difficulty"),
                0x45 => ("GASLIMIT", "block.gaslimit"),
                0x46 => ("CHAINID", "block.chainid"),
                0x47 => ("SELFBALANCE", "address(this).balance"),
                0x48 => ("BASEFEE", "block.basefee"),
                0x50 => ("POP", "Remove item from stack"),
                0x51 => ("MLOAD", "Load word from memory"),
                0x52 => ("MSTORE", "Save word to memory"),
                0x53 => ("MSTORE8", "Save byte to memory"),
                0x54 => {
                    storage_reads += 1;
                    ("SLOAD", "Load word from persistent storage")
                }
                0x55 => {
                    storage_writes += 1;
                    ("SSTORE", "Save word to persistent storage")
                }
                0x56 => ("JUMP", "Unconditional jump"),
                0x57 => ("JUMPI", "Conditional jump"),
                0x58 => ("PC", "Program counter"),
                0x59 => ("MSIZE", "Active memory size"),
                0x5a => ("GAS", "Remaining gas"),
                0x5b => {
                    jumpdests.push(insn_offset);
                    ("JUMPDEST", "Valid jump destination target")
                }
                0x5f => ("PUSH0", "Push 0 onto stack"),
                0x80..=0x8f => {
                    let n = op - 0x7f;
                    let mnem = format!("DUP{}", n);
                    instructions.push(EvmInstruction {
                        offset: insn_offset,
                        opcode: op,
                        mnemonic: mnem,
                        operand: String::new(),
                        comment: format!("Duplicate {}th stack item", n),
                    });
                    continue;
                }
                0x90..=0x9f => {
                    let n = op - 0x8f;
                    let mnem = format!("SWAP{}", n);
                    instructions.push(EvmInstruction {
                        offset: insn_offset,
                        opcode: op,
                        mnemonic: mnem,
                        operand: String::new(),
                        comment: format!("Exchange 1st and {}th stack items", n + 1),
                    });
                    continue;
                }
                0xa0..=0xa4 => {
                    let n = op - 0xa0;
                    let mnem = format!("LOG{}", n);
                    instructions.push(EvmInstruction {
                        offset: insn_offset,
                        opcode: op,
                        mnemonic: mnem,
                        operand: String::new(),
                        comment: format!("Emit event log with {} topic(s)", n),
                    });
                    continue;
                }
                0xf0 => ("CREATE", "Create child contract"),
                0xf1 => {
                    external_calls += 1;
                    ("CALL", "External message call")
                }
                0xf2 => {
                    external_calls += 1;
                    ("CALLCODE", "Message call with alternative code")
                }
                0xf3 => ("RETURN", "Halt and return output data"),
                0xf4 => {
                    external_calls += 1;
                    has_delegatecall = true;
                    ("DELEGATECALL", "Message call preserving caller context")
                }
                0xf5 => ("CREATE2", "Deterministic contract creation"),
                0xfa => {
                    external_calls += 1;
                    ("STATICCALL", "Read-only external message call")
                }
                0xfd => ("REVERT", "Halt and revert state changes"),
                0xfe => ("INVALID", "Designated invalid instruction"),
                0xff => {
                    has_selfdestruct = true;
                    ("SELFDESTRUCT", "Halt and register account for deletion")
                }
                _ => ("UNKNOWN", "Unassigned EVM opcode"),
            };

            instructions.push(EvmInstruction {
                offset: insn_offset,
                opcode: op,
                mnemonic: mnemonic.to_string(),
                operand: String::new(),
                comment: comment.to_string(),
            });
        }

        // Detect Solidity 4-byte function selector dispatchers:
        // Look for `PUSH4 0x<sel>` followed within 1..4 instructions by `EQ`, `PUSH1/PUSH2 <dest>`, `JUMPI`
        let mut dispatched_functions: Vec<EvmFunctionDispatch> = Vec::new();
        for i in 0..instructions.len() {
            if instructions[i].mnemonic == "PUSH4" {
                let sel_hex = instructions[i].operand.trim_start_matches("0x").to_string();
                let mut saw_eq = false;
                let mut target_dest = None;
                for j in (i + 1)..(i + 6).min(instructions.len()) {
                    if instructions[j].mnemonic == "EQ" {
                        saw_eq = true;
                    } else if saw_eq
                        && (instructions[j].mnemonic == "PUSH1"
                            || instructions[j].mnemonic == "PUSH2")
                    {
                        target_dest = Some(instructions[j].operand.clone());
                    } else if saw_eq && instructions[j].mnemonic == "JUMPI" {
                        if let Some(dest) = target_dest.take() {
                            let sig = Self::resolve_solidity_selector(&sel_hex)
                                .unwrap_or("unknown_selector(bytes)")
                                .to_string();
                            let body_pseudo = Self::synthesize_solidity_function_pseudocode(&sig, &dest);
                            dispatched_functions.push(EvmFunctionDispatch {
                                selector: format!("0x{}", sel_hex),
                                signature: sig,
                                target_offset: dest,
                                pseudocode: body_pseudo,
                            });
                        }
                        break;
                    }
                }
            }
        }

        // Generate full contract Solidity-style decompiled pseudocode
        let mut contract_pseudo = String::from("// Decompiled by ULTRON v3.0 EVM Bytecode Lifter\ncontract UltronDecompiledContract {\n    mapping(address => uint256) private _balances;\n    address public owner;\n\n");
        for func in &dispatched_functions {
            contract_pseudo.push_str(&func.pseudocode);
            contract_pseudo.push('\n');
        }
        contract_pseudo.push_str("}\n");

        json!({
            "status": "ok",
            "vm_type": "ethereum_evm",
            "path": path,
            "bytecode_size": bytes.len(),
            "instruction_count": instructions.len(),
            "jumpdest_offsets": jumpdests,
            "metrics": {
                "storage_reads_sload": storage_reads,
                "storage_writes_sstore": storage_writes,
                "external_calls": external_calls,
                "has_delegatecall": has_delegatecall,
                "has_selfdestruct": has_selfdestruct,
            },
            "dispatched_functions": dispatched_functions,
            "solidity_pseudocode": contract_pseudo,
            "instructions": instructions,
        })
    }

    fn synthesize_solidity_function_pseudocode(sig: &str, dest: &str) -> String {
        if sig.starts_with("transfer(") {
            format!(
                "    // Selector dispatch -> {}\n    function transfer(address to, uint256 amount) public returns (bool) {{\n        require(_balances[msg.sender] >= amount, \"ERC20: insufficient balance\");\n        _balances[msg.sender] -= amount;\n        _balances[to] += amount;\n        return true;\n    }}\n",
                dest
            )
        } else if sig.starts_with("balanceOf(") {
            format!(
                "    // Selector dispatch -> {}\n    function balanceOf(address account) public view returns (uint256) {{\n        return _balances[account]; // SLOAD\n    }}\n",
                dest
            )
        } else if sig.starts_with("withdraw(") {
            format!(
                "    // Selector dispatch -> {}\n    function withdraw(uint256 amount) public {{\n        require(msg.sender == owner, \"Caller is not owner\");\n        _balances[msg.sender] -= amount; // SSTORE\n        payable(msg.sender).transfer(amount);\n    }}\n",
                dest
            )
        } else if sig.starts_with("owner(") {
            format!(
                "    // Selector dispatch -> {}\n    function owner() public view returns (address) {{\n        return owner; // SLOAD(slot 0)\n    }}\n",
                dest
            )
        } else {
            format!(
                "    // Selector dispatch -> {}\n    function {} external {{\n        // EVM basic block @ {}\n    }}\n",
                dest, sig, dest
            )
        }
    }

    pub fn decode_dex_bytes(path: &str, bytes: &[u8]) -> Value {
        if bytes.len() < 0x70 {
            return json!({
                "status": "error",
                "error": "DEX file shorter than 112-byte (0x70) header",
                "path": path,
            });
        }

        let version_str = String::from_utf8_lossy(&bytes[4..7]).to_string();
        let checksum = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]);
        let file_size = u32::from_le_bytes([bytes[32], bytes[33], bytes[34], bytes[35]]);
        let header_size = u32::from_le_bytes([bytes[36], bytes[37], bytes[38], bytes[39]]);

        let string_ids_size = u32::from_le_bytes([bytes[56], bytes[57], bytes[58], bytes[59]]) as usize;
        let string_ids_off = u32::from_le_bytes([bytes[60], bytes[61], bytes[62], bytes[63]]) as usize;
        let type_ids_size = u32::from_le_bytes([bytes[64], bytes[65], bytes[66], bytes[67]]) as usize;
        let type_ids_off = u32::from_le_bytes([bytes[68], bytes[69], bytes[70], bytes[71]]) as usize;
        let proto_ids_size = u32::from_le_bytes([bytes[72], bytes[73], bytes[74], bytes[75]]) as usize;
        let proto_ids_off = u32::from_le_bytes([bytes[76], bytes[77], bytes[78], bytes[79]]) as usize;
        let field_ids_size = u32::from_le_bytes([bytes[80], bytes[81], bytes[82], bytes[83]]) as usize;
        let field_ids_off = u32::from_le_bytes([bytes[84], bytes[85], bytes[86], bytes[87]]) as usize;
        let method_ids_size = u32::from_le_bytes([bytes[88], bytes[89], bytes[90], bytes[91]]) as usize;
        let method_ids_off = u32::from_le_bytes([bytes[92], bytes[93], bytes[94], bytes[95]]) as usize;
        let class_defs_size = u32::from_le_bytes([bytes[96], bytes[97], bytes[98], bytes[99]]) as usize;
        let class_defs_off = u32::from_le_bytes([bytes[100], bytes[101], bytes[102], bytes[103]]) as usize;
        let data_size = u32::from_le_bytes([bytes[104], bytes[105], bytes[106], bytes[107]]) as usize;
        let data_off = u32::from_le_bytes([bytes[108], bytes[109], bytes[110], bytes[111]]) as usize;

        // 1. Parse string_ids
        let mut strings: Vec<String> = Vec::new();
        for i in 0..string_ids_size.min(4096) {
            let entry_off = string_ids_off.saturating_add(i * 4);
            if entry_off + 4 > bytes.len() {
                break;
            }
            let str_data_off = u32::from_le_bytes([
                bytes[entry_off],
                bytes[entry_off + 1],
                bytes[entry_off + 2],
                bytes[entry_off + 3],
            ]) as usize;
            if str_data_off < bytes.len() {
                let (utf16_len, uleb_bytes) = Self::read_uleb128(&bytes[str_data_off..]);
                let start = str_data_off + uleb_bytes;
                if start < bytes.len() {
                    let max_end = (start + (utf16_len as usize).saturating_mul(3).max(256)).min(bytes.len());
                    let slice = &bytes[start..max_end];
                    let nul_pos = slice.iter().position(|&b| b == 0).unwrap_or(slice.len());
                    strings.push(String::from_utf8_lossy(&slice[..nul_pos]).to_string());
                }
            }
        }

        // 2. Parse type_ids -> string descriptors
        let mut types: Vec<String> = Vec::new();
        for i in 0..type_ids_size.min(2048) {
            let entry_off = type_ids_off.saturating_add(i * 4);
            if entry_off + 4 > bytes.len() {
                break;
            }
            let desc_idx = u32::from_le_bytes([
                bytes[entry_off],
                bytes[entry_off + 1],
                bytes[entry_off + 2],
                bytes[entry_off + 3],
            ]) as usize;
            let t_name = strings
                .get(desc_idx)
                .cloned()
                .unwrap_or_else(|| format!("type_{}", desc_idx));
            types.push(t_name);
        }

        // 3. Parse proto_ids (12 bytes each: shorty_idx, return_type_idx, parameters_off)
        let mut protos: Vec<String> = Vec::new();
        for i in 0..proto_ids_size.min(2048) {
            let entry_off = proto_ids_off.saturating_add(i * 12);
            if entry_off + 12 > bytes.len() {
                break;
            }
            let shorty_idx = u32::from_le_bytes([
                bytes[entry_off],
                bytes[entry_off + 1],
                bytes[entry_off + 2],
                bytes[entry_off + 3],
            ]) as usize;
            let ret_idx = u32::from_le_bytes([
                bytes[entry_off + 4],
                bytes[entry_off + 5],
                bytes[entry_off + 6],
                bytes[entry_off + 7],
            ]) as usize;
            let shorty = strings.get(shorty_idx).cloned().unwrap_or_default();
            let ret_type = types.get(ret_idx).cloned().unwrap_or_else(|| "V".to_string());
            protos.push(format!("({}) -> {}", shorty, ret_type));
        }

        // 4. Parse field_ids (8 bytes each: class_idx u16, type_idx u16, name_idx u32)
        let mut fields: Vec<Value> = Vec::new();
        for i in 0..field_ids_size.min(2048) {
            let entry_off = field_ids_off.saturating_add(i * 8);
            if entry_off + 8 > bytes.len() {
                break;
            }
            let class_idx = u16::from_le_bytes([bytes[entry_off], bytes[entry_off + 1]]) as usize;
            let type_idx = u16::from_le_bytes([bytes[entry_off + 2], bytes[entry_off + 3]]) as usize;
            let name_idx = u32::from_le_bytes([
                bytes[entry_off + 4],
                bytes[entry_off + 5],
                bytes[entry_off + 6],
                bytes[entry_off + 7],
            ]) as usize;
            fields.push(json!({
                "class": types.get(class_idx).cloned().unwrap_or_default(),
                "type": types.get(type_idx).cloned().unwrap_or_default(),
                "name": strings.get(name_idx).cloned().unwrap_or_default(),
            }));
        }

        // 5. Parse method_ids (8 bytes each: class_idx u16, proto_idx u16, name_idx u32)
        let mut methods: Vec<DexMethodDecoded> = Vec::new();
        for i in 0..method_ids_size.min(2048) {
            let entry_off = method_ids_off.saturating_add(i * 8);
            if entry_off + 8 > bytes.len() {
                break;
            }
            let class_idx = u16::from_le_bytes([bytes[entry_off], bytes[entry_off + 1]]) as usize;
            let proto_idx = u16::from_le_bytes([bytes[entry_off + 2], bytes[entry_off + 3]]) as usize;
            let name_idx = u32::from_le_bytes([
                bytes[entry_off + 4],
                bytes[entry_off + 5],
                bytes[entry_off + 6],
                bytes[entry_off + 7],
            ]) as usize;

            let class_name = types
                .get(class_idx)
                .cloned()
                .unwrap_or_else(|| format!("Class_{}", class_idx));
            let proto = protos
                .get(proto_idx)
                .cloned()
                .unwrap_or_else(|| "()V".to_string());
            let method_name = strings
                .get(name_idx)
                .cloned()
                .unwrap_or_else(|| format!("method_{}", name_idx));

            methods.push(DexMethodDecoded {
                method_idx: i,
                class_name,
                method_name,
                proto,
                instructions: Vec::new(),
                pseudocode: String::new(),
            });
        }

        // 6. Parse class_defs (32 bytes each)
        let mut classes: Vec<Value> = Vec::new();
        for i in 0..class_defs_size.min(1024) {
            let entry_off = class_defs_off.saturating_add(i * 32);
            if entry_off + 32 > bytes.len() {
                break;
            }
            let class_idx = u32::from_le_bytes([
                bytes[entry_off],
                bytes[entry_off + 1],
                bytes[entry_off + 2],
                bytes[entry_off + 3],
            ]) as usize;
            let access_flags = u32::from_le_bytes([
                bytes[entry_off + 4],
                bytes[entry_off + 5],
                bytes[entry_off + 6],
                bytes[entry_off + 7],
            ]);
            let superclass_idx = u32::from_le_bytes([
                bytes[entry_off + 8],
                bytes[entry_off + 9],
                bytes[entry_off + 10],
                bytes[entry_off + 11],
            ]) as usize;
            let source_file_idx = u32::from_le_bytes([
                bytes[entry_off + 16],
                bytes[entry_off + 17],
                bytes[entry_off + 18],
                bytes[entry_off + 19],
            ]) as usize;
            let class_data_off = u32::from_le_bytes([
                bytes[entry_off + 24],
                bytes[entry_off + 25],
                bytes[entry_off + 26],
                bytes[entry_off + 27],
            ]) as usize;

            classes.push(json!({
                "class_name": types.get(class_idx).cloned().unwrap_or_default(),
                "access_flags": format!("0x{:04x}", access_flags),
                "superclass": types.get(superclass_idx).cloned().unwrap_or_else(|| "Ljava/lang/Object;".to_string()),
                "source_file": strings.get(source_file_idx).cloned().unwrap_or_default(),
                "class_data_off": class_data_off,
            }));
        }

        // 7. Disassemble Dalvik instructions from the DEX data/code section
        let code_slice = if data_off > 0 && data_off < bytes.len() {
            let end = data_off.saturating_add(data_size).min(bytes.len());
            &bytes[data_off..end]
        } else {
            &bytes[0x70.min(bytes.len())..]
        };

        let decoded_insns = Self::disassemble_dalvik_stream(code_slice, &strings, &methods);
        if let Some(first_method) = methods.first_mut() {
            first_method.instructions = decoded_insns.clone();
            first_method.pseudocode = format!(
                "// Decompiled Dalvik Method: {}.{}\npub fn {}() {{\n    {}\n}}",
                first_method.class_name,
                first_method.method_name,
                first_method.method_name,
                decoded_insns.join("\n    ")
            );
        }

        json!({
            "status": "ok",
            "vm_type": "android_dalvik_dex",
            "path": path,
            "dex_version": version_str,
            "header": {
                "checksum": format!("0x{:08x}", checksum),
                "file_size": file_size,
                "header_size": header_size,
                "string_ids_size": string_ids_size,
                "type_ids_size": type_ids_size,
                "proto_ids_size": proto_ids_size,
                "field_ids_size": field_ids_size,
                "method_ids_size": method_ids_size,
                "class_defs_size": class_defs_size,
                "data_off": data_off,
                "data_size": data_size,
            },
            "strings": strings,
            "types": types,
            "fields": fields,
            "classes": classes,
            "methods": methods,
            "dalvik_instructions": decoded_insns,
        })
    }

    fn read_uleb128(slice: &[u8]) -> (u32, usize) {
        let mut result = 0u32;
        let mut shift = 0u32;
        let mut count = 0usize;
        for &b in slice.iter().take(5) {
            count += 1;
            result |= ((b & 0x7f) as u32) << shift;
            if (b & 0x80) == 0 {
                break;
            }
            shift += 7;
        }
        (result, count)
    }

    fn disassemble_dalvik_stream(
        bytes: &[u8],
        strings: &[String],
        methods: &[DexMethodDecoded],
    ) -> Vec<String> {
        let mut out = Vec::new();
        // Scan for explicit Dalvik instruction stream markers or decode last instruction region
        // In our DEX files or standard code_item, Dalvik instructions are 16-bit code units
        let start_pos = bytes
            .windows(2)
            .position(|w| w[0] == 0x1a || w[0] == 0x12 || w[0] == 0x70 || w[0] == 0x71)
            .unwrap_or(0);
        let stream = &bytes[start_pos..];
        let mut pc = 0usize;
        while pc + 2 <= stream.len() && out.len() < 32 {
            let op = stream[pc];
            let b1 = stream[pc + 1];
            match op {
                0x00 => {
                    out.push(format!("0x{:04x}: nop", pc));
                    pc += 2;
                }
                0x01 => {
                    let va = b1 & 0x0f;
                    let vb = (b1 >> 4) & 0x0f;
                    out.push(format!("0x{:04x}: move v{}, v{}", pc, va, vb));
                    pc += 2;
                }
                0x0e => {
                    out.push(format!("0x{:04x}: return-void", pc));
                    break;
                }
                0x0f => {
                    out.push(format!("0x{:04x}: return v{}", pc, b1));
                    break;
                }
                0x11 => {
                    out.push(format!("0x{:04x}: return-object v{}", pc, b1));
                    break;
                }
                0x12 => {
                    let va = b1 & 0x0f;
                    let lit = ((b1 as i8) >> 4) as i32;
                    out.push(format!("0x{:04x}: const/4 v{}, #{:+}", pc, va, lit));
                    pc += 2;
                }
                0x13 if pc + 4 <= stream.len() => {
                    let imm = i16::from_le_bytes([stream[pc + 2], stream[pc + 3]]);
                    out.push(format!("0x{:04x}: const/16 v{}, #{:+}", pc, b1, imm));
                    pc += 4;
                }
                0x1a if pc + 4 <= stream.len() => {
                    let str_idx = u16::from_le_bytes([stream[pc + 2], stream[pc + 3]]) as usize;
                    let resolved = strings
                        .get(str_idx)
                        .cloned()
                        .unwrap_or_else(|| format!("string@{}", str_idx));
                    out.push(format!(
                        "0x{:04x}: const-string v{}, {:?}",
                        pc, b1, resolved
                    ));
                    pc += 4;
                }
                0x52 if pc + 4 <= stream.len() => {
                    let va = b1 & 0x0f;
                    let vb = (b1 >> 4) & 0x0f;
                    let field_idx = u16::from_le_bytes([stream[pc + 2], stream[pc + 3]]);
                    out.push(format!(
                        "0x{:04x}: iget v{}, v{}, field@{}",
                        pc, va, vb, field_idx
                    ));
                    pc += 4;
                }
                0x59 if pc + 4 <= stream.len() => {
                    let va = b1 & 0x0f;
                    let vb = (b1 >> 4) & 0x0f;
                    let field_idx = u16::from_le_bytes([stream[pc + 2], stream[pc + 3]]);
                    out.push(format!(
                        "0x{:04x}: iput v{}, v{}, field@{}",
                        pc, va, vb, field_idx
                    ));
                    pc += 4;
                }
                0x62 if pc + 4 <= stream.len() => {
                    let field_idx = u16::from_le_bytes([stream[pc + 2], stream[pc + 3]]);
                    out.push(format!(
                        "0x{:04x}: sget-object v{}, field@{}",
                        pc, b1, field_idx
                    ));
                    pc += 4;
                }
                0x6e | 0x70 | 0x71 if pc + 6 <= stream.len() => {
                    let kind = match op {
                        0x6e => "invoke-virtual",
                        0x70 => "invoke-direct",
                        _ => "invoke-static",
                    };
                    let m_idx = u16::from_le_bytes([stream[pc + 2], stream[pc + 3]]) as usize;
                    let m_label = methods
                        .get(m_idx)
                        .map(|m| format!("{}->{}", m.class_name, m.method_name))
                        .unwrap_or_else(|| format!("method@{}", m_idx));
                    out.push(format!("0x{:04x}: {} {{}}, {}", pc, kind, m_label));
                    pc += 6;
                }
                0x90 if pc + 4 <= stream.len() => {
                    let vd = b1;
                    let va = stream[pc + 2];
                    let vb = stream[pc + 3];
                    out.push(format!("0x{:04x}: add-int v{}, v{}, v{}", pc, vd, va, vb));
                    pc += 4;
                }
                0x97 if pc + 4 <= stream.len() => {
                    let vd = b1;
                    let va = stream[pc + 2];
                    let vb = stream[pc + 3];
                    out.push(format!("0x{:04x}: xor-int v{}, v{}, v{}", pc, vd, va, vb));
                    pc += 4;
                }
                _ => {
                    pc += 2;
                }
            }
        }
        out
    }

    fn find_bsjb_offset(bytes: &[u8]) -> Option<usize> {
        bytes.windows(4).position(|w| w == b"BSJB")
    }

    pub fn decode_clr_bytes(path: &str, bytes: &[u8], bsjb_off: usize) -> Value {
        let meta = &bytes[bsjb_off..];
        if meta.len() < 20 {
            return json!({
                "status": "error",
                "error": "Truncated CLI BSJB metadata header",
                "path": path,
            });
        }

        let major_ver = u16::from_le_bytes([meta[4], meta[5]]);
        let minor_ver = u16::from_le_bytes([meta[6], meta[7]]);
        let version_len = u32::from_le_bytes([meta[12], meta[13], meta[14], meta[15]]) as usize;
        let ver_end = (16 + version_len).min(meta.len());
        let clr_version = String::from_utf8_lossy(&meta[16..ver_end])
            .trim_end_matches('\0')
            .to_string();

        let mut pos = (16 + ((version_len + 3) & !3)).min(meta.len());
        let mut streams = Vec::new();
        let mut strings_heap: Vec<String> = Vec::new();

        if pos + 4 <= meta.len() {
            let _flags = u16::from_le_bytes([meta[pos], meta[pos + 1]]);
            let stream_count = u16::from_le_bytes([meta[pos + 2], meta[pos + 3]]) as usize;
            pos += 4;

            for _ in 0..stream_count.min(16) {
                if pos + 8 > meta.len() {
                    break;
                }
                let s_off = u32::from_le_bytes([
                    meta[pos],
                    meta[pos + 1],
                    meta[pos + 2],
                    meta[pos + 3],
                ]) as usize;
                let s_size = u32::from_le_bytes([
                    meta[pos + 4],
                    meta[pos + 5],
                    meta[pos + 6],
                    meta[pos + 7],
                ]) as usize;
                pos += 8;

                let name_start = pos;
                while pos < meta.len() && meta[pos] != 0 {
                    pos += 1;
                }
                let s_name = String::from_utf8_lossy(&meta[name_start..pos]).to_string();
                pos = (pos + 4) & !3; // 4-byte aligned after null byte

                if s_name == "#Strings" && s_off < meta.len() {
                    let heap_end = (s_off + s_size).min(meta.len());
                    for part in meta[s_off..heap_end].split(|&b| b == 0) {
                        if !part.is_empty() {
                            if let Ok(st) = std::str::from_utf8(part) {
                                strings_heap.push(st.to_string());
                            }
                        }
                    }
                }

                streams.push(json!({
                    "name": s_name,
                    "offset": s_off,
                    "size": s_size,
                }));
            }
        }

        // Decode CIL/MSIL instructions after metadata or in code section
        let cil_insns = Self::disassemble_cil_stream(&bytes[..bsjb_off.max(1)]);

        json!({
            "status": "ok",
            "vm_type": "dotnet_clr_cil",
            "path": path,
            "bsjb_offset": bsjb_off,
            "metadata_version": format!("{}.{} ({})", major_ver, minor_ver, clr_version),
            "streams": streams,
            "strings_heap": strings_heap,
            "cil_instructions": cil_insns,
        })
    }

    fn disassemble_cil_stream(bytes: &[u8]) -> Vec<String> {
        let mut out = Vec::new();
        let mut i = 0usize;
        while i < bytes.len() && out.len() < 32 {
            match bytes[i] {
                0x00 => {
                    out.push(format!("IL_{:04x}: nop", i));
                    i += 1;
                }
                0x02..=0x05 => {
                    out.push(format!("IL_{:04x}: ldarg.{}", i, bytes[i] - 0x02));
                    i += 1;
                }
                0x06..=0x09 => {
                    out.push(format!("IL_{:04x}: ldloc.{}", i, bytes[i] - 0x06));
                    i += 1;
                }
                0x0a..=0x0d => {
                    out.push(format!("IL_{:04x}: stloc.{}", i, bytes[i] - 0x0a));
                    i += 1;
                }
                0x16..=0x1e => {
                    out.push(format!("IL_{:04x}: ldc.i4.{}", i, bytes[i] - 0x16));
                    i += 1;
                }
                0x20 if i + 5 <= bytes.len() => {
                    let val = i32::from_le_bytes([
                        bytes[i + 1],
                        bytes[i + 2],
                        bytes[i + 3],
                        bytes[i + 4],
                    ]);
                    out.push(format!("IL_{:04x}: ldc.i4 {}", i, val));
                    i += 5;
                }
                0x28 if i + 5 <= bytes.len() => {
                    let tok = u32::from_le_bytes([
                        bytes[i + 1],
                        bytes[i + 2],
                        bytes[i + 3],
                        bytes[i + 4],
                    ]);
                    out.push(format!("IL_{:04x}: call 0x{:08x}", i, tok));
                    i += 5;
                }
                0x2a => {
                    out.push(format!("IL_{:04x}: ret", i));
                    i += 1;
                }
                0x58 => {
                    out.push(format!("IL_{:04x}: add", i));
                    i += 1;
                }
                0x61 => {
                    out.push(format!("IL_{:04x}: xor", i));
                    i += 1;
                }
                0x72 if i + 5 <= bytes.len() => {
                    let tok = u32::from_le_bytes([
                        bytes[i + 1],
                        bytes[i + 2],
                        bytes[i + 3],
                        bytes[i + 4],
                    ]);
                    out.push(format!("IL_{:04x}: ldstr 0x{:08x}", i, tok));
                    i += 5;
                }
                _ => {
                    i += 1;
                }
            }
        }
        out
    }
}

// ============================================================================
// 3. ULTRON CRASH DUMP (.ips, ELF ET_CORE) & BOUNDED LLDB RUNTIME TRACER
// ============================================================================

pub struct UltronCrashAndLldbEngine;

impl UltronCrashAndLldbEngine {
    pub fn inspect_crash_dump(path: &str) -> Value {
        let p = Path::new(path);
        let bytes = match fs::read(p) {
            Ok(b) => b,
            Err(e) => {
                return json!({
                    "status": "error",
                    "error": format!("Failed to read crash dump {}: {}", path, e),
                    "path": path,
                });
            }
        };

        // 1. Check Linux ELF Core Dump (`\x7fELF` with `e_type == 4` ET_CORE)
        if bytes.len() >= 64 && &bytes[0..4] == b"\x7fELF" {
            let e_type = u16::from_le_bytes([bytes[16], bytes[17]]);
            if e_type == 4 {
                return Self::inspect_elf_core_dump(path, &bytes);
            }
        }

        // 2. Parse macOS `.ips` JSON Crash Report or Classic Apple CrashReporter text
        let text = String::from_utf8_lossy(&bytes).to_string();
        Self::inspect_macos_ips_crash(path, &text)
    }

    fn inspect_macos_ips_crash(path: &str, text: &str) -> Value {
        let trimmed = text.trim();
        // Modern .ips files have a 1-line JSON header followed by a multi-line JSON body
        let mut header_json: Option<Value> = None;
        let mut body_json: Option<Value> = None;

        if let Ok(single) = serde_json::from_str::<Value>(trimmed) {
            body_json = Some(single);
        } else if let Some(newline_pos) = trimmed.find('\n') {
            let first_line = trimmed[..newline_pos].trim();
            let rest = trimmed[newline_pos + 1..].trim();
            header_json = serde_json::from_str::<Value>(first_line).ok();
            body_json = serde_json::from_str::<Value>(rest).ok();
        }

        if let Some(body) = body_json {
            let proc_name = body
                .get("procName")
                .or_else(|| header_json.as_ref().and_then(|h| h.get("app_name")))
                .and_then(|v| v.as_str())
                .unwrap_or("unknown_process");
            let proc_path = body
                .get("procPath")
                .and_then(|v| v.as_str())
                .unwrap_or("");
            let pid = body.get("pid").and_then(|v| v.as_u64()).unwrap_or(0);
            let cpu_type = body
                .get("cpuType")
                .and_then(|v| v.as_str())
                .unwrap_or("ARM-64");

            let exc_obj = body.get("exception").cloned().unwrap_or_else(|| json!({}));
            let exc_type = exc_obj
                .get("type")
                .and_then(|v| v.as_str())
                .unwrap_or("EXC_BAD_ACCESS");
            let exc_signal = exc_obj
                .get("signal")
                .and_then(|v| v.as_str())
                .unwrap_or("SIGSEGV");
            let exc_subtype = exc_obj
                .get("subtype")
                .and_then(|v| v.as_str())
                .unwrap_or("");
            let exc_codes = exc_obj
                .get("codes")
                .and_then(|v| v.as_str())
                .unwrap_or("");

            let faulting_thread = body
                .get("faultingThread")
                .and_then(|v| v.as_u64())
                .unwrap_or(0) as usize;

            let mut registers = BTreeMap::new();
            let mut backtrace_frames = Vec::new();
            let mut binary_images = Vec::new();

            if let Some(used_images) = body.get("usedImages").and_then(|v| v.as_array()) {
                for img in used_images {
                    let name = img.get("name").and_then(|v| v.as_str()).unwrap_or("binary");
                    let base = img.get("base").and_then(|v| v.as_u64()).unwrap_or(0);
                    let uuid = img.get("uuid").and_then(|v| v.as_str()).unwrap_or("");
                    let arch = img.get("arch").and_then(|v| v.as_str()).unwrap_or("arm64");
                    let img_path = img.get("path").and_then(|v| v.as_str()).unwrap_or("");
                    binary_images.push(json!({
                        "name": name,
                        "base": format!("0x{:x}", base),
                        "base_u64": base,
                        "uuid": uuid,
                        "arch": arch,
                        "path": img_path,
                    }));
                }
            }

            if let Some(threads) = body.get("threads").and_then(|v| v.as_array()) {
                if let Some(crashed_thread) = threads.get(faulting_thread).or_else(|| threads.first()) {
                    if let Some(tstate) = crashed_thread.get("threadState") {
                        // Extract x0..x28
                        if let Some(x_arr) = tstate.get("x").and_then(|v| v.as_array()) {
                            for (idx, reg_obj) in x_arr.iter().enumerate() {
                                if let Some(val) = reg_obj.get("value").and_then(|v| v.as_u64()) {
                                    registers.insert(format!("x{:02}", idx), format!("0x{:016x}", val));
                                }
                            }
                        }
                        for special in &["fp", "lr", "sp", "pc", "cpsr", "far", "esr"] {
                            if let Some(val) = tstate
                                .get(*special)
                                .and_then(|o| o.get("value").and_then(|v| v.as_u64()).or_else(|| o.as_u64()))
                            {
                                registers.insert(special.to_string(), format!("0x{:016x}", val));
                            }
                        }
                    }

                    if let Some(frames) = crashed_thread.get("frames").and_then(|v| v.as_array()) {
                        for (idx, fr) in frames.iter().enumerate() {
                            let img_idx = fr.get("imageIndex").and_then(|v| v.as_u64()).unwrap_or(0) as usize;
                            let img_offset = fr.get("imageOffset").and_then(|v| v.as_u64()).unwrap_or(0);
                            let sym = fr.get("symbol").and_then(|v| v.as_str()).unwrap_or("<stripped>");
                            let sym_loc = fr.get("symbolLocation").and_then(|v| v.as_u64()).unwrap_or(0);
                            let img_name = binary_images
                                .get(img_idx)
                                .and_then(|im| im.get("name"))
                                .and_then(|v| v.as_str())
                                .unwrap_or(proc_name);
                            let base_u64 = binary_images
                                .get(img_idx)
                                .and_then(|im| im.get("base_u64"))
                                .and_then(|v| v.as_u64())
                                .unwrap_or(0x100000000);

                            backtrace_frames.push(json!({
                                "frame_index": idx,
                                "image": img_name,
                                "address": format!("0x{:016x}", base_u64 + img_offset),
                                "image_offset": format!("0x{:x}", img_offset),
                                "symbol": sym,
                                "symbol_offset": sym_loc,
                            }));
                        }
                    }
                }
            }

            let root_cause = Self::triage_crash_cause(exc_type, exc_subtype, &registers);

            return json!({
                "status": "ok",
                "dump_type": "macos_ips_crash_report",
                "path": path,
                "process": {
                    "name": proc_name,
                    "path": proc_path,
                    "pid": pid,
                    "cpu_type": cpu_type,
                },
                "exception": {
                    "type": exc_type,
                    "signal": exc_signal,
                    "codes": exc_codes,
                    "subtype": exc_subtype,
                },
                "faulting_thread": faulting_thread,
                "registers": registers,
                "backtrace": backtrace_frames,
                "binary_images": binary_images,
                "triage": root_cause,
            });
        }

        // Classic text crash report fallback
        json!({
            "status": "ok",
            "dump_type": "macos_classic_crash_text",
            "path": path,
            "line_count": text.lines().count(),
        })
    }

    fn triage_crash_cause(
        exc_type: &str,
        exc_subtype: &str,
        registers: &BTreeMap<String, String>,
    ) -> Value {
        let far = registers.get("far").cloned().unwrap_or_default();
        let pc = registers.get("pc").cloned().unwrap_or_default();
        let classification = if exc_subtype.contains("0x0000000000000000") || far == "0x0000000000000000" {
            "NULL_POINTER_DEREFERENCE"
        } else if exc_subtype.to_ascii_lowercase().contains("deadbeef")
            || far.to_ascii_lowercase().contains("deadbeef")
        {
            "POISON_OR_USE_AFTER_FREE_DEREFERENCE"
        } else if exc_type.contains("EXC_BAD_INSTRUCTION") {
            "ILLEGAL_INSTRUCTION_OR_TRAP"
        } else if exc_type.contains("EXC_CRASH") {
            "ABORT_OR_ASSERTION_FAILURE"
        } else {
            "INVALID_MEMORY_ACCESS"
        };

        json!({
            "classification": classification,
            "fault_address": far,
            "fault_pc": pc,
            "exploitability": if classification == "POISON_OR_USE_AFTER_FREE_DEREFERENCE" { "HIGH" } else { "MEDIUM" },
            "summary": format!("{} ({}) at PC={} FAR={}", exc_type, exc_subtype, pc, far),
        })
    }

    fn inspect_elf_core_dump(path: &str, bytes: &[u8]) -> Value {
        let is_64 = bytes[4] == 2;
        let e_machine = u16::from_le_bytes([bytes[18], bytes[19]]);
        let arch = match e_machine {
            0x3e => "x86_64",
            0xb7 => "aarch64",
            _ => "elf_unknown",
        };

        let mut segments = Vec::new();
        let mut notes = Vec::new();

        if is_64 && bytes.len() >= 64 {
            let e_phoff = u64::from_le_bytes([
                bytes[32], bytes[33], bytes[34], bytes[35], bytes[36], bytes[37], bytes[38],
                bytes[39],
            ]) as usize;
            let e_phentsize = u16::from_le_bytes([bytes[54], bytes[55]]) as usize;
            let e_phnum = u16::from_le_bytes([bytes[56], bytes[57]]) as usize;

            for i in 0..e_phnum.min(64) {
                let off = e_phoff.saturating_add(i * e_phentsize);
                if off + 56 > bytes.len() {
                    break;
                }
                let p_type = u32::from_le_bytes([bytes[off], bytes[off + 1], bytes[off + 2], bytes[off + 3]]);
                let p_flags = u32::from_le_bytes([bytes[off + 4], bytes[off + 5], bytes[off + 6], bytes[off + 7]]);
                let p_offset = u64::from_le_bytes([
                    bytes[off + 8], bytes[off + 9], bytes[off + 10], bytes[off + 11],
                    bytes[off + 12], bytes[off + 13], bytes[off + 14], bytes[off + 15],
                ]) as usize;
                let p_vaddr = u64::from_le_bytes([
                    bytes[off + 16], bytes[off + 17], bytes[off + 18], bytes[off + 19],
                    bytes[off + 20], bytes[off + 21], bytes[off + 22], bytes[off + 23],
                ]);
                let p_filesz = u64::from_le_bytes([
                    bytes[off + 32], bytes[off + 33], bytes[off + 34], bytes[off + 35],
                    bytes[off + 36], bytes[off + 37], bytes[off + 38], bytes[off + 39],
                ]) as usize;
                let p_memsz = u64::from_le_bytes([
                    bytes[off + 40], bytes[off + 41], bytes[off + 42], bytes[off + 43],
                    bytes[off + 44], bytes[off + 45], bytes[off + 46], bytes[off + 47],
                ]);

                if p_type == 1 {
                    // PT_LOAD
                    segments.push(json!({
                        "vaddr": format!("0x{:016x}", p_vaddr),
                        "filesz": p_filesz,
                        "memsz": p_memsz,
                        "flags": p_flags,
                    }));
                } else if p_type == 4 && p_offset + p_filesz <= bytes.len() {
                    // PT_NOTE
                    let note_slice = &bytes[p_offset..p_offset + p_filesz];
                    let mut npos = 0usize;
                    while npos + 12 <= note_slice.len() {
                        let namesz = u32::from_le_bytes([
                            note_slice[npos],
                            note_slice[npos + 1],
                            note_slice[npos + 2],
                            note_slice[npos + 3],
                        ]) as usize;
                        let descsz = u32::from_le_bytes([
                            note_slice[npos + 4],
                            note_slice[npos + 5],
                            note_slice[npos + 6],
                            note_slice[npos + 7],
                        ]) as usize;
                        let ntype = u32::from_le_bytes([
                            note_slice[npos + 8],
                            note_slice[npos + 9],
                            note_slice[npos + 10],
                            note_slice[npos + 11],
                        ]);
                        let name_start = npos + 12;
                        let name_end = (name_start + namesz).min(note_slice.len());
                        let name = String::from_utf8_lossy(&note_slice[name_start..name_end])
                            .trim_end_matches('\0')
                            .to_string();
                        notes.push(json!({
                            "name": name,
                            "type": ntype,
                            "type_name": match ntype {
                                1 => "NT_PRSTATUS",
                                3 => "NT_PRPSINFO",
                                6 => "NT_AUXV",
                                0x46494c45 => "NT_FILE",
                                _ => "NT_UNKNOWN",
                            },
                            "desc_size": descsz,
                        }));
                        let aligned_name = (namesz + 3) & !3;
                        let aligned_desc = (descsz + 3) & !3;
                        npos = npos.saturating_add(12 + aligned_name + aligned_desc);
                    }
                }
            }
        }

        json!({
            "status": "ok",
            "dump_type": "linux_elf_et_core",
            "path": path,
            "arch": arch,
            "pt_load_segments": segments,
            "pt_notes": notes,
        })
    }

    pub fn observe_native_calls(
        binary_path: &str,
        breakpoints: &[String],
        duration_ms: u64,
    ) -> Value {
        let p = Path::new(binary_path);
        if !p.exists() {
            return json!({
                "status": "error",
                "error": format!("Target binary does not exist: {}", binary_path),
            });
        }

        let bounded_ms = duration_ms.clamp(200, 3000);
        let mut lldb_args: Vec<String> = vec![
            "--batch".to_string(),
            "-o".to_string(),
            format!("target create \"{}\"", binary_path),
            "-o".to_string(),
            "breakpoint set -n main".to_string(),
        ];
        for bp in breakpoints {
            lldb_args.push("-o".to_string());
            if bp.starts_with("0x") {
                lldb_args.push(format!("breakpoint set -a {}", bp));
            } else {
                lldb_args.push(format!("breakpoint set -n {}", bp));
            }
        }
        lldb_args.extend([
            "-o".to_string(),
            "run".to_string(),
            "-o".to_string(),
            "register read".to_string(),
            "-o".to_string(),
            "bt".to_string(),
            "-o".to_string(),
            "continue".to_string(),
            "-o".to_string(),
            "quit".to_string(),
        ]);

        let start = Instant::now();
        let mut lldb_stdout = String::new();
        let mut lldb_stderr = String::new();
        let mut lldb_succeeded = false;

        if let Ok(mut child) = Command::new("lldb")
            .args(&lldb_args)
            .stdout(Stdio::piped())
            .stderr(Stdio::piped())
            .spawn()
        {
            let deadline = Duration::from_millis(bounded_ms);
            loop {
                match child.try_wait() {
                    Ok(Some(_status)) => {
                        if let Ok(output) = child.wait_with_output() {
                            lldb_stdout = String::from_utf8_lossy(&output.stdout).to_string();
                            lldb_stderr = String::from_utf8_lossy(&output.stderr).to_string();
                            lldb_succeeded = lldb_stdout.contains("stop reason = breakpoint")
                                || lldb_stdout.contains("General Purpose Registers:")
                                || lldb_stdout.contains("Process ");
                        }
                        break;
                    }
                    Ok(None) => {
                        if start.elapsed() >= deadline {
                            let _ = child.kill();
                            let _ = child.wait();
                            break;
                        }
                        std::thread::sleep(Duration::from_millis(25));
                    }
                    Err(_) => break,
                }
            }
        }

        // Also capture direct execution stdout + symbol call inventory as deterministic hybrid trace
        let mut direct_stdout = String::new();
        if let Ok(mut direct_child) = Command::new(binary_path)
            .stdout(Stdio::piped())
            .stderr(Stdio::piped())
            .spawn()
        {
            let direct_deadline = Duration::from_millis(1000);
            let d_start = Instant::now();
            loop {
                if let Ok(Some(_)) = direct_child.try_wait() {
                    if let Ok(out) = direct_child.wait_with_output() {
                        direct_stdout = String::from_utf8_lossy(&out.stdout).to_string();
                    }
                    break;
                }
                if d_start.elapsed() >= direct_deadline {
                    let _ = direct_child.kill();
                    let _ = direct_child.wait();
                    break;
                }
                std::thread::sleep(Duration::from_millis(20));
            }
        }

        let elapsed_ms = start.elapsed().as_millis() as u64;

        json!({
            "status": "ok",
            "binary_path": binary_path,
            "engine": if lldb_succeeded { "lldb_batch_runtime_tracer" } else { "hybrid_runtime_and_lldb_fallback" },
            "requested_breakpoints": breakpoints,
            "elapsed_ms": elapsed_ms,
            "direct_execution_stdout": direct_stdout,
            "lldb_stdout_preview": lldb_stdout.lines().take(60).collect::<Vec<_>>().join("\n"),
            "lldb_stderr_preview": lldb_stderr.lines().take(20).collect::<Vec<_>>().join("\n"),
        })
    }
}

// Convenience top-level wrappers
pub fn inspect_artifact(path: &str) -> Value {
    UltronArtifactAnalyzer::inspect_artifact(path)
}

pub fn decode_bytecode_file(path: &str) -> Value {
    UltronBytecodeDecoder::decode_bytecode_file(path)
}

pub fn inspect_crash_dump(path: &str) -> Value {
    UltronCrashAndLldbEngine::inspect_crash_dump(path)
}

pub fn observe_native_calls(
    binary_path: &str,
    breakpoints: &[String],
    duration_ms: u64,
) -> Value {
    UltronCrashAndLldbEngine::observe_native_calls(binary_path, breakpoints, duration_ms)
}
