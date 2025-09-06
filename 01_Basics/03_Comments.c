/*
Author: Rohit Kumar
Purpose: Understanding comments in C programming
*/

#include <stdio.h>

int main()
{

    // SINGLE-LINE COMMENTS
    // Use double forward slashes (//) for brief explanations
    // These comments extend only to the end of the current line
    printf("Learning about comments in C programming\n");

    int age = 20; // Variable declaration with inline comment

    /*
    MULTI-LINE COMMENTS
    Use slash-asterisk pairs for longer explanations
    These comments can span multiple lines
    Perfect for detailed descriptions and documentation

    WHEN TO USE COMMENTS:
    - Explain complex algorithms or logic
    - Document function purposes and parameters
    - Provide context for variable usage
    */

    printf("Age: %d years\n", age); // Display the age value

    /*
    COMPILER BEHAVIOR:
    - Comments are completely ignored during compilation
    - They don't affect program execution or performance
    - They exist solely for human readers
    - Removing all comments won't change program behavior
    */

    return 0; // Program termination
}

// COMMENT TYPES SUMMARY:
// 1. Single-line: // comment text
// 2. Multi-line: /* comment text */
// 3. Nested comments: NOT ALLOWED in C (/* /* nested */ */)

// Remember: Good comments make you a better programmer!