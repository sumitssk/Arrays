#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int Maximum_ones_length(vector<int> &arr)
{
    int ans=0,count=0,n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=1)
        {
            ans=max(ans,count);
            count=0;
        }
        else count++;
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
        cout<<Maximum_ones_length(arr)<<"\n";

    }
    return 0;
}