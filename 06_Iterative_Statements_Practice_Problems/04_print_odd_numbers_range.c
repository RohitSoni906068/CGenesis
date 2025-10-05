// Program to print all odd numbers from R to S (both values provided by the user).
#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter Numbers from start printing even number : ");
    scanf("%d", &start);

    printf("Enter Number where end of printing even number : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d", i);
        }
    }
    
    printf("\n");
    return 0;
}
