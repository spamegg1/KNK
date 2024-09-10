// Write a program that asks the user to enter a
// series of integers (which it stores in an array),
// then sorts the integers by calling the function selection_sort.
// When given an array with n elements,
// selection_sort must do the following:
// 1. Search the array to find the largest element,
// then move it to the last position in the array.
// 2. Call itself recursively to sort the first
// n – 1 elements of the array.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void selection_sort(int size, int array[size])
{
    int temp, max, max_index;
    int sorted_index = size;

    while (0 < sorted_index)
    {
        max_index = 0; // find the max of unsorted part, AND where the max is.
        max = array[max_index];

        for (int i = 0; i < sorted_index; i++)
            if (max < array[i])
            {
                max = array[i];
                max_index = i;
            }

        // swap max of unsorted part with last elt of unsorted part
        sorted_index--;
        temp = array[sorted_index];
        array[sorted_index] = max;
        array[max_index] = temp;
    }
}

int main(void)
{
    int array[MAX_SIZE];
    int size = 0;
    char c;

    // get input from user
    printf("Enter list of integers to be sorted: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        scanf(" %d", &array[i]);
        size++;

        if ((c = getchar()) == '\n')
            break;
        ungetc(c, stdin);
    }

    selection_sort(size, array);

    printf("Sorted list:");
    for (int i = 0; i < size; i++)
        printf(" %d", array[i]);
    printf("\n");

    return EXIT_SUCCESS;
}
