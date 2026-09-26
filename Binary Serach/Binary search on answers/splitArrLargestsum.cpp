#include <bits/stdc++.h>
using namespace std;

    int countStudents(vector<int>& arr, int pages) {
        int students = 1;
        long long pagesStudent = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (pagesStudent + arr[i] <= pages) {
                pagesStudent += arr[i];
            }
            else {
                students += 1;
                pagesStudent = arr[i];
            }
        }

        return students;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if (k > n)
            return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = (low + high) / 2;

            int students = countStudents(nums, mid);

            if (students > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return low;
    }
int largestSubarraySumMinimized(vector<int> a, int k) {
    return splitArray(a, k);
}
