# 🚦 Conditionals & Decision Making in C Programming

<div align="center">

[![C Programming](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Conditionals](https://img.shields.io/badge/Topic-Decision%20Logic-orange.svg)](https://github.com/rohit528590/CGenesis/03_If-Else)
[![Learning Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-brightgreen.svg)](https://github.com/rohit528590/CGenesis/03_If-Else)
[![Files](https://img.shields.io/badge/Code%20Files-08-orange.svg)](https://github.com/rohit528590/CGenesis/tree/main/03_If-Else)

![Made for Students](https://img.shields.io/badge/Made%20for-Students-purple.svg?style=flat-square)
![Hands On Learning](https://img.shields.io/badge/Learning%20Style-Hands%20On-blue.svg?style=flat-square)

**Master the art of decision-making in C programming through hands-on examples and progressive challenges**  

</div>

---

## 🌟 Overview

Welcome to the **Conditionals & Decision Making** module of **CGenesis**! This comprehensive learning resource is designed to transform you from someone who writes sequential code to a programmer who can create intelligent, decision-making applications.

### 🎯 What You'll Achieve

By the end of this module, you'll be able to:

- ✅ Write programs that respond intelligently to different scenarios
- ✅ Implement complex decision-making logic efficiently
- ✅ Choose the right conditional structure for any problem
- ✅ Debug and optimize conditional code like a professional
- ✅ Build real-world applications with sophisticated logic

---

## 📋 Table of Contents

- [🚀 Quick Start](#-quick-start)
- [🎓 Learning Path](#-learning-path)
- [💻 Code Examples](#-code-examples)
- [📖 Reference Guide](#-reference-guide)
- [🏆 Practice Challenges](#-practice-challenges)

---

## 🚀 Quick Start

### 🎯 Prerequisites

- Basic understanding of C syntax
- GCC compiler or any C compiler
- Text editor or IDE (Code::Blocks, Dev-C++, VS Code)

### Compilation & Execution

```bash
# Clone the repository
git clone https://github.com/rohit528590/CGenesis.git
cd CGenesis/03_If-Else

# Compile any program
gcc filename.c -o output

# Run the program
./output

# Example with Problem 1
gcc 01_if_Condition.c -o if
./if
```

---

## 🎓 Learning Path

Our structured approach takes you from basic if-statements to advanced decision-making patterns:

### 📍 **Phase 1: Foundation** - Building Decision-Making Skills

*Master the fundamentals that every programmer needs*  

| 🎯 **Program** | 📚 **Core Concept** | 🔧 **Key Skills** | ⏱️ **Time** |
|----------------|---------------------|-------------------|-------------|
| **[01_if_Condition.c](01_if_Condition.c)** | One-way decisions | Basic if statements, condition evaluation | 20 min |
| **[02_if-else.c](02_if-else.c)** | Two-way branching | Binary decisions, else clause | 25 min |
| **[06_if_with_0_and_1.c](06_if_with_0_and_1.c)** | Boolean logic in C | Truthiness, 0 vs non-zero values | 30 min |

**🎯 Phase Goal:** Write programs that can make basic yes/no decisions

---

### 📍 **Phase 2: Expansion** - Complex Logic Systems

*Learn to handle multiple conditions and scenarios*  

| 🎯 **Program** | 📚 **Core Concept** | 🔧 **Key Skills** | ⏱️ **Time** |
|----------------|---------------------|-------------------|-------------|
| **[03_if_else-else-if.c](03_if_else-else-if.c)** | Multi-way branching | Chained conditionals, priority handling | 35 min |
| **[04_Logical_operators.c](04_Logical_operators.c)** | Compound conditions | AND, OR, NOT operations | 40 min |
| **[05_Nested-if.c](05_Nested-if.c)** | Layered decision making | Hierarchical logic, code organization | 45 min |
| **[07_Switch_statements.c](07_Switch_statements.c)** | Multi-case selection | Switch syntax, case handling, break statements | 35 min |

**🎯 Phase Goal:** Build sophisticated decision trees and handle complex scenarios

---

### 📍 **Phase 3: Mastery** - Professional Techniques

*Write clean, efficient, and maintainable conditional code*  

| 🎯 **Program** | 📚 **Core Concept** | 🔧 **Key Skills** | ⏱️ **Time** |
|----------------|---------------------|-------------------|-------------|
| **[08_ternary_if.c](08_ternary_if.c)** | Compact conditionals | Ternary operator, inline decisions | 30 min |
| **[Practice_Questions.txt](Practice_Questions.txt)** | Real-world applications | Problem-solving, optimization | 2-3 hours |

**🎯 Phase Goal:** Write professional-grade conditional code with optimal performance

---

## 💻 Code Examples

### 🔥 **1. Basic if Condition**

```c
int age = 18;
if (age >= 18) {
    printf("You can vote!\n");
}
```

### 🔥 **2. if-else Condition**

```c
int number = 15;
if (number % 2 == 0) {
    printf("Even\n");
} else {
    printf("Odd\n");
}
```

### 🔥 **3. if-else-if Ladder**

```c
int marks = 85;
if (marks >= 90) {
    printf("Grade A+\n");
} else if (marks >= 80) {
    printf("Grade A\n");
} else if (marks >= 70) {
    printf("Grade B\n");
} else {
    printf("Grade C\n");
}
```

### 🔥 **4. Comparison Operators**

```c
int a = 10, b = 20;
if (a == b) printf("Equal\n");           // ==
if (a != b) printf("Not equal\n");       // !=
if (a < b)  printf("Less than\n");       // <
if (a > b)  printf("Greater than\n");    // >
if (a <= b) printf("Less or equal\n");   // <=
if (a >= b) printf("Greater or equal\n"); // >=
```

### 🔥 **5. Logical Operators**

```c
int age = 25, salary = 50000;
// AND (&&) - All conditions must be true
if (age >= 21 && salary >= 30000) {
    printf("Loan approved\n");
}

// OR (||) - At least one condition must be true
if (age >= 60 || salary >= 100000) {
    printf("Premium member\n");
}

// NOT (!) - Reverses the condition
if (!(age < 18)) {
    printf("Adult\n");
}
```

### 🔥 **6. Nested if Statements**

```c
int temp = 25, sunny = 1;
if (temp >= 20) {
    if (sunny) {
        printf("Perfect weather!\n");
    } else {
        printf("Good weather\n");
    }
} else {
    printf("Cold weather\n");
}
```

### 🔥 **7. Ternary Operator**

```c
int a = 15, b = 20;
int max = (a > b) ? a : b;  // Compact if-else
printf("Max: %d\n", max);

// Multiple ternary
int age = 17;
char* type = (age < 13) ? "child" : (age < 20) ? "teen" : "adult";
printf("Type: %s\n", type);
```

---

## 📖 Reference Guide

### 🔍 **Comparison Operators**

| Operator | Description | Example | Result |
|----------|-------------|---------|---------|
| `==` | Equal to | `5 == 5` | True (1) |
| `!=` | Not equal to | `5 != 3` | True (1) |
| `>` | Greater than | `7 > 3` | True (1) |
| `<` | Less than | `3 < 7` | True (1) |
| `>=` | Greater than or equal | `5 >= 5` | True (1) |
| `<=` | Less than or equal | `3 <= 7` | True (1) |

### 🧮 **Logical Operators**

| Operator | Name | Description | Example | When True |
|----------|------|-------------|---------|-----------|
| `&&` | AND | Both conditions must be true | `(a > 5) && (b < 10)` | Both conditions are true |
| `\|\|` | OR | At least one condition must be true | `(a == 5) \|\| (b == 10)` | Either condition is true |
| `!` | NOT | Reverses the condition | `!(a > 5)` | Original condition is false |

---

## 🏆 [Practice Challenges](Practice_Questions.txt)

### 📁 **if-else Practice** - [Practice_Questions.txt](Practice_Questions.txt)

> **📈 Progress Tracking:** Complete challenges in order to build skills systematically.

<details>
<summary> 🌱 Level 1: Foundation (⭐)</summary>

*Perfect for building confidence with basic conditionals*  

| # | 🎯 **Challenge** | 📝 **Description** | 🎲 **Sample Input** | ✅ **Expected Output** |
|---|------------------|--------------------|--------------------|----------------------|
| 1 | Age Verification | Check driving eligibility (18+) | `Age: 17` | `❌ Not eligible for license` |
| 2 | Number Sign | Identify positive/negative/zero | `Number: -5` | `📍 Negative number` |
| 3 | Even or Odd | Classify number parity | `Number: 42` | `✅ Even number` |
| 4 | Password Strength | Check if password length ≥ 8 | `Password: hello` | `❌ Weak password (too short)` |
| 5 | Temperature Alert | Warn if temp > 35°C or < 0°C | `Temp: 38` | `🌡️ Heat warning!` |

</details>

<details>
<summary> 🚀 Level 2: Development (⭐⭐)</summary>

*Intermediate challenges with multiple conditions*  

| # | 🎯 **Challenge** | 📝 **Description** | 🧠 **Key Concepts** |
|---|------------------|--------------------|--------------------|
| 6 | Smart Grade Calculator | Assign grades with bonus points | if-else-if, range checking |
| 7 | Triangle Validator | Check if three sides form a valid triangle | Logical operators, mathematical rules |
| 8 | Leap Year Checker | Determine leap year using complex rules | Compound conditions, modulus |
| 9 | BMI Calculator | Calculate and categorize BMI | Nested conditions, health ranges |
| 10 | Login System | Multi-factor authentication checker | Complex logical operations |

</details>

<details>
<summary> 🎓 Level 3: Mastery (⭐⭐⭐)</summary>

*Advanced real-world problem solving*  

| # | 🎯 **Challenge** | 📝 **Description** | 🏆 **Advanced Skills** |
|---|------------------|--------------------|--------------------|
| 11 | Tax Calculator | Progressive tax calculation system | Multi-tier logic, financial algorithms |
| 12 | Academic Scholarship | Complex eligibility with multiple criteria | Nested conditions, weighted decisions |
| 13 | Smart Home System | IoT device control with priority logic | Switch statements, priority handling |
| 14 | Game Character Stats | RPG character validation and leveling | Complex validation, gaming logic |
| 15 | E-commerce Discount | Dynamic pricing with multiple discount tiers | Business logic, optimization |

</details>

---
<div align="center">

## 🎉 **Ready to Start Your Programming Journey?**

**Begin with [`01_if_Condition.c`](01_if_Condition.c) and take your first step toward becoming a skilled programmer!**

### 🌟 **Remember:**

*Every expert programmer started exactly where you are now. The key is consistent practice and curiosity to learn!*

---

### 🔗 **Support This Project**

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/network/members)

**⭐ [Star this Repository](https://github.com/rohit528590/CGenesis) to show your support!**

</div>

*Happy Coding, future programmer! 🚀👨‍💻👩‍💻*  

</div>

<div align="center">
<sub>Built with ❤️ for C programming students | Based on proven learning progression | <a href="#-contributing">Contribute</a> | <a href="https://github.com/rohit528590/CGenesis">CGenesis Project</a></sub>
</div>
