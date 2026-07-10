# FDS

Coursework for Fundamentals of Data Structures (2023), implemented in C.

## Contents

| File | Description |
|---|---|
| `ass1.c` | Implements a stack using two queues, supporting `push`, `pop`, and `top`. |
| `ass2.c` | Solves the Valid Parentheses problem using a stack to check whether brackets in a string are correctly matched and nested. |
| `ass3.c` | Solves the Dutch National Flag problem — a single-pass, three-way partitioning algorithm that sorts an array of `'R'`/`'W'`/`'B'` values in place. |
| `code1`, `code2`, `code3` / `file1`, `file2`, `file3` | Earlier drafts of the same three assignments, split into implementation (`code#`) and problem statement/write-up (`file#`). |

## How to run

Each assignment is a single, self-contained C file:

```bash
gcc ass1.c -o ass1 && ./ass1
gcc ass2.c -o ass2 && ./ass2
gcc ass3.c -o ass3 && ./ass3
```
