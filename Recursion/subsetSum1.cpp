#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(int ind, vector<int>& arr, vector<int>& ds,
              vector<vector<int>>& ans) {

        if(ind == arr.size()) {
            ans.push_back(ds);
            return;
        }

        // Pick the element
        ds.push_back(arr[ind]);
        func(ind + 1, arr, ds, ans);

        ds.pop_back();

        // Do not pick the element
        func(ind + 1, arr, ds, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        func(0, nums, ds, ans);

        return ans;
    }
};