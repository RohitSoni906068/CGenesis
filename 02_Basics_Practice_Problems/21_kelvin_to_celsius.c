// Program to convert temperature from Kelvin to Celsius.
// Formula : Celsius = Kelvin - 273.15
#include<stdio.h>
int main()
{
    float Kelvin;
    printf("Enter temperature in Kelvin : ");
    scanf("%f",&Kelvin);

    float celsius=Kelvin-273.15;
    printf("Temperature in Celsius : %.3f°C\n",celsius);
    
    return 0;
}