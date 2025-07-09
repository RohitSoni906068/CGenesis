// Write a program to claculate the volume of Sphere where,radius is given by user.
#include <stdio.h>
int main()
{
    const float PI = 3.1416;
    float radius;
    printf(" Enter the radius of Sphere : ");
    scanf(" %f", &radius);
    printf(" %f is Volume of Sphere ", (4.0 / 3) * PI * radius * radius * radius);
    return 0;
}