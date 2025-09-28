// Program to check if a given dividend is divisible by a given divisor.
#include<stdio.h>

int main()
{
    int Divided,Divisor;

    printf("Enter divisor number : ");
    scanf("%d",&Divisor);

    printf("Enter divided number : ");
    scanf("%d",&Divided);

    if (Divided%Divisor==0)
    {
        printf("%d is equally divided by %d.\n",Divided,Divisor);
    }

    else
    {
        printf("%d is not equally divided by %d.\n",Divided,Divisor);
    }

    return 0;
}