// Program to print a left-aligned triangle pattern of Alphabetic
// A
// A B
// A B C
// A B C D
#include <stdio.h>
int main()
{
    int row;
    printf(" Enter row : ");
    scanf(" %d", &row);
    for (int i = 1; i <= row; i++)
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