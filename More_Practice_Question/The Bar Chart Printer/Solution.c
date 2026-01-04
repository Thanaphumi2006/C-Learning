#include <stdio.h>

void printBar(int length) {
    // Loop 'length' times to print the hash marks
    for (int i = 0; i < length; i++) {
        printf("#");
    }
    // Print a newline at the end of the bar so the next one starts on a new line
    printf("\n");
}

void printChart(int data[], int size) {
    // Loop through the data array
    for (int i = 0; i < size; i++) {
        // Call the helper function for each number in the array
        printBar(data[i]);
    }
}

int main() {
    int data[] = {1, 3};
    printChart(data, 2);
    return 0;
}