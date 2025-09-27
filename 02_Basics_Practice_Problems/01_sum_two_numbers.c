// Program to calculate the sum of two given numbers.
#include<stdio.h>

int main()
{
    float a,b;
     
    printf("Enter First Number : ");
    scanf("%f",&a);
    
    printf("Enter Second Number : ");
    scanf("%f",&b);

    float sum=a+b;
    printf("The Sum of %.3f + %.3f is : %.3f\n",a,b,sum);

    return 0;
}