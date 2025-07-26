// Print the table of N(Given By User).
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter Number : ");
    scanf(" %d", &n);
    printf(" Table of %d is ->", n);
    for (int i = n; i <= (n * 10); i += n)
    {
        printf(" %d", i);
    }
    printf("\n");
    return 0;
}