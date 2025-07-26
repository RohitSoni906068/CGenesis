// Function to convert temperature from Kelvin to Celsius
#include <stdio.h>

float kelvin_to_celsius(float kelvin)
{
    return kelvin - 273.15;
}

int main()
{
    float kelvin;

    printf(" Enter temperature in Kelvin : ");
    scanf(" %f", &kelvin);

    float celsius = kelvin_to_celsius(kelvin);
    printf(" Equivalent temperature in Celsius : %.2f°C\n", celsius);

    return 0;
}