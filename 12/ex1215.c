// Write a loop that prints all temperature readings
// stored in row i of the temperatures array (see Exercise 14).
// Use a pointer to visit each element of the row.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int temperatures[7][12] =
    {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36},
        {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48},
        {49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72},
        {73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84}
    };

    int i = 2;
    int *p = temperatures[i];
    int *next_row_start = temperatures[i + 1];

    // should print 25-36
    while (p < next_row_start)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    return EXIT_SUCCESS;
}
