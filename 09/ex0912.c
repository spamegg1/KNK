// Write the following function:
// double inner_product(double a[], double b[], int n);
// The function should return
// a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].

#include <stdio.h>
#include <stdlib.h>

double inner_product(int n, double a[n], double b[n])
{
    double result = 0.0;
    for (int i = 0; i < n; i++)
        result += a[i] * b[i];
    return result;
}

int main(void)
{
    double a[3] = {1.0, 2.0, 3.0};
    double b[3] = {2.0, 3.0, 4.0};
    printf("%f\n", inner_product(3, a, b)); // 20

    return EXIT_SUCCESS;
}
