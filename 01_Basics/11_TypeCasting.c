/*
Author: Rohit Kumar
Purpose: Understanding type casting and data type conversions
*/

#include <stdio.h>

int main()
{
   printf("=== TYPE CASTING IN C PROGRAMMING ===\n\n");
    
   // EXPLICIT TYPE CASTING BASICS
   printf("--- Explicit Type Casting ---\n");
   int integerNumber = 45;
   float floatNumber = 32.85f;
    
   printf("Original values:\n");
   printf("Integer: %d\n", integerNumber);
   printf("Float: %.2f\n\n", floatNumber);
    
   // Converting float to int (truncation occurs)
   int convertedToInt = (int)floatNumber;
   printf("Float to Int conversion:\n");
   printf("(int)%.2f = %d\n", floatNumber, convertedToInt);
   printf("Note: Decimal part is truncated (lost)!\n\n");
    
   // Converting int to float (precision gained)
   float convertedToFloat = (float)integerNumber;
   printf("Int to Float conversion:\n");
   printf("(float)%d = %.2f\n", integerNumber, convertedToFloat);
   printf("Note: Decimal places added (.00)\n\n");
    
   // IMPLICIT TYPE CASTING (AUTOMATIC)
   printf("--- Implicit Type Casting ---\n");
   int a = 10;
   float b = 3.7f;
    
   printf("Given: int a = %d, float b = %.1f\n\n", a, b);
    
   // Mixed operations cause automatic casting
   float result1 = a + b;  // int promoted to float
   printf("Mixed addition: a + b\n");
   printf("int %d + float %.1f = %.1f (int promoted to float)\n\n", a, b, result1);
    
   // DIVISION EXAMPLES - CRITICAL CONCEPT
   printf("--- Division Type Casting Examples ---\n");
   int numerator = 22, denominator = 7;
    
   printf("Given: numerator = %d, denominator = %d\n\n", numerator, denominator);
    
   // Integer division (truncated result)
   int intResult = numerator / denominator;
   printf("Integer division: %d / %d = %d\n", numerator, denominator, intResult);
    
   // Float division using explicit casting
   float floatResult1 = (float)numerator / denominator;
   printf("Explicit casting: (float)%d / %d = %.4f\n", numerator, denominator, floatResult1);
    
   // Float division using implicit casting
   float floatResult2 = numerator / (float)denominator;
   printf("Implicit casting: %d / (float)%d = %.4f\n", numerator, denominator, floatResult2);
    
   // Both operands cast
   double preciseResult = (double)numerator / (double)denominator;
   printf("Double precision: (double)%d / (double)%d = %.6lf\n\n", numerator, denominator, preciseResult);
    
   // PRACTICAL APPLICATIONS
   printf("--- Practical Applications ---\n");
    
   // Grade percentage calculation
   int totalMarks = 456;
   int maxMarks = 500;
    
   printf("Grade Calculation Example:\n");
   printf("Marks obtained: %d, Maximum marks: %d\n", totalMarks, maxMarks);
    
   // Wrong way (integer division)
   int wrongPercentage = totalMarks * 100 / maxMarks;
   printf("Wrong method: %d * 100 / %d = %d%%\n", totalMarks, maxMarks, wrongPercentage);
    
   // Correct way (with type casting)
   float correctPercentage = (float)totalMarks * 100 / maxMarks;
   printf("Correct method: (float)%d * 100 / %d = %.2f%%\n\n", totalMarks, maxMarks, correctPercentage);
    
   // Temperature conversion
   printf("Temperature Conversion Example:\n");
   int celsius = 25;
   printf("Celsius temperature: %d°C\n", celsius);
    
   // Formula: F = (C * 9/5) + 32
   // Wrong approach (integer arithmetic)
   int wrongFahrenheit = celsius * 9 / 5 + 32;
   printf("Wrong calculation: %d * 9 / 5 + 32 = %d°F\n", celsius, wrongFahrenheit);
    
   // Correct approach (with type casting)
   float correctFahrenheit = (float)celsius * 9 / 5 + 32;
   printf("Correct calculation: (float)%d * 9 / 5 + 32 = %.1f°F\n\n", celsius, correctFahrenheit);
    
   // CHARACTER TO INTEGER CONVERSION
   printf("--- Character to Integer Conversion ---\n");
   char digit = '7';
   char letter = 'A';
    
   printf("Character values:\n");
   printf("Digit character: '%c'\n", digit);
   printf("Letter character: '%c'\n\n", letter);
    
   // Converting characters to their ASCII values
   int digitValue = (int)digit;
   int letterValue = (int)letter;
    
   printf("ASCII conversions:\n");
   printf("'%c' -> ASCII value: %d\n", digit, digitValue);
   printf("'%c' -> ASCII value: %d\n\n", letter, letterValue);
    
   // Converting digit character to numerical value
   int actualDigit = digit - '0';  // Subtract ASCII value of '0'
   printf("Character to number conversion:\n");
   printf("'%c' - '0' = %d - %d = %d\n", digit, digitValue, (int)'0', actualDigit);
   printf("Actual numerical value: %d\n\n", actualDigit);
    
   // SIZE DEMONSTRATIONS
   printf("--- Data Size Considerations ---\n");
   double largeDouble = 123456.789123;
   float smallFloat = (float)largeDouble;
   int truncatedInt = (int)largeDouble;
    
   printf("Precision loss demonstration:\n");
   printf("Original double: %.6lf\n", largeDouble);
   printf("Cast to float: %.6f (some precision lost)\n", smallFloat);
   printf("Cast to int: %d (fractional part lost)\n", truncatedInt);
    
   return 0;
}

/*
TYPE CASTING COMPREHENSIVE GUIDE:
=================================

TYPES OF CASTING:

1. IMPLICIT CASTING (Automatic):
   • Compiler automatically converts smaller to larger type
   • Occurs in mixed expressions: int + float → float result
   • Safe conversions: char → int → float → double

2. EXPLICIT CASTING (Manual):
   • Programmer forces conversion using cast operator
   • Syntax: (target_type) variable
   • Can cause data loss if not careful

CASTING HIERARCHY (Safe Direction):
char → int → float → double

COMMON CASTING SCENARIOS:

INTEGER TO FLOAT:
- Safe conversion, no data loss
- Adds decimal point (.0)
- Example: (float)5 → 5.0

FLOAT TO INTEGER:  
- Data loss - decimal part truncated
- Not rounded, just cut off
- Example: (int)3.9 → 3

CHARACTER CONVERSIONS:
- char to int: Gets ASCII value
- int to char: Gets character representation
- '0' to '9' have ASCII values 48-57

DIVISION CASTING (MOST IMPORTANT):
- int / int = int (truncated)
- float / int = float (decimal preserved)
- (float)int / int = float (forces float division)

BEST PRACTICES:

1. BE EXPLICIT:
   ✓ Use explicit casting for clarity
   ✓ (float)a / b instead of relying on implicit

2. AVOID DATA LOSS:
   ✓ Check ranges before casting
   ✓ Be aware of precision limitations

3. COMMON PATTERNS:
   • Percentage: (float)obtained / total * 100
   • Average: (float)sum / count  
   • Division: (float)numerator / denominator

4. DEBUGGING TIPS:
   ✓ Print intermediate values
   ✓ Check if results are as expected
   ✓ Watch for integer division pitfalls

CASTING WARNINGS:
⚠️ Large int to char: May overflow
⚠️ Double to float: Precision loss possible  
⚠️ Float to int: Decimal part lost forever
⚠️ Negative values: Sign preservation rules apply
*/