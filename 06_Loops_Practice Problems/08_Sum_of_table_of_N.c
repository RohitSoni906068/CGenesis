// Write a program to print table of n and sum of table of n.
#include <stdio.h>
int main()
{
    int number, sumOfTable = 0;
    printf("Enter the number for which you want to print the multiplication table : ");
    scanf(" %d", &number);
    for (int i = number; i <= number * 10; i += number)
    {
        printf("%d ", i);
        sumOfTable += i;
    }
    printf("\n\nThe sum of the table of %d is : %d.\n", number, sumOfTable);
    return 0;
}