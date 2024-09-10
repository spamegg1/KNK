// Which one of the following is not a legal way to write the number 65?
// (Assume that the character set is ASCII.)
// (a) 'A'
// (b) 0b1000001
// (c) 0101
// (d) 0x41

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sixty_five = 'A';
    printf("%d\n", sixty_five);

    sixty_five = 0b1000001; // not legal in ASCII, but clang allows it
    printf("%d\n", sixty_five);

    sixty_five = 0101;
    printf("%d\n", sixty_five);

    sixty_five = 0x41;
    printf("%d\n", sixty_five);

    return EXIT_SUCCESS;
}
