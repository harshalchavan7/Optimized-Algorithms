#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector <int> arr,int key)
{
    int flag=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==key) 
        {
            flag++;
            cout<<"Found!";
        }
    }
    if(flag==0) cout<<"Not found";
}

int main()
{
    vector <int> arr = {3,4,5,6,7,1,2};
    int key=1;
    linearSearch(arr, key);
    return 0;
}