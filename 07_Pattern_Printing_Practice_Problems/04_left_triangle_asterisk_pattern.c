/* 
4. Left-Aligned Triangle Pattern (Asterisks)
Program to print a left-aligned triangle pattern using asterisks.
Example : rows = 4
Expected Output:
*
* *
* * *
* * * *
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Left-Aligned Triangle(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}