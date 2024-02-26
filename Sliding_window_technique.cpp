#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int MaximumSumOfKel(vector<int> &arr,int k)
{
    int n=arr.size();
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    int maxi_sum=INT_MIN;
    for(int i=k;i<n;i++)
    {
        sum=sum+(arr[i]-arr[i-k]);
        maxi_sum=max(sum,maxi_sum);
    }
    return maxi_sum;
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
        cout<<"Enter the el in sliding window:";
        cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        cout<<MaximumSumOfKel(arr,k)<<"\n";


    }
    return 0;
}