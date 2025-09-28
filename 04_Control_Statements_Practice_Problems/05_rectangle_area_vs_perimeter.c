// Given the length and breadth of a rectangle, Program to determine whether the area of the rectangle is greater than its perimeter.
#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length of rectangle : ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle : ");
    scanf("%f", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("%.3f is the area of the rectangle, which is greater than its perimeter (%.3f).\n", area, perimeter);
    }
    
    else if (area < perimeter)
    {
        printf("%.3f is the area of the rectangle, which is less than its perimeter (%.3f).\n", area, perimeter);
    }
    
    else
    {
        printf("%.3f is the area of the rectangle, which is equal to its perimeter (%.3f).\n", area, perimeter);
    }
    
    return 0;
}