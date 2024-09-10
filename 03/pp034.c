// Write a program that prompts the user to enter a telephone number in the
// form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:
// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int beg, mid, end;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &beg, &mid, &end);
    printf("You entered %.3d.%3d.%.4d\n", beg, mid, end);

    return EXIT_SUCCESS;
}
