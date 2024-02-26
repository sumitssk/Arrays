#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> minimum_flips(vector<bool> &arr)
{
    vector<pair<int,int>> ans;
    int n=arr.size();
    pair<int,int> temp;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                temp.first=i;
            }
            else
            {
                temp.second=i-1;
                ans.push_back(temp);
            }
        }
 
    }
    if(arr[n-1]!=arr[0])
    {
        temp.second=n-1;
        ans.push_back(temp);
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
        vector<bool> arr;
        for(int i=0;i<n;i++)
        {
            bool temp;
            cin>>temp;
            arr.push_back(temp);
        }
        vector<pair<int,int>> ans=minimum_flips(arr);
        for(auto x:ans)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }

    }
    return 0;
}