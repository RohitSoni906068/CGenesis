# C Programming: Fundamentals & Basics

Welcome to the **C Programming: Basics** module of _The Ultimate C Programming Language_ course! This folder contains essential resources, code examples, and practice questions to help you build a strong foundation in C programming.

---

## 📚 What Are C Basics?

The basics of C programming introduce you to the building blocks of the language. Mastering these concepts is crucial for writing efficient, readable, and error-free code.

---

## 🧩 Core Concepts Covered

- **Program Structure:** Boilerplate code, main function, and syntax
- **Input/Output:** Using `scanf` and `printf` for user interaction
- **Comments:** Writing clear single-line and multi-line comments
- **Data Types:** Understanding `int`, `float`, `char`, `double`, etc.
- **Variable Declaration:** Declaring and initializing variables
- **Variable Naming Rules:** Best practices for naming variables
- **Type Casting:** Implicit and explicit conversions
- **Escape Sequences:** Formatting output with special characters
- **Size of Data Types:** Using `sizeof` to determine memory usage
- **Operators:** Arithmetic, modulus, precedence, and associativity

---

## 🖥️ C Basics Examples

### 1. Boilerplate Code

```c
#include <stdio.h>
int main() {
    // Your code here
    return 0;
}
```

### 2. Input and Output

```c
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("You entered: %d\n", num);
```

### 3. Variable Declaration and Initialization

```c
int a = 5;
float b = 3.14;
char c = 'A';
```

### 4. Type Casting

```c
int x = 10;
double y = (double)x / 3;
printf("%f\n", y); // Output: 3.333333
```

### 5. Arithmetic and Modulus Operators

```c
int sum = 7 + 3;
int mod = 7 % 3;
printf("Sum: %d, Modulus: %d\n", sum, mod);
```

### 6. Comments

```c
// This is a single-line comment
/* This is a
   multi-line comment */
```

### 7. Escape Sequences

```c
printf("Hello\nWorld\t2024\n");
```

---

## 🗂️ File Guide

| File Name                         | Description                                         |
|-----------------------------------|-----------------------------------------------------|
| `01_First.c`                      | Your first C program                                |
| `02_Boilerplate_code.c`           | Basic structure of a C program                      |
| `03_Comments.c`                   | Single-line and multi-line comments                 |
| `04_Escape_Sequence.c`            | Using escape sequences in strings                   |
| `05_Variable_Declaration.c`       | Declaring and initializing variables                |
| `06_Variable_naming_rules.c`      | Rules and best practices for variable names         |
| `07_Airthmetic(Moduls)_Operator.c`| Arithmetic and modulus operator usage               |
| `08_Data_Types.c`                 | Overview of C data types                            |
| `09_Input_Output.c`               | Console input and output examples                   |
| `10_Hierarchy_of_operators.c`     | Operator precedence and associativity               |
| `11_TypeCasting.c`                | Type conversion in C                                |
| `12_Size_of_Data_Types.c`         | Memory size of data types                           |

---

## 📝 Practice & Self-Assessment

- **Practice_Questions.txt:** Challenge yourself with curated questions to reinforce your understanding of C basics.
- Each `.c` file is a standalone example—open, run, and experiment to deepen your learning.

---

## 🏆 Best Practices for Learning C Basics

- **Start Simple:** Focus on one concept at a time before combining them.
- **Experiment:** Modify code examples and observe the results.
- **Comment Your Code:** Write clear comments to explain your logic.
- **Test Thoroughly:** Try different inputs and edge cases.
- **Stay Organized:** Use meaningful file and variable names.
- **Review Regularly:** Revisit old code as you learn new concepts.

---

## 💡 Tips for Mastery

- Practice writing and running code daily.
- Use print statements to debug and understand program flow.
- Read and learn from others’ code and solutions.
- Don’t hesitate to ask questions or seek feedback.

---

Happy Coding & Keep Building Your Foundation! 🚀
