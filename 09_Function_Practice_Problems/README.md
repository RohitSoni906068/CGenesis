# 🛠️ Function Practice Problems in C

Welcome to the **Function Practice Problems** module of _The Ultimate C Programming Language_ course! This folder is packed with hands-on coding challenges to help you master writing, using, and applying functions in C. These problems are essential for building modular, reusable, and efficient code.

---

## 🎯 What You'll Practice

- Mathematical operations (sum, product, average, factorial, power, GCD, etc.)
- Number theory (prime, factors, permutations, combinations, Fibonacci)
- Area and conversion calculations (circle, rectangle, temperature, square root)
- Swapping, logic, and comparison functions
- Special patterns and output formatting
- Using library functions and custom logic

---

## 🖥️ Function Examples

### 1. Basic Function (No Return Value)

```c
void greet() {
    printf("Hello, World!\n");
}
// Usage:
greet();
```

### 2. Function with Return Value

```c
int add(int a, int b) {
    return a + b;
}
// Usage:
int sum = add(3, 5);
printf("Sum: %d\n", sum);
```

### 3. Passing Parameters by Value

```c
void printSquare(int n) {
    printf("Square: %d\n", n * n);
}
printSquare(4);
```

### 4. Composite Functions

```c
int multiply(int a, int b) {
    return a * b;
}
int squareOfSum(int x, int y) {
    int s = add(x, y);
    return multiply(s, s);
}
printf("%d\n", squareOfSum(2, 3));
```

### 5. Using a Library Function

```c
#include <math.h>
double root = sqrt(25.0);
printf("Square root: %.2f\n", root);
```

---

## 🗂️ File Guide

| File Name                        | Description                                      |
|----------------------------------|--------------------------------------------------|
| `Area_Of_Circle,Rectangle.c`     | Area of circle and rectangle using functions      |
| `Area_Of_Square.c`               | Area of a square                                 |
| `Celsius_to_Fahreheit.c`         | Celsius to Fahrenheit conversion                 |
| `Celsius_to_Kelvin.c`            | Celsius to Kelvin conversion                     |
| `Center-align_rows_Pascal_Triangle.c` | Center-aligned Pascal's Triangle           |
| `Combination.c`                  | Calculate combinations (nCr)                     |
| `Factorial.c`                    | Factorial of a number                            |
| `Factorial_of_First_N.c`         | Factorials of first N numbers                    |
| `Fahrenheit_to_Celsius.c`        | Fahrenheit to Celsius conversion                 |
| `Fahrenheit_to_Kelvin.c`         | Fahrenheit to Kelvin conversion                  |
| `Fibonacci.c`                    | Fibonacci sequence using functions               |
| `Fibonacci_of_First_N.c`         | First N Fibonacci numbers                        |
| `Force_Of_Attraction.c`          | Calculate force of attraction                    |
| `Good_Morning,Afternoon.c`       | Greeting functions (morning, afternoon, etc.)    |
| `Greatest_Common_Divisor.c`      | GCD of two numbers                               |
| `Hot_Cold.c`                     | Weather categorization by temperature            |
| `Kelvin_to_Celsius.c`            | Kelvin to Celsius conversion                     |
| `Kelvin_to_Fahreheit.c`          | Kelvin to Fahrenheit conversion                  |
| `Min_of_three_numbers.c`         | Minimum of three numbers                         |
| `Min_of_two_numbers.c`           | Minimum of two numbers                           |
| `Namaste_and_Bonjour.c.c`        | Greeting in different languages                  |
| `Permutation.c`                  | Calculate permutations (nPr)                     |
| `Power_Function.c`               | Power calculation (base^exponent)                |
| `Power_From_0_to_Exponet.c`      | Power from 0 to exponent                         |
| `Power_Library_Function.c`       | Power calculation using library function         |
| `Prime_Factors_Of_N.c`           | Prime factors of a number                        |
| `Prime_Numbers_In_Range.c`       | Print prime numbers in a range                   |
| `Print_Swap_Numbers_Using_Temp.c`| Swap numbers using a temporary variable          |
| `Printing_Swap_Numbers.c`        | Swap numbers without a temporary variable        |
| `Right_Start_Triangle.c`         | Print a right-aligned triangle                   |
| `Square_root.c`                  | Calculate square root                            |
| `Star_Pascal_Triangle.c`         | Pascal's Triangle with stars                     |
| `Sum,Product,Average.c`          | Sum, product, and average of two numbers         |
| `Sum_Of_Digit_Of_N.c`            | Sum of digits of a number                        |
| `Sum_of_three_numbers.c`         | Sum of three numbers                             |
| `Table_Of_N.c`                   | Print multiplication table of N                  |

---

## 🏆 Best Practices for Function-Based Problem Solving

- **Break Down Problems:** Use functions to modularize and organize your code.
- **Use Clear Names:** Name your functions and variables descriptively.
- **Comment Your Code:** Explain the purpose and logic of each function.
- **Test Thoroughly:** Try different inputs, including edge cases.
- **Reuse Functions:** Avoid code duplication by reusing well-written functions.
- **Explore Library Functions:** Use C's standard library for common tasks when possible.

---

## 💡 Tips for Learners

- Practice writing both simple and composite functions.
- Experiment with parameter passing and return values.
- Try combining multiple functions to solve bigger problems.
- Review and learn from others’ solutions.
- Challenge yourself with variations and extensions of each problem.

---

Happy Practicing & Keep Functioning! ⚙️✨
