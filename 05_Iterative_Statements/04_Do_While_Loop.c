#include <stdio.h>

/*
 * CHAPTER 4: DO-WHILE LOOP
 *
 * The do-while loop is similar to while loop with one key difference:
 * it ALWAYS executes the loop body at least once, then checks the condition.
 *
 * SYNTAX:
 * do
 * {
 *     // code to execute
 * } while (condition);
 *
 * EXECUTION FLOW:
 * 1. Execute loop body
 * 2. Check condition
 * 3. If true: return to step 1
 * 4. If false: exit the loop
 *
 * USE CASES:
 * - Menu systems (show menu at least once)
 * - Input validation (ask at least once)
 * - Games (play at least one round)
 */

int main()
{
    printf("=== DO-WHILE vs WHILE COMPARISON ===\n");

    // While loop with false condition - never executes
    int i = 10;
    printf("While loop (condition false from start) : ");
    while (i < 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("(nothing printed)\n");

    // Do-while with same false condition - executes once
    int j = 10;
    printf("Do-while loop (same condition): ");
    do // Execute loop body
    {
        printf("%d ", j);
        j++;
    } while (j < 5); // Check condition
                     // If true: return to step 1
                     // If false: exit the loop
    printf("(executed once despite false condition)\n");

    printf("\n=== PRACTICAL EXAMPLE: MENU SYSTEM ===\n");

    int choice;
    do
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("You selected Addition\n");
            break;
        case 2:
            printf("You selected Subtraction\n");
            break;
        case 3:
            printf("You selected Multiplication\n");
            break;
        case 4:
            printf("You selected Division\n");
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    printf("\n=== INPUT VALIDATION EXAMPLE ===\n");

    char playAgain;
    do
    {
        printf("This is a simple game round!\n");
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain); // Space before %c to consume newline

        if (playAgain != 'y' && playAgain != 'Y' &&
            playAgain != 'n' && playAgain != 'N')
        {
            printf("Please enter 'y' for yes or 'n' for no.\n");
        }
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}