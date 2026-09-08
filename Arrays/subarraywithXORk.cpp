#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int subarrayWithSumK(vector <int> a, int k){
    int xr =0;
    map<int, int> mpp;
    mpp[xr]++; 
    int cnt =0;
    for(int i=0; i<a.size(); i++){
        xr = xr ^ a[i];
        //  k
        int x = xr ^ k;
        cnt += mpp[x];
    }
    return cnt;
}