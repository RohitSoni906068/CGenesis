/*
10. Left-Aligned Triangle Alphabet Pattern
Program to print a left-aligned triangle pattern using consecutive alphabets.
Example : rows = 4
Expected Output:
A
A B
A B C
A B C D
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Left-Aligned Triangle(%d rows) Alphabet Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        char ch = 'A';
        
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }

        printf("\n");
    }
    
    return 0;
}