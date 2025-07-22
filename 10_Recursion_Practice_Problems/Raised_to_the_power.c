// Recursive function to calculate 'base' raised to the power 'exponent'.
#include <stdio.h>

int calculatePower(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    return base * calculatePower(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf(" Enter the base value : ");
    scanf(" %d", &base);

    printf(" Enter the exponent value : ");
    scanf(" %d", &exponent);

    printf(" %d raised to the power of %d is : %d\n", base, exponent, calculatePower(base, exponent));

    return 0;
}