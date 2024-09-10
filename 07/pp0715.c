// Write a program that computes the factorial of a positive integer:
// Enter a positive integer: 6
// Factorial of 6: 720
// (a) Use a `short` variable to store the value of the factorial.
// What is the largest value of n for which the program correctly
// prints the factorial of n?
// (b) Repeat part (a), using an `int` variable instead.
// (c) Repeat part (a), using a `long` variable instead.
// (d) Repeat part (a), using a `long long` variable instead
// (if your compiler supports the `long long` type).
// (e) Repeat part (a), using a `float` variable instead.
// (f) Repeat part (a), using a `double` variable instead.
// (g) Repeat part (a), using a `long double` variable instead.
// In cases (e)-(g), the program will display a close approximation
// of the factorial, not necessarily the exact value.

// (a) 7
// (b) 13
// (c) 20
// (d) 20
// (e) 34
// (f) 170
// (g) 1754

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    long double fact = 1.0;

    printf("Enter a positive integer:\n");
    scanf("%d", &n);

    for (i = n; i > 1; i--)
        fact *= i;

    printf("Factorial of %d: %Lf\n", n, fact);

    return EXIT_SUCCESS;
}
