// Write the following function:
// double inner_product(const double *a, const double *b, int n);
// a and b both point to arrays of length n.
// The function should return
// a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
// Use pointer arithmetic—not subscripting—to visit array elements.

#include <stdio.h>
#include <stdlib.h>

double inner_product(const double *a, const double *b, int n)
{
    double sum = 0.0;
    int i = 0;
    while (i < n)
    {
        sum += *a * *b;
        a++;
        b++;
        i++;
    }
    return sum;
}

int main(void)
{
    const double a[] = {1.2, 3.4};
    const double b[] = {5.6, 7.8};
    int n = 2;
    printf("%lf\n", inner_product(a, b, n)); // 33.24

    return EXIT_SUCCESS;
}
