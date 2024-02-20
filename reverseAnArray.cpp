#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reverseArray(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
}

int main()
{
    int t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the no of el in lists:";
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
            
        }
        reverseArray(arr);
        for(auto x:arr)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
   
    }
    return 0;
}