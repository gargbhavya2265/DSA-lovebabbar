#include<iostream>
using namespace std;
int getpivotindex(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        mid=start+(end-start)/2;
       
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return start;
}
int main()
{
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[20];
    cout<<"Enter the list of elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pivotindex=getpivotindex(arr,n);
    cout<<"pivot element index is:"<<pivotindex<<endl;
}