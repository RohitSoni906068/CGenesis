// Print numbers on the left side of the current row
// 1 2 3 4 5 6 7
// 1 2 3 _ 5 6 7
// 1 2 _ _ _ 6 7
// 1 _ _ _ _ _ 7
#include <stdio.h>
int main()
{
    int rows;
    printf(" Enter the number of rows : ");
    scanf("%d", &rows);

    int numVisibleNumbersPerSide = rows - 1;
    int numHiddenNumbers = 1;

    // Print the first row
    for (int i = 1; i <= (2 * rows) - 1; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Print the remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        int currentNumber = 1;

        // Print numbers on the left side
        for (int j = 1; j <= numVisibleNumbersPerSide; j++)
        {
            printf("%d ", currentNumber++);
        }

        // Print hidden (blank) positions
        for (int j = 1; j <= numHiddenNumbers; j++)
        {
            printf("  ");
            currentNumber++;
        }

        // Print numbers on the right side
        for (int j = 1; j <= numVisibleNumbersPerSide; j++)
        {
            printf("%d ", currentNumber++);
        }

        printf("\n");
        numVisibleNumbersPerSide--;
        numHiddenNumbers += 2;
    }

    return 0;
}