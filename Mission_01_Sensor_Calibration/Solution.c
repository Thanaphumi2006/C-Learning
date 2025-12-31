/*
 * MISSION TASK: SUPPLY CALCULATOR (SOLVED)
 * -------------------------------
 * The Rover needs to calculate the weight of supplies found on Mars.
 */

#include <stdio.h>
#include <string.h> 

int main() {
    
    char item_name[50] = "";
    int quantity = 0;
    float weight_per_unit = 0.0;
    float total_weight = 0.0;

    // 1. GET ITEM NAME
    printf("Identify the item found: ");
    fgets(item_name, sizeof(item_name), stdin);
    item_name[strlen(item_name)-1] = '\0'; 

    // 2. GET QUANTITY 
    printf("How many %s did you find? ", item_name);
    // SOLUTION: Use %d for integers and & to store it
    scanf("%d", &quantity); 
    

    // 3. GET WEIGHT
    printf("Weight per unit (kg): ");
    // SOLUTION: Use %f for floats and & to store it
    scanf("%f", &weight_per_unit);
    

    // 4. CALCULATE TOTAL
    // SOLUTION: Multiply and assign
    total_weight = quantity * weight_per_unit;
    

    // 5. REPORT BACK
    // SOLUTION: %s for string name, %.2f for the weight limit
    printf("Total weight of %s: %.2f kg\n", item_name, total_weight);
    

    return 0;
}