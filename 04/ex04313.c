// Only one of the expressions ++i and i++ is exactly the same as (i += 1);
// which is it? Justify your answer.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // The expression ++i is equivalent to (i += 1). The value of
    // both expressions is i after the increment has been performed.
    int i = 1;
    int j = ++i;                                // now i is 2
    printf("The value of j = ++i is: %d\n", j); // 2 == i

    i = 1;
    int k = i++;                                // now i is 2
    printf("The value of k = i++ is: %d\n", k); // 1 != i

    i = 1;
    int l = i += 1;                                // warning, now i = 2
    printf("The value of l = i += 1 is: %d\n", l); // 2 == i

    return EXIT_SUCCESS;
}