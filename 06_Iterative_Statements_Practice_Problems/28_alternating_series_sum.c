// Program to calculate the sum of the series: 1 - 2 + 3 - 4 + 5 - 6 + ... up to 'n' terms.
#include <stdio.h>

int main()
{
    int term, sum = 0;
    
    printf("Enter how many terms of the pattern to calculate the sum : ");
    scanf("%d", &term);
    
    for (int i = 1; i <= term; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        
        else
        {
            sum += i;
        }
    }
    printf("The sum of the given series is : %d\n", sum);

    return 0;
}