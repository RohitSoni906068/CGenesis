// Program to calculate the perimeter of a rectangle when length and breadth are given by the user.
// Formula : Perimeter = 2 * (length + breadth)
#include <stdio.h>

int main()
{
    float length, breadth;
    printf("Enter length of rectangle : ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle : ");
    scanf("%f", &breadth);

    float perimeter=2*(length+breadth);
    printf("The Perimeter of Rectangle is : %.3f \n", perimeter);
    
    return 0;
}
