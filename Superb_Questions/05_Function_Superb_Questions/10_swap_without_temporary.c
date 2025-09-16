// Write a Function to swap given parameters and print them without using a temporary variable.
#include <stdio.h>

void swap(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;

    printf("Swapped value of the first number : %d\n", x);
    printf("Swapped value of the second number : %d\n", y);

    return;
}

int main()
{
    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    swap(num1, num2);
    return 0; 
}