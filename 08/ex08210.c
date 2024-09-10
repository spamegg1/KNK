// Write a declaration for an 8 × 8 char array named chess_board.
// Include an initializer that puts the following data into the array
// (one character per array element):
// r n b q k b n r
// p p p p p p p p
//   .   .   .   .
// .   .   .   .
// P P P P P P P P
// R N B Q K B N R

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                              {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                              {0, '.', 0, '.', 0, '.', 0, '.'},
                              {'.', 0, '.', 0, '.', 0, '.'},
                              {0, '.', 0, '.', 0, '.', 0, '.'},
                              {'.', 0, '.', 0, '.', 0, '.'},
                              {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                              {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    return EXIT_SUCCESS;
}
