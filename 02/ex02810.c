// In the dweight.c program (Section 2.4), which spaces are essential?

// Note that VS Code C extension automatically re-spaces the Code
// even if I remove spaces. So I'll leave the spaces.
#include <stdio.h> // not essential

int main(void) // space after int is essential
{
    int height, length, width, volume, weight; // space after int is essential

    height = 8;                       // not essential
    length = 12;                      // not essential
    width = 10;                       // not essential
    volume = height * length * width; // not essential
    weight = (volume + 165) / 166;    // not essential

    // spaces inside the strings are "essential" for the string, not the program.
    printf("Dimensions: %dx%dx%d\n", length, width, height); // not essential
    printf("Volume (cubic inches): %d\n", volume);           // not essential
    printf("Dimensional weight (pounds): %d\n", weight);     // not essential

    return 0; // essential
}