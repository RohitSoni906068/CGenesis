// Program to input name of the person and respond with "Welcome <name> to CGenesis!".
#include<stdio.h>

int main()
{
    char Name[25];

    printf("Enter your name : ");
    scanf(" %20s", Name);

    printf("Welcome %s to CGenesis!\n", Name);

    return 0;
}