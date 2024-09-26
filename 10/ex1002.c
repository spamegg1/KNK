// 2. The following program outline shows only
// function definitions and variable declarations.
// For each of the following scopes, list all variable and
// parameter names visible in that scope.
// If there’s more than one variable or parameter with the same name,
// indicate which one is visible.
// (a) The f function
// (b) The g function
// (c) The block in which a and d are declared
// (d) The main function *

#include <stdio.h>
#include <stdlib.h>

int b, c;

void f(void)
{
    int b, d;
    // (a) b (local to f), c and d
}

void g(int a)
{
    int c;
    {
        int a, d; // (c) a (declared in block), b, c (local to g) and d
    }
    // (b) a (parameter), b and c (local to g)
}

int main(void)
{
    int c, d;
    return EXIT_SUCCESS;
    // (d) b, c (local to main) and d
}
