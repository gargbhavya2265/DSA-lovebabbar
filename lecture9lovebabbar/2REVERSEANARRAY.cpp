#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[20];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
   int start=1;
   int end=n;
   int temp;
   while(start<end)
   {
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
   }
   cout<<"After Swapping the array is:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}