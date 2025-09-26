#include <stdio.h>

int main()
{
    /*
     * IF-ELSE-IF CHAIN
     *
     * Handles multiple conditions in sequence.
     * Only the first true condition executes; others are skipped.
     *
     * Syntax:
     * if (condition1)
     * {
     *     // Code for condition1
     * } 
     * else if (condition2)
     * {
     *     // Code for condition2
     * } 
     * else
     * {
     *     // Default code if all conditions are false
     * }
     */

    int score;
    printf("Enter your exam score (0-100): ");
    scanf("%d", &score);

    if (score >= 90) // Only the first true condition executes; others are skipped.
    {
        printf("Grade : A+ (Excellent!)\n");
        // Executes for scores 90-100
    }
    else if (score >= 80)
    {
        printf("Grade : A (Very Good)\n");
        // Executes for scores 80-89
    }
    else if (score >= 70)
    {
        printf("Grade : B (Good)\n");
        // Executes for scores 70-79
    }
    else if (score >= 60)
    {
        printf("Grade : C (Satisfactory)\n");
        // Executes for scores 60-69
    }
    else // Default code if all conditions are false
    {
        printf("Grade : F (Needs Improvement)\n");
        // Executes for scores below 60
    }

    return 0;
}
