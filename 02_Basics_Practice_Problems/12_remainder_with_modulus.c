// Program to find the remainder when a dividend is divided by a divisor, using the modulus (%) operator.
#include<stdio.h>
int main(){
    int divided,divisor;
    printf("Enter divided Number : ");
    scanf("%d",&divided);
    printf("Enter Divisor Number : ");
    scanf("%d",&divisor);
    printf("When %d/%d remainder will be %d\n",divided,divisor,divided%divisor);
    return 0;
}