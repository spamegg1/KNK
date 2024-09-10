// Which of the following would be valid prototypes for a
// function that returns nothing and has one double parameter?
// (a) void f(double x);
// (b) void f(double);
// (c) void f(x);
// (d) f(double x);

#include <stdio.h>
#include <stdlib.h>

void f1(double x); // valid
void f2(double);   // valid
// void f3(x);        // not valid
// f4(double x);      // not valid

int main(void)
{

    return EXIT_SUCCESS;
}
