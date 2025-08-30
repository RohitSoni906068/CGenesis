// Program to convert temperature from Celsius to Fahrenheit.
// Formula : Fahrenheit = (Celsius * 9/5) + 32
#include<stdio.h>

int main()
{
    float Celsius;
    printf("Enter temperature in Celsius : ");
    scanf("%f",&Celsius);

    float fahrenheit=(Celsius * 9.0/5.0) + 32;
    printf("Temperature in Fahrenheit : %.3f F\n",fahrenheit);
    
    return 0;
}