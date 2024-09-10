// Modify Programming Project 11 from Chapter 7
// so that the program labels its output:
// Enter a first and last name: Lloyd Fosdick
// You entered the name: Fosdick, L.
// The program will need to store the last name (but not the first name)
// in an array of characters until it can be printed.
// You may assume that the last name is no more than 20 characters long.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main(void)
{
    char c, initial;
    char last_name[SIZE] = {0};

    printf("Enter a first and last name: ");

    scanf("%c", &initial);     // first char of first name is initial
    while ((getchar()) != ' ') // rest of first name, until space
        ;
    while ((c = getchar()) == ' ') // all the spaces until last name
        ;

    int i = 0;
    do
    {
        last_name[i] = c;
        i++;
    } while ((c = getchar()) != '\n' && c != ' '); // last name

    printf("You entered the name: ");
    for (int j = 0; last_name[j] != 0; j++) // print last name
        putchar(last_name[j]);
    printf(", %c.\n", initial); // print initial

    return EXIT_SUCCESS;
}
