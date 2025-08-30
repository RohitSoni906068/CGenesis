// Program to convert temperature from Kelvin to Fahrenheit.
// Formula : Fahrenheit = (Kelvin-273.15)*9/5+32
#include<stdio.h>
int main(){
    float Kelvin;
    printf("Enter termperature in Kelvin : ");
    scanf("%f",&Kelvin);
    float fahrenheit=(Kelvin-273.15)*9.0/5.0+32;
    printf("Temperature in Fahrenheit : %.3f F\n",fahrenheit);
    return 0;
}