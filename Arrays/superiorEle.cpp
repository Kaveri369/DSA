#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// asking to return a sorted array
vector<int> superiorElements(vector<int> &a){
    // we are using spce just to return the ans 0(n)
    vector<int> ans;
    int maxi =INT_MIN;
    int n = a.size();
    // back iteration
    // o(n)
    for(int i= n-1; i>=0; i--){
        if (a[i] >maxi){
            ans.push_back(a[i]);
        }
        // keep track of the right max
        maxi = max(maxi, a[i]);
    }
    // at worst case:-0(n log n)
    sort(ans.begin(), ans.end());
    return ans;

}