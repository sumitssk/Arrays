#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &arr)
{
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i-1]>arr[i])return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the el in list:";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
        

    }
    if(sorted(arr))cout<<"Yes"<<"\n";
    else cout<<"No";
    return 0;

}