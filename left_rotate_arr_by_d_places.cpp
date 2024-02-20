#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void left_rotate_arr_by_d_places(vector<int> &arr,int d)
{
    int n=arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    
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
        int d;
        cout<<"Enter the no of el to move left:";
        cin>>d;
        left_rotate_arr_by_d_places(arr,d);
        for(auto x:arr)
        {
            cout<<x<<" ";

        }
        cout<<"\n";
    }
    return 0;
}