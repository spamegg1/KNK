// Which one of the following statements is not equivalent to the
// other two (assuming that the loop bodies are the same)?
// (a) for (i = 0; i < 10; i++) ...
// (b) for (i = 0; i < 10; ++i) ...
// (c) for (i = 0; i++ < 10; ) ...

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i); // 0 1 2 3 4 5 6 7 8 9
    }
    printf("\n");

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", i); // 0 1 2 3 4 5 6 7 8 9
    }
    printf("\n");

    for (i = 0; i++ < 10;)
    {
        printf("%d ", i); // 1 2 3 4 5 6 7 8 9 10
    }
    printf("\n");

    // The third statement (c) is not equivalent to the other two,
    // because the postfix increment operator will only be applied
    // after the conditional expression is evaluated, unlike the other
    // two in which the two expressions are separate.

    return EXIT_SUCCESS;
}
