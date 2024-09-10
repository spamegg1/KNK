// The following program fragments illustrate the
// short-circuit behavior of logical expressions.
// Show the output produced by each, assuming that i, j, and k are int variables.
// (a) i = 3; j = 4; k = 5;
// printf("%d ", i < j || ++j < k);
// printf("%d %d %d", i, j, k);
// (b) i = 7; j = 8; k = 9;
// printf("%d ", i - 7 && j++ < k);
// printf("%d %d %d", i, j, k);
// (c) i = 7; j = 8; k = 9;
// printf("%d ", (i = j) || (j = k));
// printf("%d %d %d", i, j, k);
// (d) i = 1; j = 1; k = 1;
// printf("%d ", ++i || ++j && ++k);
// printf("%d %d %d", i, j, k);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;

    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k); // 1 3 4 5

    i = 7;
    j = 8;
    k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k); // 0 7 8 9

    i = 7;
    j = 8;
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k); // 1 8 8 9

    i = 1;
    j = 1;
    k = 1;
    printf("%d ", ++i || ++j && ++k); // warning
    printf("%d %d %d\n", i, j, k);    // 1 2 1 1

    return EXIT_SUCCESS;
}