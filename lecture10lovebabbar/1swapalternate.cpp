#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=1;
    int temp;
    while(start<n && end<n)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start+=2;
        end+=2;
    }
    cout<<"After alternate Swapping the array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}