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
    int array[] = {0, 1, 2, 3, 4};
    int *high, *low, *middle;
    *high = array[0];
    *low = array[1];

    // middle = (low + high) / 2;

    return EXIT_SUCCESS;
}
