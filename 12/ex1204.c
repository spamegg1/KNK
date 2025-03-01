// Rewrite the make_empty, is_empty, and is_full
// functions of Section 10.2 to use the
// pointer variable top_ptr instead of the integer variable top.

/* stack code fragment (Chapter 10, page 222) */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;
int *top_ptr = 0;

void make_empty(void)
{
    // top = 0; // change this
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    // return top == 0; // change this
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    // return top == STACK_SIZE; // change this
    return top_ptr == &contents[STACK_SIZE];
}

int main(void) // I added this just to compile
{
    return EXIT_SUCCESS;
}
