// Take float input and print the of the real number.
#include<stdio.h>
int main(){
    float n;
    printf(" Enter the Number : ");
    scanf(" %f",&n);
    printf(" The Fractional Part of %.3f is %.3f \n",n,n-(int)n);
    return 0;
}