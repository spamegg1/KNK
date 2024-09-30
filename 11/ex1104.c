// Write the following function:
// void swap(int *p, int *q);
// When passed the addresses of two variables,
// swap should exchange the values of the variables:
// swap(&i, &j); /* exchanges values of i and j */

#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}

int main(void)
{
    int p = 1;
    int q = 2;
    printf("p is: %d and q is: %d\n", p, q);

    printf("swapping...\n");
    swap(&p, &q);
    printf("p is: %d and q is: %d\n", p, q);

    return EXIT_SUCCESS;
}
