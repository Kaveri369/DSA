#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/ 2;
        // maybe an answer
        if(arr[mid] >= x){
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
int upperBound(vector<int> arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/ 2;
        // maybe an answer
        if(arr[mid] > x){
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k) return{-1, -1};
    return {lb, upperBound(arr, n, k) -1};
}