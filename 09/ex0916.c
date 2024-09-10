// Condense the fact function in the same way we condensed power.
// int fact(int n)
// {
//     if (n <= 1)
//         return 1;
//     else
//         return n * fact(n - 1);
// }

#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main(void)
{
    printf("%d\n", fact(5)); // 120

    return EXIT_SUCCESS;
}
