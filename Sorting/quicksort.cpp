#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   // Choose last element as pivot

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than pivot
        if (arr[j] < pivot)
        {
            i++;

            // Swap arr[i] and arr[j]
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot at its correct position
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    // Base condition
    if (low >= high)
        return;

    // Partition the array
    int pivotIndex = partition(arr, low, high);

    // Sort left part
    quickSort(arr, low, pivotIndex - 1);

    // Sort right part
    quickSort(arr, pivotIndex + 1, high);
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

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    cout << "\nSorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}