// Program to calculate the area of a circle when the radius is given by the user.
// Formula : Area = PI * radius * radius
#include <stdio.h>
#define PI (22.0 / 7.0)
/* 
#define is a preprocessor directive used to define macros. It tells the compiler
to replace all instances of a defined identifier with a specified value or code snippet before actual compilation begins.
*/
int main()
{
    float radius;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    
    float area=PI*radius*radius;
    printf("The Area of Circle is : %.2f\n", area);
    
    return 0;
}