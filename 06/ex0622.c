// What output does the following program fragment produce?
// int i = 9384;
// do {
//     printf("%d ", i);
//     i /= 10;
// } while (i > 0);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 9384;
    do
    {
        printf("%d ", i); // 9384 938 93 9
        i /= 10;
    } while (i > 0);

    return EXIT_SUCCESS;
}
