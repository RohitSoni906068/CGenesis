// Program to find and print the row number that has the maximum sum in a given matrix.
#include <stdio.h>

#include <limits.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    int maxRowSum = INT_MIN; // Initialize the maximum row sum to the smallest possible integer value
    
    int maxRowIndex = 0; // Maintain the index of the row with the maximum row sum

    for (int i = 0; i < rows; i++)
    {
        int currentSum = 0;

        // Calculate the sum of the current row
        for (int j = 0; j < cols; j++)
        {
            currentSum += matrix[i][j];
        }

        // Update the maximum row sum and its index if a larger sum is found
        if (currentSum > maxRowSum)
        {
            maxRowSum = currentSum;
            maxRowIndex = i;
        }

    }

    printf("Row %d has the maximum sum : %d\n", maxRowIndex, maxRowSum);

    return 0;
}