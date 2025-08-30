// Program to take a float input and print the fractional part of the real number.
// Formula : Fractional Part = Number - Integer Part
#include<stdio.h>
int main(){
    float n;
    printf("Enter the Number : ");
    scanf("%f",&n);
    float fractional_part = n - (int)n;
    printf("The Fractional Part of %.3f is %.3f \n",n,fractional_part);
    return 0;
}