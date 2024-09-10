// Write a program that prints an n × n magic square
// (a square arrangement of the numbers 1, 2, ..., n^2 in which
// the sums of the rows, columns, and diagonals are all the same).
// The user will specify the value of n:
// This program creates a magic square of a specified size.
// The size must be an odd number between 1 and 99.
// Enter size of magic square: 5
// 17 24  1  8 15
// 23  5  7 14 16
//  4  6 13 20 22
// 10 12 19 21  3
// 11 18 25  2  9
// Store the magic square in a two-dimensional array.
// Start by placing the number 1 in the middle of row 0.
// Place each of the remaining numbers 2, 3, ..., n^2 by moving up one row and
// over one column. Any attempt to go outside the bounds of the array should
// “wrap around” to the opposite side of the array. For example, instead of
// storing the next number in row –1, we would store it in row n – 1
// (the last row). Instead of storing the next number in column n, we would
// store it in column 0. If a particular array element is already occupied,
// put the number directly below the previously stored number.
// If your compiler supports variable-length arrays,
// declare the array to have n rows and n columns.
// If not, declare the array to have 99 rows and 99 columns.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 99;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n]; // we cannot directly initialize it with {0}

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            square[i][j] = 0; // manually initialize it

    int row = 0;
    int col = n / 2;
    square[row][col] = 1;

    int new_row, new_col;
    for (int i = 2; i <= n * n; i++)
    {
        new_row = row;
        new_col = col;

        if (new_row - 1 < 0)
            new_row = n - 1;
        else
            new_row -= 1;

        if (new_col + 1 >= n)
            new_col = 0;
        else
            new_col += 1;

        if (square[new_row][new_col] != 0)
        {
            if (row + 1 >= n)
                new_row = 0;
            else
                new_row = row + 1;
            new_col = col;
        }
        square[new_row][new_col] = i;
        row = new_row;
        col = new_col;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", square[i][j]);
        printf("\n");
    }

    return EXIT_SUCCESS;
}
