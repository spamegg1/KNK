// Modify Programming Project 8 from Chapter 5 so that the user enters
// a time using the 12-hour clock. The input will have the form
// *hours*:*minutes* followed by either `A`, `P`, `AM` or `PM`
// (either lower-case or upper-case). White space is allowed
// (but not required) between the numerical time and the AM/PM indicator.
// Examples of valid input:
// 1:15P
// 1:15PM
// 1:15p
// 1:15pm
// 1:15 P
// 1:15 PM
// 1:15 p
// 1:15 pm
// You may assume that the input has one of these forms;
// there is no need to test for errors.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int user_time,
        hour,
        minute,
        d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;
    char indicator;

    printf("Enter a 12-hour time in one of the following formats:\n");
    printf("1:15p, 1:15P, 1:15 p, 1:15 P, 1:15pm, 1:15PM, 1:15 pm, 1:15 PM\n");
    printf("1:15a, 1:15A, 1:15 a, 1:15 A, 1:15am, 1:15AM, 1:15 am, 1:15 AM\n");
    scanf("%d:%d %c", &hour, &minute, &indicator);

    int extra_hour = (toupper(indicator) == 'P' && hour != 12) ? 12 : 0;
    user_time = (extra_hour + hour) * 60 + minute;

    printf("Closest departure time is ");

    if (user_time <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (user_time < d2 + (d3 - d2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (user_time < d3 + (d4 - d3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (user_time < d4 + (d5 - d4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (user_time < d5 + (d6 - d5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (user_time < d6 + (d7 - d6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (user_time < d7 + (d8 - d7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return EXIT_SUCCESS;
}
