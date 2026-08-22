# 📚 Arrays — Data Structures & Algorithms

> A structured collection of **Array problems and implementations in C++**, organized from fundamentals to interview-level problems.

This folder contains my complete practice of **Arrays**, one of the most important topics in Data Structures & Algorithms.

The problems are organized by **concept, difficulty, and problem-solving pattern**, with emphasis on:

* Understanding the brute-force approach
* Improving to better/optimal solutions
* Analyzing time and space complexity
* Writing clean and reusable C++ implementations
* Recognizing patterns that appear in coding interviews

---

## 📌 Table of Contents

* [What are Arrays?](#-what-are-arrays)
* [Learning Goals](#-learning-goals)
* [Array Topics](#-array-topics)
* [Problem Roadmap](#-problem-roadmap)
* [Level 1 — Array Basics](#-level-1--array-basics)
* [Level 2 — Fundamental Array Problems](#-level-2--fundamental-array-problems)
* [Level 3 — Important Interview Problems](#-level-3--important-interview-problems)
* [Level 4 — Two Pointer & Sliding Window](#-level-4--two-pointer--sliding-window)
* [Level 5 — Hashing & Prefix Sum](#-level-5--hashing--prefix-sum)
* [Level 6 — Binary Search on Arrays](#-level-6--binary-search-on-arrays)
* [Level 7 — Advanced Array Problems](#-level-7--advanced-array-problems)
* [Complexity Reference](#-complexity-reference)
* [Problem-Solving Patterns](#-problem-solving-patterns)
* [Practice Strategy](#-practice-strategy)
* [Progress Tracker](#-progress-tracker)
* [Key Learnings](#-key-learnings)

---

# 🔹 What are Arrays?

An **array** is a linear data structure that stores elements of the same data type in contiguous memory locations.

### Example

```cpp
int arr[] = {10, 20, 30, 40, 50};
```

Array indexing starts from `0`.

```text
Index:   0    1    2    3    4
Value:  10   20   30   40   50
```

### Basic Operations

| Operation              | Average Complexity |
| ---------------------- | -----------------: |
| Access                 |               O(1) |
| Search                 |               O(n) |
| Insertion at beginning |               O(n) |
| Insertion at end       |              O(1)* |
| Deletion at beginning  |               O(n) |
| Deletion at end        |               O(1) |

`*` Depends on the implementation and whether sufficient capacity exists.

---

# 🎯 Learning Goals

By completing this section, I aim to be able to:

* Understand array fundamentals
* Traverse arrays efficiently
* Find minimum/maximum elements
* Find second largest/smallest elements
* Reverse arrays
* Rotate arrays
* Remove duplicates
* Solve array problems using hashing
* Apply prefix sums
* Use two-pointer techniques
* Apply sliding-window techniques
* Solve subarray problems
* Apply Kadane's Algorithm
* Understand merging techniques
* Solve matrix problems
* Recognize when binary search can be applied
* Optimize brute-force solutions
* Analyze time and space complexity

---

# 🧩 Array Topics

The Array section is divided into the following concepts:

```text
Arrays
│
├── 01. Basics & Traversal
│
├── 02. Min / Max Problems
│
├── 03. Searching
│
├── 04. Sorting
│
├── 05. Array Manipulation
│
├── 06. Hashing
│
├── 07. Prefix Sum
│
├── 08. Two Pointer
│
├── 09. Sliding Window
│
├── 10. Subarrays
│
├── 11. Kadane's Algorithm
│
├── 12. Merging & Intervals
│
├── 13. Binary Search
│
├── 14. Matrix / 2D Arrays
│
└── 15. Advanced Interview Problems
```

---

# 🟢 Level 1 — Array Basics

These problems build the foundation required for solving more complex array questions.

| #  | Problem                             | Main Concept      | Difficulty | Status |
| -- | ----------------------------------- | ----------------- | ---------- | ------ |
| 1  | Find Largest Element                | Traversal         | Easy       | ⬜      |
| 2  | Find Smallest Element               | Traversal         | Easy       | ⬜      |
| 3  | Find Second Largest Element         | Traversal         | Easy       | ⬜      |
| 4  | Find Second Smallest Element        | Traversal         | Easy       | ⬜      |
| 5  | Check if Array is Sorted            | Traversal         | Easy       | ⬜      |
| 6  | Remove Duplicates from Sorted Array | Two Pointer       | Easy       | ⬜      |
| 7  | Reverse an Array                    | Two Pointer       | Easy       | ⬜      |
| 8  | Count Frequency of Elements         | Hashing           | Easy       | ⬜      |
| 9  | Linear Search                       | Searching         | Easy       | ⬜      |
| 10 | Find Missing Number                 | Mathematics / XOR | Easy       | ⬜      |

### Skills Developed

* Array traversal
* Index manipulation
* Maintaining variables while traversing
* Handling duplicates
* Basic optimization
* Understanding O(n) solutions

---

# 🟡 Level 2 — Fundamental Array Problems

These problems introduce important techniques used repeatedly in interviews.

| #  | Problem                           | Pattern            | Difficulty | Status |
| -- | --------------------------------- | ------------------ | ---------- | ------ |
| 1  | Left Rotate Array by One          | Array Manipulation | Easy       | ⬜      |
| 2  | Left Rotate Array by K Places     | Rotation           | Easy       | ⬜      |
| 3  | Move Zeroes to End                | Two Pointer        | Easy       | ⬜      |
| 4  | Union of Two Sorted Arrays        | Two Pointer        | Easy       | ⬜      |
| 5  | Intersection of Two Sorted Arrays | Two Pointer        | Easy       | ⬜      |
| 6  | Find Missing Number               | XOR / Math         | Easy       | ⬜      |
| 7  | Find Element Appearing Once       | XOR                | Easy       | ⬜      |
| 8  | Maximum Consecutive Ones          | Traversal          | Easy       | ⬜      |
| 9  | Rearrange Array Elements by Sign  | Two Pointer        | Medium     | ⬜      |
| 10 | Leaders in an Array               | Traversal          | Medium     | ⬜      |

---

# 🟠 Level 3 — Important Interview Problems

These problems are especially important for placement preparation.

| #  | Problem                               | Main Pattern             | Difficulty | Status |
| -- | ------------------------------------- | ------------------------ | ---------- | ------ |
| 1  | Two Sum                               | Hashing                  | Easy       | ⬜      |
| 2  | Sort an Array of 0s, 1s and 2s        | Dutch National Flag      | Medium     | ⬜      |
| 3  | Majority Element                      | Moore's Voting Algorithm | Easy       | ⬜      |
| 4  | Maximum Subarray Sum                  | Kadane's Algorithm       | Medium     | ⬜      |
| 5  | Best Time to Buy and Sell Stock       | Greedy                   | Easy       | ⬜      |
| 6  | Longest Subarray with Given Sum       | Prefix Sum / Hashing     | Medium     | ⬜      |
| 7  | Longest Subarray with Sum K           | Prefix Sum               | Medium     | ⬜      |
| 8  | Maximum Product Subarray              | Dynamic Tracking         | Medium     | ⬜      |
| 9  | Find the Missing and Repeating Number | Mathematics / XOR        | Medium     | ⬜      |
| 10 | Majority Element II                   | Moore's Voting           | Medium     | ⬜      |

---

# 🔵 Level 4 — Two Pointer & Sliding Window

Two Pointer and Sliding Window techniques are extremely important for coding interviews.

## Two Pointer

Typical structure:

```cpp
int left = 0;
int right = n - 1;

while(left < right) {
    // process elements

    if(condition)
        left++;
    else
        right--;
}
```

### Important Problems

| # | Problem                   | Difficulty | Status |
| - | ------------------------- | ---------- | ------ |
| 1 | Two Sum in Sorted Array   | Easy       | ⬜      |
| 2 | Remove Duplicates         | Easy       | ⬜      |
| 3 | Move Zeroes               | Easy       | ⬜      |
| 4 | Container With Most Water | Medium     | ⬜      |
| 5 | 3Sum                      | Medium     | ⬜      |
| 6 | 4Sum                      | Medium     | ⬜      |
| 7 | Merge Sorted Arrays       | Easy       | ⬜      |

---

## Sliding Window

Sliding Window is useful when the problem asks about:

* Longest subarray
* Shortest subarray
* Maximum/minimum sum
* Fixed-size windows
* Variable-size windows

### Important Problems

| # | Problem                                           | Difficulty | Status |
| - | ------------------------------------------------- | ---------- | ------ |
| 1 | Maximum Sum Subarray of Size K                    | Easy       | ⬜      |
| 2 | Longest Subarray with Given Condition             | Medium     | ⬜      |
| 3 | Minimum Size Subarray Sum                         | Medium     | ⬜      |
| 4 | Longest Subarray with At Most K Distinct Elements | Medium     | ⬜      |
| 5 | Maximum Consecutive Ones                          | Easy       | ⬜      |

---

# 🟣 Level 5 — Hashing & Prefix Sum

## Hashing

Hashing allows us to store information so that we can perform fast lookups.

Common C++ structures:

```cpp
unordered_map<int, int> mp;
unordered_set<int> st;
```

### Important Problems

| # | Problem                      | Pattern               | Difficulty | Status |
| - | ---------------------------- | --------------------- | ---------- | ------ |
| 1 | Two Sum                      | Hash Map              | Easy       | ⬜      |
| 2 | Count Frequencies            | Hash Map              | Easy       | ⬜      |
| 3 | Longest Subarray with Sum K  | Hash Map + Prefix Sum | Medium     | ⬜      |
| 4 | Subarray Sum Equals K        | Prefix Sum + Hash Map | Medium     | ⬜      |
| 5 | Longest Consecutive Sequence | Hash Set              | Medium     | ⬜      |

---

## Prefix Sum

Prefix sum allows repeated range-sum calculations efficiently.

Example:

```text
Array:
1  2  3  4  5

Prefix:
1  3  6  10  15
```

Formula:

```text
prefix[i] = prefix[i-1] + arr[i]
```

### Important Problems

* Range Sum Query
* Subarray Sum
* Longest Subarray with Sum K
* Subarray Sum Equals K
* Count Subarrays with Given Sum
* Equilibrium Index

---

# 🔴 Level 6 — Binary Search on Arrays

Binary Search is applicable when the search space has a suitable monotonic property, especially in sorted arrays.

Basic implementation:

```cpp
int low = 0;
int high = n - 1;

while(low <= high) {

    int mid = low + (high - low) / 2;

    if(arr[mid] == target)
        return mid;

    else if(arr[mid] < target)
        low = mid + 1;

    else
        high = mid - 1;
}
```

### Important Problems

| #  | Problem                              | Difficulty | Status |
| -- | ------------------------------------ | ---------- | ------ |
| 1  | Binary Search                        | Easy       | ⬜      |
| 2  | Lower Bound                          | Easy       | ⬜      |
| 3  | Upper Bound                          | Easy       | ⬜      |
| 4  | Search Insert Position               | Easy       | ⬜      |
| 5  | First and Last Occurrence            | Medium     | ⬜      |
| 6  | Count Occurrences                    | Medium     | ⬜      |
| 7  | Search in Rotated Sorted Array       | Medium     | ⬜      |
| 8  | Find Minimum in Rotated Sorted Array | Medium     | ⬜      |
| 9  | Find Peak Element                    | Medium     | ⬜      |
| 10 | Single Element in Sorted Array       | Medium     | ⬜      |

---

# 🟤 Level 7 — Advanced Array Problems

These problems combine multiple concepts and are important for higher-level interviews.

| #  | Problem                      | Main Pattern            | Difficulty | Status |
| -- | ---------------------------- | ----------------------- | ---------- | ------ |
| 1  | 3Sum                         | Two Pointer             | Medium     | ⬜      |
| 2  | 4Sum                         | Two Pointer             | Medium     | ⬜      |
| 3  | Trapping Rain Water          | Two Pointer / Prefix    | Hard       | ⬜      |
| 4  | Maximum Product Subarray     | Dynamic Tracking        | Medium     | ⬜      |
| 5  | Merge Intervals              | Sorting                 | Medium     | ⬜      |
| 6  | Merge Two Sorted Arrays      | Two Pointer             | Easy       | ⬜      |
| 7  | Next Permutation             | Array Manipulation      | Medium     | ⬜      |
| 8  | Longest Consecutive Sequence | Hashing                 | Medium     | ⬜      |
| 9  | Count Inversions             | Merge Sort              | Hard       | ⬜      |
| 10 | Reverse Pairs                | Merge Sort              | Hard       | ⬜      |
| 11 | Maximum Points from Cards    | Sliding Window          | Medium     | ⬜      |
| 12 | Subarray with Maximum XOR    | Trie / Bit Manipulation | Hard       | ⬜      |

---

# 🧮 Complexity Reference

| Technique          |    Time Complexity |     Space Complexity |
| ------------------ | -----------------: | -------------------: |
| Simple Traversal   |               O(n) |                 O(1) |
| Linear Search      |               O(n) |                 O(1) |
| Two Pointer        |               O(n) |                 O(1) |
| Hashing            |       O(n) average |                 O(n) |
| Prefix Sum         | O(n) preprocessing |                 O(n) |
| Binary Search      |           O(log n) |                 O(1) |
| Sorting            |         O(n log n) | Depends on algorithm |
| Merge Sort         |         O(n log n) |                 O(n) |
| Kadane's Algorithm |               O(n) |                 O(1) |
| Sliding Window     |               O(n) | Usually O(1) or O(k) |

---

# 🧠 Problem-Solving Patterns

The most important goal of this section is not just solving individual questions.

It is learning to recognize **patterns**.

### Pattern 1 — Simple Traversal

Use when you need to:

* Find maximum
* Find minimum
* Count elements
* Check conditions
* Search for an element

Typical complexity:

```text
Time: O(n)
Space: O(1)
```

---

### Pattern 2 — Two Pointer

Use when:

* Array is sorted
* You need pairs
* You need to remove duplicates
* You need to rearrange elements

Typical complexity:

```text
Time: O(n)
Space: O(1)
```

---

### Pattern 3 — Hashing

Use when:

* You need fast lookup
* You need frequencies
* You need to detect duplicates
* You need to remember previous elements

Typical complexity:

```text
Time: O(n) average
Space: O(n)
```

---

### Pattern 4 — Prefix Sum

Use when:

* The problem involves subarray sums
* You repeatedly need range sums
* You need to find a subarray satisfying a sum condition

---

### Pattern 5 — Sliding Window

Use when the problem asks for:

```text
Longest...
Shortest...
Maximum...
Minimum...
Subarray...
Substring...
```

and the window can be expanded/shrunk systematically.

---

### Pattern 6 — Kadane's Algorithm

Use for:

> Maximum sum of a contiguous subarray.

Core idea:

```cpp
currentSum += arr[i];

currentSum = max(arr[i], currentSum);

maximumSum = max(maximumSum, currentSum);
```

Complexity:

```text
Time: O(n)
Space: O(1)
```

---

# 📂 Recommended Folder Structure

Keep the repository organized by **concept**, not by random question order.

```text
Arrays/
│
├── README.md
│
├── 01_Basics/
│   ├── largest_element.cpp
│   ├── smallest_element.cpp
│   ├── second_largest.cpp
│   ├── second_smallest.cpp
│   ├── check_sorted.cpp
│   └── linear_search.cpp
│
├── 02_Array_Manipulation/
│   ├── reverse_array.cpp
│   ├── left_rotate.cpp
│   ├── rotate_by_k.cpp
│   └── move_zeroes.cpp
│
├── 03_Hashing/
│   ├── frequency_count.cpp
│   ├── two_sum.cpp
│   └── longest_consecutive_sequence.cpp
│
├── 04_Two_Pointer/
│   ├── two_sum_sorted.cpp
│   ├── remove_duplicates.cpp
│   ├── three_sum.cpp
│   └── four_sum.cpp
│
├── 05_Sliding_Window/
│   ├── max_sum_subarray_k.cpp
│   └── longest_subarray.cpp
│
├── 06_Prefix_Sum/
│   ├── prefix_sum.cpp
│   ├── subarray_sum.cpp
│   └── longest_subarray_sum_k.cpp
│
├── 07_Kadane/
│   ├── maximum_subarray.cpp
│   └── maximum_subarray_with_indices.cpp
│
├── 08_Sorting/
│   ├── selection_sort.cpp
│   ├── bubble_sort.cpp
│   ├── insertion_sort.cpp
│   ├── merge_sort.cpp
│   └── quick_sort.cpp
│
├── 09_Binary_Search/
│   ├── binary_search.cpp
│   ├── lower_bound.cpp
│   ├── upper_bound.cpp
│   └── rotated_sorted_array.cpp
│
├── 10_Intervals/
│   ├── merge_intervals.cpp
│   └── insert_interval.cpp
│
├── 11_Matrix/
│   ├── matrix_traversal.cpp
│   ├── rotate_matrix.cpp
│   └── spiral_matrix.cpp
│
└── 12_Advanced/
    ├── trapping_rain_water.cpp
    ├── count_inversions.cpp
    └── reverse_pairs.cpp
```

---

# 📝 How I Document Each Problem

Every `.cpp` file should contain:

1. Problem statement
2. Approach
3. Algorithm
4. Time complexity
5. Space complexity
6. C++ implementation

Example:

```cpp
/*
Problem:
Find the second largest element in an array.

Approach:
Traverse the array once while maintaining:
1. largest
2. secondLargest

Whenever a new largest element is found,
the previous largest becomes second largest.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
```

---

# 🔥 Brute → Better → Optimal Strategy

For important problems, I will not just store one solution.

I will understand the progression:

```text
Brute Force
     ↓
Better Approach
     ↓
Optimal Approach
```

For example:

### Second Largest Element

```text
Brute:
Sort the array
O(n log n)

Better:
Find largest
Then find second largest
O(2n)

Optimal:
Find both in one traversal
O(n)
```

This approach helps develop **optimization and interview problem-solving skills**.

---

# 🎯 Practice Strategy

For every important problem:

### Step 1 — Understand

Read the problem and identify:

* Input
* Output
* Constraints
* Edge cases

### Step 2 — Brute Force

Ask:

> What is the most straightforward solution?

Implement it if necessary.

### Step 3 — Optimize

Ask:

> Can I reduce the time complexity?

Look for:

* Hashing
* Two pointers
* Sliding window
* Prefix sum
* Binary search
* Greedy
* Sorting
* Mathematical observations

### Step 4 — Analyze

Always write:

```text
Time Complexity:
Space Complexity:
```

### Step 5 — Test

Test:

* Normal case
* Minimum input
* Maximum input
* Duplicate values
* Negative values
* Already sorted array
* Reverse sorted array
* All equal values

---

# 📊 Progress Tracker

## Fundamentals

* [ ] Largest Element
* [ ] Smallest Element
* [ ] Second Largest
* [ ] Second Smallest
* [ ] Check Sorted
* [ ] Linear Search
* [ ] Remove Duplicates
* [ ] Reverse Array
* [ ] Rotate Array
* [ ] Move Zeroes

## Hashing

* [ ] Frequency Count
* [ ] Two Sum
* [ ] Longest Consecutive Sequence
* [ ] Longest Subarray with Sum K
* [ ] Subarray Sum Equals K

## Two Pointer

* [ ] Two Sum Sorted
* [ ] Remove Duplicates
* [ ] Move Zeroes
* [ ] 3Sum
* [ ] 4Sum
* [ ] Container With Most Water

## Sliding Window

* [ ] Maximum Sum Subarray of Size K
* [ ] Longest Subarray
* [ ] Minimum Size Subarray
* [ ] Maximum Consecutive Ones

## Kadane

* [ ] Maximum Subarray Sum
* [ ] Maximum Subarray with Indices

## Binary Search

* [ ] Binary Search
* [ ] Lower Bound
* [ ] Upper Bound
* [ ] First & Last Occurrence
* [ ] Search Rotated Array
* [ ] Minimum in Rotated Array
* [ ] Peak Element

## Advanced

* [ ] Next Permutation
* [ ] Merge Intervals
* [ ] Trapping Rain Water
* [ ] Count Inversions
* [ ] Reverse Pairs
* [ ] Maximum Product Subarray

---

# 🏆 Key Learnings

By completing this section, I aim to develop the ability to:

* Convert brute-force solutions into optimal solutions
* Recognize common array patterns
* Choose the correct data structure
* Reduce unnecessary nested loops
* Use hashing effectively
* Apply two-pointer techniques
* Apply sliding-window techniques
* Use prefix sums
* Implement binary search confidently
* Analyze time and space complexity
* Handle edge cases
* Write clean and readable C++ code

---

# 📌 Interview Checklist

Before considering the Array section complete, I should be able to solve problems involving:

```text
✓ Traversal
✓ Searching
✓ Sorting
✓ Min / Max
✓ Second Largest / Smallest
✓ Duplicates
✓ Rotation
✓ Rearrangement
✓ Hashing
✓ Two Pointer
✓ Sliding Window
✓ Prefix Sum
✓ Kadane's Algorithm
✓ Subarrays
✓ Binary Search
✓ Intervals
✓ Matrix
✓ Greedy Array Problems
✓ Advanced Array Patterns
```

---

# 🚀 Goal

The goal of this repository is not to collect solutions.

The goal is to build the ability to:

> **Understand → Identify Pattern → Develop Brute Force → Optimize → Analyze Complexity → Implement Cleanly**

This Array section forms the foundation for advanced DSA topics such as:

* Linked Lists
* Stacks & Queues
* Binary Trees
* Binary Search Trees
* Heaps
* Graphs
* Dynamic Programming
* Greedy Algorithms
* Tries

---

## 📈 Progress

**Current Focus:** Arrays

**Language:** C++

**Primary Practice:** DSA & Coding Interviews

**Approach:** Brute → Better → Optimal

**Status:** 🚧 In Progress

---
