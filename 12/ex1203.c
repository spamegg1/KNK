// What will be the contents of the a array
// after the following statements are executed ?
// #define N 10
// int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int *p = &a[0], *q = &a[N - 1], temp;
// while (p < q)
// {
//     temp = *p;
//     *p++ = *q;
//     *q-- = temp;
// }

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N - 1], temp;
    printf("ptr p: %p\nptr q: %p\n", p, q);
    printf("val p: %d\nval q: %d\n", *p, *q);

    printf("\n");
    printf("start!\n");

    while (p < q)
    {
        temp = *p;
        printf("val temp: %d\n", temp);
        *p++ = *q;
        *q-- = temp;
        printf("ptr p: %p\nptr q: %p\n", p, q);
        printf("val p: %d\nval q: %d\n", *p, *q);

        printf("array at this point: ");
        for (int i = 0; i < N; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return EXIT_SUCCESS;
}

// ptr p: 0x7fffd23c2f20
// ptr q: 0x7fffd23c2f44
// val p: 1
// val q: 10

// start!
// val temp: 1
// ptr p: 0x7fffd23c2f24
// ptr q: 0x7fffd23c2f40
// val p: 2
// val q: 9
// array at this point: 10 2 3 4 5 6 7 8 9 1
// val temp: 2
// ptr p: 0x7fffd23c2f28
// ptr q: 0x7fffd23c2f3c
// val p: 3
// val q: 8
// array at this point: 10 9 3 4 5 6 7 8 2 1
// val temp: 3
// ptr p: 0x7fffd23c2f2c
// ptr q: 0x7fffd23c2f38
// val p: 4
// val q: 7
// array at this point: 10 9 8 4 5 6 7 3 2 1
// val temp: 4
// ptr p: 0x7fffd23c2f30
// ptr q: 0x7fffd23c2f34
// val p: 5
// val q: 6
// array at this point: 10 9 8 7 5 6 4 3 2 1
// val temp: 5
// ptr p: 0x7fffd23c2f34
// ptr q: 0x7fffd23c2f30
// val p: 5
// val q: 6
// array at this point: 10 9 8 7 6 5 4 3 2 1
// 10 9 8 7 6 5 4 3 2 1
