// Write a program to print armstrong number between R(Starting Value) to S(Ending Number) given by user.
#include <stdio.h>
#include <math.h> // Math.h file provides some basic funcatins of math like power(a,b)->[return a rasied to the power b]
// sqrt(x)->[reutrn square of x] fabs(x)->[ for returning abousulate value of x].
int main()
{
    int start, end;

    printf(" Enter the starting value of the range : ");
    scanf(" %d", &start);
    printf(" Enter the ending value of the range : ");
    scanf(" %d", &end);

    printf(" Armstrong numbers between %d and %d are -:\n", start, end);

    for (int num = start; num <= end; num++)
    {
        int temp = num, digits = 0, sum = 0;

        // Count number of digits
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;
        // Calculate sum of digits raised to the power of 'digits'
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += (int)pow(digit, digits); //	pow() returns a double, so casting to int is common.
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
