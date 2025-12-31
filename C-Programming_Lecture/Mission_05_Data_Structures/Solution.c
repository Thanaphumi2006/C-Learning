/*
 * MISSION TASK: TERRAIN ANALYSIS (SOLVED)
 * ------------------------------
 * TASK: The Rover scanned 6 locations. Find the HIGHEST elevation.
 */

#include <stdio.h>

int main() {
    
    // The scan data (Elevations in meters)
    int terrain[6] = {50, 120, 85, 400, 210, 90};
    
    // We assume the first one is the highest to start with.
    int max_elevation = terrain[0];

    printf("--- ANALYZING TERRAIN DATA ---\n");

    // ==========================================
    // SOLUTION LOGIC
    // ==========================================
    
    // Loop from 0 to 5 (Index 0 to Index 5)
    // Note: The array size is 6, so we use 'i < 6'
    for (int i = 0; i < 6; i++) {
        
        // 1. Check if the current rock is taller than our current max
        if (terrain[i] > max_elevation) {
            
            // 2. If yes, update our max to be this new number
            max_elevation = terrain[i];
        }
    }

    // ==========================================
    // REPORT
    // ==========================================
    printf("Highest Peak Detected: %d meters\n", max_elevation);

    return 0;
}