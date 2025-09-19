// Program to determine if 3 numbers can form the sides of a triangle using logical operators.
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    
    printf("Enter length of 1st side : ");
    scanf("%d", &side1);
    
    printf("Enter length of 2nd side : ");
    scanf("%d", &side2);
    
    printf("Enter length of 3rd side : ");
    scanf("%d", &side3);
    
    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2)
    {
        printf("Yes, They can be side of triangle(%d,%d,%d).\n", side1, side2, side3);
    }
    
    else
    {
        printf("No, They can't be side of triangle(%d,%d,%d).\n", side1, side2, side3);
    }

    return 0;
}