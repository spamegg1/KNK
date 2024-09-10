// Modify the program of Programming Project 5 so that the polynomial is
// evaluated using the following formula (Horner's Rule):
// ((((3x + 2)x - 5)x - 1)x + 7)x - 6
// This requires fewer multiplications.

// Answer:
#include <stdio.h>

int main(void)
{
    int x, poly;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is ");
    printf("%d\n", poly);

    return 0;
}
