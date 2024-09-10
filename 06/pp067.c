// Rearrange the square3.c program so that the for
// loop initializes i, tests i, and increments i.
// Don’t rewrite the program; in particular,
// don’t use any multiplications.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    int n;
    scanf("%d", &n);

    for (int i = 1, square = 1, odd = 3; i <= n; odd += 2, ++i)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return EXIT_SUCCESS;
}
