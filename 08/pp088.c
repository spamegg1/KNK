// Modify Programming Project 7 so that it prompts for
// five quiz grades for each of five students,
// then computes the total score and average score for each student,
// and the average score, high score, and low score for each quiz.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[5][5] = {0};

    for (int row = 0; row < 5; row++)
    {
        printf("Enter 5 quiz grades for student %d: ", row + 1);

        for (int col = 0; col < 5; col++) // read 5 integers
        {
            scanf("%d", &grades[row][col]);
        }
    }

    int total = 0;
    double avg = 0.0;

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            total += grades[row][col];
        }
        avg = total / 5.0;
        printf("Student %d total: %d average: %.2f\n", row, total, avg);

        total = 0;
    }

    int quiz = 0;
    int low, high;

    for (int col = 0; col < 5; col++)
    {
        low = grades[0][col];
        high = grades[0][col];

        for (int row = 0; row < 5; row++)
        {
            int value = grades[row][col];
            quiz += value;

            if (value < low)
            {
                low = value;
            }
            if (high < value)
            {
                high = value;
            }
        }
        avg = quiz / 5.0;
        printf("Quiz %d average: %.2f low: %d high %d\n", col + 1, avg, low, high);
        quiz = 0;
    }

    return EXIT_SUCCESS;
}
