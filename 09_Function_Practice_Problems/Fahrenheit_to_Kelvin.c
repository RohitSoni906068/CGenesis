// Converts Fahrenheit temperature to Kelvin
#include <stdio.h>

float fahrenheitToKelvin(float fahrenheit)
{
    return ((fahrenheit - 32) * 5.0 / 9.0) + 273.15;
}

int main()
{
    float fahrenheit;
    printf(" Enter temperature in Fahrenheit : ");
    scanf(" %f", &fahrenheit);
    printf(" %.3f°F is equivalent to %.3fK\n", fahrenheit, fahrenheitToKelvin(fahrenheit));
    return 0;
}