#include <stdio.h>

int LOWER = 0;
int UPPER = 300;
int STEP  = 20;

int main() {
    float fahr, celsius;
    
    fahr = LOWER;
    printf("-----------\n");
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += STEP;
    }

    return 0;
}
