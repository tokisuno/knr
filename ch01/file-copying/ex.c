#include <stdio.h>

    
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("%d\n\n", (c=getchar() != EOF));
        printf("%d\n\n", EOF);
    }
}
