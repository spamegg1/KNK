// What output does the following `for` statement produce?
// for (i = 10; i >= 1; i /= 2)
//     printf("%d ", i++);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++); // 10 5 3 2 1 1 1 1 1 ...

    return EXIT_SUCCESS;
}
