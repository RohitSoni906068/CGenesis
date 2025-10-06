// Program to calculate Compound interest.
// Compound Interest = Principal * (1 + Rate/100)^Time
#include <stdio.h>
#include <math.h> // for power function.

int main()
{
    printf("Welcome to Compound Interest calculation.\n");
    float principal, rate, time;

    printf("Enter the principal : ");
    scanf("%f", &principal);

    printf("Enter the time (in years) : ");
    scanf("%f", &time);

    printf("Enter the rate : ");
    scanf("%f", &rate);

    float Compound_Interest = principal * pow((1.0 + rate / 100), time);
    printf("The Compound Interest is : %.3f\n", Compound_Interest);

    return 0;
}