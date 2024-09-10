// Write a program that asks the user for a 12-hour time,
// then displays the time in 24-hour form:
// Enter a 12-hour time: 9:11 PM
// Equivalent 24-hour time: 21:11
// See Programming Project 8 for a description of the input format.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int user_time, hour, minute;
    char indicator;

    printf("Enter a 12-hour time in one of the following formats:\n");
    printf("1:15p, 1:15P, 1:15 p, 1:15 P, 1:15pm, 1:15PM, 1:15 pm, 1:15 PM\n");
    printf("1:15a, 1:15A, 1:15 a, 1:15 A, 1:15am, 1:15AM, 1:15 am, 1:15 AM\n");
    scanf("%d:%d %c", &hour, &minute, &indicator);

    int extra_hour = (toupper(indicator) == 'P' && hour != 12) ? 12 : 0;
    int new_hour = extra_hour + hour;

    printf("Equivalent 24-hour time: %d:%d\n", new_hour, minute);

    return EXIT_SUCCESS;
}
