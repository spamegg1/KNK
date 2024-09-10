// What will be the output of the following program?

#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;                 // these don't change b/c passed by value (copied)
    swap(i, j);                       // swap happens only to the copies passed by value
    printf("i = %d, j = %d\n", i, j); // i = 1, j = 2, didn't change

    return EXIT_SUCCESS;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
