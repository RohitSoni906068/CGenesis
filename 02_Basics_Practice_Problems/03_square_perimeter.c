// Program to calculate the perimeter of a square when the side length is given.
// Formula : Perimeter = 4 * side
#include <stdio.h>

int main()
{
    float side;
    printf("Enter side of square : ");
    scanf("%f", &side);

    float perimeter=4*side;
    printf("The Perimeter of Square is : %.2f \n", perimeter);
    
    return 0;
} 