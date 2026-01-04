#include <stdio.h>

void sortScores(int scores[], int size) {
    int i, j, temp;
    // TODO: Bubble Sort Descending (Big -> Small).
    // Nested loops. Swap if scores[j] < scores[j+1].
}

int main() {
    int scores[] = {10, 50, 5, 20};
    sortScores(scores, 4);
    
    for(int i=0; i<4; i++) printf("%d ", scores[i]);
    printf("\n");
    return 0;
}