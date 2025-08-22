// Program to multiply two matrices entered by the user

#include <stdio.h>

int main()
{
    int rows1, cols1, cols2;

    printf(" Enter number of rows in the first matrix : ");
    scanf(" %d", &rows1);

    printf(" Enter number of columns in the first matrix (and rows in the second matrix) : ");
    scanf(" %d", &cols1);

    printf(" Enter number of columns in the second matrix : ");
    scanf(" %d", &cols2);

    int matrix1[rows1][cols1];
    int matrix2[cols1][cols2];
    int result[rows1][cols2];

    printf("\nEnter all %d elements of the first matrix -:\n", rows1 * cols1);
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter all %d elements of the second matrix -:\n", cols1 * cols2);
    for (int i = 0; i < cols1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    printf("\nThe product of the two matrices is -:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}