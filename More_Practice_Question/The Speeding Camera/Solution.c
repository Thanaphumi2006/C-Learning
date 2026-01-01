#include <stdio.h>

int main() {
    int limit = 100, speed;
    
    // 1. Input Validation Loop
    do {
        printf("Enter Speed: ");
        scanf("%d", &speed);
        if (speed < 0) printf("Invalid. Try again.\n");
    } while (speed < 0);

    // 2. Fine Logic
    if (speed <= limit) {
        printf("Safe\n");
    } else if (speed <= limit + 20) {
        printf("$50 Fine\n");
    } else {
        printf("$150 Fine\n");
    }
    return 0;
}