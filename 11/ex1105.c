// Write the following function:
// void split_time(long total_sec, int *hr, int *min, int *sec);
// total_sec is a time represented as the number of seconds
// since midnight. hr, min, and
// sec are pointers to variables in which the
// function will store the equivalent time in hours
// (0–23), minutes (0–59), and seconds (0–59), respectively.

#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = (total_sec % 3600) % 60;
}

int main(void)
{
    long total_sec = 36659; // 10 hr 10 min 59 sec
    // long total_sec = 3721; // 1 hr 2 min 1 sec
    int hr;
    int min;
    int sec;
    split_time(total_sec, &hr, &min, &sec);
    printf("%d hr %d min %d sec\n", hr, min, sec);

    return EXIT_SUCCESS;
}
