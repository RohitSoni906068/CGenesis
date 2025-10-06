// Program to swap two numbers.
#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    // Swapping the numbers using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping the numbers using a temporary variable\n");
    printf("The first number is : %d\n", num1);
    printf("The second number is : %d\n", num2);

    // Swapping the numbers without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping the numbers without using a temporary variable\n");
    printf("The first number is : %d\n", num1);
    printf("The second number is : %d\n", num2);
    
    return 0;
}