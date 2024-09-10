// Write a program that asks the user for a 24-hour time,
// then displays the time in 12-hour form:
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM
// Be careful not to display 12:00 as 0:00.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");
    if (hour < 11)
        printf("%d:%d AM\n", hour == 0 ? 12 : hour, minute);
    else
        printf("%d:%d PM\n", hour == 12 ? 12 : hour - 12, minute);

    return EXIT_SUCCESS;
}