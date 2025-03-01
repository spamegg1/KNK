// Write the following function:
// bool search(const int a[], int n, int key);
// a is an array to be searched, n is the number
// of elements in the array, and key is the search key.
// search should return true if key matches some element of a,
// and false if it doesn’t.
// Use pointer arithmetic—not subscripting—to visit array elements.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    return false;
}

int main(void)
{
    int n = 5;
    const int a[] = {1, 2, 3, 4, 5};
    int key = 4;
    printf("%d\n", search(a, n, key));

    return EXIT_SUCCESS;
}
