// Recursive function to calculate base^exponent using logarithmic time
#include <stdio.h>

int computePower(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    int halfPower = computePower(base, exponent / 2);

    return (exponent % 2 == 0) ? halfPower * halfPower : halfPower * halfPower * base;
}

int main()
{
    int base, exponent;

    printf(" Enter the base (number) : ");
    scanf(" %d", &base);

    printf(" Enter the exponent (power) : ");
    scanf(" %d", &exponent);

    printf(" %d raised to the power of %d is : %d\n", base, exponent, computePower(base, exponent));

    return 0;
}