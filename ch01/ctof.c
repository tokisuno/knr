/* Fahrenheit = (Celsius * 1.8) + 32 */
#include <stdio.h>

int LOWER = 0;
int UPPER = 30;
int STEP  = 1;

int main() {
    float c,f;
    c = LOWER;
    while (c <= UPPER) {
        f = (c*1.8) + 32; 
        printf("%6.0f %3.1f\n", c, f);
        c += STEP;
    }


    return 0;
}
