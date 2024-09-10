// Modify Programming Project 8 from Chapter 5 so that the departure times
// are stored in an array and the arrival times are stored in a second array.
// (The times are integers, representing the number of minutes since midnight.)
// The program will use a loop to search the array of departure times
// for the one closest to the time entered by the user.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_time(int depart, int arrive)
{
    int dep_hour = depart / 60;
    int dep_min = depart % 60;
    char dep_time = dep_hour >= 12 ? 'p' : 'a';
    dep_hour = dep_hour > 12 ? dep_hour - 12 : dep_hour;

    int arr_hour = arrive / 60;
    int arr_min = arrive % 60;
    char arr_time = arr_hour >= 12 ? 'p' : 'a';
    arr_hour = arr_hour > 12 ? arr_hour - 12 : arr_hour;

    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
           dep_hour, dep_min, dep_time,
           arr_hour, arr_min, arr_time);
}

int main(void)
{
    int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int user_time, hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    printf("Closest departure time is ");

    for (int i = 0; i < 7; i++)
    {
        if (user_time <= departures[i] + (departures[i + 1] - departures[i]) / 2)
        {
            print_time(departures[i], arrivals[i]);
            return EXIT_SUCCESS;
        }
    }
    print_time(departures[7], arrivals[7]);
    return EXIT_SUCCESS;
}