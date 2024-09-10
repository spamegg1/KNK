// Write a function that computes the value of the following polynomial:
// 3x5 + 2x4 – 5x3 – x2 + 7x – 6
// Write a program that asks the user to enter a value for x,
// calls the function to compute the value of the polynomial,
// and then displays the value returned by the function.

#include <stdio.h>
#include <stdlib.h>

double poly(double x)
{
    return -6 + x * (7 + x * (-1 + x * (-5 + x * (2 + x * 3))));
}

int main(void)
{
    printf("Enter number: "); // if input is 1, result is 0
    double x;
    scanf("%lf", &x);
    printf("The value of the function is %f\n", poly(x));

    return EXIT_SUCCESS;
}
