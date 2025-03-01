// Write the following function:
// void find_two_largest(const int *a, int n, int *largest, int *second_largest);
// a points to an array of length n.
// The function searches the array for its largest and second-largest
// elements, storing them in the variables pointed to by largest and
// second_largest, respectively. Use pointer arithmetic
// —not subscripting—to visit array elements.

#include <stdio.h>
#include <stdlib.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p = a;
    *largest = *a;
    *second_largest = *a;

    while (p < a + n)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
            *second_largest = *p;

        p++;
    }
}

int main(void)
{
    int n = 5;
    const int a[] = {3, 1, 7, 9999, 8};
    int largest;
    int second_largest;
    find_two_largest(a, n, &largest, &second_largest);
    printf("largest: %d\n", largest);               // 9999
    printf("second_largest: %d\n", second_largest); // 8

    return EXIT_SUCCESS;
}
