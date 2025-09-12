/*
26. Given an n × m matrix, print all elements of the matrix in spiral order. (LeetCode-54)
    Example (rows = 5, cols = 6):
    Input Matrix:                        
    1   2   3   4   5   6
    7   8   9   10  11  12
    13  14  15  16  17  18
    19  20  21  22  23  24
    25  26  27  28  29  30

    Output (spiral order):
    1 2 3 4 5 6 12 18 24 30 29 28 27 26 25 19 13 7 8 9 10 11 17 23 22 21 20 14 15 16
*/

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows in the matrix : ");
    scanf("%d", &rows);
    printf("Enter number of columns in the matrix : ");
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

    int remainingElements = rows * cols; // Total number of elements
    
    int topRow = 0, bottomRow = rows - 1; // Start and end of the row
    int leftCol = 0, rightCol = cols - 1; // Start and end of the column

    printf("Spiral order -:\n");
    while (remainingElements > 0)
    {
        // Print the top row
        for (int i = leftCol; i <= rightCol && remainingElements > 0; i++)
        {
            printf("%d ", matrix[topRow][i]);
            remainingElements--;
        }
        topRow++;

        // Print the right column
        for (int i = topRow; i <= bottomRow && remainingElements > 0; i++)
        {
            printf("%d ", matrix[i][rightCol]);
            remainingElements--;
        }
        rightCol--;

        // Print the bottom row
        for (int i = rightCol; i >= leftCol && remainingElements > 0; i--)
        {
            printf("%d ", matrix[bottomRow][i]);
            remainingElements--;
        }
        bottomRow--;

        // Print the left column
        for (int i = bottomRow; i >= topRow && remainingElements > 0; i--)
        {
            printf("%d ", matrix[i][leftCol]);
            remainingElements--;
        }
        leftCol++;
    }

    printf("\n");
    return 0;
}