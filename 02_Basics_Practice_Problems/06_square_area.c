// Program to calculate the area of a square when the side length is given.
// Formula : Area = side * side
#include <stdio.h>

int main()
{
    float side;
    printf("Enter the side of square : ");
    scanf("%f", &side);

    float area=side*side;
    printf("The Area of Square is : %.2f \n", area);
    
    return 0;
}