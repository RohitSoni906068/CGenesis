#include <stdio.h>

/*
 * CHAPTER 5: LOOP CONTROL - BREAK STATEMENT
 *
 * The break statement immediately terminates the loop and transfers
 * control to the first statement after the loop.
 *
 * SYNTAX:
 * break;
 *
 * USAGE:
 * - Exit loops early when a condition is met
 * - Escape from infinite loops safely
 * - Exit switch statements (covered elsewhere)
 *
 * BEHAVIOR:
 * - In nested loops, break only exits the innermost loop
 * - Execution continues after the loop that was broken
 */

int main()
{
    printf("=== BREAK IN FOR LOOP ===\n");

    printf("Searching for number 7 : ");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            printf("Found it!");
            break; // Exit loop immediately when 7 is found
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== BREAK IN WHILE LOOP ===\n");

    int number;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    printf("Guess the secret number (1-10) : ");
    while (attempts < MAX_ATTEMPTS)
    {
        scanf("%d", &number);
        attempts++;

        if (number == 8)
        { // Secret number is 8
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
            break; // Exit the guessing loop
        }

        if (attempts < MAX_ATTEMPTS)
        {
            printf("Wrong! Try again (%d attempts left) : ", MAX_ATTEMPTS - attempts);
        }
    }

    if (attempts == MAX_ATTEMPTS && number != 8)
    {
        printf("Game over! The secret number was 8.\n");
    }

    printf("\n=== BREAK WITH INPUT VALIDATION ===\n");

    int score;
    while (1)
    { // Infinite loop - will break on valid input
        printf("Enter a test score (0-100) : ");
        scanf("%d", &score);

        if (score >= 0 && score <= 100)
        {
            printf("Valid score entered : %d\n", score);
            break; // Exit the validation loop
        }

        printf("Invalid score! Must be between 0 and 100.\n");
    }

    printf("\n=== PRACTICAL EXAMPLE : BREAK ON MULTIPLE OF 5 ===\n");

    int value;
    printf("Enter numbers (enter a multiple of 5 to stop) :\n");
    while (1)
    {
        scanf("%d", &value);
        if (value % 5 == 0)
        {
            printf("%d is a multiple of 5. Stopping input.\n", value);
            break; // Exit the loop when a multiple of 5 is entered
        }
        printf("%d is not a multiple of 5. Try again : ", value);
    }

    return 0;
}