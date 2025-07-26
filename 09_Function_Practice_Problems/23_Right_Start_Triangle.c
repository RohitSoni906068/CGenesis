// Program to print a star pattern using a function (prints first n lines)
// *
// * * *
// * * * * *
#include <stdio.h>
void printPattern(int numRows)
{
    int numStars = 1;
    for (int i = 1; i <= numRows; i++)
    {
        for (int j = 1; j <= numStars; j++)
        {
            printf("* ");
        }
        numStars += 2;
        printf("\n");
    }
}

int main()
{
    int numRows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &numRows);
    printPattern(numRows);
    return 0;
}