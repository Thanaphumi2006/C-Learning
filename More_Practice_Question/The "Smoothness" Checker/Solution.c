#include <stdio.h>
#include <stdlib.h> // for abs()

int minDiff(int data[], int size) {
    int minGap = 9999;
    
    // Loop from 0 to size-2 (neighbors)
    // We stop at size-1 so data[i+1] is valid
    for (int i = 0; i < size - 1; i++) {
        
        // Calculate absolute difference using abs()
        int diff = abs(data[i] - data[i+1]);
        
        // Check if this difference is the smallest so far
        if (diff < minGap) {
            minGap = diff;
        }
    }
    
    return minGap;
}

int main() {
    int data[4];
    // Example input: 10 50 52 80
    // Differences: |10-50|=40, |50-52|=2, |52-80|=28. 
    // Result: 2
    for(int i=0; i<4; i++) scanf("%d", &data[i]);
    
    printf("%d\n", minDiff(data, 4));
    return 0;
}