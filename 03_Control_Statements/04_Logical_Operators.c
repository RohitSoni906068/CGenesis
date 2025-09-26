#include <stdio.h>

int main()
{
    /*
     * LOGICAL OPERATORS IN CONDITIONALS
     *
     * && (AND): Both conditions must be true
     * || (OR): At least one condition must be true
     * ! (NOT): Reverses the condition (true becomes false)
     * == (EQUAL TO): Checks if values are equal
     * != (NOT EQUAL TO): Checks if values are not equal
     *
     * Truth Tables:
     * AND: true && true = true, all others = false
     * OR: false || false = false, all others = true
     * NOT: !true = false, !false = true
     * == (EQUAL TO): Checks if values are equal
     * != (NOT EQUAL TO): Checks if values are not equal
     */

    int age, income;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%d", &income);

    // AND operator: both conditions must be true
    if (age >= 21 && income >= 30000)
    {
        printf("Loan approved! You meet both age and income requirements.\n");
    }

    // OR operator: at least one condition must be true
    if (age >= 60 || income >= 100000)
    {
        printf("You qualify for premium banking services.\n");
    }

    // NOT operator: reverses the condition
    if (!(age < 18))
    {
        printf("You are an adult (not under 18).\n");
    }

    // Complex condition combining multiple operators
    if ((age >= 18 && age <= 65) && (income > 25000 || age >= 60))
    {
        printf("You are eligible for the special program.\n");
    }

    return 0;
}
