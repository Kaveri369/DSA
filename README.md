# Sorting Algorithms

> A structured collection of fundamental sorting algorithms implemented in C++, with complexity analysis, core ideas, and important DSA concepts.

---

##  Overview

Sorting is the process of arranging elements in a specific order, usually ascending or descending.

Sorting is one of the most important foundations of DSA because many advanced techniques and problems become easier after sorting.

This section covers:

- Basic comparison-based sorting
- Divide and conquer sorting
- Heap-based sorting
- Non-comparison sorting
- Time and space complexity
- Stability and in-place sorting
- When to use different sorting techniques

---

##  Time & Space Complexity

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable | In-Place |
|---|---:|---:|---:|---:|:---:|:---:|
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ | ✅ |
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ | ✅ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ | ✅ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ | ❌ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n)* | ❌ | ✅ |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | ❌ | ✅ |
| Counting Sort | O(n + k) | O(n + k) | O(n + k) | O(n + k) | ✅ | ❌ |
| Bucket Sort | O(n + k) | O(n + k) | O(n²) | O(n + k) | Depends | ❌ |
| Radix Sort | O(d(n + k)) | O(d(n + k)) | O(d(n + k)) | O(n + k) | ✅ | ❌ |

> `*` Quick Sort uses O(log n) average recursion stack space, but can reach O(n) in the worst case.

---

##  Implementations

| File | Algorithm | Main Concept |
|---|---|---|
| `Selection-Sort.cpp` | Selection Sort | Selecting minimum element |
| `Bubble-Sort.cpp` | Bubble Sort | Adjacent comparisons |
| `Insertion-Sort.cpp` | Insertion Sort | Building a sorted portion |
| `Merge-Sort.cpp` | Merge Sort | Divide and conquer |
| `Quick-Sort.cpp` | Quick Sort | Partitioning |
| `Heap-Sort.cpp` | Heap Sort | Heap + Heapify |
| `Counting-Sort.cpp` | Counting Sort | Frequency counting |
| `Radix-Sort.cpp` | Radix Sort | Digit-by-digit sorting |

---

#  Core Concepts

## 1. Comparison-Based Sorting

Algorithms that determine the order of elements by comparing them.

Examples:

- Selection Sort
- Bubble Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

For general comparison-based sorting, the lower bound is:

**Ω(n log n)**

---

## 2. Non-Comparison Sorting

These algorithms do not primarily compare elements with each other.

Examples:

- Counting Sort
- Radix Sort

They can achieve better than O(n log n) under specific constraints.

---

## 3. Stable Sorting

A sorting algorithm is **stable** if equal elements maintain their original relative order.

### Stable

- Bubble Sort
- Insertion Sort
- Merge Sort
- Counting Sort
- Radix Sort

### Usually Unstable

- Selection Sort
- Quick Sort
- Heap Sort

---

## 4. In-Place Sorting

An in-place algorithm uses very little additional memory apart from the input array.

Examples:

- Selection Sort
- Bubble Sort
- Insertion Sort
- Heap Sort
- Quick Sort (excluding recursion stack)

Merge Sort generally requires additional O(n) memory for arrays.

---

#  Important Algorithm Ideas

### Selection Sort

Repeatedly find the minimum element from the unsorted portion and place it at the correct position.

**Key idea:**

`Find minimum → Swap`

---

### Bubble Sort

Repeatedly compare adjacent elements and move the larger element toward the end.

**Key idea:**

`Compare adjacent → Swap if needed`

Optimized Bubble Sort can achieve **O(n)** on an already sorted array.

---

### Insertion Sort

Build the sorted portion of the array one element at a time.

**Key idea:**

`Pick element → Shift larger elements → Insert`

Particularly useful for **nearly sorted data**.

---

### Merge Sort

Uses the **divide and conquer** strategy.

**Steps:**

1. Divide the array
2. Recursively sort both halves
3. Merge the sorted halves

**Complexity:**

`O(n log n)`

---

### Quick Sort

Select a pivot and partition the array around it.

**Steps:**

1. Choose pivot
2. Partition
3. Recursively sort left part
4. Recursively sort right part

Average:

`O(n log n)`

Worst:

`O(n²)`

---

### Heap Sort

Uses a **Binary Heap**.

**Steps:**

1. Build a Max Heap
2. Move the maximum element to the end
3. Reduce heap size
4. Heapify
5. Repeat

Time:

`O(n log n)`

Build Heap:

`O(n)`

---

### Counting Sort

Uses a frequency/count array instead of comparing elements.

Works well when the range of values `k` is reasonably small.

Time:

`O(n + k)`

---

### Radix Sort

Sorts numbers digit by digit.

Usually uses a **stable Counting Sort** as the internal sorting method.

Time:

`O(d(n + k))`

Where:

- `d` = number of digits
- `n` = number of elements
- `k` = range of each digit

---

# 🎯 When to Use What?

| Situation | Recommended |
|---|---|
| Very small/simple input | Insertion Sort |
| Nearly sorted data | Insertion Sort |
| Guaranteed O(n log n) | Merge Sort / Heap Sort |
| Fast average-case sorting | Quick Sort |
| Need stable sorting | Merge Sort |
| Small integer range | Counting Sort |
| Fixed-length integers/digits | Radix Sort |
| Need O(1) auxiliary space | Heap Sort |

---

#  Comparison-Based vs Non-Comparison

```text
                    Sorting
                       │
          ┌────────────┴────────────┐
          │                         │
   Comparison-Based          Non-Comparison
          │                         │
   ┌──────┼────────┐          ┌─────┴─────┐______
   │      │        │          │           │      |
Selection Bubble Insertion  Counting    Radix     Bucket
   │
   ├── Merge
   ├── Quick
   └── Heap
