#include <iostream>
#include <vector>
using namespace std;

void merge(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid;
    vector<int> leftArray(n1), rightArray(n2);
    for (int i = 0; i < n1; ++i) leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; ++j) rightArray[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            ++i;
        }
        else
        {
            arr[k] = rightArray[j];
            ++j;
        }
        ++k;
    }
    while (i < n1)
    {
        arr[k] = leftArray[i];
        ++i;
        ++k;
    }
    while (j < n2)
    {
        arr[k] = rightArray[j];
        ++j;
        ++k;
    }
}
void mergeSort(std::vector<int>& arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void printArray(const std::vector<int>& arr)
{
    for (int i : arr) cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Given array is: ";
    printArray(arr);
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array is: ";
    printArray(arr);
    return 0;
}