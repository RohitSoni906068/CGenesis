// Program that calculates the sum of all numbers entered by a user until the user enters 0. 
// The total sum should then be displayed.
#include <stdio.h>

int main()
{
    printf("Welcome to Number Adder\n");
    int number, sum = 0;

    do
    {
        printf("Enter the Number : ");
        scanf("%d", &number);
        if (number != 0)
            printf("To Stop Press Zero (0)\n");
        sum += number;
    } while (number != 0);

    printf("The Sum of all your given Numbers is : %d\n", sum);
    return 0;
}