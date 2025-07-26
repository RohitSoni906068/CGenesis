// Write a Function to compute the greatest common divisor of two given numbers.
#include <stdio.h>

int min(int a, int b) // Returns the smaller of two integers
{
    return (a < b) ? a : b;
}

int computeGCD(int num1, int num2) // Computes the Greatest Common Divisor (GCD) of two integers
{
    for (int i = min(num1, num2); i >= 1; i--)
    {
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
    printf(" Enter the first number : ");
    scanf(" %d", &number1);
    printf(" Enter the second number : ");
    scanf(" %d", &number2);

    int gcd = computeGCD(number1, number2);
    printf(" The greatest common divisor of (%d, %d) is : %d\n", number1, number2, gcd);
    return 0;
}