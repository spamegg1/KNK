// Repeat Exercise 5 for C99.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", 8 % 5);   // 3 in C99, 1 in C89
    printf("%d\n", -8 % 5);  // -3 in C99, -3 or 5 in C89
    printf("%d\n", 8 % -5);  // 3 in C99, 3 or -5 in C89
    printf("%d\n", -8 % -5); // -3 in C99, 3 or 5 in C89

    return EXIT_SUCCESS;
}