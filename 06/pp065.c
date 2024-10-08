// Programming Project 1 in Chapter 4 asked you to write a program that
// displays a two-digit number with its digits reversed.
// Generalize the program so that the number can have one, two, three,
// or more digits. Hint: Use a do loop that repeatedly divides the
// number by 10, stopping when it reaches 0.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Digits reversed: ");

    do
    {
        printf("%d", n % 10);
        n /= 10;
    } while (n != 0);

    printf("\n");

    return EXIT_SUCCESS;
}
