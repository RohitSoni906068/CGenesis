// Program to calculate simple interest when principal, rate, and time are given by the user.
// Formula : Simple Interest = (Principal * Rate * Time) / 100
#include <stdio.h>

int main()
{
    float principle, time, rate;
    printf("Enter the Pricipal : ");
    scanf("%f", &principle);

    printf("Enter time : ");
    scanf("%f", &time);
    
    printf("Enter rate : ");
    scanf("%f", &rate);
    
    float simple_interest = (principle * rate * time) / 100;
    printf("Simple Interst is : %.2f\n", simple_interest);

    return 0;
}