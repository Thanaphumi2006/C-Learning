#include <stdio.h>

double avgTemp() {
    FILE *file = fopen("temps.txt", "r");
    double sum = 0, temp;
    int count = 0;
    
    if(file == NULL) return 0.0;
    
    while(fscanf(file, "%lf", &temp) == 1) {
        // TODO: If temp is -999, skip it.
        if (temp == -999.0) {
            continue; 
        }
        
        // Else add to sum and increment count.
        sum += temp;
        count++;
    }
    
    fclose(file);
    return (count > 0) ? (sum / count) : 0;
}

int main() {
    printf("Average: %.1lf\n", avgTemp());
    return 0;
}