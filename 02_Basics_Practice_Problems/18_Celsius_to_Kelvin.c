// Write a program to convert Celsius (Centigrade degrees to Kelvin).
// K = °C + 273.15
#include<stdio.h>
int main(){
    float Celsius;
    printf(" Enter temperature in Celsius : ");
    scanf(" %f",&Celsius);
    printf(" Temperature in Kelvin : %.2f K\n",Celsius+273.15);
    return 0;
}