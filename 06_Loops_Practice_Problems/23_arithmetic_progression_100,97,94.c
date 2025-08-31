// Program to display the arithmetic progression: 100, 97, 94, ... down to the last positive term, with 'n' starting terms.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the starting term of your sequence : ");
    scanf(" %d", &n);

    for (int i = n; i > 0; i -= 3)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}