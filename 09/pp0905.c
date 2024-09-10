// Modify Programming Project 17 from Chapter 8 so that
// it includes the following functions:
// void create_magic_square(int n, char magic_square[n][n]);
// void print_magic_square(int n, char magic_square[n][n]);
// After obtaining the number n from the user,
// main will call create_magic_square,
// passing it an n × n array that is declared inside main.
// create_magic_square will fill the array with the numbers
// 1, 2, ..., n2 as described in the original project.
// main will then call print_magic_square, which will display
// the array in the format described in the original project.
// Note: If your compiler doesn’t support variable-length arrays,
// declare the array in main to be 99 × 99 instead of n × n
// and use the following prototypes instead:
// void create_magic_square(int n, char magic_square[99][99]);
// void print_magic_square(int n, char magic_square[99][99]);

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

void create_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0; // manually initialize it

    int row = 0;
    int col = n / 2;
    magic_square[row][col] = 1;

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

        if (magic_square[new_row][new_col] != 0)
        {
            if (row + 1 >= n)
                new_row = 0;
            else
                new_row = row + 1;
            new_col = col;
        }
        magic_square[new_row][new_col] = i;
        row = new_row;
        col = new_col;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", magic_square[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int n = 99;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    char square[n][n]; // we cannot directly initialize it with {0}
    create_magic_square(n, square);
    print_magic_square(n, square);
    return EXIT_SUCCESS;
}
