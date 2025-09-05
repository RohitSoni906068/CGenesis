// Program to add two matrices and print the resulting matrix.
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix : ");
    scanf("%d", &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];

    printf("Enter all %d elements of the first matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix1[i][j]);
        }
    }

    printf("Enter all %d elements of the second matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix2[i][j]);
        }
    }

    printf("Resultant matrix after addition -:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int sum = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum);
        }

        printf("\n");
    }

    return 0;
}