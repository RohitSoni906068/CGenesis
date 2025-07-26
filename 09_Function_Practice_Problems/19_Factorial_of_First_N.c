// Write a Function to display factorials of numbers from 1 to 'limit'
#include <stdio.h>
void displayFactorials(int limit)
{
    int result = 1;

    if (limit >= 0)
    {
        printf("The factorial of 0 is : 1\n");
    }

    for (int i = 1; i <= limit; i++)
    {
        result *= i;
        printf("The factorial of %d is : %d\n", i, result);
    }
}

int main()
{
    int n;
    printf(" Enter a number : ");
    scanf(" %d", &n);

    displayFactorials(n);
    return 0;
}