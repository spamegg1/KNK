// Modify Programming Project 3 from Chapter 6
// so that it includes the following function:
// void reduce(int numerator, int denominator,
// int *reduced_numerator, int *reduced_denominator);
// numerator and denominator are the numerator and denominator of a fraction.
// reduced_numerator and reduced_denominator are pointers to variables in
// which the function will store the numerator and denominator
// of the fraction once it has been reduced to lowest terms.

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void reduce(
    int numerator,
    int denominator,
    int *reduced_numerator,
    int *reduced_denominator)
{
    int div = gcd(numerator, denominator);
    *reduced_numerator = numerator / div;
    *reduced_denominator = denominator / div;
}

int main(void)
{
    int numerator = 20;
    int denominator = 360;
    printf("Num: %d, Denom: %d\n", numerator, denominator);

    int reduced_numerator, reduced_denominator;
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("Reduced Num: %d, Reduced Denom: %d\n", reduced_numerator, reduced_denominator);

    return EXIT_SUCCESS;
}
