#include <stdio.h>

int main()
{
    /*
     * TERNARY OPERATOR (CONDITIONAL OPERATOR)
     *
     * Compact way to write simple if-else statements.
     * Useful for assignments and simple decisions.
     *
     * Syntax: condition ? value_if_true : value_if_false
     *
     * Equivalent to:
     * if (condition) 
     * {
     *     result = value_if_true;
     * } 
     * else 
     * {
     *     result = value_if_false;
     * }
     */

    int a = 15, b = 20;

    // Simple ternary operator usage
    int max = (a > b) ? a : b;
    printf("Maximum of %d and %d is: %d\n", a, b, max);

    // Ternary in printf statement
    printf("%d is %s\n", a, (a % 2 == 0) ? "even" : "odd");

    // Nested ternary operators (use sparingly for readability)
    int score = 85;
    char *grade = (score >= 90) ? "A" : (score >= 80) ? "B"
                                    : (score >= 70)   ? "C"
                                                      : "F";
    printf("Score %d gets grade: %s\n", score, grade);

    // Practical example: absolute value
    int number = -25;
    int absolute = (number < 0) ? -number : number;
    printf("Absolute value of %d is: %d\n", number, absolute);

    // Multiple ternary operators for different operations
    int x = 10, y = 5;
    printf("Operations on %d and %d:\n", x, y);
    printf("Addition: %d\n", (x + y));
    printf("Larger number: %d\n", (x > y) ? x : y);
    printf("Result is %s\n", (x > y) ? "x is larger" : "y is larger or equal");

    return 0;
}
