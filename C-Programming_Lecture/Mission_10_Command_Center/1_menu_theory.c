/* * MISSION PHASE 10: THE GAME LOOP
 * ---------------------------------
 * GOAL: Create a menu that handles multiple commands.
 */

#include <stdio.h>

int main() {
    
    int command;
    int system_online = 1; // 1 = True, 0 = False

    printf("--- SYSTEM ONLINE ---\n");

    // --- PART 1: THE INFINITE LOOP ---
    // This loop runs forever until 'system_online' becomes 0.
    // This is how video games and operating systems work!
    
    while (system_online == 1) {
        
        printf("\nSelect Option: (1) Dance, (2) Sleep, (3) Quit: ");
        scanf("%d", &command);

        // --- PART 2: THE SWITCH STATEMENT ---
        // Instead of writing 50 "else if" blocks, we use 'switch'.
        // It jumps directly to the matching 'case'.
        
        switch (command) {
            case 1:
                printf("💃 The Rover is dancing!\n");
                break; // 'break' stops it from falling into Case 2
            
            case 2:
                printf("💤 Zzzzz...\n");
                break;
                
            case 3:
                printf("👋 Shutting down.\n");
                system_online = 0; // This breaks the while loop!
                break;
                
            default:
                // 'default' runs if the user types something weird (like 99)
                printf("❌ Unknown Command.\n");
        }
    }

    return 0;
}