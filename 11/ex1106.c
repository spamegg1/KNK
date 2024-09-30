// Write the following function:
// void find_two_largest(int a[], int n, int *largest, int *second_largest);
// When passed an array a of length n,
// the function will search a for its largest and second-
// largest elements, storing them in the variables
// pointed to by largest and second_largest, respectively.

#include <stdio.h>
#include <stdlib.h>

// assume array has at least two numbers
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = a[0];
    *second_largest = a[1];
    for (int i = 2; i < n; i++)
    {
        if (*largest < a[i])
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (*second_largest < a[i])
            *second_largest = a[i];
    }
}

int main(void)
{
    int n = 5;
    int largest, second_largest;
    int a[] = {9, 1, 8, 2, 5};
    find_two_largest(a, n, &largest, &second_largest);
    printf("largest: %d, second: %d\n", largest, second_largest);

    return EXIT_SUCCESS;
}
