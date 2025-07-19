// Write functions to calculate area of a circle & a rectangle.
#include <stdio.h>

// Function to calculate the area of a rectangle
float areaOfRectangle(float length, float breadth)
{
    return length * breadth;
}

// Function to calculate the area of a circle
float areaOfCircle(float radius)
{
    const float PI = 22.0 / 7.0;
    return PI * radius * radius;
}

int main()
{
    float radius, length, breadth;
    printf(" Enter the radius of the circle : ");
    scanf(" %f", &radius);
    printf(" Enter the length of the rectangle : ");
    scanf(" %f", &length);
    printf(" Enter the breadth of the rectangle : ");
    scanf(" %f", &breadth);
    printf(" The area of the circle with radius %.3f is : %.3f\n", radius, areaOfCircle(radius));
    printf(" The area of the rectangle with length %.3f and breadth %.3f is : %.3f\n", length, breadth, areaOfRectangle(length, breadth));
    return 0;
}