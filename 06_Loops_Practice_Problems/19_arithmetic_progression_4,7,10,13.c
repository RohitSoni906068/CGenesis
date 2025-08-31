// Program to display the arithmetic progression: 4, 7, 10, 13, 16, ... up to 'n' terms.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many terms of the pattern to print : ");
    scanf("%d", &n);
    
    int starting_term = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", starting_term);
        starting_term += 3;
    }
    
    printf("\n");
    return 0;
}