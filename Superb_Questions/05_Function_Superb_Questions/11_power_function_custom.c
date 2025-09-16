// Function to calculate the result of a base raised to the power of an exponent.
#include <stdio.h>

int power(int base, int exponent)
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

    printf("Enter the base number : ");
    scanf("%d", &base);

    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    int calculatedPower = power(base, exponent); // Function call to calculate power
    printf("%d raised to the power of %d is : %d\n", base, exponent, calculatedPower);

    return 0;
} 