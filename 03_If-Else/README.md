# 🚦 Conditionals & Decision Making in C

Welcome to the **If-Else & Conditionals** module of _The Ultimate C Programming Language_ course!  
This folder contains essential resources, code examples, and practice problems to help you master decision-making in C.

---

## 📚 What Are Conditionals?

Conditionals allow your program to make decisions and execute different code paths based on logic and user input.  
Mastering these constructs is crucial for writing flexible, robust, and intelligent programs.

---

## 🧩 Core Concepts Covered

- **If Statements:** Basic one-way decisions
- **If-Else Statements:** Two-way branching
- **Else-If Chains:** Multi-way branching for complex logic
- **Nested Ifs:** Layered decision making
- **Switch Statements:** Clean multi-branch selection
- **Logical Operators:** AND (`&&`), OR (`||`), NOT (`!`), equality (`==`)
- **Ternary Operator:** Concise, inline decisions
- **Truthiness in C:** How 0 and non-zero values are treated in conditions

---

## 💻 Example Snippets

### 1️⃣ Simple `if` Statement

```c
int number = 5;
if (number > 0) {
    printf("Number is positive.\n");
}
```

---

### 2️⃣ `if-else` Statement

```c
int number = -3;
if (number >= 0) {
    printf("Non-negative number.\n");
} else {
    printf("Negative number.\n");
}
```

---

### 3️⃣ `if-else-if-else` Ladder

```c
int marks = 85;
if (marks >= 90) {
    printf("Excellent\n");
} else if (marks >= 75) {
    printf("Very Good\n");
} else if (marks >= 60) {
    printf("Good\n");
} else {
    printf("Needs Improvement\n");
}
```

---

### 4️⃣ Nested `if` Statements

```c
int age = 20, hasLicense = 1;
if (age >= 18) {
    if (hasLicense) {
        printf("You can drive.\n");
    } else {
        printf("Get a license first.\n");
    }
} else {
    printf("Too young to drive.\n");
}
```

---

### 5️⃣ `switch` Statement

```c
char grade = 'B';
switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Well done!\n");
        break;
    case 'C':
        printf("Good\n");
        break;
    default:
        printf("Keep trying!\n");
}
```

---

### 6️⃣ Logical Operators

```c
int age = 22, marks = 80;
if (age > 18 && marks > 75) {
    printf("Eligible for scholarship.\n");
}
```

---

### 7️⃣ Ternary Operator

```c
int num = 10;
printf("%s\n", (num % 2 == 0) ? "Even" : "Odd");
```

---

## 🗂️ File Reference Guide

| #  | File Name                                         | Description                                         |
|----|---------------------------------------------------|-----------------------------------------------------|
| 1  | [`01_if_Condition.c`](01_if_Condition.c)                | Basic `if` statement structure and usage            |
| 2  | [`02_if-else.c`](02_if-else.c)                          | Two-way branching with `if-else`                    |
| 3  | [`03_if_else-else-if.c`](03_if_else-else-if.c)          | Multi-way decisions using `if-else-if-else` ladder  |
| 4  | [`04_Logical_operators.c`](04_Logical_operators.c)      | Combining conditions with logical operators         |
| 5  | [`05_Nested-if.c`](05_Nested-if.c)                      | How to nest `if` statements for layered logic       |
| 6  | [`06_if_with_0_and_1.c`](06_if_with_0_and_1.c)          | Truthiness: 0 as false, non-zero as true in C       |
| 7  | [`07_Switch_statements.c`](07_Switch_statements.c)      | Using `switch` for multi-branch selection           |
| 8  | [`08_ternary_if.c`](08_ternary_if.c)                    | Writing concise decisions with the ternary operator |
| 9  | [`Practice_Questions.txt`](Practice_Questions.txt)      | Practice problems to reinforce and challenge logic  |

---

## 🏆 Best Practices for Mastering Conditionals

- **Plan Your Logic:** Use flowcharts or pseudocode for complex decisions.
- **Use Indentation & Braces:** Keep your code readable and avoid logic errors.
- **Test All Branches:** Check edge cases and all possible paths.
- **Comment Your Logic:** Explain tricky or nested conditions for clarity.
- **Prefer Switch for Multi-Way Branching:** When checking a variable against many constant values.
- **Use Ternary for Simplicity:** For concise, single-line decisions.
- **Stay Organized:** Use meaningful file and variable names.

---

## 💡 Tips for Learners

- Start with simple if-else problems, then progress to nested and chained conditions.
- Practice converting real-world scenarios into code logic.
- Experiment with logical operators to combine multiple conditions.
- Review and solve the practice questions for mastery.
- Debug by printing variable values and condition results.

---

> **Happy Coding & Smart Decision Making! 🚦**
