#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void push_zero_to_the_end(vector<int> &arr)
{
    int j=-1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)return ;
    for(int i=j;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
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
        push_zero_to_the_end(arr);
        for(auto x:arr)
        {
            cout<<x<<" ";

        }
        cout<<"\n";
    }
    return 0;
}