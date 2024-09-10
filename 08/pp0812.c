// Modify Programming Project 5 from Chapter 7 so that the SCRABBLE
// values of the letters are stored in an array.
// The array will have 26 elements,
// corresponding to the 26 letters of the alphabet.
// For example, element 0 of the array will store 1
// (because the SCRABBLE value of the letter A is 1),
// element 1 of the array will store 3
// (because the SCRABBLE value of the letter B is 3), and so forth.
// As each character of the input word is read, the program will use
// the array to determine the SCRABBLE value of that character.
// Use an array initializer to set up the array.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int scrabble[26] =
        {
            1,  // A
            3,  // B
            3,  // C
            2,  // D
            1,  // E
            4,  // F
            2,  // G
            4,  // H
            1,  // I
            8,  // J
            5,  // K
            1,  // L
            3,  // M
            1,  // N
            1,  // O
            3,  // P
            10, // Q
            1,  // R
            1,  // S
            1,  // T
            1,  // U
            4,  // V
            4,  // W
            8,  // X
            4,  // Y
            10  // Z
        };

    int sum = 0;
    char ch;
    printf("Enter a word: ");

    while ((ch = getchar()) != '\n')
        sum += scrabble[toupper(ch) - 'A'];
    printf("Scrabble value: %d\n", sum);

    return EXIT_SUCCESS;
}