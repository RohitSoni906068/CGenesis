// Program to print the area of a circle by inputting its radius.
#include<stdio.h>

#define PI 3.14159 // Define a constant for the mathematical value pi (3.14159)

int main()
{
    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    printf("Area of the circle is : %f\n", PI * radius * radius);
    return 0;
}
