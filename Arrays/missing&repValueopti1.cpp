#include <bits/stdc++.h>
using namespace std;

// for single integer

vector<int> findMissingRepeatingNumbers(vector <int> a){
    long long n = a.size();
    // S- Sn
    // S2 - S2n
    long long SN = (n* (n+1))/2;
    long long S2N = (n* (n+1) * (2*n*1))/6;
    long long S= 0, S2 = 0;
    // iterating
     for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;   // x - y
    long long val2 = S2 - S2N; // x^2 - y^2

    val2 = val2 / val1;        // x + y

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}
// 2965
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2].
//  Each integer appears exactly once except a which appears twice and b which is missing. 
// The task is to find the repeating and missing numbers a and b.
// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

// for 2d matrix

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n;

        // Sum of 1 to N
        long long SN = (N * (N + 1)) / 2;

        // Sum of squares of 1 to N
        long long S2N = (N * (N + 1) * (2 * N + 1)) / 6;

        long long S = 0, S2 = 0;

        // Iterating through the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                S += grid[i][j];
                S2 += (long long)grid[i][j] * (long long)grid[i][j];
            }
        }

        // S - SN = x - y
        long long val1 = S - SN;

        // S2 - S2N = x^2 - y^2
        long long val2 = S2 - S2N;

        // x + y
        val2 = val2 / val1;

        // x = (x-y + x+y) / 2
        long long x = (val1 + val2) / 2;

        // y = x - (x-y)
        long long y = x - val1;

        // x = repeated, y = missing
        return {(int)x, (int)y};
    }
};