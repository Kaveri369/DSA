# 🔍 Binary Search on Answer

**Binary Search on Answer (BSOA)** is used when we are not searching for an element, but for the **minimum or maximum possible answer**.

The key idea is to search over a range of possible answers and use a **feasibility function** to decide which half to eliminate.

## 💡 Core Idea

Instead of:

```text
Search → array elements
```

we do:

```text
Search → possible answers
```

### General Pattern

```cpp
int low = minimum_possible_answer;
int high = maximum_possible_answer;

while (low <= high) {
    int mid = low + (high - low) / 2;

    if (isPossible(mid))
        high = mid - 1;   // minimize answer
    else
        low = mid + 1;
}
```

For **maximum answer**, the directions are reversed.

## 🧠 How to Identify BSOA

Look for:

* Minimum possible maximum
* Maximum possible minimum
* Find the smallest/largest value satisfying a condition
* A monotonic **possible / not possible** condition

### Example

**Allocate books / Painter's Partition**

Question:

> What is the minimum possible maximum workload?

Search:

```text
low  = maximum single workload
high = total workload
```

For each `mid`, check:

```text
Can we complete the task if the maximum allowed workload = mid?
```

If **possible** → try smaller.

If **not possible** → increase the answer.

## ⏱️ Complexity

If checking feasibility takes `O(n)`:

**Time:** `O(n × log(range))`
**Space:** `O(1)`

## 🔥 Important Problems

* Koko Eating Bananas
* Capacity To Ship Packages Within D Days
* Allocate Books
* Painter's Partition
* Split Array Largest Sum
* Aggressive Cows
* Minimize Max Distance to Gas Station
* Magnetic Force Between Two Balls
* Smallest Divisor Given a Threshold

## 🎯 Golden Pattern

```text
1. Identify the answer range
2. Write isPossible(mid)
3. Check if the condition is monotonic
4. Binary search the answer
```

> **BS on Answer = Binary Search + Monotonic Feasibility Check**
