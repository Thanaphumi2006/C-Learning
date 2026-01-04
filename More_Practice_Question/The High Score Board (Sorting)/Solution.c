#include <stdio.h>

void sortScores(int scores[], int size) {
    int i, j, temp;
    
    // Outer loop: Controls the number of passes
    for (i = 0; i < size - 1; i++) {
        
        // Inner loop: Compares adjacent elements
        // We subtract 'i' because the last 'i' elements are already sorted
        for (j = 0; j < size - i - 1; j++) {
            
            // Swap if the current number is SMALLER than the next one
            // (This pushes smaller numbers to the end, keeping big ones at the front)
            if (scores[j] < scores[j+1]) {
                temp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = temp;
            }
        }
    }
}

int main() {
    int scores[] = {10, 50, 5, 20};
    sortScores(scores, 4);
    
    // Expected Output: 50 20 10 5
    for(int i = 0; i < 4; i++) printf("%d ", scores[i]);
    printf("\n");
    return 0;
}