// Program to store the multiplication table of a given number in an array.
#include <stdio.h>

#define TABLE_SIZE 10

int main()
{
    int number;
    printf("Enter a number to generate its multiplication table (1 to %d) : ", TABLE_SIZE);
    scanf("%d", &number);

    int Table[TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        Table[i] = number * (i + 1);
    }

    printf("Multiplication Table of %d :\n", number);
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        printf("%d x %d = %d\n", number, i + 1, Table[i]);
    }

    return 0;
}
