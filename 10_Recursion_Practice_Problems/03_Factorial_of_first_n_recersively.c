// Recursive function to print factorials of all natural numbers from 1 to n
#include <stdio.h>

// Function to compute and print factorial of numbers from 1 to n
int printFactorials(int x)
{
    if (x == 0)
    {
        return 1;
    }
    int fact = x * printFactorials(x - 1);
    printf(" The factorial of %d is : %d\n", x, fact);
    return fact;
}

int main()
{
    int n;

    printf(" Enter the maximum natural number to print factorials up to : ");
    scanf(" %d", &n);

    if (n < 1)
    {
        printf(" Please enter a positive integer greater than 0.\n");
    }
    else
    {
        printFactorials(n);
    }

    return 0;
}