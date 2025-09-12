// Function to compute the Greatest Common Divisor (GCD) of two given numbers.
#include <stdio.h>

int min(int a, int b) 
{
    return (a < b) ? a : b; // Returns the smaller of two integers
}

int computeGCD(int num1, int num2) 
{
    for (int i = min(num1, num2); i >= 1; i--)
    {
        // Computes the Greatest Common Divisor (GCD) of two integers
        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }

    return 1; // Fallback in case both numbers are > 0 but have no greater common divisor
}

int main()
{
    int number1, number2;

    printf("Enter the first number : ");
    scanf("%d", &number1);

    printf("Enter the second number : ");
    scanf("%d", &number2);

    if (number1 <= 0 || number2 <= 0)
    {
        (number1 < 0) ? printf("Please enter positive numbers only.\n") : printf("Please enter non-zero numbers only.\n");
        return 1;
    }

    else if (number1 == number2)
    {
        printf("The greatest common divisor of (%d, %d) is : %d\n", number1, number2, number1);
        return 0;
    }
    
    else
    {
        int gcd = computeGCD(number1, number2);
        printf("The greatest common divisor of (%d, %d) is : %d\n", number1, number2, gcd);
    }

    return 0;
}