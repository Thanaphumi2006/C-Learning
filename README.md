# Welcome to C Programming: The Zero-to-Hero Course

Welcome! This repository is designed to teach you the C programming language using **VS Code**. 

Unlike a boring textbook, this course is interactive. You will read code, break code, fix code, and run automated tests to prove your solutions work.

---

## Prerequisites (Install These First)

Before you start Lesson 1, make sure you have these tools ready:

1.  **Visual Studio Code** (The Editor)
    * [Download here](https://code.visualstudio.com/)
2.  **C/C++ Extension for VS Code**
    * Search for "C/C++" by Microsoft in the VS Code Extensions tab and install it.
3.  **GCC Compiler**
    * **Windows:** Install MinGW or use WSL.
    * **Mac:** Run `xcode-select --install` in your terminal.
4.  **Python** (For the Auto-Grader)
    * We use a simple Python script to grade your homework automatically.
    * [Download Python](https://www.python.org/downloads/)

---

## How This Course is Structured

Each folder in this repository represents one week or topic (e.g., `Mission_01_Sensor_Calibration`). inside each folder, you will find 4 specific steps:

| Step | File | What you do |
| :--- | :--- | :--- |
| **1** | `1_lecture.c` | **READ & RUN.** This is your textbook. Read the comments, run the code, and see what happens. |
| **2** | `2_quiz.md` | **THINK.** A short concept check to make sure you understood the lecture. |
| **3** | `3_homework.c` | **CODE.** This file is incomplete. You must fill in the `TODO` sections to make it work. |
| **4** | `test_homework.py` | **VERIFY.** Run this script to see if your homework is correct. |

---

# 🪐 Mars Rover Mission: C Programming Course Syllabus

**Mission Objective:** Master the C programming language by building the operating system for the "Pathfinder" Mars Rover.
**Prerequisites:** None. (Just a text editor and a compiler).

---

## 🟢 Phase 1: The Awakening (Basics)

| Mission ID | Title | Concept | Story Objective |
| :--- | :--- | :--- | :--- |
| **Mission 01** | **Establish Link** | `printf`, Variables | Boot up the Rover's main CPU and transmit the first signal ("Hello Mars"). |
| **Mission 02** | **Navigation Systems** | `if`, `else`, Logic | Program the hazard avoidance system to detect rocks vs. clear paths. |
| **Mission 03** | **Automation** | Loops (`while`, `for`) | Automate the solar panel deployment sequence using countdown loops. |
| **Mission 04** | **Modular Systems** | Functions | Create reusable "tools" to calculate distance and battery usage. |

---

## 🟡 Phase 2: Discovery & Mapping (Data Handling)

| Mission ID | Title | Concept | Story Objective |
| :--- | :--- | :--- | :--- |
| **Mission 05** | **Terrain Analysis** | Arrays (Lists) | Process a list of elevation data to find the highest peak in the sector. |
| **Mission 06** | **Data Logging** | File I/O (`fopen`) | **EMERGENCY:** Save vital sensor data to a text file before the battery dies. |
| **Mission 07** | **Grid Navigation** | 2D Arrays (Matrices) | Scan a satellite grid map to locate hidden alien artifacts. |
| **Mission 08** | **Secure Comm-Link** | Strings (`<string.h>`) | Verify security credentials using text comparison to prevent hacking. |

---

## 🔴 Phase 3: Advanced Systems (Memory & Logic)

| Mission ID | Title | Concept | Story Objective |
| :--- | :--- | :--- | :--- |
| **Mission 09** | **Hardware Access** | Pointers (`&` Address) | Hack the memory directly to fix a crossed-wire engine glitch. |
| **Mission 10** | **The Command Center** | Capstone Project | Build the interactive Main Menu using Switch statements and Loops. |
| **Mission 11** | **Chaos Theory** | Randomness (`rand`) | Simulate unpredictable meteor showers to test the shield logic. |

---


## The Workflow: How to Study

### Step 1: Open the Lesson
Open `Lesson_01_Variables/1_lecture.c` in VS Code. Read the green comments—they explain *why* we are doing things.

### Step 2: Run the Lecture Code
Download the extensions from VS code by type : franneck94.c-cpp-runner to be able the run the C code Also Python code runner for test grading

### Final thought
If some file not work just try to save it first Or try to use command in terminal by type "cd ../FOLDERNAME" (eg : cd ../Mission_03_Autonomous_Loops)
Have fun learning C-Programming language the next file will be the story theme for this C course, making it more fun to learn (I think), NOW YOU CAN CONTINUED TO (Read_Story.md)