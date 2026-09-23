#include <iostream>
using namespace std;

// Function to merge two sorted subarrays
void merge(int arr[], int low, int mid, int high)
{
    int i = low;       // Starting index of left subarray
    int j = mid + 1;   // Starting index of right subarray
    int k = 0;

    int temp[high - low + 1];

    // Compare elements from both subarrays
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from left subarray
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right subarray
    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back into original array
    for (int x = 0; x < k; x++)
    {
        arr[low + x] = temp[x];
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high)
{
    // Base condition
    if (low >= high)
        return;

    // Find middle
    int mid = low + (high - low) / 2;

    // Sort left half
    mergeSort(arr, low, mid);

    // Sort right half
    mergeSort(arr, mid + 1, high);

    // Merge both sorted halves
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {38, 12, 27, 43, 9, 31, 18, 25};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}