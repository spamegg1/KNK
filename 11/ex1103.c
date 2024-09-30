// The following function supposedly computes
// the sum and average of the numbers in the
// array a, which has length n. avg and sum
// point to variables that the function should modify.
// Unfortunately, the function contains several errors;
// find and correct them.

#include <stdio.h>
#include <stdlib.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0; // error here, needs star
    for (i = 0; i < n; i++)
        *sum += a[i]; // error here, needs star
    *avg = *sum / n;  // error here, needs stars on both avg and sum
}

int main(void)
{

    return EXIT_SUCCESS;
}
