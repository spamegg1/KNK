// Create and run Kernighan and Ritchie's famous "hello, world" program:
// Do you get a warning from the compiler?
// If so, what's needed to make it go away?

#include <stdio.h>
#define EXIT_SUCCESS 0

int main(void)
{
    printf("hello, world\n");

    return EXIT_SUCCESS;
}

// Answer: did not get a warning from the compiler.
// I think it's about the missing return statement.
// So I added the return statement.
