#include <stdio.h>
#include <stdbool.h>

/* 1-9: Write a program to copy its input to its output             */
/*  -> Replace each strong of one or more blanks by a singular blank*/

int main() {
    int c;
    bool postblank = false; 

    while ((c=getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            postblank = false;
        }

        if (c == ' ') {
            if (postblank == false) {
                putchar(' ');
            }
            postblank = true;
        }
    }
}
