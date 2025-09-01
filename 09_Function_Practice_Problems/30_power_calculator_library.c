// Function to calculate power using math library functions.
#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    double result;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using math.h library function pow()
    result = pow(base, exponent);

    printf("%d raised to the power %d is : %.1f\n", base, exponent, result);

    return 0;
}