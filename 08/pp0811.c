// Modify Programming Project 4 from
// Chapter 7 so that the program labels its output:
// Enter phone number: 1-800-COL-LECT
// In numeric form: 1-800-265-5328
// The program will need to store the phone number
// (either in its original form or in its numeric form)
// in an array of characters until it can be printed.
// You may assume that the phone number
// is no more than 15 characters long.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char phone[15] = {0};
    char c;

    printf("Enter phone number: ");

    int i = 0;
    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
        case 'A':
        case 'B':
        case 'C':
            phone[i] = '2';
            i += 1;
            break;
        case 'D':
        case 'E':
        case 'F':
            phone[i] = '3';
            i += 1;
            break;
        case 'G':
        case 'H':
        case 'I':
            phone[i] = '4';
            i += 1;
            break;
        case 'J':
        case 'K':
        case 'L':
            phone[i] = '5';
            i += 1;
            break;
        case 'M':
        case 'N':
        case 'O':
            phone[i] = '6';
            i += 1;
            break;
        case 'P':
        case 'R':
        case 'S':
            phone[i] = '7';
            i += 1;
            break;
        case 'T':
        case 'U':
        case 'V':
            phone[i] = '8';
            i += 1;
            break;
        case 'W':
        case 'X':
        case 'Y':
            phone[i] = '9';
            i += 1;
            break;
        default:
            phone[i] = c;
            i += 1;
            break;
        }
    }
    printf("\n");

    printf("In numeric form: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%c", phone[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
