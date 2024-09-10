// Modify the program of Programming Project 2 so that it prompts the user to
// enter the radius of the sphere.

// Answer:
#include <stdio.h>
#define PI 3.1415926f

int main(void)
{
    float volume, radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    volume = (4.0f * PI * radius * radius * radius) / (3.0f);
    printf("Volume of sphere: %f\n", volume);
    return 0;
}
