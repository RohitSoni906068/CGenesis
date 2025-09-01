// Function to find the minimum of two numbers.
#include <stdio.h>

int find_minimum(int x, int y)
{
    if (x == y)
    {
        printf("Given two numbers are equal (%d = %d).\n", x, y);
        return 0;
    }
    
    return (x < y) ? x : y;
}

int main()
{
    int num1, num2;
    
    printf("Enter the first number : ");
    scanf("%d", &num1);
    
    printf("Enter the second number : ");
    scanf("%d", &num2);
    
    int min = find_minimum(num1, num2);
    return (min) ? printf("The minimum of %d and %d is : %d\n", num1, num2, min) : 0;
}