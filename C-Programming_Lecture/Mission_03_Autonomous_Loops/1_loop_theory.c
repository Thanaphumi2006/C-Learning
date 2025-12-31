/* * MISSION PHASE 3: LOOP MECHANICS
 * -------------------------------
 * GOAL: Teach the Rover to repeat tasks automatically.
 */

#include <stdio.h>

int main() {
    
    // --- PART 1: THE WHILE LOOP (The "Condition" Loop) ---
    // Use this when you don't know how long something will take.
    // Example: Charging the battery until it is full.
    
    int battery = 90;
    printf("--- CHARGING SEQUENCE ---\n");

    while (battery < 100) {
        printf("Battery at %d%%... Charging.\n", battery);
        battery += 5; // Increase battery by 5
    }
    printf("Battery Full: %d%%\n\n", battery);


    // --- PART 2: THE FOR LOOP (The "Counting" Loop) ---
    // Use this when you know exactly how many times to repeat.
    // Syntax: for (start; condition; update)
    
    printf("--- SECTOR SCAN ---\n");
    int sectors_to_scan = 4;

    for (int i = 1; i <= sectors_to_scan; i++) {
        printf("Scanning Sector #%d: Clear.\n", i);
    }
    printf("Scan Complete.\n\n");


    // --- PART 3: BREAK & CONTINUE (Flow Control) ---
    // break    = STOP the loop immediately.
    // continue = SKIP this round and go to the next one.

    printf("--- DRILLING TEST ---\n");
    
    for (int depth = 1; depth <= 5; depth++) {
        
        if (depth == 3) {
            printf("  [!] Hard Rock detected at %dm. Skipping layer.\n", depth);
            continue; // Jumps back to 'depth++'
        }
        
        if (depth == 5) {
            printf("  [!] Magma detected! EMERGENCY STOP.\n");
            break; // Exits the loop completely
        }

        printf("  Drilling depth: %dm\n", depth);
    }

    return 0;
}