// Suppose that i is a variable of type int, j is a variable of type long,
// and k is a variable of type unsigned int.
// What is the type of the expression i + (int) j * k?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // unsigned int, because the (int) cast applies only to j, not j * k.
    // j casts to int, and k promotes the expression to unsigned int.
    int i = 1;
    long j = 2;
    unsigned int k = 3;
    printf("%u\n", i + (int)j * k);

    return EXIT_SUCCESS;
}
