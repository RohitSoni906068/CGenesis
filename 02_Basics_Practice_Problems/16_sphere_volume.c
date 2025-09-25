// Program to calculate the volume of a sphere when the radius is given by the user.
// Formula : Volume = (4/3) * PI * radius * radius * radius
#include <stdio.h>

int main()
{
    const float PI = 3.1416;

    float radius;
    printf("Enter the radius of Sphere : ");
    scanf("%f", &radius);

    float volume=(4.0 / 3) * PI * radius * radius * radius;
    printf("The Volume of Sphere is : %.3f \n", volume);
    
    return 0; 
}