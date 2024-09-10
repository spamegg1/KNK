// Give the values of i and j after each of the following expression
// statements has been executed.
// (Assume that i has the value 1 initially and j has the value 2.)
// (a) i += j;
// (b) i--;
// (c) i * j / i;
// (d) i % ++j;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, j = 2;

    i += j;
    printf("%d, %d\n", i, j); // 3, 2

    i--;
    printf("%d, %d\n", i, j); // 2, 2

    i *j / i;                 // warning: expression result unused
    printf("%d, %d\n", i, j); // 2, 2

    i % ++j;                  // warning: expression result unused
    printf("%d, %d\n", i, j); // 2, 3

    return EXIT_SUCCESS;
}