/*
14. Centered Numerical Pyramid Pattern
Program to print a centered pyramid pattern using consecutive numbers.
Example : rows = 4
Expected Output:
_ _ _ 1
_ _ 1 2 3
_ 1 2 3 4 5
1 2 3 4 5 6 7
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces
    int numberCount = 1;   // Print numbers

    printf("Centered Number Pyramid(%d rows) Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        int currentNumber = 1;

        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print numbers
        for (int k = 1; k <= numberCount; k++)
        {
            printf("%d ", currentNumber);
            currentNumber++;
        }

        // Prepare for next row
        spaces--;
        numberCount += 2;
        printf("\n");
    }

    return 0;
}