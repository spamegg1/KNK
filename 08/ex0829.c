// Using the array of Exercise 8, write a program
// fragment that computes the average temperature for a month
// (averaged over all days of the month and all hours of the day).

#include <stdio.h>
#include <stdlib.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
    double temperature_readings[DAYS][HOURS] = {0}; // in a full program this would be given
    double average = 0.0;

    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < HOURS; j++)
        {
            average += temperature_readings[i][j];
        }
    }

    printf("%lf\n", average / (DAYS * HOURS));

    return EXIT_SUCCESS;
}
