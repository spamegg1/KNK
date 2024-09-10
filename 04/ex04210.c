// Show the output produced by each of the following program fragments.
// Assume that i and j are int variables.
// (a) i = 6;
// j = i += i;
// printf("%d %d", i, j);
// (b) i = 5;
// j = (i -= 2) + 1;
// printf("%d %d", i, j);
// (c) i = 7;
// j = 6 + (i = 2.5);
// printf("%d %d", i, j);
// (d) i = 2; j = 8;
// j = (i = 6) + (j = 3);
// printf("%d %d", i, j);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;

    i = 6;
    j = i += i;
    printf("%d %d\n", i, j); // 12 12

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j); // 3 4

    i = 7;
    j = 6 + (i = 2.5);       // warning: implicit conversion from double to int
    printf("%d %d\n", i, j); // 2 8

    i = 2;                   // lint: value never read
    j = 8;                   // lint: value never read
    j = (i = 6) + (j = 3);   // warning: multiple unsequenced modifications
    printf("%d %d\n", i, j); // 6 9

    return EXIT_SUCCESS;
}