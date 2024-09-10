// Write a program that generates a “random walk” across a 10 × 10 array.
// The array will contain characters (all '.' initially).
// The program must randomly “walk” from element to element,
// always going up, down, left, or right by one element.
// The elements visited by the program will be labeled with the letters
// A through Z, in the order visited. Here’s an example of the desired output:
// A . . . . . . . . .
// B C D . . . . . . .
// . F E . . . . . . .
// H G . . . . . . . .
// I . . . . . . . . .
// J . . . . . . . Z .
// K . . R S T U V Y .
// L M P Q . . . W X .
// . N O . . . . . . .
// . . . . . . . . . .
// Use the srand and rand functions (see deal.c) to generate random numbers.
// After generating a number, look at its remainder when divided by 4.
// There are four possible values for the remainder 0, 1, 2, and 3
// indicating the direction of the next move. Before performing a move,
// check that (a) it won’t go outside the array, and (b) it doesn’t take us to
// an element that already has a letter assigned. If either condition is
// violated, try moving in another direction. If all four directions are blocked,
// the program must terminate. Here’s an example of premature termination:
// A B G H I . . . . .
// . C F . J K . . . .
// . D E . M L . . . .
// . . . . N O . . . .
// . . W X Y P Q . . .
// . . V U T S R . . .
// . . . . . . . . . .
// . . . . . . . . . .
// . . . . . . . . . .
// . . . . . . . . . .
// Y is blocked on all four sides, so there’s no place to put Z.

#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h>   /* time() */
#include <stdbool.h>

#define SIZE 10
// #define RANDOM (rand() / ((double)RAND_MAX + 1)) * 4 // this does not work.

int main(void)
{
    srand(time(NULL)); // set up the random seed based on time.

    char grid[SIZE][SIZE]; // initialize grid.
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            grid[i][j] = '.';
    }
    grid[0][0] = 'A';

    char letter = 'B'; // increment this. If it reaches 'Z', loop back to 'A'.
    int row = 0;       // we start at top left.
    int col = 0;

    // directions: 0=up, 1=down, 2=left, 3=right
    bool directions[4] = {false}; // legal directions (up down left right)
    bool all_illegal;             // if all directions are illegal, stop.
    int choose_direction;         // randomly chosen direction (0,1,2,3)

    while (true) // main loop
    {
        all_illegal = true;

        // get available directions: should be inbounds, and not already lettered.
        if (0 < row && grid[row - 1][col] == '.') // we can go up
        {
            directions[0] = true;
            all_illegal = false;
        }
        if (row < SIZE - 1 && grid[row + 1][col] == '.') // we can go down
        {
            directions[1] = true;
            all_illegal = false;
        }
        if (0 < col && grid[row][col - 1] == '.') // we can go left
        {
            directions[2] = true;
            all_illegal = false;
        }
        if (col < SIZE - 1 && grid[row][col + 1] == '.') // we can go right
        {
            directions[3] = true;
            all_illegal = false;
        }

        // if there is at least 1 legal direction, randomly choose one.
        if (!all_illegal)
        {
            do
                choose_direction = rand() % 4;
            while (!directions[choose_direction]); // if illegal, choose again.

            // now go in that direction
            switch (choose_direction)
            {
            case 0: /* go up */
                row -= 1;
                break;
            case 1: /* go down */
                row += 1;
                break;
            case 2: /* go left */
                col -= 1;
                break;
            case 3: /* go right */
                col += 1;
                break;
            default:
                break;
            }

            grid[row][col] = letter; // add letter to grid, increment letter
            if (letter == 'Z')
                letter = 'A';
            else
                letter += 1;

            // reset all directions
            directions[0] = false;
            directions[1] = false;
            directions[2] = false;
            directions[3] = false;
        }
        else // all directions are illegal, stop.
            break;
    } // end of main loop

    // the walk is done, now print the grid.
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c", grid[i][j]);
        printf("\n");
    }

    return EXIT_SUCCESS;
}
