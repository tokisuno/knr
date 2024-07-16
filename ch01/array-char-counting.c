#include <stdio.h>

/* count digits, whitespace, and more! */

int main() {
    int c, i, new_white, new_other;
    int new_digit[10];

    new_white = new_other = 0;

    for (i = 0; i < 10; ++i) {
        new_digit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++new_digit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t') 
            ++new_white;
        else
            ++new_other;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", new_digit[i]);
    printf(", whitespace = %d, other = %d\n", new_white, new_other);
}
