#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> leader_in_an_arr(vector<int> &arr);

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
        vector<int> ans=leader_in_an_arr(arr);
        for(auto x:ans)
        {
            cout<<x<<" ";

        }
        cout<<"\n";
    }
    return 0;
}

vector<int> leader_in_an_arr(vector<int> &arr)
{
    int n=arr.size();
    vector<int> ans;
    int leader=0;
    if(arr.empty()!=true)
    {
        ans.push_back(arr[n-1]);
        leader=arr[n-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            ans.push_back(arr[i]);
            leader=arr[i];
        }
    }
    return ans;
}