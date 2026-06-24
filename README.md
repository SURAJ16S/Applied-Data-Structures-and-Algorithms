# 📚 Applied Data Structures and Algorithms

This repository is a structured collection of C++ solutions to various fundamental and advanced algorithmic problems. It covers a wide range of computer science concepts including **Greedy Algorithms, Dynamic Programming, Divide and Conquer, Binary Search, and Bit Masking**.

The repository is divided into Assignments (`ASMT`), Lab Exams (`LABEXAM`), and General Problem Solving (`Problem Statement`).

---

## 🚀 Assignments & Core Algorithms (`/Assignments`)

| File | Concept / Approach | Problem Statement Description |
| :--- | :--- | :--- |
| `Assignments/ASMT1.cpp` | **Binary Search** | Find the number of `0`s in a sorted boolean array of `1`s followed by `0`s in $O(\log N)$ time. |
| `Assignments/ASMT2.cpp` & `Assignments/ADS-2-usingDAC.cpp` | **Divide & Conquer** | Move all zeroes to the end of an array while maintaining the relative order of non-zero elements. |
| `Assignments/ASMT3.cpp` | **Mathematical / Search** | Find the smallest number whose factorial contains at least `N` trailing zeroes. |
| `Assignments/ASMT4.cpp` | **Greedy Algorithm** | Activity Selection with `K` persons. Maximize the number of shops visited without colliding times. |
| `Assignments/ASMT5.cpp` | **Greedy / Arrays** | Stock Market: Find the maximum profit that can be earned by buying/selling a stock on given days. |
| `Assignments/ASMT6.cpp` | **Binary Search on Answer** | Find the minimum amount of work to be done per day to finish tasks within `D` days. |
| `Assignments/ASMT7.cpp` | **Dynamic Programming** | Coin Change: Find the total number of ways to make a target sum given infinite supplies of coins. |
| `Assignments/ASMT8.cpp` | **Recursion / DP** | Subset Sum: Check if there exists a subset within a given set of non-negative integers whose sum equals a given target. |
| `Assignments/ASMT9.cpp` | **Bit Manipulation** | Find all distinct subsets of a given array using the Bit Masking approach. |

---

## 📝 Lab Examination Problems (`/Lab_Exams`)

These problems cover standard computer science DP challenges:

* **`Lab_Exams/LABEXAM1.cpp`** - **Minimum Coin Change**: Given `N` coin denominations, find the minimum number of coins to make a total amount (or return `-1` if impossible).
* **`Lab_Exams/LABEXAM2.cpp`** - **Longest Common Subsequence (LCS)**: Find the length of the longest subsequence present in two given strings `A` and `B`.
* **`Lab_Exams/LABEXAM3.cpp`** - **Minimum Path Sum (Grid)**: Find a path from the top-left to the bottom-right of an $M \times N$ grid that minimizes the sum of visited integers (can only move right/down).

---

## 🧩 General Problem Statements (`/Problem_Statements`)

A dedicated folder containing implementations for classic competitive programming puzzles:

* **`Problem_Statements/GSPS2.cpp`** - **Fractional Knapsack**: Maximize the value within a weight capacity allowing fractional items.
* **`Problem_Statements/GSPS3.cpp`** - **Greedy Coin Change**: Make a value `V` using the absolute minimum number of coins.
* **`Problem_Statements/GSPS5.cpp`** - **Minimum Platforms**: Find the minimum number of railway platforms required given train arrival/departure times.
* **`Problem_Statements/GSPS6.cpp`** - **Gas Station Circuit**: Find the starting index to successfully travel around a circular route of gas stations.
* **`Problem_Statements/GSPS9.cpp`** - **Candy Distribution**: Distribute candies to children in a line such that kids with higher ratings get more candies than their neighbors.
* **`Problem_Statements/GSPS10.cpp`** - **Maximize Tasks**: Perform the maximum number of tasks given durations `a[]` and total time `T`.
* **`Problem_Statements/PS6.cpp`** - **Different Ways to Add Parentheses**: Given a string of numbers and operators, compute all possible results from different parenthesizations.

---

## ⚙️ How to Compile and Run

Make sure you have a standard C++ compiler (like `g++`) installed on your system.

**1. Clone the repository:**
```bash
git clone https://github.com/SURAJ16S/Applied-Data-Structures-and-Algorithms.git
cd Applied-Data-Structures-and-Algorithms
```

**2. Compile a specific file:**
```bash
g++ ASMT1.cpp -o asmt1
```

**3. Execute the compiled binary:**
* **Linux / Mac:**
  ```bash
  ./asmt1
  ```
* **Windows:**
  ```bash
  asmt1.exe
  ```

> *Note: Compiled binaries (`.exe`, `.out`, etc.) have been purposefully excluded from this repository via `.gitignore` to keep the source tree clean.*
