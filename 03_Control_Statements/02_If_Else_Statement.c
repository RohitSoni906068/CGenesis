#include <stdio.h>

int main()
{
    /*
     * IF-ELSE STATEMENT
     *
     * The if-else statement provides two execution paths:
     * - if block: executes when condition is true
     * - else block: executes when condition is false
     *
     * Syntax:
     * if (condition) 
     * {
     *     // Code for true condition
     * } 
     * else 
     * {
     *     // Code for false condition
     * }
     */

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) // - if block: executes when condition is true
    {
        printf("%d is a positive number.\n", number);
        // Executes when number > 0 is true
    }
    else // - else block: executes when condition is false
    {
        printf("%d is zero or negative.\n", number);
        // Executes when number > 0 is false
    }

    return 0;
}
