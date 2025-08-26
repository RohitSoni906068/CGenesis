/*
Program to print a given matrix (n x m) in vertically flipped form
(reverse the order of rows).

Example (rows = 3, cols = 4)
Input Matrix:             Output:
1   2   3   4             9   10  11  12
5   6   7   8             5   6   7   8
9   10  11  12            1   2   3   4
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

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    printf("Vertically flipped matrix -:\n");
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}