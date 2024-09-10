// Suppose that the function f has the following definition :
// int f(int a, int b){...}
// Which of the following statements are legal ?
// (Assume that i has type int and x has type double.)
// (a) i = f(83, 12);
// (b) x = f(83, 12);
// (c) i = f(3.15, 9.28);
// (d) x = f(3.15, 9.28);
// (e) f(83, 12);

#include <stdio.h>
#include <stdlib.h>

int f(int a, int b)
{
    return 0;
}

int main(void)
{
    int i;
    double x;
    i = f(83, 12);     // they are all legal
    x = f(83, 12);     // no warning here
    i = f(3.15, 9.28); // implicit conversion warnings
    x = f(3.15, 9.28); // implicit conversion warnings
    f(83, 12);

    return EXIT_SUCCESS;
}
