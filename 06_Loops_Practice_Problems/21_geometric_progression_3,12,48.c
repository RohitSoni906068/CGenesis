// Program to display the geometric progression: 3, 12, 48, ... up to 'n' terms.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many terms of the pattern to print : ");
    scanf("%d", &n);
    
    int starting_term = 3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", starting_term);
        starting_term *= 4;
    }
    
    printf("\n");
    return 0;
}