#include <stdio.h>

void printPattern() {
    // Loop from 1 to 20
    for (int i = 1; i <= 20; i++) {
        
        // If number is divisible by 5 (remainder is 0)
        if (i % 5 == 0) {
            printf("X ");
        } 
        // Otherwise, print the number
        else {
            printf("%d ", i);
        }
    }
}

int main() {
    printPattern();
    printf("\n");
    return 0;
}