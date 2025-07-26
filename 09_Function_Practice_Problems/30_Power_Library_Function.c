// Power Calculator using Math Library Function
#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    double result;

    // Input: Get base number
    printf("Enter base number: ");
    scanf(" %d", &base);

    // Input: Get exponent
    printf("Enter exponent: ");
    scanf(" %d", &exponent);

    // Calculate power using library function
    result = pow(base, exponent);

    // Output: Display result
    printf(" %d raised to the power %d is : %0.f\n", base, exponent, result);

    return 0;
}