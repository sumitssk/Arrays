#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

bool Subarray_with_given_sum(vector<int> &arr,int k)
{
    int sum=0;
    int start=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        while(sum>k)
        {
            sum-=arr[start];
            start++;
        }
        if(sum==k)return true;
    }
    return false;
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
        int k;
        cout<<"Enter the sum:";
        cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        if(Subarray_with_given_sum(arr,k))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";


    }
    return 0;
}