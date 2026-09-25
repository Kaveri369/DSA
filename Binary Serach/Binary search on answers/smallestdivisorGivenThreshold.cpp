#include <bits/stdc++.h>
using namespace std;

int sumByD(vector<int>& arr, int div) {
    int sum = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        sum = sum + ceil((double)(arr[i]) / (double)(div));
    }

    return sum;
}

int smallestDivisor(vector<int>& arr, int limit , int n)
{
    // if there is no divisor just return -1. and n is minimum sum u can have.
    if(n > limit) return -1;

    int low = 1, high = *max_element(arr.begin(), arr.end());

    while(low <= high) {
        int mid = (low + high) / 2;

        if(sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}