// Function to convert temperature from Celsius to Kelvin.
// Formula: Kelvin = Celsius + 273.15
#include <stdio.h>

float celsius_to_kelvin(float celsius)
{
    return celsius + 273.15f;
}

int main()
{
    float celsius;

    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    printf("%.2f° Celsius is equivalent to %.2f° Kelvin\n", celsius, celsius_to_kelvin(celsius));
    return 0;
}