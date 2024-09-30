// Write the following function:
// int *find_largest(int a[], int n);
// When passed an array a of length n,
// the function will return a pointer to the array’s largest element.

#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n)
{
    int *largest = &a[0];
    for (int i = 0; i < n; i++)
        if (*largest < a[i])
            largest = &a[i];
    return largest;
}

int main(void)
{
    int a[] = {9, 1, 8, 2, 5};
    printf("largest: %d\n", *find_largest(a, 5));

    return EXIT_SUCCESS;
}
