// Program to print the multiplication table for a given number.
#include <stdio.h>

int main()
{
    printf("Welcome to Printing Tables\n");
    int number;

    printf("Enter the Number : ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }

    return 0;
}