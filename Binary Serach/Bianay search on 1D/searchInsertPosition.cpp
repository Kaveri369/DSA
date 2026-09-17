#include <bits/stdc++.h>
using namespace std;
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
         int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/ 2;
        // maybe an answer
        if(nums[mid] >= target){
            ans = mid;
            // look for more small index on left
            high = mid-1;
        }
        else {
            // look on the right
            low = mid + 1; 
        }
    }
    return ans;
    }
