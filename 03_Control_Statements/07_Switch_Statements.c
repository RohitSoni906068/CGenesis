#include <stdio.h>

int main()
{
    /*
     * SWITCH STATEMENTS
     *
     * Efficient way to handle multiple specific values.
     * More readable than long if-else-if chains for discrete values.
     *
     * Syntax:
     * switch (expression) 
     * {
     *     case value1:
     *         // Code for value1
     *         break;
     *     case value2:
     *         // Code for value2
     *         break;
     *     default:
     *         // Code if no case matches
     * }
     *
     * IMPORTANT: break statements prevent fall-through to next case
     */

    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday - Start of the work week\n");
        break; // Prevents execution of subsequent cases
    case 2:
        printf("Tuesday - Keep up the momentum\n");
        break;
    case 3:
        printf("Wednesday - Hump day!\n");
        break;
    case 4:
        printf("Thursday - Almost there\n");
        break;
    case 5:
        printf("Friday - TGIF!\n");
        break;
    case 6:
        printf("Saturday - Weekend time\n");
        break;
    case 7:
        printf("Sunday - Rest day\n");
        break;
    default:
        printf("Invalid day number. Please enter 1-7.\n");
        // default executes when no case matches
    }

    // Example of intentional fall-through (without break)
    char grade;
    printf("\nEnter your grade (A-F): ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Excellent! ");
        // Fall-through to next case
    case 'B':
    case 'b':
        printf("Good job!\n");
        break;
    case 'C':
    case 'c':
        printf("Average performance.\n");
        break;
    default:
        printf("Keep working hard!\n");
    }

    return 0;
}
