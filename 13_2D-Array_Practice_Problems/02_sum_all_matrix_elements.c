// Program to find the sum of all elements in a given matrix of size n × m.
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix : ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    int sum = 0;

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Printing given matrix
    printf("Input Matrix -:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
    
    printf("Sum of all elements in the matrix : %d\n", sum);

    return 0;
}