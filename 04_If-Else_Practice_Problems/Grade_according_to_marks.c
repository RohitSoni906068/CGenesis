// Take the input percentage of a student and print the grade according to the marks using nested if:
// 	1.	90 - 100: Excellent
// 	2.	80 - 90: Very Good
// 	3.	70 - 80: Good
// 	4.	60 - 70: Can Do Better
// 	5.	50 - 60: Average
// 	6.	40 - 50: Below Average
// 	7.	Below 40: Fail
#include <stdio.h>
int main()
{
    float marks;
    printf(" Enter Your Marks : ");
    scanf(" %f", &marks);
    if (marks >= 70)
    {
        if (marks >= 90)
        {
            printf(" Excellent\n");
        }
        else if (marks >= 80)
        {
            printf(" Very Good\n");
        }
        else
        {
            printf(" Good\n");
        }
    }
    else if (marks >= 40)
    {
        if (marks >= 60)
        {
            printf(" Can Do Better\n");
        }
        else if (marks >= 50)
        {
            printf(" Average\n");
        }
        else
        {
            printf(" Below Average\n");
        }
    }
    else
    {
        printf(" Fail\n");
    }
    return 0;
}