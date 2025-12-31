/* * MISSION PHASE 11: CHAOS THEORY (RANDOMNESS)
 * -------------------------------------------
 * GOAL: Generate unpredictable data for simulations.
 */

#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    
    // --- PART 1: THE PROBLEM ---
    // If you just run rand(), it gives the SAME number every time.
    // Try running this code twice. You will see the exact same "random" number.
    // printf("Predictable: %d\n", rand());


    // --- PART 2: THE SEED (srand) ---
    // To get different numbers, we must "Seed" the generator with a changing value.
    // The current time (in seconds) is always changing, so it's a perfect seed.
    
    srand(time(NULL)); // "Seed Random" using current Time
    

    // --- PART 3: GENERATING A RANGE ---
    // rand() gives a huge number (0 to 32,767+).
    // We use Modulo (%) to cut it down to size.
    
    // Example: A coin flip (0 or 1)
    int coin = rand() % 2; 
    
    // Example: A dice roll (1 to 6)
    // rand() % 6 gives 0-5. We add 1 to make it 1-6.
    int dice = (rand() % 6) + 1;


    printf("--- SIMULATION REPORT ---\n");
    if (coin == 0) {
        printf("Coin Flip: TAILS\n");
    } else {
        printf("Coin Flip: HEADS\n");
    }
    
    printf("Dice Roll: %d\n", dice);

    return 0;
}