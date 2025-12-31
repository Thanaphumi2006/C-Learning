/*
 * MISSION TASK: TERRAIN ANALYSIS
 * ------------------------------
 * TASK: The Rover scanned 6 locations. Find the HIGHEST elevation.
 * DATA: {50, 120, 85, 400, 210, 90}
 */

#include <stdio.h>

int main() {
    
    // The scan data (Elevations in meters)
    int terrain[6] = {50, 120, 85, 400, 210, 90};
    
    // We assume the first one is the highest to start with.
    int max_elevation = terrain[0];

    printf("--- ANALYZING TERRAIN DATA ---\n");

    // ==========================================
    // TODO: WRITE THE SCANNING LOOP
    // ==========================================
    
    // TASK: Create a 'for' loop that goes from i = 0 to 5.
    // Inside the loop:
    //    1. Check if terrain[i] is greater than max_elevation.
    //    2. If it is, update max_elevation to be terrain[i].
    
    // Hint: for (int i = 0; i < 6; i++) { ... }



    // ==========================================
    // REPORT
    // ==========================================
    printf("Highest Peak Detected: %d meters\n", max_elevation);

    return 0;
}