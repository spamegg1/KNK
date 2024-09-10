// What output does the following program fragment produce?
// int sum = 0;
// for (i = 0; i < 10; i++) {
//     if (i % 2)
//         continue;
//     sum += i;
// }
// printf("%d\n", sum);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)    // this means if i % 2 == 1, i.e. if i is odd
            continue; // skip odd numbers
        sum += i;
    }
    printf("%d\n", sum); // 20 = 2 + 4 + 6 + 8, odds are excluded

    return EXIT_SUCCESS;
}
