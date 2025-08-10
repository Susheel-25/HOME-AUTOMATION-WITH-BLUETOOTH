**COMPANY:** CODTECH IT SOLUTIONS

**NAME:** KUNTUMALLA BUGGA SUSHEEL

**INTERN ID:** CT04DZ1724

**DOMAIN:** Embedded Systems

**DURATION:** 4 WEEKS

**MENTOR:** NEELA SANTOSH

**DESCRIPTION:**
📌 Task 2: Bluetooth-Controlled Home Automation System 
This project demonstrates a **Bluetooth-controlled home automation system** using **Arduino UNO**.  
In **Tinkercad**, Bluetooth modules (like HC-05) are not available, so the **Serial Monitor** is used to simulate Bluetooth communication.

---
## 🔧 Components Used
- Arduino UNO
- 2 LEDs (representing devices)
- 2 × 220Ω Resistors
- Breadboard & Jumper Wires
- *(Real hardware version)* HC-05 Bluetooth Module & Relay Module

---

## ⚙ Features
- Control devices using Bluetooth commands (simulated via Serial Monitor in Tinkercad)
- Commands:
  - `ON1` → Turns ON Device 1
  - `OFF1` → Turns OFF Device 1
  - `ON2` → Turns ON Device 2
  - `OFF2` → Turns OFF Device 2

---

## 🛠 Circuit Diagram
![Image](https://github.com/user-attachments/assets/f5455e2b-e730-4037-922c-2d6bb109ce02)

---

## 🔌 Connections
| Component       | Arduino Pin |
|----------------|-------------|
| LED 1          | D8          |
| LED 2          | D7          |
| GND            | GND         |

---

## ▶ How to Run in Tinkercad
1. Open the project in [Tinkercad](https://www.tinkercad.com/).
2. Connect LEDs to pins **8** & **7** with resistors to GND.
3. Upload the Arduino code
4. Open **Serial Monitor** and send:
   - `ON1` → Turn ON LED 1  
   - `OFF1` → Turn OFF LED 1  
   - `ON2` → Turn ON LED 2  
   - `OFF2` → Turn OFF LED 2  

---

## 📱 Real Hardware Version
- Replace LEDs with Relay Modules + Appliances.
- Connect **HC-05 Bluetooth Module**:
  - HC-05 TX → Arduino RX (Pin 0)
  - HC-05 RX → Arduino TX (Pin 1)
  - VCC → 5V
  - GND → GND
- Use any Bluetooth Terminal app on your phone to send the same commands.
## 📷 Output Preview:
<img width="1920" height="1200" alt="Image" src="https://github.com/user-attachments/assets/96e1eb24-2e63-49d5-9716-06767807ca9a" />
