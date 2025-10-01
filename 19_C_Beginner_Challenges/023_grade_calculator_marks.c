/*
Program that calculates grades based on marks
A → above 90%
B → above 75%
E → above 60%
D → above 30%
F → below 30%
*/
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks : ");
    scanf("%d", &marks);

    if (marks >= 60)
    {
        if (marks >= 90)
        {
            printf("You have got 'A' Grade.\n");
        }
        else if (marks >= 75)
        {
            printf("You have got 'B' Grade.\n");
        }
        else
        {
            printf("You have got 'C' Grade.\n");
        }
    }

    else if (marks >= 30)
    {
        printf("You have got 'D' Grade.\n");
    }

    else
    {
        printf("You have Failed the exam with 'F' Grade.\n");
    }
    
    return 0;
}
