// Program to find if the given number is even or odd using ternary operator.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter the Number : ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is Even Number.\n", number) : printf("%d is Odd Number.\n", number);

    return 0;
}