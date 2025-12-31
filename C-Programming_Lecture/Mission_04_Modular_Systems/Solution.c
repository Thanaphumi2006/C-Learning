/*
 * MISSION TASK: TEMPERATURE CONVERTER MODULE (SOLVED)
 * ------------------------------------------
 * TASK: The Rover uses different temperature scales.
 * We need reusable tools (functions) to convert them instantly.
 */

#include <stdio.h>

// ==========================================
// 1. FUNCTION PROTOTYPES
// ==========================================

float to_celsius(float fahrenheit);
float to_fahrenheit(float celsius);


// ==========================================
// 2. MAIN SYSTEM
// ==========================================
int main() {
    
    printf("--- TEMP CONVERSION TEST ---\n");

    float f_input = 100.0;
    float c_input = 0.0;

    // CALLING FUNCTIONS
    float result_c = to_celsius(f_input);
    float result_f = to_fahrenheit(c_input);

    printf("100.0 F in Celsius is: %.2f\n", result_c);
    printf("0.0 C in Fahrenheit is: %.2f\n", result_f);

    return 0;
}


// ==========================================
// 3. FUNCTION BODIES
// ==========================================

// LOGIC FOR CELSIUS
float to_celsius(float fahrenheit) {
    // Formula: (F - 32) * 5 / 9
    // Note: We use variable 'fahrenheit' that was passed into this function
    float result = (fahrenheit - 32) * 5 / 9;
    return result; 
}


// LOGIC FOR FAHRENHEIT
float to_fahrenheit(float celsius) {
    // Formula: (C * 9 / 5) + 32
    // Note: We use variable 'celsius' that was passed into this function
    float result = (celsius * 9 / 5) + 32;
    return result;
}