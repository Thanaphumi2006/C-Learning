#include <stdio.h>

int main() {
    double price;
    double min = 99999.0;
    double max = 0.0;
    
    printf("Enter prices (enter -1 to finish):\n");

    // Loop continues indefinitely until the break condition is met
    while (1) {
        scanf("%lf", &price);
        
        // Stop if price == -1
        if (price == -1) {
            break; 
        }
        
        // Update max if current price is higher than current max
        if (price > max) {
            max = price;
        }
        
        // Update min if current price is lower than current min
        if (price < min) {
            min = price;
        }
    }
    
    printf("Highest: %.1lf, Lowest: %.1lf\n", max, min);
    return 0;
}