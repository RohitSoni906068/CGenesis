// Function to convert temperature from Celsius to Fahrenheit.
// Formula: Fahrenheit = (Celsius × 9/5) + 32
#include <stdio.h>

float fahrenheit(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main()
{
    float celsius;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    float result = fahrenheit(celsius);
    printf("%.2f° Celsius is equivalent to %.2f° Fahrenheit\n", celsius, result);

    return 0;
}