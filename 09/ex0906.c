// Write a function digit(n, k) that returns the kth digit
// (from the right) in n (a positive integer).
// For example,
// digit(829, 1) returns 9,
// digit(829, 2) returns 2, and
// digit(829, 3) returns 8.
// If k is greater than the number of digits in n,
// have the function return 0.

#include <stdio.h>
#include <stdlib.h>

int digit(int n, int k)
{
    if (k <= 0)
        return 0;
    while (k > 1)
    {
        k--;
        n /= 10;
    }
    return n % 10;
}

int main(void)
{
    int n, k;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter digit (from the right): ");
    scanf("%d", &k);
    printf("The %dth digit is: %d\n", k, digit(n, k));

    return EXIT_SUCCESS;
}
