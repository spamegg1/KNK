// Simplify Programming Project 1(b) by taking advantage of
// the fact that an array name can be used as a pointer.

// (a) Write a program that reads a message,
// then prints the reversal of the message:
// Enter a message: Don't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD
// Hint: Read the message one character at a time (using getchar)
// and store the characters in an array.
// Stop reading when the array is full or the character read is '\n'.
// (b) Revise the program to use a pointer instead of
// an integer to keep track of the current position in the array.

#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 100

// (b)
void print_reverse_ptr()
{
    char msg[MAXLEN];
    char c;
    char *p = msg;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && p < msg + MAXLEN)
    {
        *p = c;
        p++;
    }

    printf("Reversal is: ");
    while (p >= msg)
    {
        putchar(*p);
        p--;
    }
    printf("\n");
}

int main(void)
{
    print_reverse_ptr();
    return EXIT_SUCCESS;
}
