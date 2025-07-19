// Function to print the multiplication table of a given number
#include <stdio.h>

void printTable(int number)
{
    for (int i = 1; i <= 10; ++i)
    {
        printf(" %d x %d = %d\n", number, i, number * i);
    }
}

int main()
{
    int number;
    printf(" Enter the number for which you want the multiplication table : ");
    scanf("%d", &number);

    printTable(number);

    return 0;
}