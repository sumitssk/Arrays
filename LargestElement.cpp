#include<iostream>
#include<vector>

using namespace std;

int LargestElement(vector<int> &arr)
{
    int maxEl=INT_MIN;
    for(int x:arr)
    {
        if(x>maxEl)maxEl=x;
    }
    return maxEl;
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
    cout<<"largest el in array:"<<LargestElement(arr);
    return 0;
}
