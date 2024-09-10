// For each of the following items of data,
// specify which one of the types char, short, int, or long
// is the smallest one guaranteed to be large enough to store the item.
// (a) Days in a month
// (b) Days in a year
// (c) Minutes in a day
// (d) Seconds in a day

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // (a) Days in a month
    char day_in_month = 31;

    // (b) Days in a year
    short day_in_year = 366; // leap year

    // (c) Minutes in a day
    short minute_in_day = 1440;

    // (d) Seconds in a day
    long second_in_day = 86760; // 24 days + 6 hours

    return EXIT_SUCCESS;
}
