// Suppose that i and j are variables of type int.
// What is the type of the expression i / j + 'a'?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, j = 2;
    printf("%d\n", i / j + 'a'); // it is an int. 'a' is promoted to int.
    return EXIT_SUCCESS;
}
