# 🧩 Functions & Recursion in C

Welcome to the **Functions & Recursion** module of _The Ultimate C Programming Language_ course! This folder is your comprehensive resource for mastering modular programming and recursive thinking in C. Whether you're a beginner or preparing for interviews, these examples and exercises will help you build a strong foundation.

---

## 🎯 What You'll Learn

- Defining and calling functions (void and non-void)
- Function prototypes and declarations
- Scope of variables (local, global)
- Using standard library functions
- Writing and understanding recursive functions (direct and indirect)
- Solving classic problems with recursion

---

## 🖥️ Examples

### 1. Void Function

```c
void greet() {
    printf("Hello, World!\n");
}
// Usage:
greet();
```

### 2. Non-Void Function (with Return Value)

```c
int add(int a, int b) {
    return a + b;
}
// Usage:
int sum = add(3, 5);
printf("Sum: %d\n", sum);
```

### 3. Function Prototype

```c
int multiply(int, int); // Prototype
define main() {
    printf("%d\n", multiply(2, 4));
}
int multiply(int x, int y) {
    return x * y;
}
```

### 4. Scope of Variables

```c
int globalVar = 10;
void showScope() {
    int localVar = 5;
    printf("Global: %d, Local: %d\n", globalVar, localVar);
}
```

### 5. Using a Library Function

```c
#include <math.h>
double root = sqrt(16.0);
printf("Square root: %.2f\n", root);
```

### 6. Direct Recursion

```c
int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}
printf("%d\n", factorial(5));
```

### 7. Indirect Recursion

```c
void funA(int n);
void funB(int n);
void funA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n) {
    if (n > 1) {
        printf("%d ", n);
        funA(n / 2);
    }
}
// Usage:
funA(5);
```

---

## 🗂️ File Guide

| File Name                              | Description                                      |
|----------------------------------------|--------------------------------------------------|
| `Function.c`                          | Basic function definition and usage               |
| `Function_Prototype.c`                 | Declaring and using function prototypes           |
| `Function_with_defination.c`           | Defining functions before/after main              |
| `Void_Function.c`                      | Functions with no return value                    |
| `Non-Void_Function.c`                  | Functions that return a value                     |
| `Library_Function.c`                   | Using standard library functions                  |
| `Scope_Of_Variable.c`                  | Variable scope in functions                       |
| `C_Limits_File.c`                      | Limits and constants in C                         |
| `Recursive_Function.c`                 | Writing and understanding recursion               |
| `Predicated_the_output.c`              | Predicting output of function/recursion code      |
| `Practice_Questions_Based_On_Functions.txt` | Practice problems on functions               |
| `Practice_Questions_Based_On_Recursions.txt`| Practice problems on recursion                |
| `Dircet_Recursion.c`                   | Example of direct recursion                       |
| `In-direct_Recursion copy.c`           | Example of indirect recursion                     |

---

## 🏆 Best Practices for Functions & Recursion

- **Modularize Your Code:** Break problems into small, reusable functions.
- **Use Descriptive Names:** Name your functions and variables clearly.
- **Comment Your Logic:** Explain parameters, return values, and tricky recursion.
- **Test Thoroughly:** Check your functions with various inputs, including edge cases.
- **Understand Base Cases:** Always define a clear base case in recursion to prevent infinite loops.
- **Trace Recursive Calls:** Use print statements to follow the flow of recursive functions.
- **Leverage Library Functions:** Don’t reinvent the wheel—use C’s standard library when possible.

---

## 💡 Tips for Learners

- Practice writing both void and non-void functions.
- Experiment with passing parameters by value and by reference.
- Visualize recursion with call stacks or diagrams.
- Start with simple recursive problems (factorial, sum of N) before tackling complex ones (maze, Tower of Hanoi).
- Review and solve the practice questions for mastery.

---

Happy Coding & Keep Breaking Problems Down! 🧠✨
