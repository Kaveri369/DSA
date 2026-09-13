#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector <int> a){
    long long n = a.size();
    int xr = 0;
    for(int i =0; i< n; i++){
        xr = xr ^ a[i];
        xr = xr ^ a[i+1];
    }
    int number = xr & ~(xr - 1);
    int zero = 0;
    int one = 0;

    for(int i =0; i< n; i++){
        // part of 1 club
        if((a[i] & number) != 0){
            one = one ^ a[i];
        }
        else{
            zero = zero ^ a[i];
        }
    }
    for(int i =0; i< n; i++){
        // part of 1 club
        if((i & number) != 0){
            one = one ^ i;
        }
        else{
            zero = zero ^ i;
        }
    }
    int cnt = 0;
    for(int i =0; i<n; i++){
        if(a[i] == zero) cnt++;
    }
    if(cnt == 2) return {zero, one};
    return {one, zero};
}