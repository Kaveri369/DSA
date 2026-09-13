#include <bits/stdc++.h>
using namespace std;


// complete merge sort code to sort the array
int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    int cnt =0;
    // Storing elements in temporary array in sorted manner
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        // right is smaller
        else {
            temp.push_back(arr[right]);
            // simple addition in the merge sort
            cnt += (mid - left +1);
            right++;
        }
    }

    // If elements on the left half are still left
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If elements on the right half are still left
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy elements from temp back to arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt =0;
    if (low >= high)
        return cnt;

    int mid = (low + high) / 2;

    // Sort the left half
     cnt += mergeSort(arr, low, mid);

    // Sort the right half
     cnt += mergeSort(arr, mid + 1, high);

    // Merge the two sorted halves
    cnt += merge(arr, low, mid, high);
    return cnt;
}

// code 
int numberOfInversions(vector<int>&a, int n){
    return mergeSort(a, 0, n-1);
   
}