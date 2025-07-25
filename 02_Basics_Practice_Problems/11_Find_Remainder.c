// Take two integers input, a and b: a>b, and find the remainder when a is divided by b without using Moduls operator(%).
#include<stdio.h>
int main(){
    int divided,divisor;
    printf(" Enter divided Number : ");
    scanf(" %d",&divided);
    printf(" Enter Divisor Number : ");
    scanf(" %d",&divisor);
    printf(" When %d/%d remainder will be %d\n",divided,divisor,divided-(divided/divisor)*divisor);
    return 0;
}