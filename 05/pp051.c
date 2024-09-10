// Write a program that calculates how many digits a number contains:
// Enter a number: 374
// The number 374 has 3 digits
// You may assume that the number has no more than four digits.
// Hint: Use if statements to test the number.
// For example, if the number is between 0 and 9, it has one digit.
// If the number is between 10 and 99, it has two digits.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, d = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 9)
        d = 1;
    else if (n >= 10 && n <= 99)
        d = 2;
    else if (n >= 100 && n <= 999)
        d = 3;
    else if (n >= 1000 && n <= 9999)
        d = 4;

    printf("The number %d has %d digits\n", n, d);

    return EXIT_SUCCESS;
}