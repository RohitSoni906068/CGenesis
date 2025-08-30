// Program to taking a student's percentage as input and print the corresponding grade using nested if statements:
//     • 90 - 100: Excellent
//     • 80 - 89: Very Good
//     • 70 - 79: Good
//     • 60 - 69: Can Do Better
//     • 50 - 59: Average
//     • 40 - 49: Below Average
//     • Below 40: Fail
#include <stdio.h>

int main()
{
    float marks;
    printf("Enter Your Marks : ");
    scanf("%f", &marks);

    if (marks >= 70)
    {
        if (marks >= 90)
        {
            printf("Excellent\n");
        }
        else if (marks >= 80)
        {
            printf("Very Good\n");
        }
        else
        {
            printf("Good\n");
        }
    }

    else if (marks >= 40)
    {
        if (marks >= 60)
        {
            printf("Can Do Better\n");
        }
        else if (marks >= 50)
        {
            printf("Average\n");
        }
        else
        {
            printf("Below Average\n");
        }
    }
    
    else
    {
        printf("Fail\n");
    }
    
    return 0;
}