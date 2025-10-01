// Program to convert Fahrenheit to Celsius.
// Celsius = (Fahrenheit - 32) * 5/9
#include <stdio.h>

int main()
{
    printf("Welcome to Temperature Converter.\n");
    float Fahrenheit;

    printf("Enter Temperature in Fahreheit : ");
    scanf("%f", &Fahrenheit);

    float Celsius = (Fahrenheit - 32.0) * 5.0 / 9;
    printf("Temperature in Celsius : %.3f\n", Celsius);

    return 0;
}