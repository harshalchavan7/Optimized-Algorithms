#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array and return the index of the pivot element
int partition(vector<int>& arr, int s, int e)
{
    // Choose the first element as the pivot
    int pivot = arr[s];
    
    // Initialize a count to keep track of elements less than or equal to the pivot
    int count = 0;

    // Loop through elements from s+1 to e and count those less than or equal to the pivot
    for(int i = s + 1; i <= e; i++) if(arr[i] <= pivot) count++;

    // Calculate the index where the pivot should be placed
    int pivotIndex = s + count;

    // Swap the pivot element with its correct position
    swap(arr[pivotIndex], arr[s]);

    // Initialize pointers i and j for the two sub-arrays
    int i = s, j = e;

    // Move elements smaller than the pivot to the left and larger to the right
    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        // Swap elements on both sides of the pivot
        if(i < pivotIndex && j > pivotIndex) swap(arr[i], arr[j]);
    }

    // Return the final index of the pivot
    return pivotIndex;
}

// Recursive function to perform quicksort on the given array
void quickSort(vector<int>& arr, int s, int e)
{
    // Base case: If the sub-array has 0 or 1 elements, it is already sorted
    if(s >= e) return;

    // Partition the array and get the index of the pivot
    int p = partition(arr, s, e);

    // Recursively sort the sub-arrays on both sides of the pivot
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}


int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Original array: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for(int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}