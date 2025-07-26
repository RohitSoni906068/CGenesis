// Use the library function to calculate the area of a square with side a.
#include <stdio.h>
#include <math.h>
int main()
{
    float side;

    printf(" Enter Side of Square : ");
    scanf(" %f", &side);

    float areaOfSquare = pow(side, 2); // side*side=side^2.

    printf(" The Area of Square with Side %.3f is : %.3f\n", side, areaOfSquare);
    return 0;
}