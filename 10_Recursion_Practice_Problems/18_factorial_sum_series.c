// Program to calculate the sum of factorials from 1 to n.
#include <stdio.h>

int factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : (n * factorial(n - 1));
}

int factorial_sum(int n)
{
    return (n == 0) ? 0 : factorial(n) + factorial_sum(n - 1);
}

int main()
{
    int maxNumber;
    printf("Enter maximum natural number to end at : ");
    scanf("%d", &maxNumber);
    
    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    int sum_of_factorials = factorial_sum(maxNumber);
    printf("Sum of factorials from 1 to %d is : %d\n", maxNumber, sum_of_factorials);

    return 0;
}