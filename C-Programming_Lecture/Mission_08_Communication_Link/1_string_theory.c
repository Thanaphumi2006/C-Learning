/* * MISSION PHASE 8: STRING THEORY (TEXT PROCESSING)
 * ------------------------------------------------
 * GOAL: Compare passwords and join text fragments.
 */

#include <stdio.h>
#include <string.h> // <--- REQUIRED for string tools!

int main() {
    
    // --- PART 1: COMPARING STRINGS ---
    // In C, you CANNOT say: if (str1 == str2)
    // You must use: strcmp(str1, str2)
    // strcmp returns 0 if they are identical.
    
    char password_input[] = "Mars2050";
    char correct_pass[] = "Mars2050";

    if (strcmp(password_input, correct_pass) == 0) {
        printf("✅ Access Granted.\n");
    } else {
        printf("❌ Access Denied.\n");
    }


    // --- PART 2: COMBINING STRINGS (CONCATENATION) ---
    // strcat(destination, source) -> "String CATch" (glues them together)
    
    char message[50] = "Status: ";
    char status[] = "Critical";

    strcat(message, status); // Adds "Critical" to the end of "Status: "
    
    printf("\nTransmission: %s\n", message);


    // --- PART 3: STRING LENGTH ---
    // strlen() counts the letters (excluding the invisible null terminator)
    
    printf("Message Length: %lu characters\n", strlen(message));

    return 0;
}