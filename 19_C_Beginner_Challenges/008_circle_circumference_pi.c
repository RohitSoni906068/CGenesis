// Program to define a constant for the mathematical value pi (3.14159)
// and use it to calculate and print the circumference of a circle with a radius input from user.
#include<stdio.h>

int main()
{
    const float PI=3.14159;

    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    printf("Circumference of the circle is : %f\n", 2 * PI * radius);
    return 0;
}
