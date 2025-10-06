#include <stdio.h>

/*
 * CHAPTER 6: LOOP CONTROL - CONTINUE STATEMENT
 *
 * The continue statement skips the remaining code in the current iteration
 * and jumps to the next iteration of the loop.
 *
 * SYNTAX:
 * continue;
 *
 * BEHAVIOR:
 * - Skips rest of current iteration
 * - Goes directly to loop condition check (while/do-while)
 * - Goes to update expression (for loop)
 * - Does NOT exit the loop entirely
 *
 * COMMON USES:
 * - Skip invalid data
 * - Filter out unwanted values
 * - Handle special cases
 */

int main()
{
    printf("=== CONTINUE IN FOR LOOP ===\n");

    printf("Printing odd numbers from 1 to 10 : ");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {             // If even number
            continue; // Skip to next iteration
        }
        printf("%d ", i); // This only executes for odd numbers
    }
    printf("\n");

    printf("\n=== CONTINUE IN WHILE LOOP ===\n");

    printf("Numbers from 1 to 10, skipping 5 : ");
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i == 5)
        {
            continue; // Skip printing when i is 5
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== INPUT PROCESSING EXAMPLE ===\n");

    printf("Enter 5 positive numbers (negative numbers will be skipped) :\n");
    int positiveCount = 0;
    int total = 0;

    for (int i = 1; i <= 8; i++) // Allow up to 8 attempts to get 5 positive numbers
    {
        int num;
        printf("Number %d : ", i);
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("Negative or zero - skipped!\n");
            continue; // Skip negative numbers, don't count this iteration
        }

        total += num;
        positiveCount++;
        printf("Added %d (running total : %d)\n", num, total);

        if (positiveCount == 5)
        {
            break; // We have enough positive numbers
        }
    }

    printf("Sum of %d positive numbers : %d\n", positiveCount, total);

    return 0;
}