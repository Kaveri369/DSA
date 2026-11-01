#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> subsets(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;

        for (int num = 0; num <= (1 << n) - 1; num++) {

            vector<int> sub;

            for (int i = 0; i < n; i++) {

                if (num & (1 << i)) {
                    sub.push_back(nums[i]);
                }
            }

            ans.push_back(sub);
        }

        return ans;
    }

