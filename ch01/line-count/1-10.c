#include <stdio.h>
#include <stdbool.h>

/* 1-10: Write a program to copy its input to output, replacing: */
/*  --> Each tab by \t                                           */
/*  --> Each backspace by \t                                     */
/*  --> Each backslash by \\                                     */

int main() {
    int c;
    
    while ((c=getchar()) != EOF) {
        if (c == '\t' || c == '\b' || c == '\\') {
            if (c == '\t') {
                putchar('\\'); 
                putchar('t'); 
            }
            if (c == '\b') {
                putchar('\\'); 
                putchar('b'); 
            }
            if (c == '\\') {
                putchar('\\'); 
            }
        } else {
            putchar(c);
        }
    }
}
