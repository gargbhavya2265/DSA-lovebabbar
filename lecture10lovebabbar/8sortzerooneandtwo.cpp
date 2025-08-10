#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,arr[20];
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the array elements consists 0,1 and 2 only";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    int mid=0;

    while(mid<=end)
    {
        int temp;
        if(arr[mid]==0)
        {
            temp=arr[start];
            arr[start]=arr[mid];
            arr[mid]=temp;
            start++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            temp=arr[mid];
            arr[mid]=arr[end];
            arr[end]=temp;
            end--;
        }
    }
     printArray(arr,n);
}