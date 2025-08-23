// Program: Demonstrates how to declare a 2D array, take input from the user, and display the matrix elements.

#include <stdio.h>

int main()
{
    int rows, columns;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    printf(" Enter the number of columns : ");
    scanf(" %d", &columns);

    int matrix[rows][columns];

    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
    {
        for (int colIndex = 0; colIndex < columns; colIndex++)
        {
            printf(" Enter value at row %d, column %d : ", rowIndex, colIndex);
            scanf(" %d", &matrix[rowIndex][colIndex]);
        }
    }

    printf("\nMatrix:\n");
    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
    {
        for (int colIndex = 0; colIndex < columns; colIndex++)
        {
            printf("%d ", matrix[rowIndex][colIndex]);
        }
        printf("\n");
    }
 
    return 0;
}