// What output does the following program fragment produce?
// i = 1;
// while (i <= 128) {
//     printf("%d ", i);
//     i *= 2;
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    while (i <= 128)
    {
        printf("%d ", i); // 1 2 4 8 16 32 64 128
        i *= 2;
    }

    return EXIT_SUCCESS;
}
