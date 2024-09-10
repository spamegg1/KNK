// For each of the following character escapes, give the equivalent octal escape.
// (Assume that the character set is ASCII.) You may wish to consult Appendix E,
// which lists the numerical codes for ASCII characters.
// (a) \b
// (b) \n
// (c) \r
// (d) \t

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    // (a) \b == \10
    printf("%d\n", '\b' == '\10'); // true, prints 1

    // (b) \n == \12
    printf("%d\n", '\n' == '\12'); // true, prints 1

    // (c) \r == \15
    printf("%d\n", '\r' == '\15'); // true, prints 1

    // (d) \t == \11
    printf("%d\n", '\t' == '\11'); // true, prints 1

    return EXIT_SUCCESS;
}
