# 🚦 Conditionals & Decision Making in C Programming

<div align="center">

[![C Programming](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Conditionals](https://img.shields.io/badge/Topic-Decision%20Logic-orange.svg)](https://github.com)
[![Learning Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-brightgreen.svg)](https://github.com)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

**Master the art of decision-making in C programming through hands-on examples and progressive challenges**  

</div>

---

## 🌟 Overview

Welcome to the **Conditionals & Decision Making** module of **CGenesis**! This comprehensive learning resource is designed to transform you from someone who writes sequential code to a programmer who can create intelligent, decision-making applications.

> **Why Conditionals Matter:** Every meaningful program needs to make decisions. Whether you're building a game that responds to player choices, a calculator that handles different operations, or a system that validates user input - conditionals are the backbone of intelligent software.

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
- [🔧 Tools & Resources](#-tools--resources)
- [🤝 Contributing](#-contributing)

---

## 🚀 Quick Start

### Prerequisites

- Basic knowledge of C syntax (variables, input/output)
- A C compiler (GCC, Dev-C++, or Code::Blocks)
- Text editor or IDE of your choice

### Getting Started

1. **Clone or download** this repository
2. **Start with Phase 1** - Basic conditionals
3. **Code along** with the examples
4. **Test your understanding** with practice problems
5. **Progress systematically** through each phase

```bash
# Compile any program
gcc filename.c -o output
./output
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

### 🔧 **Essential Patterns Every Programmer Should Know**

<details>
<summary><b>🎯 Basic Decision Making</b></summary>

**Simple Condition Check:**

```c
#include <stdio.h>

int main() {
    int temperature;
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    
    // Basic if - executes only when condition is true
    if (temperature > 30) {
        printf("🌞 It's hot today! Stay hydrated.\n");
    }
    
    return 0;
}
```

**Binary Decision Making:**

```c
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Two-way decision making
    if (number % 2 == 0) {
        printf("✅ %d is even\n", number);
    } else {
        printf("❌ %d is odd\n", number);
    }
    
    return 0;
}
```

</details>

<details>
<summary><b>🔗 Advanced Multi-way Logic</b></summary>

**Grade Classification System:**

```c
#include <stdio.h>

int main() {
    float marks;
    printf("Enter your percentage: ");
    scanf("%f", &marks);
    
    // Multi-condition checking with clear priorities
    if (marks >= 90) {
        printf("🏆 Outstanding! Grade: A+ (%.1f%%)\n", marks);
    } else if (marks >= 80) {
        printf("🎉 Excellent! Grade: A (%.1f%%)\n", marks);
    } else if (marks >= 70) {
        printf("👍 Good! Grade: B (%.1f%%)\n", marks);
    } else if (marks >= 60) {
        printf("✅ Pass! Grade: C (%.1f%%)\n", marks);
    } else if (marks >= 0) {
        printf("❌ Failed! Grade: F (%.1f%%)\n", marks);
    } else {
        printf("⚠️ Invalid marks entered!\n");
    }
    
    return 0;
}
```

**Menu-Driven Calculator:**

```c
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    printf("🧮 Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("✅ %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("✅ %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("✅ %.2f × %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("✅ %.2f ÷ %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("❌ Error: Division by zero!\n");
            }
            break;
        default:
            printf("❌ Invalid choice! Please select 1-4.\n");
    }
    
    return 0;
}
```

</details>

<details>
<summary><b>🧠 Logical Operations & Complex Conditions</b></summary>

**User Authentication System:**

```c
#include <stdio.h>

int main() {
    int age, hasAccount, hasVerifiedEmail;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have an account? (1=Yes, 0=No): ");
    scanf("%d", &hasAccount);
    printf("Is your email verified? (1=Yes, 0=No): ");
    scanf("%d", &hasVerifiedEmail);
    
    // Complex logical conditions
    if (age >= 18 && hasAccount && hasVerifiedEmail) {
        printf("✅ Access granted! Welcome to the platform.\n");
    } else if (age < 18) {
        printf("❌ You must be 18+ to access this platform.\n");
    } else if (!hasAccount) {
        printf("⚠️ Please create an account first.\n");
    } else if (!hasVerifiedEmail) {
        printf("📧 Please verify your email to continue.\n");
    }
    
    return 0;
}
```

**Advanced Eligibility Checker:**

```c
#include <stdio.h>

int main() {
    int income, creditScore, employmentYears;
    
    printf("💳 Loan Eligibility Checker\n");
    printf("Enter annual income (in thousands): ");
    scanf("%d", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    printf("Years of employment: ");
    scanf("%d", &employmentYears);
    
    // Complex eligibility logic
    if ((income >= 50 && creditScore >= 700) || 
        (income >= 30 && creditScore >= 750 && employmentYears >= 3)) {
        printf("🎉 Congratulations! You're eligible for the loan.\n");
        
        // Nested conditions for loan amount
        if (income >= 100 && creditScore >= 800) {
            printf("💰 You qualify for our premium loan package.\n");
        } else {
            printf("💳 You qualify for our standard loan package.\n");
        }
    } else {
        printf("❌ Sorry, you don't meet the eligibility criteria.\n");
        
        // Helpful feedback
        if (income < 30) {
            printf("💡 Tip: Increase your income to at least $30k.\n");
        }
        if (creditScore < 700) {
            printf("💡 Tip: Improve your credit score to at least 700.\n");
        }
    }
    
    return 0;
}
```

</details>

<details>
<summary><b>⚡ Professional Techniques</b></summary>

**Ternary Operator for Concise Code:**

```c
#include <stdio.h>

int main() {
    int a = 25, b = 30;
    
    // Compact conditional assignment
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    
    printf("Numbers: %d and %d\n", a, b);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    // Nested ternary (use sparingly!)
    char grade = (max >= 90) ? 'A' : (max >= 80) ? 'B' : (max >= 70) ? 'C' : 'F';
    printf("Grade for max score: %c\n", grade);
    
    return 0;
}
```

**Boolean Logic Mastery:**

```c
#include <stdio.h>

int main() {
    // Understanding truthiness in C
    int isLoggedIn = 1;    // True
    int hasPermission = 0;  // False
    int userLevel = 5;     // Non-zero = True
    
    printf("🔐 Access Control System\n");
    
    // Using variables as boolean conditions
    if (isLoggedIn) {
        printf("✅ User is logged in\n");
        
        if (hasPermission || userLevel > 3) {
            printf("✅ Access granted to admin panel\n");
        } else {
            printf("❌ Insufficient permissions\n");
        }
    } else {
        printf("❌ Please log in first\n");
    }
    
    // Demonstrating operator precedence
    if (isLoggedIn && (hasPermission || userLevel > 3)) {
        printf("🎯 Smart condition: User has appropriate access\n");
    }
    
    return 0;
}
```

</details>

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

### 📋 **Best Practices Checklist**

#### ✅ **Do:**

- Use meaningful variable names (`isEligible` instead of `flag`)
- Add comments for complex logical conditions
- Use consistent indentation (4 spaces recommended)
- Include `break` statements in switch cases
- Handle edge cases (division by zero, invalid input)
- Group related conditions with parentheses for clarity

#### ❌ **Don't:**

- Write deeply nested conditions (more than 3 levels)
- Use magic numbers (use named constants instead)
- Forget to handle the default case in switch statements
- Compare floating-point numbers directly with `==`
- Chain assignments in conditional expressions

---

## 🏆 Practice Challenges

> **📈 Progress Tracking:** Complete challenges in order to build skills systematically.

### 🌱 **Level 1: Foundation** (⭐)

*Perfect for building confidence with basic conditionals*  

| # | 🎯 **Challenge** | 📝 **Description** | 🎲 **Sample Input** | ✅ **Expected Output** |
|---|------------------|--------------------|--------------------|----------------------|
| 1 | Age Verification | Check driving eligibility (18+) | `Age: 17` | `❌ Not eligible for license` |
| 2 | Number Sign | Identify positive/negative/zero | `Number: -5` | `📍 Negative number` |
| 3 | Even or Odd | Classify number parity | `Number: 42` | `✅ Even number` |
| 4 | Password Strength | Check if password length ≥ 8 | `Password: hello` | `❌ Weak password (too short)` |
| 5 | Temperature Alert | Warn if temp > 35°C or < 0°C | `Temp: 38` | `🌡️ Heat warning!` |

### 🚀 **Level 2: Development** (⭐⭐)

*Intermediate challenges with multiple conditions*  

| # | 🎯 **Challenge** | 📝 **Description** | 🧠 **Key Concepts** |
|---|------------------|--------------------|--------------------|
| 6 | Smart Grade Calculator | Assign grades with bonus points | if-else-if, range checking |
| 7 | Triangle Validator | Check if three sides form a valid triangle | Logical operators, mathematical rules |
| 8 | Leap Year Checker | Determine leap year using complex rules | Compound conditions, modulus |
| 9 | BMI Calculator | Calculate and categorize BMI | Nested conditions, health ranges |
| 10 | Login System | Multi-factor authentication checker | Complex logical operations |

### 🎓 **Level 3: Mastery** (⭐⭐⭐)

*Advanced real-world problem solving*  

| # | 🎯 **Challenge** | 📝 **Description** | 🏆 **Advanced Skills** |
|---|------------------|--------------------|--------------------|
| 11 | Tax Calculator | Progressive tax calculation system | Multi-tier logic, financial algorithms |
| 12 | Academic Scholarship | Complex eligibility with multiple criteria | Nested conditions, weighted decisions |
| 13 | Smart Home System | IoT device control with priority logic | Switch statements, priority handling |
| 14 | Game Character Stats | RPG character validation and leveling | Complex validation, gaming logic |
| 15 | E-commerce Discount | Dynamic pricing with multiple discount tiers | Business logic, optimization |

---

## 🔧 Tools & Resources

### 📚 **Recommended Reading**

- *The C Programming Language* by Kernighan & Ritchie
- *C Programming: A Modern Approach* by K.N. King

### 🛠️ **Development Tools**

- **Compiler:** GCC, Clang, or Visual Studio
- **IDE:** Code::Blocks, Dev-C++, VS Code
- **Online Compilers:** Repl.it, OnlineGDB, CodeChef IDE

### 🌐 **Additional Resources**

- [C Reference Documentation](https://en.cppreference.com/w/c)
- [Practice Problems](https://www.hackerrank.com/domains/c)
- [Debugging Guide](https://debugging.guide/)

---

## 🤝 Contributing

We welcome contributions from fellow learners and educators! Here's how you can help:

### 📝 **Ways to Contribute:**

- 🐛 Report bugs or unclear explanations
- ✨ Suggest new practice problems
- 📖 Improve documentation and examples
- 🎯 Add real-world applications
- 🔧 Optimize existing code

### 📤 **Contribution Process:**

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-challenge`)
3. Commit your changes (`git commit -am 'Add new practice challenge'`)
4. Push to the branch (`git push origin feature/new-challenge`)
5. Create a Pull Request

---

## 🙏 Acknowledgments

- **Computer Science Educators** who inspire systematic learning
- **Open Source Community** for making knowledge accessible
- **Student Developers** who provide feedback and suggestions

---

<div align="center">

### 🎯 **Ready to Master Conditionals?**

**Start with [01_if_Condition.c](01_if_Condition.c) and begin your journey to intelligent programming!**

---

*"The best way to learn programming is by writing programs."* - **Dennis Ritchie**

**Happy Coding! 🚀**  

</div>
