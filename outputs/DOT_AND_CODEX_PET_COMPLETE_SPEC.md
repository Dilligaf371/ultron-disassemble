# Complete Reverse-Engineered Specification: Codex "Dot" Mascot & Desktop/CLI Pet System

Generated via **Ultron Disassemble v3.0** (`ultron-disassemble`) and archive extraction on `/Applications/ChatGPT.app` (`com.openai.codex`) and `codex` CLI (`aarch64-apple-darwin`).

---

## 1. Architectural Overview: Two Distinct Systems

Codex implements two complementary companion/mascot systems:

1. **"Dot" — The Procedural SVG Vector Mascot**
   - **Files**: `webview/assets/Dot-7cb00c0b541f.js`, `webview/assets/Dot-724388c993ae.js`, `webview/assets/es-fa82715d704d.js` (offsets `260000..325000`), `webview/assets/dot-onboarding-ring-a369119a8892.js`, `webview/assets/dot-onboarding-flight-16d39a3895f2.js`, `webview/assets/dot-onboarding-handoff-state-5eb4e40bb840.js`.
   - **Representation**: Layered SVG (`56x56` large viewBox or `20x20` small viewBox) with `[data-mascot-part="body"|"eye-left"|"eye-right"|"catchlight-left"|"catchlight-right"]`, `[data-mascot-shadow]`, and `[data-mascot-generated-layer]`.
   - **Animation**: 60fps `requestAnimationFrame` procedural keyframe + physics engine (`mascot_engine.js`) supporting 11 named animations (`agree`, `disagree`, `focus`, `hop`, `nod`, `read-below`, `sparkle`, `vibe`, `wave`, `wake-up`, `nani`), continuous idle floating, autonomous look-around, random blinking, press squish, and `tanh`-based cursor/target eye tracking + close-proximity body repulsion.

2. **Codex Pet / "Mini" (`AvatarOverlay`) — The WebP Spritesheet Companion (Desktop & TUI)**
   - **Files**: `webview/assets/app-initial-90eb42395b7d.js`, `webview/assets/avatar-overlay-native-page-e0a4e0ad152a.js`, `webview/assets/avatar-mascot-button-1d7e7f02ecf5.js`, `webview/assets/pet-model-e2e93a472417.js`, `webview/assets/pet-content-688fd2af4013.js`, `.vite/build/main-CLu1A25j.js`, `.vite/build/src-Dtwb7yKT.js`, `/Applications/ChatGPT.app/Contents/Resources/native/sky.node`, and `codex` Rust CLI (`codex_tui::pets`).
   - **Representation**: `1536x1872` (V1, 8×9 grid) or `1536x2288` (V2, 8×11 grid) WebP spritesheet with `192x208` px cells (`aspectRatio = 192 / 208 = 0.9230769`).
   - **9 Built-in Pets**: `codex` (default, uses `codex-spritesheet-v6-51045ae208c0.webp`), `dewey`, `fireball`, `hoots`, `rocky`, `seedy`, `stacky`, `bsod`, `null-signal`.

---

## 2. Ultron Disassemble v3.0 Native Binary Findings

All Ultron v3.0 autonomous outputs (21 artifacts per binary: `REPORT.md`, `SME_PLAYBOOK.md`, `decompiled.c`, `disassembly.asm`, `cpp_classes.hpp`, `typed_signatures.h`, `recovered_structs.h`, `reconstructed_project/reconstructed.c`, etc.) are saved in:
- `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/outputs/sky_node/`
- `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/outputs/bare-modifier-monitor/`
- `/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/outputs/system-audio-spectrum/`

### 2.1 `sky.node` (`/Applications/ChatGPT.app/Contents/Resources/native/sky.node`)
- **Format**: Mach-O 64-bit `arm64`, 2,799 procedures, 84,906 instructions (`stack-controller.mm`, `service.mm`, `modifier-capture.mm`, `frontmost-window.mm`, `status-item.mm`).
- **Recovered Native Classes**:
  - `RemoteHostedPIPContentService`, `PIPStackController`, `PIPStackWindow`, `PIPStackContentView`, `PIPStackItem`, `PIPStackItemMotion`, `PIPStackAnchor`, `PIPStackHost`, `PIPStackDragInteraction`, `PIPStackResizeInteraction`, `PIPStackItemCompletionEffect`, `PIPStackProgrammaticMove`, `RemoteHostedPIPContentAttachment`, `RemoteHostedPIPContentPresentation`, `SkyFileDragSource`, `SkyNative::ModifierCaptureSession`, `SkyNative::FrontmostWindow`, `SkyNative::StatusItem*`.
- **Key Decompiled Procedures & Addresses**:
  - `setRemoteHostedPIPContentPetWakeRequestHandler` (`0x0000a35c`): Registers JS callback invoked when the user sends a PiP stack to the sleeping Pet.
  - `-[RemoteHostedPIPContentService registeredHostChanged:animated:springParameters:]` (`0x000159cc .. 0x00015c3c`): Updates host anchor (between `"codex-window"` and `"avatar-overlay"`) and triggers spring motion.
  - `-[RemoteHostedPIPContentService completePendingPetPlacementIfPossible]` (`0x00015c3c`): Completes deferred attachment of a PiP stack onto the `"avatar-overlay"` host once the Pet window reports its anchor rect.
  - `-[RemoteHostedPIPContentService setComputerUseCursorLocation:isActive:]` (`0x00015e04 .. 0x00015e10`): Stores `(double x, double y)` at `[self + 0xf0]` and `bool isActive` at `[self + 0x100]`, then tail-calls `publishComputerUseLookTarget`.
  - `-[RemoteHostedPIPContentService publishComputerUseLookTarget]` (`0x00015e10 .. 0x00015e70`): Publishes the active Computer Use cursor coordinates so the Pet's 360° look-at eyes track the autonomous agent's cursor.
  - `-[RemoteHostedPIPContentService sendStackToPet]` (`0x00015f2c .. 0x00015fb8`): Looks up registered host `"avatar-overlay"` via `__Z41RemoteHostedPIPContentRegisteredHostForIDP8NSString`; if present, transitions the PiP stack to the Pet; otherwise sets pending flag `[self + 0xe8] = 1` and invokes the Pet wake request handler.
  - `-[RemoteHostedPIPContentService returnStackToCodex]` (`0x00015fb8`): Moves the PiP stack from `"avatar-overlay"` back to `"codex-window"`.
  - `-[PIPStackController applyMotionFramesExpanded:]` (`0x00026238 .. 0x00026c54`, 2,588 bytes): Computes per-item spring trajectories (`PIPStackItemMotion`) when expanding/collapsing or docking the PiP stack above/below the Pet.

### 2.2 `bare-modifier-monitor` (`/Applications/ChatGPT.app/Contents/Resources/native/bare-modifier-monitor`)
- **Format**: Mach-O 64-bit `arm64` Swift binary, 726 procedures.
- **Recovered Swift Types**: `BareModifierMonitorSession` (`bareModifierCommitDelayMs`, `flagsChanged`, `keyDown`, `emitLine`), `DoubleModifierMonitorSession`, `NativeKeyHotkeyMonitor`, `ParsedMonitorInput`, `SupportedKey`.
- **Role**: Captures global bare-modifier / double-modifier / hotkey presses via `CGEventTapCreate` / `CFMachPortCreateRunLoopSource` to summon or toggle the Mini Pet overlay (`Alt+Space` on macOS, `Super+Alt+P` on Windows/Linux) or trigger Global Dictation.

### 2.3 `system-audio-spectrum` (`/Applications/ChatGPT.app/Contents/Resources/native/system-audio-spectrum`)
- **Format**: Mach-O 64-bit `arm64`, 59 procedures.
- **Protocol** (verified in `.vite/build/capture-DGa2wn6A.js`):
  - Spawned with `--sample-rate <hz>` (`--help` exits `0`, invalid args exit `64`).
  - Emits newline-delimited JSON on `stdout`:
    - `{"type":"ready","sampleRate":48000}`
    - `{"type":"levels","levels":[f0, f1, ..., f23]}` — 24 float frequency band levels clamped to `[0, 1]` (`fB = 24`), driving the realtime voice/audio visualizer in the Avatar Overlay.

### 2.4 `codex` CLI Binary (`codex_tui::pets`)
- **Binary**: `/Applications/ChatGPT.app/Contents/Resources/codex-cli/CodexCLI.app/Contents/MacOS/codex` (238 MB Mach-O `arm64` Rust binary).
- **Ultron SSA Decompilation (`task-33.log`)**:
  - `codex_tui::pets::catalog::builtin_pet` (`0x109a4448c`): Looks up built-in pet metadata from static table at `0x10e532600` (9 entries × 96 bytes).
  - `codex_tui::pets::asset_pack::validate_download_url` (`0x108f50438`): Enforces `https://` scheme (`0x7370747468 == "https"` and `"://"`) before downloading remote pet packs into `cache/tui-pets`.
  - `codex_tui::pets::asset_pack::builtin_spritesheet_path` (`0x108f50648`): Formats `<name>-spritesheet.webp` for embedded TUI pet assets.
  - `codex_tui::bottom_pane::StatusLineSetupView::ambient_pet_draw` (`0x108de8438`) & `ChatWidget::draw_ambient_pet_image` (`0x1095dca08`): Renders the pet spritesheet frame directly in the terminal status line using `TuiPetAnchor` (`top-left`, `top-right`, `bottom-left`, `bottom-right`).

---

## 3. "Dot" — Exact SVG Geometry & Color Palettes (`Dot-7cb00c0b541f.js`)

### 3.1 Large SVG Geometry (`size >= 28`, default `viewBox="0 0 56 56"`)
- **Shadow Element** (`[data-mascot-shadow="true"]`):
  - Rendered below SVG when `showShadow !== false` and `size >= 28`.
  - Dimensions: `width = Math.round(size * 0.48)` px, `height = Math.max(4, Math.round(size * 0.1))` px, `bottom = -Math.max(2, Math.round(size * 0.04))` px.
  - Styling: `border-radius: 9999px; background: rgba(15, 23, 42, 0.24); filter: blur(${Math.max(2, Math.round(size * 0.05))}px); opacity: 0.32;`.
- **Body Path** (`[data-mascot-part="body"]`, `transformOrigin: "28px 28px"`):
  - Circle centered at `(28, 28)` with radius `25.375`:
    `d="M53.375 28C53.375 42.0142 42.0142 53.375 28 53.375C13.9858 53.375 2.625 42.0142 2.625 28C2.625 13.9858 13.9858 2.625 28 2.625C42.0142 2.625 53.375 13.9858 53.375 28Z"`
- **Left Eye Path** (`[data-mascot-part="eye-left"]`, `transformOrigin: "22.76px 28.25px"`):
  - Capsule (`x: 19.3707..26.15`, `y: 22.75..33.75`, width `6.7793`, height `11.0`):
    `d="M26.15 26.1598C26.15 24.2766 24.6323 22.75 22.7602 22.75C20.8881 22.75 19.3705 24.2766 19.3705 26.1598V30.3402C19.3705 32.2234 20.8881 33.75 22.7602 33.75C24.6323 33.75 26.15 32.2234 26.15 30.3402V26.1598Z"`
- **Right Eye Path** (`[data-mascot-part="eye-right"]`, `transformOrigin: "33.98px 28.25px"`):
  - Capsule (`x: 30.5916..37.3708`, `y: 22.75..33.75`, width `6.7792`, height `11.0`):
    `d="M37.3708 26.1598C37.3708 24.2766 35.8532 22.75 33.9811 22.75C32.109 22.75 30.5916 24.2766 30.5916 26.1598V30.3402C30.5916 32.2234 32.109 33.75 33.9811 33.75C35.8532 33.75 37.3708 32.2234 37.3708 30.3402V26.1598Z"`
- **Eye Linear Gradient** (`x1="28.3707" y1="22.75" x2="28.3707" y2="33.75"`):
  - Stop `0`: `#29334D`
  - Stop `1`: `#06061F`
- **Catchlights**:
  - `catchlight-left` (`transformOrigin: "22.76px 26.16px"`): `<ellipse cx="22.7602" cy="26.1598" rx="1.52168" ry="1.52848" fill="#D9D9D9" />`
  - `catchlight-right` (`transformOrigin: "33.95px 26.16px"`): `<ellipse cx="33.9547" cy="26.1598" rx="1.52168" ry="1.52848" fill="#D9D9D9" />`

### 3.2 Small SVG Geometry (`size < 28`, `viewBox="0 0 20 20"`, scale factor `20/56 = 0.35714286`)
- **Body Path** (`transformOrigin: "10px 10px"`):
  `d="M19.0625 10C19.0625 15.0051 15.0051 19.0625 10 19.0625C4.99492 19.0625 0.9375 15.0051 0.9375 10C0.9375 4.99492 4.99492 0.9375 10 0.9375C15.0051 0.9375 19.0625 4.99492 19.0625 10Z"`
- **Left Eye Path** (`transformOrigin: "8.13px 10.09px"`):
  `d="M9.33929 9.34279C9.33929 8.67021 8.79725 8.125 8.12864 8.125C7.46004 8.125 6.91803 8.67021 6.91803 9.34279V10.8358C6.91803 11.5084 7.46004 12.0536 8.12864 12.0536C8.79725 12.0536 9.33929 11.5084 9.33929 10.8358V9.34279Z"`
- **Right Eye Path** (`transformOrigin: "12.14px 10.09px"`):
  `d="M13.3467 9.34279C13.3467 8.67021 12.8047 8.125 12.1361 8.125C11.4675 8.125 10.9256 8.67021 10.9256 9.34279V10.8358C10.9256 11.5084 11.4675 12.0536 12.1361 12.0536C12.8047 12.0536 13.3467 11.5084 13.3467 10.8358V9.34279Z"`
- **Eye Linear Gradient** (`x1="10.1324" y1="8.125" x2="10.1324" y2="12.0536"`): `#29334D` → `#06061F` (no catchlights on small variant).

### 3.3 The 8 Color Variants (`d` in `Dot-7cb00c0b541f.js`)
All body gradients use `x1="28" y1="2.625" x2="28" y2="53.375"` (large) or `x1="10" y1="0.9375" x2="10" y2="19.0625"` (small).
Inner shadows use SVG filter pipeline: `feFlood(0)` → `feColorMatrix(in="SourceAlpha", values="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 127 0")` → `feOffset(dx, dy)` → `feGaussianBlur(stdDeviation)` → `feComposite(in2="hardAlpha", operator="arithmetic", k2="-1", k3="1")` → `feColorMatrix(matrix)` → `feBlend(mode="normal")`.

| Variant | Gradient Stops | Inner Shadows (`large`: `dx, dy, blur, matrix` — divide `dx,dy,blur` by `2.8` for `small`) |
|---|---|---|
| `default` / `orange` | `0`: `#FFB455`, `1`: `#FF9C2C` | 1) `dy=4, blur=6`, `rgba(1, 0.960784, 0.909804, 0.6)`<br>2) `dx=-5, dy=-6, blur=5`, `rgba(1, 0.435294, 0, 0.4)` |
| `red` | `0`: `#FF6C6F`, `1`: `#FA6062` | 1) `dy=3, blur=5`, `rgba(1, 1, 1, 0.56)`<br>2) `dy=-6, blur=6`, `rgba(0.952941, 0.0666667, 0.0784314, 0.8)`<br>3) `dx=-5, dy=-6, blur=5`, `rgba(1, 0.435294, 0, 0.4)` |
| `yellow` | `0`: `#FFE742`, `0.427885`: `#FFE236`, `0.817308`: `#FFCD0F` | 1) `dy=3, blur=3.5`, `rgba(1, 1, 1, 0.55)`<br>2) `dx=-3, dy=-5, blur=5`, `rgba(1, 0.58, 0, 0.59)` |
| `green` | `0`: `#A9E597`, `1`: `#7DCC60` | 1) `dy=4, blur=6`, `rgba(0.925, 1, 0.909804, 0.6)`<br>2) `dx=-5, dy=-6, blur=5`, `rgba(0.166667, 0.72, 0, 0.4)` |
| `blue` | `0`: `#7CB6FF`, `1`: `#3689EB` | 1) `dy=4, blur=6`, `rgba(0.909804, 0.971429, 1, 0.6)`<br>2) `dx=-5, dy=-6, blur=5`, `rgba(0, 0.254902, 0.901961, 0.4)` |
| `purple` | `0`: `#B99EF8`, `1`: `#A47AF5` | 1) `dy=4, blur=6`, `rgba(0.960784, 0.909804, 1, 0.6)`<br>2) `dx=-5, dy=-6, blur=5`, `rgba(0.321569, 0.0431373, 0.882353, 0.4)` |
| `pink` | `0`: `#F886B7`, `1`: `#EE569F` | 1) `dy=4, blur=6`, `rgba(1, 0.909804, 0.960784, 0.6)`<br>2) `dx=-5, dy=-6, blur=5`, `rgba(0.75, 0, 0.1625, 0.4)` |

### 3.4 Onboarding Ring & Flight Handoff (`dot-onboarding-ring-a369119a8892.js`)
- **Ring SVG**: `viewBox="102 102 820 820"`, outer circle radius `410` centered at `(512, 512)`, inner hole radius `162.204`:
  `d="M512 102C738.437 102 922 285.563 922 512C922 738.437 738.437 922 512 922C285.563 922 102 738.437 102 512C102 285.563 285.563 102 512 102ZM512 349.796C422.417 349.796 349.796 422.417 349.796 512C349.796 601.583 422.417 674.204 512 674.204C601.583 674.204 674.204 601.583 674.204 512C674.204 422.417 601.583 349.796 512 349.796Z"`
- **Flight & Reveal Timings**:
  - `easeTravel`: `cubic-bezier(0.77, 0, 0.175, 1)`
  - `easeFade`: `cubic-bezier(0.37, 0, 0.63, 1)`
  - `easeSettle`: `cubic-bezier(0.22, 1, 0.36, 1)`
  - `growDuration`: `650ms`, `holeDuration`: `400ms`, `holeDelay`: `250ms`
  - `welcomeExitDuration`: `240ms`, `stepExitDuration`: `280ms`
  - `flightDuration`: `650ms`, `flightDelay`: `80ms`, `longFlightDuration`: `1050ms`, `birthFlightDelay`: `140ms`
  - `revealDuration`: `800ms`, `revealStagger`: `100ms`

---

## 4. "Dot" Procedural Animation & Physics Engine (`mascot_engine.js`)

### 4.1 Base Pose & Motion Scale
- **Motion Scale**: `motionScale = Math.max(width, height) / 56` (normalizes all pixel offsets to the `56x56` coordinate space).
- **Default Pose (`WE`)**:
  - `body`: `{x: 0, y: 0, rotate: 0, scaleX: 1, scaleY: 1, opacity: 1}`
  - `eyeLeft`, `eyeRight`, `catchlightLeft`, `catchlightRight`: `{x: 0, y: 0, rotate: 0, scaleX: 1, scaleY: 1, opacity: 1}`
  - `shadow`: `{x: 0, y: 0, rotate: 0, scaleX: 1, scaleY: 1, opacity: 0.32}`
- **Sleeping Pose (`YE`)**:
  - Same as `WE`, except `eyeLeft.scaleY = 0.15`, `eyeRight.scaleY = 0.15`, `catchlightLeft.scaleY = 0.15`, `catchlightRight.scaleY = 0.15`, `catchlightLeft.opacity = 0`, `catchlightRight.opacity = 0`, `shadow.opacity = 0`.

### 4.2 Continuous Idle Motion (`Rk`), Autonomous Look-Around, Blinking (`Ak`), & Press Squish
1. **Idle Bobbing (`jk = 2800ms` period)**:
   - `phase = (elapsed % 2800) / 2800`
   - `t = 0.5 - 0.5 * Math.cos(phase * 2 * Math.PI)`
   - `body.y += -3 * t * motionScale`
   - `body.scaleX *= 1 - 0.015 * t`
   - `body.scaleY *= 1 + 0.015 * t`
   - `shadow.scaleX *= 1 - 0.1 * t`
   - `shadow.opacity *= 1 - 0.25 * t`
2. **Idle Autonomous Look-Around (`Mk = 12000ms` cycle, suppressed when cursor/target tracking is active)**:
   - Keyframes (`Nk`, eased with `cubic-bezier(0.42, 0, 0.58, 1)`):
     - `at: 0.00..0.14`: `(0, 0)`
     - `at: 0.22..0.33`: `(-1.25, -0.15)`
     - `at: 0.42..0.54`: `(0, 0)`
     - `at: 0.63..0.73`: `(1.10, 0.10)`
     - `at: 0.81..0.87`: `(-0.35, -0.45)`
     - `at: 0.94..1.00`: `(0, 0)`
   - Multipliers (`motionScale = m`):
     - `body.x += x * 0.22 * m`, `body.y += y * 0.16 * m`, `body.rotate += x * 0.85`
     - `eye.x += x * 0.95 * m`, `eye.y += y * 0.7 * m`
     - `catchlight.x += x * 1.2 * m`, `catchlight.y += y * 0.88 * m`
3. **Random Blinking (`Ak`)**:
   - Base interval `blinkIntervalMs` multiplied by random factor in `[0.75, 1.35]` (`Zk = 0.75, Qk = 1.35`).
   - Blink duration: `Jk = 220ms`, eased with `cubic-bezier(0.42, 0, 0.58, 1)`.
   - Eye `scaleY` keyframes: `[{at: 0, value: 1}, {at: 0.45, value: 0.08}, {at: 0.55, value: 0.08}, {at: 1, value: 1}]`.
   - Catchlight `opacity` keyframes: `[{at: 0, value: 1}, {at: 0.35, value: 0}, {at: 0.65, value: 0}, {at: 1, value: 1}]`.
4. **Press Squish (`Gk = 0.94`, `Kk = 100ms`)**:
   - Target scale when pressed (`isPressed`): `0.94`, otherwise `1.0`.
   - Exponential smoothing per frame: `pressScale = lerp(pressScale, target, 1 - Math.exp(-dt / 100))`.
   - Multiplies `body.scaleX`, `body.scaleY`, and `shadow.scaleX`.

### 4.3 Pointer & Target Tracking Physics (`_k` / `ZO`)
- **Engagement Radius**:
  - `jO = 200` px: Distance from mascot bounding rect edge within which pointer tracking engages (`engagement = 1 - clamp(distToRect / 200, 0, 1)`).
  - For explicit `trackedPoint`, `engagement = 1`.
- **Hyperbolic Tangent Eye & Catchlight Offset (`pk`, `hk`)**:
  - Given `deltaX = pt.x - centerX`, `deltaY = pt.y - centerY`, `unitX = deltaX / hypot`, `unitY = deltaY / hypot`:
  - `hk(delta, dim, maxOffset, engagement) = Math.tanh(delta / Math.max(dim * 0.45, 1)) * maxOffset * engagement`
  - Downward look amplification (`dk`): if `y > 0`, multiply by `FO = 1.5`.
  - Constants: `NO = 0.42`, `PO = 0.42`, `zO = 2`, `BO = 1`, `LO = 1`, `RO = 0.25`.
  - `eyeX = hk(deltaX, width, 0.42, engagement) * 2 * motionScale`
  - `eyeY = dk(hk(deltaY, height, 0.42, engagement)) * 1 * motionScale`
  - `catchlightX = eyeX + hk(deltaX, width, 0.42, engagement) * motionScale` (`1.5 * eyeX`)
  - `catchlightY = eyeY + dk(hk(deltaY, height, 0.42, engagement)) * motionScale` (`2.0 * eyeY`)
  - `bodyRotate = unitX * 1.0 * engagement`
  - `bodyX = unitX * 0.25 * motionScale * engagement`, `bodyY = unitY * 0.25 * motionScale * engagement`
- **Close-Proximity Body Repulsion (`$O`)**:
  - When pointer is within `MO = 16` px of mascot rect (`i = 1 - clamp(distToRect / 16, 0, 1)`):
  - `bodyRotate += -unitX * 4 * i` (`HO = 4`)
  - `bodyScale *= 1 - 0.04 * i * i` (`UO = 0.04`)
  - `bodyX += -unitX * 1.3 * motionScale * i` (`VO = 1.3`)
  - `bodyY += -unitY * 1.3 * motionScale * i`
- **Smoothing Time Constants (`sk`)**:
  - Eyes & catchlights smooth with `WO = 190ms` (`1 - exp(-dt / 190)`).
  - Body transform smooths with `GO = 180ms` (`1 - exp(-dt / 180)`).

### 4.4 The 11 Named Procedural Animations (`DO` in `mascot_engine.js`)
| Animation Name | Duration | Blend-In | Key Trajectory & Generated Particles (`n = motionScale`) |
|---|---|---|---|
| `agree` | `1320ms` | `120ms` | Two enthusiastic nods: `body.y` `[0 → -2.2n @ 0.16 → 2.4n @ 0.34 → -1.1n @ 0.54 → 1.7n @ 0.74 → 0]`, `body.rotate` `[0 → -2.8° → 2.4° → -1.4° → 1.6° → 0]`, eyes follow `y` `[0 → -0.35n → 0.82n → -0.18n → 0.56n → 0]`. |
| `disagree` | `920ms` | `90ms` | Head shake: `body.x` `[0 → -4n @ 0.16 → 3.6n @ 0.36 → -2.5n @ 0.58 → 1.4n @ 0.78 → 0]`, `body.rotate` `[0 → -8° → 7.2° → -5° → 2.8° → 0]`, eyes squint `scaleY = 0.84` and shift horizontally `[-1.25n → 1.15n → -0.82n → 0.45n → 0]`. |
| `focus` | `520ms` | `90ms` | Alert lean-in: `body.y` `[0 → -1.15n @ 0.34 → -0.45n @ 0.72 → 0]`, `body.scaleX` `[1 → 1.03 → 1.01 → 1]`, `eye.scaleY` narrows `[1 → 0.66 @ 0.28 → 0.74 @ 0.7 → 1]`, catchlights brighten & lift. |
| `hop` | `720ms` | `90ms` | Anticipation squash + jump: `body.y` `[0 → 1.8n @ 0.18 → -7.5n @ 0.48 → 1.1n @ 0.76 → 0]`, `body.scaleX` `[1 → 1.08 @ 0.18 → 0.94 @ 0.48 → 1.04 @ 0.76 → 1]`, `body.scaleY` `[1 → 0.91 @ 0.18 → 1.07 @ 0.48 → 0.96 @ 0.76 → 1]`, shadow shrinks to `0.82` & opacity `0.18` at apex. |
| `nod` | `760ms` | `120ms` | Single polite nod: `body.y` `[0 → 2.8n @ 0.3 → -0.8n @ 0.62 → 0]`, `body.rotate` `[0 → 3.5° @ 0.3 → -1.4° @ 0.62 → 0]`, `eye.y` `[0 → 0.85n @ 0.3 → -0.2n @ 0.62 → 0]`, `eye.scaleY` `[1 → 0.78 @ 0.3 → 1.02 @ 0.62 → 1]`. |
| `read-below` | `4000ms` | `220ms` | Reading lines of text below: `body.y` drops `2n` (`0.16..0.82`), `eye.x` scans left-to-right twice `[0 @ 0.12 → 1.15n @ 0.28 → -0.35n @ 0.52 → 1.05n @ 0.78 → 0.25n @ 0.92 → 0]`, `eye.y` looks down `[0 → 0.38n → 0.52n → 0.44n → 0.14n → 0]`. |
| `sparkle` | `1060ms` | `100ms` | Happy tilt (`body.rotate` `-8°`, `eye.scaleY = 0.22`) + **2 floating `✨` particles**:<br>• Particle 1: `delay: 140ms, duration: 700ms, direction: -1, scale: 1.0, x: -9, y: -6.2`<br>• Particle 2: `delay: 240ms, duration: 660ms, direction: +1, scale: 0.75, x: 5.8, y: -6.8` |
| `vibe` | `1720ms` | `120ms` | Musical groove (`body.rotate` `[-7.2° → 6.4° → -6° → 5.1° → -2.6° → 0]`, closed happy eyes `scaleY = 0.22`) + **5 floating music notes** (`duration: 900ms` each):<br>1) `♪` (`delay: 120ms, dir: -1, scale: 1.0, x: -12, y: -4`)<br>2) `♫` (`delay: 360ms, dir: +1, scale: 0.9, x: 11, y: -7`)<br>3) `♪` (`delay: 620ms, dir: -1, scale: 0.78, x: -5, y: -11`)<br>4) `♬` (`delay: 820ms, dir: +1, scale: 0.72, x: 5, y: -6`)<br>5) `♪` (`delay: 1040ms, dir: -1, scale: 0.66, x: -10, y: -9`) |
| `wave` | `960ms` | `140ms` | Playful wiggle/wave: `body.rotate` `[0 → -12° @ 0.16 → 9.8° @ 0.36 → -6.8° @ 0.56 → 3.4° @ 0.76 → 0]`, `body.y` lifts `-1.36n @ 0.26`. |
| `wake-up` | `4320ms` | `180ms` | 4-stage wake sequence: `0..180ms` transition to sleeping pose (`YE`), `180..520ms` hold sleep, `520..2280ms` flutter eyes open 3 times (`scaleY`: `0.15 → 0.7 → 0.18 → 0.7 → 0.24 → 0.7`), `2280..4320ms` jump up `-4n` at `t=0.72` and settle to awake pose (`WE`). |
| `nani` | `1320ms` | `100ms` | Confused head-tilt (`body.rotate` `-11°` or `+11°`, asymmetric eye `scaleY`: primary eye `1.14`, secondary eye `0.78`) + **randomly spawns either `❓` or `❗`** (`50/50` chance via `Math.random() < 0.5`, `delay: 80ms, duration: 920ms, x: ±10.8, y: -12.6`). |

---

## 5. Codex Pet / "Mini" (`AvatarOverlay`) — WebP Spritesheet & Desktop Window System

### 5.1 WebP Spritesheet Grid Specification (`u6s` in `app-initial-90eb42395b7d.js`)
- **Cell Size**: `cellWidth = 192`, `cellHeight = 208` (`aspectRatio = 192 / 208 = 12 / 13`).
- **Columns**: `8` cells per row (`width = 1536` px).
- **Format Version 1**: `1536 × 1872` px (`9` rows, `requiredFramesByRow = [6, 8, 8, 4, 5, 8, 6, 6, 6]`).
- **Format Version 2**: `1536 × 2288` px (`11` rows, `requiredFramesByRow = [6, 8, 8, 4, 5, 8, 6, 6, 6, 8, 8]`).

### 5.2 Spritesheet Rows, States, & Exact Frame Timings (`y6s` / `f6s` / `b6s`)
| Row | Animation State | Frame Count | Frame Durations (ms) | Notes |
|---|---|---|---|---|
| `0` | `idle` | `6` | Base: `[280, 110, 110, 140, 140, 320]`<br>Active Idle (`×6`): `[1680, 660, 660, 840, 840, 1920]` | Multiplied by `h6s = 6` during normal idle (`6720ms` total loop). |
| `1` | `running-right` | `8` | `[120, 120, 120, 120, 120, 120, 120, 220]` | Used when walking/moving right (`dx > 0`). |
| `2` | `running-left` | `8` | `[120, 120, 120, 120, 120, 120, 120, 220]` | Used when walking/moving left (`dx < 0`). |
| `3` | `waving` | `4` | `[140, 140, 140, 280]` | Greeting / wave reaction (`700ms` total). |
| `4` | `jumping` | `5` | `[140, 140, 140, 140, 280]` | Excited jump reaction (`840ms` total). |
| `5` | `failed` | `8` | `[140, 140, 140, 140, 140, 140, 140, 240]` | Task error / failure state (`1220ms` total). |
| `6` | `waiting` | `6` | `[150, 150, 150, 150, 150, 260]` | Waiting for user approval / input (`1010ms` total). |
| `7` | `running` | `6` | `[120, 120, 120, 120, 120, 220]` | Agent actively executing task (`820ms` total). |
| `8` | `review` | `6` | `[150, 150, 150, 150, 150, 280]` | Task completed / ready for code review (`1030ms` total). |
| `9` | `look-at` (`0°..157.5°`) | `8` | Static directional pose (steps `0..7`) | V2 spritesheets only (`22.5°` per step clockwise from North). |
| `10` | `look-at` (`180°..337.5°`) | `8` | Static directional pose (steps `8..15`) | V2 spritesheets only (`22.5°` per step clockwise from South). |

### 5.3 16-Direction 360° Cursor/Target Look-At Math (`O6s` / `P6s`)
When the spritesheet has `11` rows (`supportsLookFrames`) and a cursor/target `(targetX, targetY)` is active relative to pet center `(centerX, centerY)`:
```js
const dx = targetX - centerX;
const dy = targetY - centerY;
if (Math.hypot(dx, dy) <= 1) return null; // 1px deadzone
const angleDeg = ((Math.atan2(dx, -dy) * 180) / Math.PI + 360) % 360; // 0° = Up/North, 90° = Right/East
const step = Math.round(angleDeg / 22.5) % 16; // 16 discrete directions (22.5° each)
const row = 9 + Math.floor(step / 8);          // row 9 for steps 0..7, row 10 for steps 8..15
const column = step % 8;                       // column 0..7
```
- **Background CSS Rendering (`b6s`)**:
  - `background-image: url(<spritesheet.webp>)`
  - `background-repeat: no-repeat`
  - `background-size: ${columns * 100}% ${rows * 100}%` (`800% 900%` for V1, `800% 1100%` for V2)
  - `background-position: ${(column / (columns - 1)) * 100}% ${(row / (rows - 1)) * 100}%`

### 5.4 The 9 Built-in Pets & Audio Assets (`Y$` in `app-initial-90eb42395b7d.js`)
1. `codex` — **Codex** (Built-in V2 WebP: `webview/assets/codex-spritesheet-v6-51045ae208c0.webp`, `1536×2288`)
2. `dewey` — **Dewey** (`dewey-spritesheet.webp` + `dewey.wav`)
3. `fireball` — **Fireball** (`fireball-spritesheet.webp` + `fireball.wav`)
4. `hoots` — **Hoots** (`hoots-spritesheet.webp` + `hoots.wav`)
5. `rocky` — **Rocky** (`rocky-spritesheet.webp` + `rocky.wav`)
6. `seedy` — **Seedy** (`seedy-spritesheet.webp` + `seedy.wav`)
7. `stacky` — **Stacky** (`stacky-spritesheet.webp` + `stacky.wav`)
8. `bsod` — **BSOD** (`bsod-spritesheet.webp` + `bsod.wav`, unlockable easter-egg pet)
9. `null-signal` — **Null Signal** (`null-signal-spritesheet.webp` + `null-signal.wav`, unlockable easter-egg pet)
- **Bundled Sound Effects**:
  - `webview/assets/codex-classic-c1049ed0fd75.wav` (default interaction sound for `codex` pet)
  - `webview/assets/codex-notification-239dc4b1b153.wav` (notification chime)

### 5.5 Desktop `AvatarOverlayManager` Window, Throw Momentum, & Magnetic Dock Physics (`main-CLu1A25j.js`)
- **Mascot Sizing**:
  - Default: `width = 112` px, `height = Math.ceil(112 / (192 / 208)) = 121` px (`wp = {width: 112, height: 121}`).
  - Configurable range (`avatar-overlay-mascot-width-px`): `min = 80` px (`80×87`), `max = 224` px (`224×243`).
  - Default screen placement: `24` px inset from bottom-right/top-right of `display.workArea` (`Dp`, `Vp = 24`).
- **Global Hotkey**:
  - Command ID: `openAvatarOverlay` ("Toggle Mini") — default `Alt+Space` on macOS, `Super+Alt+P` on Windows/Linux.
- **Spring Parameters (`je`)**:
  - `mass = 1`, `stiffness = 720`, `damping = 37.7`, `initialVelocity = 0`.
  - Overshoot factor: `Up = exp(-π * 37.7 / sqrt(4 * 1 * 720 - 37.7²)) = 0.03695`, `lle = Up / (1 - Up) = 0.03837`.
- **Throw & Bounce Momentum Physics (`startMomentum` in `class fm`)**:
  - Tick interval: `sm = 16` ms (capped delta `cm = 32` ms).
  - Velocity decay per step: `g = 0.88 ** (dt / 16)` (`Tle = 0.88`, `wle = 16`).
  - Screen edge bounce restitution: when clamped `anchor.x !== Math.round(next.x)`, `vx = -vx * 0.7` (`lm = 0.7`); same for `vy`.
  - Termination: stops when `elapsed >= 900` ms (`Dle = 900`) or `Math.hypot(vx, vy) < 65` px/s (`Ele = 65`).
- **Magnetic Dock Physics (`Sp`)**:
  - Attraction radius: `bp = 720` px.
  - Capture/dock radius: `xp = 72` px.
  - Minimum velocity alignment: `cos(theta) >= 0.2` (`Uce = 0.2`).
  - Magnetic acceleration magnitude: `a = 48000 * (1 - dist / 720)` px/s² (`Hce = 48000`) directed toward dock target center.
  - Dock entry velocity (`jp`): `{vx: dx * 2.8 - dy * 0.16, vy: dy * 2.8 + dx * 0.16}`.
- **Fade & Cleanup Timings**:
  - Fade-in duration: `xle = 300` ms (`om = 0.01` → `1.0` with cubic ease-out `1 - (1 - s)**3`).
  - Fade-out duration: `Sle = 120` ms.
  - Hidden window retention cleanup timer: `Ple = 600,000` ms (`10` minutes).
  - Detached display restore memory: `Nle = 10,000` ms (`10` seconds).
