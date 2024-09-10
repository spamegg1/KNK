// What does the following statement print if i has the value 17?
// What does it print if i has the value –17?
// printf("%d\n", i >= 0 ? i : -i);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    i = 17;
    printf("%d\n", i >= 0 ? i : -i); // 17

    i = -17;
    printf("%d\n", i >= 0 ? i : -i); // 17

    return EXIT_SUCCESS;
}