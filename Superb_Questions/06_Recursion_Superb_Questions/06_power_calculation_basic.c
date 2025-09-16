// Recursive function to calculate 'base' raised to the power 'exponent'.
#include <stdio.h>

int calculatePower(int base, int exponent)
{
    return (exponent == 0) ? 1 : base * calculatePower(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf("Enter the base value : "); 
    scanf("%d", &base);

    printf("Enter the exponent value : ");
    scanf("%d", &exponent);

    // Handle invalid ranges/Edge cases
    if (exponent < 0)
    {
        printf("Please enter a non-negative exponent.\n");
        return 0;
    }

    int power = calculatePower(base, exponent);
    printf("%d raised to the power of %d is : %d\n", base, exponent, power);

    return 0;
}