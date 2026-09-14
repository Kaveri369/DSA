#include <bits/stdc++.h>
using namespace std;

// Merge two sorted parts
void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Compare elements from both halves
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements of left half
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Remaining elements of right half
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Put sorted elements back into original array
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
int countPairs(vector<int> &arr, int low, int mid, int high){
    int right = mid+1;
    int cnt =0;
    for(int i = low;i<=mid; i++){
        while(right<= high && arr[i] > 2*arr[right])
        right++;
        cnt += (right - (mid +1));
    }
    return cnt;
}
// Merge Sort
int mergeSort(vector<int>& arr, int low, int high){
    int cnt = 0;
    if(low >= high)  return cnt;

    int mid = low + (high - low) / 2;
    // Sort left half
    cnt += mergeSort(arr, low, mid);

    // Sort right half
    cnt += mergeSort(arr, mid + 1, high);
    cnt += countPairs(arr, low, mid, high);

    // Merge both sorted halves
    merge(arr, low, mid, high);
    return cnt;
}

int team(vector <int> & skill, int n){
    return mergeSort(skill, 0, n-1);
   
}