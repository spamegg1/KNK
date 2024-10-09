// Suppose that the following declarations are in effect:
// int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
// int *p = &a[1], *q = &a[5];
// (a) What is the value of *(p+3)?
// (b) What is the value of *(q-3)?
// (c) What is the value of q - p?
// (d) Is the condition p < q true or false?
// (e) Is the condition *p < *q true or false?

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];
    printf("%d\n", *(p + 3));   // (a) 14
    printf("%d\n", *(q - 3));   // (b) 34
    printf("%ld\n", q - p);     // (c) 4
    printf("%p, %p\n", p, q);   // (d) true 0x7ffdaf75a974, 0x7ffdaf75a984
    printf("%d, %d\n", *p, *q); // (e) false 15, 2

    return EXIT_SUCCESS;
}
