#include <stdio.h>

void limitAudio() {
    FILE *in = fopen("loud.dat", "r");
    FILE *out = fopen("safe.dat", "w");
    double num;
    
    if(in == NULL) return; // Safety check
    
    while(fscanf(in, "%lf", &num) == 1) {
        // TODO: Clamp values.
        // If > 80, num = 80. If < 0, num = 0.
        // fprintf(out, "%.1lf ", num);
    }
    
    fclose(in);
    fclose(out);
}

int main() {
    limitAudio();
    return 0;
}