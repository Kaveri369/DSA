#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;

        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        return el;
    }
