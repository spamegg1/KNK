// The value of the mathematical constant e can be
// expressed as an infinite series:
// e = 1 + 1/1! + 1/2! + 1/3! + ...
// Write a program that approximates e by computing the value of
// 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
// where n is an integer entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);

    long denom = 1;
    double e = 1.0;
    for (int i = 1; i <= n; i++)
    {
        denom *= i;
        e += 1.0 / denom;
    }
    printf("Approximation of e: %-.20f\n", e);

    return EXIT_SUCCESS;
}
