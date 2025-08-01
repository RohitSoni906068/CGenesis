// Write a program to calculate area of a square.(side is given)
#include <stdio.h>
int main()
{
    float side;
    printf(" Enter the side of square : ");
    scanf(" %f", &side);
    printf(" The area of Square is : %.2f \n", side * side);
    return 0;
}