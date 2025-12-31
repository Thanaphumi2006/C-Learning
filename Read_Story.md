# 🪐 MISSION CONTROL: OPERATION RED DUST

**CLASSIFIED // FOR EYES OF SYSTEMS ENGINEER ONLY**

---

## 🚨 The Situation
**Status:** CRITICAL FAILURE  
**Location:** Mars Surface (Sector 7G)  
**Target:** Rover *Pathfinder-X*

Engineer, welcome to the team. We have lost contact with the *Pathfinder* rover. Its primary navigation computer has crashed due to a memory corruption error. 

We cannot send a technician to Mars. We have to fix it from here.

**Your Mission:** You must write manual **C Code** to override the damaged systems, recalibrate the sensors, and bring the rover home. We use **C** because it provides direct control over the hardware—no safety wheels, no lag.

---

## 🧰 Standard Issue Equipment
Before you can uplink to the Red Planet, ensure your station is equipped:

1.  **VS Code (The Uplink Terminal)**
    * This is where you write the patch code.
2.  **GCC Compiler (The Translator)**
    * The Rover doesn't speak English. It speaks Binary. GCC translates your C code into machine language.
    * *Check installation by typing `gcc --version` in your terminal.*
3.  **Python (The Simulation Engine)**
    * We use this to run safety tests before beaming code to Mars.

---

## 🗺️ Mission Roadmap: Phase 1
Your first task is to repair the **Battery Monitoring System**. Follow these steps exactly:

| Stage | File Name | Objective |
| :--- | :--- | :--- |
| **1** | `1_training_manual.c` | **BRIEFING.** Read this file first. It explains how to declare variables (fuel tanks) and check sensors (printf). |
| **2** | `2_security_check.md` | **CLEARANCE.** Answer these logic questions to prove you are ready to touch the hardware. |
| **3** | `3_repair_task.c` | **REPAIR.** The code in this file is incomplete. Locate the `TODO` markers and write the fix. |
| **4** | `test_mission.py` | **SIMULATION.** Run this script to verify your repair works. |

---

