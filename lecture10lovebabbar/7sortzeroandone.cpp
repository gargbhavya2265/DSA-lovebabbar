#include<iostream>
using namespace std;
int main()
{
    int n,arr[20];
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the array elements consists 1 and 0 only";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<end)
    {
        while(arr[start]==0 && start<end)
        {
            start++;
        }
        while(arr[end]==1 && start<end)
        {
            end--;
        }
        int temp;
        if(arr[start]==1 && arr[end]==0 )
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    cout<<"Sorted array is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}