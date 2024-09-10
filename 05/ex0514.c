// Write a single expression whose value is either –1, 0, or +1, depending
// on whether i is less than, equal to, or greater than j, respectively.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;

    i = 10;
    j = 20;                            // so i < j
    printf("%d\n", (i > j) - (i < j)); // -1

    i = 20;
    j = 20;                            // so i == j
    printf("%d\n", (i > j) - (i < j)); // 0

    i = 20;
    j = 10;                            // so i > j
    printf("%d\n", (i > j) - (i < j)); // 1

    return EXIT_SUCCESS;
}