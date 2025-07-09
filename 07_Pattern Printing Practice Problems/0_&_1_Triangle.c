// Program to print the following pattern:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include <stdio.h>
int main()
{
    int numRows;
    printf(" Enter number of rows : ");
    scanf(" %d", &numRows);

    int currentValue;
    for (int i = 1; i <= numRows; i++)
    {

        if (i % 2 == 0)
            currentValue = 0;

        else
            currentValue = 1;

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", currentValue);
            currentValue = 1 - currentValue; // Toggle between 1 and 0 (if currenValue=1,then converted to 0 and vice-versa.)
        }
        printf("\n");
    }

    return 0;
}