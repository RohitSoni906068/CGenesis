// Program to print odd numbers from a user-defined range (R to S) using 'continue' statements.
#include <stdio.h>
int main()
{
    int start, end;
    printf(" Enter the starting value of the range: ");
    scanf("%d", &start);
    printf(" Enter the ending value of the range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf(" %d", i);
    }
    printf("\n");
    return 0;
}