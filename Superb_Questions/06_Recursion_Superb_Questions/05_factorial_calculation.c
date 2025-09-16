// Recursive function to calculate and print the factorial of a given number.
#include <stdio.h>

int factorial(int x)
{
    return (x == 0) ? 1 : (x * factorial(x - 1));
}

int main()
{
    int num;
    printf("Enter Number : "); 
    scanf("%d", &num);

    // Handle invalid ranges/Edge cases
    if (num < 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("The Factorial of %d is : %d\n", num, factorial(num));
    
    return 0;
}