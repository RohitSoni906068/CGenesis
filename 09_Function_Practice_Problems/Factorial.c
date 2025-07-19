// Function to calculate factorial of a number
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
    int n;
    printf(" Enter a number : ");
    scanf(" %d", &n);

    printf(" The factorial of %d is : %d\n", n, factorial(n));
    return 0;
}