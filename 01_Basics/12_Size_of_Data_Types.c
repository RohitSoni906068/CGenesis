/*
Author: Rohit Kumar
Purpose: Understanding sizeof operator and data type memory allocation
*/

#include <stdio.h>

int main()
{
   printf("=== SIZEOF OPERATOR AND MEMORY ALLOCATION ===\n\n");
    
   // BASIC DATA TYPE SIZES
   printf("--- Basic Data Type Sizes ---\n");
   printf("Size of char: %zu byte\n", sizeof(char));
   printf("Size of int: %zu bytes\n", sizeof(int));
   printf("Size of float: %zu bytes\n", sizeof(float));
   printf("Size of double: %zu bytes\n", sizeof(double));
   printf("Size of long: %zu bytes\n", sizeof(long));
   printf("Size of long long: %zu bytes\n\n", sizeof(long long));
    
   // VARIABLE SIZE DEMONSTRATION
   printf("--- Variable Size Examples ---\n");
   char studentGrade = 'A';
   int studentAge = 20;
   float gpa = 3.85f;
   double bankBalance = 15750.50;
    
   printf("Variable declarations and their memory usage:\n");
   printf("char studentGrade = '%c' -> %zu byte\n", studentGrade, sizeof(studentGrade));
   printf("int studentAge = %d -> %zu bytes\n", studentAge, sizeof(studentAge));
   printf("float gpa = %.2f -> %zu bytes\n", gpa, sizeof(gpa));
   printf("double bankBalance = %.2lf -> %zu bytes\n\n", bankBalance, sizeof(bankBalance));
    
   // MEMORY CALCULATIONS
   printf("--- Memory Usage Calculations ---\n");
    
   // Array memory calculation
   int numbers[10];
   char letters[26];
   float grades[5];
    
   printf("Array memory usage:\n");
   printf("int numbers[10]: %zu bytes (10 × %zu)\n", sizeof(numbers), sizeof(int));
   printf("char letters[26]: %zu bytes (26 × %zu)\n", sizeof(letters), sizeof(char));
   printf("float grades[5]: %zu bytes (5 × %zu)\n\n", sizeof(grades), sizeof(float));
    
   // PRACTICAL MEMORY ANALYSIS
   printf("--- Practical Memory Analysis ---\n");
    
   // Student record structure simulation
   printf("Student Record Memory Requirements:\n");
   int studentID = 12345;           // Student identification
   char section = 'B';              // Class section
   float semester1_gpa = 3.75f;     // First semester GPA
   float semester2_gpa = 3.82f;     // Second semester GPA
   double totalFees = 15750.50;     // Total fees paid
    
   size_t totalMemory = sizeof(studentID) + sizeof(section) + 
                        sizeof(semester1_gpa) + sizeof(semester2_gpa) + 
                        sizeof(totalFees);
    
   printf("Individual field sizes:\n");
   printf("  Student ID (int): %zu bytes\n", sizeof(studentID));
   printf("  Section (char): %zu byte\n", sizeof(section));
   printf("  Semester 1 GPA (float): %zu bytes\n", sizeof(semester1_gpa));
   printf("  Semester 2 GPA (float): %zu bytes\n", sizeof(semester2_gpa));
   printf("  Total Fees (double): %zu bytes\n", sizeof(totalFees));
   printf("Total record size: %zu bytes\n\n", totalMemory);
    
   // SIZEOF WITH EXPRESSIONS
   printf("--- sizeof with Expressions ---\n");
   int a = 10, b = 20;
   printf("sizeof(int): %zu bytes\n", sizeof(int));
   printf("sizeof(a): %zu bytes\n", sizeof(a));
   printf("sizeof(a + b): %zu bytes\n", sizeof(a + b));
   printf("sizeof(3.14): %zu bytes (double literal)\n", sizeof(3.14));
   printf("sizeof(3.14f): %zu bytes (float literal)\n\n", sizeof(3.14f));
    
   // MEMORY OPTIMIZATION EXAMPLE
   printf("--- Memory Optimization Strategies ---\n");
    
   // Inefficient structure layout
   printf("Inefficient data organization:\n");
   char status1 = 'A';          // 1 byte
   double price1 = 199.99;      // 8 bytes  
   char category1 = 'B';        // 1 byte
   int quantity1 = 50;          // 4 bytes
    
   size_t inefficientSize = sizeof(status1) + sizeof(price1) + 
                            sizeof(category1) + sizeof(quantity1);
    
   printf("  status (char): %zu byte\n", sizeof(status1));
   printf("  price (double): %zu bytes\n", sizeof(price1));
   printf("  category (char): %zu byte\n", sizeof(category1));
   printf("  quantity (int): %zu bytes\n", sizeof(quantity1));
   printf("  Total: %zu bytes\n\n", inefficientSize);
    
   // More efficient grouping
   printf("Efficient data organization:\n");
   char status2 = 'A', category2 = 'B';  // Group small types
   int quantity2 = 50;                    // Medium types
   double price2 = 199.99;                // Large types
    
   size_t efficientSize = sizeof(status2) + sizeof(category2) + 
                          sizeof(quantity2) + sizeof(price2);
    
   printf("  status + category (char): %zu bytes\n", sizeof(status2) + sizeof(category2));
   printf("  quantity (int): %zu bytes\n", sizeof(quantity2));
   printf("  price (double): %zu bytes\n", sizeof(price2));
   printf("  Total: %zu bytes\n\n", efficientSize);
    
   // RANGE AND STORAGE CAPACITY
   printf("--- Data Type Ranges and Capacity ---\n");
   printf("Understanding what each data type can store:\n\n");
    
   printf("char (1 byte):\n");
   printf("  Range: -128 to 127\n");
   printf("  Use for: Single characters, small integers\n\n");
    
   printf("int (4 bytes typically):\n");
   printf("  Range: approximately -2.1 billion to +2.1 billion\n");
   printf("  Use for: Counting, IDs, whole numbers\n\n");
    
   printf("float (4 bytes):\n");
   printf("  Range: ±3.4 × 10^38 (about 7 decimal digits precision)\n");
   printf("  Use for: Decimal numbers, basic calculations\n\n");
    
   printf("double (8 bytes):\n");
   printf("  Range: ±1.7 × 10^308 (about 15 decimal digits precision)\n");
   printf("  Use for: High precision calculations, scientific data\n\n");
    
   // MEMORY EFFICIENCY TIPS
   printf("--- Memory Efficiency Guidelines ---\n");
   printf("Choose the right data type for your needs:\n\n");
    
   // Examples of appropriate type selection
   int studentsInClass = 30;        // int is fine for reasonable counts
   char gradeLevel = '1';           // char perfect for single digit/letter
   float testScore = 87.5f;         // float sufficient for percentages
   double pi = 3.141592653589793;   // double needed for mathematical precision
    
   printf("Appropriate type selections:\n");
   printf("  Students in class (1-1000): int (%zu bytes)\n", sizeof(studentsInClass));
   printf("  Grade level (1-12): char (%zu byte)\n", sizeof(gradeLevel));
   printf("  Test score (0-100): float (%zu bytes)\n", sizeof(testScore));
   printf("  Mathematical constant: double (%zu bytes)\n\n", sizeof(pi));
    
   printf("Memory efficiency tips:\n");
   printf("✓ Use char for single characters and small numbers (-128 to 127)\n");
   printf("✓ Use int for most whole number calculations\n");
   printf("✓ Use float for basic decimal calculations\n");
   printf("✓ Use double only when high precision is required\n");
   printf("✓ Group similar-sized variables together\n");
   printf("✓ Consider memory usage in large programs\n");
    
   return 0;
}

/*
SIZEOF OPERATOR COMPREHENSIVE GUIDE:
====================================

SIZEOF OPERATOR BASICS:
- Purpose: Returns size in bytes of a data type or variable
- Syntax: sizeof(type) or sizeof(variable)
- Return type: size_t (unsigned integer type)
- Compile-time operator (evaluated during compilation)

TYPICAL DATA TYPE SIZES (Platform Dependent):
┌─────────────┬─────────────┬──────────────────────────┐
│ Data Type   │ Size (bytes)│ Typical Range            │
├─────────────┼─────────────┼──────────────────────────┤
│ char        │ 1           │ -128 to 127              │
│ int         │ 4           │ -2^31 to 2^31-1          │
│ float       │ 4           │ ±3.4 × 10^±38 (7 digits)│
│ double      │ 8           │ ±1.7 × 10^±308(15 digits)│
│ long        │ 8           │ -2^63 to 2^63-1          │
│ long long   │ 8           │ -2^63 to 2^63-1          │
└─────────────┴─────────────┴──────────────────────────┘

IMPORTANT NOTES:
- Sizes may vary between different systems (32-bit vs 64-bit)
- Use sizeof() to write portable code
- Array size = element_count × sizeof(element_type)

PRACTICAL APPLICATIONS:

1. MEMORY ALLOCATION:
   - Calculate total memory needed for data structures
   - Optimize memory usage in large programs
   - Understand storage requirements

2. ARRAY CALCULATIONS:
   int arr[10];
   size_t arraySize = sizeof(arr);           // Total bytes
   size_t elementCount = arraySize / sizeof(arr[0]);  // Element count

3. PERFORMANCE OPTIMIZATION:
   - Choose appropriate data types for memory efficiency
   - Consider cache performance with data alignment
   - Minimize memory footprint in embedded systems

4. PORTABILITY:
   - sizeof() helps write code that works on different platforms
   - Avoid hardcoding type sizes
   - Use sizeof() in memory allocation functions

MEMORY OPTIMIZATION STRATEGIES:

1. TYPE SELECTION:
   ✓ Use smallest type that can hold your data
   ✓ char for small integers (-128 to 127)
   ✓ int for general purpose integers
   ✓ float for basic decimal calculations
   ✓ double only when precision matters

2. DATA ALIGNMENT:
   ✓ Group similar-sized variables together
   ✓ Understand padding in structures
   ✓ Consider memory alignment for performance

3