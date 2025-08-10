#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int searchkey)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(searchkey==arr[mid])
       {
           return mid;
       }
       else if(searchkey<arr[mid])
       {
           end=mid-1;
       }
       else{
           start=mid+1;
       }
       int mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[30];
    
    cout<<"enter the list of elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int searchkey;
    cout<<"Enter the value to be seaarched";
    cin>>searchkey;
   int value= binarysearch(arr,n,searchkey);
  
  
}
