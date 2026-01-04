#include <stdio.h>

int main() {
    int maxRow = 3, maxCol = 3;
    double maxTemp = -1.0; // Initialize to a low value
    int bestRow = 0, bestCol = 0;
    
    // Nested loops iterating through rows and columns
    for (int row = 0; row < maxRow; row++) {
        for (int col = 0; col < maxCol; col++) {
            
            // Calculate temperature based on the formula
            double temp = (row * 1.5) + (col * 2.1);
            
            // If the current temp is higher than the max found so far, update the records
            if (temp > maxTemp) {
                maxTemp = temp;
                bestRow = row;
                bestCol = col;
            }
        }
    }
    
    printf("Hottest at Row: %d, Col: %d\n", bestRow, bestCol);
    // Optional: Print the actual max temp to verify
    // printf("Max Temp: %.2f\n", maxTemp); 
    
    return 0;
}