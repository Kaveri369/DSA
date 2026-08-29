#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long maxSubArray(vector<int>& nums  ) {
       int n = nums.size();
       long long sum =0, maxi= LONG_MIN;
       for (int i=0; i<n; i++){
        sum += nums[i];
            if (sum> maxi){
               maxi =sum;
            }
            if (sum <0){
            sum =0;
            }
            // if question state including empty subarray
            // just re initialize it and return o.
            if (maxi >0){
                return 0;
            }
       }
      return maxi;  
    }