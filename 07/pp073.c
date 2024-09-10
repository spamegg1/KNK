// Modify the sum2.c program of Section 7.1 to sum a series of double values.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return EXIT_SUCCESS;
}
