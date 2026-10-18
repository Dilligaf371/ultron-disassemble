#!/usr/bin/env bash
set -euo pipefail

TARGET_PATH="${1:-}"
ARCH="${2:-arm64}"
ULTRON_DIR="/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler"
ULTRON_BIN="$ULTRON_DIR/target/release/ultron-disassemble-rs"
PORT=8420

if [[ -z "$TARGET_PATH" ]]; then
  echo "Usage: $0 <path_to_binary_or_app> [arch]" >&2
  exit 1
fi

# Ensure server is running on port 8420
if ! curl -s "http://127.0.0.1:${PORT}/api/overview" >/dev/null 2>&1; then
  nohup "$ULTRON_BIN" ui --port "$PORT" >/tmp/ultron_skill_server.log 2>&1 &
  sleep 1.2
fi

# Trigger 1-Click Autonomous 5-Stage Disassembly & Report Pipeline
curl -s -X POST "http://127.0.0.1:${PORT}/api/auto-pipeline" \
  -H "Content-Type: application/json" \
  -d "{\"path\":\"${TARGET_PATH}\",\"arch\":\"${ARCH}\"}" | python3 -c '
import sys, json
data = json.load(sys.stdin)
if "error" in data:
    print("ERROR:", data["error"], file=sys.stderr)
    sys.exit(1)
fmt = data.get("format", "")
arch = data.get("arch", "")
print("=== ULTRON DISASSEMBLE v3.0 — AUTONOMOUS PIPELINE COMPLETE ===")
print("Target        :", data.get("target"))
print("Format / Arch :", f"{fmt} ({arch})")
print("Procedures    :", data.get("procedure_count"))
print("Instructions  :", data.get("instruction_count"))
print("Strings       :", data.get("string_count"))
print("Output Folder :", data.get("output_dir"))
print("Generated Artifacts:")
for f in data.get("output_files", []):
    name = f.get("name", "")
    b = f.get("bytes", 0)
    p = f.get("path", "")
    print(f"  - {name:<24} ({b} bytes) -> {p}")
'
