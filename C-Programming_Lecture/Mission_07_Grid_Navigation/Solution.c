/*
 * MISSION TASK: ARTIFACT SEARCH (SOLVED)
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
    // SOLUTION LOGIC
    // ==========================================
    
    // 1. Outer Loop (ROWS): Goes Down (0 to 3)
    for (int row = 0; row < 4; row++) {
        
        // 2. Inner Loop (COLS): Goes Across (0 to 3)
        for (int col = 0; col < 4; col++) {
            
            // 3. CHECK: Is the value at this coordinate 2?
            if (terrain[row][col] == 2) {
                
                // 4. FOUND IT!
                printf("✅ Artifact detected at Row: %d, Col: %d\n", row, col);
                
                // Optional: Stop searching once we find it.
                // return 0; 
            }
        }
    }

    return 0;
}