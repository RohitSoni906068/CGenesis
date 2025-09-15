/*
12. Program to print a given matrix (n × m) in odd-indexed column-wise wave form.
    Example (rows = 3, cols = 4):
    Input Matrix:               Wave-printed Output:
    1   2   3   4               4   8   12
    5   6   7   8               11  7   3
    9   10  11  12              2   6   10
                                9   5   1 
*/
#include <stdio.h>

int main()
{
    int rows, cols;
    
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    
    printf("Enter number of columns : ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter all %d elements -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    printf("Wave-printed Matrix -:\n");
    for (int i = cols - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", matrix[j][i]);
            }
        }

        else
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                printf("%d ", matrix[j][i]);
            }
        }
        
        printf("\n");
    }

    return 0;
}