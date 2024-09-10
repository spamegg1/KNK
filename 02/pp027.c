// Write a program that asks the user to enter a US dollar amount and then shows
// how to pay that amount using the smallest number of $20, $10, $5 and $1 bills
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
//  $5 bills: 0
//  $1 bills: 3

// Answer:
#include <stdio.h>

int main(void)
{
    int amount, twenty, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount -= twenty * 20;

    tens = amount / 10;
    amount -= tens * 10;

    fives = amount / 5;
    ones = amount - fives * 5;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}
