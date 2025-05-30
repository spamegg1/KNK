// Suppose that a is a one-dimensional array and
// p is a pointer variable. Assuming that the
// assignment p = a has just been performed,
// which of the following expressions are illegal
// because of mismatched types? Of the remaining expressions,
// which are true (have a nonzero value)?
// (a) p == a[0]
// (b) p == &a[0]
// (c) *p == a[0]
// (d) p[0] == a[0]

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p;
    p = a;
    printf("%d\n", p == a[0]);    // (a) ptr and int, false
    printf("%d\n", p == &a[0]);   // (b) ptr and ptr, true
    printf("%d\n", *p == a[0]);   // (c) int and int, true
    printf("%d\n", p[0] == a[0]); // (d) int and int, true

    return EXIT_SUCCESS;
}
