// Counts lines, words, and characters
// Loose definition of any sequence of chars that doesn't contain:
//                          * Blank char
//                          * Tab
//                          * New line
// *Barebones version of unix wc*

#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("New line: %d\nNew word: %d\nNew char: %d\n", nl, nw, nc);
}
