// Suppose that high, low, and middle are all
// pointer variables of the same type, and that
// low and high point to elements of an array.
// Why is the following statement illegal, and
// how could it be fixed?
// middle = (low + high) / 2;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[5] = {0, 1, 2, 3, 4};
    int *high, *low;
    high = array + 4;
    low = array;
    printf("high %d low %d\n", *high, *low); // 4 0

    // error: invalid operands to binary expression ('int *' and 'int *')
    int *middle;
    // middle = (low + high) / 2;

    // The statement is illegal because pointers cannot be added.
    // Here's a legal statement that has the desired effect:
    middle = (high - low) / 2 + low; // OK
    printf("middle: %d\n", *middle); // mid 2

    // The value of (high - low) / 2 is an integer, not a pointer,
    // so it can legally be added to low.

    return EXIT_SUCCESS;
}
