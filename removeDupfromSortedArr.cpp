#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int n=arr.size();
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}



int main()
{
    int t;
    cout<<"Enter the no Of test cases:";
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
        int n1=removeDuplicates(arr);
        for(int i=0;i<n1;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<"\n";
       
    }
     return 0;
}