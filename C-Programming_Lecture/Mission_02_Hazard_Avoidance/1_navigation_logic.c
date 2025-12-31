/* * MISSION PHASE 2: NAVIGATION LOGIC
 * ---------------------------------
 * GOAL: Teach the Rover to "Think" using Conditions.
 */

#include <stdio.h>

int main() {

    // --- SENSOR INPUTS ---
    int battery_level = 15;
    int distance_to_rock = 100; // meters
    int is_solar_panels_open = 1; // 1 = True (Yes), 0 = False (No)

    printf("--- SYSTEM DIAGNOSTICS ---\n");

    // --- PART 1: BASIC DECISIONS (if / else) ---
    // The computer checks if the condition inside () is TRUE.
    
    if (battery_level == 100) {
        printf("Battery is Full.\n");
    } 
    else if (battery_level > 20) {
        printf("Battery is nominal.\n");
    }
    else {
        // If none of the above are true, this runs.
        printf("WARNING: Low Battery!\n");
    }

    // --- PART 2: LOGICAL OPERATORS (&&, ||) ---
    // && (AND) -> Both sides must be true.
    // || (OR)  -> Only one side needs to be true.
    // !  (NOT) -> Reverses the result (True becomes False).

    printf("\n--- MOVEMENT CHECK ---\n");

    // SCENARIO: Can we move forward?
    // We need battery > 10 AND the path must be clear (distance > 5)
    
    if (battery_level > 10 && distance_to_rock > 5) {
        printf("Path Clear. Moving Forward.\n");
    }
    else {
        printf("Cannot Move! Obstacle detected or Battery Low.\n");
    }

    // --- PART 3: THE EQUALITY TRAP ---
    // WARNING: 
    // '='  sets a value (x = 5)
    // '==' compares values (is x equal to 5?)
    
    if (is_solar_panels_open == 0) { 
        printf("Alert: Solar Panels are closed.\n");
    }

    return 0;
}