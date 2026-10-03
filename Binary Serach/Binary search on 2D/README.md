# 🔍 Binary Search in 2D Matrix

Binary Search can be applied to a **2D matrix** when the elements are sorted in a suitable way.

## 💡 Main Approaches

### 1. Row-wise Binary Search

If **each row is sorted**, perform Binary Search separately on every row.

**Time:** `O(m × log n)`
**Space:** `O(1)`

### 2. Treat Matrix as a 1D Sorted Array

If:

* Each row is sorted
* First element of a row is greater than the last element of the previous row

Then the entire matrix behaves like a sorted 1D array.

For an `m × n` matrix:

```text
low = 0
high = m*n - 1

mid = low + (high-low)/2

row = mid / n
col = mid % n
```

**Time:** `O(log(m × n))`
**Space:** `O(1)`

## 💻 C++ Template

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int low = 0;
    int high = m * n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target)
            return true;

        if (matrix[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}
```

## 🧠 Important Problems

* Search a 2D Matrix
* Search a 2D Matrix II
* Find a Peak Element II
* Median in a Row-Wise Sorted Matrix

## 🎯 Key Trick

For a matrix with `m` rows and `n` columns:

```text
1D index → row = index / n
          col = index % n
```

Think of the matrix as:

```text
[1  3  5]
[7  9  11]
[13 15 17]
```

becoming:

```text
1 3 5 7 9 11 13 15 17
```

Then apply normal Binary Search.
