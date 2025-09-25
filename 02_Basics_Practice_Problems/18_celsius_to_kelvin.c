// Program to convert temperature from Celsius to Kelvin.
// Formula : Kelvin = Celsius + 273.15
#include<stdio.h>

int main()
{
    float Celsius;
    printf("Enter temperature in Celsius : ");
    scanf("%f",&Celsius);

    float kelvin=Celsius+273.15;
    printf("Temperature in Kelvin : %.2f K\n",kelvin);

    return 0; 
}