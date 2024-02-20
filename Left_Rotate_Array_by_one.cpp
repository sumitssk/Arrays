#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void left_rotate_arr_by_one(vector<int> &arr)
{
    int n=arr.size();
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}


int main()
{
    int t;
    cout<<"Enter the no of test cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the no of el in the list:";
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        
        }
        left_rotate_arr_by_one(arr);
        for(auto x:arr)
        {
            cout<<x<<" ";

        }
        cout<<"\n";
    }
    return 0;
}