/*
Give a positive integer n, generate a square(n*n) matrix filled with elements from 1 to n*n in spiral order.
(Leetcode-59)
Example (rows = 5, cols = 6)
Input Matrix:                           Generated Matrix:
1  2   3   4   5   6                    1   2   3   4   5   6
7  8   9   10  11  12                   18  19  20  21  22  7
13 14  15  16  17  18                   17  28  29  30  23  8
19 20  21  22  23  24                   16  27  26  25  24  9
25 26  27  28  29  30                   15  14  13  12  11  10
*/
#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows in the matrix : ");
    scanf(" %d", &rows);
    printf("Enter number of columns in the matrix : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];
    
    int topRow = 0, bottomRow = rows - 1;
    int leftCol = 0, rightCol = cols - 1;
    int remainingElements = rows * cols;

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    while (remainingElements > 0)
    {
        // Input the top row
        for (int i = leftCol; i <= rightCol && remainingElements > 0; i++)
        {
            scanf(" %d", &matrix[topRow][i]);
            remainingElements--;
        }
        topRow++;

        // Input the right column
        for (int i = topRow; i <= bottomRow && remainingElements > 0; i++)
        {
            scanf(" %d", &matrix[i][rightCol]);
            remainingElements--;
        }
        rightCol--;

        // Input the bottom row
        for (int i = rightCol; i >= leftCol && remainingElements > 0; i--)
        {
            scanf(" %d", &matrix[bottomRow][i]);
            remainingElements--;
        }
        bottomRow--;

        // Input the left column
        for (int i = bottomRow; i >= topRow && remainingElements > 0; i--)
        {
            scanf(" %d", &matrix[i][leftCol]);
            remainingElements--;
        }
        leftCol++;
    }
    // Generated Matrix -:
    printf("Generated Matrix -:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}