// Translate the program fragment of Exercise 1 into a single for statement.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 1; i <= 128; i *= 2)
        printf("%d ", i);

    return EXIT_SUCCESS;
}
