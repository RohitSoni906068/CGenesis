// Write a program to print circumference of circle where, radius is given by user
#include <stdio.h>
#define PI (22.0 / 7.0)
int main()
{
    float radius;
    printf(" Enter the radius of circle : ");
    scanf("%f", &radius);
    printf(" Circumference of Circle is : %.2f\n", 2 * PI * radius);
    return 0;
}