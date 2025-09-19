// Program to calculate the volume of a cylinder given its radius and height.
// Formula : Volume = PI * radius * radius * height
#include <stdio.h>
#define PI 22.0 / 7.0

int main()
{
    float radius, height;
    printf("Enter Radius of Cylinder : ");
    scanf("%f", &radius);

    printf("Enter Height of Cylinder : ");
    scanf("%f", &height);

    float volume=PI*radius*radius*height;
    printf("The Volume of a Cylinder is : %.3f \n", volume);
    
    return 0;
}