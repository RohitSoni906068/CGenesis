// Take 3 positive integers input and print the greatest of them using nested if.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Enter 1st Number : ");
    scanf(" %d", &num1);
    printf(" Enter 2nd Number : ");
    scanf(" %d", &num2);
    printf(" Enter 3rd Number : ");
    scanf(" %d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf(" %d is Greatest Number.\n", num1);
        }
        else
        {
            printf(" %d is Greatest Number.\n", num3);
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf(" %d is Greatest Number.\n", num2);
        }
        else
        {
            printf(" %d is Greatest Number.\n", num3);
        }
    }
    else
    {
        if (num3 > num1)
        {
            printf(" %d is Greatest Number.\n", num3);
        }
        else
        {
            printf(" %d is Greatest Number.\n", num1);
        }
    }
    return 0;
}
