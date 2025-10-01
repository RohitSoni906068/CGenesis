/*
Program that categorize a person into different age groups
Child -> below 13
Teen -> below 20
Adult -> below 60
Senior-> above 60
*/
#include <stdio.h>

int main()
{
    printf("Welcome to Age group calculator.\n");
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age < 13)
    {
        printf("You are a child");
    }

    else if (age < 20)
    {
        printf("You are a teen");
    }

    else if (age < 60)
    {
        printf("You are an Adult");
    }

    else
    {
        printf("You are a Senior");
    }

    return 0;
}