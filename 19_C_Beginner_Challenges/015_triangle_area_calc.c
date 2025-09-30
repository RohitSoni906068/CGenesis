// Program to calculate the Area of a Triangle.
// Area of triangle = 1/2 * Base * Height
#include <stdio.h>

int main()
{
    printf("Welcome to Area of Triangle calculation.\n");
    int base, height;

    printf("Enter the base : ");
    scanf("%d", &base);

    printf("Enter the height : ");
    scanf("%d", &height);

    float Area = 0.5 * base * height; // 1 / 2 = 0.5
    printf("The Area of Triangle is : %.3f\n", Area);

    return 0;
}