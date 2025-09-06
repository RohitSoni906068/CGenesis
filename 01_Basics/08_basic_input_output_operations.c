/*
Author: Rohit Kumar
Purpose: Understanding input/output operations in C programming
*/

#include <stdio.h>

int main()
{
   printf("=== INPUT/OUTPUT OPERATIONS IN C ===\n\n");
    
   // BASIC INPUT/OUTPUT EXAMPLE
   printf("--- Basic Integer Input ---\n");
   int userAge;
   printf("Please enter your age: ");
   scanf("%d", &userAge);  // Note: & (address operator) is required
   printf("You entered: %d years old\n\n", userAge);
    
   // MULTIPLE DATA TYPES INPUT
   printf("--- Multiple Input Types ---\n");
   char studentGrade;
   float examScore;
    
   printf("Enter your exam grade (A-F): ");
   scanf(" %c", &studentGrade);  // Space before %c to handle whitespace
    
   printf("Enter your exam score (0-100): ");
   scanf("%f", &examScore);
    
   printf("\nResults Summary:\n");
   printf("Grade: %c\n", studentGrade);
   printf("Score: %.1f%%\n\n", examScore);
    
   // ADVANCED INPUT EXAMPLE - Student Information
   printf("--- Student Registration System ---\n");
   int studentID;
   char initial;
   double tuitionFees;
    
   printf("Enter Student ID: ");
   scanf("%d", &studentID);
    
   printf("Enter first name initial: ");
   scanf(" %c", &initial);
    
   printf("Enter tuition fees: $");
   scanf("%lf", &tuitionFees);
    
   // FORMATTED OUTPUT DISPLAY
   printf("\n=== REGISTRATION CONFIRMATION ===\n");
   printf("Student ID: %d\n", studentID);
   printf("Initial: %c\n", initial);
   printf("Tuition: $%.2lf\n", tuitionFees);
   printf("Registration Status: CONFIRMED\n\n");
    
   // INTERACTIVE CALCULATOR EXAMPLE
   printf("--- Simple Calculator ---\n");
   int number1, number2;
    
   printf("Enter first number: ");
   scanf("%d", &number1);
    
   printf("Enter second number: ");
   scanf("%d", &number2);
    
   // Perform calculations and display results
   printf("\n=== CALCULATION RESULTS ===\n");
   printf("%d + %d = %d\n", number1, number2, number1 + number2);
   printf("%d - %d = %d\n", number1, number2, number1 - number2);
   printf("%d × %d = %d\n", number1, number2, number1 * number2);
    
   return 0;
}

/*
INPUT/OUTPUT OPERATIONS GUIDE:
==============================

PRINTF() FUNCTION - OUTPUT:
- Purpose: Display formatted output to console
- Syntax: printf("format string", variables...);
- Examples:
  - printf("Hello World");           // Simple text
  - printf("Age: %d", age);          // With variable
  - printf("Name: %s, Age: %d", name, age);  // Multiple variables

SCANF() FUNCTION - INPUT:
- Purpose: Read formatted input from user
- Syntax: scanf("format specifier", &variable);
- Key Points:
  - MUST use & (address operator) before variable name
  - Format specifier must match variable data type
  - Returns number of successfully read items

CRITICAL SCANF() RULES:
1. Always use & before variable names (except for strings)
2. Format specifier must match variable type exactly
3. Add space before %c to consume whitespace: scanf(" %c", &var);
4. Check input validity in production code

FORMAT SPECIFIERS FOR INPUT/OUTPUT:
┌─────────────┬─────────────────────────────────────────┐
│ Specifier   │ Used For                                │
├─────────────┼─────────────────────────────────────────┤
│ %d          │ int (integers)                          │
│ %f          │ float (for scanf)                       │
│ %f          │ float (for printf)                      │
│ %lf         │ double (for scanf)                      │
│ %lf or %f   │ double (for printf)                     │
│ %c          │ char (single character)                 │
│ %s          │ string (char array)                     │
└─────────────┴─────────────────────────────────────────┘

COMMON INPUT/OUTPUT PATTERNS:

1. INTEGER INPUT:
   int num;
   printf("Enter number: ");
   scanf("%d", &num);

2. FLOAT INPUT:  
   float price;
   printf("Enter price: ");
   scanf("%f", &price);

3. CHARACTER INPUT:
   char choice;
   printf("Enter choice: ");
   scanf(" %c", &choice);  // Note the space!

4. MULTIPLE INPUTS:
   int a, b;
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

BEST PRACTICES:
✓ Always validate user input in real applications
✓ Use meaningful prompts to guide users
✓ Handle potential input errors gracefully
✓ Use appropriate precision for floating-point output
✓ Consider input buffer issues with multiple scanf() calls
*/