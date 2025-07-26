// print all numbers within a given range.
#include<stdio.h>
int main(){
    int r,s;
    printf(" Enter where you want to start printing Number : ");
    scanf(" %d",&r);
    printf(" Enter where you want to stop printing Number : ");
    scanf(" %d",&s);
    for (int i = r; i <=s; i++)
    {
        printf(" %d",i);
    }
    printf("\n");
    return 0;
}