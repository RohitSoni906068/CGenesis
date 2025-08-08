// Program to find the row with the maximum number of 1s in a binary matrix
#include <stdio.h>

int main()
{
    int rows, cols;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    printf(" Enter the number of columns : ");
    scanf(" %d", &cols);

    int binaryMatrix[rows][cols];

    printf(" Enter the elements of the matrix (only 0 or 1) :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &binaryMatrix[i][j]);
        }
    }

    int maxCount = -1;
    int maxRowIndex = -1;

    // Find the row with the maximum number of 1s
    for (int i = 0; i < rows; i++)
    {
        int currentCount = 0;
        for (int j = 0; j < cols; j++)
        {
            if (binaryMatrix[i][j] == 1)
            {
                currentCount++;
            }
        }
        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            maxRowIndex = i;
        }
    }

    printf(" Row %d has the maximum number of 1s : %d\n", maxRowIndex, maxCount);

    return 0;
}