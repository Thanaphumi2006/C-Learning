/*
 * MISSION TASK: METEOR SHOWER SIMULATION
 * --------------------------------------
 * TASK: Simulate a meteor shower and detect dangerous impacts.
 * LOGIC:
 * 1. Seed the random generator.
 * 2. Loop 5 times (for 5 meteors).
 * 3. Generate a random size (1-100).
 * 4. If size > 80, print "CRITICAL ALERT!". Else, print "Safe."
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // 1. SEED THE GENERATOR
    // TODO: Write the srand line here.
    

    printf("--- METEOR SHOWER DETECTED ---\n");

    // 2. THE LOOP
    // Create a loop that runs 5 times.
    for (int i = 1; i <= 5; i++) {
        
        // 3. GENERATE SIZE
        // TODO: Create an integer 'size' that is a random number between 1 and 100.
        // Hint: (rand() % ???) + 1
        int size = 0; 
        

        printf("Meteor #%d Size: %dkm -> ", i, size);

        // 4. CHECK DANGER
        // TODO: If size is > 80, print "SHIELD ACTIVE!".
        //       Else, print "Harmless.".
        

        printf("\n");
    }

    return 0;
}