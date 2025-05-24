// Write the evaluate_position function described
// in Exercise 13 of Chapter 9. Use pointer arithmetic
// —not subscripting—to visit array elements.
// Use a single loop instead of nested loops.

#include <stdio.h>
#include <stdlib.h>

int evaluate_position(char board[8][8])
{
    int white = 0, black = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
            case 'Q':
                white += 9;
                break;
            case 'q':
                black += 9;
                break;
            case 'R':
                white += 5;
                break;
            case 'r':
                black += 5;
                break;
            case 'B':
                white += 3;
                break;
            case 'b':
                black += 3;
                break;
            case 'N':
                white += 3;
                break;
            case 'n':
                black += 3;
                break;
            case 'P':
                white++;
                break;
            case 'p':
                black++;
                break;
            default:
                break;
            }
        }
    }

    printf("white: %d\n", white);
    printf("black: %d\n", black);
    return white - black;
}

int evaluate_position_rewrite(char board[8][8])
{
    int white = 0, black = 0;
    char *p = *board;

    while (p < *board + 64)
    {
        switch (*p)
        {
            case 'Q':
                white += 9;
                break;
            case 'q':
                black += 9;
                break;
            case 'R':
                white += 5;
                break;
            case 'r':
                black += 5;
                break;
            case 'B':
                white += 3;
                break;
            case 'b':
                black += 3;
                break;
            case 'N':
                white += 3;
                break;
            case 'n':
                black += 3;
                break;
            case 'P':
                white++;
                break;
            case 'p':
                black++;
                break;
            default:
                break;
        }
        p++;
    }

    printf("white: %d\n", white);
    printf("black: %d\n", black);
    return white - black;
}

int main(void)
{
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    printf("%d\n", evaluate_position(board));         // 0
    printf("%d\n", evaluate_position_rewrite(board)); // 0

    return EXIT_SUCCESS;
}