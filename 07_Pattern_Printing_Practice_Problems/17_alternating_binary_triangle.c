/*
17. Alternating Binary Triangle Pattern
Program to print the following alternating binary triangle pattern:
Example : rows = 4
Expected Output:
1
0 1
1 0 1
0 1 0 1
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int currentValue = 1;

    printf("Alternating Binary Triangle(%d rows) Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 == 0)
            currentValue = 0;

        else
            currentValue = 1;
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", currentValue);
            currentValue = 1 - currentValue; // Toggle between 1 and 0 (if currentValue = 1,then converted to 0,
                                             // and if currentValue = 0,then converted to 1.)
        }

        printf("\n");
    }

    return 0;
}