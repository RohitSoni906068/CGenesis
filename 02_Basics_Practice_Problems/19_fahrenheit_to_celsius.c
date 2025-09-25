// Program to convert temperature from Fahrenheit to Celsius.
// Formula : Celsius = 5/9(Fahrenheit-32)
#include <stdio.h>

int main()
{
    float Fahrenheit;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &Fahrenheit);

    float celsius=5.0 / 9.0 * (Fahrenheit - 32);
    printf("Temperature in Celsius : %.3f°C\n", celsius);
    
    return 0; 
}