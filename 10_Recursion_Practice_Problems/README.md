# 🔁 Recursion Practice Problems in C

Welcome to the **Recursion Practice Problems** module! This folder is packed with hands-on coding challenges to help you master recursion—a fundamental concept for problem-solving, interviews, and advanced programming in C.

---

## 🎯 What You'll Practice

- Writing and tracing recursive functions
- Classic recursion problems: factorial, Fibonacci, sum, power, etc.
- Advanced recursion: maze path, tower of Hanoi, zig-zag, stair climbing
- Parameterized and non-parameterized recursion
- Understanding base and recursive cases

---

## 🖥️ Classic Recursion Examples

### 1. Factorial (Recursive)

```c
int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}
printf("%d\n", factorial(5));
```

### 2. Fibonacci (Nth Term)

```c
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
printf("%d\n", fibonacci(6));
```

### 3. Sum of First N Natural Numbers

```c
int sumN(int n) {
    if (n == 1) return 1;
    return n + sumN(n - 1);
}
printf("%d\n", sumN(10));
```

### 4. Print Numbers in Increasing Order

```c
void printIncreasing(int n) {
    if (n == 0) return;
    printIncreasing(n - 1);
    printf("%d ", n);
}
printIncreasing(5); // Output: 1 2 3 4 5
```

### 5. Tower of Hanoi (Moves)

```c
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    towerOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);
}
towerOfHanoi(3, 'A', 'C', 'B');
```

---

## 🗂️ File Guide

| File Name                        | Description                                      |
|----------------------------------|--------------------------------------------------|
| `01_Hellow_World_N_Times.c`      | Print "Hello World" N times recursively          |
| `02_Factorial.c`                 | Factorial using recursion                        |
| `03_Factorial_of_first_n_recersively.c` | Factorials of first n numbers recursively   |
| `04_Decreasing_order_of_n.c`     | Print numbers in decreasing order                |
| `05_Print_decreasing_number_in_range.c` | Print numbers in decreasing order recursively |
| `06_Print_1_to_N_Parameteriased.c` | Print 1 to N with parameterized recursion        |
| `07_Print_increasing_number_in_range.c` | Print numbers in increasing order recursively |
| `08_Print_1_to_N_after_call.c`   | Print 1 to N after recursive call                |
| `09_Relatioship_of_Increasing_decreasing.c` | Relationship of increasing/decreasing    |
| `10_Sum_of_first_n_recersively.c` | Sum of first n natural numbers recursively       |
| `11_Sum_From_Start_to_End-Parameterasied.c` | Parameterized sum from start to end      |
| `12_Sum_from_Start_to_End.c`     | Sum from start to end using recursion            |
| `13_Raised_to_the_power.c`       | Calculate power using recursion                  |
| `14_N_term_of_fibonacci.c`       | Nth term of Fibonacci sequence                   |
| `15_Sum_of_factorial.c`          | Sum of factorials                                |
| `16_First_Fibonacci_Sequence.c`  | First N Fibonacci numbers                        |
| `17_Sum_Of_Fibonacci_Sequence.c` | Sum of Fibonacci sequence                        |
| `18_Stair_Path-1.c`              | Ways to climb stairs (1 or 2 steps)              |
| `19_Stair_Path-2.c`              | Ways to climb stairs (1, 2, or 3 steps)          |
| `20_Optimised_Rasied_Power.c`    | Optimized power calculation (logarithmic)        |
| `21_Maze_Path-parameterised.c`   | Parameterized maze path problem                  |
| `22_Maze_Path.c`                 | Count paths in a maze (right/down moves)         |
| `23_Pre_In_Post.c`               | Pre-In-Post order recursion example              |
| `24_Zig_Zag.c`                   | Print zig-zag pattern recursively                |
| `25_Tower_of_Hanol.c`            | Tower of Hanoi problem                           |

---

## 🏆 Best Practices for Recursion

- **Always Define a Base Case:** Prevent infinite recursion.
- **Trace Your Calls:** Use print statements to understand the call stack.
- **Start Simple:** Master basic recursion before tackling advanced problems.
- **Visualize the Problem:** Draw recursion trees or diagrams.
- **Test with Small Inputs:** Ensure correctness before scaling up.
- **Optimize When Needed:** Use parameterization or memoization for efficiency.

---

## 💡 Tips for Learners

- Practice writing and tracing recursive functions by hand.
- Experiment with both parameterized and non-parameterized recursion.
- Challenge yourself with classic problems (Hanoi, maze, zig-zag, etc.).
- Review and learn from others’ recursive solutions.

---

Happy Recursing! 🌀
