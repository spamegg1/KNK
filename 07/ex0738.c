// Repeat Exercise 7, but give the equivalent hexadecimal escape.
// (a) \b
// (b) \n
// (c) \r
// (d) \t

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    // (a) \b == \x08
    printf("%d\n", '\b' == '\x08'); // true, prints 1

    // (b) \n == \x0a
    printf("%d\n", '\n' == '\x0a'); // true, prints 1

    // (c) \r == \x0d
    printf("%d\n", '\r' == '\x0d'); // true, prints 1

    // (d) \t == \x09
    printf("%d\n", '\t' == '\x09'); // true, prints 1

    return EXIT_SUCCESS;
}
