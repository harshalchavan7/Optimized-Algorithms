#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> arr, int key)
{

    int low=0, high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]<key) low=mid+1;
        else if(arr[mid]>key) high=mid-1;
        else return true;
    }
    return false;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    if(binarySearch(arr,3)) cout<<"Found!";
    else cout<<"Not found";
    return 0;
}