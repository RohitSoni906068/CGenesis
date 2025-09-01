// Function to find the smallest number among three given numbers (handle equal numbers appropriately).
#include <stdio.h>

int findMinimum(int a, int b, int c)
{
    int min = a;

    if (b < min)
    {
        min = b;
    }

    if (c < min)
    {
        min = c;
    }

    // Check for equality among numbers
    if (a == b && b == c)
    {
        printf("All three numbers are equal (%d = %d = %d)\n", a, b, c);
    }
    
    else if (a == b)
    {
        printf("Two numbers are equal (%d = %d)\n", a, b);
    }
    
    else if (b == c)
    {
        printf("Two numbers are equal (%d = %d)\n", b, c);
    }
    
    else if (a == c)
    {
        printf("Two numbers are equal (%d = %d)\n", a, c);
    }

    return min;
}

int main()
{
    int num1, num2, num3;
    
    printf("Enter the first number : ");
    scanf("%d", &num1);
    
    printf("Enter the second number : ");
    scanf("%d", &num2);
    
    printf("Enter the third number : ");
    scanf("%d", &num3);

    printf("The smallest number is : %d\n", findMinimum(num1, num2, num3));
    return 0;
}