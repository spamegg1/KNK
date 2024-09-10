// For each of the following pairs of scanf format strings,
// indicate whether or not the two strings are equivalent.
// If they’re not, show how they can be distinguished.
// (a) "%d" versus " %d"
// (b) "%d-%d-%d" versus "%d -%d -%d"
// (c) "%f" versus "%f "
// (d) "%f,%f" versus "%f, %f"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, o;
    float s, t;

    // equivalent due to 0 or more whitespace rule
    printf("First doing \"%%d\"\n");
    scanf("%d", &m);
    printf("Now doing \" %%d\"\n");
    scanf(" %d", &n);

    // equivalent due to 0 or more whitespace rule
    printf("First doing \"%%d-%%d-%%d\"\n");
    scanf("%d-%d-%d", &m, &n, &o);
    printf("Now doing \"%%d -%%d -%%d\"\n");
    scanf("%d -%d -%d", &m, &n, &o);

    // Not equivalent. Second one requires a non-whitespace to stop pattern matching.
    printf("First doing \"%%f\"\n");
    scanf("%f", &t);
    printf("Now doing \"%%f \"\n");
    scanf("%f ", &t);

    // equivalent due to 0 or more whitespace rule
    printf("First doing \"%%f,%%f\"\n");
    scanf("%f,%f", &s, &t);
    printf("Now doing \"%%f, %%f\"\n");
    scanf("%f, %f", &s, &t);

    return EXIT_SUCCESS;
}