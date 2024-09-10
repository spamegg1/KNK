// Suppose that
// i is a variable of type int,
// f is a variable of type float, and
// d is a variable of type double.
// What is the type of the expression i * f / d?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    float f = 2.0f;
    double d = 3.0;

    // double, as it will promote the other types automatically to double.
    printf("%lf\n", i * f / d);

    return EXIT_SUCCESS;
}
