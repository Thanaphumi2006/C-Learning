#include <stdio.h>

void traffic(int duration, int interval) {
    // Loop from minute = 1 to duration
    for (int minute = 1; minute <= duration; minute++) {
        
        // If minute is a multiple of interval (remainder is 0)
        if (minute % interval == 0) {
            printf("%d: [GO]\n", minute);
        } 
        // Otherwise
        else {
            printf("%d: [STOP]\n", minute);
        }
    }
}

int main() {
    int duration, interval;
    
    // Reads two integers: total duration and the GO interval
    scanf("%d %d", &duration, &interval);
    
    traffic(duration, interval);
    return 0;
}