// Take Divided as a input from user and check divided is divisible by Divisor(input from user)or not.
#include<stdio.h>
int main(){
    int Divided,Divisor;
    printf(" Enter Divisor Number : ");
    scanf(" %d",&Divisor);
    printf(" Enter Divided Number : ");
    scanf(" %d",&Divided);
    if (Divided%Divisor==0)
    {
        printf(" %d is equally divided by %d.\n",Divided,Divisor);
    }
    else{
        printf(" %d is not equally divided by %d.\n",Divided,Divisor);
    }
    return 0;
}