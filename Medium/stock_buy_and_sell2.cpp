#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

long long maximum_profit(vector<int> &arr)
{
    int n=arr.size();
    long long profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit+=arr[i]-arr[i-1];
        }

    }
    return profit;
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
        cout<<maximum_profit(arr)<<"\n";

    }
    return 0;
}