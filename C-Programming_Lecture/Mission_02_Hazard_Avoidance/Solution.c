/*
 * MISSION TASK: AUTO-PILOT SYSTEM (SOLVED)
 * -------------------------------
 * TASK: Write the logic to avoid crashing into a rock.
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
    // SOLUTION LOGIC
    // ==========================================
    
    // TASK 1: If distance is less than 5 meters...
    if (rock_distance < 5) {
        printf("EMERGENCY STOP! IMPACT IMMINENT!\n");
    }

    // TASK 2: Else If the rock is Huge (size is 2) AND distance is less than 20...
    // We use && (AND) because BOTH conditions must be met.
    else if (rock_size == 2 && rock_distance < 20) {
        printf("Turn Left immediately.\n");
    }

    // TASK 3: Else If the rock is Small (size is 1)...
    // We use == to compare equality.
    else if (rock_size == 1) {
        printf("Drive over it.\n");
    }

    // TASK 4: If none of the above are true...
    else {
        printf("Proceed with caution.\n");
    }

    return 0;
}