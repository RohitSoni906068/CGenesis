// Program to determine if a given positive integer is even or odd.
#include<stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    
    if (number%2==0)
    {
        printf("%d is Even Number.\n",number);
    }
    
    else
    {
        printf("%d is Odd Number.\n",number);
    }

    return 0;
}