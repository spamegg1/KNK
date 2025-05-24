// Assume that the following array contains a
// week’s worth of hourly temperature readings,
// with each row containing the readings for one day:
// int temperatures[7][24];
// Write a statement that uses the search function
// (see Exercise 7) to search the entire
// temperatures array for the value 32.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    return false;
}

int main(void)
{
    int temperatures[7][24] = {{32}};
    bool has32 = search(temperatures[0], 7 * 24, 32);
    printf("%b\n", has32);
    return EXIT_SUCCESS;
}
