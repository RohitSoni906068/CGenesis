// Function to calculate the result of base raised to the power from 0 to exponent
#include <stdio.h>
void printPowers(int base, int exponent)
{
    int result = 1;
    printf(" %d raised to the power of 0 is : %d\n", base, result);
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
        printf(" %d raised to the power of %d is : %d\n", base, i, result);
    }
}

int main()
{
    int base, exponent;
    printf(" Enter the base number : ");
    scanf(" %d", &base);
    printf(" Enter the exponent : ");
    scanf(" %d", &exponent);
    printPowers(base, exponent);
    return 0;
}