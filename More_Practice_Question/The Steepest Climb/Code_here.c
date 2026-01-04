#include <stdio.h>

int maxClimb(int data[], int size) {
    int maxStep = 0;
    // TODO: Loop from 0 to size-2 (neighbors).
    // Calculate difference (next - current).
    // Find the biggest POSITIVE difference.
    
    return maxStep;
}

int main() {
    int data[4];
    for(int i=0; i<4; i++) scanf("%d", &data[i]);
    
    printf("%d\n", maxClimb(data, 4));
    return 0;
}