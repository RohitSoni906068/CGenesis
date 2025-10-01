// Program that determines if a number is odd or even.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is Even Number.\n", number);
    }

    else
    {
        printf("%d is Odd Number.\n", number);
    }
    
    return 0;
}