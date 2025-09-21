// Program to print the area of a square by inpútting its side length.
#include<stdio.h>

int main()
{
    int side_length;
    printf("Enter the side length of the square : ");
    scanf("%d", &side_length);

    printf("Area of the square : %d\n", side_length * side_length);
    
    return 0;
}