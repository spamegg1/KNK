// Write functions that return the following values.
// (Assume that a and n are parameters, where a is an
// array of int values and n is the length of the array.)
// (a) The largest element in a.
// (b) The average of all elements in a.
// (c) The number of positive elements in a.

#include <stdio.h>
#include <stdlib.h>

int largest(int length, int numbers[length])
{ // assume array is not empty
    int max_so_far = numbers[0];
    for (int i = 1; i < length; i++)
        if (numbers[i] > max_so_far)
            max_so_far = numbers[i];

    return max_so_far;
}

double average(int length, int numbers[length])
{
    double total_so_far = 0.0;
    for (int i = 0; i < length; i++)
        total_so_far += numbers[i];

    return total_so_far / length;
}

int positives(int length, int numbers[length])
{
    int pos_so_far = 0;
    for (int i = 0; i < length; i++)
        if (numbers[i] > 0)
            pos_so_far++;

    return pos_so_far;
}

int main(void)
{
    int length = 5, numbers[5] = {-1, 2, -3, 4, -5};

    printf("Largest: %d\n", largest(length, numbers));     // 4
    printf("Average: %f\n", average(length, numbers));     // -0.6
    printf("Positives: %d\n", positives(length, numbers)); // 2

    return EXIT_SUCCESS;
}
