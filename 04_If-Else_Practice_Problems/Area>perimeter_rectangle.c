// Given the length and breadth of a rectangle, write a program to find whether the area of the
// rectangle is greater than its perimeter.
#include <stdio.h>

int main()
{
    float length, breadth;
    printf("Enter Length of your Rectangle: ");
    scanf(" %f", &length);
    printf("Enter Breadth of your Rectangle: ");
    scanf(" %f", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("%.3f is the area of the rectangle, which is greater than its perimeter (%.3f).\n", area, perimeter);
    }
    else
    {
        printf("%.3f is the area of the rectangle, which is not greater than its perimeter (%.3f).\n", area, perimeter);
    }
    return 0;
}