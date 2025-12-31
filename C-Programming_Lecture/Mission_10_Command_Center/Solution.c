
/*
 * MISSION 10: THE CAPSTONE PROJECT (SOLVED)
 * --------------------------------
 * TASK: Build the interactive Command Console for the Rover.
 */

#include <stdio.h>

// 1. FUNCTION PROTOTYPES
void show_status();
void run_diagnostics();
void scan_terrain();

int main() {
    int command = 0;
    int is_running = 1; // This acts as our "Light Switch" (1=ON, 0=OFF)

    printf("--- MARS ROVER 'PATHFINDER' ONLINE ---\n");

    // ==========================================
    // SOLUTION LOGIC
    // ==========================================
    
    // THE INFINITE LOOP
    // This will keep repeating forever until we manually stop it.
    while (is_running == 1) {

        printf("\n[MAIN MENU]\n");
        printf("1. Check Status\n");
        printf("2. Run Diagnostics\n");
        printf("3. Scan Terrain\n");
        printf("4. Shutdown\n");
        printf("Enter Command: ");
        
        // Read input
        scanf("%d", &command);

        // THE SWITCHBOARD
        switch (command) {
            
            case 1:
                show_status();
                break; // Essential: Stops the code from running Case 2!

            case 2:
                run_diagnostics();
                break;

            case 3:
                scan_terrain();
                break;

            case 4: 
                printf("Shutting down... Goodbye, Commander.\n");
                // This is the Kill Switch. By setting it to 0, 
                // the 'while' loop will fail next time it checks.
                is_running = 0;
                break;

            default:
                // If the user types "5" or "99", this runs.
                printf("❌ ERROR: Invalid Command.\n");
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
    printf("\n[DIAGNOSTICS]\nEngines: OK\nSensors: OK\nCamera:  OK\n");
}

void scan_terrain() {
    printf("\n[SCANNER]\nScanning sector... No hazards detected.\n");
}