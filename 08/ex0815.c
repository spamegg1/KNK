// The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ...,
// where each number is the sum of the two preceding numbers.
// Write a program fragment that declares an array named fibonacci
// of length 40 and fills the array with the first 40 Fibonacci numbers.
// Hint: Fill in the first two numbers individually,
// then use a loop to compute the remaining numbers.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long fibonacci[40] = {0, 1};
    int size = (int)(sizeof(fibonacci) / sizeof(fibonacci[0]));

    for (int i = 2; i < size; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%ld\n", fibonacci[i]);
    }

    return EXIT_SUCCESS;
}
