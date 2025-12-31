/*
 * MISSION TASK: LAUNCH COUNTDOWN (SOLVED)
 * ------------------------------
 * TASK: Write a countdown timer for the Mars Return Vehicle.
 */

#include <stdio.h>

int main() {
    
    int t_minus;

    // 1. INPUT
    printf("Enter T-Minus seconds: ");
    scanf("%d", &t_minus);

    printf("\n--- INITIATING COUNTDOWN ---\n");

    // ==========================================
    // SOLUTION LOGIC
    // ==========================================

    // TASK 1: The Loop
    // We run this WHILE the time is greater than 0.
    while (t_minus > 0) {
        
        // a. Print status
        printf("T-Minus %d...\n", t_minus);
        
        // b. Decrease time (CRITICAL STEP)
        // t_minus-- is the same as t_minus = t_minus - 1
        t_minus--; 
    }

    // TASK 2: Liftoff
    // This happens only AFTER the loop is finished (when t_minus becomes 0)
    printf("🚀 LIFTOFF!!\n");

    return 0;
}