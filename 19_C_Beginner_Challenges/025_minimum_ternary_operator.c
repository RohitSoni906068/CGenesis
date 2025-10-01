// Program to find the minimum of two numbers using ternary operator.
#include <stdio.h>

int main()
{
    int first, second;

    printf("Enter the First number : ");
    scanf("%d", &first);

    printf("Enter the Second number : ");
    scanf("%d", &second);

    int min = (first > second) ? second : first;
    printf("The Minimum Number is : %d.\n", min);

    return 0;
}