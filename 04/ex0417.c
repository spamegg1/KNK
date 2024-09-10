// The algorithm for computing the UPC check digit ends with the following steps:
//
// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10.
// Subtract the remainder from 9.
//
// It’s tempting to try to simplify the algorithm by using these steps instead:
// Compute the remainder when the total is divided by 10.
// Subtract the remainder from 10.
//
// Why doesn’t this technique work?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Different results when total % 10 == 0 at start:
    int total = 1230;

    // first method
    total -= 1;                // 1229
    total %= 10;               // 9
    printf("%d\n", 9 - total); // 0

    total = 1230; // reset

    // second method
    total %= 10;                // 0
    printf("%d\n", 10 - total); // 10

    return EXIT_SUCCESS;
}