// Print a historgram of the frequencies of different chars in its input
// - This will only account for letters, not punctuation

#include <stdio.h>

#define LOWCASE_LOWER 97
#define LOWCASE_UPPER 122
#define UPCASE_LOWER  65
#define UPCASE_UPPER  90
#define ALPHA_RANGE   26

int main() {
    int c, new_white, new_other;

    c = new_white = new_other = 0;

    int new_upper[ALPHA_RANGE];
    int new_lower[ALPHA_RANGE];

    char lowercase[ALPHA_RANGE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char uppercase[ALPHA_RANGE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < ALPHA_RANGE; ++i) {
        new_upper[i] = 0;
        new_lower[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= LOWCASE_LOWER && c <= LOWCASE_UPPER)
            ++new_lower[c - LOWCASE_LOWER];
        else if (c >= UPCASE_LOWER && c <= UPCASE_UPPER)
            ++new_upper[c - UPCASE_LOWER]; 
        else if (c == ' ' || c == '\n' || c == '\t')
            ++new_white;
        else
            ++new_other;
    }

    printf("== Lowercase ==\n");
    for (int i = 0; i < ALPHA_RANGE; ++i) {
        printf("%c: ", lowercase[i]);
        for (int j = 0; j < new_lower[i]; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");

    printf("== Uppercase ==\n");
    for (int i = 0; i < ALPHA_RANGE; ++i) {
        printf("%c: ", uppercase[i]);
        for (int j = 0; j < new_upper[i]; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");

    printf("Whitespace: %d\n", new_white);
    printf("Other: %d\n", new_other);

}
