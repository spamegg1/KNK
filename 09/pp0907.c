// The power function of Section 9.6 can be made faster
// by having it calculate xn in a different way.
// We first notice that if n is a power of 2,
// then xn can be computed by squaring.
// For example, x4 is the square of x2, so x4 can be
// computed using only two multiplications instead of three.
// As it happens, this technique can be used even when n
// is not a power of 2. If n is even, we use the formula
// xn = (xn/2)2. If n is odd, then xn = x × xn–1.
// Write a recursive function that computes xn.
// (The recursion ends when n = 0,
// in which case the function returns 1.)
// To test your function, write a program that asks the user to enter
// values for x and n, calls power to compute xn,
// and then displays the value returned by the function.

#include <stdio.h>
#include <stdlib.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
    {
        int sqrt = power(x, n / 2);
        return sqrt * sqrt;
    }

    return x * power(x, n - 1);
}

int main(void)
{
    int x;
    printf("Enter base: ");
    scanf("%d", &x);

    int n;
    printf("Enter power: ");
    scanf("%d", &n);

    printf("%d to the power %d is: %d\n", x, n, power(x, n));
    return EXIT_SUCCESS;
}
