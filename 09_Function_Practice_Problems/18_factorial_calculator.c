// Function to calculate the factorial of a number.
#include <stdio.h>

int factorial(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    
    return result;
}

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The factorial of %d is : %d\n", number, factorial(number));
    return 0;
}