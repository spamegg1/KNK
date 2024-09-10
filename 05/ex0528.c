// The following if statement is unnecessarily complicated. Simplify it as much as possible.
// (Hint: The entire statement can be replaced by a single assignment.)
// if (age >= 13)
//   if (age <= 19)
//     teenager = true;
//   else
//     teenager = false;
// else if (age < 13)
//   teenager = false;

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int age = 10;
    bool teenager;

    if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age < 13)
        teenager = false;

    // solution:
    teenager = 13 <= age && age <= 19;

    printf("%d\n", teenager); // 0 = false

    return EXIT_SUCCESS;
}