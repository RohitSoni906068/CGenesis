#include <stdio.h>

/*
 * CHAPTER 7: NESTED LOOPS
 *
 * A nested loop is a loop inside another loop. The inner loop executes
 * completely for each iteration of the outer loop.
 *
 * SYNTAX:
 * for (outer_init; outer_condition; outer_update)
 * {
 *     for (inner_init; inner_condition; inner_update)
 *     {
 *         // inner loop body
 *     }
 * }
 *
 * EXECUTION PATTERN:
 * - Outer loop runs once
 * - Inner loop runs completely (all its iterations)
 * - Outer loop advances to next iteration
 * - Process repeats until outer loop ends
 *
 * COMMON APPLICATIONS:
 * - 2D arrays/matrices
 * - Pattern printing
 * - Multiplication tables
 * - Coordinate systems
 */

int main()
{
    printf("=== BASIC NESTED LOOP CONCEPT ===\n");

    printf("Outer loop iterations with inner loop counts :\n");
    for (int i = 1; i <= 3; i++) // Outer loop: 3 iterations
    {
        printf("Outer loop iteration %d : ", i);
        for (int j = 1; j <= 4; j++) // Inner loop: 4 iterations each time
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n=== MULTIPLICATION TABLE ===\n");

    printf("Multiplication table (1-5) :\n");
    printf("   ");

    // Print header row
    for (int i = 1; i <= 5; i++)
    {
        printf("%4d", i);
    }
    printf("\n");

    // Print table with row headers
    for (int i = 1; i <= 5; i++)
    {
        printf("%2d ", i); // Row header
        for (int j = 1; j <= 5; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    printf("\n=== PATTERN PRINTING ===\n");

    printf("Right triangle pattern:\n");
    for (int i = 1; i <= 5; i++) // Controls number of rows
    {
        for (int j = 1; j <= i; j++) // Controls stars per row
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nNumber pyramid:\n");
    for (int i = 1; i <= 4; i++) // Row number
    {
        for (int space = 1; space <= 4 - i; space++) // Print spaces for centering
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // Print numbers
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n=== SIMPLE NESTED LOOP EXAMPLE ===\n");

    for (int day = 1; day <= 3; day++) // Outer loop: 3 days
    {
        printf("Day %d:\n", day);

        for (int task = 1; task <= 4; task++) // Inner loop: 4 tasks each day
        {
            printf("  Task %d completed.\n", task);
        }
    }

    printf("\nEach 'day' runs all 4 tasks before moving to the next day.\n");
    printf("This shows how the inner loop runs completely before the outer loop advances.\n");

    return 0;
}