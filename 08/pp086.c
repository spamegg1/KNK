// The prototypical Internet newbie is a fellow named B1FF, who has a unique
// way of writing messages. Here’s a typical B1FF communiqué:
// H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Write a “B1FF filter” that reads a message entered by the user
// and translates it into B1FF-speak:
// Enter message: Hey dude, C is rilly cool
// In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Your program should convert the message to upper-case letters,
// substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5),
// and then append 10 or so exclamation marks.
// Hint: Store the original message in an array of characters,
// then go back through the array, translating and printing characters one by one.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // toupper

#define MAXSIZE 100

int main(void)
{
    char message[MAXSIZE] = {0};
    char c;
    int i = 0;

    // read input char by char, store into array
    while ((c = getchar()) != '\n' && i < MAXSIZE)
    {
        message[i] = c;
        i++;
    }

    printf("In B1FF-speak: ");
    // (A→4, B→8, E→3, I→1, O→0, S→5)
    for (i = 0; i < MAXSIZE; i++)
    {
        switch (c = toupper(message[i]))
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(c);
            break;
        }
    }
    printf("!!!!!!!!!!\n");

    return EXIT_SUCCESS;
}
