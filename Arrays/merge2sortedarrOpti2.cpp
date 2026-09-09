#include <bits/stdc++.h>
using namespace std;
// striver:

void swapGreater(long long arr1[], long long arr2[], int ind1, int ind2){
    if(arr1[ind1] > arr2[ind2]){
    swap(arr1[ind1], arr2[ind2]);
    }
}
void merge(long long arr1[], long long arr2[], int n, int m){
    int len =(n+m);
    int gap =(len/2)+(len % 2);
    while(gap > 0){
        int left = 0;
        int right = left + gap;
        while(right < len){
            // pointers on arr1 and arr2
            if(left < n && right >= n){
                swapGreater(arr1, arr2, left ,right-n);
            }
            // arr2 && arr2
            else if(left >= n){
                swapGreater(arr2, arr2, left-n ,right-n);
            }
            else {
                swapGreater(arr1, arr1, left ,right);
            }
            left++, right++;
        }
        if(gap == 1) break;
        gap = (gap/2)+(gap % 2);
    }
}

// leetcode:
class Solution {
private:

    void swapGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2)
    {
        if(nums1[ind1] > nums2[ind2])
        {
            swap(nums1[ind1], nums2[ind2]);
        }
    }

public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int len = m + n;

        int gap = (len / 2) + (len % 2);

        while(gap > 0)
        {
            int left = 0;
            int right = left + gap;

            while(right < len)
            {
                // nums1 && nums2
                if(left < m && right >= m)
                {
                    swapGreater(nums1, nums2, left, right - m);
                }

                // nums2 && nums2
                else if(left >= m)
                {
                    swapGreater(nums2, nums2, left - m, right - m);
                }

                // nums1 && nums1
                else
                {
                    swapGreater(nums1, nums1, left, right);
                }

                left++;
                right++;
            }

            if(gap == 1)
                break;

            gap = (gap / 2) + (gap % 2);
        }

        // NOW copy nums2 into the empty part of nums1
        for(int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
    }
};