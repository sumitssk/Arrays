#include<iostream>
#include<vector>

using namespace std;

int SecondLargestElement(vector<int> &arr)
{
    int maxEl=0;
    int SecMax=-1;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>arr[maxEl])
        {
            
            SecMax=maxEl;
            maxEl=i;
        }
        else if((SecMax==-1 || arr[i]>arr[SecMax]) && arr[i]!=arr[maxEl])SecMax=i;
    }
    return SecMax;
}

int main()
{
    int n;
    cout<<"Enter the no of element in list:";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Second largest el index in array:"<<SecondLargestElement(arr);
    return 0;
}
