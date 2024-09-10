// Suppose that
// i is a variable of type int,
// f is a variable of type float, and
// d is a variable of type double.
// Explain what conversions take place during the execution
// of the following statement:
// d = i + f;

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    float f = 2.0f;
    double d = 3.0;

    // The value of i is converted to float and added to f,
    // then the result is converted to double and stored in d.
    d = i + f;
    printf("%lf\n", d);

    return EXIT_SUCCESS;
}
