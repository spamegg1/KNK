// Modify Programming Project 14 from Chapter 8
// so that it uses a pointer instead of an integer to keep
// track of the current position in the array that contains the sentence.

// Write a program that reverses the words in a sentence:
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
// Hint: Use a loop to read the characters one by one and store them in a
// one-dimensional char array. Have the loop stop at a period, question mark,
// or exclamation point (the “terminating character”),
// which is saved in a separate char variable. Then use a second loop to
// search backward through the array for the beginning of the last word.
// Print the last word, then search backward for the next-to-last word.
// Repeat until the beginning of the array is reached.
// Finally, print the terminating character.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(void)
{
    char c = 0;
    char terminating = 0;
    char sentence[SIZE] = {0};

    printf("Enter a sentence: ");

    int i = 0;
    while ((c = getchar()) != '\n')
    {
        if (c == '.' || c == '?' || c == '!')
        {
            terminating = c;
            break;
        }
        sentence[i] = c;
        i++;
    }

    printf("Reversal of sentence: ");

    while (0 <= i)
    {
        int j = i + 1; // the end index of word

        while (sentence[i] != ' ' && 0 <= i)
            i--; // go to beginning of word

        // word is between i and j: O = word, X = not the word
        //  | i |i+1|...|j-1| j |
        //  | X | O |...| O | X |
        for (int k = i + 1; k < j; k++)
            putchar(sentence[k]);

        if (0 <= i)
            putchar(' ');

        i--; // go back past the space character.
    }

    putchar(terminating);
    printf("\n");

    return EXIT_SUCCESS;
}
