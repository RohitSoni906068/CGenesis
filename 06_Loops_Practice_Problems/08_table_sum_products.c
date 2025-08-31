// Program to print the multiplication table of 'n' and calculate the sum of all products in the table.
#include <stdio.h>
int main()
{
    int number, sumOfTable = 0;

    printf("Enter Number : ");
    scanf(" %d", &number);

    printf("Table of %d is ->", number);
    for (int i = number; i <= number * 10; i += number)
    {
        printf("%d ", i);
        sumOfTable += i;
    }
    
    printf("\n\nThe sum of the table of %d is : %d.\n", number, sumOfTable);
    return 0;
}