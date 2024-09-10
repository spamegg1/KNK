// Is the following if statement legal?
// if (n == 1-10)
// printf("n is between 1 and 10\n");
// If so, what does it do when n is equal to 5?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Yes, the statement is legal. When n is equal to 5,
    // it does nothing, since 5 is not equal to -9.
    int n = 5; // if n == -9 then it is printed.
    if (n == 1 - 10)
        printf("n is between 1 and 10\n"); // not printed

    return EXIT_SUCCESS;
}