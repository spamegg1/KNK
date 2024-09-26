// The following program outline shows only function definitions
// and variable declarations.
// For each of the following scopes, list all variable and
// parameter names visible in that scope:
// (a) The f function
// (b) The g function
// (c) The block in which e is declared
// (d) The main function

#include <stdio.h>
#include <stdlib.h>

int a;

void f(int b)
{
    int c;
    // (a) a, b and c
}

void g(void)
{
    int d;
    {
        int e; // (c) a, d and e
    }
    // (b) a and d. (e is only available within its block)
}

int main(void)
{
    int f;
    return EXIT_SUCCESS;
    // (d) a and f
}
