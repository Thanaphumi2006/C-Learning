#include <stdio.h>

void limitAudio() {
    FILE *in = fopen("loud.dat", "r");
    FILE *out = fopen("safe.dat", "w");
    double num;
    
    if(in == NULL) return; // Safety check
    
    // Loop through every number in the input file
    while(fscanf(in, "%lf", &num) == 1) {
        
        // 1. Clamp upper bound: If greater than 80, set to 80
        if (num > 80.0) {
            num = 80.0;
        }
        
        // 2. Clamp lower bound: If less than 0, set to 0
        if (num < 0.0) {
            num = 0.0;
        }
        
        // Write the processed number to the output file
        fprintf(out, "%.1lf ", num);
    }
    
    fclose(in);
    fclose(out);
}

int main() {
    limitAudio();
    return 0;
}