// Program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>

int main()
{
    printf("Welcome to Least Common Multiple (LCM) Calculator.\n");
    int First, Second;

    printf("Enter the first number : ");
    scanf("%d", &First);

    printf("Enter the second number : ");
    scanf("%d", &Second);

    int Max_num = (First > Second) ? First : Second;
    int LCM = 0;

    for (int i = Max_num; i <= First * Second; i++)
    {
        if (i % First == 0 && i % Second == 0)
        {
            LCM = i;
            break;
        }
    }

    printf("The Least Common Multiple (LCM) of %d and %d is : %d\n", First, Second, LCM);
    return 0;
}