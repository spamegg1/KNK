// Modify Programming Project 11 so that the program continues adding
// terms until the current term becomes less than ε, where ε is a
// small (floating-point) number entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double epsilon;
    printf("Enter epsilon: ");
    scanf("%lf", &epsilon);

    long denom = 1;
    double e = 1.0, term = 1.0;
    for (int i = 1; term > epsilon; i++)
    {
        denom *= i;
        term = 1.0 / denom;
        e += term;
    }
    printf("Approximation of e: %-.20f\n", e);

    return EXIT_SUCCESS;
}
