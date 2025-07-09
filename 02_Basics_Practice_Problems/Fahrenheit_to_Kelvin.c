// Write a program to convert Fahrenheit (Fahrenheit temperature to Kelvin).
// K = ((F-32)*5/9)+273.15
#include<stdio.h>
int main(){
    float Fahrenheit;
    printf(" Enter temperature in Fahrenheit : ");
    scanf(" %f",&Fahrenheit);
    printf(" Temperature in Kelvin : %.3f K\n",((Fahrenheit-32)*5.0/9.0)+273.15);
    return 0;
}
