// Write a declaration of an array named weekend containing seven bool values.
// Include an initializer that makes the first and last values true;
// all other values should be false.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    bool weekend[7] = {true, false, false, false, false, false, true};

    for (int i = 0; i < sizeof(weekend); i++)
    {
        printf("%s\n", weekend[i] ? "true" : "false");
    }

    return EXIT_SUCCESS;
}
