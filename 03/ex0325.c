// Suppose that we call scanf as follows:
// scanf("%f%d%f", &x, &i, &y);
// If the user enters
// 12.3 45.6 789
// what will be the values of x, i, and y after the call?
// (Assume that x and y are float variables and i is a float variable.)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    float x, y;
    scanf("%f%d%f", &x, &i, &y);
    printf("x: %f, i: %d, y: %f\n", x, i, y); // x: 12.300000, i: 45, y: 0.600000
    return EXIT_SUCCESS;
}