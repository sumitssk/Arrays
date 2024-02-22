#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> frequencies_in_sorted_arr(const vector<int> &arr)
{
      int n=arr.size();
      vector<pair<int,int>> ans;
      int count=1;
      for(int i=1;i<n;i++)
      {
         if(arr[i]!=arr[i-1])
         {
            ans.push_back({arr[i-1],count});
            count=1;
         }
         else
         {
            count++;
         }
      }
      ans.push_back({arr[n-1],count});
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
        vector<pair<int,int>> ans=frequencies_in_sorted_arr(arr);
        for(auto x:ans)
        {
            cout<<x.first<<" "<<x.second<<"\n";
        }

    }
    return 0;
}