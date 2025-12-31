/*
 * MISSION TASK: ENGINE SYNC
 * -------------------------
 * TASK: The port and starboard engines are mismatched.
 * GOAL: Create a function that swaps their values using pointers.
 */

#include <stdio.h>

// PROTOTYPE
// We accept pointers (int *) because we need to modify the original variables.
void swap_engines(int *a, int *b);


int main() {
    
    int port_engine = 10;      // Should be 100
    int starboard_engine = 100; // Should be 10

    printf("--- BEFORE FIX ---\n");
    printf("Port: %d%%\n", port_engine);
    printf("Starboard: %d%%\n", starboard_engine);

    // ==========================================
    // TODO: CALL THE FUNCTION
    // ==========================================
    
    // 1. Call swap_engines.
    // HINT: You must send the ADDRESSES of the variables using '&'.
    
    


    printf("\n--- AFTER FIX ---\n");
    printf("Port: %d%%\n", port_engine);          // Expected: 100
    printf("Starboard: %d%%\n", starboard_engine); // Expected: 10

    return 0;
}

// ==========================================
// TODO: DEFINE THE LOGIC
// ==========================================
void swap_engines(int *a, int *b) {
    
    // GOAL: Swap the values at address 'a' and address 'b'.
    // REMEMBER: Use *a and *b to access the values.
    
    // 1. Create a temporary integer named 'temp' and save the value of *a.

    // 2. Change the value of *a to equal *b.

    // 3. Change the value of *b to equal 'temp'.

}