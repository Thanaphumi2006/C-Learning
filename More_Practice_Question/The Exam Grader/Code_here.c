#include <stdio.h>

int countPasses(int grades[], int size) {
    int count = 0;
    // TODO: Loop through the array. 
    // If grades[i] >= 50, increment count.
    
    return count;
}

int main() {
    int grades[5];
    // We scan 5 numbers from input
    for(int i=0; i<5; i++) {
        scanf("%d", &grades[i]);
    }
    
    int result = countPasses(grades, 5);
    printf("%d\n", result);
    return 0;
}