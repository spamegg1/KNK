// Rewrite the following function to use pointer
// arithmetic instead of array subscripting. (In other words,
// eliminate the variable i and all uses of the [] operator.)
// Make as few changes as possible.
// int sum_array(const int a[], int n)
// {
//     int i, sum;
//     sum = 0;
//     for (i = 0; i < n; i++)
//         sum += a[i];
//     return sum;
// }

#include <stdio.h>
#include <stdlib.h>

int sum_array(const int a[], int n)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int sum_array_rewrite(const int a[], int n)
{
    int sum;
    sum = 0;
    const int *p;
    p = a;

    while (p < a + n)
    {
        sum += *p;
        p++;
    }

    return sum;
}

int main(void)
{
    int n = 5;
    const int a[5] = {4, 1, -6, 3, 2};
    printf("%d\n", sum_array_rewrite(a, n)); // 4
    return EXIT_SUCCESS;
}
