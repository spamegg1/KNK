// Write the following function:
// float compute_GPA(char grades[], int n);
// The grades array will contain letter grades
// (A, B, C, D, or F, either upper - case or lower - case);
// n is the length of the array.
// The function should return the average of the grades
// (assume that A = 4, B = 3, C = 2, D = 1, and F = 0).

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float compute_GPA(int n, char grades[n])
{
    float total = 0.0F;
    int i;

    for (i = 0; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A':
            total += 4.0F;
            break;
        case 'B':
            total += 3.0F;
            break;
        case 'C':
            total += 2.0F;
            break;
        case 'D':
            total += 1.0F;
            break;
        case 'F':
        default:
            break;
        }
    }
    return total / n;
}

int main(void)
{
    int n = 5;
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    printf("The GPA is: %f\n", compute_GPA(n, grades));

    return EXIT_SUCCESS;
}
