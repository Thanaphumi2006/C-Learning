#include <stdio.h>

int countPasses(int grades[], int size) {
    int count = 0;
    
    // Loop through the array from index 0 to size-1
    for (int i = 0; i < size; i++) {
        // If the grade is 50 or greater, increment the counter
        if (grades[i] >= 50) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int grades[5];
    printf("Enter 5 grades:\n");
    
    // We scan 5 numbers from input
    for(int i = 0; i < 5; i++) {
        scanf("%d", &grades[i]);
    }
    
    int result = countPasses(grades, 5);
    printf("Number of passes: %d\n", result);
    return 0;
}