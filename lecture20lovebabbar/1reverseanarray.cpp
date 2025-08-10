#include<iostream>
using namespace std;
int main()
{
    int n,arr[20];
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int position;
    cout<<"Enter the position after which you want to reversed the array"<<endl;
    cin>>position;
    int start=position+1;
    int end=n-1;
    int temp;
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"reversed array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}