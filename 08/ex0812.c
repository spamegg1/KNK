// The Q&A section shows how to use a letter as an array subscript.
// Describe how to use a digit (in character form) as a subscript.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int digit_count[] = {1, 2, 3, 4, 5, 6};
    char c = '5';
    printf("%s\n", digit_count[c - '0'] == digit_count[5] ? "true" : "false"); /* true */

    return EXIT_SUCCESS;
}
