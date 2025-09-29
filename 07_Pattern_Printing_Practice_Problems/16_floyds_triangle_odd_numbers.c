/* 
16. Floyd's Triangle Pattern (Odd Numbers)
Program to print Floyd's triangle pattern using consecutive odd numbers.
Example : rows = 4
Expected Output:
1
3 5
7 9 11
13 15 17 19
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int consecutiveOddNumber = 1;
    printf("Floyd's Triangle(%d rows) Pattern with Odd Numbers -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", consecutiveOddNumber);
            consecutiveOddNumber += 2;
        }

        printf("\n");
    }

    return 0;
}