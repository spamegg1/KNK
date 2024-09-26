// Some calculators (notably those from Hewlett-Packard)
// use a system of writing mathematical expressions known as
// Reverse Polish Notation (RPN). In this notation, operators are
// placed after their operands instead of between their operands.
// For example, 1 + 2 would be written 1 2 + in RPN, and
// 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily
// be evaluated using a stack. The algorithm involves reading the
// operators and operands in an expression from left to right,
// performing the following actions:
// When an operand is encountered, push it onto the stack.
// When an operator is encountered, pop its operands from the stack,
// perform the operation on those operands,
// and then push the result onto the stack.
// Write a program that evaluates RPN expressions.
// The operands will be single-digit integers.
// The operators are +, –, *, /, and =.
// The = operator causes the top stack item to be displayed;
// afterwards, the stack is cleared and the user is prompted
// to enter another expression. The process continues until the
// user enters a character that is not an operator or operand:
// Enter an RPN expression: 1 2 3 * + =
// Value of expression: 7
// Enter an RPN expression: 5 8 * 4 9 - / =
// Value of expression: -8
// Enter an RPN expression: q
// If the stack overflows, the program will display the message
// Expression is too complex and terminate.
// If the stack underflows (because of an expression such as 1 2 + +), the
// program will display the message
// Not enough operands in expression and terminate.
// Hints: Incorporate the stack code from Section 10.2 into your program.
// Use scanf(" %c", &ch) to read the operators and operands.

/* stack code fragment (Chapter 10, page 222) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> // isdigit

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Expression is too complex.\n");
    exit(EXIT_FAILURE);
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    contents[top++] = i;
}

void stack_underflow(void)
{
    printf("Not enough operands in expression.\n");
    exit(EXIT_FAILURE);
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    return contents[--top];
}

int main(void) // I added this just to compile
{
    char ch, op1, op2;

    while (true)
    {
        printf("Enter an RPN expression: ");
        while (true)
        {
            scanf(" %c", &ch);
            if (isdigit(ch))
                push(ch - '0');
            else if (ch == 'q')
                return EXIT_SUCCESS;
            else
                switch (ch)
                {
                case '+':
                    push(pop() + pop());
                    break;
                case '-':
                    push(-pop() + pop());
                    break;
                case '*':
                    push(pop() * pop());
                    break;
                case '/':
                    op2 = pop();
                    op1 = pop();
                    push(op1 / op2);
                    break;
                case '=':
                    printf("Value of expression: %d\n", pop());
                    printf("Enter an RPN expression: ");
                    break;
                default:
                    exit(EXIT_FAILURE);
                }
        }
    }

    return EXIT_SUCCESS;
}
