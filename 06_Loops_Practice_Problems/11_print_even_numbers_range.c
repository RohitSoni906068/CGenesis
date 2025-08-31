// Program to print all even numbers within a given range.
#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the starting value of the range : ");
    scanf("%d", &start);

    printf("Enter the ending value of the range : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
