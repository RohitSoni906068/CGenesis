// Program to find the sum of three numbers using a function.
#include <stdio.h>

int sum(int x, int y, int z) // int type function returns an integer value
{
    return x + y + z; // Returning the sum of x, y, and z
}

int main()
{
    int num1, num2, num3;

    printf("Enter 1st Number : ");
    scanf("%d", &num1);

    printf("Enter 2nd Number : ");
    scanf("%d", &num2);
    
    printf("Enter 3rd Number : ");
    scanf("%d", &num3);
    
    printf("The Sum of %d+%d+%d is : %d\n", num1, num2, num3, sum(num1, num2, num3)); 
    return 0;
}