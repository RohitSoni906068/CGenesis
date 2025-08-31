// Program to print the multiplication table of a user-given number in reverse order.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Table of %d in reverse order is ->", num);
    for (int i = num * 10; i >= num; i -= num)
    {
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}