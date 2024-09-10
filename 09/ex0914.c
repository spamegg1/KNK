// The following function is supposed to return
// true if any element of the array a has the value 0 and
// false if all elements are nonzero.
// Sadly, it contains an error.
// Find the error and show how to fix it:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_zero(int n, int a[n])
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    // else
    //     return false; // wrong
    return false; // correct
}

int main(void)
{
    int a1[5] = {1, 2, 3, 4, 0};
    int a2[5] = {1, 2, 3, 4, 5};

    printf("%d\n", has_zero(5, a1)); // true = 1
    printf("%d\n", has_zero(5, a2)); // false = 0

    return EXIT_SUCCESS;
}
