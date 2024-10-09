// Section 8.2 had a program fragment in which
// two nested for loops initialized the array
// ident for use as an identity matrix.
// Rewrite this code, using a single pointer to step
// through the array one element at a time.
// Hint: Since we won’t be using row and col index
// variables, it won’t be easy to tell where to store 1.
// Instead, we can use the fact that
// the first element of the array should be 1,
// the next N elements should be 0,
// the next element should be 1,
// and so forth. Use a variable to keep track
// of how many consecutive 0s have been
// stored; when the count reaches N, it’s time to store 1.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    return EXIT_SUCCESS;
}
