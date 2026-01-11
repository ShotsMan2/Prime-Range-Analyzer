# Prime Range Analyzer

This project is a computational tool written in C designed to analyze a specific range of integers and determine the **density of prime numbers** within that interval.

## 🧮 Theoretical Background

A **Prime Number** is a natural number greater than 1 that has no positive divisors other than 1 and itself. In cryptography and number theory, understanding the distribution of primes within specific intervals is a fundamental concept.

This algorithm solves the counting problem:
$$Count(A, B) = \sum_{n=A}^{B} [is\_prime(n)]$$

## ⚙️ How It Works

The program executes the following logic:
1.  **Input Parsing:** Accepts two integer bounds (Start/End) from the user.
2.  **Interval Normalization:** Automatically detects which input is the lower bound and which is the upper bound.
3.  **Iterative Validation:** Loops through every integer in the range.
4.  **Primality Test:** Uses trial division (checking divisibility from 2 to $n/2$) to verify if a number is prime.
5.  **Accumulation:** Increments a counter for each verified prime found.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o prime_counter
    ```
2.  Run the executable:
    ```bash
    ./prime_counter
    ```
3.  Enter two numbers (e.g., `10` and `50`) to see how many prime numbers exist between them.

---
*This repository demonstrates nested loop logic and conditional algorithmic optimization in C.*
