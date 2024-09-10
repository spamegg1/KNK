// Write a program that takes a first name and a last name entered by the user and
// displays the last name, a comma, and the first initial, followed by a period:
// Enter a first and last name: Lloyd Fosdick
// Fodsick, L.
// The user's input may contain extra spaces before the first name,
// between the first and last names, and after the last name.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c, initial;

    printf("Enter a first and last name: \n");
    scanf(" %c", &initial); // first char of first name is initial

    while ((c = getchar()) != ' ') // rest of first name, until space
        ;

    while ((c = getchar()) == ' ') // all the spaces until last name
        ;

    do
    {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' '); // last name

    printf(", %c.\n", initial); // initial.

    return EXIT_SUCCESS;
}
