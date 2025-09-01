// Function to convert temperature from Kelvin to Celsius.
// Formula: Celsius = Kelvin - 273.15
#include <stdio.h>

float kelvin_to_celsius(float kelvin)
{
    return kelvin - 273.15;
}

int main()
{
    float kelvin;

    printf("Enter temperature in Kelvin : ");
    scanf("%f", &kelvin);

    float celsius = kelvin_to_celsius(kelvin);
    printf("%.2f° Kelvin is equivalent to %.2f° Celsius\n", kelvin, celsius);

    return 0;
}