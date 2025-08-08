# Servo Sweep Task (TinkerCAD Simulation)

This project controls servo motors using an Arduino to perform a **Sweep** movement for two seconds and then fix them at a 90° position.  
The original task was for 6 servo motors, but the simulation was implemented with **2 servos** in TinkerCAD.

---

## 🎯 Project Idea
- Perform a **Sweep** motion (0° → 180° → 0°) for two seconds.
- Fix all servos at 90° after the sweep motion.
- The simulation was done with 2 servos due to TinkerCAD limitations, but the code supports up to 6 servos.

---

## 🛠️ Components Used in Simulation
- Arduino Uno R3
- 2x Micro Servo SG90
- Jumper wires

---

## 🔌 Wiring in Simulation
| Servo   | Signal Pin | VCC (Power) | GND (Ground) |
|---------|------------|-------------|--------------|
| Servo 1 | D3         | 5V          | GND          |
| Servo 2 | D5         | 5V          | GND          |

---

## 💻 Code
File name: `servo_sweep.ino`  
The code uses the `Servo.h` library and works for any number of servos (2 to 6).

---

## 🔗 TinkerCAD Simulation Link
[View the project on TinkerCAD](https://www.tinkercad.com/things/ciETSFyppIS-servo-sweep)

---

## 📷 Simulation Screenshots
Add images here showing the wiring and simulation running in TinkerCAD.
