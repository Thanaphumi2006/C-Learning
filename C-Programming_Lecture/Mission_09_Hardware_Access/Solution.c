/*
 * MISSION TASK: ENGINE SYNC (SOLVED)
 * -------------------------
 * TASK: The port and starboard engines are mismatched.
 * GOAL: Create a function that swaps their values using pointers.
 */

#include <stdio.h>

// PROTOTYPE
void swap_engines(int *a, int *b);

int main() {
    
    int port_engine = 10;
    int starboard_engine = 100;

    printf("--- BEFORE FIX ---\n");
    printf("Port: %d%%\n", port_engine);
    printf("Starboard: %d%%\n", starboard_engine);

    // ==========================================
    // SOLUTION LOGIC 1: CALLING THE FUNCTION
    // ==========================================
    
    // We send the ADDRESSES of the variables using the '&' symbol.
    // If we just sent (port_engine, starboard_engine), the function would only
    // swap copies, and the real variables wouldn't change.
    swap_engines(&port_engine, &starboard_engine);


    printf("\n--- AFTER FIX ---\n");
    printf("Port: %d%%\n", port_engine);
    printf("Starboard: %d%%\n", starboard_engine);

    return 0;
}

// ==========================================
// SOLUTION LOGIC 2: THE FUNCTION
// ==========================================
void swap_engines(int *a, int *b) {
    
    // 1. Save the value of 'a' into a temp box
    // *a means "The value inside the address a"
    int temp = *a;

    // 2. Overwrite 'a' with the value of 'b'
    *a = *b;

    // 3. Overwrite 'b' with the saved value (temp)
    *b = temp;
    
    // Note: We don't need 'return' because we modified the memory directly.
}