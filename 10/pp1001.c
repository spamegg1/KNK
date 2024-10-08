// Modify the stack example of Section 10.2 so that
// it stores characters instead of integers.
// Next, add a main function that asks the user to enter
// a series of parentheses and/or braces,
// then indicates whether or not they’re properly nested:
// Enter parentheses and/or braces: ((){}{()})
// Parentheses/braces are nested properly
// Hint: As the program reads characters, have it push each
// left parenthesis or left brace. When it reads a right parenthesis
// or brace, have it pop the stack and check that the item popped is a
// matching parenthesis or brace. (If not, the parentheses/braces
// aren’t nested properly.) When the program reads the new-line
// character, have it check whether the stack is empty; if so, the
// parentheses/braces are matched. If the stack isn’t empty (or if
// stack_underflow is ever called), the parentheses/braces aren’t matched.
// If stack_overflow is called,
// have the program print the message Stack overflow and terminate immediately.

/* stack code fragment (Chapter 10, page 222) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
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

void stack_overflow(void) {} // I added this

void push(char c)
{
    if (is_full())
        stack_overflow();
    contents[top++] = c;
}

void stack_underflow(void) {} // I added this

char pop(void)
{
    if (is_empty())
        stack_underflow();
    return contents[--top];
}

int main(void) // I added this just to compile
{
    char c;
    printf("Enter parentheses and/or braces: ");

    while ((c = getchar()) != '\n')
    {
        if ((c == '}' && pop() != '{') || (c == ')' && pop() != '('))
        {
            printf("Parentheses/braces are not nested properly\n");
            return EXIT_SUCCESS;
        }
        else if (c == '(' || c == '{')
            push(c);
    }

    if (!is_empty())
    {
        printf("Parentheses/braces are not nested properly\n");
        return EXIT_SUCCESS;
    }

    printf("Parentheses/braces are nested properly\n");
    return EXIT_SUCCESS;
}
