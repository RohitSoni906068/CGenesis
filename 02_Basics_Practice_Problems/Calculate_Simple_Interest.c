// Calculate Simple Interest where, principle,Rate,and time are given by user.
#include <stdio.h>
int main()
{
    float principle, time, rate;
    printf(" Enter the Pricipal : ");
    scanf(" %f", &principle);
    printf(" Enter time : ");
    scanf(" %f", &time);
    printf(" Enter rate : ");
    scanf(" %f", &rate);
    printf(" Simple Interst is : %.2f\n",(principle*rate*time)/100);
    return 0;
}