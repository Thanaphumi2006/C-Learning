/*
 * MISSION TASK: AUTO-PILOT SYSTEM
 * -------------------------------
 * TASK: Write the logic to avoid crashing into a rock.
 * SENSORS: 
 * - rock_distance (How far away is it?)
 * - rock_size     (How big is it?)
 */

#include <stdio.h>

int main() {
    
    int rock_distance;
    int rock_size;

    // 1. READ SENSORS
    printf("SENSOR READING: Distance to rock (meters): ");
    scanf("%d", &rock_distance);

    printf("SENSOR READING: Size of rock (1=Small, 2=Huge): ");
    scanf("%d", &rock_size);

    printf("\n--- DECISION MATRIX ---\n");

    // ==========================================
    // TODO: WRITE YOUR NAVIGATION LOGIC BELOW
    // ==========================================
    
    // TASK 1: If distance is less than 5 meters...
    // Print exactly: "EMERGENCY STOP! IMPACT IMMINENT!"
    // (Hint: Use 'if')
    


    // TASK 2: Else If the rock is Huge (size is 2) AND distance is less than 20...
    // Print exactly: "Turn Left immediately."
    // (Hint: Use 'else if' and '&&')



    // TASK 3: Else If the rock is Small (size is 1)...
    // Print exactly: "Drive over it."



    // TASK 4: If none of the above are true...
    // Print exactly: "Proceed with caution."
    // (Hint: Use 'else')



    return 0;
}