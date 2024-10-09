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

int main(void)
{

    return EXIT_SUCCESS;
}
