// Write a program to calculate area of rectangle where, length and breadth was given by user.
#include <stdio.h>
int main()
{
    float length, breadth;
    printf(" Enter length of rectangle : ");
    scanf(" %f", &length);
    printf(" Enter breadth of rectangle : ");
    scanf(" %f", &breadth);
    printf(" The Area of Rectangle is : %.3f \n", length * breadth);
    return 0;
}
