// Write a program that prints the values of
// sizeof(int),
// sizeof(short),
// sizeof(long),
// sizeof(float),
// sizeof(double),
// sizeof(long double).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Since the type of a sizeof expression may vary from one implementation
    // to another, it's necessary in C89 to cast sizeof expressions to a known
    // type before printing them. The sizes of the basic types are small numbers,
    // so it's safe to cast them to int. (In general, however, it's best to cast
    // sizeof expressions to int and print them using %lu.)
    // In C99, we can avoid the cast by using the %zu conversion specification.
    printf("int: %d\n", (int)sizeof(int));                 // 4
    printf("short: %d\n", (int)sizeof(short));             // 2
    printf("long: %d\n", (int)sizeof(long));               // 8
    printf("float: %d\n", (int)sizeof(float));             // 4
    printf("double: %d\n", (int)sizeof(double));           // 8
    printf("long double: %d\n", (int)sizeof(long double)); // 16

    return EXIT_SUCCESS;
}
