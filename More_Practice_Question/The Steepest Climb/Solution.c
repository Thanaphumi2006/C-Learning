#include <stdio.h>

int maxClimb(int data[], int size) {
    int maxStep = 0;
    
    // Loop from 0 to size-2 (stop before the very last element)
    // We use i < size - 1 so that data[i+1] is valid
    for (int i = 0; i < size - 1; i++) {
        
        // Calculate difference (next - current)
        int diff = data[i+1] - data[i];
        
        // Find the biggest POSITIVE difference
        if (diff > maxStep) {
            maxStep = diff;
        }
    }
    
    return maxStep;
}

int main() {
    int data[4];
    // Example input: 10 15 20 18
    // 15-10 = 5. 20-15 = 5. 18-20 = -2. Max is 5.
    for(int i=0; i<4; i++) scanf("%d", &data[i]);
    
    printf("%d\n", maxClimb(data, 4));
    return 0;
}