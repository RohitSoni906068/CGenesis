// Program to print all numbers within a given range.
#include<stdio.h>

int main()
{
    int start,end;

    printf("Enter where you want to start printing Number : ");
    scanf("%d",&start);
    
    printf("Enter where you want to stop printing Number : ");
    scanf("%d",&end);

    for (int i = start; i <=end; i++)
    {
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}