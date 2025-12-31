/* * MISSION PHASE 1: SYSTEM BOOT
 * ----------------------------
 * GOAL: Initialize communications and check memory banks.
 */

#include <stdio.h> // The Standard Input/Output Toolbox

int main() { 

    // --- STEP 1: ESTABLISHING CONNECTION (Printf & Escape Sequences) ---
    // \n = New Line (Enter)
    // \t = Tab (Space)
    // \" = Print a quote symbol
    printf("--- ROVER BOOT SEQUENCE ---\n");
    printf("System:\t\t[ONLINE]\n");
    printf("Message:\t\"Hello, Mission Control.\"\n\n");

    // --- STEP 2: MEMORY CHECK (Variables) ---
    // Variable = A container for data 
    
    int rover_id = 7;             // Integer (Whole number)
    float battery_level = 98.5;   // Float (Decimal number)
    char status_code = 'A';       // Char (Single letter)
    // String (Array of characters) - We will learn arrays later!
    char rover_name[] = "Pathfinder"; 

    // --- STEP 3: DISPLAY DATA (Format Specifiers) ---
    // We use placeholders (%) to print variables.
    // %d = int, %f = float, %c = char, %s = string
    
    printf("Rover Name: %s\n", rover_name);
    printf("ID Number:  %d\n", rover_id);
    printf("Status:     %c\n", status_code);
    
    // PRECISION: %.1f means "Only 1 decimal place"
    printf("Battery:    %.1f%%\n", battery_level);

    // --- STEP 4: FORMATTING TRICKS ---
    // %03d means "Print 3 digits, fill empty space with 0"
    int sector = 5;
    printf("Current Sector: %03d\n", sector); // Prints 005

    return 0;
}