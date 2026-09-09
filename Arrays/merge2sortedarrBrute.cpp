#include<bits/stdc++.h>
using namespace std;
void merge(long long arr1[],long long arr2[], int n, int m){
    long long arr3[n+m];
    int left = 0;
    int right = 0;
    int index = 0;
    while(left < n && right <m){
        if(arr1[left] <= arr2[right]){
            arr3[index] = arr1[left];
            left++, index++;
        }
        else{
            arr3[index] = arr1[right];
            right++, index++;
        }
    }
    // if there are ele left in the arr1
    while(left <n){
        arr3[index++] = arr1[left++];
    }
    // if there are ele left in the arr2
    while(right <m){
        arr3[index++] = arr2[right++];
    }
    // now placing back al the ele from arr3
    for(int i =0; i<n; i++){
        if(i<n) arr1[i] = arr3[i];
        else arr2[i-n] = arr3[i];
    }
}