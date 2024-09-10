// The following(rather confusing) function finds the median of three
// numbers. Rewrite the function so that it has just one return statement.

#include <stdio.h>
#include <stdlib.h>

double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z)
            return y;
        else if (x <= z) // warning
            return z;
        else
            return x;
    if (z <= y)
        return y;
    if (x <= z)
        return x;
    return z;
}

double median2(double x, double y, double z)
{
    // There are 6 cases, each of x, y, z is median in 2 cases
    double median = x;                            // 2 cases where x is median
    if ((x <= y && y <= z) || (z <= y && y <= x)) // 2 cases where y is median
        median = y;
    else if ((x <= z && z <= y) || (y <= z && z <= x)) // 2 cases where z is median
        median = z;
    return median;
}

int main(void)
{
    printf("%f\n", median2(1, 2, 3)); // 2
    printf("%f\n", median2(2, 1, 3)); // 2
    printf("%f\n", median2(1, 3, 2)); // 2
    printf("%f\n", median2(3, 1, 2)); // 2
    printf("%f\n", median2(2, 3, 1)); // 2
    printf("%f\n", median2(3, 2, 1)); // 2

    return EXIT_SUCCESS;
}
