// Program to find the greatest among four numbers entered by the user using the max/min algorithm.
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, max;

    printf("Enter 1st Number : ");
    scanf("%d", &num1);

    printf("Enter 2nd Number : ");
    scanf("%d", &num2);

    printf("Enter 3rd Number : ");
    scanf("%d", &num3);

    printf("Enter 4th Number : ");
    scanf("%d", &num4);

    max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    
    if (num3 > max)
    {
        max = num3;
    }

    if (num4 > max)
    {
        max = num4;
    }
    printf("%d is the Greatest Number.\n", max);

    return 0;
}