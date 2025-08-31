/*
8. Left-Aligned Triangle Pattern with Odd Numbers
Program to print a left-aligned triangle pattern using odd numbers.
Example : rows = 4
Expected Output:
1
1 3
1 3 5
1 3 5 7
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Left-Aligned Triangle(%d rows) Pattern with Odd Numbers -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        int pattern = 1;
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", pattern);
            pattern += 2;
        }

        printf("\n");
    }

    return 0;
}