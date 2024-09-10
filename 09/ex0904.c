// Write a function day_of_year(month, day, year) that
// returns the day of the year (an integer between 1 and 366)
// specified by the three arguments.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int days_non_leap[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int days_leap[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

bool leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int days_up_to_month(bool is_leap, int month)
{
    return is_leap ? days_leap[month - 1] : days_non_leap[month - 1];
}

int day_of_year(int month, int day, int year)
{
    return day + days_up_to_month(leap_year(year), month);
}

int main(void)
{
    printf("Enter month/day/year: ");

    int day, month, year;
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Day of year: %d\n", day_of_year(month, day, year));

    return EXIT_SUCCESS;
}
