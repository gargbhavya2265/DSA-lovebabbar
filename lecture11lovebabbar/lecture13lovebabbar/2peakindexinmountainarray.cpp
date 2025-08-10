#include<iostream>
using namespace std;
int peakmountain(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
   
    while(s<e)
    {
        mid=(s+e)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
           
        }
        else{
            e=mid;
            
        }
    }
    return s;
}
int main()
{
    int n;
    int arr[50];
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   int ans= peakmountain(arr,n);
   cout<<"peak element index is: "<<ans;
}