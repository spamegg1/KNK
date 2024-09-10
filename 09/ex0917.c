// Rewrite the fact function so that it’s no longer recursive.
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
    int res = 1;
    while (1 < n)
        res *= n--;
    return res;
}

int main(void)
{
    printf("%d\n", fact(5));
    return EXIT_SUCCESS;
}
