#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int> arr, int key)
{
    vector<int> sortedArr=arr;
    sort(sortedArr.begin(),sortedArr.end());
    int low=0, high=sortedArr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(sortedArr[mid]<key) low=mid+1;
        else if(sortedArr[mid]>key) high=mid-1;
        else return true;
    }
    return false;
}

int main()
{
    vector<int> arr={71,65,31,4354,556,6234,756,8089,924};
    if(binarySearch(arr,381)) cout<<"Found!";
    else cout<<"Not found.";
    return 0;
}