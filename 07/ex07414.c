// Does the following statement always compute the fractional
// part of f correctly (assuming that f and frac_part are float variables)?
// frac_part = f - (int) f;
// If not, what’s the problem?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // No. Converting f to int will fail if the value
    // stored in f exceeds the largest value of type int.
    float f = 2147483648.3f; // 2147483647 is max int value
    float frac_part = 0.0f;
    frac_part = f - (int)f;    // should be 0.3
    printf("%f\n", frac_part); // 4294967296.000000

    return EXIT_SUCCESS;
}
