// Program to calculate the area of a rectangle when length and breadth are given by the user.
// Formula : Area = length * breadth
#include <stdio.h>
int main()
{
    float length, breadth;
    printf("Enter length of rectangle : ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle : ");
    scanf("%f", &breadth);
    float area=length*breadth;
    printf("The Area of Rectangle is : %.3f \n", area);
    return 0;
}
