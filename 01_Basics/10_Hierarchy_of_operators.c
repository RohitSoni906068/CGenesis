/*
Author: Rohit Kumar
Purpose: Understanding operator precedence and order of evaluation
*/

#include <stdio.h>

int main()
{
   printf("=== OPERATOR PRECEDENCE IN C ===\n\n");
    
   // BASIC PRECEDENCE DEMONSTRATION
   printf("--- Basic Precedence Example ---\n");
   int a = 3, b = 6, c = 9;
    
   printf("Given: a = %d, b = %d, c = %d\n\n", a, b, c);
    
   // Expression without parentheses
   int result1 = a * b / c + 7;
   printf("Expression: a * b / c + 7\n");
   printf("Step-by-step evaluation:\n");
   printf("  %d * %d / %d + 7\n", a, b, c);
   printf("  %d / %d + 7      (multiplication first)\n", a*b, c);
   printf("  %d + 7           (division next)\n", (a*b)/c);
   printf("  %d               (addition last)\n", result1);
   printf("Final result: %d\n\n", result1);
    
   // COMPLEX EXPRESSION BREAKDOWN
   printf("--- Complex Expression Analysis ---\n");
   int x = 3, y = 6, z = 2, w = 9, v = 7;
    
   printf("Given: x=%d, y=%d, z=%d, w=%d, v=%d\n\n", x, y, z, w, v);
    
   // Expression: 3 * y / 2 * w + 7 * x
   int complexResult = 3 * y / 2 * w + 7 * x;
   printf("Expression: 3 * y / 2 * w + 7 * x\n");
   printf("Detailed evaluation (left to right for same precedence):\n");
   printf("  3 * %d / 2 * %d + 7 * %d\n", y, w, x);
   printf("  %d / 2 * %d + %d        (first multiplication: 3*y)\n", 3*y, w, 7*x);
   printf("  %d * %d + %d            (division: 18/2)\n", (3*y)/2, w, 7*x);
   printf("  %d + %d                 (multiplication: 9*w)\n", ((3*y)/2)*w, 7*x);
   printf("  %d                      (final addition)\n", complexResult);
   printf("Final result: %d\n\n", complexResult);
    
   // PARENTHESES OVERRIDE PRECEDENCE
   printf("--- Parentheses Override Precedence ---\n");
   int num1 = 10, num2 = 4, num3 = 2;
    
   printf("Given: num1=%d, num2=%d, num3=%d\n\n", num1, num2, num3);
    
   // Without parentheses
   int withoutParens = num1 + num2 * num3;
   printf("Without parentheses: num1 + num2 * num3\n");
   printf("  %d + %d * %d = %d + %d = %d\n\n", num1, num2, num3, num1, num2*num3, withoutParens);
    
   // With parentheses
   int withParens = (num1 + num2) * num3;
   printf("With parentheses: (num1 + num2) * num3\n");
   printf("  (%d + %d) * %d = %d * %d = %d\n\n", num1, num2, num3, num1+num2, num3, withParens);
    
   // REAL-WORLD CALCULATION EXAMPLES
   printf("--- Real-World Applications ---\n");
    
   // Grade calculation with weighted averages
   float quiz1 = 85.0f, quiz2 = 92.0f, exam = 78.0f;
   float quizWeight = 0.3f, examWeight = 0.7f;
    
   printf("Grade Calculation Example:\n");
   printf("Quiz 1: %.1f, Quiz 2: %.1f, Exam: %.1f\n", quiz1, quiz2, exam);
   printf("Quiz Weight: %.1f, Exam Weight: %.1f\n\n", quizWeight, examWeight);
    
   // Incorrect calculation (without parentheses)
   float incorrectGrade = quiz1 + quiz2 / 2 * quizWeight + exam * examWeight;
   printf("INCORRECT: quiz1 + quiz2 / 2 * quizWeight + exam * examWeight\n");
   printf("Result: %.2f (Wrong due to operator precedence!)\n\n", incorrectGrade);
    
   // Correct calculation (with parentheses)
   float correctGrade = (quiz1 + quiz2) / 2 * quizWeight + exam * examWeight;
   printf("CORRECT: (quiz1 + quiz2) / 2 * quizWeight + exam * examWeight\n");
   printf("Result: %.2f (Proper weighted average)\n\n", correctGrade);
    
   // COMPOUND INTEREST CALCULATION
   printf("Compound Interest Example:\n");
   double principal = 1000.0;
   double rate = 0.05;  // 5% annual rate
   int time = 3;        // 3 years
    
   // A = P(1 + r)^t - simplified for demonstration
   double amount1 = principal * (1 + rate) * (1 + rate) * (1 + rate);
   double amount2 = principal * ((1 + rate) * (1 + rate) * (1 + rate));
    
   printf("Principal: $%.2f, Rate: %.1f%%, Time: %d years\n", principal, rate*100, time);
   printf("Amount calculation: principal * (1 + rate)^time\n");
   printf("Result: $%.2f\n", amount1);
   printf("Verification: $%.2f\n\n", amount2);
    
   // MIXED DATA TYPE PRECEDENCE
   printf("--- Mixed Data Types ---\n");
   int intVal = 7;
   float floatVal = 3.0f;
    
   printf("Integer: %d, Float: %.1f\n", intVal, floatVal);
    
   // Integer division vs float division
   printf("Integer division: %d / 2 = %d\n", intVal, intVal / 2);
   printf("Float division: %d / %.1f = %.2f\n", intVal, 2.0f, intVal / 2.0f);
   printf("Mixed division: %d / %.1f = %.2f\n\n", intVal, floatVal, intVal / floatVal);
    
   return 0;
}

/*
OPERATOR PRECEDENCE TABLE (High to Low):
========================================

Level 1 (Highest): () [] -> .
Level 2: ! ~ ++ -- + - * & (unary)
Level 3: * / %
Level 4: + -
Level 5: << >>
Level 6: < <= > >=
Level 7: == !=
Level 8: &
Level 9: ^
Level 10: |
Level 11: &&
Level 12: ||
Level 13: ?:
Level 14 (Lowest): = += -= *= /= %= etc.

IMPORTANT PRECEDENCE RULES:
- Parentheses () have highest precedence
- Multiplication *, Division /, Modulus % have same precedence
- Addition + and Subtraction - have same precedence
- Same precedence operators are evaluated left to right
- Assignment = has lowest precedence

PRACTICAL GUIDELINES:

1. USE PARENTHESES LIBERALLY:
   - Makes code more readable
   - Eliminates ambiguity
   - Prevents operator precedence errors

2. BREAK COMPLEX EXPRESSIONS:
   - Split into multiple steps for clarity
   - Store intermediate results in variables
   - Easier to debug and maintain

3. COMMON MISTAKES:
   - a + b * c vs (a + b) * c
   - Forgetting integer division truncates decimals
   - Mixed data type operations

4. BEST PRACTICES:
   ✓ Use parentheses when in doubt
   ✓ Keep expressions simple and readable
   ✓ Test complex calculations with known values
   ✓ Comment complex mathematical formulas

EXAMPLES TO REMEMBER:
- 2 + 3 * 4 = 14 (not 20)
- (2 + 3) * 4 = 20
- 10 / 3 * 2 = 6 (integer math: (10/3)*2 = 3*2 = 6)
- 10.0 / 3 * 2 = 6.67 (floating point: 3.33*2 = 6.67)
*/