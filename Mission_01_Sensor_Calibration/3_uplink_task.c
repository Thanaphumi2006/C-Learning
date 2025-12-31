/*
 * MISSION TASK: SUPPLY CALCULATOR
 * -------------------------------
 * The Rover needs to calculate the weight of supplies found on Mars.
 * You must fix the TODO lines to make the calculator work.
 */

#include <stdio.h>
#include <string.h> // Needed for string manipulation

int main() {
    
    char item_name[50] = "";
    int quantity = 0;
    float weight_per_unit = 0.0;
    float total_weight = 0.0;

    // 1. GET ITEM NAME (Using fgets for text with spaces)
    printf("Identify the item found: ");
    fgets(item_name, sizeof(item_name), stdin);
    // This line removes the "Enter" key press from the end of the text
    item_name[strlen(item_name)-1] = '\0'; 

    // 2. GET QUANTITY (User Input)
    printf("How many %s did you find? ", item_name);
    // TODO: Write a scanf function to store the number in 'quantity'
    // Hint: Don't forget the & symbol!
    

    // 3. GET WEIGHT
    printf("Weight per unit (kg): ");
    // TODO: Write a scanf function to store the weight in 'weight_per_unit'
    

    // 4. CALCULATE TOTAL
    // TODO: Multiply quantity * weight_per_unit and save it in 'total_weight'
    

    // 5. REPORT BACK
    // TODO: Print the final message.
    // Format: "Total weight of [item_name]: [total_weight] kg"
    // Use %.2f for the weight.
    

    return 0;
}