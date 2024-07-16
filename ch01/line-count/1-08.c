#include <stdio.h>

/* 1-8: Write a program to count: */
/*         * Blanks               */
/*         * Tabs                 */
/*         * Newlines             */

int main() {
    int c, nl, nt, nb;
    nl = 0;
    nt = 0;
    nb = 0;

    while ((c=getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++nb;
        }
    }
    printf("line: %d\ntab: %d\nblank: %d\n", nl, nt, nb);
}
