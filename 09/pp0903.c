// Modify Programming Project 9 from Chapter 8 so that
// it includes the following functions:
// void generate_random_walk(char walk[10][10]);
// void print_array(char walk[10][10]);
// main first calls generate_random_walk,
// which initializes the array to contain '.' characters
// and then replaces some of these characters by the letters A through Z,
// as described in the original project.
// main then calls print_array to display the array on the screen.
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

void generate_random_walk(char walk[SIZE][SIZE])
{
    srand(time(NULL)); // set up the random seed based on time.

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            walk[i][j] = '.';
    }
    walk[0][0] = 'A';

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
        if (0 < row && walk[row - 1][col] == '.') // we can go up
        {
            directions[0] = true;
            all_illegal = false;
        }
        if (row < SIZE - 1 && walk[row + 1][col] == '.') // we can go down
        {
            directions[1] = true;
            all_illegal = false;
        }
        if (0 < col && walk[row][col - 1] == '.') // we can go left
        {
            directions[2] = true;
            all_illegal = false;
        }
        if (col < SIZE - 1 && walk[row][col + 1] == '.') // we can go right
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

            walk[row][col] = letter; // add letter to grid, increment letter
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
}

void print_array(char walk[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            printf("%c", walk[i][j]);
        printf("\n");
    }
}

int main(void)
{
    char walk[SIZE][SIZE];
    generate_random_walk(walk);
    print_array(walk);
    return EXIT_SUCCESS;
}
