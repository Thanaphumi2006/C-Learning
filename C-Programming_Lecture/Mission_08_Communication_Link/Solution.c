/*
 * MISSION TASK: SECURITY CHECKPOINT (SOLVED)
 * ---------------------------------
 * TASK: Verify the user's credentials using String Comparison.
 */

#include <stdio.h>
#include <string.h> // Required for strcmp

int main() {
    
    char secret_code[] = "Alpha";
    char user_input[50];

    printf("--- SECURITY TERMINAL ---\n");
    printf("Enter Passcode: ");
    
    // scanf reads the input word and stores it in user_input
    // Note: No '&' is needed for string arrays in scanf
    scanf("%s", user_input);

    // ==========================================
    // SOLUTION LOGIC
    // ==========================================
    
    // 1. Check if the strings match
    // strcmp returns 0 if they are IDENTICAL.
    // It returns non-zero if they are different.
    
    if (strcmp(user_input, secret_code) == 0) {
        
        // 2. Success Message
        printf("✅ Access Granted. Welcome Commander.\n");
        
    } else {
        
        // 3. Failure Message
        printf("❌ ALARM! Intruder detected.\n");
    }

    return 0;
}