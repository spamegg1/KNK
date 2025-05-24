// Rewrite the following function to use pointer arithmetic
// instead of array subscripting. (In other words,
// eliminate the variables i and j and all uses of the [] operator.)
// Use a single loop instead of nested loops.
// int sum_two_dimensional_array(const int a[][LEN], int n)
// {
// int i, j, sum = 0;
// for (i = 0; i < n; i++)
// for (j = 0; j < LEN; j++)
// sum += a[i][j];
// return sum;
// }

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];
    return sum;
}

int sum_two_dimensional_array_rewrite(const int a[][LEN], int n)
{
    int sum = 0;
    const int *p = *a;
    while (p < *a + n * LEN)
    {
        sum += *p;
        p++;
    }
    return sum;
}

int main(void)
{
    int n = 2;
    const int a[][LEN] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}}; // 2x5 array
    printf("%d\n", sum_two_dimensional_array(a, n));          // 55
    printf("%d\n", sum_two_dimensional_array_rewrite(a, n));  // 55
    return EXIT_SUCCESS;
}
