// Rewrite the following function to use pointer
// arithmetic instead of array subscripting. (In other words,
// eliminate the variable i and all uses of the [] operator.)
// Make as few changes as possible.
// void store_zeros(int a[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     a[i] = 0;
// }

#include <stdio.h>
#include <stdlib.h>

void store_zeros(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = 0;
}

void store_zeros_rewrite(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    store_zeros_rewrite(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return EXIT_SUCCESS;
}
