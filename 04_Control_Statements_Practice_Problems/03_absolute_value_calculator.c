// Program to determine the absolute value of a given integer.
#include<stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    
    if (number>=0)
    {
        printf("The Absolute Value of %d is : %d\n",number,number);
    }
    
    else 
    {
        int absolute_value=number*(-1);
        printf("The Absolute Value of %d is : %d\n",number,absolute_value);
    }

    return 0;
}