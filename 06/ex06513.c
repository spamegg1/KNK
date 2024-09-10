// Rewrite the following loop so that its body is empty:
// for (n = 0; m > 0; n++)
// m /= 2;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m = 50;
    for (int n = 0; m > 0; n++, m /= 2)
        ;
    return EXIT_SUCCESS;
}
