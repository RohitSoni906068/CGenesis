#include <stdio.h>

int main()
{
    /*
     * TRUTHINESS IN C
     *
     * C evaluates expressions as true or false:
     * - 0 is considered FALSE
     * - Any non-zero value is considered TRUE
     *
     * This allows for concise conditional checks.
     */

    int value1 = 0;   // False
    int value2 = 1;   // True
    int value3 = -5;  // True (non-zero)
    int value4 = 100; // True (non-zero)

    printf("Testing truthiness of different values:\n");

    if (value1) // 0 is considered FALSE
    {
        printf("value1 (%d) is true\n", value1);
    }
    else
    {
        printf("value1 (%d) is false\n", value1); // This executes
    }

    if (value2) // Any non-zero value is considered TRUE
    {
        printf("value2 (%d) is true\n", value2); // This executes
    }
    else
    {
        printf("value2 (%d) is false\n", value2);
    }

    if (value3) // Any non-zero value is considered TRUE
    {
        printf("value3 (%d) is true\n", value3); // This executes
    }

    // Practical example: checking user input
    int userChoice;
    printf("\nEnter 1 to continue, 0 to stop : ");
    scanf("%d", &userChoice);

    if (userChoice) 
    {
        printf("Continuing program...\n");
    }
    else
    {
        printf("Stopping program...\n");
    }

    return 0;
}
