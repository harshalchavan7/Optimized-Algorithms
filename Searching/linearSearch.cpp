#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector <int> arr,int key)
{
    for(int i=0;i<arr.size();i++) if(arr[i]==key) return true;
    return false;
}

int main()
{
    vector <int> arr = {3,4,5,6,7,1,2};
    if(linearSearch(arr, 1)) cout<<"Found!";
    else cout<<"Not found";
    return 0;
}