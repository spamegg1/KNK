// Modify Programming Project 7 from Chapter 2 so that
// it includes the following function:
// void pay_amount(int dollars, int *twenties,
// int *tens,int *fives, int *ones);
// The function determines the smallest number of
// $20, $10, $5, and $1 bills necessary to pay
// the amount represented by the dollars parameter.
// The twenties parameter points to a
// variable in which the function will store the
// number of $20 bills required. The tens,
// fives, and ones parameters are similar.

#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = (dollars % 20) / 10;
    *fives = (dollars % 10) / 5;
    *ones = (dollars % 5);
}

int main(void)
{
    int dollars;
    printf("Enter dollar amount: ");
    scanf(" %d", &dollars);

    int twenties, tens, fives, ones;
    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);

    return EXIT_SUCCESS;
}
