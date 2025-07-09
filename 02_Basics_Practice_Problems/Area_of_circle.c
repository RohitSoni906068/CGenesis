// Write a program to print area of circle where, radius is given by user
#include <stdio.h>
#define PI (22.0 / 7.0)
int main()
{
    float radius;
    printf(" Enter the radius of circle : ");
    scanf("%f", &radius);
    printf(" Area of Circle is : %.2f\n", PI * radius * radius);
    return 0;
}