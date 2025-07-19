// Converts a temperature from Celsius to Fahrenheit using the formula:
// Fahrenheit = (Celsius × 9/5) + 32
#include <stdio.h>

float fahrenheit(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main()
{
    float celsius;
    printf(" Enter temperature in Celsius : ");
    scanf(" %f", &celsius);

    float result = fahrenheit(celsius);
    printf(" Temperature in Fahrenheit: %.2f°F\n", result);

    return 0;
}