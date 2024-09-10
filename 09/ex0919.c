// Consider the following “mystery” function:
// Trace the execution of the function by hand.
// Then write a program that calls the function,
// passing it a number entered by the user.
// What does the function do?

#include <stdio.h>
#include <stdlib.h>

void pb(int n) // it prints the binary version of n.
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    pb(31);
    printf("\n");
    return EXIT_SUCCESS;
}
