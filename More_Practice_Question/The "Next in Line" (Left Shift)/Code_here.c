#include <stdio.h>

void nextSong(int p[], int size) {
    int first = p[0];
    
    // TODO: Shift elements LEFT.
    // p[0] becomes p[1], p[1] becomes p[2]...
    
    p[size - 1] = first; // Put first at the end
}

int main() {
    int data[] = {10, 20, 30};
    nextSong(data, 3);
    
    for(int i=0; i<3; i++) printf("%d ", data[i]);
    printf("\n");
    return 0;
}