// Section 8.2 had a program fragment in which
// two nested for loops initialized the array
// ident for use as an identity matrix.
// #define N 10
// double ident[N][N];
// int row, col;
// for (row = 0; row < N; row++)
//     for (col = 0; col < N; col++)
//         if (row == col)
//             ident[row][col] = 1.0;
//         else
//             ident[row][col] = 0.0;
// Rewrite this code, using a single pointer to step
// through the array one element at a time.
// Hint: Since we won’t be using row and col index
// variables, it won’t be easy to tell where to store 1.
// Instead, we can use the fact that
// the first element of the array should be 1,
// the next N elements should be 0,
// the next element should be 1,
// and so forth. Use a variable to keep track
// of how many consecutive 0s have been
// stored; when the count reaches N, it’s time to store 1.

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void)
{
    double ident[N][N];
    double *p = ident[0];
    *p = 1.0;
    p++;
    int zeros = 0;

    while (p < ident[0] + N * N)
    {
        if (zeros == N)
        {
            *p = 1.0;
            zeros = 0;
        }
        else
        {
            *p = 0.0;
            zeros++;
        }
        p++;
    }

    // Verify by printing
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
            printf("%.0f ", ident[row][col]);
        printf("\n");
    }

    return EXIT_SUCCESS;
}
