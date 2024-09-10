// The following function, which computes the area of a triangle,
// contains two errors. Locate the errors and show how to fix them.
// (Hint : There are no errors in the formula.)
// double triangle_area(double base, height)
// double product;
// {
//     product = base * height;
//     return product / 2;
// }

#include <stdio.h>
#include <stdlib.h>

double triangle_area(double base, double height) // add type to height
{
    double product; // move this inside the function
    product = base * height;
    return product / 2;
}

int main(void)
{
    return EXIT_SUCCESS;
}
