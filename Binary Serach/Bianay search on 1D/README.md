# 🔍 Binary Search in 1D

Binary Search is an efficient searching algorithm used to find an element in a **sorted array**.

## 💡 Idea

Instead of checking every element one by one, Binary Search repeatedly divides the search space into half.

### Algorithm

1. Set `low = 0` and `high = n - 1`.
2. Calculate `mid = low + (high - low) / 2`.
3. If `arr[mid] == target` → return `mid`.
4. If `arr[mid] < target` → search in the right half.
5. If `arr[mid] > target` → search in the left half.
6. Repeat until `low > high`.

## ⏱️ Complexity

* **Time:** `O(log n)`
* **Space:** `O(1)` for iterative implementation

## 🧠 Important Patterns

* Basic Binary Search
* Lower Bound
* Upper Bound
* First/Last Occurrence
* Search Insert Position
* Floor & Ceil
* Count Occurrences
* Search in Rotated Sorted Array
* Find Minimum in Rotated Sorted Array
* Single Element in Sorted Array
* Peak Element

## 💻 Basic C++ Template

```cpp
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
```

## 🎯 Key Rule

> **Binary Search works when you can eliminate half of the search space at every step.**

Always identify:
**Search Space → Condition → Eliminate Half → Answer**
