// Write a program to print the row number having the maximum sum in a given matrix.
#include <stdio.h>
#include <limits.h> // for INT_MIN

int main()
{
    int rows, cols;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    printf(" Enter the number of columns : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];

    printf(" Enter all elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    int maxRowSum = INT_MIN;
    int maxRowIndex = 0;

    // Calculate the sum of each row and find the row with the maximum sum
    for (int i = 0; i < rows; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currentSum += matrix[i][j];
        }
        if (currentSum > maxRowSum)
        {
            maxRowSum = currentSum;
            maxRowIndex = i;
        }
    }

    printf(" Row %d has the maximum sum : %d\n", maxRowIndex, maxRowSum);

    return 0;
}