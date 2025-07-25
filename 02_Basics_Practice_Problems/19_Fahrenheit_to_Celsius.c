// Write a program to convert Fahrenheit (Fahrenheit temperature to Centigrade degrees).
// C = 5/9(F-32)
#include <stdio.h>
int main()
{
    float Fahrenheit;
    printf(" Enter temperature in Fahrenheit : ");
    scanf(" %f", &Fahrenheit);
    printf(" Temperature in Celsius : %.3f°C\n", 5.0 / 9.0 * (Fahrenheit - 32));
    return 0;
}
