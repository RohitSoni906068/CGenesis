// Converts temperature from Celsius to Kelvin.
#include <stdio.h>

float celsius_to_kelvin(float celsius)
{
    return celsius + 273.15f;
}

int main()
{
    float celsius;

    printf(" Enter temperature in Celsius : ");
    scanf(" %f", &celsius);

    printf(" %.2f°C is equivalent to %.2f K\n", celsius, celsius_to_kelvin(celsius));
    return 0;
}