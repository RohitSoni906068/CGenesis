#include <stdio.h>
#include <stdbool.h>

/*
 * CHAPTER 8: INFINITE LOOPS AND BEST PRACTICES
 *
 * An infinite loop runs forever because its condition never becomes false.
 * While usually unintentional and problematic, infinite loops can be
 * useful in certain scenarios when combined with break statements.
 *
 * COMMON CAUSES:
 * - Forgetting to update loop variable
 * - Incorrect condition logic
 * - Intentional infinite loop for continuous operation
 *
 * PREVENTION:
 * - Always ensure loop variables are updated
 * - Double-check loop conditions
 * - Use break statements for controlled exits
 * - Add safety counters when needed
 */

int main()
{
    printf("=== INTENTIONAL INFINITE LOOPS (with break) ===\n");

    // Example 1: Menu system using infinite loop
    printf("Simple calculator (enter 'q' to quit):\n");

    while (true)
    { // Infinite loop - but we'll break out
        char operation;
        printf("\nEnter operation (+, -, *, /, q to quit): ");
        scanf(" %c", &operation);

        if (operation == 'q' || operation == 'Q')
        {
            printf("Calculator shutting down...\n");
            break; // Controlled exit from infinite loop
        }

        if (operation == '+' || operation == '-' ||
            operation == '*' || operation == '/')
        {

            double num1, num2;
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch (operation)
            {
            case '+':
                printf("Result: %.2f\n", num1 + num2);
                break;
            case '-':
                printf("Result: %.2f\n", num1 - num2);
                break;
            case '*':
                printf("Result: %.2f\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                {
                    printf("Result: %.2f\n", num1 / num2);
                }
                else
                {
                    printf("Error: Division by zero!\n");
                }
                break;
            }
        }
        else
        {
            printf("Invalid operation!\n");
        }
    }

    printf("\n=== SAFETY MECHANISMS ===\n");

    // Example 2: Loop with safety counter
    printf("Searching with safety limit:\n");
    int target = 42;
    int current = 1;
    int maxIterations = 1000; // Safety limit
    int iterations = 0;

    while (current != target)
    {
        current += 3; // Increment by 3 each time
        iterations++;

        // Safety mechanism to prevent true infinite loop
        if (iterations >= maxIterations)
        {
            printf("Search stopped: Maximum iterations (%d) reached\n", maxIterations);
            printf("Target %d not found in sequence\n", target);
            break;
        }
    }

    if (current == target)
    {
        printf("Found %d after %d iterations\n", target, iterations);
    }

    printf("\n=== COMMON INFINITE LOOP MISTAKES ===\n");

    printf("Example of bugs that cause infinite loops:\n");

    // MISTAKE 1: Forgetting to update loop variable
    printf("1. Forgetting to increment counter:\n");
    printf("   // int i = 1;\n");
    printf("   // while (i <= 5) {\n");
    printf("   //     printf(\"%%d \", i);\n");
    printf("   //     // MISSING: i++;\n");
    printf("   // }\n");
    printf("   This would print '1' forever!\n");

    // MISTAKE 2: Wrong condition
    printf("\n2. Incorrect condition logic:\n");
    printf("   // int i = 1;\n");
    printf("   // while (i != 10) {\n");
    printf("   //     printf(\"%%d \", i);\n");
    printf("   //     i += 2;  // i goes: 1, 3, 5, 7, 9, 11, 13...\n");
    printf("   // }\n");
    printf("   This skips 10 and never stops!\n");

    // MISTAKE 3: Modifying wrong variable
    printf("\n3. Modifying wrong variable:\n");
    printf("   // int i = 1, j = 1;\n");
    printf("   // while (i <= 5) {\n");
    printf("   //     printf(\"%%d \", j);\n");
    printf("   //     j++;  // WRONG: should increment i\n");
    printf("   // }\n");

    printf("\n=== BEST PRACTICES FOR LOOP SAFETY ===\n");

    printf("1. Always verify loop variable updates\n");
    printf("2. Test boundary conditions\n");
    printf("3. Use break statements for complex exit conditions\n");
    printf("4. Add debug counters during development\n");
    printf("5. Consider using for loops when iteration count is known\n");
    printf("6. Initialize variables before loops\n");
    printf("7. Be careful with floating-point comparisons\n");

    // Example of safe floating-point loop
    printf("\nSafe floating-point loop example:\n");
    double value = 0.0;
    int count = 0;
    const int MAX_COUNT = 100; // Safety net

    while (value < 1.0 && count < MAX_COUNT)
    {
        value += 0.1;
        count++;
        printf("%.1f ", value);
    }
    printf("\nLoop completed safely in %d iterations\n", count);

    return 0;
}