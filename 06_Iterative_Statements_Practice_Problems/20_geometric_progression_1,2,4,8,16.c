// Program to display the geometric progression: 1, 2, 4, 8, 16, 32, ... up to 'n' terms.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many terms of the pattern to print : ");
    scanf("%d", &n);
    
    int starting_term = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", starting_term);
        starting_term *= 2;
    }
    
    printf("\n");
    return 0;
}