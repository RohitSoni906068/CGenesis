// Program to print half of a given number.
#include <stdio.h>

int main()
{
    float n;
    printf("Enter Number : ");
    scanf("%f", &n);

    float half=n/2.0;
    printf("Half of %.3f is : %.3f\n", n, half);
    
    return 0;
}