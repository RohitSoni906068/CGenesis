// Program to calculate the factorial of a given number.
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to calculate its factorial : ");
    scanf("%d", &number);

    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is : %d\n", number, factorial);
    return 0;
}