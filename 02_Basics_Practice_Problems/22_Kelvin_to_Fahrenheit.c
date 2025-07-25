// Write a program to convert Kelvin (Kelvin temperature to Fahrenheit).
// F = (K-273.15)*9/5+32
#include<stdio.h>
int main(){
    float Kelvin;
    printf(" Enter termperature in Kelvin : ");
    scanf(" %f",&Kelvin);
    printf(" Temperature in Fahreheit : %.3f F\n",(Kelvin-273.15)*9.0/5.0+32);
    return 0;
}