// Which one of the following statements is not equivalent
// to the other two (assuming that the loop bodies are the same)?
// (a) while (i < 10) {...}
// (b) for (; i < 10;) {...}
// (c) do {...} while (i < 10);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // The third statement (c) is not equivalent to the other two,
    // because the `do` statement will always run at least once,
    // then check if the condition in the `while` statment is true,
    // unlike the other two statements, which always check the condition first.
    // We can see this by starting with i >= 10.
    int i = 25;

    while (i < 10)
    {
        printf("%d ", i); // prints nothing
        i++;
    }

    printf("\n");
    i = 25;

    for (; i < 10;)
    {
        printf("%d ", i); // prints nothing
        i++;
    }

    printf("\n");
    i = 25;

    do
    {
        printf("%d ", i); // prints 25
        i++;
    } while (i < 10);

    printf("\n");

    return EXIT_SUCCESS;
}
