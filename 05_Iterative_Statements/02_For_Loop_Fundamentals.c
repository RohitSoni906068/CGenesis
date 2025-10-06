#include <stdio.h>

/*
 * CHAPTER 2: FOR LOOP FUNDAMENTALS
 *
 * The for loop is ideal when you know exactly how many iterations you need.
 * It combines initialization, condition checking, and increment/decrement
 * in one compact statement.
 *
 * SYNTAX:
 * for (initialization; condition; update)
 * {
 *     // code to execute each iteration
 * }
 *
 * EXECUTION FLOW:
 * 1. Initialize variable (happens only once)
 * 2. Check condition (before each iteration)
 * 3. Execute loop body (if condition is true)
 * 4. Update variable (after each iteration)
 * 5. Return to step 2
 */

int main()
{
    printf("=== BASIC FOR LOOP ===\n");

    // Count up from 1 to 5
    printf("Counting up : ");
    for (int i = 1; i <= 5; i++) // Initialize variable (happens only once)
    {                            // Check condition (before each iteration)
                                 // Execute loop body (if condition is true)
        printf("%d ", i);        // Update variable (after each iteration)
    }                            // Return to step 2
    printf("\n");

    // Count down from 10 to 1
    printf("Counting down : ");
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== DIFFERENT STEP SIZES ===\n");

    // Count by 2s
    printf("Even numbers : ");
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Count by 3s backwards
    printf("Multiples of 3 (reverse) : ");
    for (int i = 15; i >= 3; i -= 3)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== PRACTICAL EXAMPLE: MULTIPLICATION TABLE ===\n");
    int number = 7;
    printf("Multiplication table for %d :\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}