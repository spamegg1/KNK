// 1. If i is a variable and p points to i,
// which of the following expressions are aliases for i?
// (a) *p
// (c) *&p
// (e) *i
// (g) *&i
// (b) &p
// (d) &*p
// (f) &i
// (h) &*i

#include <stdio.h>
#include <stdlib.h>

// solution: (a) and (g)
int main(void)
{
    int i = 0;   // i is a variable
    int *p = &i; // p points to i
    // (a) *p
    // (c) *&p
    // (e) *i
    // (g) *&i
    // (b) &p
    // (d) &*p
    // (f) &i
    // (h) &*i

    return EXIT_SUCCESS;
}
