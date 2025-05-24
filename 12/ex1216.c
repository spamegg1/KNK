// Write a loop that prints the highest temperature in the
// temperatures array (see Exercise 14) for each day of the week.
// The loop body should call the find_largest function,
// passing it one row of the array at a time.

#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n)
{
    int *largest = a;
    for (int i = 0; i < n; i++)
        if (*largest < *(a + i))
            largest = a + i;
    return largest;
}

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

    int rows = 7;
    int entries = 12;

    // prints multiples of 12
    for (int row = 0; row < rows; row++)
        printf("%d\n", *find_largest(temperatures[row], entries));

    return EXIT_SUCCESS;
}
