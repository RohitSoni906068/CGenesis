// Program to calculate Perimeter of a rectangle.
// Perimeter of rectangle = 2 * (length + width).
#include <stdio.h>

int main()
{
    printf("Welcome to Perimeter of Rectangle Calculation.\n");
    int length, breadth;

    printf("Enter lenght of rectangle : ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle : ");
    scanf("%d", &breadth);

    int Perimeter = 2 * (length + breadth);
    printf("The Perimeter of Rectangle is : %d\n", Perimeter);

    return 0;
}