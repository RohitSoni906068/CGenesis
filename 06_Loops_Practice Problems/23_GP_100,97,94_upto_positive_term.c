// Display the arithmetic progression: 100, 97, 94, ... down to the last positive term starting from 'n'.
#include <stdio.h>

int main()
{
    int n;

    printf(" Enter the starting number of the sequence : ");
    scanf(" %d", &n);

    for (int i = n; i > 0; i -= 3)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}