// Write a program that declares several int and float variables - without
// initializing them - and then prints their values. Is there any pattern to the
// values? (Usually there isn't.)

// Here's one possible program:
#include <stdio.h>

int main(void)
{
    int i, j, k;
    float x, y, z;
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
    printf("Value of k: %d\n", k);
    printf("Value of x: %g\n", x);
    printf("Value of y: %g\n", y);
    printf("Value of z: %g\n", z);
    return 0;
}

// When compiled using GCC and then executed,
// this program produced the following output:
// Value of i: 5618848
// Value of j: 0
// Value of k: 6844404
// Value of x: 3.98979e-34
// Value of y: 9.59105e-39
// Value of z: 9.59105e-39
// The values printed depend on many factors,
// so the chance that you'll get exactly these numbers is small.