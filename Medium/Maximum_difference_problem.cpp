#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long Max_diff(vector<int> &arr);

int main()
{
    int t;
    cout<<"Enter the no test cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Eneter the no el in the list:";
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);

        }
        cout<<Max_diff(arr)<<"\n";

    }
    return 0;
}

long long Max_diff(vector<int> &arr)
{
    int n=arr.size();
    long long  ans=LLONG_MIN;
    long long curr_min=arr[0];
    for(int i=1;i<n;i++)
    {
        ans=max(ans,arr[i]-curr_min);
        curr_min=min(curr_min,static_cast<long long> (arr[i]));
        cout<<ans<<" ";
      
    }
    return ans;
}