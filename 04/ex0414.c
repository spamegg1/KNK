// Repeat Exercise 3 for C99.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", 8 / 5);   // 1 in C99, 1 in C89
    printf("%d\n", -8 / 5);  // -1 in C99, -1 or -2 in C89
    printf("%d\n", 8 / -5);  // -1 in C99, -1 or -2 in C89
    printf("%d\n", -8 / -5); // 1 in C99, 1 or 2 in C89
    return EXIT_SUCCESS;
}