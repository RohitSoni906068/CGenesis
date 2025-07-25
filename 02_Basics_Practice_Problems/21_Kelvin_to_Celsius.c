// Write a program to convert Kelvin (Kelvin temperature to Centigrade degrees).
// C = K - 273.15
#include<stdio.h>
int main(){
    float Kelvin;
    printf(" Enter temperature in Kelvin : ");
    scanf(" %f",&Kelvin);
    printf(" Temperature in Celsius : %.3f°C\n",Kelvin-273.15);
    return 0;
}