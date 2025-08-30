// Program to convert temperature from Fahrenheit to Kelvin.
// Formula : Kelvin = ((Fahrenheit-32)*5/9)+273.15
#include<stdio.h>

int main()
{
    float Fahrenheit;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&Fahrenheit);
    
    float kelvin=((Fahrenheit-32)*5.0/9.0)+273.15;
    printf("Temperature in Kelvin : %.3f K\n",kelvin);
    
    return 0;
}