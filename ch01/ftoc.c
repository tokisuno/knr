#include <stdio.h>

int LOWER = 0;
int UPPER = 300;
int STEP  = 20;

int main() {
    int fahr, celsius;
    
    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}
