// Function to calculate the result of base raised to the power of exponent
#include <stdio.h>
int calculatePower(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int base, exponent;
    printf(" Enter the base number : ");
    scanf(" %d", &base);
    printf(" Enter the exponent : ");
    scanf(" %d", &exponent);
    printf(" %d raised to the power of %d is : %d\n", base, exponent, calculatePower(base, exponent));
    return 0;
}