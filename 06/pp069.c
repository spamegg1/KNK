// Programming Project 8 in Chapter 2 asked you to write a program that
// calculates the remaining balance on a loan after the first, second,
// and third monthly payments. Modify the program so that it also asks
// the user to enter the number of payments and then displays the balance
// remaining after each of these payments.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float loan = 0.0f,
          rate = 0.0f,
          payment = 0.0f;
    int i,
        num_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_of_payments);

    for (i = 1; i <= num_of_payments; i++)
    {
        loan = loan - payment + (loan * rate / 100.0 / 12.0);
        printf("Balance after payment %d: $%.2f\n", i, loan);
    }

    return EXIT_SUCCESS;
}
