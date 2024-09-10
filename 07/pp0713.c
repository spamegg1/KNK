// Write a program that calculates the average word length for a sentence:
// Enter a sentence: It was deja vu all over again.
// Average word length: 3.4
// For simplicity, your program should consider a punctuation mark
// to be part of the word to which it is attached.
// Display the average word length to one decimal place.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int words = 1;
    double total_length = 0.0;

    printf("Enter a sentence:\n");
    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
        {
            words += 1;
        }
        else
        {
            total_length += 1;
        }
    }

    printf("Average word length: %.1f\n", total_length / words);

    return EXIT_SUCCESS;
}
