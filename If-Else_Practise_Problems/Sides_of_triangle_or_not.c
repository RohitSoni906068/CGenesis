// Take 3 numbers input and tell if they can be the sides of a triangle using logical oprators.
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf(" Enter lenght of 1st side of triangle : ");
    scanf(" %d", &side1);
    printf(" Enter length of 2nd side of triangle : ");
    scanf(" %d", &side2);
    printf(" Enter length of 3rd side of triangle : ");
    scanf(" %d", &side3);
    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2)
    {
        printf(" Yes, They can be side of triangle(%d,%d,%d).\n", side1, side2, side3);
    }
    else
    {
        printf(" No, They can't be side of triangle(%d,%d,%d).\n", side1, side2, side3);
    }
    return 0;
}