/* * MISSION PHASE 6: FILE I/O (HARD DRIVE ACCESS)
 * ---------------------------------------------
 * GOAL: Write data to a text file and read it back.
 */

#include <stdio.h>

int main() {
    
    // --- PART 1: WRITING TO A FILE ---
    // 1. Create a File Pointer (The key to the file)
    FILE *file_pointer;

    // 2. Open the file in "w" (Write) mode.
    // WARNING: "w" wipes the file clean! Use "a" (Append) to add to the end.
    file_pointer = fopen("mission_log.txt", "w");

    // 3. Write data (fprintf works just like printf)
    if (file_pointer != NULL) {
        fprintf(file_pointer, "--- CAPTAIN'S LOG ---\n");
        fprintf(file_pointer, "Stardate: 2050.12.05\n");
        fprintf(file_pointer, "Status: Systems Normal.\n");
        
        printf("Log saved successfully.\n");
    }
    
    // 4. CLOSE THE FILE (Crucial!)
    // If you don't close, the data might not save.
    fclose(file_pointer);


    // --- PART 2: READING FROM A FILE ---
    char buffer[100]; // A container to hold the text line we read

    // 1. Open in "r" (Read) mode
    file_pointer = fopen("mission_log.txt", "r");

    if (file_pointer != NULL) {
        printf("\n--- READING LOG FROM DISK ---\n");
        
        // 2. Read line by line using fgets
        // fgets(container, size, file_source)
        while (fgets(buffer, 100, file_pointer) != NULL) {
            printf("%s", buffer);
        }
    } else {
        printf("Error: Could not find the file!\n");
    }

    fclose(file_pointer);

    return 0;
}