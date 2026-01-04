#include <stdio.h>

void rotateRight(int data[], int size) {
    int last = data[size - 1];
    
    // TODO: Shift elements RIGHT.
    // Loop BACKWARDS from size-1 down to 1.
    // data[i] = data[i-1];
    
    data[0] = last; // Put last at the front
}

int main() {
    int data[] = {1, 2, 3};
    rotateRight(data, 3);
    
    for(int i=0; i<3; i++) printf("%d ", data[i]);
    printf("\n");
    return 0;
}