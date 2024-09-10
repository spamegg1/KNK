// Write a function gcd(m, n) that calculates the greatest
// common divisor of the integers m and n.
// (Programming Project 2 in Chapter 6 describes Euclid’s
// algorithm for computing the GCD.)

#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{
    int remainder = 0;
    while (n > 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

int main(void)
{
    printf("%d\n", gcd(360, 48)); // 24
    return EXIT_SUCCESS;
}
