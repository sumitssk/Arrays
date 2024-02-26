#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int KadaneMaxiSum(vector<int> &arr)
{
    int n=arr.size();
    int res=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int maxCircularSum(vector<int> &arr)
{
    int n=arr.size();
    int maxSubArr=KadaneMaxiSum(arr);
    if(maxSubArr<0)return maxSubArr;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
       arr[i]=-arr[i];
    }
    int cirMaxSum=sum+KadaneMaxiSum(arr);
    return max(cirMaxSum,maxSubArr);
    
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
        cout<<maxCircularSum(arr)<<"\n";

    }
    return 0;
}