// Using the shortcuts described in Section 8.2, shrink the
// initializer for the segments array (Exercise 6) as much as you can.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                                 {0, 1, 1},
                                 {1, 1, 0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};

    return EXIT_SUCCESS;
}
