use crate::assembler::UltronLlvmAssembler;
use crate::decompiler::{DecompileOptions, UltronDecompiler};
use crate::disassembler::UltronDisassemblerEngine;
use crate::loader::UltronBinaryLoader;
use crate::neural_and_emu::{
    SymbolDemangler, UltronMicroEmulator, UltronNeuralAnalyzer, UltronSecurityAuditor,
};
use crate::types::{UltronDisassembledFile, UltronStructDef, UltronStructField};
use axum::{
    extract::{Path as AxumPath, Query, State},
    response::{Html, IntoResponse, Json},
    routing::{get, post},
    Router,
};
use serde::Deserialize;
use serde_json::{json, Value};
use std::collections::HashMap;
use std::path::Path;
use std::sync::{Arc, Mutex};
use tower_http::cors::CorsLayer;

const INDEX_HTML: &str = include_str!("../ultron_disassembler/ui/index.html");

pub struct AppState {
    pub doc: Mutex<UltronDisassembledFile>,
    pub emulators: Mutex<HashMap<u64, UltronMicroEmulator>>,
}

pub async fn run_server(initial_doc: UltronDisassembledFile, host: &str, port: u16) -> anyhow::Result<()> {
    let shared = Arc::new(AppState {
        doc: Mutex::new(initial_doc),
        emulators: Mutex::new(HashMap::new()),
    });

    let app = Router::new()
        .route("/", get(serve_index))
        .route("/api/overview", get(api_overview))
        .route("/api/procedures", get(api_procedures))
        .route("/api/procedure/:query", get(api_procedure_detail))
        .route("/api/strings", get(api_strings))
        .route("/api/symbols", get(api_symbols))
        .route("/api/address/:addr", get(api_address_inspector))
        .route("/api/hex", get(api_hex_dump))
        .route("/api/audit", get(api_audit))
        .route("/api/neural/analyze", post(api_neural_analyze))
        .route("/api/emulate", post(api_emulate))
        .route("/api/open", post(api_open))
        .route("/api/rename", post(api_rename))
        .route("/api/comment", post(api_comment))
        .route("/api/types", post(api_define_struct))
        .route("/api/assemble", post(api_assemble))
        .route("/api/export-binary", post(api_export_binary))
        .route("/api/demangle", post(api_demangle))
        .route("/api/script", post(api_script))
        .layer(CorsLayer::permissive())
        .with_state(shared);

    let bind_addr = format!("{}:{}", host, port);
    println!("╔══════════════════════════════════════════════════════════════════════╗");
    println!("║  ULTRON DISASSEMBLE v2.0 (NATIVE RUST ENGINE) ONLINE                 ║");
    println!("║  URL : http://{:<54}║", bind_addr);
    println!("╚══════════════════════════════════════════════════════════════════════╝");

    let listener = tokio::net::TcpListener::bind(&bind_addr).await?;
    axum::serve(listener, app).await?;
    Ok(())
}

async fn serve_index() -> impl IntoResponse {
    Html(INDEX_HTML)
}

fn parse_addr(s: &str) -> Option<u64> {
    let t = s.trim();
    if let Some(h) = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")) {
        u64::from_str_radix(h, 16).ok()
    } else {
        t.parse::<u64>().ok().or_else(|| u64::from_str_radix(t, 16).ok())
    }
}

async fn api_overview(State(state): State<Arc<AppState>>) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let doc_name = Path::new(&doc.file_path)
        .file_name()
        .and_then(|s| s.to_str())
        .unwrap_or("binary")
        .to_string();

    let segments: Vec<Value> = doc
        .segments
        .iter()
        .map(|s| {
            let secs: Vec<Value> = s
                .sections
                .iter()
                .map(|sec| {
                    json!({
                        "name": sec.name,
                        "start": format!("0x{:x}", sec.start_address),
                        "length": sec.length,
                        "is_code": sec.is_code,
                    })
                })
                .collect();
            json!({
                "name": s.name,
                "start": format!("0x{:x}", s.start_address),
                "length": s.length,
                "readable": s.readable,
                "writable": s.writable,
                "executable": s.executable,
                "sections": secs,
            })
        })
        .collect();

    let presets = vec![
        json!({
            "label": "Ultron Sample (Mach-O ARM64 Objective-C + C)",
            "path": "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/samples/ultron_sample_macho",
            "arch": "arm64"
        }),
        json!({
            "label": "Ultron Native LLVM Core (libLLVMServices.dylib)",
            "path": "/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/ultron_disassembler/lib/libLLVMServices.dylib",
            "arch": "arm64"
        }),
        json!({
            "label": "macOS System Binary (/bin/ls)",
            "path": "/bin/ls",
            "arch": "arm64"
        }),
    ];

    Json(json!({
        "open": true,
        "engine": "Rust Native 2.0 (Goblin + Capstone + Axum)",
        "document": doc_name,
        "file_path": doc.file_path,
        "format": doc.format_name,
        "cpu_family": doc.cpu_family,
        "cpu_subfamily": doc.cpu_subfamily,
        "bits": doc.address_space_bits,
        "entry_point": format!("0x{:x}", doc.entry_point),
        "procedure_count": doc.procedures.len(),
        "instruction_count": doc.instructions.len(),
        "string_count": doc.string_entries.len(),
        "segments": segments,
        "presets": presets,
    }))
}

async fn api_procedures(State(state): State<Arc<AppState>>) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let items: Vec<Value> = doc
        .procedures
        .values()
        .map(|p| {
            json!({
                "name": p.name,
                "demangled": SymbolDemangler::demangle(&p.name),
                "entry_point": format!("0x{:x}", p.entry_point),
                "end_address": format!("0x{:x}", p.end_address),
                "size": p.size(),
                "basic_blocks": p.basic_blocks.len(),
                "segment": p.segment_name,
                "section": p.section_name,
                "signature": p.signature,
            })
        })
        .collect();
    Json(json!({ "items": items }))
}

async fn api_procedure_detail(
    State(state): State<Arc<AppState>>,
    AxumPath(query): AxumPath<String>,
    Query(params): Query<HashMap<String, String>>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let target_proc = if let Some(addr) = parse_addr(&query) {
        doc.procedures.get(&addr).or_else(|| {
            doc.procedures
                .values()
                .find(|p| addr >= p.entry_point && addr < p.end_address)
        })
    } else {
        doc.procedures.values().find(|p| p.name == query)
    };

    let Some(proc) = target_proc else {
        return Json(json!({ "error": format!("Procedure not found: {}", query) }));
    };

    let syntax = params.get("syntax").map(|s| s.as_str()).unwrap_or("intel");
    let opts = DecompileOptions {
        ssa_form: params.get("ssa_form").map(|v| v == "true").unwrap_or(false),
        rewrite_objc: params.get("rewrite_objc").map(|v| v != "false").unwrap_or(true),
        inline_strings: params.get("inline_strings").map(|v| v != "false").unwrap_or(true),
        structure_control_flow: params.get("structure_cf").map(|v| v != "false").unwrap_or(true),
        remove_stack_prologue: params.get("remove_prologue").map(|v| v != "false").unwrap_or(true),
    };

    let pseudocode = UltronDecompiler::decompile(&doc, proc, &opts);

    let mut flat_insns = Vec::new();
    let mut cfg_nodes = Vec::new();
    let mut cfg_edges = Vec::new();

    for bb in &proc.basic_blocks {
        let mut bb_insns_json = Vec::new();
        for ins in &bb.instructions {
            let (mnem_disp, op_disp) = if syntax == "att" {
                (format!("{}q", ins.mnemonic), ins.op_str.replace('#', "$"))
            } else {
                (ins.mnemonic.clone(), ins.op_str.clone())
            };
            let user_cmt = doc.comments.get(&ins.address).cloned().unwrap_or_else(|| ins.comment.clone());
            let item = json!({
                "address": format!("0x{:x}", ins.address),
                "bytes": ins.bytes_hex,
                "mnemonic": mnem_disp,
                "operands": op_disp,
                "comment": user_cmt,
                "is_branch": ins.is_branch,
                "is_call": ins.is_call,
                "is_return": ins.is_return,
                "branch_target": ins.branch_target.map(|t| format!("0x{:x}", t)),
            });
            flat_insns.push(item.clone());
            bb_insns_json.push(item);
        }

        cfg_nodes.push(json!({
            "id": format!("0x{:x}", bb.start_address),
            "label": doc.get_name_at(bb.start_address),
            "start": format!("0x{:x}", bb.start_address),
            "end": format!("0x{:x}", bb.end_address),
            "instructions": bb_insns_json,
        }));

        for &dst in &bb.outgoing_edges {
            let kind = if Some(dst) == bb.branch_true && bb.branch_false.is_some() {
                "true"
            } else if Some(dst) == bb.branch_false {
                "false"
            } else {
                "unconditional"
            };
            cfg_edges.push(json!({
                "from": format!("0x{:x}", bb.start_address),
                "to": format!("0x{:x}", dst),
                "kind": kind,
            }));
        }
    }

    let callers: Vec<Value> = proc
        .callers
        .iter()
        .map(|&c| json!({ "address": format!("0x{:x}", c), "name": doc.get_name_at(c) }))
        .collect();
    let callees: Vec<Value> = proc
        .callees
        .iter()
        .map(|&c| json!({ "address": format!("0x{:x}", c), "name": doc.get_name_at(c) }))
        .collect();
    let local_vars: Vec<Value> = proc
        .local_variables
        .values()
        .map(|v| json!({ "name": v.name, "offset": v.offset, "type": v.var_type }))
        .collect();

    Json(json!({
        "procedure": {
            "name": proc.name,
            "demangled": SymbolDemangler::demangle(&proc.name),
            "entry_point": format!("0x{:x}", proc.entry_point),
            "end_address": format!("0x{:x}", proc.end_address),
            "size": proc.size(),
            "segment": proc.segment_name,
            "section": proc.section_name,
            "signature": proc.signature,
            "stack_frame_size": proc.stack_frame_size,
            "basic_block_count": proc.basic_blocks.len(),
            "callers": callers,
            "callees": callees,
            "local_variables": local_vars,
            "strings_referenced": proc.strings_referenced,
        },
        "instructions": flat_insns,
        "cfg": {
            "nodes": cfg_nodes,
            "edges": cfg_edges,
        },
        "pseudocode": pseudocode,
    }))
}

async fn api_strings(State(state): State<Arc<AppState>>) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let items: Vec<Value> = doc
        .string_entries
        .iter()
        .map(|s| {
            let xrefs: Vec<String> = s.xrefs.iter().map(|x| format!("0x{:x}", x)).collect();
            json!({
                "address": format!("0x{:x}", s.address),
                "value": s.value,
                "length": s.length,
                "section": s.section,
                "xrefs": xrefs,
            })
        })
        .collect();
    Json(json!({ "items": items }))
}

async fn api_symbols(State(state): State<Arc<AppState>>) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let exports: Vec<Value> = doc
        .exports
        .iter()
        .map(|(&a, n)| json!({ "address": format!("0x{:x}", a), "name": n, "demangled": SymbolDemangler::demangle(n) }))
        .collect();
    let imports: Vec<Value> = doc
        .imports
        .iter()
        .map(|(&a, n)| json!({ "address": format!("0x{:x}", a), "name": n, "demangled": SymbolDemangler::demangle(n) }))
        .collect();
    let labels: Vec<Value> = doc
        .labels
        .iter()
        .map(|(&a, n)| json!({ "address": format!("0x{:x}", a), "name": n, "demangled": SymbolDemangler::demangle(n) }))
        .collect();
    let types: Vec<Value> = doc
        .structs
        .values()
        .map(|st| {
            let fields: Vec<Value> = st
                .fields
                .iter()
                .map(|f| json!({ "offset": format!("0x{:02x}", f.offset), "name": f.name, "type": f.field_type }))
                .collect();
            json!({ "name": st.name, "size": st.size, "fields": fields })
        })
        .collect();

    Json(json!({
        "exports": exports,
        "imports": imports,
        "labels": labels,
        "types": types,
    }))
}

async fn api_address_inspector(
    State(state): State<Arc<AppState>>,
    AxumPath(addr_str): AxumPath<String>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let Some(addr) = parse_addr(&addr_str) else {
        return Json(json!({ "error": "Invalid address" }));
    };

    let seg = doc.get_segment_at(addr);
    let sec = doc.get_section_at(addr);
    let file_offset = sec
        .map(|s| s.file_offset + (addr - s.start_address))
        .unwrap_or(0);

    let xrefs_to: Vec<Value> = doc
        .xrefs_to
        .get(&addr)
        .cloned()
        .unwrap_or_default()
        .into_iter()
        .map(|x| json!({ "address": format!("0x{:x}", x), "name": doc.get_name_at(x) }))
        .collect();

    let xrefs_from: Vec<Value> = doc
        .xrefs_from
        .get(&addr)
        .cloned()
        .unwrap_or_default()
        .into_iter()
        .map(|x| json!({ "address": format!("0x{:x}", x), "name": doc.get_name_at(x) }))
        .collect();

    let raw8 = doc.read_bytes(addr, 8);
    let u8_val = raw8.first().copied().unwrap_or(0);
    let i8_val = u8_val as i8;
    let u16_val = if raw8.len() >= 2 {
        u16::from_le_bytes([raw8[0], raw8[1]])
    } else {
        0
    };
    let u32_val = if raw8.len() >= 4 {
        u32::from_le_bytes([raw8[0], raw8[1], raw8[2], raw8[3]])
    } else {
        0
    };
    let u64_val = if raw8.len() >= 8 {
        u64::from_le_bytes(raw8.clone().try_into().unwrap())
    } else {
        0
    };
    let ascii_preview: String = raw8
        .iter()
        .map(|&b| if (32..=126).contains(&b) { b as char } else { '.' })
        .collect();

    let byte_type = if doc.procedures.contains_key(&addr) {
        "PROCEDURE"
    } else if doc.instructions.contains_key(&addr) {
        "CODE"
    } else if doc.strings_table.contains_key(&addr) {
        "STRING"
    } else {
        "DATA"
    };

    Json(json!({
        "address_hex": format!("0x{:x}", addr),
        "address_dec": addr,
        "file_offset": format!("0x{:x}", file_offset),
        "segment": seg.map(|s| s.name.as_str()).unwrap_or("UNMAPPED"),
        "section": sec.map(|s| s.name.as_str()).unwrap_or("UNMAPPED"),
        "label": doc.labels.get(&addr).cloned().unwrap_or_default(),
        "comment": doc.comments.get(&addr).cloned().unwrap_or_default(),
        "byte_type": byte_type,
        "xrefs_to": xrefs_to,
        "xrefs_from": xrefs_from,
        "data_inspector": {
            "uint8": u8_val,
            "int8": i8_val,
            "uint16_le": format!("0x{:04x} ({})", u16_val, u16_val),
            "uint32_le": format!("0x{:08x} ({})", u32_val, u32_val),
            "uint64_le": format!("0x{:016x}", u64_val),
            "ascii": ascii_preview,
        }
    }))
}

async fn api_hex_dump(
    State(state): State<Arc<AppState>>,
    Query(params): Query<HashMap<String, String>>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let start = params
        .get("address")
        .and_then(|a| parse_addr(a))
        .unwrap_or(doc.entry_point);
    let length = params
        .get("length")
        .and_then(|l| l.parse::<usize>().ok())
        .unwrap_or(256)
        .min(2048);

    let data = doc.read_bytes(start, length);
    let mut rows = Vec::new();
    for (idx, chunk) in data.chunks(16).enumerate() {
        let row_addr = start + (idx * 16) as u64;
        let hex_cols: Vec<String> = chunk.iter().map(|b| format!("{:02x}", b)).collect();
        let ascii: String = chunk
            .iter()
            .map(|&b| if (32..=126).contains(&b) { b as char } else { '.' })
            .collect();
        rows.push(json!({
            "address": format!("0x{:08x}", row_addr),
            "hex": hex_cols.join(" "),
            "ascii": ascii,
        }));
    }
    Json(json!({ "start": format!("0x{:x}", start), "rows": rows }))
}

async fn api_audit(State(state): State<Arc<AppState>>) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    Json(UltronSecurityAuditor::audit_document(&doc))
}

#[derive(Deserialize)]
struct NeuralReq {
    address: String,
    auto_rename: Option<bool>,
}

async fn api_neural_analyze(
    State(state): State<Arc<AppState>>,
    Json(req): Json<NeuralReq>,
) -> Json<Value> {
    let mut doc = state.doc.lock().unwrap();
    let Some(addr) = parse_addr(&req.address) else {
        return Json(json!({ "error": "Invalid address" }));
    };
    let Some(proc) = doc.procedures.get(&addr).cloned() else {
        return Json(json!({ "error": "Procedure not found" }));
    };
    let mut report = UltronNeuralAnalyzer::analyze_procedure(&doc, &proc);
    if req.auto_rename.unwrap_or(false) {
        if let Some(suggested) = report.get("suggested_name").and_then(|v| v.as_str()) {
            doc.set_name_at(addr, suggested.to_string());
            report["renamed_to"] = json!(suggested);
        }
    }
    Json(report)
}

#[derive(Deserialize)]
struct EmuReq {
    address: String,
    action: String,
    steps: Option<usize>,
}

async fn api_emulate(
    State(state): State<Arc<AppState>>,
    Json(req): Json<EmuReq>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let addr = parse_addr(&req.address).unwrap_or(doc.entry_point);
    let mut emus = state.emulators.lock().unwrap();

    if req.action == "reset" || !emus.contains_key(&addr) {
        emus.insert(addr, UltronMicroEmulator::new(&doc.cpu_subfamily, addr));
    }
    let emu = emus.get_mut(&addr).unwrap();
    match req.action.as_str() {
        "step" => emu.step(&doc),
        "run" => {
            let n = req.steps.unwrap_or(16).min(64);
            for _ in 0..n {
                if emu.halted {
                    break;
                }
                emu.step(&doc);
            }
        }
        _ => {}
    }
    Json(emu.to_json())
}

#[derive(Deserialize)]
struct OpenReq {
    path: String,
    arch: Option<String>,
}

async fn api_open(
    State(state): State<Arc<AppState>>,
    Json(req): Json<OpenReq>,
) -> Json<Value> {
    let arch = req.arch.as_deref().unwrap_or("arm64");
    match UltronBinaryLoader::load(&req.path, arch) {
        Ok(new_doc) => {
            let p_count = new_doc.procedures.len();
            let i_count = new_doc.instructions.len();
            *state.doc.lock().unwrap() = new_doc;
            state.emulators.lock().unwrap().clear();
            Json(json!({
                "ok": true,
                "procedure_count": p_count,
                "instruction_count": i_count,
            }))
        }
        Err(e) => Json(json!({ "error": e.to_string() })),
    }
}

#[derive(Deserialize)]
struct RenameReq {
    address: String,
    name: String,
}

async fn api_rename(
    State(state): State<Arc<AppState>>,
    Json(req): Json<RenameReq>,
) -> Json<Value> {
    let mut doc = state.doc.lock().unwrap();
    if let Some(addr) = parse_addr(&req.address) {
        doc.set_name_at(addr, req.name.clone());
        Json(json!({ "ok": true, "address": format!("0x{:x}", addr), "name": req.name }))
    } else {
        Json(json!({ "error": "Invalid address" }))
    }
}

#[derive(Deserialize)]
struct CommentReq {
    address: String,
    comment: String,
}

async fn api_comment(
    State(state): State<Arc<AppState>>,
    Json(req): Json<CommentReq>,
) -> Json<Value> {
    let mut doc = state.doc.lock().unwrap();
    if let Some(addr) = parse_addr(&req.address) {
        doc.comments.insert(addr, req.comment.clone());
        if let Some(ins) = doc.instructions.get_mut(&addr) {
            ins.comment = req.comment.clone();
        }
        Json(json!({ "ok": true }))
    } else {
        Json(json!({ "error": "Invalid address" }))
    }
}

#[derive(Deserialize)]
struct StructFieldInput {
    offset: String,
    name: String,
    #[serde(rename = "type")]
    field_type: String,
}

#[derive(Deserialize)]
struct StructDefReq {
    name: String,
    size: u64,
    fields: Vec<StructFieldInput>,
}

async fn api_define_struct(
    State(state): State<Arc<AppState>>,
    Json(req): Json<StructDefReq>,
) -> Json<Value> {
    let mut doc = state.doc.lock().unwrap();
    let fields: Vec<UltronStructField> = req
        .fields
        .into_iter()
        .map(|f| UltronStructField {
            offset: parse_addr(&f.offset).unwrap_or(0),
            name: f.name,
            field_type: f.field_type,
        })
        .collect();
    doc.structs.insert(
        req.name.clone(),
        UltronStructDef {
            name: req.name.clone(),
            size: req.size,
            fields,
        },
    );
    Json(json!({ "ok": true, "name": req.name }))
}

#[derive(Deserialize)]
struct AssembleReq {
    instruction: String,
    arch: Option<String>,
    patch_address: Option<String>,
}

async fn api_assemble(
    State(state): State<Arc<AppState>>,
    Json(req): Json<AssembleReq>,
) -> Json<Value> {
    let arch = req.arch.as_deref().unwrap_or("arm64");
    match UltronLlvmAssembler::assemble(&req.instruction, arch) {
        Ok(mut res) => {
            if let Some(patch_addr_str) = req.patch_address {
                if let Some(addr) = parse_addr(&patch_addr_str) {
                    if let Some(bytes_arr) = res.get("bytes").and_then(|b| b.as_array()) {
                        let patch: Vec<u8> = bytes_arr
                            .iter()
                            .filter_map(|v| v.as_u64().map(|n| n as u8))
                            .collect();
                        let mut doc = state.doc.lock().unwrap();
                        if doc.write_bytes(addr, &patch) {
                            UltronDisassemblerEngine::analyze(&mut doc);
                            res["patched"] = json!(true);
                            res["patch_address"] = json!(format!("0x{:x}", addr));
                        }
                    }
                }
            }
            Json(res)
        }
        Err(e) => Json(json!({ "error": e.to_string() })),
    }
}

#[derive(Deserialize)]
struct ExportReq {
    output_path: Option<String>,
}

async fn api_export_binary(
    State(state): State<Arc<AppState>>,
    Json(req): Json<ExportReq>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let out_path = req
        .output_path
        .unwrap_or_else(|| format!("{}.patched", doc.file_path));
    match UltronLlvmAssembler::export_patched_binary(&doc, &out_path) {
        Ok(res) => Json(res),
        Err(e) => Json(json!({ "error": e.to_string() })),
    }
}

#[derive(Deserialize)]
struct DemangleReq {
    symbol: String,
}

async fn api_demangle(Json(req): Json<DemangleReq>) -> Json<Value> {
    Json(json!({
        "original": req.symbol,
        "demangled": SymbolDemangler::demangle(&req.symbol),
    }))
}

#[derive(Deserialize)]
struct ScriptReq {
    script: String,
}

async fn api_script(
    State(state): State<Arc<AppState>>,
    Json(req): Json<ScriptReq>,
) -> Json<Value> {
    let doc = state.doc.lock().unwrap();
    let first_proc = doc.procedures.values().next();
    let pseudo = first_proc
        .map(|p| UltronDecompiler::decompile(&doc, p, &DecompileOptions::default()))
        .unwrap_or_default();
    let _ = req.script;
    let output = format!(
        "[ULTRON RUST CORE] Document: {} | Entry: 0x{:x}\n[SEGMENTS] {} segments loaded | {} subroutines analyzed\n\n--- DECOMPILED PSEUDOCODE ---\n{}",
        doc.file_path,
        doc.entry_point,
        doc.segments.len(),
        doc.procedures.len(),
        pseudo
    );
    Json(json!({ "output": output }))
}
