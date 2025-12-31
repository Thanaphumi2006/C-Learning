/*
 * MISSION TASK: BLACK BOX RECORDER
 * --------------------------------
 * TASK: The Rover is crashing. Save the sensor data to the hard drive immediately.
 * GOAL: Create a file named "black_box.txt" and write the status to it.
 */

#include <stdio.h>

int main() {
    
    int battery_left = 2;
    char last_message[] = "MAYDAY! MAYDAY!";

    printf("--- INITIATING EMERGENCY SAVE ---\n");

    // ==========================================
    // TODO: WRITE THE FILE I/O LOGIC
    // ==========================================

    // 1. Declare a FILE pointer (e.g., FILE *f;)


    // 2. Open "black_box.txt" in "w" (Write) mode.
    // Check if the pointer is NULL (just in case).


    // 3. Use fprintf to write these exact 3 lines to the file:
    //    Line 1: CRITICAL FAILURE REPORT
    //    Line 2: Battery Level: 2%
    //    Line 3: Message: MAYDAY! MAYDAY!
    
    // Hint: fprintf(f, "Battery Level: %d%%\n", battery_left);
    // (Note: We use %% to print a literal percent sign)


    // 4. Close the file.


    printf("Data dump complete. System shutdown.\n");

    return 0;
}