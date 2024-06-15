#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        int min=i;
        for(int j=i+1;j<arr.size();j++) if(arr[j]<arr[min]) min=j;
        if(min!=i) swap(arr[i],arr[min]);
    }
}

void displayArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
}

int main()
{
    vector <int> arr={4,3,5,6,4,324,4};
    cout<<"Before:";
    displayArray(arr);
    selectionSort(arr);
    cout<<"\nAfter:";
    displayArray(arr);
    return 0;
}