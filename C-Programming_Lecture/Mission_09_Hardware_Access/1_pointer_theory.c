/* * MISSION PHASE 9: POINTERS (MEMORY ADDRESSES)
 * --------------------------------------------
 * GOAL: Read and Write data using Memory Addresses.
 */

#include <stdio.h>

int main() {
    
    // --- PART 1: THE ADDRESS (&) ---
    // Every variable has a value (100) and an address (0x123abc).
    // Think of it like a House.
    // Value = Who lives inside.
    // Address = The number painted on the door.
    
    int battery = 100;
    
    printf("Value:   %d\n", battery);
    printf("Address: %p\n", &battery); // %p prints the hex address


    // --- PART 2: THE POINTER (*) ---
    // A pointer is a variable that stores an ADDRESS, not a number.
    
    int *tool = &battery; // "tool" now points to battery's location.

    printf("Tool points to: %p\n", tool);


    // --- PART 3: DEREFERENCING (THE MAGIC) ---
    // We can travel to the address and change the value inside.
    // *tool means "Go to the address and open the box".
    
    printf("\n--- HACKING MEMORY ---\n");
    
    *tool = 50; // Go to the address of battery and change it to 50.
    
    // Notice: We changed 'battery' without touching the word 'battery'!
    printf("New Battery Value: %d\n", battery);

    return 0;
}