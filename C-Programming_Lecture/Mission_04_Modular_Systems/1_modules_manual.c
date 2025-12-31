#include <stdio.h>

// ==========================================
// 📘 TRAINING MANUAL: SECTOR 4 - FUNCTIONS
// ==========================================

// COMMANDER'S NOTE:
// Up until now, we wrote all code inside 'main'.
// But what if we need to do the same task 50 times?
// We don't copy-paste 50 times. We build a FUNCTION (a reusable tool).

// 1. DEFINING A TOOL (The Function)
// We build functions OUTSIDE of main (usually above it).
// Structure:  ReturnType Name(Inputs) { ... }

int calculate_force(int mass, int acceleration) {
    int force = mass * acceleration;
    return force; // 'return' sends the result back to whoever asked for it.
}

// 2. VOID FUNCTIONS
// Some tools don't give back a number. They just DO something (like print).
// We call these 'void'.

void alert_system() {
    printf("⚠️ ALERT: High winds detected!\n");
    // No 'return' needed here.
}

int main() {
    printf("--- SYSTEM START ---\n");

    // 3. USING THE TOOL (Calling the function)
    // We can use our 'calculate_force' tool as many times as we want!
    
    int engine_1 = calculate_force(100, 5); // Uses the tool once
    int engine_2 = calculate_force(200, 3); // Uses the tool again with different numbers

    printf("Engine 1 Force: %d\n", engine_1);
    printf("Engine 2 Force: %d\n", engine_2);

    alert_system(); // Calls the void function

    return 0;
}