/*
 * MISSION TASK: TEMPERATURE CONVERTER MODULE
 * ------------------------------------------
 * TASK: The Rover uses different temperature scales.
 * We need reusable tools (functions) to convert them instantly.
 */

#include <stdio.h>

// ==========================================
// 1. FUNCTION PROTOTYPES (The "Menu")
// ==========================================

// TODO: Define a function named 'to_celsius' 
// It should take a float (fahrenheit) and return a float.
float to_celsius(float fahrenheit);


// TODO: Define a function named 'to_fahrenheit' 
// It should take a float (celsius) and return a float.
float to_fahrenheit(float celsius);



// ==========================================
// 2. MAIN SYSTEM (The Entry Point)
// ==========================================
int main() {
    
    printf("--- TEMP CONVERSION TEST ---\n");

    // We will test your functions with sample data
    float f_input = 100.0;
    float c_input = 0.0;

    // CALLING YOUR FUNCTIONS
    // We are sending 'f_input' to your tool, and saving the answer in 'result_c'
    float result_c = to_celsius(f_input);
    float result_f = to_fahrenheit(c_input);

    printf("100.0 F in Celsius is: %.2f\n", result_c);
    printf("0.0 C in Fahrenheit is: %.2f\n", result_f);

    return 0;
}


// ==========================================
// 3. FUNCTION BODIES (The Logic)
// ==========================================

// TODO: Write the logic for 'to_celsius' here.
float to_celsius(float fahrenheit) {
    // 1. Create a float variable called 'result'
    // 2. Calculate: (fahrenheit - 32) * 5 / 9
    // 3. Return the result
    
    return 0.0; // Change this!
}


// TODO: Write the logic for 'to_fahrenheit' here.
float to_fahrenheit(float celsius) {
    // 1. Create a float variable called 'result'
    // 2. Calculate: (celsius * 9 / 5) + 32
    // 3. Return the result

    return 0.0; // Change this!
}