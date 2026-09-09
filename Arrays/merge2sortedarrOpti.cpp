#include <bits/stdc++.h>
using namespace std;
void merge(long long arr1[], long long arr2[], int n, int m){
    int left = n-1;
    int right = 0;
    while(left >=0 && right < m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else{
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

// leetcode:

        // // Sort only the valid elements of nums1
        // sort(nums1.begin(), nums1.begin() + m);

        // // Sort nums2
        // sort(nums2.begin(), nums2.end());

        // // Put nums2 after the m elements of nums1
        // for (int i = 0; i < n; i++) {
        //     nums1[m + i] = nums2[i];
        // }