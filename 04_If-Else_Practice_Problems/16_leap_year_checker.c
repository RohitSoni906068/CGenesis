// Program to determine whether the year is a leap year or not. (Consider that leap years occur every 4 years)
#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter Year : ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is Leap Year.\n", year);
    }
    
    else
    {
        printf("%d is Not Leap Year.\n", year);
    }

    return 0;
}