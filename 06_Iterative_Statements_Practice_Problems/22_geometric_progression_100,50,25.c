// Program to display the geometric progression: 100, 50, 25, ... up to 'n' terms.
#include <stdio.h>

int main()
{
    float n;
    printf("Enter how many terms of the pattern to print : ");
    scanf("%f", &n);
    
    float starting_term = 100;
    for (float i = 1; i <= n; i++)
    {
        printf("%.3f ", starting_term);
        starting_term /= 2;
    }
    
    printf("\n");
    return 0;
}