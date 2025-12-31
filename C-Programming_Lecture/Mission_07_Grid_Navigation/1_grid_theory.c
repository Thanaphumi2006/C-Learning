/* * MISSION PHASE 7: 2D ARRAYS (GRID SYSTEMS)
 * -------------------------------------------
 * GOAL: Navigate a grid using Rows and Columns.
 */

#include <stdio.h>

int main() {
    
    // --- PART 1: THE MAP ---
    // A 2D array is declared as [ROWS][COLUMNS].
    // Think of it like a spreadsheet or a chess board.
    
    // 0 = Empty Space
    // 1 = Rock
    // 9 = The Base (Target)
    
    int sector_map[3][3] = {
        {0, 0, 1},  // Row 0
        {0, 9, 0},  // Row 1
        {1, 0, 0}   // Row 2
    };

    // --- PART 2: ACCESSING SPECIFIC SPOTS ---
    // Syntax: map[ROW][COLUMN] -> map[Y][X]
    
    printf("Top Right Corner: %d\n", sector_map[0][2]); // Row 0, Col 2
    printf("The Base (Center): %d\n", sector_map[1][1]); // Row 1, Col 1


    // --- PART 3: SCANNING THE WHOLE GRID ---
    // We need a NESTED LOOP (A loop inside a loop).
    // The outer loop handles the "Down" (Rows).
    // The inner loop handles the "Across" (Columns).

    printf("\n--- SECTOR SCAN INITIATED ---\n");

    for (int row = 0; row < 3; row++) {
        
        printf("Scanning Row %d: ", row);
        
        for (int col = 0; col < 3; col++) {
            
            // Print the value at this specific coordinate
            printf("%d ", sector_map[row][col]);
        }
        
        printf("\n"); // New line after finishing a row
    }

    return 0;
}