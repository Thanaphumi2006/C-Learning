/*
 * MISSION TASK: ARTIFACT SEARCH
 * -----------------------------
 * TASK: The satellite detected an Alien Artifact (Value: 2) in this sector.
 * GOAL: Find the coordinates (Row, Col) of the artifact.
 */

#include <stdio.h>

int main() {
    
    // THE MAP DATA
    // 0 = Sand, 1 = Rock, 2 = ARTIFACT
    int terrain[4][4] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 2, 1}   // It's hidden down here!
    };

    printf("--- SEARCHING SECTOR ---\n");

    // ==========================================
    // TODO: WRITE THE NESTED LOOPS
    // ==========================================
    
    // 1. Create an Outer Loop for 'row' (0 to 3)
    
        // 2. Create an Inner Loop for 'col' (0 to 3)
        
            // 3. CHECK: Is terrain[row][col] equal to 2?
            
                // 4. IF YES: Print "Artifact found at Row: %d, Col: %d\n"
                // Optional: Use 'return 0' to stop searching immediately.


    return 0;
}