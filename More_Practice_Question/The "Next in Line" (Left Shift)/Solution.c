#include <stdio.h>

void nextSong(int p[], int size) {
    // 1. Store the first element so it isn't overwritten
    int first = p[0];
    
    // 2. Shift elements LEFT
    // We stop at 'size - 1' so we don't go out of bounds when accessing p[i + 1]
    for (int i = 0; i < size - 1; i++) {
        p[i] = p[i + 1];
    }
    
    // 3. Put the first element at the end
    p[size - 1] = first; 
}

int main() {
    int data[] = {10, 20, 30};
    nextSong(data, 3);
    
    // Output should be: 20 30 10
    for(int i = 0; i < 3; i++) printf("%d ", data[i]);
    printf("\n");
    return 0;
}