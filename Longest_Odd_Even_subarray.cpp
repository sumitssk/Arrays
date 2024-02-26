#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int longest_odd_even_len(vector<int> &arr)
{
    int n=arr.size();
    int len=1;
    int curr=1;

    for(int i=1;i<n;i++)
    {
       if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
       {
         curr++;
         len=max(len,curr);
       }
       else curr=1;
    }
    return len;
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
        cout<<longest_odd_even_len(arr)<<"\n";

    }
    return 0;
}