/*
 * MISSION TASK: BLACK BOX RECORDER (SOLVED)
 * --------------------------------
 * TASK: The Rover is crashing. Save the sensor data to the hard drive immediately.
 */

#include <stdio.h>

int main() {
    
    int battery_left = 2;
    char last_message[] = "MAYDAY! MAYDAY!";

    printf("--- INITIATING EMERGENCY SAVE ---\n");

    // ==========================================
    // SOLUTION LOGIC
    // ==========================================

    // 1. Declare the FILE pointer
    // This acts as the "key" to the file.
    FILE *fPointer;


    // 2. Open the file in "w" (Write) mode
    // "w" creates a new file. If it already exists, it erases the old one!
    fPointer = fopen("black_box.txt", "w");

    // Safety Check: Did the file open correctly?
    if (fPointer == NULL) {
        printf("Error: Could not access hard drive!\n");
        return 1; // Exit with error
    }


    // 3. Write the data using fprintf
    // It works exactly like printf, but the first argument is the file pointer.
    
    fprintf(fPointer, "CRITICAL FAILURE REPORT\n");
    
    // Note: To print a literal '%' symbol, we must type '%%'
    fprintf(fPointer, "Battery Level: %d%%\n", battery_left);
    
    // Note: We use %s to print the string variable
    fprintf(fPointer, "Message: %s\n", last_message);


    // 4. Close the file
    // IMPORTANT: The data is not actually saved to the disk until you close it!
    fclose(fPointer);

    printf("Data dump complete. Check 'black_box.txt' in your folder.\n");

    return 0;
}