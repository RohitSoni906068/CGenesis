/*
Write a program to print a star pattern using a function (prints first n lines):
Example : rows = 3
Expected Output :
*
* * *
* * * * *
*/
#include <stdio.h>

void printPattern(int rows)
{
    int numStars = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= numStars; j++)
        {
            printf("* ");
        }

        // Prepare for the next row
        numStars += 2;
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf(" %d", &rows);
    
    printPattern(rows);
    return 0;
}