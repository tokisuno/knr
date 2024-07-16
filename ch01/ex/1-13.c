// print a historgram of the lenths of words in input

#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
    int c, new_word, new_char, state;
    c = new_word = new_char = state = 0;

    while ((c = getchar()) != EOF) {
        ++new_char;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            for (int i = 1; i < new_char; i++) {
                printf("*");
            }
            printf("\n");
            new_char = 0;
        } else if (state == OUT) {
            state = IN;
            ++new_word;
        }
    }
}
