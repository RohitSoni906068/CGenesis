// Calculate min of two numbers
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Minimum value is: %d\n", b);
    }
    else if (a < b)
    {
        printf("Minimum value is: %d\n", a);
    }
    else
    {
        printf("Both numbers are equal (%d = %d)\n", a, b);
    }

    return 0;
}