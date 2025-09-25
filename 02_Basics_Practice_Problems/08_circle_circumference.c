// Program to calculate the circumference of a circle when the radius is given by the user.
// Formula : Circumference = 2 * PI * radius
#include <stdio.h>
#define PI (22.0 / 7.0)

int main()
{
    float radius;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);

    float circumference=2*PI*radius;
    printf("The Circumference of Circle is : %.2f\n", circumference);
    
    return 0; 
}