/* stack code fragment (Chapter 10, page 222) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void stack_overflow(void) {} // I added this

void push(int i)
{
    if (is_full())
        stack_overflow();
    contents[top++] = i;
}

void stack_underflow(void) {} // I added this

int pop(void)
{
    if (is_empty())
        stack_underflow();
    return contents[--top];
}

int main(void) // I added this just to compile
{
    return EXIT_SUCCESS;
}
