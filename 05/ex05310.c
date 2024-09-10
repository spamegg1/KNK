// What output does the following program fragment produce?
// (Assume that i is an integer variable.)
// i = 1;
// switch (i % 3) {
//     case 0: printf("zero");
//     case 1: printf("one");
//     case 2: printf("two");
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    switch (i % 3)
    {
    case 0:
        printf("zero"); // skip this, since 1 % 3 = 1
    case 1:
        printf("one"); // prints one
    case 2:
        printf("two"); // also prints two, because no break!
    }

    return EXIT_SUCCESS;
}