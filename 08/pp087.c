// Write a program that reads a 5 × 5 array of integers
// and then prints the row sums and the column sums:
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totals: 30 27 40 36 28
// Column totals: 34 37 37 32 21

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[5][5] = {0};

    for (int row = 0; row < 5; row++)
    {
        printf("Enter row %d: ", row + 1);

        for (int col = 0; col < 5; col++) // read 5 integers
        {
            scanf("%d", &numbers[row][col]);
        }
    }

    printf("Row totals: ");
    int row_total = 0;

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            row_total += numbers[row][col];
        }
        printf("%d ", row_total);
        row_total = 0;
    }

    printf("\nColumn totals: ");
    int col_total = 0;

    for (int col = 0; col < 5; col++)
    {
        for (int row = 0; row < 5; row++)
        {
            col_total += numbers[row][col];
        }
        printf("%d ", col_total);
        col_total = 0;
    }

    return EXIT_SUCCESS;
}
