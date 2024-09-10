// Show how to replace a `continue` statement by an equivalent `goto` statement.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Consider the following while loop:
    while (0)
    {
        ;
        continue;
        ;
    }

    // The equivalent code using goto would have the following appearance:
    while (0)
    {
        ;
        goto loop_end;
        ;
    loop_end:; /* null statement */
    }

    // Label the end of the loop and goto that label:
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            continue;
        printf("%d ", i);
    }

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 1)
            goto end;
        printf("%d ", i);
    end:;
    }

    return EXIT_SUCCESS;
}
