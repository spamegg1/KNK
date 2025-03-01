// Modify the find_middle function of Section 11.5
// so that it uses pointer arithmetic to calculate the return value.
// int *find_middle(int a[], int n)
// {
//     return &a[n / 2];
// }

#include <stdio.h>
#include <stdlib.h>

int *find_middle_rewrite(int a[], int n)
{
    return a + (n / 2);
}

int main(void)
{
    int n = 5;
    int middle = 9999;
    int a[5] = {1, 2, middle, 4, 5};
    printf("middle: %d\n", *find_middle_rewrite(a, n)); // 9999

    return EXIT_SUCCESS;
}
