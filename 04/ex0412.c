// If i and j are positive integers, does (-i)/j always
// have the same value as -(i/j)? Justify your answer.

// Not in C89. Suppose that i is 9 and j is 7. The value of
// (-i)/j could be either –1 or –2, depending on the implementation. On
// the other hand, the value of -(i/j) is always –1, regardless of the
// implementation. In C99, on the other hand, the value of (-i)/j must
// be equal to the value of -(i/j).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 9;
    int j = 7;

    printf("%d\n", (-i) / j); // same in C99
    printf("%d\n", -(i / j)); // both are -1

    return EXIT_SUCCESS;
}