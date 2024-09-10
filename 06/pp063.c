// Write a program that asks the user to enter a fraction,
// then reduces the fraction to lowest terms:
// Enter a fraction: 6/12
// In lowest terms: 1/2
// Hint: To reduce a fraction to lowest terms, first compute the
// GCD of the numerator and denominator.
// Then divide both the numerator and denominator by the GCD.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, denom, n, m, r;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    m = num;
    n = denom;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d\n", num / m, denom / m);

    return EXIT_SUCCESS;
}
