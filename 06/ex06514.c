// Find the error in the following program fragment and fix it.
// if (n % 2 == 0);
//     printf("n is even\n");

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    // The problem is the semicolon at the end of the first line.
    // If we remove it, the statement is now correct:
    if (n % 2 == 0)
        printf("n is even\n");

    return EXIT_SUCCESS;
}
