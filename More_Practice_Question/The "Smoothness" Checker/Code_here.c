#include <stdio.h>
#include <stdlib.h> // for abs()

int minDiff(int data[], int size) {
    int minGap = 9999;
    
    // TODO: Loop from 0 to size-2.
    // Use abs(data[i] - data[i+1]) to get difference.
    // Find the smallest one.
    
    return minGap;
}

int main() {
    int data[4];
    for(int i=0; i<4; i++) scanf("%d", &data[i]);
    printf("%d\n", minDiff(data, 4));
    return 0;
}