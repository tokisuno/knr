#include <stdio.h>

int ctof(int c);
int ftoc(int f);

int main() {
    int c, f;
    c = 0;
    f = 32;

    printf("%dC to F = %d\n", c, ctof(c));
    printf("%dF to C = %d\n", f, ftoc(f));

    return 0;
}

int ctof(int base) {
    int temp;
    
    temp = (base*9*5)+32;

    return temp;
}

int ftoc(int base) {
    int temp;

    temp = (base-32)*5/9;

    return temp;
}
