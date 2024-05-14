#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++) for(int j=i+1;j<arr.size();j++) if(arr[i]>arr[j]) swap(arr[i],arr[j]);
}

void displayArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
}

int main()
{
    vector<int> arr={5,67,89,8,5,2,4};
    cout<<"Before:";
    displayArray(arr);
    bubbleSort(arr);
    cout<<"\nAfter:";
    displayArray(arr);
    return 0;
}