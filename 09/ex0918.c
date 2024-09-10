// Write a recursive version of the gcd function (see Exercise 3).
// Here’s the strategy to use for computing gcd(m, n):
// If n is 0, return m.
// Otherwise, call gcd recursively, passing n as
// the first argument and m % n as the second.

#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}

int main(void)
{
    printf("%d\n", gcd(360, 96)); // 24
    return EXIT_SUCCESS;
}
