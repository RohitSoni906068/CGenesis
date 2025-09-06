/*
Author: Rohit Kumar
Purpose: Understanding escape sequences for text formatting
*/

#include <stdio.h>

int main()
{
    printf("=== ESCAPE SEQUENCES DEMONSTRATION ===\n\n");

    // NEWLINE (\n) - Moves cursor to the next line
    printf("Line 1\nLine 2\nLine 3\n");
    printf("Notice how \\n creates new lines\n\n");

    // TAB (\t) - Inserts horizontal tab (usually 8 spaces)
    printf("Name:\tJohn Smith\n");
    printf("Age:\t25\n");
    printf("City:\tNew York\n\n");

    // BACKSLASH (\\) - Prints a single backslash
    printf("File path: C:\\Users\\Student\\Documents\n");
    printf("To print \\, we use \\\\\n\n");

    // DOUBLE QUOTE (\") - Prints quotation marks within strings
    printf("She said, \"Hello, World!\"\n");
    printf("The book title is \"C Programming Guide\"\n\n");

    // CARRIAGE RETURN (\r) - Returns cursor to beginning of line
    printf("Loading");
    printf("\rComplete!"); // Overwrites "Loading"
    printf("\n\n");

    // BACKSPACE (\b) - Moves cursor back one position
    printf("Helllo\b World\n"); // Removes one 'l'

    // FORM FEED (\f) - Page break (rarely used in modern programming)
    printf("Before form feed\fAfter form feed\n");

    // VERTICAL TAB (\v) - Vertical tab space
    printf("Line 1\vLine 2 (with vertical tab)\n\n");

    // PRACTICAL EXAMPLE - Formatted output
    printf("=== STUDENT REPORT CARD ===\n");
    printf("Student Name:\t\"Alice Johnson\"\n");
    printf("Grade:\t\tA+\n");
    printf("File Location:\tC:\\School\\Reports\\alice.txt\n");
    printf("Teacher's Note:\t\"Excellent work!\"\n");

    return 0;
}

/*
COMMON ESCAPE SEQUENCES REFERENCE:
┌──────────┬─────────────────────────────────────┐
│ Sequence │ Description                         │
├──────────┼─────────────────────────────────────┤
│ \n       │ Newline (line break)                │
│ \t       │ Horizontal tab                      │
│ \\       │ Backslash                           │
│ \"       │ Double quote                        │
│ \'       │ Single quote (for char literals)    │
│ \r       │ Carriage return                     │
│ \b       │ Backspace                           │
│ \f       │ Form feed                           │
│ \v       │ Vertical tab                        │
│ \0       │ Null character                      │
│ \a       │ Alert (bell sound)                  │
└──────────┴─────────────────────────────────────┘

Usage tip: Always use escape sequences for special formatting!
*/