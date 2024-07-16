#include <stdio.h>

// Don't use semicolons when defining pre-processor variable definitions
#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
    float fahr, celsius;
    
    printf("-----------\n");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
