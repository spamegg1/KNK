#include <stdio.h>

int main(void)
{
    // 3.1.1
    // What output do the following calls of printf produce?
    printf("%6d,%4d\n", 86, 100);    //     86, 100
    printf("%12.5e\n", 30.253);      // 3.02530e+01
    printf("%.4f\n", 83.162);        // 83.1620
    printf("%-6.2g\n", .0000009979); // 1e-06

    // 3.1.2
    // Write calls of printf that display a float variable x in the following
    // forms:
    // (a) Exponential notation, left-justified in a field of size 8,
    // one digit after the decimal point.
    float x = 3.14159265f;
    printf("%-8.1e\n", x); // 3.1e+00

    // (b) Exponential notation, right-justified in a field of size 10,
    // six digits after the decimal point.
    printf("%10.6e\n", x); // 3.141593e+00

    // (c) Fixed decimal notation, left-justified in a field of size 8,
    // three digits after the decimal point.
    printf("%-8.3f\n", x); // 3.142

    // (d) Fixed decimal notation, right-justified in a field of size 6,
    // no digits after the decimal point.
    printf("%6.0f\n", x); //      3

    // 3.2.3
    // For each of the following pairs of scanf strings, indicate whether or not
    // the two strings are equivalent. If they're not, show how they are
    // distinguished.
    int a, b, c, d, e, f, g, h;
    float y, z, s, t, u, v;

    // (a) "%d" versus " %d"
    // these two are equivalent:
    // scanf("%d", &a);
    // printf("%d\n", a);
    // scanf(" %d", &b);
    // printf("%d\n", b);

    // (b) "%d-%d-%d" versus "%d -%d -%d"
    // these two are not equivalent. The input "2 -3 -4" does not work on the
    // first one correctly, but works correctly on the second one.
    // scanf("%d-%d-%d", &c, &d, &e);
    // printf("first:%d second:%d third:%d\n", c, d, e);
    // scanf("%d -%d -%d", &f, &g, &h);
    // printf("first:%d second:%d third:%d\n", f, g, h);

    // (c) "%f" versus "%f "
    // these two are not equivalent. Input "1.23" does not work on the second.
    // for some reason it expects TWO non-whitespace inputs.
    // scanf("%f", &y);
    // printf("%f\n", y);
    // scanf("%f ", &z);
    // printf("%f\n", z);

    // (d) "%f,%f" versus "%f, %f"
    // These two are equivalent:
    // scanf("%f,%f", &s, &t);
    // printf("%f,%f\n", s, t);
    // scanf("%f, %f", &u, &v);
    // printf("%f, %f\n", u, v);

    // 3.2.4
    // Suppose that we call scanf as follows:
    // scanf("%d%f%d", &i, &x, &j);
    // If the user enters 10.3 5 6
    // what will be the values of i, x, j after the call? (Assume i and j are
    // int variables and x is a float variable.)
    int i, j;
    // scanf("%d%f%d", &i, &x, &j);      // user inputs 10.3 5 6
    // printf("value of i is: %d\n", i); // 10
    // printf("value of j is: %d\n", j); // 5
    // printf("value of x is: %f\n", x); // 0.300000

    // 3.2.5
    // Suppose that we call scanf as follows:
    // scanf("%f%d%f", &x, &i, &y);
    // If the user enters 12.3 45.6 789
    // what will be the values of x, i, y after the call? (Assume x and y are
    // float variables and i is an int variable.)
    // scanf("%f%d%f", &x, &i, &y);      // user inputs 12.3 45.6 789
    // printf("value of x is: %f\n", x); // 12.300000
    // printf("value of i is: %d\n", i); // 45
    // printf("value of y is: %f\n", y); // 0.600000

    return 0;
}
