// Take integer input and print the absolute value of that integer
#include<stdio.h>
int main(){
    int number;
    printf(" Enter Number : ");
    scanf(" %d",&number);
    if (number>=0)
    {
        printf(" The Absolute Value of %d is : %d\n",number,number);
    }
    else {
        printf(" The Absolute Value of %d is : %d\n",number,number*(-1));
    }
    return 0;
}