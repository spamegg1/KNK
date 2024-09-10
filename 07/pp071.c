// The square2.c program of Section 6.3 will fail (usually by printing
// strange answers) if i * i exceeds the maximum int value.
// Run the program and determine the smallest value of n that causes failure.
// Try changing the type of i to short and running the program again.
// (Don’t forget to update the conversion specifications in the call of printf!)
// Then try long. From these experiments, what can you conclude about
// the number of bits used to store integer types on your machine?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // short int values are usually stored in 16 bits, causing
    // failure at 182. int and long int values are usually stored
    // in 32 bits, with failure occurring at 46341.
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld - %10ld\n", i, i * i);
    // Smallest value of n that causes failure while i is of type
    // `short`: 32767,      gets in an infinite loop
    // `int`  : 46341,      becomes negative (overflow, wrap around)
    // `long` : 3037000500, takes way too long, I don't care.

    // Therefore, my machine stores short in 16 bits,
    // int as 32 bits and long in 64 bits.
    return EXIT_SUCCESS;
}
