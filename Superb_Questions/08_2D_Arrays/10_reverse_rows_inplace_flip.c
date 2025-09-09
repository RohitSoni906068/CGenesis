/*
22. In-place program to transform a given matrix (n × m) by reversing the order of rows (vertical flip).
    Example (rows = 3, cols = 4):
    Input Matrix:               Transformed Matrix:
    1   2   3   4               9   10  11  12
    5   6   7   8               5   6   7   8
    9   10  11  12              1   2   3   4
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

    // Reverse the rows (vertical flip)

    int top = 0; // Start of the row
    int bottom = rows - 1; // End of the row
    
    // Swap rows top ↔ bottom
    while (bottom > top)
    {
        for (int j = 0; j < cols; j++)
        {
            // Swap elements in the current row
            int temp = matrix[top][j];
            matrix[top][j] = matrix[bottom][j];
            matrix[bottom][j] = temp;
        }

        top++;
        bottom--;
    }

    printf("Transformed matrix -:\n");
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