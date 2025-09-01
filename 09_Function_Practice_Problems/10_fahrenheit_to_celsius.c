// Function to convert temperature from Fahrenheit to Celsius.
// Formula: Celsius = (5.0 / 9.0) * (Fahrenheit - 32.0)
#include <stdio.h>

float convertToCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main()
{
    float inputFahrenheit;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &inputFahrenheit);

    float outputCelsius = convertToCelsius(inputFahrenheit);
    printf("%.2f° Fahrenheit is equivalent to %.2f° Celsius\n", inputFahrenheit, outputCelsius);

    return 0;
}