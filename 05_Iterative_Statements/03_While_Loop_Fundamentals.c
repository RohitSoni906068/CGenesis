#include <stdio.h>

/*
 * CHAPTER 3: WHILE LOOP FUNDAMENTALS
 *
 * The while loop is perfect when you don't know exactly how many iterations
 * you need. It continues as long as a condition remains true.
 *
 * SYNTAX:
 * while (condition)
 * {
 *     // code to execute
 *     // don't forget to update the condition variable!
 * }
 *
 * EXECUTION FLOW:
 * 1. Check condition
 * 2. If true: execute loop body, then return to step 1
 * 3. If false: exit the loop
 *
 * IMPORTANT: Always ensure the condition will eventually become false
 * to avoid infinite loops!
 */

int main()
{
    printf("=== BASIC WHILE LOOP ===\n");

    // Simple countdown
    int countdown = 5;
    printf("Countdown : ");
    while (countdown > 0) // Check condition
    {                     // If true: execute loop body, then return to step 1
                          // If false: exit the loop
        printf("%d ", countdown);
        countdown--; // Critical: update the condition variable
    }
    printf("Blast off!\n");

    printf("\n=== USER INPUT VALIDATION ===\n");

    int age;
    printf("Enter your age (must be between 1 and 120) : ");
    scanf("%d", &age);

    // Keep asking until valid input
    while (age < 1 || age > 120)
    {
        printf("Invalid age! Please enter a value between 1 and 120 : ");
        scanf("%d", &age);
    }
    printf("Thank you! Your age is %d\n", age);

    printf("\n=== ACCUMULATOR PATTERN ===\n");

    int sum = 0;
    int number = 1;

    // Calculate sum of first 10 natural numbers
    while (number <= 10)
    {
        sum += number; // Accumulate the sum
        number++;      // Move to next number
    }
    printf("Sum of first 10 natural numbers : %d\n", sum);

    return 0;
}