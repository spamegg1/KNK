// We discussed using the expression sizeof(a) / sizeof(a[0])
// to calculate the number of elements in an array.
// The expression sizeof(a) / sizeof(t), where t is the type of
// a’s elements, would also work, but it’s considered an inferior technique. Why?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // The second expression may not necessarily reflect the type of a value in a.
    // For example, if a was changed from an array of int's to an array of long's,
    // then each instance of sizeof(t) would have to be changed.

    int a[3] = {1, 2, 3};
    printf("%lu\n", sizeof(a) / sizeof(a[0]));
    printf("%lu\n", sizeof(a) / sizeof(int));

    a[0] = 1L;
    a[1] = 2L;
    a[2] = 3L;
    printf("%lu\n", sizeof(a) / sizeof(a[0]));
    printf("%lu\n", sizeof(a) / sizeof(int));

    return EXIT_SUCCESS;
}
