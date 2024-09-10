// Write a function num_digits(n) that returns
// the number of digits in n (a positive integer).
// Hint: To determine the number of digits in a number n,
// divide it by 10 repeatedly.
// When n reaches 0, the number of divisions
// indicates how many digits n originally had.

#include <stdio.h>
#include <stdlib.h>

int num_digits(int n)
{
    int divisions = 0;
    while (n > 0)
    {
        n /= 10;
        divisions++;
    }
    return divisions;
}

int main(void)
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Number of digits: %d\n", num_digits(n));

    return EXIT_SUCCESS;
}
