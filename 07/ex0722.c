// Which of the following are not legal constants in C? Classify each legal constant
// as either integer or floating-point.
// (a) 010E2
// (b) 32.1E+5
// (c) 0790
// (d) 100_000
// (e) 3.978e-2

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%f\n", 010E2);
    printf("%f\n", 32.1E+5);
    // printf("%d\n", 0790); // illegal, 9
    // printf("%d\n", 100_000); // illegal, _
    printf("%f\n", 3.978e-2);

    return EXIT_SUCCESS;
}
