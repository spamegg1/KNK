// Give the decimal value of each of the following integer constants.
// (a) 077   (octal)
// (b) 0x77  (hex)
// (c) 0XABC (hex)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", 077);   // 63
    printf("%d\n", 0x77);  // 119
    printf("%d\n", 0xABC); // 2748

    return EXIT_SUCCESS;
}
