// Simplify Programming Project 2(b) by taking advantage
// of the fact that an array name can be used as a pointer.

// (a) Write a program that reads a message,
// then checks whether it’s a palindrome
// (the letters in the message are the same
// from left to right as from right to left):
// Enter a message: He lived as a devil, eh?
// Palindrome
// Enter a message: Madam, I am Adam.
// Not a palindrome
// Ignore all characters that aren’t letters.
// Use integer variables to keep track of positions in the array.
// (b) Revise the program to use pointers instead
// of integers to keep track of positions in the array.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* isalpha, toupper */

#define MAX_LEN 100

int main(void)
{
    char message[MAX_LEN];
    char ch;
    char *p = message;
    char *q;

    printf("Enter a message: ");
    while ((ch = toupper(getchar())) != '\n' && p < message + MAX_LEN)
    {
        if (isalpha(ch))
        {
            *p = ch;
            p++;
        }
    }
    p--;

    for (q = message; q < p; q++, p--)
    {
        if (*p != *q)
        {
            printf("Not a palindrome\n");
            return EXIT_SUCCESS;
        }
    }

    printf("Is a palindrome\n");
    return EXIT_SUCCESS;
}
