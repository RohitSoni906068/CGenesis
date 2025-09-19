// Program to print the multiplication table of N (given by user).
#include <stdio.h>

int main()
{
    int number;

    printf("Enter Number : ");
    scanf("%d", &number);

    printf("Table of %d is ->", number);
    for (int i = number; i <= (number * 10); i += number)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}