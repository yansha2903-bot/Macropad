# Custom 4-Key Macropad

This repository contains the complete hardware design and firmware for a custom, fully functional buillt macropad based on the Seeed Studio XIAO RP2040 microcontroller.

---

## Repository Structure

* **`KiCad`** — KiCad project files:
* `*.kicad_pro` — KiCad project configuration.
* `*.kicad_sch` — Electrical schematic.
* `*.kicad_pcb` — Custom PCB routing and layout.
* `*Macropad-DrillFiles.zip` - Drill files.
* `*Macropad-Gerbers.zip` - Gerbers.
* **`Firmware/`** — Microcontroller source code:
* `*.ino` — Arduino IDE sketch for USB-HID keyboard emulation.
* **`Images`** - Images of my project.

---

## Hardware Features

* **Microcontroller:** Seeed Studio XIAO RP2040 (running as a USB-HID keyboard).
* **Switches:** 4x mechanical Cherry MX style switches aligned in a horizontal row.
* **Diodes:** 4x SMD 1N4148 (SOD-123) diodes to prevent ghosting during multi-key presses.
* **Custom PCB Design:** The board shape features custom geometric triangular "ears" on the top edge of the `Edge.Cuts` layer.
* **Pinout Configuration:**
* **Switch Inputs:** Connected to digital pins `D0`, `D1`, `D2`, and `D3`.
* **Common Diode Return:** Connected to digital pin `D9`.

---

## Firmware Details

The firmware is written in C++ using the Arduino IDE and the native `<Keyboard.h>` library.

### Key Functionality:
* **USB-HID Emulation:** The computer automatically recognizes the macroplat as a standard USB keyboard without external drivers.
* **State Tracking:** Uses a state array to compare the current state of each switch to its previous state, preventing duplicate inputs.
* **Debounce Filter:** Features a 15ms software delay to filter out mechanical contact noise.
* **Default Keymap:** Mapped to output characters `'1'`, `'2'`, `'3'`, and `'4'` respectively.

<img width="2560" height="1404" alt="2026-07-17_15-21-05" src="https://github.com/user-attachments/assets/cf9648f1-b029-446f-a44b-540638d2f128" />
<img width="2560" height="1398" alt="2026-07-17_15-32-29" src="https://github.com/user-attachments/assets/8bd2eb5b-1c80-4853-a9ca-56f9bd33188a" />


