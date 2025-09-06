/*
Author: Rohit Kumar
Purpose: Understanding arithmetic operators and mathematical operations
*/

#include <stdio.h>

int main()
{
    printf("=== ARITHMETIC OPERATORS IN C ===\n\n");
    
    // BASIC ARITHMETIC OPERATIONS
    int num1 = 15, num2 = 4;
    
    printf("Given Numbers: num1 = %d, num2 = %d\n\n", num1, num2);
    
    // ADDITION (+)
    int sum = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    
    // SUBTRACTION (-)
    int difference = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    
    // MULTIPLICATION (*)
    int product = num1 * num2;
    printf("Multiplication: %d × %d = %d\n", num1, num2, product);
    
    // DIVISION (/)
    float quotient = (float)num1 / num2;  // Type casting for decimal result
    int integerDivision = num1 / num2;
    printf("Division: %d ÷ %d = %.2f (with decimals)\n", num1, num2, quotient);
    printf("Integer Division: %d ÷ %d = %d (integer part only)\n", num1, num2, integerDivision);
    
    // MODULUS (%) - Remainder operation
    int remainder = num1 % num2;
    printf("Modulus (Remainder): %d %% %d = %d\n\n", num1, num2, remainder);
    
    printf("\n=== PRACTICAL APPLICATIONS ===\n");
    
    // Time conversion example
    int totalMinutes = 150;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    printf("Converting %d minutes:\n", totalMinutes);
    printf("Hours: %d, Remaining minutes: %d\n", hours, minutes);
    printf("Time format: %d:%02d\n\n", hours, minutes);
    
    // Money change example
    int totalCents = 247;
    int dollars = totalCents / 100;
    int cents = totalCents % 100;
    printf("Converting %d cents:\n", totalCents);
    printf("Dollars: $%d, Remaining cents: %d¢\n\n", dollars, cents);
    
    // COMPOUND EXPRESSIONS
    printf("=== COMPOUND ARITHMETIC EXPRESSIONS ===\n");
    int a = 10, b = 3, c = 2;
    
    int result1 = a + b * c;           // Multiplication first: 10 + (3*2) = 16
    int result2 = (a + b) * c;         // Parentheses first: (10+3) * 2 = 26
    int result3 = a / b + c;           // Division first: (10/3) + 2 = 3 + 2 = 5
    int result4 = a % b + c * 2;       // 10%3 + 2*2 = 1 + 4 = 5
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("a + b * c = %d + %d * %d = %d\n", a, b, c, result1);
    printf("(a + b) * c = (%d + %d) * %d = %d\n", a, b, c, result2);
    printf("a / b + c = %d / %d + %d = %d\n", a, b, c, result3);
    printf("a %% b + c * 2 = %d %% %d + %d * 2 = %d\n", a, b, c, result4);
    
    return 0;
}

/*
ARITHMETIC OPERATORS REFERENCE:
===============================

BASIC OPERATORS:
┌──────────────┬─────────────┬─────────────────────────────┐
│ Operator     │ Symbol      │ Description                 │
├──────────────┼─────────────┼─────────────────────────────┤
│ Addition     │ +           │ Adds two operands           │
│ Subtraction  │ -           │ Subtracts second from first │
│Multiplication│ *           │ Multiplies two operands     │
│ Division     │ /           │ Divides first by second     │
│ Modulus      │ %           │ Remainder after division    │
└──────────────┴─────────────┴─────────────────────────────┘

OPERATOR PRECEDENCE (High to Low):
1. Parentheses ()          - Highest priority
2. Multiplication (*), Division (/), Modulus (%)
3. Addition (+), Subtraction (-)
4. Assignment (=)          - Lowest priority

MODULUS OPERATOR USES:
- Check if number is even/odd: (num % 2 == 0) 
- Cycle through values: (index % arraySize)
- Convert units: hours = minutes / 60, remaining = minutes % 60
- Generate patterns in loops
- Validate input ranges

INTEGER vs FLOATING POINT DIVISION:
- int / int = int (truncates decimal part)
- float / int = float (preserves decimal part)
- int / float = float (preserves decimal part)
- Use type casting: (float)a / b for decimal results

IMPORTANT NOTES:
- Division by zero causes runtime error
- Modulus (%) only works with integers
- Order of operations follows mathematical rules
- Use parentheses to override default precedence
- Be careful with integer division - it truncates!
*/