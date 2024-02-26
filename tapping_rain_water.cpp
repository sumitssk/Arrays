#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int getWater(vector<int> &arr,int n)
{

    int ans=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
        rmax[n-i-1]=max(arr[n-i-1],rmax[n-i]);
    }
    for(int i=1;i<n-1;i++)
    {
        ans+=min(lmax[i],rmax[i])-arr[i];
    }
    return ans;
}

int getWater(vector<int> &arr)
{
    int n=arr.size();
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)lmax=max(lmax,arr[j]);
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)rmax=max(rmax,arr[j]);
        ans+=min(lmax,rmax)-arr[i];

    }
    return ans;
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
        cout<<getWater(arr,n)<<"\n";

    }
    return 0;
}