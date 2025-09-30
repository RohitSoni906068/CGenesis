// Program to calculate simple interest.
// Simple Interest = (Principal x Time x Rate)/100
#include <stdio.h>

int main()
{
    printf("Welcome to Simple Interest calculation.\n");
    float principal, time, rate;

    printf("Enter the principal : ");
    scanf("%f", &principal);

    printf("Enter the time (in years) : ");
    scanf("%f", &time);

    printf("Enter the rate : ");
    scanf("%f", &rate);

    float Simple_Interest = (principal * rate * time) / 100;
    printf("The Simple Interest is : %.3f\n", Simple_Interest);

    return 0;
}