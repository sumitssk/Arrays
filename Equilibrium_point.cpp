#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int Equilibriam_point(vector<int> &arr)
{
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<"\n";
    int leftSum=0;
    for(int i=0;i<n;i++)
    {
       
        int rightSum=sum-(leftSum+arr[i]);
        if(leftSum==rightSum)
        {
            return i;
        }
        leftSum+=arr[i];
        
    }
    return -1;

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
        cout<<Equilibriam_point(arr)<<"\n";
        


    }
    return 0;
}