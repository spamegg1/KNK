// Are the following if statements equivalent? If not, why not?

// if (score >= 90)
//     printf("A");
// else if (score >= 80)
//     printf("B");
// else if (score >= 70)
//     printf("C");
// else if (score >= 60)
//     printf("D");
// else
//     printf("F");

// if (score < 60)
//     printf("F");
// else if (score < 70)
//     printf("D");
// else if (score < 80)
//     printf("C");
// else if (score < 90)
//     printf("B");
// else
//     printf("A");

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // The statements are equivalent.
    int score = 50;

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");

    return EXIT_SUCCESS;
}