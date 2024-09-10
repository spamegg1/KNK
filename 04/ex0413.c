// What is the value of each of the following expressions in C89?
// (Give all possible values if an expression may have more than one value.)
// (a) 8 / 5
// (b) -8 / 5
// (c) 8 / -5
// (d) -8 / -5

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