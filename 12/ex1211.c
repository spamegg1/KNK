// Modify the find_largest function
// so that it uses pointer arithmetic—not
// subscripting—to visit array elements.

#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n)
{
    int *largest = a;
    for (int i = 0; i < n; i++)
        if (*largest < *(a + i))
            largest = a + i;
    return largest;
}

int main(void)
{
    int n = 5;
    int largest = 9999;
    int a[] = {9, 1, 8, largest, 5};
    printf("largest: %d\n", *find_largest(a, n));

    return EXIT_SUCCESS;
}
