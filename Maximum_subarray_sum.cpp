#include<iostream> 
#include<bits/stdc++.h>

using namespace std;
//Kadan's Algorithm
int Maximum_subarray_sum(vector<int> &arr,int n)
{
    int maxEnding=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
pair<int,int> Maximum_subarray_sum(vector<int> &arr)
{
    int maxi=INT_MIN;
    int n=arr.size();
    int sum=0;
    int start_indx=0,end_indx=-1;
    pair<int,int> ans;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)start_indx=i;
        if(sum>maxi)
        {
            maxi=sum;
            end_indx=i;
           
        }
        if(sum<0)sum=0;
        
    }
    return {start_indx,end_indx};
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
        cout<<Maximum_subarray_sum(arr,n)<<"\n";
        pair<int,int> ans=Maximum_subarray_sum(arr);
        cout<<ans.first<<" "<<ans.second<<" \n";

    }
    return 0;
}