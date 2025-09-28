// Program to find the maximum of two numbers.
#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Maximum value is: %d\n", a);
    }

    else if (a < b)
    {
        printf("Maximum value is: %d\n", b);
    }

    else
    {
        printf("Both numbers are equal (%d = %d)\n", a, b);
    }
    
    return 0;
}