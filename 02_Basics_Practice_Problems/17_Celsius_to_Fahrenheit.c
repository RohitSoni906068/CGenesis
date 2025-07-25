// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
// Fahrenheit=(C*9/5)+32
#include <stdio.h>
int main()
{
    float Celsius;
    printf(" Enter temperature in Celsius : ");
    scanf(" %f", &Celsius);
    printf(" Temperature in Fahrenheit : %.3f\n",(Celsius*9.0/5.0)+32);
    return 0;
}