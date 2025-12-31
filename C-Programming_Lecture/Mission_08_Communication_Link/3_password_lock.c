/*
 * MISSION TASK: SECURITY CHECKPOINT
 * ---------------------------------
 * TASK: Verify the user's credentials using String Comparison.
 */

#include <stdio.h>
#include <string.h>

int main() {
    
    char secret_code[] = "Alpha";
    char user_input[50];

    printf("--- SECURITY TERMINAL ---\n");
    printf("Enter Passcode: ");
    
    // scanf reads a word (until space)
    scanf("%s", user_input);

    // ==========================================
    // TODO: WRITE THE LOGIC BELOW
    // ==========================================
    
    // 1. Check if 'user_input' is the same as 'secret_code'.
    // HINT: Use strcmp(a, b) == 0
    
    
        // 2. IF MATCH: Print "Access Granted. Welcome Commander."
        
    
        // 3. ELSE: Print "ALARM! Intruder detected."
        

    return 0;
}