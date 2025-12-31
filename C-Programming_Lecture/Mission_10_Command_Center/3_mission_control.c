/*
 * MISSION 10: THE CAPSTONE PROJECT
 * --------------------------------
 * TASK: Build the interactive Command Console for the Rover.
 * GOAL: Use Functions, Loops, and Logic together.
 */

#include <stdio.h>

// 1. FUNCTION PROTOTYPES
// We declare these up here so 'main' knows they exist.
void show_status();
void run_diagnostics();
void scan_terrain();

int main() {
    int command = 0;
    int is_running = 1;

    printf("--- MARS ROVER 'PATHFINDER' ONLINE ---\n");

    // ==========================================
    // TODO: WRITE THE MAIN LOOP
    // ==========================================
    
    // 1. Create a while loop that runs as long as 'is_running' is 1.
    while (is_running == 1) {

        // 2. Print the Menu Options:
        //    1. Check Status
        //    2. Run Diagnostics
        //    3. Scan Terrain
        //    4. Shutdown
        printf("\n[MAIN MENU] Enter Command: ");
        
        // 3. Read the user's input into 'command'
        scanf("%d", &command);

        // 4. Create a Switch Statement
        switch (command) {
            
            // Case 1: Call show_status()
            case 1:
                show_status();
                break;

            // Case 2: Call run_diagnostics()
            // (Add code here)
            

            // Case 3: Call scan_terrain()
            // (Add code here)


            // Case 4: Shutdown
            // Print "Goodbye" and set is_running to 0
            case 4: 
                printf("Shutting down... Goodbye Commander.\n");
                is_running = 0;
                break;

            // Default: Print "Invalid Command"
            default:
                printf("❌ Invalid Command.\n");
        }
    }

    return 0;
}

// ==========================================
// HELPER FUNCTIONS
// ==========================================

void show_status() {
    printf("\n[STATUS]\nBattery: 98%%\nSignal: Strong\n");
}

void run_diagnostics() {
    printf("\n[DIAGNOSTICS]\nEngines: OK\nSensors: OK\n");
}

void scan_terrain() {
    printf("\n[SCANNER]\nScanning sector... Path Clear.\n");
}