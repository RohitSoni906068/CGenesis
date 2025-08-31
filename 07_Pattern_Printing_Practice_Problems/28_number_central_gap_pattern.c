/*
28. Number Pattern with Central Gap
Program to print numbers with a central gap pattern:
Example : rows = 4
Expected Output:
1 2 3 4 5 6 7
1 2 3 _ 5 6 7
1 2 _ _ _ 6 7
1 _ _ _ _ _ 7
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int totalRows = (2 * rows) - 1; // Total number of rows in the pattern
    int visibleNumbers = rows - 1; // Number of visible numbers on each side
    int hiddenNumbers = 1; // Number of hidden (blank) positions

    printf("Number Pattern with Central Gap(%d rows) Pattern (Numbers) -:\n", rows);

    // Print the first row
    for (int i = 1; i <= totalRows; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Print the remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        int currentNumber = 1;

        // Print numbers on the left side
        for (int j = 1; j <= visibleNumbers; j++)
        {
            printf("%d ", currentNumber++);
        }

        // Print hidden (blank) positions
        for (int j = 1; j <= hiddenNumbers; j++)
        {
            printf("  ");
            currentNumber++;
        }

        // Print numbers on the right side
        for (int j = 1; j <= visibleNumbers; j++)
        {
            printf("%d ", currentNumber++);
        }

        printf("\n");
        visibleNumbers--;
        hiddenNumbers += 2;
    }

    return 0;
}