// Supply parentheses to show how a C compiler
// would interpret each of the following expressions.
// (a) a * b - c * d + e
// (b) a / b % c / d
// (c) - a - b + c - + d
// (d) a * - b / c - d

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, d, e = 1;

    ((a * b) - (c * d)) + e; // * has precedence, left associativity
    ((a / b) % c) / d;       // same precedence, left associativity
    (((-a) - b) + c) - (+d); // unary- has precedence, left associativity
    ((a * (-b)) / c) - d;    // unary- has precedence, left associativity

    return EXIT_SUCCESS;
}