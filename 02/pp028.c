// Write a program that calculates the remaining balance on a loan after the
// first, second and third monthly payments:
// Enter amount of loan: 20000.00
// Enter interest rate: 6.0
// Enter monthly payment: 386.66
// Balance remaining after first payment: $19713.34
// Balance remaining after second payment: $19425.25
// Balance remaining after third payment: $19135.71

// Answer:
#include <stdio.h>

int main(void)
{
    float loan, rate, payment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    for (int i = 0; i < 3; i++)
    {
        balance = balance - payment + balance * rate / 1200.0f;
        printf("Balance remaining after payment %d: $%.2f\n", i + 1, balance);
    }

    return 0;
}
