#include <stdio.h>

/*
 * CHAPTER 9: LOOP COMPARISON AND SUMMARY
 *
 * This final chapter compares all loop types and provides guidance
 * on when to use each type of loop in different scenarios.
 *
 * LOOP TYPES SUMMARY:
 *
 * FOR LOOP:
 * - Best when: You know the exact number of iterations
 * - Syntax combines initialization, condition, and update
 * - Most compact for counter-based loops
 *
 * WHILE LOOP:
 * - Best when: Number of iterations is unknown
 * - Condition checked before each iteration
 * - Good for input validation and event-driven loops
 *
 * DO-WHILE LOOP:
 * - Best when: Loop body must execute at least once
 * - Condition checked after each iteration
 * - Perfect for menu systems and user confirmation
 */

int main()
{
    printf("=== LOOP COMPARISON : SAME TASK, DIFFERENT LOOPS ===\n");

    // Task: Print numbers 1 to 5
    printf("Printing 1 to 5 using different loop types:\n");

    // Using FOR loop
    printf("For loop : ");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Using WHILE loop
    printf("While loop: ");
    int i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using DO-WHILE loop
    printf("Do-while loop: ");
    int j = 1;
    do
    {
        printf("%d ", j);
        j++;
    } while (j <= 5);
    printf("\n");

    printf("\n=== WHEN TO USE EACH LOOP TYPE ===\n");

    // FOR LOOP - Known iterations
    printf("FOR LOOP examples (known iterations) :\n");

    // Simple counting example using FOR loop
    printf("- Counting from 1 to 5 using FOR loop :\n");

    // The FOR loop starts with i = 1; continues while i <= 5; increments i each time
    for (int i = 1; i <= 5; i++)
    {
        printf("Number : %d\n", i); // Print the current value of i
    }
    // Mathematical sequences
    printf("- Generating factorial of 5 : ");
    int factorial = 1;
    for (int i = 1; i <= 5; i++)
    {
        factorial *= i;
        printf("%d! = %d%s", i, factorial, (i < 5) ? ", " : "\n");
    }

    // WHILE LOOP - Unknown iterations
    printf("\nWHILE LOOP examples (unknown iterations) :\n");

    // Finding first number divisible by 7 after 100
    int num = 101;
    while (num % 7 != 0)
    {
        num++;
    }
    printf("- First number after 100 divisible by 7 : %d\n", num);

    // Input validation
    printf("- Input validation example :\n");
    int grade;
    printf("  Enter a grade (0-100) : ");
    scanf("%d", &grade);

    while (grade < 0 || grade > 100)
    {
        printf("  Invalid! Enter grade (0-100) : ");
        scanf("%d", &grade);
    }
    printf("  Valid grade entered : %d\n", grade);

    // DO-WHILE LOOP - Execute at least once
    printf("\nDO-WHILE LOOP examples (execute at least once) :\n");

    // Simple menu demonstration
    char choice;
    do
    {
        printf("- Mini menu: [A]dd, [S]ubtract, [Q]uit : ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'A':
        case 'a':
            printf("  Addition selected\n");
            break;
        case 'S':
        case 's':
            printf("  Subtraction selected\n");
            break;
        case 'Q':
        case 'q':
            printf("  Goodbye!\n");
            break;
        default:
            printf("  Invalid choice, try again\n");
        }
    } while (choice != 'Q' && choice != 'q');

    printf("\n=== PERFORMANCE CONSIDERATIONS ===\n");

    printf("Loop efficiency tips:\n");
    printf("1. For loops are generally fastest for simple counting\n");
    printf("2. Avoid complex calculations in loop conditions\n");
    printf("3. Consider loop unrolling for performance-critical code\n");
    printf("4. Use appropriate data types (avoid unnecessary conversions)\n");

    // Example: Efficient vs inefficient loop
    printf("\nEfficient loop example:\n");
    int limit = 1000; // Calculate once, outside loop
    int sum = 0;

    for (int i = 1; i <= limit; i++)
    {             // Simple condition
        sum += i; // Simple operation
    }
    printf("Sum of 1 to %d = %d\n", limit, sum);

    printf("\n=== NESTED LOOPS REVIEW ===\n");

    // Practical nested loop example
    printf("Multiplication table (condensed):\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d×%d=%2d  ", i, j, i * j);
        }
        printf("\n");
    }

    printf("\n=== LOOP CONTROL STATEMENTS REVIEW ===\n");

    printf("Using break and continue together:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i > 7)
        {
            printf("Stopping at %d\n", i);
            break; // Exit loop
        }

        if (i % 2 == 0)
        {
            continue; // Skip even numbers
        }

        printf("Processing odd number : %d\n", i);
    }

    printf("\n=== FINAL RECOMMENDATIONS ===\n");

    printf("Choosing the right loop :\n");
    printf("• FOR : Counting, arrays, known repetitions\n");
    printf("• WHILE : Validation, searching, conditional repetition\n");
    printf("• DO-WHILE : Menus, confirmations, \"at least once\" scenarios\n");
    printf("• BREAK : Early exit when condition met\n");
    printf("• CONTINUE : Skip current iteration, continue with next\n");
    printf("• NESTED : Multi-dimensional data, pattern generation\n");

    return 0;
}