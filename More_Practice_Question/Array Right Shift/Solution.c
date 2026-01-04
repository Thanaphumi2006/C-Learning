#include <stdio.h>

void rotateRight(int data[], int size) {
    // 1. Save the very last number because it will be overwritten
    int last = data[size - 1];
    
    // 2. Loop BACKWARDS from the last index down to 1
    // We stop at i=1 because we access data[i-1] (data[0])
    for (int i = size - 1; i > 0; i--) {
        data[i] = data[i - 1];
    }
    
    // 3. Put the saved last number at the very front
    data[0] = last;
}

int main() {
    int data[] = {1, 2, 3};
    // Expected Result: 3 1 2
    rotateRight(data, 3);
    
    for(int i = 0; i < 3; i++) printf("%d ", data[i]);
    printf("\n");
    return 0;
}