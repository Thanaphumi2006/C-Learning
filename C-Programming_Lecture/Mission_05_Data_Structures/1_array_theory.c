/* * MISSION PHASE 5: ARRAYS (DATA BANKS)
 * ------------------------------------
 * GOAL: Store lists of data using Arrays.
 */

#include <stdio.h>

int main() {
    
    // --- PART 1: DECLARING AN ARRAY ---
    // Instead of: int rock1 = 10, rock2 = 20...
    // We create a "Shelf" with 5 slots.
    
    int rock_weights[5] = {10, 20, 35, 40, 50};

    // --- PART 2: ACCESSING DATA (INDEXING) ---
    // WARNING: Computers start counting at 0.
    // [0] [1] [2] [3] [4]
    
    printf("First Rock: %d kg\n", rock_weights[0]); // Index 0 is the first item
    printf("Last Rock:  %d kg\n", rock_weights[4]); // Index 4 is the 5th item

    // --- PART 3: MODIFYING DATA ---
    rock_weights[2] = 99; // Change the 3rd item
    printf("New weight of 3rd rock: %d kg\n", rock_weights[2]);


    // --- PART 4: LOOPING THROUGH ARRAYS ---
    // This is the most common pattern in C.
    // We use 'i' as the index number.
    
    printf("\n--- FULL INVENTORY SCAN ---\n");
    
    int total_weight = 0;

    for (int i = 0; i < 5; i++) {
        printf("Slot [%d]: %d kg\n", i, rock_weights[i]);
        
        // We can do math with array items
        total_weight += rock_weights[i];
    }

    printf("Total Cargo Weight: %d kg\n", total_weight);

    return 0;
}