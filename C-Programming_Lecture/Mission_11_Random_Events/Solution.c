/*
 * MISSION TASK: METEOR SHOWER SIMULATION (SOLVED)
 * --------------------------------------
 * TASK: Simulate a meteor shower and detect dangerous impacts.
 */

#include <stdio.h>
#include <stdlib.h> // Required for rand()
#include <time.h>   // Required for time()

int main() {
    
    // 1. SEED THE GENERATOR
    // We do this ONCE at the start of the program.
    // If we put this inside the loop, it might reset too fast and give duplicates.
    srand(time(NULL));
    

    printf("--- METEOR SHOWER DETECTED ---\n");

    // 2. THE LOOP
    for (int i = 1; i <= 5; i++) {
        
        // 3. GENERATE SIZE (1 to 100)
        // rand() % 100 gives 0-99.
        // We add +1 to shift it to 1-100.
        int size = (rand() % 100) + 1; 
        

        printf("Meteor #%d Size: %dkm -> ", i, size);

        // 4. CHECK DANGER
        if (size > 80) {
            printf("⚠️ SHIELD ACTIVE! (CRITICAL)\n");
        } else {
            printf("✅ Harmless.\n");
        }
    }

    return 0;
}