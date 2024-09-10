// Assume that a program contains the following declarations:
// char c = '\1';
// short s = 2;
// int i = -3;
// long m = 5;
// float f = 6.5f;
// double d = 7.5;
// Give the value and the type of each expression listed below.
// (a) c * i
// (b) s + m
// (c) f / c
// (d) d / s
// (e) f - d
// (f) (int) f

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("%d\n", c * i);  // int -3
    printf("%ld\n", s + m); // long 7
    printf("%f\n", f / c);  // float 6.5
    printf("%lf\n", d / s); // double 3.75
    printf("%lf\n", f - d); // double -1.0
    printf("%d\n", (int)f); // int 6

    return EXIT_SUCCESS;
}
