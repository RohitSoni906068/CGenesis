// Program to find the remainder when a dividend is divided by a divisor, without using the modulus (%) operator.
// Formula : Remainder = Dividend - (Dividend / Divisor) * Divisor
#include<stdio.h>
int main(){
    int divided,divisor;
    printf("Enter divided Number : ");
    scanf("%d",&divided);
    printf("Enter Divisor Number : ");
    scanf("%d",&divisor);
    int remainder = divided - (divided / divisor) * divisor;
    printf("When %d/%d remainder will be %d\n",divided,divisor,remainder);
    return 0;
}