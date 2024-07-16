// Prints its input one word per line

#include <stdio.h>
#include <stdbool.h>

int main() {
    int c, nw;
    bool word = false;

    nw = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            word = false;
        } else if (word == false) {
            word = true;
            ++nw;
        }
        putchar(c);
    }
}
