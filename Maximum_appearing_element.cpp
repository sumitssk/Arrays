#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

int MaximumAppearingel(vector<int> &leftArr,vector<int> &rightArr)
{
    int n=leftArr.size();
    int freq[102]={0};
    for(int i=0;i<n;i++)
    {
        freq[leftArr[i]]++;
        freq[rightArr[i]+1]--;

    }
    int res=0;
    for(int i=1;i<102;i++)
    {
        freq[i]=freq[i]+freq[i-1];
        if(freq[i]>freq[res])
        {
            res=i;
        }
    }
    return res;
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
        vector<int> leftArr,rightArr;
        for(int i=0;i<n;i++)
        {
            int left,right;
            cin>>left;
            cin>>right;
            leftArr.push_back(left);
            rightArr.push_back(right);

        }
        cout<<MaximumAppearingel(leftArr,rightArr)<<"\n";
        


    }
    return 0;
}