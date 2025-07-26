#include <stdio.h>
int main()
{
    /* Syntax-:

switch (expression) {
    case value1:
        // Code block for value1
        break;
    case value2:
        // Code block for value2
        break;
    ... 
    default:
        // Code block if no case matches
}
    */
    int day;
    printf(" Enter Number of Day like MOnday=1,Tuesday=2...and so on : ");
    scanf(" %d", &day);
    switch (day)
    {
    case 1:
        printf(" Monday\n");
        break; // Break is Used to Terminate program when condition hit right.
    case 2:
        printf(" Tuesday\n");
        break;
    case 3:
        printf(" Wednesday\n");
        break;
    case 4:
        printf(" Thursday\n");
        break;
    case 5:
        printf(" Friday\n");
        break;
    case 6:
        printf(" Saturday\n");
        break;
    case 7:
        printf(" Sunday\n");
        break;
    default:
        printf(" Invalid day\n");
    }

    return 0;
}
