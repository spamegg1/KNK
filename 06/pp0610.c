// Programming Project 9 in Chapter 5 asked you to write a program that
// determines which of two dates comes earlier on the calendar.
// Generalize the program so that the user may enter
// any number of dates. The user will enter 0/0/0 to indicate
// that no more dates will be entered:
// Enter a date (mm/dd/yy): 3/6/08
// Enter a date (mm/dd/yy): 5/17/07
// Enter a date (mm/dd/yy): 6/3/07
// Enter a date (mm/dd/yy): 0/0/0
// 5/17/07 is the earliest date

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d1, d2, m1, m2, y1, y2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m2, &d2, &y2);

        if (d2 == 0 && m2 == 0 && y2 == 0)
            break;
        if (y2 < y1 || (y1 == y2 && m2 < m1) ||
            (y1 == y2 && m1 == m2 && d2 < d1))
        {

            d1 = d2;
            m1 = m2;
            y1 = y2;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", m1, d1, y1);

    return EXIT_SUCCESS;
}
