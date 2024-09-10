// If c is a variable of type char,
// which one of the following statements is illegal?
// (a) i += c; /* i has type int */
// (b) c = 2 * c - 1;
// (c) putchar(c);
// (d) printf(c);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 'a';
    int i = 0;

    i += c;        // legal
    c = 2 * c - 1; // legal
    putchar(c);    // legal
    // printf(c);     // illegal, printf requires a string as 1st arg.
    // clang only gives warning, not error.
    // running it gives segfault.

    return EXIT_SUCCESS;
}
