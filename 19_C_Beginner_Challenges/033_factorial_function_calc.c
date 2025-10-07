// Program to calculate the factorial of a given number.
#include <stdio.h>

int main()
{
    printf("Welcome to the World of Factorial\n");
    int number, factorial = 1;

    printf("Enter the Number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("The Factorial of %d! is : %d\n", number, factorial);
    return 0;
}