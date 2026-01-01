#include <stdio.h>

int checkPassword(int input[], int correct[], int size) {
    // TODO: Loop through both arrays.
    // If ANY number does not match, return 0 immediately.
    
    return 1; // Return 1 only if loop finishes safely
}

int main() {
    int correct[] = {1, 2, 3};
    int input[] = {1, 2, 3}; // Try changing this to {1, 0, 3} to test failure
    
    int result = checkPassword(input, correct, 3);
    
    if(result == 1) printf("Access Granted (True)\n");
    else printf("Access Denied (False)\n");
    
    return 0;
}