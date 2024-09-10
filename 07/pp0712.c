// Write a program that evaluates an expression:
// Enter an expression: 1+2.5*3
// Value of expression: 10.5
// The operands in the expression are floating-point numbers;
// the operators are +, -, * and /.
// The expression is evalued from left to right
// (no operator takes precedence over any other operator).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double total = 0.0;
    double number = 0.0;
    char c;

    printf("Enter an expression: \n");
    scanf("%lf", &total);

    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
        case '+':
            scanf("%lf", &number);
            total += number;
            break;
        case '-':
            scanf("%lf", &number);
            total -= number;
            break;
        case '*':
            scanf("%lf", &number);
            total *= number;
            break;
        case '/':
            scanf("%lf", &number);
            total /= number;
            break;
        default:
            break;
        }
    }

    printf("Value of expression: %lf\n", total);
    return EXIT_SUCCESS;
}
