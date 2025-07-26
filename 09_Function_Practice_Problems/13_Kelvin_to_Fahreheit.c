#// Converts temperature from Kelvin to Fahrenheit.
#include <stdio.h>
float kelvinToFahrenheit(float kelvin)
{
    return (kelvin - 273.15) * (9.0 / 5.0) + 32.0;
}

int main()
{
    float kelvin;
    printf(" Enter temperature in Kelvin : ");
    scanf(" %f", &kelvin);
    printf(" %.2f Kelvin is equivalent to %.2f Fahrenheit.\n", kelvin, kelvinToFahrenheit(kelvin));
    return 0;
}