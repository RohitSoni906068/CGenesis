// Program to determine if a given positive integer is a three-digit number or not.
#include <stdio.h>

int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);

    if (number > 99 && number < 1000)
    {
        printf("Yes, %d is three digit Number\n", number);
    }
    
    else
    {
        printf("No, %d is not three digit Number\n", number);
    }

    return 0;
}