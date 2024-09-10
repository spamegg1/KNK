// (C99) Repeat Exercise 3, but this time use a designated initializer.
// Make the initializer as short as possible.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    bool weekend[7] = {[0] = true, [6] = true};

    for (int i = 0; i < sizeof(weekend); i++)
    {
        printf("%s\n", weekend[i] ? "true" : "false");
    }

    return EXIT_SUCCESS;
}