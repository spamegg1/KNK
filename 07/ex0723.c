// Which of the following are not legal types in C?
// (a) short unsigned int
// (b) short float
// (c) long double
// (d) unsigned long

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short unsigned int x = 0;
    // short float f = 0.0f; // not legal
    long double m = 0;
    unsigned long n = 0;

    return EXIT_SUCCESS;
}
