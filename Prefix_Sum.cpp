#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

vector<int> preprocessorArr(vector<int> &arr)
{
    vector<int> ans;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        ans.push_back(sum);
    }
    return ans;
}

int getSum(vector<int> &preSumArr,int s,int e)
{
     if(s==0)return preSumArr[e];
     else return preSumArr[e]-preSumArr[s-1];
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
        int k;
        cout<<"Enter the sum:";
        cin>>k;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int> preSumArr=preprocessorArr (arr);
        cout<<getSum(preSumArr,1,5)<<"\n";


    }
    return 0;
}