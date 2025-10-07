// Program to print the month of the year based on a number (1-12) input by the user.
#include <stdio.h>

int main()
{
    printf("Welcome to Month Calculator\n");
    int month;
    
    printf("Enter the Month (1-12) : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January\n");
        break;

    case 2:
        printf("February\n");
        break;

    case 3:
        printf("March\n");
        break;

    case 4:
        printf("April\n");
        break;

    case 5:
        printf("May\n");
        break;

    case 6:
        printf("June\n");
        break;

    case 7:
        printf("July\n");
        break;

    case 8:
        printf("August\n");
        break;

    case 9:
        printf("September\n");
        break;

    case 10:
        printf("Octoober");
        break;

    case 11:
        printf("November");
        break;

    case 12:
        printf("December\n");
        break;

    default:
        printf("Invalid Month, Months are must be between 1-12\n");
        break;
    }

    return 0;
}