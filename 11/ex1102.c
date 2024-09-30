// 2. If i is an int variable and p and q are
// pointers to int, which of the following assignments
// are legal?
// (a) p = i;
// (d) p = &q;
// (g) p = *q;
// (b) *p = &i;
// (e) p = *&q;
// (h) *p = q;
// (c) &p = q;
// (f) p = q;
// (i) *p = *q;

#include <stdio.h>
#include <stdlib.h>

// solution: (e, f, i) are legal
int main(void)
{
    int i = 0;   // i is a variable
    int *p = &i; // p is a pointer to i
    int *q = &i; // q is a pointer to i

    return EXIT_SUCCESS;
}
