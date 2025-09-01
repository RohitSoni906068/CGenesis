// Function to convert temperature from Fahrenheit to Kelvin.
// Formula: Kelvin = ((Fahrenheit - 32) * 5.0 / 9.0) + 273.15
#include <stdio.h>

float fahrenheitToKelvin(float fahrenheit)
{
    return ((fahrenheit - 32) * 5.0 / 9.0) + 273.15;
}

int main()
{
    float fahrenheit;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    printf("%.3f° Fahrenheit is equivalent to %.3f° Kelvin\n", fahrenheit, fahrenheitToKelvin(fahrenheit));
    return 0;
}